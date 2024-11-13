void __fastcall BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct System_Int32_array *v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  il2cpp_array_size_t max_length; // w9
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  BattleLogicFunctionProcess_AddStateProcess_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  BattleLogicFunctionProcess_AddStateShortProcess_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  BattleLogicFunctionProcess_TransformServantProcess_o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v74; // x21
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7

  if ( (byte_4B18DC2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__,
      v14,
      v15);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
      v16,
      v17);
    sub_1BCA7E0(&int___TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo, v20, v21);
    sub_1BCA7E0(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo, v22, v23);
    sub_1BCA7E0(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo, v24, v25);
    byte_4B18DC2 = 1;
  }
  v26 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v26 )
    goto LABEL_8;
  max_length = v26->max_length;
  if ( !max_length || (v26->m_Items[1] = 701601, max_length == 1) )
    sub_1BCAA44(v26, v26);
  v26->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v26;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tamamocatTreasureDeviceIds,
    (int64_t)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo,
                                                                   v35,
                                                                   v36,
                                                                   v37);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v38,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v42 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1BCAA2C(
                                                                    BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo,
                                                                    v39,
                                                                    v40,
                                                                    v41);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v42, 0LL);
  if ( !v38 )
LABEL_8:
    sub_1BCAA3C(v26, v27);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    0,
    (Il2CppObject *)v42,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v46 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1BCAA2C(
                                                          BattleLogicFunctionProcess_AddStateProcess_TypeInfo,
                                                          v43,
                                                          v44,
                                                          v45);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v46, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    1,
    (Il2CppObject *)v46,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v50 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1BCAA2C(
                                                               BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo,
                                                               v47,
                                                               v48,
                                                               v49);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v50, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    16,
    (Il2CppObject *)v50,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v54 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1BCAA2C(
                                                                     BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo,
                                                                     v51,
                                                                     v52,
                                                                     v53);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v54, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    61,
    (Il2CppObject *)v54,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v58 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1BCAA2C(
                                                                  BattleLogicFunctionProcess_TransformServantProcess_TypeInfo,
                                                                  v55,
                                                                  v56,
                                                                  v57);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v58, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    109,
    (Il2CppObject *)v58,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v62 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1BCAA2C(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v59,
                                                                     v60,
                                                                     v61);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v62, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    29,
    (Il2CppObject *)v62,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v66 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1BCAA2C(
                                                                     BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo,
                                                                     v63,
                                                                     v64,
                                                                     v65);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v66, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    128,
    (Il2CppObject *)v66,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v70 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1BCAA2C(
                                                                BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo,
                                                                v67,
                                                                v68,
                                                                v69);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v70, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    130,
    (Il2CppObject *)v70,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v74 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1BCAA2C(
                                                                       BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo,
                                                                       v71,
                                                                       v72,
                                                                       v73);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v74, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v38,
    131,
    (Il2CppObject *)v74,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dicFuncProcess, (int64_t)v38, v75, v76, v77, v78, v79, v80);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_T__o *v30; // x25
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v35; // x9
  DataVals_o *v36; // x26
  const MethodInfo *v37; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v39; // x25
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x25
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x27
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x6
  int32_t v60; // w27
  BattleActionData_o *v61; // x0
  int32_t v62; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v65; // x7
  BattleActionData_o *NoEffectObject; // x0
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  BattleLogicFunction_o *v72; // [xsp+8h] [xbp-78h]
  unsigned __int64 v73; // [xsp+10h] [xbp-70h]
  int32_t diffNp; // [xsp+1Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4B18DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, mainAction, funcTarget);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v11,
      v12);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v13,
      v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v19, v20);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v21, v22);
    byte_4B18DA4 = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v26 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, mainAction, funcTarget, result);
  BattleActionData___ctor(v26, 0LL);
  v30 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  v27,
                                                  v28,
                                                  v29);
  System_Collections_Generic_List_Int32Enum____ctor(
    v30,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v30 )
    goto LABEL_65;
  items = v30->fields._items;
  v32 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v30->fields._version;
  if ( !items )
    goto LABEL_65;
  size = v30->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      8,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v30->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 8;
  }
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v30,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v35 = 0LL;
    v72 = this;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)logic )
        sub_1BCAA44(this, mainAction);
      v36 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v35);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v73 = v35;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v36,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v8,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v36,
                                        v37);
      if ( !this )
        break;
      klass = this->klass;
      v39 = this;
      v40 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_22;
        }
        v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v42 = sub_1C1C7C0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v44 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
      if ( !v44 )
        sub_1BCAA3C(0LL, v43);
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
              goto LABEL_29;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_29:
          v48 = sub_1C1C7C0(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
          break;
        v49 = *(_QWORD *)v44;
        v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v51 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v50;
            v51 += 4;
            if ( !v50 )
              goto LABEL_36;
          }
          v52 = v49 + 16LL * *v51 + 312;
        }
        else
        {
LABEL_36:
          v52 = sub_1C1C7C0(
                  v44,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
        v55 = v53;
        if ( !v53 )
          sub_1BCAA3C(0LL, v54);
        v56 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v53 + 408LL))(
                v53,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v53 + 416LL));
        if ( (v56 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1BCAA3C(v56, v57);
          v60 = *(_DWORD *)(v55 + 32);
          v61 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v58, v60, v36, &diffNp, v59);
          v62 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v61 )
            {
              if ( !v36 )
                sub_1BCAA3C(v61, v61);
              if ( !procArg_k__BackingField )
                sub_1BCAA3C(v61, v61);
              funcIndex = v36->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v8,
                                 v60,
                                 funcIndex,
                                 v36,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v65);
              if ( !v26 )
                sub_1BCAA3C(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v26, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v26 )
              sub_1BCAA3C(v61, v61);
            BattleActionData__addAction(v26, v61, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v62, 0LL);
          }
        }
      }
      v67 = *(_QWORD *)v44;
      v68 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
        {
          --v68;
          v69 += 4;
          if ( !v68 )
            goto LABEL_53;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_53:
        v70 = sub_1C1C7C0(v44, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v44, *(_QWORD *)(v70 + 8));
      this = v72;
      LODWORD(logic) = v72->fields.logic;
      v35 = v73 + 1;
      if ( (__int64)(v73 + 1) >= (int)logic )
        return v26;
    }
LABEL_65:
    sub_1BCAA3C(this, mainAction);
  }
  return v26;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_T__o *v29; // x25
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v34; // x9
  DataVals_o *v35; // x26
  const MethodInfo *v36; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v38; // x25
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x25
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x27
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w29
  bool IsCommandSideEffect; // w0
  const MethodInfo *v61; // x7
  BattleActionData_o *v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  BattleLogicFunction_o *v68; // [xsp+0h] [xbp-80h]
  unsigned __int64 v69; // [xsp+8h] [xbp-78h]
  int32_t absorptionCount; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4B18DA3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, mainAction, funcTarget);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v10,
      v11);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v12,
      v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v18, v19);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v20, v21);
    byte_4B18DA3 = 1;
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
  v25 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, mainAction, funcTarget, result);
  BattleActionData___ctor(v25, 0LL);
  v29 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28);
  System_Collections_Generic_List_Int32Enum____ctor(
    v29,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v29 )
    goto LABEL_59;
  items = v29->fields._items;
  v31 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v29->fields._version;
  if ( !items )
    goto LABEL_59;
  size = v29->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      20,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v29->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 20;
  }
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v29,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v34 = 0LL;
    v68 = this;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)logic )
        sub_1BCAA44(this, mainAction);
      v35 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v34);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v69 = v34;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v35,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v7,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v35,
                                        v36);
      if ( !this )
        break;
      klass = this->klass;
      v38 = this;
      v39 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v39;
          p_offset += 4;
          if ( !v39 )
            goto LABEL_22;
        }
        v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v41 = sub_1C1C7C0(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v43 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
      if ( !v43 )
        sub_1BCAA3C(0LL, v42);
      while ( 1 )
      {
        v44 = *(_QWORD *)v43;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_29;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_29:
          v47 = sub_1C1C7C0(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
          break;
        v48 = *(_QWORD *)v43;
        v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v50 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_36;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_36:
          v51 = sub_1C1C7C0(
                  v43,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
        v54 = v52;
        if ( !v52 )
          sub_1BCAA3C(0LL, v53);
        v55 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v52 + 408LL))(
                v52,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v52 + 416LL));
        if ( (v55 & 1) != 0 )
        {
          if ( !v35 )
            sub_1BCAA3C(v55, v56);
          if ( !procArg_k__BackingField )
            sub_1BCAA3C(v55, v56);
          v57 = *(_DWORD *)(v54 + 32);
          funcEnt = v35->fields.funcEnt;
          funcIndex = v35->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v62 = BattleLogicFunction__functionDelayNpTurn(
                  v7,
                  v57,
                  funcEnt,
                  v35,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v61);
          if ( !v25 )
            sub_1BCAA3C(v62, v62);
          BattleActionData__addAction(v25, v62, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v63 = *(_QWORD *)v43;
      v64 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_49;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_49:
        v66 = sub_1C1C7C0(v43, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v66)(v43, *(_QWORD *)(v66 + 8));
      this = v68;
      LODWORD(logic) = v68->fields.logic;
      v34 = v69 + 1;
      if ( (__int64)(v69 + 1) >= (int)logic )
        return v25;
    }
LABEL_59:
    sub_1BCAA3C(this, mainAction);
  }
  return v25;
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
  if ( (byte_4B18D7F & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, targetSvtData, buffEnt);
    byte_4B18D7F = 1;
  }
  if ( !buffEnt )
    goto LABEL_18;
  if ( buffEnt->fields.effectId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v6->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvtData);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvtData);
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
      sub_1BCAA3C(this, targetSvtData);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x27
  __int64 v51; // x1
  int64_t data; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  BattleServantData_o **v59; // x23
  const MethodInfo *v60; // x6
  int32_t v61; // w28
  int32_t AuraSum_k__BackingField; // w29
  __int64 v63; // x2
  __int64 v64; // x3
  BattleServantData_o *v65; // x24
  System_Func_object__object__o *v66; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Collections_Generic_List_TSource__o *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Func_object__bool__o *v78; // x26
  _BOOL8 v79; // x0
  __int64 v80; // x1
  Il2CppObject *current; // x25
  BattleData_o *v82; // x0
  _BOOL8 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  BattleLogicFunction___c_c *v88; // x0
  System_Func_object__bool__o *_9__70_1; // x25
  Il2CppObject *v90; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct BattleData_o *v98; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  BattleActionEffect_ChangeBgmBuff_o *v103; // x22
  int32_t MaxHp_k__BackingField; // w22
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  BattleActionEffect_SubChangeMaxHpBuff_o *v108; // x21
  unsigned int uniqueId; // w22
  int64_t v110; // x20
  BattleActionEffect_Base_o *v111; // x0
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18D8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleBuffData_BuffData___, actionData, subBuffList);
    sub_1BCA7E0(&Method_BattleBuffData_IsOverwriteClass__, v18, v19);
    sub_1BCA7E0(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v22, v23);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v30, v31);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v38, v39);
    sub_1BCA7E0(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__, v42, v43);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__, v44, v45);
    sub_1BCA7E0(&BattleLogicFunction___c__DisplayClass70_0_TypeInfo, v46, v47);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v48, v49);
    byte_4B18D8B = 1;
  }
  memset(&v113, 0, sizeof(v113));
  v50 = sub_1BCAA2C(BattleLogicFunction___c__DisplayClass70_0_TypeInfo, actionData, subBuffList, *(_QWORD *)&targetId);
  BattleLogicFunction___c__DisplayClass70_0___ctor((BattleLogicFunction___c__DisplayClass70_0_o *)v50, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)subBuffList, 0LL) )
  {
    data = (int64_t)this->fields.data;
    if ( data )
    {
      data = (int64_t)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
      if ( v50 )
      {
        *(_QWORD *)(v50 + 16) = data;
        v59 = (BattleServantData_o **)(v50 + 16);
        sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 16), data, v53, v54, v55, v56, v57, v58);
        data = *(_QWORD *)(v50 + 16);
        if ( data )
        {
          data = (int64_t)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
          if ( data )
          {
            if ( svtSnapShotOnBuffUpdate )
            {
              if ( baseVals )
              {
                if ( *v59 )
                {
                  v61 = *(_DWORD *)(data + 24);
                  AuraSum_k__BackingField = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField;
                  data = (int64_t)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)data,
                                    baseVals->fields.funcEnt,
                                    (*v59)->fields.uniqueId,
                                    index,
                                    isCommandSideEffect,
                                    0LL,
                                    v60);
                  if ( data )
                  {
                    *(_BYTE *)(data + 132) = AuraSum_k__BackingField > v61;
                    v65 = (BattleServantData_o *)data;
                    v66 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                             System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                                             v51,
                                                             v63,
                                                             v64);
                    System_Func_object__object____ctor(
                      v66,
                      (Il2CppObject *)v50,
                      Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__,
                      0LL);
                    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v66,
                                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v68 = System_Linq_Enumerable__ToList_object_(
                            v67,
                            (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v65->fields._iconLimitCount_k__BackingField.fields.fakeValue = v68;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v65->fields._iconLimitCount_k__BackingField.fields.fakeValue,
                      (int64_t)v68,
                      v69,
                      v70,
                      v71,
                      v72,
                      v73,
                      v74);
                    v78 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                           System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                           v75,
                                                           v76,
                                                           v77);
                    System_Func_object__bool____ctor(v78, 0LL, Method_BattleBuffData_IsOverwriteClass__, 0LL);
                    data = BasicHelper__Any_object_(
                             (System_Collections_Generic_List_T__o *)subBuffList,
                             (System_Func_T__bool__o *)v78,
                             (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                    if ( (data & 1) != 0 )
                      *(&v65->fields.uniqueId + 1) = 7;
                    if ( actionData )
                    {
                      BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v65, baseVals, 0LL);
                      if ( subBuffList )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v112,
                          (System_Collections_Generic_List_object__o *)subBuffList,
                          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                        v113 = v112;
                        while ( 1 )
                        {
                          v79 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v113,
                                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                          if ( !v79 )
                            break;
                          current = v113.fields._current;
                          if ( !v113.fields._current )
                            sub_1BCAA3C(v79, v80);
                          v82 = this->fields.data;
                          if ( !v82 )
                            sub_1BCAA3C(0LL, v80);
                          BattleData__RemoveDoNotSelectCommandCardBuff(
                            v82,
                            (int32_t)v113.fields._current[1].klass,
                            *v59,
                            0LL);
                          v83 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
                          if ( v83 )
                          {
                            if ( !args )
                              sub_1BCAA3C(v83, v84);
                            args->fields.updateField = 1;
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v113,
                          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                        v88 = BattleLogicFunction___c_TypeInfo;
                        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v85);
                          v88 = BattleLogicFunction___c_TypeInfo;
                        }
                        _9__70_1 = (System_Func_object__bool__o *)v88->static_fields->__9__70_1;
                        if ( !_9__70_1 )
                        {
                          if ( !v88->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v88, v85);
                            v88 = BattleLogicFunction___c_TypeInfo;
                          }
                          v90 = (Il2CppObject *)v88->static_fields->__9;
                          _9__70_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                                      System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                      v85,
                                                                      v86,
                                                                      v87);
                          System_Func_object__bool____ctor(
                            _9__70_1,
                            v90,
                            Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__,
                            0LL);
                          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                          static_fields->__9__70_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__70_1;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)&static_fields->__9__70_1,
                            (int64_t)_9__70_1,
                            v92,
                            v93,
                            v94,
                            v95,
                            v96,
                            v97);
                        }
                        data = BasicHelper__Any_object_(
                                 (System_Collections_Generic_List_T__o *)subBuffList,
                                 (System_Func_T__bool__o *)_9__70_1,
                                 (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                        if ( (data & 1) != 0 )
                        {
                          v98 = this->fields.data;
                          if ( !v98 )
                            goto LABEL_43;
                          FieldEnvData_k__BackingField = v98->fields._FieldEnvData_k__BackingField;
                          data = (int64_t)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)subBuffList,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                          if ( !FieldEnvData_k__BackingField )
                            goto LABEL_43;
                          BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                            FieldEnvData_k__BackingField,
                            (BattleBuffData_BuffData_array *)data,
                            0LL);
                          v103 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1BCAA2C(
                                                                         BattleActionEffect_ChangeBgmBuff_TypeInfo,
                                                                         v100,
                                                                         v101,
                                                                         v102);
                          BattleActionEffect_ChangeBgmBuff___ctor(v103, 0LL);
                          BattleActionData_BuffData__SetActionEffectProc(
                            (BattleActionData_BuffData_o *)v65,
                            (BattleActionEffect_Base_o *)v103,
                            0LL);
                        }
                        data = (int64_t)*v59;
                        if ( *v59 )
                        {
                          MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                          data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
                          if ( MaxHp_k__BackingField == (_DWORD)data )
                            return;
                          if ( *v59 )
                          {
                            BattleActionData__addReflectLogicResultServantId(actionData, (*v59)->fields.uniqueId, 0LL);
                            v108 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1BCAA2C(
                                                                                BattleActionEffect_SubChangeMaxHpBuff_TypeInfo,
                                                                                v105,
                                                                                v106,
                                                                                v107);
                            BattleActionEffect_SubChangeMaxHpBuff___ctor(v108, 0LL);
                            data = (int64_t)System_Collections_Generic_List_object___ToArray(
                                              (System_Collections_Generic_List_object__o *)subBuffList,
                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( *v59 )
                            {
                              uniqueId = (*v59)->fields.uniqueId;
                              v110 = data;
                              data = BattleServantData__getNowHp(*v59, 0LL);
                              if ( v108 )
                              {
                                v111 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, int64_t, _QWORD, _QWORD, Il2CppMethodPointer))v108->klass->vtable._7_InitBuff.method)(
                                                                      v108,
                                                                      v110,
                                                                      uniqueId,
                                                                      (unsigned int)(data
                                                                                   - svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField),
                                                                      v108->klass->vtable._8_PartialPreActionProc.methodPtr);
                                BattleActionData_BuffData__SetActionEffectProc(
                                  (BattleActionData_BuffData_o *)v65,
                                  v111,
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
    sub_1BCAA3C(data, v51);
  }
}


void __fastcall BattleLogicFunction__BehaveLinkageBuffAsFamily(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  BattleData_o *data; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  BattleServantData_o *ServantData; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Func_int__int__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  struct System_Int32_array *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct System_Int32_array *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B18D89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__int___, buffData, funcTarget);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__, v11, v12);
    sub_1BCA7E0(&BattleLogicFunction___c__DisplayClass68_0_TypeInfo, v13, v14);
    byte_4B18D89 = 1;
  }
  v15 = sub_1BCAA2C(BattleLogicFunction___c__DisplayClass68_0_TypeInfo, buffData, funcTarget, method);
  BattleLogicFunction___c__DisplayClass68_0___ctor((BattleLogicFunction___c__DisplayClass68_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 16) = funcTarget;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)funcTarget, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v15 + 16);
  if ( !v24 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v24 + 32), 0LL);
  *(_QWORD *)(v15 + 24) = ServantData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)ServantData, v26, v27, v28, v29, v30, v31);
  if ( !*(_QWORD *)(v15 + 24) )
    return;
  v35 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v32, v33, v34);
  System_Func_int__int____ctor(
    v35,
    (Il2CppObject *)v15,
    Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__,
    0LL);
  if ( !buffData )
LABEL_13:
    sub_1BCAA3C(data, v17);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v35,
                                                                 (const MethodInfo_2F3ECB4 *)Method_System_Linq_Enumerable_Select_int__int___);
    v37 = System_Linq_Enumerable__ToArray_int_(
            v36,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v37;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&buffData->fields.familyLinkageIds,
      (int64_t)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v35,
                                                                 (const MethodInfo_2F3ECB4 *)Method_System_Linq_Enumerable_Select_int__int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v44,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v45;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&buffData->fields.linkageTargetIndividualty,
      (int64_t)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
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
    sub_1BCAA3C(this, funcEnt);
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
    sub_1BCAA3C(this, baseVals);
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
    sub_1BCAA44(this, baseVals);
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
  __int64 v8; // x2
  BattleData_o *data; // x23
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  int32_t id; // w24
  Generator_BGMFromChangeBGMFunc_o *v12; // x22
  __int64 v13; // x1
  UnityEngine_Object_o *logic; // x20

  v6 = this;
  if ( (byte_4B18DB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Generator_BGMFromChangeBGMFunc_TypeInfo, bgmEnt, baseVals);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18DB5 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v12 = (Generator_BGMFromChangeBGMFunc_o *)sub_1BCAA2C(
                                                Generator_BGMFromChangeBGMFunc_TypeInfo,
                                                bgmEnt,
                                                baseVals,
                                                method);
    Generator_BGMFromChangeBGMFunc___ctor(v12, data, id, baseVals, 1, 0LL);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_16;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, _QWORD, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
      FieldEnvData_k__BackingField,
      v12,
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
    sub_1BCAA3C(this, bgmEnt);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  BgmEntity_o *result; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  DataManager_o *MasterData_object; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v29; // x22
  struct BattleSkillInfoData_o *v30; // x8
  SkillLvEntity_o *v31; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x20
  BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v34; // x21
  System_Int32_array *v35; // x19
  int32_t v36; // w22
  int32_t v37; // w23
  int64_t m_CancellationTokenSource_low; // x24
  bool IsOpen; // w23
  __int64 v40; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B18DB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&uniqueID, actionData);
    sub_1BCA7E0(&CondType_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B18DB4 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C1C6BC(v4);
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1C1C6BC(v4);
    MasterData_object = **(DataManager_o ***)(v26 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_35;
    v29 = (SkillLvMaster_o *)MasterData_object;
    MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                           actionData->fields.skillInfo,
                                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v30 = actionData->fields.skillInfo;
    if ( !v30 )
      goto LABEL_35;
    if ( !v29 )
      goto LABEL_35;
    v31 = SkillLvMaster__GetEntity(v29, (int32_t)MasterData_object, v30->fields.skilllv, 0LL);
    MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v31 )
      goto LABEL_35;
    v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    MasterData_object = (DataManager_o *)SkillLvEntity__GetSvtChangeBgm(v31, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_35;
    v34 = (System_Collections_Generic_List_object__o *)MasterData_object;
    MasterData_object = (DataManager_o *)BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)BattleServantData__getIndividualities(
                                           (BattleServantData_o *)MasterData_object,
                                           0LL,
                                           1,
                                           0,
                                           0LL);
    if ( !v34 )
      goto LABEL_35;
    if ( v34->fields._size >= 1 )
    {
      v35 = (System_Int32_array *)MasterData_object;
      v36 = 0;
      while ( 1 )
      {
        MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                               v34,
                                               v36,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v35,
               MasterData_object->fields.m_CachedPtr,
               (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v34,
                                                 v36,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v37 = *((_DWORD *)&MasterData_object->fields.UnityEngine_Behaviour_Fields + 1);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v34,
                                                 v36,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          m_CancellationTokenSource_low = SLODWORD(MasterData_object->fields.m_CancellationTokenSource);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&uniqueID);
          IsOpen = CondType__IsOpen(46, v37, m_CancellationTokenSource_low, 0, 0LL, 0LL);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v34,
                                                 v36,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object || !v32 )
            break;
          if ( IsOpen )
            v40 = 32LL;
          else
            v40 = 28LL;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 v32,
                 &entity,
                 *(_DWORD *)((char *)&MasterData_object->klass + v40),
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v36 >= v34->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1BCAA3C(MasterData_object, *(_QWORD *)&uniqueID);
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

  if ( (byte_4B18DBC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_MasterBuffData_TypeInfo, action, funcEnt);
    byte_4B18DBC = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1BCAA2C(
                                               BattleActionData_MasterBuffData_TypeInfo,
                                               action,
                                               funcEnt,
                                               *(_QWORD *)&index);
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
    sub_1BCAA3C(FunctionObject, v16);
  BattleActionData__setBuffData(action, FunctionObject, baseVals, 0LL);
}


void __fastcall BattleLogicFunction__DebugLog(
        BattleLogicFunction_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v24; // x2
  __int64 v25; // x3
  BattleActionData_BuffData_o *v26; // x20

  if ( (byte_4B18DBF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, procArg, *(_QWORD *)&targetId);
    byte_4B18DBF = 1;
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
          v26 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, procArg, v24, v25);
          BattleActionData___ctor(v11, 0LL);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v26, baseVals, 0LL);
            return v11;
          }
        }
      }
LABEL_22:
      sub_1BCAA3C(data, procArg);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  BattleData_o *data; // x0
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v14; // x20
  int v15; // w23
  il2cpp_array_size_t max_length; // w10
  unsigned int v17; // w9
  int32_t v18; // w21
  int32_t v19; // w22
  int32_t Item; // w0

  v4 = this;
  if ( (byte_4B18DBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, funcEnt, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7, v8);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                      v9,
                                      v10);
    byte_4B18DBE = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_16:
      sub_1BCAA3C(data, v11);
    }
    v14 = (System_Collections_Generic_Dictionary_int__int__o *)data;
    v15 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v17 = v15 - 1;
      if ( v15 - 1 >= (int)max_length )
        break;
      if ( v17 >= max_length || v15 >= max_length )
        sub_1BCAA44(data, v11);
      if ( v14 )
      {
        v18 = vals->m_Items[v17 + 1];
        v19 = vals->m_Items[v15 + 1];
        if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
               v14,
               v18,
               (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   v14,
                   v18,
                   (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v14,
            v18,
            Item + v19,
            (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v14,
            v18,
            v19,
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        vals = funcEnt->fields.vals;
        v15 += 2;
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
  __int64 v10; // x1
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  v8 = this;
  if ( (byte_4B18DB7 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, args, bgmGenerator);
    byte_4B18DB7 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    sub_1BCAA3C(this, args);
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
    sub_1BCAA3C(this, *(_QWORD *)&faceId);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleData_o *data; // x8
  BattleSkillInfoData_o *v14; // x24
  struct BattleData_o *v15; // x8
  unsigned int v16; // w0
  struct BattleData_o *v17; // x8
  struct BattleSkillInfoData_o *lastUsedPlayerSkillInfo_k__BackingField; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  bool v21; // w26
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v22; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x25
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int v31; // w8
  BattleLogicFunction_o *v32; // x24
  unsigned int v33; // w27
  __int64 v34; // x25
  struct BattleLogic_o *v35; // x8
  BattleActionData_o *v36; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4B18DBB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, actionData, baseVals);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(
                                      &BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                      v11,
                                      v12);
    byte_4B18DBB = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v14 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, actionData, baseVals, args);
  BattleSkillInfoData___ctor(v14, 0LL);
  if ( !actionData )
    goto LABEL_32;
  if ( !v14 )
    goto LABEL_32;
  v14->fields.svtUniqueId = actionData->fields.actorId;
  v15 = v8->fields.data;
  if ( !v15 )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)v15->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !this )
    goto LABEL_32;
  v16 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
          this,
          this->klass[1]._1.byval_arg.data);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._4_set_skillId.method)(
                                    v14,
                                    v16,
                                    v14->klass->vtable._5_get_skillId.methodPtr);
  v17 = v8->fields.data;
  if ( !v17 )
    goto LABEL_32;
  lastUsedPlayerSkillInfo_k__BackingField = v17->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !lastUsedPlayerSkillInfo_k__BackingField )
    goto LABEL_32;
  v14->fields.skilllv = lastUsedPlayerSkillInfo_k__BackingField->fields.skilllv;
  BattleSkillInfoData__UpdateSelectAddIndex(
    v14,
    lastUsedPlayerSkillInfo_k__BackingField->fields._SelectAddIndex_k__BackingField,
    0LL);
  if ( !args )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  v21 = this != 0LL;
  if ( this )
  {
    v22 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1BCAA2C(
                                                                             BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo,
                                                                             actionData,
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
    goto LABEL_32;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_32;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_33;
  LODWORD(this->fields.logictarget) = actionData->fields.actorId;
  if ( !logicSkill
    || (this = (BattleLogicFunction_o *)BattleLogicSkill__taskSkill(
                                          logicSkill,
                                          v14,
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
    sub_1BCAA3C(this, actionData);
  }
  v31 = (int)this->fields.logic;
  v32 = this;
  if ( v31 >= 1 )
  {
    v33 = 0;
    while ( v33 < v31 )
    {
      v34 = *((_QWORD *)&v32->fields.logictarget + (int)v33);
      if ( !v34 )
        goto LABEL_32;
      *(_QWORD *)(v34 + 176) = v22;
      *(_BYTE *)(v34 + 169) = v21;
      sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 176), (int64_t)v22, v25, v26, v27, v28, v29, v30);
      v35 = v8->fields.logic;
      if ( !v35 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v35->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v36 = BattleLogicSkill__createSkillData_44374332(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v34,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v36, 0LL);
      if ( v36 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v31 = (int)v32->fields.logic;
      if ( (int)++v33 >= v31 )
        goto LABEL_29;
    }
LABEL_33:
    sub_1BCAA44(this, actionData);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_44268180(
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _BOOL4 isEnemy; // w26
  int32_t ServantIndex; // w22
  BattleData_o *data; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  MoveToSubMemberWaveTurnEvent_o *v22; // x25
  bool v23; // w24
  int32_t v24; // w0
  int32_t uniqueId; // w25
  int32_t v26; // w26
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  RestockServantLogicByMoveToSubMember_o *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  BattleActionData_o *v34; // x21

  v9 = this;
  if ( (byte_4B18D99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, targetServantData, funcEnt);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v10, v11);
    sub_1BCA7E0(&MoveToSubMemberWaveTurnEvent_TypeInfo, v12, v13);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&RestockServantLogicByMoveToSubMember_TypeInfo, v14, v15);
    byte_4B18D99 = 1;
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
  BattleData__SubBuffFromPT_43290096((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v22 = (MoveToSubMemberWaveTurnEvent_o *)sub_1BCAA2C(MoveToSubMemberWaveTurnEvent_TypeInfo, v19, v20, v21);
  MoveToSubMemberWaveTurnEvent___ctor(v22, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v22, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v23 = isEnemy;
  v24 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
  uniqueId = targetServantData->fields.uniqueId;
  v26 = v24;
  v30 = (RestockServantLogicByMoveToSubMember_o *)sub_1BCAA2C(
                                                    RestockServantLogicByMoveToSubMember_TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
  RestockServantLogicByMoveToSubMember___ctor(v30, ServantIndex, v23, v26, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v30, 0LL),
        v34 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v31, v32, v33),
        BattleActionData___ctor(v34, 0LL),
        !v34) )
  {
LABEL_13:
    sub_1BCAA3C(this, targetServantData);
  }
  BattleActionData__AddNewMoveToSubMember(v34, ServantIndex, targetServantData->fields.uniqueId, funcIndex, 1, 0LL);
  return v34;
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
  __int64 v9; // x2
  struct BattleData_o *v10; // x8
  BattlePerformance_o *perf; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s3.4,4:s4.4,8:s5.4

  v6 = this;
  if ( (byte_4B18DB8 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, args, bgGenerator);
    byte_4B18DB8 = 1;
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
  v10 = v6->fields.data;
  if ( v10 )
  {
    perf = v10->fields.perf;
    if ( perf )
    {
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v9);
        byte_4B109C1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      zeroVector = static_fields->zeroVector;
      v16.fields.x = static_fields->zeroVector.fields.x;
      v16.fields.y = zeroVector.fields.y;
      v16.fields.z = zeroVector.fields.z;
      BattlePerformance__ChangeBg(perf, static_fields->zeroVector, v16, 0, 0, 0LL, 0LL);
    }
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(this, args);
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
  if ( (byte_4B18DBD & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_Dictionary_int__int__set_Item__,
                                      funcEnt,
                                      method);
    byte_4B18DBD = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_13:
      sub_1BCAA3C(data, v5);
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
        sub_1BCAA44(data, v5);
      if ( v8 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          vals->m_Items[v11 + 1],
          vals->m_Items[v9 + 1],
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        vals = funcEnt->fields.vals;
        v9 += 2;
        if ( vals )
          continue;
      }
      goto LABEL_13;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x2
  __int64 v17; // x3
  BattleActionData_BuffData_o *v18; // x20

  if ( (byte_4B18DC0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, procArg, *(_QWORD *)&targetId);
    byte_4B18DC0 = 1;
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
          v18 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, procArg, v16, v17);
          BattleActionData___ctor(v11, 0LL);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v18, baseVals, 0LL);
            return v11;
          }
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(data, procArg);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  DataVals_o *dataVals_k__BackingField; // x20
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t v31; // w24
  Il2CppClass *klass; // x8
  BattleActionData_BuffData_o *v33; // x26
  struct BattleData_o *data; // x22
  int m_CancellationTokenSource; // w28
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v37; // x6
  const MethodInfo *v38; // x7
  BattleActionData_BuffData_o *FunctionObject; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__object__o *v43; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  BattleLogicFunction___c_c *v54; // x0
  System_Func_object__bool__o *_9__121_1; // x21
  Il2CppObject *v56; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x2
  __int64 v65; // x3
  BattleActionEffect_UpdateAllInfo_o *v66; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_4B18DBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleBuffData_BuffData___, args, mainAction);
    sub_1BCA7E0(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, v13, v14);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__, v21, v22);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v23, v24);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&BattleActionEffect_UpdateAllInfo_TypeInfo, v25, v26);
    byte_4B18DBA = 1;
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
  v31 = (int)this;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._8_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._9_AddBuff.methodPtr);
  klass = v8[1].klass;
  if ( !klass )
    goto LABEL_26;
  if ( !funcEnt )
    goto LABEL_26;
  v33 = (BattleActionData_BuffData_o *)this;
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
                       v31,
                       IsCommandSideEffect,
                       v33,
                       v37);
    v43 = (System_Func_object__object__o *)sub_1BCAA2C(
                                             System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo,
                                             v40,
                                             v41,
                                             v42);
    System_Func_object__object____ctor(v43, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, 0LL);
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v43,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v44,
                                      (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&FunctionObject->fields.removeBuffList,
        (int64_t)this,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      v54 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v51);
        v54 = BattleLogicFunction___c_TypeInfo;
      }
      _9__121_1 = (System_Func_object__bool__o *)v54->static_fields->__9__121_1;
      if ( !_9__121_1 )
      {
        if ( !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54, v51);
          v54 = BattleLogicFunction___c_TypeInfo;
        }
        v56 = (Il2CppObject *)v54->static_fields->__9;
        _9__121_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                     v51,
                                                     v52,
                                                     v53);
        System_Func_object__bool____ctor(
          _9__121_1,
          v56,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__,
          0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__121_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__121_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__121_1,
          (int64_t)_9__121_1,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__121_1,
                                        (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v66 = (BattleActionEffect_UpdateAllInfo_o *)sub_1BCAA2C(
                                                      BattleActionEffect_UpdateAllInfo_TypeInfo,
                                                      args,
                                                      v64,
                                                      v65);
        BattleActionEffect_UpdateAllInfo___ctor(v66, 0LL);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v66, 0LL);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(this, args);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v31,
                                    dataVals_k__BackingField,
                                    IsCommandSideEffect,
                                    0LL,
                                    v33,
                                    v38);
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
  __int64 v12; // x2
  DataVals_o *logictarget; // x25
  AddBgmArgument_o *v14; // x21
  bool isParam; // w0
  const MethodInfo *v16; // x5
  __int64 v17; // x2
  __int64 v18; // x3
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x24
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v21; // x22
  const MethodInfo *v22; // x3
  BattleData_o *v23; // x22
  Generator_BGMFromFieldChangeBGBuff_o *v24; // x23
  const MethodInfo *v25; // x4

  v10 = this;
  if ( (byte_4B18DB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Generator_BGFromFieldChangeBGBuff_TypeInfo, args, mainAction);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v11, v12);
    byte_4B18DB9 = 1;
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
  v14 = (AddBgmArgument_o *)this;
  isParam = DataVals__isParam(logictarget, 101, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__functionAddState(v10, mainAction, funcTarget, args, isParam, v16);
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
        v14,
        0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(this, args);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v21 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1BCAA2C(Generator_BGFromFieldChangeBGBuff_TypeInfo, args, v17, v18);
    Generator_BGFromFieldChangeBGBuff___ctor(v21, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v21, v22);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v23 = v10->fields.data;
    v24 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1BCAA2C(
                                                    Generator_BGMFromFieldChangeBGBuff_TypeInfo,
                                                    args,
                                                    v17,
                                                    v18);
    Generator_BGMFromFieldChangeBGBuff___ctor(v24, v23, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v24, v14, v25);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0LL), !data) )
    sub_1BCAA3C(this, baseVals);
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
    sub_1BCAA3C(this, baseVals);
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
  __int64 v9; // x1
  int v10; // w20

  if ( (byte_4B18D8E & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&System_Math_TypeInfo, dataVals, targetSvtData);
    byte_4B18D8E = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 115, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1BCAA3C(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v10 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
          targetSvtData,
          targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
  return System_Math__Min_63220524(healPoint, MaxHp - v10, 0LL);
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
    sub_1BCAA3C(this, dataVals);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  struct System_Int32_array *vals; // x8

  if ( (byte_4B18D74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, funcEnt, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6, v7);
    byte_4B18D74 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, funcEnt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !vals->max_length )
    sub_1BCAA44(Master_object, v9);
  if ( !Master_object )
LABEL_10:
    sub_1BCAA3C(Master_object, v9);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[1],
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


System_Int32_array *__fastcall BattleLogicFunction__GetBuffTargetCardIndexArray(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_int__o *v32; // x19
  unsigned __int64 CardIndividuality; // x0
  __int64 v34; // x1
  int32_t CardIndex; // w20
  System_Int32_array *IdArrayFromIndividuality; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x22
  __int64 v38; // x24
  __int64 v39; // x25
  __int64 v40; // x2
  __int64 v41; // x3
  unsigned __int64 v42; // x24
  System_Collections_Generic_List_int__o *v43; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x25
  __int64 v47; // x8
  int32_t v48; // w29
  unsigned __int64 v49; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  int32_t Next; // w0
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  unsigned int max_length; // w11
  int32_t v58; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B18DB0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, baseVals, targetServant);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Repeat_int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    byte_4B18DB0 = 1;
  }
  v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    baseVals,
                                                    targetServant,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0LL);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0LL);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v39 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v38 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34);
    *(_QWORD *)&v60.fields.currentCryptoKey = v39;
    *(_QWORD *)&v60.fields.fakeValue = v38;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v60, 0LL);
    if ( !v37 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v37,
                                            CardIndividuality,
                                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v42 = *(_QWORD *)(CardIndividuality + 144);
    v43 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v34,
                                                      v40,
                                                      v41);
    System_Collections_Generic_List_int____ctor(
      v43,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                            (BattleBuffData_o *)CardIndividuality,
                                            0LL);
    if ( CardIndividuality )
    {
      if ( !v42 )
        goto LABEL_55;
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                   *(_DWORD *)(CardIndividuality + 28),
                                                                   *(_DWORD *)(v42 + 24),
                                                                   (const MethodInfo_2F3BEBC *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v44,
                                              (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      v42 = CardIndividuality;
    }
    if ( !IdArrayFromIndividuality )
      goto LABEL_55;
    v45 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
    if ( (int)v45 >= 1 )
    {
      v46 = 0LL;
      while ( 1 )
      {
        if ( v46 >= (unsigned int)v45 )
          goto LABEL_54;
        if ( !v42 )
          goto LABEL_55;
        v47 = *(_QWORD *)(v42 + 24);
        if ( (int)v47 >= 1 )
          break;
LABEL_31:
        LODWORD(v45) = IdArrayFromIndividuality->max_length;
        if ( (__int64)++v46 >= (int)v45 )
          goto LABEL_32;
      }
      v48 = IdArrayFromIndividuality->m_Items[v46 + 1];
      v49 = 0LL;
      while ( v49 < (unsigned int)v47 )
      {
        if ( v48 == *(_DWORD *)(v42 + 32 + 4 * v49) )
        {
          if ( !v43 )
            goto LABEL_55;
          CardIndividuality = System_Collections_Generic_List_int___Contains(
                                v43,
                                v49,
                                (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (CardIndividuality & 1) == 0 )
          {
            items = v43->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v43->fields._version;
            if ( !items )
              goto LABEL_55;
            size = v43->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v43,
                v49,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v43->fields._size = size + 1;
              items->m_Items[size + 1] = v49;
            }
          }
        }
        LODWORD(v47) = *(_DWORD *)(v42 + 24);
        if ( (__int64)++v49 >= (int)v47 )
          goto LABEL_31;
      }
LABEL_54:
      sub_1BCAA44(CardIndividuality, v34);
    }
LABEL_32:
    if ( !v43 )
LABEL_55:
      sub_1BCAA3C(CardIndividuality, v34);
    CardIndividuality = (unsigned int)v43->fields._size;
    if ( (int)CardIndividuality >= 1 )
    {
      if ( CardIndex )
      {
        if ( v32 )
        {
          System_Collections_Generic_List_int___AddRange(
            v32,
            (System_Collections_Generic_IEnumerable_T__o *)v43,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v32,
                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0LL);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v43,
                            Next,
                            (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v32 )
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
    if ( !v32 )
      goto LABEL_55;
LABEL_45:
    v54 = v32->fields._items;
    v55 = Method_System_Collections_Generic_List_int__Add__;
    ++v32->fields._version;
    if ( !v54 )
      goto LABEL_55;
    v56 = v32->fields._size;
    max_length = v54->max_length;
    v58 = CardIndividuality;
    goto LABEL_50;
  }
  if ( CardIndex > 5 )
  {
LABEL_40:
    if ( v32 )
      return System_Collections_Generic_List_int___ToArray(
               v32,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_55;
  }
  if ( !v32 )
    goto LABEL_55;
  v54 = v32->fields._items;
  v55 = Method_System_Collections_Generic_List_int__Add__;
  ++v32->fields._version;
  if ( !v54 )
    goto LABEL_55;
  v56 = v32->fields._size;
  max_length = v54->max_length;
  v58 = CardIndex - 1;
LABEL_50:
  if ( (unsigned int)v56 >= max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v32,
      v58,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v32->fields._size = v56 + 1;
    v54->m_Items[v56 + 1] = v58;
  }
  return System_Collections_Generic_List_int___ToArray(
           v32,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *__fastcall BattleLogicFunction__GetDependFuncTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  BattleLogicFunctionProcess_DependFunctionUnitCheck_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  long double inited; // q0
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_4B18D81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, args, mainAction);
    sub_1BCA7E0(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo, v9, v10);
    byte_4B18D81 = 1;
  }
  v11 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1BCAA2C(
                                                                  BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo,
                                                                  args,
                                                                  mainAction,
                                                                  dataVal);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v11, this, args, dataVal, 0LL);
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v11,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v11->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v17 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v18 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v18 )
    {
      sub_1C1C718(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___, v14);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19, v14);
    v20 = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C1C6BC(inited);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v20 + 184);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_T__o *v23; // x24
  _QWORD *DependDataValsArray; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  RemovedBuffInfoGroup_o *v31; // x22
  const MethodInfo *v32; // x4
  __int64 v33; // x8
  unsigned __int64 v34; // x9
  DataVals_o *v35; // x25
  __int64 v36; // x8
  _QWORD *v37; // x24
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x24
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x26
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  const MethodInfo *v68; // [xsp+0h] [xbp-80h]
  _QWORD *v69; // [xsp+8h] [xbp-78h]
  unsigned __int64 v70; // [xsp+10h] [xbp-70h]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B18DB2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, procArg, mainAction);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v9,
      v10);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v11,
      v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v19, v20);
    sub_1BCA7E0(&RemovedBuffInfoGroup_TypeInfo, v21, v22);
    byte_4B18DB2 = 1;
  }
  subBuffInfo = 0LL;
  v23 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  procArg,
                                                  mainAction,
                                                  baseVals);
  System_Collections_Generic_List_Int32Enum____ctor(
    v23,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v23 )
    goto LABEL_56;
  items = v23->fields._items;
  v29 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v23,
      2,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v23->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v31 = (RemovedBuffInfoGroup_o *)sub_1BCAA2C(RemovedBuffInfoGroup_TypeInfo, v25, v26, v27);
  RemovedBuffInfoGroup___ctor(v31, 0LL);
  if ( !baseVals )
    goto LABEL_56;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v23,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_56;
  v33 = DependDataValsArray[3];
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    v69 = DependDataValsArray;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)v33 )
        sub_1BCAA44(DependDataValsArray, v25);
      v35 = (DataVals_o *)DependDataValsArray[v34 + 4];
      v70 = v34;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v35, v32);
      if ( !DependDataValsArray )
        break;
      v36 = *DependDataValsArray;
      v37 = DependDataValsArray;
      v38 = *(unsigned __int16 *)(*DependDataValsArray + 302LL);
      if ( *(_WORD *)(*DependDataValsArray + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v39 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_18;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_18:
        v40 = sub_1C1C7C0(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v42 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
      if ( !v42 )
        sub_1BCAA3C(0LL, v41);
      while ( 1 )
      {
        v43 = *(_QWORD *)v42;
        v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
        {
          v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_25;
          }
          v46 = v43 + 16LL * *v45 + 312;
        }
        else
        {
LABEL_25:
          v46 = sub_1C1C7C0(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
          break;
        v47 = *(_QWORD *)v42;
        v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
        {
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v49 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
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
          v50 = sub_1C1C7C0(
                  v42,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
        v53 = v51;
        if ( !v51 )
          sub_1BCAA3C(0LL, v52);
        v54 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v51 + 408LL))(
                v51,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v51 + 416LL));
        if ( (v54 & 1) != 0 )
        {
          if ( !v35 )
            sub_1BCAA3C(v54, v55);
          if ( !procArg )
            sub_1BCAA3C(v54, v55);
          v56 = *(_DWORD *)(v53 + 32);
          funcEnt = v35->fields.funcEnt;
          funcIndex = v35->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v60 = BattleLogicFunction__functionSubState(
                  this,
                  v56,
                  funcEnt,
                  v35,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v68);
          if ( !mainAction )
            sub_1BCAA3C(v60, v60);
          BattleActionData__addAction(mainAction, v60, 0LL);
          if ( !v31 )
            sub_1BCAA3C(v61, v62);
          RemovedBuffInfoGroup__Register(v31, v56, subBuffInfo, 0LL);
        }
      }
      v63 = *(_QWORD *)v42;
      v64 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
      {
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_45;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_45:
        v66 = sub_1C1C7C0(v42, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v66)(v42, *(_QWORD *)(v66 + 8));
      DependDataValsArray = v69;
      LODWORD(v33) = *((_DWORD *)v69 + 6);
      v34 = v70 + 1;
      if ( (__int64)(v70 + 1) >= (int)v33 )
        return v31;
    }
LABEL_56:
    sub_1BCAA3C(DependDataValsArray, v25);
  }
  return v31;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_4B18D80 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, buffData, method);
    byte_4B18D80 = 1;
  }
  if ( !buffData )
    goto LABEL_11;
  if ( buffData->fields.onfiledUniqueId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v4->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buffData);
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v4->fields.logic;
      if ( this )
        return BattleLogic__checkInField((BattleLogic_o *)this, buffData->fields.onfiledUniqueId, 0LL);
LABEL_11:
      sub_1BCAA3C(this, buffData);
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__IsAttackSideEffectInvokeFunc(
        BattleLogicFunction_o *this,
        int32_t funcType,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  if ( funcType != 34 && funcType != 137 && funcType != 122 )
    return FuncList__isDamage(funcType, 0LL);
  if ( !baseVal )
    sub_1BCAA3C(this, *(_QWORD *)&funcType);
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
    sub_1BCAA3C(data, *(_QWORD *)&targetId);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x21
  __int64 v16; // x1
  struct BattleData_o *v17; // x8
  int32_t currentTurn; // w8
  bool v19; // w10

  if ( (byte_4B18D83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantStrMaster___, *(_QWORD *)&targetId, buffEnt);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5899/*"EXTEND_TURN_BUFF_TYPE"*/, v11, v12);
    byte_4B18D83 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (char)ServantData;
  v15 = ServantData;
  data = (BattleData_o *)ServantData->fields.svtdata;
  if ( !data )
    goto LABEL_27;
  if ( !ServantEntity__IsSvtBuffTurnExtend((ServantEntity_o *)data, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5899/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v17 = this->fields.data;
  if ( !v17 )
LABEL_27:
    sub_1BCAA3C(data, *(_QWORD *)&targetId);
  currentTurn = v17->fields.currentTurn;
  if ( !currentTurn )
  {
    LOBYTE(ServantData) = 1;
    if ( (shortbuff & (unsigned __int8)~v15->fields.isEnemy & 1) != 0 || v15->fields.isEnemy && !shortbuff )
      return (char)ServantData;
LABEL_25:
    LOBYTE(ServantData) = 0;
    return (char)ServantData;
  }
  v19 = currentTurn == 1 && v15->fields.isEnemy;
  if ( (!v19 || !shortbuff) && (currentTurn != 1 || v15->fields.isEnemy || shortbuff) )
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v19; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_T__o *v26; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_4B18D76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, *(_QWORD *)&buffType, keyName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B18D76 = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&buffType,
                                                      keyName,
                                                      typeList);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v19;
    sub_1BCA784((PartyOrganizationUtility_o *)typeList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v26 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v26,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1BCAA3C(Instance, v26);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleLogicFunction__LossCommandSpell(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x21
  __int64 Value; // x0
  __int64 v10; // x1
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct BattleSkillInfoData_o *skillInfo; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x22

  if ( (byte_4B18DB6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, baseVals, actionData);
    sub_1BCA7E0(&StringLiteral_8434/*"LOSS_COMMAND_SPELL"*/, v6, v7);
    byte_4B18DB6 = 1;
  }
  v8 = sub_1BCAA2C(BattleActionData_TypeInfo, baseVals, actionData, method);
  BattleActionData___ctor((BattleActionData_o *)v8, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v8, 0LL);
  v11 = StringLiteral_8434/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v8 + 64) = StringLiteral_8434/*"LOSS_COMMAND_SPELL"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 64), v11, v12, v13, v14, v15, v16, v17);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v8 + 144) = skillInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 144), (int64_t)skillInfo, v19, v20, v21, v22, v23, v24);
  if ( !baseVals || (v25 = *(_QWORD *)(v8 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v25) )
LABEL_8:
    sub_1BCAA3C(Value, v10);
  *(_DWORD *)(v25 + 100) = Value;
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
  PartyListViewItem_o *v7; // x7
  struct System_String_o *popupText; // x1
  bool v12; // w22
  struct System_Int32_array *EffectList; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData
    || !actBuffData
    || (actBuffData->fields.buffId = buffData->fields.buffId,
        actBuffData->fields.auraEffectId = buffData->fields.auraEffectId,
        actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId,
        !funcEnt) )
  {
    sub_1BCAA3C(this, actBuffData);
  }
  popupText = funcEnt->fields.popupText;
  v12 = isCommandSideEffect;
  actBuffData->fields.popLabel = popupText;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&actBuffData->fields.popLabel,
    (int64_t)popupText,
    (int64_t)buffData,
    (int32_t)funcEnt,
    (System_String_o *)isCommandSideEffect,
    (BattleSetupInfo_o *)isConvertBuffFailed,
    (FollowerInfo_o *)method,
    v7);
  *(_QWORD *)&actBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  actBuffData->fields.effectList = EffectList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&actBuffData->fields.effectList,
    (int64_t)EffectList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  actBuffData->fields.isCommandAfter = v12;
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B18D87 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
    byte_4B18D87 = 1;
  }
  v12 = sub_1BCAA2C(BattleActionData_BuffData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex, *(_QWORD *)&iconId);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 56), (int64_t)popupText, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 72), 0LL, v21, v22, v23, v24, v25, v26);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  FamilyBuffLinkageIdGenerator_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *current; // x21
  System_Collections_Generic_Dictionary_int__int__o *v41; // x20
  __int64 v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_object__o *klass; // x0
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *v47; // x22
  __int64 v48; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 IsNullOrEmpty; // x0
  __int64 v64; // x1
  __int64 v65; // x8
  unsigned __int64 v66; // x26
  System_Collections_ICollection_o *v67; // x22
  unsigned __int64 monitor; // x8
  __int64 v69; // x24
  unsigned __int64 v70; // x25
  System_Collections_ICollection_o *v71; // x29
  _BOOL8 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w23
  int32_t v75; // w0
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B18DB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, procArg, targetServant);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__,
      v18,
      v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__,
      v22,
      v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v24, v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v28, v29);
    sub_1BCA7E0(&int_____TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v32, v33);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__,
                                      v34,
                                      v35);
    byte_4B18DB3 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  memset(&v77, 0, sizeof(v77));
  if ( targetServant )
  {
    if ( !procArg
      || (this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
                                            procArg,
                                            targetServant,
                                            0LL),
          !stealBuffInfoGroup)
      || (v36 = (FamilyBuffLinkageIdGenerator_o *)this,
          (this = (BattleLogicFunction_o *)stealBuffInfoGroup->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField) == 0LL)
      || (this = (BattleLogicFunction_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                                            (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_1BCAA3C(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v76,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v78 = v76;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v78,
              (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v78.fields._current;
      v41 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                   v37,
                                                                   v38,
                                                                   v39);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v41,
        (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1BCAA3C(v42, v43);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1BCAA3C(0LL, v43);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v76,
        klass,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v77 = v76;
      while ( 1 )
      {
        v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v77,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v45 )
          break;
        v47 = v77.fields._current;
        if ( !v77.fields._current )
          sub_1BCAA3C(v45, v46);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v77.fields._current, 0LL) )
        {
          v48 = sub_1BCA888(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)v47,
                                   0LL);
          if ( !v48 )
            sub_1BCAA3C(FamilyLinkageIdArray, FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v48 + 24) )
            sub_1BCAA44(FamilyLinkageIdArray, FamilyLinkageIdArray);
          *(_QWORD *)(v48 + 32) = FamilyLinkageIdArray;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)(v48 + 32),
            (int64_t)FamilyLinkageIdArray,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v47,
                                         0LL);
          if ( *(_DWORD *)(v48 + 24) <= 1u )
            sub_1BCAA44(FamilyLinkageTargetIdArray, FamilyLinkageTargetIdArray);
          *(_QWORD *)(v48 + 40) = FamilyLinkageTargetIdArray;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)(v48 + 40),
            (int64_t)FamilyLinkageTargetIdArray,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          v65 = *(_QWORD *)(v48 + 24);
          if ( (int)v65 >= 1 )
          {
            v66 = 0LL;
            do
            {
              if ( v66 >= (unsigned int)v65 )
                sub_1BCAA44(IsNullOrEmpty, v64);
              v67 = *(System_Collections_ICollection_o **)(v48 + 8 * v66 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v67, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v67 )
                  sub_1BCAA3C(IsNullOrEmpty, v64);
                monitor = (unsigned __int64)v67[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v69 = (unsigned int)v67[1].monitor;
                  v70 = 0LL;
                  v71 = v67 + 2;
                  do
                  {
                    if ( v70 >= (unsigned int)monitor )
                      sub_1BCAA44(IsNullOrEmpty, v64);
                    if ( !v41 )
                      sub_1BCAA3C(IsNullOrEmpty, v64);
                    v72 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v41,
                            *((_DWORD *)&v71->klass + v70),
                            (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v72 )
                    {
                      if ( v70 >= LODWORD(v67[1].monitor) )
                        sub_1BCAA44(v72, v73);
                      if ( !v36 )
                        sub_1BCAA3C(v72, v73);
                      v74 = *((_DWORD *)&v71->klass + v70);
                      v75 = FamilyBuffLinkageIdGenerator__Next(v36, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v41,
                        v74,
                        v75,
                        (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v70 >= LODWORD(v67[1].monitor) )
                      sub_1BCAA44(v72, v73);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v41,
                                      *((_DWORD *)&v71->klass + v70),
                                      (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v67[1].monitor);
                    if ( v70 >= monitor )
                      sub_1BCAA44(IsNullOrEmpty, v64);
                    *((_DWORD *)&v71->klass + v70++) = IsNullOrEmpty;
                  }
                  while ( v69 != v70 );
                }
              }
              LODWORD(v65) = *(_DWORD *)(v48 + 24);
              ++v66;
            }
            while ( (__int64)v66 < (int)v65 );
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v77,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v78,
      (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
  }
}


void __fastcall BattleLogicFunction__SetEnemyCountChangeActionData(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *mainActionData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 Value; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  int64_t v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BattleSkillInfoData_o *skillInfo; // x0
  System_String_o *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B18DC1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, baseVals, mainActionData);
    sub_1BCA7E0(&BattleActionData_EnemyCountChangeData_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5575/*"ENEMY_COUNT_CHANGE"*/, v8, v9);
    byte_4B18DC1 = 1;
  }
  v10 = sub_1BCAA2C(BattleActionData_TypeInfo, baseVals, mainActionData, method);
  BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
  if ( !mainActionData
    || !v10
    || (*(_QWORD *)(v10 + 32) = *(_QWORD *)&mainActionData->fields.actorId,
        v19 = StringLiteral_5575/*"ENEMY_COUNT_CHANGE"*/,
        *(_QWORD *)(v10 + 64) = StringLiteral_5575/*"ENEMY_COUNT_CHANGE"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 64), v19, v13, v14, v15, v16, v17, v18),
        v23 = sub_1BCAA2C(BattleActionData_EnemyCountChangeData_TypeInfo, v20, v21, v22),
        BattleActionData_EnemyCountChangeData___ctor((BattleActionData_EnemyCountChangeData_o *)v23, 0LL),
        !baseVals)
    || (Value = DataVals__GetValue(baseVals, 0LL), !v23) )
  {
    sub_1BCAA3C(Value, v12);
  }
  *(_DWORD *)(v23 + 16) = Value;
  *(float *)(v23 + 20) = DataVals__GetEnemyCountChangeTime(baseVals, 3000, 0LL);
  skillInfo = mainActionData->fields.skillInfo;
  if ( skillInfo )
    v31 = BattleSkillInfoData__GetEnemyCountChangeMessage(skillInfo, 0LL);
  else
    v31 = 0LL;
  *(_QWORD *)(v23 + 24) = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)v31, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v23 + 32) = DataVals__GetEnemyCountChangeEffectId(baseVals, 0LL);
  *(float *)(v23 + 36) = DataVals__GetEnemyCountWaitTimeAfterMessage(baseVals, 0LL);
  *(_QWORD *)(v10 + 464) = v23;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 464), v23, v32, v33, v34, v35, v36, v37);
  BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
  BattleActionData__AddAfterActionData(mainActionData, (BattleActionData_o *)v10, 0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x22
  void *FuncSideEffectTargetServants; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  unsigned __int64 v25; // x9
  bool v26; // w27
  __int64 v27; // x8
  _QWORD *v28; // x27
  unsigned __int64 v29; // x25
  BattleServantData_o *v30; // x28
  __int64 v31; // x8
  _QWORD *v32; // x29
  unsigned __int64 v33; // x24
  BattleBuffData_BuffData_o *v34; // x23
  BattleActionData_o *SideEffectActionData_43116680; // x0
  const MethodInfo *v36; // x6
  BattleData_o *data; // x8
  int v38; // w8
  _DWORD *v39; // x24
  unsigned int v40; // w28
  char *v41; // x8
  __int64 v42; // x25
  __int64 v43; // x8
  _QWORD *v44; // x26
  unsigned __int64 v45; // x29
  BattleBuffData_BuffData_o *v46; // x27
  const MethodInfo *v47; // x6
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v52; // x8
  System_Action_object__o *_9__49_0; // x20
  Il2CppObject *v54; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  _DWORD *v62; // [xsp+8h] [xbp-88h]
  unsigned __int64 v64; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_4B18D7A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData__TypeInfo, sideEffectArg, actionData);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActionData___, v9, v10);
    sub_1BCA7E0(&bool___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, v17, v18);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v19, v20);
    byte_4B18D7A = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sideEffectArg);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (void *)sub_1BCA888(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_49;
    v24 = *((_QWORD *)FuncSideEffectTargetServants + 3);
    if ( !(_DWORD)v24 )
      goto LABEL_48;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      v62 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)v24 )
          goto LABEL_48;
        if ( !sideEffectArg )
          goto LABEL_49;
        v64 = v25;
        v26 = *((_BYTE *)FuncSideEffectTargetServants + v25 + 32) != 0;
        questIndividualityArray = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
                                                          sideEffectArg,
                                                          v26,
                                                          sideEffectArg->klass->vtable._7_SetSideEffect.methodPtr);
        FuncSideEffectTargetServants = BattleActionData__GetFuncSideEffectTargetServants(
                                         actionData,
                                         this->fields.data,
                                         v26,
                                         targetIds,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v27 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v28 = FuncSideEffectTargetServants;
        if ( (int)v27 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v62;
        LODWORD(v24) = v62[6];
        v25 = v64 + 1;
        if ( (__int64)(v64 + 1) >= (int)v24 )
          goto LABEL_25;
      }
      v29 = 0LL;
      while ( 1 )
      {
        if ( v29 >= (unsigned int)v27 )
          goto LABEL_48;
        v30 = (BattleServantData_o *)v28[v29 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(
                                         actorSvtData,
                                         (BuffList_ACTION_array *)questIndividualityArray,
                                         v30,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v31 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v32 = FuncSideEffectTargetServants;
        if ( (int)v31 >= 1 )
          break;
LABEL_23:
        LODWORD(v27) = *((_DWORD *)v28 + 6);
        if ( (__int64)++v29 >= (int)v27 )
          goto LABEL_24;
      }
      v33 = 0LL;
      while ( v33 < (unsigned int)v31 )
      {
        if ( !v30 )
          goto LABEL_49;
        v34 = (BattleBuffData_BuffData_o *)v32[v33 + 4];
        SideEffectActionData_43116680 = BattleActionData__MakeSideEffectActionData_43116680(
                                          actionData,
                                          4,
                                          v30->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_43116680,
          v34,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v36);
        LODWORD(v31) = *((_DWORD *)v32 + 6);
        if ( (__int64)++v33 >= (int)v31 )
          goto LABEL_23;
      }
LABEL_48:
      sub_1BCAA44(FuncSideEffectTargetServants, v23);
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
      sub_1BCAA3C(FuncSideEffectTargetServants, v23);
    }
    v38 = *((_DWORD *)FuncSideEffectTargetServants + 6);
    v39 = FuncSideEffectTargetServants;
    if ( v38 >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        if ( v40 >= v38 )
          goto LABEL_48;
        v41 = (char *)&v39[2 * v40];
        v42 = *((_QWORD *)v41 + 4);
        if ( !v42 )
          goto LABEL_49;
        FuncSideEffectTargetServants = BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                         *((BattleServantData_o **)v41 + 4),
                                         questIndividualityArraya,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v43 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v44 = FuncSideEffectTargetServants;
        if ( (int)v43 >= 1 )
          break;
LABEL_38:
        v38 = v39[6];
        if ( (int)++v40 >= v38 )
          goto LABEL_39;
      }
      v45 = 0LL;
      while ( v45 < (unsigned int)v43 )
      {
        v46 = (BattleBuffData_BuffData_o *)v44[v45 + 4];
        FuncSideEffectTargetServants = BattleActionData__MakeSideEffectActionData_43116680(
                                         actionData,
                                         4,
                                         *(_DWORD *)(v42 + 24),
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        *((_DWORD *)FuncSideEffectTargetServants + 8) = *(_DWORD *)(v42 + 24);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          (BattleActionData_o *)FuncSideEffectTargetServants,
          v46,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v47);
        LODWORD(v43) = *((_DWORD *)v44 + 6);
        if ( (__int64)++v45 >= (int)v43 )
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
      v52 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v48);
        v52 = BattleLogicFunction___c_TypeInfo;
      }
      _9__49_0 = (System_Action_object__o *)v52->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v52->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v52, v48);
          v52 = BattleLogicFunction___c_TypeInfo;
        }
        v54 = (Il2CppObject *)v52->static_fields->__9;
        _9__49_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData__TypeInfo, v48, v49, v50);
        System_Action_object____ctor(_9__49_0, v54, Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, 0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Action_BattleActionData__o *)_9__49_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
          (int64_t)_9__49_0,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__49_0,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActionData___);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleLogicFunction_o *v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  BattleLogicFunction_o *v35; // x21
  int logic; // w8
  __int64 v37; // x23
  BattleActionData_BuffData_o *v38; // x22
  BattleActionData_o *NoEffectObject; // x23
  __int64 v40; // x0

  v17 = this;
  if ( (byte_4B18D91 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(
                                      &BattleActionData_BuffData___TypeInfo,
                                      actiondata,
                                      *(_QWORD *)&healPoint);
    byte_4B18D91 = 1;
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
      sub_1BCAA3C(this, actiondata);
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
  v28 = this;
  v19->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v19->fields.tamamocatTreasureDeviceIds,
    (int64_t)this,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v19->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 64, 0, 0LL);
  this = (BattleLogicFunction_o *)sub_1BCA888(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v35 = this;
  if ( v28 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA91C(v28, this->klass->_1.element_class);
    if ( !this )
    {
      v40 = sub_1BCAA60(0LL);
      sub_1BCA908(v40, 0LL);
    }
  }
  if ( !LODWORD(v35->fields.logic) )
    goto LABEL_27;
  v35->fields.logictarget = (struct BattleLogicTarget_o *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->fields.logictarget, (int64_t)v28, v29, v30, v31, v32, v33, v34);
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
    sub_1BCAA44(this, actiondata);
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
      sub_1BCAA3C(data, funcResult);
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
      sub_1BCAA3C(SkillFromBuff, v13);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x25
  int max_length; // w8
  int v21; // w20
  BattleActionData_SideEffectData_o *v22; // x23
  BattleServantData_o *v23; // x26
  int32_t v24; // w1
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v28; // x27
  unsigned __int64 v29; // x23
  BattleBuffData_BuffData_o *v30; // x29
  BattleActionData_o *v31; // x28
  int v32; // w0
  const MethodInfo *v33; // x6
  int32_t v34; // w0
  struct BattleActionData_SideEffectData_array *v35; // [xsp+8h] [xbp-88h]
  SkillLvMaster_o *v37; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v41; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v42; // 0:x1.8

  if ( (byte_4B18D7D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, arg, mainAction);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B18D7D = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v37 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v18);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    v35 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v21 >= (unsigned int)max_length )
        goto LABEL_26;
      v22 = SideEffectList_k__BackingField->m_Items[v21];
      if ( !v22 )
        goto LABEL_25;
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v22->fields.targetId, 0LL);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v23 = (BattleServantData_o *)Instance;
        v24 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v24,
          v23->fields.uniqueId,
          (const MethodInfo_34D778C *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v41 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v41, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_43709300(
                                        actionSvtData,
                                        v22->fields.sideEffectActs,
                                        command,
                                        v23,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v28 = Instance;
          if ( m_CancellationTokenSource )
          {
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v29 = 0LL;
              while ( v29 < (unsigned int)m_CancellationTokenSource )
              {
                v30 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v28->fields._DispLog + v29);
                v31 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v18, v25, v26);
                BattleActionData___ctor(v31, 0LL);
                if ( !v31 )
                  goto LABEL_25;
                v31->fields.actorId = actionSvtData->fields.uniqueId;
                v31->fields.targetId = v23->fields.uniqueId;
                v32 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  v37,
                  v31,
                  v30,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v32 == 1,
                  v33);
                v34 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v31, v34, 0LL);
                LODWORD(m_CancellationTokenSource) = v28->fields.m_CancellationTokenSource;
                if ( (__int64)++v29 >= (int)m_CancellationTokenSource )
                  goto LABEL_22;
              }
LABEL_26:
              sub_1BCAA44(Instance, v18);
            }
LABEL_22:
            v42 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v42, 0LL);
            SideEffectList_k__BackingField = v35;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v21;
    }
    while ( v21 < max_length );
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct BattleData_o *data; // x8
  _QWORD *v20; // x9
  __int64 logic_low; // x10
  int32_t funcType; // w23
  Il2CppObject *MasterData_object; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v25; // x23
  unsigned __int64 v26; // x26
  const MethodInfo *v27; // x4
  BattleLogicFunction_o *v28; // x24
  BattleLogicFunction_o *v29; // x25

  v8 = this;
  if ( (byte_4B18D79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&targetId, action);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B18D79 = 1;
  }
  if ( !action )
    goto LABEL_23;
  this = (BattleLogicFunction_o *)action->fields.funcTargetList;
  if ( !this )
    goto LABEL_23;
  data = this->fields.data;
  v20 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.logic);
  if ( !data )
    goto LABEL_23;
  logic_low = SLODWORD(this->fields.logic);
  if ( (unsigned int)logic_low >= LODWORD(data->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      targetId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(this, *(_QWORD *)&targetId);
  }
  logic = this->fields.logic;
  v25 = this;
  if ( (int)logic >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)logic )
    {
      if ( !MasterData_object )
        goto LABEL_23;
      this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        *((_DWORD *)&v25->fields.logictarget + v26),
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        v28 = this;
        this = (BattleLogicFunction_o *)BattleLogicFunction__getTargetids(
                                          v8,
                                          action,
                                          HIDWORD(this->fields.logic),
                                          baseVals,
                                          v27);
        if ( !action->fields.funcTargetList )
          goto LABEL_23;
        v29 = this;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v28->fields.logic, (System_Int32_array *)v29, 0LL);
      }
      LODWORD(logic) = v25->fields.logic;
      if ( (__int64)++v26 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1BCAA44(this, *(_QWORD *)&targetId);
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
  __int64 v9; // x2
  _BOOL8 IsUpdateBuffProgressTurn; // x0
  const MethodInfo *v11; // x4
  bool v12; // w8

  v7 = this;
  if ( (byte_4B18D75 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15652/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/, *(_QWORD *)&buffType, isSelfTurn);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&StringLiteral_15653/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/, v8, v9);
    byte_4B18D75 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15653/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
                               &v7->fields.buffProgressTurnSelfList,
                               v4);
  if ( IsUpdateBuffProgressTurn )
  {
    v12 = 1;
  }
  else
  {
    if ( !BattleLogicFunction__IsUpdateBuffProgressTurn(
            (BattleLogicFunction_o *)IsUpdateBuffProgressTurn,
            buffType,
            (System_String_o *)StringLiteral_15652/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v11) )
      return;
    v12 = 0;
  }
  *isSelfTurn = v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        bool isProgress,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x22
  System_Int32_array *TargetList; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_object__o *v29; // x0
  System_Action_T__o *v30; // x21
  __int64 *v31; // x8

  if ( (byte_4B18DAA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleSkillInfoData__TypeInfo, dataVals, isProgress);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleSkillInfoData___, v7, v8);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__, v9, v10);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__, v11, v12);
    sub_1BCA7E0(&BattleLogicFunction___c__DisplayClass101_0_TypeInfo, v13, v14);
    byte_4B18DAA = 1;
  }
  v15 = sub_1BCAA2C(BattleLogicFunction___c__DisplayClass101_0_TypeInfo, dataVals, isProgress, method);
  BattleLogicFunction___c__DisplayClass101_0___ctor((BattleLogicFunction___c__DisplayClass101_0_o *)v15, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v18 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v15) )
  {
    sub_1BCAA3C(data, v16);
  }
  *(_DWORD *)(v15 + 16) = (_DWORD)data;
  *(_DWORD *)(v15 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v15 + 24) = TargetList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)TargetList, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v15 + 32) = 0;
  v29 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleSkillInfoData__TypeInfo, v26, v27, v28);
  v30 = (System_Action_T__o *)v29;
  if ( isProgress )
    v31 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v31 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v29, (Il2CppObject *)v15, *v31, 0LL);
  BasicHelper__ForEach_object_(v18, v30, (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v15 + 32);
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
    sub_1BCAA3C(this, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction___getTargetids_b__55_0(
        BattleLogicFunction_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  BattleData_o *data; // x0
  BattleServantData_o *v23; // x21
  BattleServantData_o *v24; // x19
  int v25; // w22
  float BuffTOLERANCEMagnification; // s0
  float v27; // s0
  float v28; // s1
  int32_t InstantDeathRate; // w0
  bool result; // w0
  float v31; // s0
  int32_t v32; // w0
  int32_t v33; // w8
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v35; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v37; // x22
  System_String_o *v38; // x19
  System_String_o *v39; // x0
  int v40; // w23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  int value; // [xsp+Ch] [xbp-74h]
  int32_t v43; // [xsp+18h] [xbp-68h] BYREF
  int32_t v44; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B18D7B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18125/*"checkFuncAction("*/, args, *(_QWORD *)&actorId);
    sub_1BCA7E0(&StringLiteral_175/*" < "*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_18124/*"checkFuncAction firstResult:false"*/, v20, v21);
    byte_4B18D7B = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_51;
  v23 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  v43 = 1000;
  v44 = 1000;
  if ( !baseVals )
    goto LABEL_51;
  v24 = (BattleServantData_o *)data;
  data = (BattleData_o *)DataVals__GetParam(baseVals, 0, 0, 0LL);
  value = (int)data;
  if ( !args )
    goto LABEL_51;
  if ( !BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
          args,
          targetId,
          baseVals,
          this->fields.data,
          0LL) )
    goto LABEL_19;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncListHaveSpecifyResults(
                           args,
                           targetId,
                           baseVals,
                           this->fields.data,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_19;
  if ( (value & 0x80000000) == 0 )
    goto LABEL_12;
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(args, targetId, baseVals->fields.funcIndex, 0LL) )
  {
LABEL_19:
    result = 0;
    *isDisplayLastFuncInvalid = 1;
    return result;
  }
  data = (BattleData_o *)BattleUtility__Abs_43794764(value, 0LL);
  value = (int)data;
LABEL_12:
  if ( !funcEnt )
    goto LABEL_51;
  if ( !FuncList__Check(1, funcEnt->fields.funcType, 0LL) )
  {
    data = (BattleData_o *)FuncList__Check(13, funcEnt->fields.funcType, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( actorId != targetId || (data = (BattleData_o *)DataVals__GetParam(baseVals, 57, 0, 0LL), (int)data < 1) )
      {
        if ( !v24 )
          goto LABEL_51;
        if ( !BattleServantData__checkAvoidInstantDeath(v24, v23, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          v44 = (int)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                               Next,
                               (float)value,
                               v24,
                               v23,
                               isTreasureDevice,
                               v35);
          goto LABEL_37;
        }
        v43 = 0;
        v44 = 1000;
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
        if ( v23 || !DataVals__isParam(baseVals, 74, 0LL) )
        {
          data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
          if ( !v24 )
            goto LABEL_51;
          v40 = (int)data;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v24,
                                                 v37,
                                                 v23,
                                                 0LL);
          v44 = BattleUtility__FloorToInt((float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v40, 0LL);
          if ( v23 )
          {
            v27 = BattleServantData__getBuffGRANTSUBSTATEMagnification(v23, v37, v24, 0LL) * 1000.0;
            v28 = (float)value;
            goto LABEL_18;
          }
          goto LABEL_35;
        }
        v31 = (float)BattleRandom__getNext(1000, 0LL);
        goto LABEL_33;
      }
      if ( FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
      {
        data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
        if ( !v24 )
          goto LABEL_51;
        v31 = (float)(BattleServantData__getBuffResistDelayNPTurn(v24, v23, 0LL) * 1000.0) + (float)(int)data;
LABEL_33:
        v32 = BattleUtility__FloorToInt(v31, 0LL);
LABEL_34:
        v44 = v32;
LABEL_35:
        v33 = value;
LABEL_45:
        v43 = v33;
        goto LABEL_46;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v32 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
    }
    v44 = 0;
    v33 = 1000;
    goto LABEL_45;
  }
  if ( buffEnt )
  {
    data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
    v25 = (int)data;
    if ( v23 )
    {
      if ( v24 )
      {
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v24,
                                       buffEnt->fields.vals,
                                       v23,
                                       &this->fields.wkStr,
                                       0LL);
        v44 = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v25, 0LL);
        v27 = BattleServantData__getBuffGRANTSTATEMagnification(
                v23,
                buffEnt->fields.vals,
                v24,
                &this->fields.wkStr,
                0,
                0LL)
            * 1000.0;
        v28 = (float)value;
LABEL_18:
        InstantDeathRate = BattleUtility__FloorToInt(v27 + v28, 0LL);
LABEL_37:
        v43 = InstantDeathRate;
        goto LABEL_46;
      }
LABEL_51:
      sub_1BCAA3C(data, args);
    }
    v31 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v38 = System_Int32__ToString((int32_t)&v44, 0LL);
  v39 = System_Int32__ToString((int32_t)&v43, 0LL);
  System_String__Concat_62414484(
    (System_String_o *)StringLiteral_18125/*"checkFuncAction("*/,
    v38,
    (System_String_o *)StringLiteral_175/*" < "*/,
    v39,
    0LL);
  return v44 < v43;
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
    sub_1BCAA3C(data, *(_QWORD *)&targetId);
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
  BattleActionData_o *v13; // x24
  __int64 v14; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v16; // x25
  int32_t Value; // w0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  if ( (byte_4B18DAF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
    byte_4B18DAF = 1;
  }
  v13 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt, baseVals);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_1BCAA3C(data, v14);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x26
  BattleActionData_o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NpPointToTurnConvert_o *v23; // x28
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  NpGaugeAbsorbResult_o *v27; // x27
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x4
  BattleActionData_o *v30; // x0
  const MethodInfo *v31; // x7
  float Turn_k__BackingField; // s0
  int32_t v33; // w6
  BattleActionData_o *v34; // x0

  v12 = this;
  if ( (byte_4B18DA5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
    sub_1BCA7E0(&NpGaugeAbsorbResult_TypeInfo, v13, v14);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&NpPointToTurnConvert_TypeInfo, v15, v16);
    byte_4B18DA5 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v19 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt, mainAction);
  BattleActionData___ctor(v19, 0LL);
  v23 = (NpPointToTurnConvert_o *)sub_1BCAA2C(NpPointToTurnConvert_TypeInfo, v20, v21, v22);
  NpPointToTurnConvert___ctor(v23, 0LL);
  v27 = (NpGaugeAbsorbResult_o *)sub_1BCAA2C(NpGaugeAbsorbResult_TypeInfo, v24, v25, v26);
  NpGaugeAbsorbResult___ctor(v27, (BaseNpGaugeConvert_o *)v23, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpTurn(v12, mainAction, funcTarget, v27, v28);
  if ( !v19
    || (BattleActionData__addAction(v19, (BattleActionData_o *)this, 0LL),
        v30 = BattleLogicFunction__AbsorbNpPoint(v12, mainAction, funcTarget, v27, v29),
        BattleActionData__addAction(v19, v30, 0LL),
        !dataVals_k__BackingField)
    || !v27 )
  {
LABEL_12:
    sub_1BCAA3C(this, *(_QWORD *)&targetId);
  }
  Turn_k__BackingField = v27->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v33 = 0x80000000;
  else
    v33 = (int)Turn_k__BackingField;
  v34 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          v33,
          v31);
  BattleActionData__addAction(v19, v34, 0LL);
  return v19;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x19
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t actorId; // w27
  BuffEntity_o *v61; // x25
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  BattleActionData_o *v65; // x19
  BattleServantData_o *v66; // x28
  BattleServantData_o *ServantData; // x26
  BattleActionData_MasterBuffData_o *v68; // x22
  __int64 v69; // x2
  __int64 v70; // x3
  int64_t v71; // x27
  const MethodInfo *v72; // x3
  char v73; // w19
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v75; // x4
  char v76; // w22
  __int64 v77; // x1
  bool v78; // w24
  int32_t type; // w19
  const MethodInfo *v80; // x3
  bool isEnemy; // w8
  bool *p_isEnemy; // x22
  char v83; // w9
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  __int64 v86; // x1
  int32_t v87; // w19
  __int64 v88; // x1
  int32_t v89; // w19
  __int64 v90; // x1
  int32_t v91; // w19
  __int64 v92; // x1
  int32_t v93; // w19
  int32_t tdCommandTypeChange; // w8
  int64_t v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x22
  __int64 v103; // x19
  int32_t v104; // w19
  struct BattleData_o *v105; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x24
  int32_t eventId; // w22
  EventPointBuffMaster_o *v109; // x19
  int32_t EventPointGroupId; // w29
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x22
  int logic; // w8
  int v114; // w10
  __int64 v115; // x9
  __int64 v116; // x11
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  int v120; // w29
  BattleData_o *v121; // x19
  BattleBuffData_CheckIndividualitiesData_o *v122; // x22
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  BattleBuffData_ParamAdd_o *v126; // x24
  int64_t v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  __int64 v134; // x22
  __int64 v135; // x19
  __int64 v136; // x1
  int32_t Param; // w22
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  int64_t v141; // x19
  bool v142; // w8
  int v143; // w8
  System_Int32_array *TargetIndiv; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int32_t v157; // w19
  BattleBuffData_IntervalData_o *IntervalData; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  System_Int32_array *ParamArray; // x0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  __int64 v172; // x1
  int32_t v173; // w19
  __int64 v174; // x1
  int32_t RelationId; // w19
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  BattleBuffData_RelationOverwriteData_o *v179; // x22
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  BattleDataDefine_c *v186; // x0
  int32_t v187; // w19
  bool v188; // w0
  float UpDownGiveHeal; // s8
  int32_t v190; // w0
  int v191; // s0
  int32_t v192; // w0
  int v193; // s0
  System_Int32_array *v194; // x0
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  System_Int32_array *v201; // x0
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  System_Int32_array *v208; // x0
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  BattleBuffData_SaveArrayData_array *v215; // x0
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  BattleBuffData_SaveArrayData_array *v222; // x0
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  BattleBuffData_SaveArrayData_array *v229; // x0
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  __int64 v236; // x1
  int32_t v237; // w19
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  unsigned int ShowStateWarBoardEnemyEquip; // w0
  struct BattleData_o *v247; // x8
  System_Int32_array *AddIndividualty; // x0
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  System_Int32_array *LinkageTargetIndividualty; // x0
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  const MethodInfo *v262; // x3
  struct BattleData_o *v263; // x8
  System_Int32_array *ValsList; // x0
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  int32_t v271; // w0
  int v272; // w8
  int v273; // w9
  UnityEngine_Object_o *v274; // x19
  bool v275; // w22
  int32_t v276; // w19
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w24
  __int64 v279; // x1
  int32_t v280; // w19
  __int64 v281; // x4
  int32_t v282; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v284; // x7
  __int64 v285; // x1
  __int64 v286; // x2
  __int64 v287; // x3
  BattleActionEffect_AddChangeMaxHpBuff_o *v288; // x19
  BattleLogicFunction_o *v289; // x22
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  BattleActionEffect_Base_o *v296; // x0
  int32_t id; // w19
  __int64 v298; // x2
  __int64 v299; // x3
  System_Collections_Generic_List_int__o *v300; // x0
  System_String_o *i; // x0
  System_String_o *v302; // x0
  System_String_o *v303; // x0
  System_String_o *v304; // x0
  System_Int32_array *QuestIndividualities; // x0
  __int64 v306; // x1
  UnityEngine_Object_o *v307; // x22
  System_Int32_array *v308; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v310; // x8
  __int64 v311; // x1
  UnityEngine_Object_o *v312; // x19
  int v313; // w8
  BattleLogicFunction_o *v314; // x19
  unsigned int v315; // w22
  System_Int32_array *ShortenMaxCountArray; // x0
  int64_t v317; // x2
  int32_t v318; // w3
  System_String_o *v319; // x4
  BattleSetupInfo_o *v320; // x5
  FollowerInfo_o *v321; // x6
  PartyListViewItem_o *v322; // x7
  BattleActionData_BuffData_o *v323; // x22
  System_Int32_array *TargetFunctionIndividuality; // x0
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  System_Int32_array *TargetBuffIndividuality; // x0
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  int32_t v338; // w19
  struct BattleData_o *v339; // x8
  __int64 v340; // x1
  __int64 v341; // x2
  __int64 v342; // x3
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v344; // x22
  FunctionEntity_o *v345; // x2
  DataVals_o *v346; // x3
  int32_t v347; // w4
  const MethodInfo *v348; // x5
  bool v349; // w0
  BattleActionData_BuffData_o *v350; // x22
  const MethodInfo *v351; // x3
  __int64 v353; // x0
  bool *v354; // [xsp+0h] [xbp-D0h]
  int32_t treasureDvcId; // [xsp+Ch] [xbp-C4h]
  BattleActionData_o *userCommandCodeId; // [xsp+10h] [xbp-C0h]
  int userCommandCodeIda; // [xsp+10h] [xbp-C0h]
  int32_t funcIndex; // [xsp+1Ch] [xbp-B4h]
  BattleActionData_o *v359; // [xsp+20h] [xbp-B0h]
  BattleActionData_o *v360; // [xsp+30h] [xbp-A0h]
  int32_t v361; // [xsp+38h] [xbp-98h]
  unsigned int uniqueId; // [xsp+3Ch] [xbp-94h]
  FunctionEntity_o *funcEnt; // [xsp+40h] [xbp-90h]
  BattleActionData_BuffData_o *v365; // [xsp+50h] [xbp-80h]
  Il2CppObject *entity; // [xsp+58h] [xbp-78h] BYREF
  int v367; // [xsp+68h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-64h] BYREF

  v8 = mainAction;
  v9 = this;
  if ( (byte_4B18D82 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo, mainAction, funcTarget);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v10, v11);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v12, v13);
    sub_1BCA7E0(&BattleBuffData_BuffData___TypeInfo, v14, v15);
    sub_1BCA7E0(&BattleBuffData_BuffData_TypeInfo, v16, v17);
    sub_1BCA7E0(&BuffList_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffTypeDetailMaster___, v26, v27);
    sub_1BCA7E0(&DataManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__, v30, v31);
    sub_1BCA7E0(&BattleBuffData_FieldAliveCondData_TypeInfo, v32, v33);
    sub_1BCA7E0(&int___TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v38, v39);
    sub_1BCA7E0(&BattleActionData_MasterBuffData_TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Math_TypeInfo, v42, v43);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v44, v45);
    sub_1BCA7E0(&BattleBuffData_ParamAdd_TypeInfo, v46, v47);
    sub_1BCA7E0(&BattleBuffData_RelationOverwriteData_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51);
    sub_1BCA7E0(&StringLiteral_19877/*"functionAddState=>"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_13429/*"TAMAMOCAT_STUN_BUFF_ID"*/, v54, v55);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&StringLiteral_13430/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v56, v57);
    byte_4B18D82 = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v367 = 0;
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
  v61 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, void *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._15_GetFixBuffEntity.method)(
                          funcTarget,
                          funcTarget->klass[1]._1.image,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  funcIndex = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = (BattleActionData_o *)v8->fields.userCommandCodeId;
  treasureDvcId = v8->fields.treasureDvcId;
  v65 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v62, v63, v64);
  BattleActionData___ctor(v65, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_290;
  v359 = v65;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v9->fields.data )
    goto LABEL_290;
  v66 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v9->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._8_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._9_AddBuff.methodPtr);
  if ( !v61 )
    goto LABEL_290;
  v68 = (BattleActionData_MasterBuffData_o *)this;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v61, 142, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v68 = (BattleActionData_MasterBuffData_o *)sub_1BCAA2C(
                                                 BattleActionData_MasterBuffData_TypeInfo,
                                                 mainAction,
                                                 v69,
                                                 v70);
    BattleActionData_MasterBuffData___ctor(v68, funcEnt, 0LL);
  }
  if ( !ServantData )
    goto LABEL_290;
  v361 = actorId;
  if ( !v68 )
    goto LABEL_290;
  v68->fields.targetId = ServantData->fields.uniqueId;
  v68->fields.functionIndex = funcIndex;
  v71 = sub_1BCAA2C(BattleBuffData_BuffData_TypeInfo, mainAction, v69, v70);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v71, 0LL);
  if ( !v71 )
    goto LABEL_290;
  *(_DWORD *)(v71 + 16) = v61->fields.id;
  if ( !args )
    goto LABEL_290;
  *(_DWORD *)(v71 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v71 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v71 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  *(_DWORD *)(v71 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v71, dataVals_k__BackingField, 0LL);
  v73 = v8->fields.isReversalShortBuffTurn ^ shortbuff;
  if ( (v73 & 1) != 0 )
    --*(_DWORD *)(v71 + 20);
  AdjustmentBuffTurn = BattleLogicFunction__GetAdjustmentBuffTurn(v9, dataVals_k__BackingField, v66, v72);
  v365 = (BattleActionData_BuffData_o *)v68;
  if ( AdjustmentBuffTurn )
  {
    v73 ^= 1u;
    *(_DWORD *)(v71 + 20) += AdjustmentBuffTurn;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v9, uniqueId, v61, v73 & 1, v75);
  v76 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v73 ^= 1u;
    ++*(_DWORD *)(v71 + 20);
  }
  *(_DWORD *)(v71 + 68) = v361;
  if ( !funcEnt )
    goto LABEL_290;
  v78 = (v73 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v78;
  type = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v77);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v78 = 1;
    isSelfTurn = 1;
  }
  if ( (v76 & 1) != 0 )
  {
    isEnemy = ServantData->fields.isEnemy;
    p_isEnemy = &ServantData->fields.isEnemy;
    v83 = isEnemy ^ v78 ^ 1;
  }
  else
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v9, v61->fields.type, &isSelfTurn, v80);
    p_isEnemy = &ServantData->fields.isEnemy;
    *(_BYTE *)(v71 + 180) = ServantData->fields.isEnemy ^ isSelfTurn ^ 1;
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v61, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v83 = *(_BYTE *)(v71 + 180);
      isEnemy = *p_isEnemy;
      goto LABEL_32;
    }
    isEnemy = *p_isEnemy;
    v83 = *p_isEnemy ^ ((_DWORD)this == 0);
  }
  *(_BYTE *)(v71 + 180) = v83;
LABEL_32:
  *(_BYTE *)(v71 + 192) = v83 ^ isEnemy ^ 1;
  data = v9->fields.data;
  if ( !data )
    goto LABEL_290;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_290;
  *(_DWORD *)(v71 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v61,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v61, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v71 + 184) = ProgressTurnCond;
  *(_DWORD *)(v71 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v71 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v365->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v87 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v86);
  if ( BuffList__CheckType(143, v87, 0LL) )
    goto LABEL_48;
  v89 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v88);
  if ( BuffList__CheckType(145, v89, 0LL) )
    goto LABEL_48;
  v91 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v90);
  if ( BuffList__CheckType(146, v91, 0LL) )
    goto LABEL_48;
  v93 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v92);
  if ( BuffList__CheckType(147, v93, 0LL) )
  {
LABEL_48:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v71 + 28) = tdCommandTypeChange;
  }
  v354 = p_isEnemy;
  *(_DWORD *)(v71 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v71 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v95 = sub_1BCA888(int___TypeInfo, 2LL);
  *(_QWORD *)(v71 + 40) = v95;
  sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 40), v95, v96, v97, v98, v99, v100, v101);
  v102 = *(_QWORD *)(v71 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v102 )
    goto LABEL_290;
  if ( !*(_DWORD *)(v102 + 24) )
    goto LABEL_291;
  *(_DWORD *)(v102 + 32) = (_DWORD)this;
  v103 = *(_QWORD *)(v71 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v103 )
    goto LABEL_290;
  if ( *(_DWORD *)(v103 + 24) <= 1u )
    goto LABEL_291;
  v360 = v8;
  *(_DWORD *)(v103 + 36) = (_DWORD)this;
  v104 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, mainAction);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v104, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v105 = v9->fields.data;
    if ( !v105 )
      goto LABEL_290;
    battle_ent = v105->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_290;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_290;
    v109 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
                                        v109,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_290;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v114 = 0;
        v115 = 0LL;
        do
        {
          if ( logic == v114 )
            goto LABEL_291;
          v116 = *((_QWORD *)&this->fields.logictarget + v114);
          if ( !v116 )
            goto LABEL_290;
          if ( value < *(int *)(v116 + 28) )
            break;
          ++v114;
          v115 = v116;
        }
        while ( logic != v114 );
        if ( v115 )
          *(_DWORD *)(v71 + 28) += *(_DWORD *)(v115 + 64);
      }
    }
  }
  *(_DWORD *)(v71 + 416) = DataVals__GetParamAddIndividualityTargetType(dataVals_k__BackingField, 0LL);
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0LL) )
  {
    v120 = *(_DWORD *)(v71 + 28);
    v121 = v9->fields.data;
    v122 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                          BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                          v117,
                                                          v118,
                                                          v119);
    BattleBuffData_CheckIndividualitiesData___ctor_43379556(v122, v66, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    v126 = (BattleBuffData_ParamAdd_o *)sub_1BCAA2C(BattleBuffData_ParamAdd_TypeInfo, v123, v124, v125);
    BattleBuffData_ParamAdd___ctor_43389356(v126, dataVals_k__BackingField, 0LL);
    *(_DWORD *)(v71 + 28) = BattleBuffData__GetTotalParamAddValue(
                              (BattleBuffData_BuffData_o *)v71,
                              v121,
                              v122,
                              v126,
                              0LL)
                          + v120;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v127 = sub_1BCA888(int___TypeInfo, 2LL);
    *(_QWORD *)(v71 + 104) = v127;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 104), v127, v128, v129, v130, v131, v132, v133);
    v134 = *(_QWORD *)(v71 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v134 )
      goto LABEL_290;
    if ( !*(_DWORD *)(v134 + 24) )
      goto LABEL_291;
    *(_DWORD *)(v134 + 32) = (_DWORD)this;
    v135 = *(_QWORD *)(v71 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v135 )
      goto LABEL_290;
    if ( *(_DWORD *)(v135 + 24) <= 1u )
      goto LABEL_291;
    *(_DWORD *)(v135 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v71 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v71 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v71 + 60) = v361;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x8000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 143, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v141 = sub_1BCAA2C(BattleBuffData_FieldAliveCondData_TypeInfo, v138, v139, v140);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v141, 0LL);
    if ( !v141 )
      goto LABEL_290;
    v142 = *v354;
    *(_BYTE *)(v141 + 17) = Param > 0;
    *(_BYTE *)(v141 + 16) = v142;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, mainAction);
    if ( Param >= 0 )
      v143 = Param;
    else
      v143 = -Param;
    *(_DWORD *)(v141 + 20) = v143;
    TargetIndiv = BuffEntity__GetTargetIndiv(v61, 0LL);
    *(_QWORD *)(v141 + 24) = TargetIndiv;
    sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 24), (int64_t)TargetIndiv, v145, v146, v147, v148, v149, v150);
    *(_BYTE *)(v141 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v61, 0LL);
    *(_QWORD *)(v71 + 152) = v141;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 152), v141, v151, v152, v153, v154, v155, v156);
    args->fields.updateField = 1;
  }
  v157 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v136);
  if ( BuffList__IsIntervalPossibleBuff(v157, 0LL) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v71 + 360) = IntervalData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 360), (int64_t)IntervalData, v159, v160, v161, v162, v163, v164);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v71, 0LL) )
    args->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 114, 0LL);
  *(_QWORD *)(v71 + 328) = ParamArray;
  sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 328), (int64_t)ParamArray, v166, v167, v168, v169, v170, v171);
  *(_DWORD *)(v71 + 208) = BuffEntity__GetCardEffectId(v61, 0LL);
  v173 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v172);
  if ( BuffList__CheckType(144, v173, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v61, 0LL);
    v179 = (BattleBuffData_RelationOverwriteData_o *)sub_1BCAA2C(
                                                       BattleBuffData_RelationOverwriteData_TypeInfo,
                                                       v176,
                                                       v177,
                                                       v178);
    BattleBuffData_RelationOverwriteData___ctor(v179, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v61, 0LL);
      if ( !v179 )
        goto LABEL_290;
      v179->fields.id = (int)this;
      v186 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, mainAction);
        v186 = BattleDataDefine_TypeInfo;
      }
      v179->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                   v61,
                                   v186->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                   0LL);
      v179->fields.defPriority = BuffEntity__getDefRelationPriority(
                                   v61,
                                   BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                   0LL);
    }
    *(_QWORD *)(v71 + 168) = v179;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 168), (int64_t)v179, v180, v181, v182, v183, v184, v185);
  }
  v187 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v174);
  if ( BuffList__CheckType(154, v187, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_290;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v365, 1, 0LL);
  }
  v188 = BuffEntity__checkBuffType(v61, 7, 0LL);
  if ( v66 && v188 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v66, ServantData, 0LL);
    v190 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v71 + 28), 0LL);
    v191 = *(_DWORD *)(v71 + 52);
    *(_DWORD *)(v71 + 28) = v190;
    v192 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v191, 0LL);
    v193 = *(_DWORD *)(v71 + 56);
    *(_DWORD *)(v71 + 52) = v192;
    *(_DWORD *)(v71 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v193, 0LL);
    BattleServantData__getIndividualities(v66, 0LL, 1, 0, 0LL);
  }
  *(_BYTE *)(v71 + 32) = 0;
  *(_BYTE *)(v71 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(args, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v71 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v71 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v71 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v71 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v71 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v71 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v71 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v71 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v194 = DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v71 + 224) = v194;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 224), (int64_t)v194, v195, v196, v197, v198, v199, v200);
    v201 = DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v71 + 232) = v201;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 232), (int64_t)v201, v202, v203, v204, v205, v206, v207);
    v208 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v71 + 240) = v208;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 240), (int64_t)v208, v209, v210, v211, v212, v213, v214);
    v215 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 194, 0LL);
    *(_QWORD *)(v71 + 424) = v215;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 424), (int64_t)v215, v216, v217, v218, v219, v220, v221);
    v222 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 195, 0LL);
    *(_QWORD *)(v71 + 432) = v222;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 432), (int64_t)v222, v223, v224, v225, v226, v227, v228);
    v229 = DataVals__GetParamAddIndividualityAndCheckArrayData(dataVals_k__BackingField, 196, 0LL);
    *(_QWORD *)(v71 + 440) = v229;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 440), (int64_t)v229, v230, v231, v232, v233, v234, v235);
    *(_DWORD *)(v71 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v71 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v71 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v71 + 384) = DataVals__GetParam(dataVals_k__BackingField, 181, 0, 0LL);
    *(_DWORD *)(v71 + 388) = DataVals__GetParam(dataVals_k__BackingField, 182, 0, 0LL);
  }
  v237 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v236);
  if ( BuffList__CheckType(162, v237, 0LL) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v61, 0LL);
    *(_QWORD *)(v71 + 256) = UpBuffRateBuffTypeList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v71 + 256),
      (int64_t)UpBuffRateBuffTypeList,
      v239,
      v240,
      v241,
      v242,
      v243,
      v244);
    *(_DWORD *)(v71 + 264) = BuffEntity__GetMaxBuffRate(v61, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_154:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v71, (int32_t)mainAction, 0LL);
    goto LABEL_171;
  }
  if ( *(_BYTE *)(v71 + 33) )
  {
    externalArg = args->fields.externalArg;
    if ( !externalArg )
      goto LABEL_290;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v66 )
        goto LABEL_290;
      if ( v66->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        ShowStateWarBoardEnemyEquip = BuffEntity__GetShowStateWarBoardEnemyEquip(v61, 0, 0LL);
        LODWORD(mainAction) = ShowStateWarBoardEnemyEquip;
        if ( ShowStateWarBoardEnemyEquip )
          goto LABEL_154;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, ShowStateWarBoardEnemyEquip);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_290;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v61->fields.type,
                                          (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
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
    v247 = v9->fields.data;
    if ( !v247 )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)v247->fields.battleEvent;
    if ( !this )
      goto LABEL_290;
    ((void (__fastcall *)(BattleLogicFunction_o *, int64_t, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v71,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_171:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v71 + 120) = AddIndividualty;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 120), (int64_t)AddIndividualty, v249, v250, v251, v252, v253, v254);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v71 + 128) = LinkageTargetIndividualty;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v71 + 128),
      (int64_t)LinkageTargetIndividualty,
      v256,
      v257,
      v258,
      v259,
      v260,
      v261);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_290;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v9, (BattleBuffData_BuffData_o *)v71, funcTarget, v262);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v61, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_194;
    v263 = v9->fields.data;
    if ( !v263 )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)v263->fields.battleEvent;
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
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v71, 256, 0LL);
    }
  }
  *(_BYTE *)(v71 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 158, 0LL);
  *(_DWORD *)(v71 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v71 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v71 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v71 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v71 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = DataVals__GetValsList(dataVals_k__BackingField, 100, 0LL);
  *(_QWORD *)(v71 + 304) = ValsList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 304), (int64_t)ValsList, v265, v266, v267, v268, v269, v270);
  v271 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v272 = *(_DWORD *)(v71 + 60);
  if ( v271 )
    v273 = v271;
  else
    v273 = 1000;
  *(_DWORD *)(v71 + 48) = v273;
  if ( v272 < 1 )
    goto LABEL_204;
  v274 = (UnityEngine_Object_o *)v9->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, mainAction);
  if ( UnityEngine_Object__op_Inequality(v274, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v9->fields.logic;
    if ( !this )
      goto LABEL_290;
    v275 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v71 + 60), 0LL);
  }
  else
  {
LABEL_204:
    v275 = 1;
  }
  v276 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, mainAction);
  if ( BuffList__CheckAccumulation(v276, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  mainAction = userCommandCodeId;
  *(_QWORD *)(v71 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_290;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v71 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v71 + 348) = *(_QWORD *)&v360->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, int64_t, Il2CppMethodPointer))funcTarget->klass->vtable._7_ApplyPrevSaveBuffData.method)(
    funcTarget,
    v71,
    funcTarget->klass->vtable._8_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v275 )
    goto LABEL_219;
  v280 = v61->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v279);
  if ( BuffList__CheckUpdateHp(v280, 0LL) )
  {
    v365->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v281 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v282 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v9,
                       v282,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0LL,
                       0LL,
                       v284);
        this = (BattleLogicFunction_o *)v359;
        if ( !v359 )
          goto LABEL_290;
        BattleActionData__addAction(v359, mainAction, 0LL);
      }
      v281 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, int64_t, __int64, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._9_AddBuff.method)(
      funcTarget,
      v365,
      v71,
      1LL,
      v281,
      funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr);
    this = (BattleLogicFunction_o *)v359;
    if ( !v359 )
      goto LABEL_290;
    BattleActionData__addReflectLogicResultServantId(v359, uniqueId, 0LL);
    v288 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1BCAA2C(
                                                        BattleActionEffect_AddChangeMaxHpBuff_TypeInfo,
                                                        v285,
                                                        v286,
                                                        v287);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v288, 0LL);
    this = (BattleLogicFunction_o *)sub_1BCA888(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_290;
    v289 = this;
    this = (BattleLogicFunction_o *)sub_1BCA91C(v71, this->klass->_1.element_class);
    if ( !this )
    {
      v353 = sub_1BCAA60(0LL);
      sub_1BCA908(v353, 0LL);
    }
    if ( !LODWORD(v289->fields.logic) )
      goto LABEL_291;
    v289->fields.logictarget = (struct BattleLogicTarget_o *)v71;
    sub_1BCA784((PartyOrganizationUtility_o *)&v289->fields.logictarget, v71, v290, v291, v292, v293, v294, v295);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v288 )
      goto LABEL_290;
    v296 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v288->klass->vtable._7_InitBuff.method)(
                                          v288,
                                          v289,
                                          uniqueId,
                                          (unsigned int)((_DWORD)this - userCommandCodeIda),
                                          v288->klass->vtable._8_PartialPreActionProc.methodPtr);
    BattleActionData_BuffData__SetActionEffectProc(v365, v296, 0LL);
  }
  else
  {
LABEL_219:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, int64_t, bool, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._9_AddBuff.method)(
      funcTarget,
      v365,
      v71,
      v275,
      0LL,
      funcTarget->klass->vtable._10_AfterAddBuffProc.methodPtr);
  }
  id = v61->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13429/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v300 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       mainAction,
                                                       v298,
                                                       v299);
    System_Collections_Generic_List_int____ctor(
      v300,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    v367 = 1;
    for ( i = System_Int32__ToString((int32_t)&v367, 0LL); ; i = System_Int32__ToString((int32_t)&v367, 0LL) )
    {
      v302 = System_String__Concat_62401220((System_String_o *)StringLiteral_13430/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v302, 0LL) == -1 )
        break;
      v303 = System_Int32__ToString((int32_t)&v367, 0LL);
      v304 = System_String__Concat_62401220((System_String_o *)StringLiteral_13430/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v303, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v304, 0LL);
      if ( (_DWORD)this == treasureDvcId )
      {
        if ( !v66 )
          goto LABEL_290;
        BattleServantData__SetIsSleepWaitMode(v66, 1, 0LL);
      }
      ++v367;
    }
  }
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_290;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v307 = (UnityEngine_Object_o *)v9->fields.logic;
  v308 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v306);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v307, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v310 = v9->fields.logic;
    if ( !v310 )
      goto LABEL_290;
    perf = v310->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v308, perf, 0LL);
  if ( BuffEntity__checkBuffType(v61, 133, 0LL) || *(_QWORD *)(v71 + 312) )
  {
    v312 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v311);
    if ( UnityEngine_Object__op_Inequality(v312, 0LL, 0LL) )
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
    v313 = (int)this->fields.logic;
    v314 = this;
    if ( v313 >= 1 )
    {
      v315 = 0;
      while ( v315 < v313 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v314->fields.logictarget + (int)v315);
        if ( !this )
          goto LABEL_290;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v313 = (int)v314->fields.logic;
        if ( (int)++v315 >= v313 )
          goto LABEL_258;
      }
LABEL_291:
      sub_1BCAA44(this, mainAction);
    }
  }
LABEL_258:
  if ( BuffEntity__checkBuffType(v61, 206, 0LL) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v71 + 392) = ShortenMaxCountArray;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v71 + 392),
      (int64_t)ShortenMaxCountArray,
      v317,
      v318,
      v319,
      v320,
      v321,
      v322);
  }
  v323 = v365;
  if ( BuffEntity__checkBuffType(v61, 208, 0LL) )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v71 + 400) = TargetFunctionIndividuality;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v71 + 400),
      (int64_t)TargetFunctionIndividuality,
      v325,
      v326,
      v327,
      v328,
      v329,
      v330);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v71 + 408) = TargetBuffIndividuality;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(v71 + 408),
      (int64_t)TargetBuffIndividuality,
      v332,
      v333,
      v334,
      v335,
      v336,
      v337);
  }
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v61, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v338 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, mainAction);
      this = (BattleLogicFunction_o *)System_Math__Max_63220196(0, userCommandCodeIda - v338, 0LL);
      *(_DWORD *)(v71 + 136) = (_DWORD)this;
    }
  }
  v339 = v9->fields.data;
  if ( !v339 )
    goto LABEL_290;
  this = (BattleLogicFunction_o *)v339->fields.battleEvent;
  if ( !this )
    goto LABEL_290;
  *(_BYTE *)(v71 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, int64_t, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v71,
                            v61,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v61, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v344 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                          BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                          v340,
                                                          v341,
                                                          v342);
    BattleBuffData_CheckIndividualitiesData___ctor_43379556(v344, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_43192668(buffData, 83, v344, 1, 0, 0LL, 0LL, 0LL);
    if ( !this )
      goto LABEL_290;
    v323 = v365;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v9, (int32_t)mainAction, v345, v346, v347, v348);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v71 + 272) = v361;
  v349 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v350 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, int64_t, FunctionEntity_o *, bool, Il2CppMethodPointer))funcTarget->klass->vtable._12_MakeAddActionBuffData.method)(
                                          funcTarget,
                                          v323,
                                          v71,
                                          funcEnt,
                                          v349,
                                          funcTarget->klass->vtable._13_GetConvertBuffEntity.methodPtr);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v71 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 148, 0, 0LL) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v61, 0LL) )
  {
    *(_BYTE *)(v71 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v9, ServantData, v61, v351);
  if ( BuffEntity__getDamageRelease(v61, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v61, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v359
    || (BattleActionData__setBuffData(v359, v350, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v9->fields.data) == 0LL) )
  {
LABEL_290:
    sub_1BCAA3C(this, mainAction);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v350, 0LL);
  BattleActionData__addAction(v360, v359, 0LL);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, int64_t, Il2CppMethodPointer))funcTarget->klass->vtable._10_AfterAddBuffProc.method)(
    funcTarget,
    v360,
    v350,
    v71,
    funcTarget->klass->vtable._11_MakeWrapTarget.methodPtr);
  return (BattleBuffData_BuffData_o *)v71;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct DataVals_o *dataVals_k__BackingField; // x23
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x25
  __int64 v20; // x2
  __int64 v21; // x3
  int32_t uniqueId; // w20
  int32_t funcIndex; // w21
  bool IsCommandSideEffect; // w0
  const MethodInfo *v25; // x7
  __int64 v26; // x19
  int32_t v27; // w8
  int64_t v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // w26
  int32_t v36; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x6
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  BattleActionData_ShiftServant_o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  SimpleHpData_o *v47; // x27
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  int32_t MaxHp; // w0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  SimpleHpData_o *v55; // x25
  int32_t CurrentShiftPos; // w0
  EnemySimpleHpData_o *v57; // x25
  unsigned int Value; // w0
  int v59; // w0
  int v60; // w24
  int v61; // w28
  int32_t v62; // w29
  int32_t Param; // w0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  SimpleHpData_o *v67; // x26
  unsigned int v68; // w19
  unsigned int MaxShiftIconPos; // w0
  int v70; // [xsp+Ch] [xbp-84h]
  BattleActionData_ShiftServant_o *v71; // [xsp+10h] [xbp-80h]
  BattleActionData_o *v72; // [xsp+18h] [xbp-78h]
  BattleLogicFunction_o *v73; // [xsp+28h] [xbp-68h]

  v73 = this;
  if ( (byte_4B18DAC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, mainAction, funcUnit);
    sub_1BCA7E0(&EnemySimpleHpData_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Math_TypeInfo, v12, v13);
    sub_1BCA7E0(&BattleActionData_ShiftServant_TypeInfo, v14, v15);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&SimpleHpData_TypeInfo, v16, v17);
    byte_4B18DAC = 1;
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
                                          v73,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0LL,
                                          0LL,
                                          v25);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
          return;
        }
      }
    }
    goto LABEL_34;
  }
  v26 = sub_1BCAA2C(BattleActionData_TypeInfo, mainAction, v20, v21);
  BattleActionData___ctor((BattleActionData_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_34;
  v27 = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v26 + 32) = v27;
  *(_DWORD *)(v26 + 36) = v27;
  v28 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
          shiftGauge,
          shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v26 + 64) = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 64), v28, v29, v30, v31, v32, v33, v34);
  if ( !dataVals_k__BackingField )
    goto LABEL_34;
  if ( !procArg_k__BackingField )
    goto LABEL_34;
  v35 = dataVals_k__BackingField->fields.funcIndex;
  v36 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v38 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v38,
                                    funcEnt,
                                    v36,
                                    v35,
                                    v38,
                                    0LL,
                                    v39);
  if ( !this )
    goto LABEL_34;
  BYTE5(this[1].fields.master) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v26, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v43 = (BattleActionData_ShiftServant_o *)sub_1BCAA2C(BattleActionData_ShiftServant_TypeInfo, v40, v41, v42);
  BattleActionData_ShiftServant___ctor(v43, 0, 0LL);
  if ( !v43 )
    goto LABEL_34;
  v72 = (BattleActionData_o *)v26;
  v71 = v43;
  BattleActionData_ShiftServant__setBeforeSvtData(v43, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  v47 = (SimpleHpData_o *)sub_1BCAA2C(SimpleHpData_TypeInfo, v44, v45, v46);
  SimpleHpData___ctor(v47, targetSvtData, 0LL);
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 184, 0LL) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0LL);
    v55 = (SimpleHpData_o *)sub_1BCAA2C(SimpleHpData_TypeInfo, v52, v53, v54);
    SimpleHpData___ctor(v55, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v47, v55, 0LL);
    v47 = v55;
  }
  v57 = (EnemySimpleHpData_o *)sub_1BCAA2C(EnemySimpleHpData_TypeInfo, v48, v49, v50);
  EnemySimpleHpData___ctor(v57, targetSvtData, 0LL);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v59 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v70 = v59;
  if ( v59 >= 0 )
    v60 = v59;
  else
    v60 = -v59;
  v61 = 1;
  if ( v59 < 1 )
    v62 = -1;
  else
    v62 = 1;
  while ( 1 )
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, mainAction);
    if ( v61 > v60 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v73->fields.data, v57, v62, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v67 = (SimpleHpData_o *)sub_1BCAA2C(SimpleHpData_TypeInfo, v64, v65, v66);
    SimpleHpData___ctor(v67, targetSvtData, 0LL);
    v68 = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      v68,
      MaxShiftIconPos,
      v47,
      v67,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v61;
    v47 = v67;
  }
  if ( v70 )
  {
    this = (BattleLogicFunction_o *)v73->fields.logic;
    if ( !this )
      goto LABEL_34;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v71, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v72, v71, 0LL);
  BattleActionData__SetShiftGauge(v72, shiftGauge, 0LL);
  if ( !mainAction )
LABEL_34:
    sub_1BCAA3C(this, mainAction);
  BattleActionData__AddAfterActionData(mainAction, v72, 0, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 data; // x0
  BattleData_o *v27; // x25
  BattleServantData_o *v28; // x24
  BattleLogicFunction_o *FieldSpace; // x0
  const MethodInfo *v30; // x7
  System_String_o *v31; // x0
  BattleData_o *v32; // x24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x22
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x1
  struct BattleData_o *v80; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v82; // x8
  _DWORD *v83; // x8
  int32_t v84; // w22
  int32_t v85; // t1
  BattleServantData_o *v86; // x23
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  BattleActionData_o *v90; // x21
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  int32_t Value; // [xsp+Ch] [xbp-54h] BYREF
  int32_t index[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v96; // [xsp+18h] [xbp-48h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B18D9D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, funcEnt);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_17258/*"baseVals.GetValue:"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_16242/*"] Index["*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_357/*" 召喚！NPC["*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_16245/*"] UniqueID["*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19878/*"functionCallServant>"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v24, v25);
    byte_4B18D9D = 1;
  }
  v96 = 0;
  *(_QWORD *)index = 0LL;
  Value = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  targetIndex = -1;
  if ( !baseVals )
    goto LABEL_33;
  v27 = this->fields.data;
  v28 = (BattleServantData_o *)data;
  data = DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v27 )
    goto LABEL_33;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(v27, playerId, &targetIndex, data & 1, 0LL);
  if ( !(_DWORD)FieldSpace )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v30);
  Value = DataVals__GetValue(baseVals, 0LL);
  v31 = System_Int32__ToString((int32_t)&Value, 0LL);
  System_String__Concat_62401220((System_String_o *)StringLiteral_17258/*"baseVals.GetValue:"*/, v31, 0LL);
  v96 = -1;
  if ( playerId == -1 )
  {
    v32 = this->fields.data;
    data = DataVals__GetValue(baseVals, 0LL);
    if ( !v32 )
      goto LABEL_33;
    FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v32, data, 0LL);
  }
  else
  {
    data = DataVals__GetValue(baseVals, 0LL);
    if ( !v28 )
      goto LABEL_33;
    FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v28, data, 0LL);
  }
  v96 = (int)FieldSpace;
  if ( (_DWORD)FieldSpace == -1 )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v30);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  index[1] = BattleData__getNextUniqueID((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  index[0] = BattleData__getNextNextIndex((BattleData_o *)data, 0LL);
  data = sub_1BCA888(string___TypeInfo, 7LL);
  if ( !data )
    goto LABEL_33;
  v39 = data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_34;
  v40 = StringLiteral_357/*" 召喚！NPC["*/;
  *(_QWORD *)(data + 32) = StringLiteral_357/*" 召喚！NPC["*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(data + 32), v40, v33, v34, v35, v36, v37, v38);
  data = (__int64)System_Int32__ToString((int32_t)&v96, 0LL);
  if ( *(_DWORD *)(v39 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v39 + 40) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 40), data, v41, v42, v43, v44, v45, v46);
  if ( *(_DWORD *)(v39 + 24) <= 2u )
    goto LABEL_34;
  v53 = StringLiteral_16245/*"] UniqueID["*/;
  *(_QWORD *)(v39 + 48) = StringLiteral_16245/*"] UniqueID["*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 48), v53, v47, v48, v49, v50, v51, v52);
  data = (__int64)System_Int32__ToString((int32_t)&index[1], 0LL);
  if ( *(_DWORD *)(v39 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v39 + 56) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 56), data, v54, v55, v56, v57, v58, v59);
  if ( *(_DWORD *)(v39 + 24) <= 4u
    || (v66 = StringLiteral_16242/*"] Index["*/,
        *(_QWORD *)(v39 + 64) = StringLiteral_16242/*"] Index["*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 64), v66, v60, v61, v62, v63, v64, v65),
        data = (__int64)System_Int32__ToString((int32_t)index, 0LL),
        *(_DWORD *)(v39 + 24) <= 5u)
    || (*(_QWORD *)(v39 + 72) = data,
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 72), data, v67, v68, v69, v70, v71, v72),
        *(_DWORD *)(v39 + 24) <= 6u) )
  {
LABEL_34:
    sub_1BCAA44(data, *(_QWORD *)&playerId);
  }
  v79 = StringLiteral_16236/*"]"*/;
  *(_QWORD *)(v39 + 80) = StringLiteral_16236/*"]"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 80), v79, v73, v74, v75, v76, v77, v78);
  System_String__Concat_62414748((System_String_array *)v39, 0LL);
  data = (__int64)this->fields.data;
  if ( !data
    || (data = (__int64)BattleData__createSummonEnemyServantData(
                          (BattleData_o *)data,
                          index[1],
                          index[0],
                          v96,
                          0LL,
                          0LL,
                          0LL),
        (v80 = this->fields.data) == 0LL)
    || (e_entryid = v80->fields.e_entryid) == 0LL )
  {
LABEL_33:
    sub_1BCAA3C(data, *(_QWORD *)&playerId);
  }
  if ( targetIndex >= e_entryid->max_length )
    goto LABEL_34;
  v82 = (char *)e_entryid + 4 * targetIndex;
  v85 = *((_DWORD *)v82 + 8);
  v83 = v82 + 32;
  v84 = v85;
  v86 = (BattleServantData_o *)data;
  if ( !data )
    goto LABEL_33;
  *v83 = *(_DWORD *)(data + 24);
  *(_BYTE *)(data + 476) = 1;
  *(_BYTE *)(data + 541) = 1;
  BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_33;
  BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v86, 0LL);
  v90 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v87, v88, v89);
  BattleActionData___ctor(v90, 0LL);
  uniqueId = v86->fields.uniqueId;
  isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
  data = DataVals__GetCallSvtEffectId(baseVals, 0LL);
  if ( !v90 )
    goto LABEL_33;
  BattleActionData__setSummonServant(v90, uniqueId, v84, funcIndex, isEffectSummon, data, 0LL);
  return v90;
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

  if ( (byte_4B18DA0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&actionId, funcEnt);
    byte_4B18DA0 = 1;
  }
  v8 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&actionId, funcEnt, baseVals);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1BCAA3C(v9, v10);
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
  __int64 v12; // x2
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BattleActionData_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  BattleActionData_ShiftServant_o *v21; // x23

  if ( (byte_4B18D9F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&actionId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&BattleActionData_ShiftServant_TypeInfo, v11, v12);
    byte_4B18D9F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v18 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v15, v16, v17);
  BattleActionData___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  v18->fields.actorId = actionId;
  v21 = (BattleActionData_ShiftServant_o *)sub_1BCAA2C(
                                             BattleActionData_ShiftServant_TypeInfo,
                                             *(_QWORD *)&actionId,
                                             v19,
                                             v20);
  BattleActionData_ShiftServant___ctor(v21, 0, 0LL);
  if ( !v21
    || (BattleActionData_ShiftServant__setBeforeSvtData(v21, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v21, ServantData, 0LL),
        BattleActionData__setShiftServant(v18, v21, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(data, *(_QWORD *)&actionId);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)data, ServantData->fields.uniqueId, 0, 0, 0LL);
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
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x26
  BattleLogic_o *logic; // x24
  BattleServantData_o *v20; // x25
  BattleActionData_DamageData_o *v21; // x21

  if ( (byte_4B18D8C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    byte_4B18D8C = 1;
  }
  v15 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals);
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
    sub_1BCAA3C(data, v16);
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

  if ( (byte_4B18D95 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
    byte_4B18D95 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt, baseVals);
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
    sub_1BCAA3C(data, v16);
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
  FunctionEntity_o *v13; // x29
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  BattleActionData_o *v21; // x24
  __int64 v22; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v24; // x28
  BattleServantData_o *v25; // x25
  const MethodInfo *v26; // x4
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  char v30; // w20
  struct BattleData_o *v31; // x8
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v33; // x20
  System_String_o *v34; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  FunctionEntity_o *v38; // [xsp+10h] [xbp-70h]
  int32_t digit; // [xsp+18h] [xbp-68h] BYREF
  int32_t healPoint; // [xsp+1Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  v13 = funcEnt;
  if ( (byte_4B18D8F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_19879/*"functionGainHp:"*/, v19, v20);
    byte_4B18D8F = 1;
  }
  digit = 0;
  v21 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                funcEnt);
  BattleActionData___ctor(v21, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v24 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v25 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  healPoint = v9;
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_22;
  if ( !v25 )
    goto LABEL_27;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._13_get_resultHp.method)(
         v25,
         v25->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint = 0;
    data = (BattleData_o *)BattleServantData__isShiftableServant(v25, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
LABEL_21:
      LODWORD(v9) = 0;
LABEL_22:
      v30 = 0;
      goto LABEL_23;
    }
    v31 = this->fields.data;
    if ( v31 )
    {
      data = (BattleData_o *)v31->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v25,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v25, 0LL);
          LODWORD(v9) = 0;
          v30 = (unsigned __int8)data ^ 1;
          goto LABEL_23;
        }
        goto LABEL_21;
      }
    }
LABEL_27:
    sub_1BCAA3C(data, v22);
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v25, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    LODWORD(v9) = 0;
    v30 = 0;
    healPoint = 0;
    goto LABEL_23;
  }
  v38 = v13;
  buffData = v25->fields.buffData;
  v33 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  BattleBuffData_CheckIndividualitiesData___ctor_43379556(v33, v25, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_27;
  if ( BattleBuffData__isTurnBuff(buffData, 42, v33, 1, 0LL) )
  {
    healPoint = 0;
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0LL);
    v13 = v38;
    goto LABEL_21;
  }
  if ( v24 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v24, v25, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint = v9;
  }
  v13 = v38;
  digit = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v25, &digit, 0LL);
  v30 = 0;
  v9 = (int)data * (__int64)(int)v9 / digit;
  healPoint = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_23:
  healPoint = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v25, v9, v26);
  v34 = System_Int32__ToString((int32_t)&healPoint, 0LL);
  System_String__Concat_62401220((System_String_o *)StringLiteral_19879/*"functionGainHp:"*/, v34, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v21,
    healPoint,
    funcIndex,
    v25,
    v13,
    baseVals,
    isCommandSideEffect,
    v30 & 1,
    v37);
  return v21;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_T__o *v29; // x25
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  int logic; // w8
  unsigned int v37; // w19
  int32_t v38; // w25
  DataVals_o *v39; // x28
  const MethodInfo *v40; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v42; // x22
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x26
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x22
  __int64 v59; // x1
  BattleData_o *data; // x0
  int32_t v61; // w22
  BattleServantData_o *ServantData; // x0
  __int64 v63; // x1
  BattleServantData_o *v64; // x24
  BattleLogicFunction_o *Value; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x3
  int v68; // w25
  int32_t v69; // w8
  int32_t v70; // w27
  bool isRandomDamage; // w19
  int32_t actorId; // w29
  FunctionEntity_o *funcEnt; // x20
  int32_t funcIndex; // w23
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v76; // x27
  __int64 v77; // x1
  int v78; // w19
  int32_t v79; // w20
  bool v80; // w0
  const MethodInfo *v81; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  int32_t v87; // w20
  FunctionEntity_o *v88; // x22
  int32_t v89; // w21
  int32_t targetId_k__BackingField; // w23
  bool v91; // w0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  const MethodInfo *v94; // [xsp+18h] [xbp-C8h]
  DataVals_o *dataVals_k__BackingField; // [xsp+20h] [xbp-C0h]
  BattleLogicFunction_o *v97; // [xsp+38h] [xbp-A8h]
  unsigned int v98; // [xsp+40h] [xbp-A0h]
  int32_t v99; // [xsp+44h] [xbp-9Ch]
  BattleActionData_o *v100; // [xsp+48h] [xbp-98h]
  bool v101; // [xsp+54h] [xbp-8Ch]
  BattleLogicFunction_ProcListInArgs_o *v102; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v103; // [xsp+60h] [xbp-80h]
  System_Enum_o v104; // [xsp+68h] [xbp-78h] BYREF
  int32_t funcType; // [xsp+78h] [xbp-68h]

  v6 = procArg;
  v103 = this;
  if ( (byte_4B18DA9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, procArg, mainAction);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v9,
      v10);
    sub_1BCA7E0(
      &System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
      v11,
      v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo, v19, v20);
    sub_1BCA7E0(&FuncList_TYPE_TypeInfo, v21, v22);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&StringLiteral_16489/*"_SAFE"*/, v23, v24);
    byte_4B18DA9 = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v100 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, procArg, mainAction, funcTarget);
  BattleActionData___ctor(v100, 0LL);
  v29 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_FuncList_TYPE__TypeInfo,
                                                  v26,
                                                  v27,
                                                  v28);
  System_Collections_Generic_List_Int32Enum____ctor(
    v29,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v29 )
    goto LABEL_88;
  items = v29->fields._items;
  v31 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v29->fields._version;
  if ( !items )
    goto LABEL_88;
  size = v29->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      12,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    items = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v29->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v29->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 12;
    ++v29->fields._version;
  }
  v33 = v29->fields._size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      25,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    items = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v29->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v29->fields._size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 25;
    ++v29->fields._version;
  }
  v34 = v29->fields._size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      50,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    items = v29->fields._items;
    v31 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v29->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v29->fields._size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 50;
    ++v29->fields._version;
  }
  v35 = v29->fields._size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v29,
      51,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v29->fields._size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 51;
  }
  this = (BattleLogicFunction_o *)dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_88;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v29,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_88;
  logic = (int)this->fields.logic;
  if ( logic < 1 )
  {
    v38 = 0;
    goto LABEL_84;
  }
  v37 = 0;
  v38 = 0;
  v102 = v6;
  v97 = this;
  do
  {
    if ( v37 >= logic )
      sub_1BCAA44(this, procArg);
    v39 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v37);
    if ( !v39 )
      goto LABEL_88;
    v104.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v104.monitor = (void *)-1LL;
    funcType = v39->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v104, 0LL);
    if ( !this )
      goto LABEL_88;
    v101 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16489/*"_SAFE"*/, 0LL);
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v103, v6, mainAction, v39, v40);
    if ( !this )
      goto LABEL_88;
    klass = this->klass;
    v42 = this;
    v43 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    v98 = v37;
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_31;
      }
      v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_31:
      v45 = sub_1C1C7C0(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0LL);
    }
    v47 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
    if ( !v47 )
      sub_1BCAA3C(0LL, v46);
    v99 = v38;
    while ( 1 )
    {
      v48 = *(_QWORD *)v47;
      v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
      {
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_39;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_39:
        v51 = sub_1C1C7C0(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
        break;
      v52 = *(_QWORD *)v47;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v54 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_46;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_46:
        v55 = sub_1C1C7C0(
                v47,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
      v58 = v56;
      if ( !v56 )
        sub_1BCAA3C(0LL, v57);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v56 + 408LL))(
              v56,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v56 + 416LL)) & 1) != 0 )
      {
        data = v103->fields.data;
        if ( !data )
          sub_1BCAA3C(0LL, v59);
        v61 = *(_DWORD *)(v58 + 32);
        ServantData = BattleData__getServantData(data, v61, 0LL);
        v64 = ServantData;
        if ( !ServantData )
          sub_1BCAA3C(0LL, v63);
        Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                           ServantData,
                                           ServantData->klass->vtable._14_set_resultHp.methodPtr);
        v68 = (int)Value;
        if ( (int)Value >= 1 )
        {
          v69 = v39->fields.funcType;
          if ( v69 == 12 || v69 == 25 )
          {
            Value = (BattleLogicFunction_o *)DataVals__GetValue(v39, 0LL);
            v70 = (int)Value;
          }
          else
          {
            if ( (v69 & 0xFFFFFFFE) == 50 )
            {
              Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v39, v64, v67);
              v70 = (int)Value;
              isRandomDamage = 0;
              goto LABEL_60;
            }
            v70 = -1;
          }
          isRandomDamage = 1;
LABEL_60:
          if ( !mainAction )
            sub_1BCAA3C(Value, v66);
          if ( !v102 )
            sub_1BCAA3C(0LL, v66);
          actorId = mainAction->fields.actorId;
          funcEnt = v39->fields.funcEnt;
          funcIndex = v39->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v102, 0LL);
          v76 = BattleLogicFunction__functionlossHp(
                  v103,
                  actorId,
                  v61,
                  funcEnt,
                  v39,
                  funcIndex,
                  v101,
                  IsCommandSideEffect,
                  v70,
                  isRandomDamage,
                  0LL,
                  v94);
          v78 = v68
              - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v64->klass->vtable._13_get_resultHp.method)(
                  v64,
                  v64->klass->vtable._14_set_resultHp.methodPtr);
          if ( v78 >= 1 )
          {
            if ( !v100 )
              sub_1BCAA3C(0LL, v77);
            BattleActionData__addAction(v100, v76, 0LL);
            v99 += v78;
          }
          else
          {
            v79 = v39->fields.funcIndex;
            v80 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v102, 0LL);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v103, v61, v79, v39, v80, 0LL, 0LL, v81);
            if ( !v100 )
              sub_1BCAA3C(0LL, NoEffectObject);
            BattleActionData__addAction(v100, NoEffectObject, 0LL);
          }
        }
      }
    }
    v38 = v99;
    v83 = *(_QWORD *)v47;
    v84 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
      {
        --v84;
        v85 += 4;
        if ( !v84 )
          goto LABEL_71;
      }
      v86 = v83 + 16LL * *v85 + 312;
    }
    else
    {
LABEL_71:
      v86 = sub_1C1C7C0(v47, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v86)(v47, *(_QWORD *)(v86 + 8));
    v6 = v102;
    this = v97;
    logic = (int)v97->fields.logic;
    v37 = v98 + 1;
  }
  while ( (int)(v98 + 1) < logic );
LABEL_84:
  if ( !mainAction
    || !v6
    || (v87 = dataVals_k__BackingField->fields.funcIndex,
        v88 = dataVals_k__BackingField->fields.funcEnt,
        v89 = mainAction->fields.actorId,
        targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField,
        v91 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v6, 0LL),
        procArg = (BattleLogicFunction_ProcListInArgs_o *)BattleLogicFunction__functionGainHp(
                                                            v103,
                                                            v89,
                                                            targetId_k__BackingField,
                                                            v88,
                                                            dataVals_k__BackingField,
                                                            v87,
                                                            v91,
                                                            v38,
                                                            overwriteLossHp),
        (this = (BattleLogicFunction_o *)v100) == 0LL) )
  {
LABEL_88:
    sub_1BCAA3C(this, procArg);
  }
  BattleActionData__addAction(v100, (BattleActionData_o *)procArg, 0LL);
  return v100;
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
  FunctionEntity_o *v11; // x29
  __int64 v15; // x1
  __int64 v16; // x2
  BattleActionData_o *v17; // x24
  __int64 v18; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x28
  BattleServantData_o *v21; // x25
  int32_t Value; // w27
  const MethodInfo *v23; // x4
  char v24; // w20
  int v25; // w3
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v30; // x20
  struct BattleData_o *v31; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v36; // x27
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  FunctionEntity_o *v38; // [xsp+10h] [xbp-70h]
  int32_t digit; // [xsp+1Ch] [xbp-64h] BYREF

  v11 = funcEnt;
  if ( (byte_4B18D90 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v15, v16);
    byte_4B18D90 = 1;
  }
  digit = 0;
  v17 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                funcEnt);
  BattleActionData___ctor(v17, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_24;
  v21 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( !v21 )
    goto LABEL_24;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = (BattleData_o *)BattleServantData__getMaxHp(v21, 0LL);
    v24 = 0;
    v25 = (int)data * Value / 1000;
    goto LABEL_19;
  }
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v21->klass->vtable._13_get_resultHp.method)(
         v21,
         v21->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v21, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_18;
    v31 = this->fields.data;
    if ( v31 )
    {
      data = (BattleData_o *)v31->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v21,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v21, 0LL);
          v25 = 0;
          v24 = (unsigned __int8)data ^ 1;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    goto LABEL_24;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v21, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_18:
    v25 = 0;
    v24 = 0;
    goto LABEL_19;
  }
  v38 = v11;
  buffData = v21->fields.buffData;
  v30 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  BattleBuffData_CheckIndividualitiesData___ctor_43379556(v30, v21, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_1BCAA3C(data, v18);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v30, 1, 0LL) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0LL);
    v11 = v38;
    goto LABEL_18;
  }
  if ( v20 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v20, v21, 0LL);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0LL);
  }
  v11 = v38;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v21, &digit, 0LL);
  v36 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v21, 0LL);
  v24 = 0;
  v25 = (int)v36 * (int)data / 1000;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_19:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v21,
                              v25,
                              v23);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v17,
    ActualRecoveryHealPoint,
    funcIndex,
    v21,
    v11,
    baseVals,
    isCommandSideEffect,
    v24 & 1,
    v37);
  return v17;
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  BattleActionData_o *v17; // x21
  int32_t funcIndex; // w23
  int32_t uniqueId; // w24
  FunctionEntity_o *funcEnt; // x25
  int32_t v21; // w22
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v23; // x6
  BattleActionData_BuffData_o *v24; // x20
  int32_t v26; // w21
  int32_t v27; // w23
  bool v28; // w4
  const MethodInfo *v29; // x7

  if ( (byte_4B18DA8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, procArg, *(_QWORD *)&actorId);
    byte_4B18DA8 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_18;
  v13 = (BattleServantData_o *)data;
  v17 = 0LL;
  if ( !BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
    return v17;
  v17 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v14, v15, v16);
  BattleActionData___ctor(v17, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_1BCAA3C(data, procArg);
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
        v21 = (int)data;
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
          v24 = (BattleActionData_BuffData_o *)data;
          HIDWORD(data->fields.m_CancellationTokenSource) = 3;
          BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v21, 0LL);
          if ( v17 )
          {
            BattleActionData__setBuffData(v17, v24, baseVals, 0LL);
            return v17;
          }
        }
      }
      goto LABEL_18;
    }
  }
  if ( !procArg )
    goto LABEL_18;
  v26 = baseVals->fields.funcIndex;
  v27 = v13->fields.uniqueId;
  v28 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
  return BattleLogicFunction__getNoEffectObject(this, v27, v26, baseVals, v28, 0LL, 0LL, v29);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NpTurnToPointConvert_o *v19; // x26
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NpGaugeAbsorbResult_o *v23; // x25
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x4
  BattleActionData_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x6
  float Point_k__BackingField; // s0
  int32_t v30; // w5
  BattleActionData_o *v31; // x0

  v8 = this;
  if ( (byte_4B18DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, procArg, mainAction);
    sub_1BCA7E0(&NpGaugeAbsorbResult_TypeInfo, v9, v10);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&NpTurnToPointConvert_TypeInfo, v11, v12);
    byte_4B18DA6 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v15 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, procArg, mainAction, funcTarget);
  BattleActionData___ctor(v15, 0LL);
  v19 = (NpTurnToPointConvert_o *)sub_1BCAA2C(NpTurnToPointConvert_TypeInfo, v16, v17, v18);
  NpTurnToPointConvert___ctor(v19, 0LL);
  v23 = (NpGaugeAbsorbResult_o *)sub_1BCAA2C(NpGaugeAbsorbResult_TypeInfo, v20, v21, v22);
  NpGaugeAbsorbResult___ctor(v23, (BaseNpGaugeConvert_o *)v19, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpPoint(v8, mainAction, funcTarget, v23, v24);
  if ( !v15
    || (BattleActionData__addAction(v15, (BattleActionData_o *)this, 0LL),
        v26 = BattleLogicFunction__AbsorbNpTurn(v8, mainAction, funcTarget, v23, v25),
        BattleActionData__addAction(v15, v26, 0LL),
        !mainAction)
    || !v23 )
  {
LABEL_12:
    sub_1BCAA3C(this, procArg);
  }
  Point_k__BackingField = v23->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v30 = 0x80000000;
  else
    v30 = (int)Point_k__BackingField;
  v31 = BattleLogicFunction__functionGainNp(
          v8,
          procArg,
          v27,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          v30,
          v28);
  BattleActionData__addAction(v15, v31, 0LL);
  return v15;
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

  if ( (byte_4B18D94 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
    byte_4B18D94 = 1;
  }
  v15 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt, baseVals);
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
        sub_1BCAA3C(data, v16);
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
  __int64 v17; // x2
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleActionData_o *v22; // x25
  BattleData_o *v23; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v25; // x27
  BattleServantData_o *v26; // x28
  unsigned int v27; // w0
  int32_t v28; // w20
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v30; // x20
  int32_t v31; // w0
  const MethodInfo *v32; // x6
  struct BattleData_o *v33; // x8
  int32_t v34; // w2
  int32_t uniqueId; // [xsp+Ch] [xbp-64h] BYREF

  uniqueId = targetId;
  if ( (byte_4B18D93 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&StringLiteral_19880/*"functionInstantDeath>>:"*/, v16, v17);
    byte_4B18D93 = 1;
  }
  v18 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_62401220((System_String_o *)StringLiteral_19880/*"functionInstantDeath>>:"*/, v18, 0LL);
  v22 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v19, v20, v21);
  BattleActionData___ctor(v22, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v25 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v25 )
    goto LABEL_16;
  v26 = (BattleServantData_o *)data;
  v27 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._9_get_hp.method)(
          v25,
          v25->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))v25->klass->vtable._12_set_reducedhp.method)(
    v25,
    v27,
    v25->klass->vtable._13_get_resultHp.methodPtr);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v28 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v25, playerId, 4, v28, IsOpponentPTUniqueID, 0LL);
  if ( !funcUnit )
    goto LABEL_16;
  v30 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0LL);
  v31 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._13_get_resultHp.method)(
          v25,
          v25->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v25, v31, v26, 0LL, v30, 0, 0LL);
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_16;
  v34 = v25->fields.uniqueId;
  v25->fields.deadTurn = v33->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           v34,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v32);
  if ( !data )
    goto LABEL_16;
  HIDWORD(data->fields.m_CancellationTokenSource) = 1;
  v23 = data;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.battle_info) = 1;
  if ( !v22 )
LABEL_16:
    sub_1BCAA3C(data, v23);
  BattleActionData__setBuffData(v22, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v22;
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
  __int64 v12; // x1
  __int64 v13; // x2
  BattleData_o *data; // x0
  BattleServantData_o *v15; // x22
  BattleActionData_o *v16; // x24
  int32_t np; // w24
  int32_t Value; // w0
  int32_t v19; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  int32_t v23; // w24
  int32_t v24; // w23
  BattleDataDefine_c *v25; // x0
  float PERCENTAGE_DENOMINATOR; // s0
  int v27; // w8
  int v28; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v33; // x6
  BattleActionData_BuffData_o *v34; // x20

  if ( (byte_4B18DA7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, procArg, *(_QWORD *)&actorId);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v12, v13);
    byte_4B18DA7 = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_20;
  v15 = (BattleServantData_o *)data;
  v16 = 0LL;
  if ( BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
  {
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v15, 0LL);
    if ( ((unsigned __int8)data & 1) != 0
      || (data = (BattleData_o *)BattleServantData__isGuts(v15, 0LL), v16 = 0LL, ((unsigned __int8)data & 1) != 0) )
    {
      if ( baseVals )
      {
        np = v15->fields.np;
        Value = DataVals__GetValue(baseVals, 0LL);
        v19 = BattleServantData__addNp(v15, -Value, 0, 0LL);
        v23 = np - v19;
        *diffNp = v23;
        v24 = v19;
        v25 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v20);
          v25 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v25->static_fields->PERCENTAGE_DENOMINATOR;
        v27 = (int)PERCENTAGE_DENOMINATOR;
        if ( PERCENTAGE_DENOMINATOR == INFINITY )
          v27 = 0x80000000;
        v28 = v23 % v27;
        if ( v28 >= 1 )
        {
          BattleServantData__addNp(v15, v28, 0, 0LL);
          *diffNp -= v28;
        }
        v16 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v20, v21, v22);
        BattleActionData___ctor(v16, 0LL);
        if ( procArg )
        {
          funcIndex = baseVals->fields.funcIndex;
          uniqueId = v15->fields.uniqueId;
          funcEnt = baseVals->fields.funcEnt;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)IsCommandSideEffect,
                                   funcEnt,
                                   uniqueId,
                                   funcIndex,
                                   IsCommandSideEffect,
                                   0LL,
                                   v33);
          if ( data )
          {
            v34 = (BattleActionData_BuffData_o *)data;
            HIDWORD(data->fields.m_CancellationTokenSource) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v24, 0LL);
            if ( v16 )
            {
              BattleActionData__setBuffData(v16, v34, baseVals, 0LL);
              return v16;
            }
          }
        }
      }
LABEL_20:
      sub_1BCAA3C(data, procArg);
    }
  }
  return v16;
}


void __fastcall BattleLogicFunction__functionMovePosition(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  long double v4; // q0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x0
  __int64 v25; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v27; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v29; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v32; // w24
  int v33; // w25
  DataManager_c *klass; // x8
  const char *namespaze; // x9
  int i; // w10
  int v37; // w11
  int v38; // w10
  BattleServantData_o *v39; // x23
  struct BattleData_o *data; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  int64_t *v44; // x8
  int64_t v45; // x21
  __int64 v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B18DAD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, actionData, targetData);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_6523/*"FOCUS_UP_EX"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6521/*"FOCUS_UNDER_EX"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6519/*"FOCUS_CENTER_EX"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_6520/*"FOCUS_UNDER"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_6518/*"FOCUS_CENTER"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_6522/*"FOCUS_UP"*/, v22, v23);
    byte_4B18DAD = 1;
  }
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v4);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v4);
  MasterData_object = **(DataManager_o ***)(v25 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v27 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[1]._1.namespaze)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v27 )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v27,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  v29 = (SkillLvEntity_o *)MasterData_object;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_object, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v29, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v32 = MovePositionDown;
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_23;
    MasterData_object = (DataManager_o *)BattleData__getTargetEnemyId((BattleData_o *)MasterData_object, 0, 0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v33 = (int)MasterData_object;
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
      if ( v33 == *((_DWORD *)&klass->_1.byval_arg.data + i) )
        break;
    }
    v37 = MovePositionUp > 0 ? -MovePositionUp : v32;
    v38 = v37 + i;
    if ( v38 >= 0 && v38 < (int)namespaze )
    {
      if ( v38 >= (unsigned int)namespaze )
LABEL_50:
        sub_1BCAA44(MasterData_object, actionData);
      MasterData_object = (DataManager_o *)BattleData__getServantData(
                                             (BattleData_o *)MasterData_object,
                                             *((_DWORD *)&klass->_1.byval_arg.data + (unsigned int)v38),
                                             0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      v39 = (BattleServantData_o *)MasterData_object;
      MasterData_object = (DataManager_o *)BattleServantData__isAlive((BattleServantData_o *)MasterData_object, 0, 0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v39->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v39, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v29, 0LL) )
            v44 = &StringLiteral_6523/*"FOCUS_UP_EX"*/;
          else
            v44 = &StringLiteral_6522/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v39, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v29, 0LL) )
            v44 = &StringLiteral_6519/*"FOCUS_CENTER_EX"*/;
          else
            v44 = &StringLiteral_6518/*"FOCUS_CENTER"*/;
        }
        else
        {
          v45 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v39, 0LL) )
          {
LABEL_47:
            v46 = sub_1BCAA2C(BattleActionData_TypeInfo, v41, v42, v43);
            BattleActionData___ctor((BattleActionData_o *)v46, 0LL);
            if ( targetData && v46 )
            {
              *(_DWORD *)(v46 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v46 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v46, 0LL);
              *(_QWORD *)(v46 + 64) = v45;
              sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 64), v45, v47, v48, v49, v50, v51, v52);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v46, 0, 0LL);
              return;
            }
LABEL_23:
            sub_1BCAA3C(MasterData_object, actionData);
          }
          if ( SkillLvEntity__IsAress(v29, 0LL) )
            v44 = &StringLiteral_6521/*"FOCUS_UNDER_EX"*/;
          else
            v44 = &StringLiteral_6520/*"FOCUS_UNDER"*/;
        }
        v45 = *v44;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x20
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  BattleActionData_o *NoEffectObject; // x1
  const MethodInfo *v46; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x19
  int32_t targetId_k__BackingField; // w23
  RemovedBuffInfoGroup_o *v50; // x24
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v52; // x4
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v53; // x25
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Func_object__bool__o *v57; // x27
  System_Collections_Generic_IEnumerable_T__o *v58; // x25
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_HashSet_T__o *v62; // x27
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v69; // x24
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Func_object__bool__o *v73; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  __int64 v75; // x2
  __int64 v76; // x3
  RemovedBuffInfoGroup_o *v77; // x25
  System_Collections_Generic_List_int__o *v78; // x28
  const MethodInfo *v79; // x2
  __int64 v80; // x3
  int klass; // w8
  BattleLogicFunction_o *v82; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x29
  __int64 v84; // x22
  __int64 v85; // x27
  BattleBuffData_ChangeBgmData_o *v86; // x24
  BattleBuffData_BuffData_o *v87; // x20
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  const MethodInfo *v89; // x3
  int32_t DispTurn; // w0
  bool isProgressSelfTurn; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  BattleActionData_BuffData_o *v95; // x27
  struct FunctionEntity_o *funcEnt; // x21
  bool v97; // w0
  System_Int32_array *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int v105; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  const MethodInfo *v108; // x7
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v111; // x0
  System_Func_object__bool__o *_9__108_2; // x20
  Il2CppObject *v113; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  BattleActionEffect_ChangeBgmBuff_o *v125; // x19
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v126; // [xsp+0h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v127; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B18DB1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, procArg, mainAction);
    sub_1BCA7E0(&BattleActionEffect_ChangeBgmBuff_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v15, v16);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76768176, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__functionMoveState_b__108_2__, v33, v34);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__, v35, v36);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__, v37, v38);
    sub_1BCA7E0(&BattleLogicFunction___c__DisplayClass108_0_TypeInfo, v39, v40);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v41, v42);
    byte_4B18DB1 = 1;
  }
  entity = 0LL;
  v43 = sub_1BCAA2C(BattleLogicFunction___c__DisplayClass108_0_TypeInfo, procArg, mainAction, funcTarget);
  BattleLogicFunction___c__DisplayClass108_0___ctor((BattleLogicFunction___c__DisplayClass108_0_o *)v43, 0LL);
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
                         v46);
  if ( !this->fields.data )
    goto LABEL_64;
  v50 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v50,
    v52);
  if ( !v43 )
    goto LABEL_64;
  v126 = funcTarget;
  v127 = procArg;
  *(_DWORD *)(v43 + 16) = 0x1000000;
  if ( !v50 )
    goto LABEL_64;
  v53 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v50, 0LL);
  v57 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v54, v55, v56);
  System_Func_object__bool____ctor(
    v57,
    (Il2CppObject *)v43,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__,
    0LL);
  v58 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v53,
                                                         (System_Func_TSource__bool__o *)v57,
                                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v62 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                     v59,
                                                     v60,
                                                     v61);
  System_Collections_Generic_HashSet_object____ctor_54898872(
    v62,
    v58,
    (const MethodInfo_345B0B8 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76768176);
  *(_QWORD *)(v43 + 24) = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 24), (int64_t)v62, v63, v64, v65, v66, v67, v68);
  v69 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v50, 0LL);
  v73 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v70, v71, v72);
  System_Func_object__bool____ctor(
    v73,
    (Il2CppObject *)v43,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__,
    0LL);
  v74 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v69,
          (System_Func_TSource__bool__o *)v73,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v74,
                                                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  v77 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v127;
      if ( v127 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v127, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v108);
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
  v78 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    NoEffectObject,
                                                    v75,
                                                    v76);
  System_Collections_Generic_List_int____ctor(
    v78,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v77[1].klass;
  v82 = this;
  if ( klass < 1 )
  {
    v85 = 0LL;
LABEL_50:
    v105 = 1;
    goto LABEL_51;
  }
  v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  do
  {
    if ( (unsigned int)v84 >= klass )
      sub_1BCAA44(StealBuffInfoGroup, NoEffectObject);
    v87 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v77[1].monitor + v84);
    if ( !v87 || !v83 )
      goto LABEL_64;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v83,
                                                     &entity,
                                                     v87->fields.buffId,
                                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v82, v87, v79);
      if ( !ServantData )
        goto LABEL_64;
      BattleServantData__addBuff(ServantData, v87, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
      changeBgmData = v87->fields.changeBgmData;
      if ( changeBgmData )
        v86 = v87->fields.changeBgmData;
      if ( changeBgmData )
      {
        if ( !v86 )
          goto LABEL_64;
        BattleBuffData_ChangeBgmData__UpdateUniqueVal(v86, v87->fields.addOrder, ServantData->fields.uniqueId, 0LL);
      }
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
      if ( !entity )
        goto LABEL_64;
      if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
      {
        if ( v87->fields.turn <= 0 )
        {
          isProgressSelfTurn = v87->fields.isProgressSelfTurn;
        }
        else
        {
          DispTurn = BattleBuffData_BuffData__get_DispTurn(v87, 0LL);
          isProgressSelfTurn = v87->fields.isProgressSelfTurn;
          v87->fields.turn = 2 * DispTurn - isProgressSelfTurn;
        }
        v87->fields.isProgressEndEnemyTurn = isProgressSelfTurn ^ ServantData->fields.isEnemy ^ 1;
      }
      BattleLogicFunction__AfterAddedBuffProcess(v82, ServantData, (BuffEntity_o *)entity, v89);
      if ( v85 )
      {
        if ( !v78 )
          goto LABEL_64;
        NoEffectObject = (BattleActionData_o *)(unsigned int)v87->fields.addOrder;
        items = v78->fields._items;
        v93 = Method_System_Collections_Generic_List_int__Add__;
        ++v78->fields._version;
        if ( !items )
          goto LABEL_64;
        size = v78->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v78,
            (int32_t)NoEffectObject,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v78->fields._size = size + 1;
          items->m_Items[size + 1] = (int)NoEffectObject;
        }
      }
      else
      {
        v95 = (BattleActionData_BuffData_o *)sub_1BCAA2C(BattleActionData_BuffData_TypeInfo, NoEffectObject, v79, v80);
        BattleActionData_BuffData___ctor(v95, 0LL);
        if ( !v95 )
          goto LABEL_64;
        v95->fields.targetId = targetId_k__BackingField;
        if ( !dataVals_k__BackingField )
          goto LABEL_64;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v127;
        v95->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
        if ( !v127 )
          goto LABEL_64;
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        v97 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v127, 0LL);
        v85 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v126->klass->vtable._12_MakeAddActionBuffData.method)(
                v126,
                v95,
                v87,
                funcEnt,
                v97,
                v126->klass->vtable._13_GetConvertBuffEntity.methodPtr);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( !mainAction )
          goto LABEL_64;
        BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v85, dataVals_k__BackingField, 0LL);
        v82 = this;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
        if ( !StealBuffInfoGroup )
          goto LABEL_64;
        BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v85, 0LL);
      }
    }
    klass = (int)v77[1].klass;
    ++v84;
  }
  while ( (int)v84 < klass );
  if ( !v85 )
    goto LABEL_50;
  if ( !v78 )
    goto LABEL_64;
  v98 = System_Collections_Generic_List_int___ToArray(
          v78,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v85 + 152) = v98;
  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 152), (int64_t)v98, v99, v100, v101, v102, v103, v104);
  v105 = 0;
LABEL_51:
  data = v82->fields.data;
  if ( !data )
    goto LABEL_64;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v111 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, NoEffectObject);
    v111 = BattleLogicFunction___c_TypeInfo;
  }
  _9__108_2 = (System_Func_object__bool__o *)v111->static_fields->__9__108_2;
  if ( !_9__108_2 )
  {
    if ( !v111->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v111, NoEffectObject);
      v111 = BattleLogicFunction___c_TypeInfo;
    }
    v113 = (Il2CppObject *)v111->static_fields->__9;
    _9__108_2 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                 NoEffectObject,
                                                 v79,
                                                 v80);
    System_Func_object__bool____ctor(_9__108_2, v113, Method_BattleLogicFunction___c__functionMoveState_b__108_2__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__108_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__108_2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_2,
      (int64_t)_9__108_2,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
  }
  v121 = System_Linq_Enumerable__Where_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v77,
           (System_Func_TSource__bool__o *)_9__108_2,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v121,
                                                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_64;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0LL)
    && v105 != 1 )
  {
    v125 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1BCAA2C(
                                                   BattleActionEffect_ChangeBgmBuff_TypeInfo,
                                                   v122,
                                                   v123,
                                                   v124);
    BattleActionEffect_ChangeBgmBuff___ctor(v125, 0LL);
    if ( !v105 )
    {
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v85,
        (BattleActionEffect_Base_o *)v125,
        0LL);
      return;
    }
LABEL_64:
    sub_1BCAA3C(StealBuffInfoGroup, NoEffectObject);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  BattleActionData_o *v30; // x21
  __int64 v31; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v33; // x22
  BattleServantData_o *ServantData; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_int__o *v38; // x27
  __int64 v39; // x2
  __int64 v40; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  __int64 v44; // x1
  System_Int32_array *TargetRarityList; // x29
  char v46; // w28
  char v47; // w10
  bool v48; // w8
  System_Int32_array *buffIndv; // x22
  System_Int32_array *v50; // x20
  int32_t v51; // w1
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  struct System_Int32_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  struct System_Int32_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  struct System_Int32_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  int32_t BattlePointPhase; // w20
  struct System_Int32_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  struct System_Int32_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  bool v80; // w0
  struct System_Int32_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  struct System_Int32_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  System_Array_o *v87; // x20
  bool v88; // w20
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w25
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v96; // x27
  bool IsIncludeIgnoreIndividuality; // w25
  BattleActionData_DamageData_o *v98; // x20
  char v99; // w21
  bool v101; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v104; // [xsp+40h] [xbp-90h]
  int32_t funcIndexa; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  BattleServantData_o *v107; // [xsp+58h] [xbp-78h]
  unsigned int v108; // [xsp+60h] [xbp-70h]
  System_RuntimeFieldHandle_o v110; // 0:w1.4

  if ( (byte_4B18D8D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&BattleLogic_DamageProcessArgs_TypeInfo, v14, v15);
    sub_1BCA7E0(&int___TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v24, v25);
    sub_1BCA7E0(&DataVals_OverChargeState___TypeInfo, v26, v27);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90,
      v28,
      v29);
    byte_4B18D8D = 1;
  }
  v30 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals);
  BattleActionData___ctor(v30, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_87;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_87;
  v33 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v38 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v35,
                                                    v36,
                                                    v37);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL), !v38)
    || (items = v38->fields._items,
        v42 = Method_System_Collections_Generic_List_int__Add__,
        ++v38->fields._version,
        !items) )
  {
LABEL_87:
    sub_1BCAA3C(data, v31);
  }
  size = v38->fields._size;
  v44 = (unsigned int)data;
  actiona = action;
  funcIndexa = funcIndex;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v38,
      (int32_t)data,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v38->fields._size = size + 1;
    items->m_Items[size + 1] = (int)data;
  }
  TargetRarityList = 0LL;
  v46 = 0;
  target = ServantData;
  v104 = v30;
  v107 = v33;
  v108 = type - 3;
  v47 = 0;
  v48 = 0;
  buffIndv = 0LL;
  v50 = 0LL;
  switch ( type )
  {
    case 3:
    case 4:
    case 7:
    case 9:
    case 10:
      v51 = 7;
      goto LABEL_14;
    case 5:
    case 6:
      v51 = 6;
LABEL_14:
      data = (BattleData_o *)DataVals__GetParam(baseVals, v51, 0, 0LL);
      v52 = v38->fields._items;
      v53 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v52 )
        goto LABEL_87;
      v54 = v38->fields._size;
      if ( (unsigned int)v54 >= v52->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v54 + 1;
        v52->m_Items[v54 + 1] = (int)data;
      }
      TargetRarityList = 0LL;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      buffIndv = 0LL;
      v50 = 0LL;
      switch ( type )
      {
        case 3:
        case 4:
          v50 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !v50 )
            goto LABEL_87;
          if ( !v50->max_length )
            goto LABEL_88;
          v46 = 0;
          v47 = 0;
          TargetRarityList = 0LL;
          v48 = 0;
          buffIndv = 0LL;
          v50->m_Items[1] = (int)data;
          break;
        case 5:
        case 6:
        case 8:
          goto LABEL_79;
        case 7:
          buffIndv = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !buffIndv )
            goto LABEL_87;
          if ( !buffIndv->max_length )
LABEL_88:
            sub_1BCAA44(data, v31);
          v46 = 0;
          v47 = 0;
          TargetRarityList = 0LL;
          v48 = 0;
          v50 = 0LL;
          buffIndv->m_Items[1] = (int)data;
          break;
        case 9:
          TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
          v46 = 0;
          v48 = 0;
          buffIndv = 0LL;
          v50 = 0LL;
          v47 = 1;
          goto LABEL_79;
        case 10:
          v50 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
          v46 = 0;
          v47 = 0;
          TargetRarityList = 0LL;
          v48 = 0;
          buffIndv = 0LL;
          goto LABEL_79;
        default:
          goto LABEL_65;
      }
      goto LABEL_79;
    case 8:
      goto LABEL_79;
    case 11:
      v38 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v44,
                                                        v39,
                                                        v40);
      System_Collections_Generic_List_int____ctor(
        v38,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
      if ( !v38 )
        goto LABEL_87;
      v55 = v38->fields._items;
      v56 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v55 )
        goto LABEL_87;
      v57 = v38->fields._size;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v57 + 1;
        v55->m_Items[v57 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v64 = v38->fields._items;
      v65 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v64 )
        goto LABEL_87;
      v66 = v38->fields._size;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v66 + 1;
        v64->m_Items[v66 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 59, 0, 0LL);
      v70 = v38->fields._items;
      v71 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v70 )
        goto LABEL_87;
      v72 = v38->fields._size;
      if ( (unsigned int)v72 >= v70->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v72 + 1;
        v70->m_Items[v72 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 60, 0, 0LL);
      v77 = v38->fields._items;
      v78 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v77 )
        goto LABEL_87;
      v79 = v38->fields._size;
      if ( (unsigned int)v79 >= v77->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v79 + 1;
        v77->m_Items[v79 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v81 = v38->fields._items;
      v82 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v81 )
        goto LABEL_87;
      v83 = v38->fields._size;
      if ( (unsigned int)v83 >= v81->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v83 + 1;
        v81->m_Items[v83 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v84 = v38->fields._items;
      v85 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v84 )
        goto LABEL_87;
      v86 = v38->fields._size;
      if ( (unsigned int)v86 >= v84->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v86 + 1;
        v84->m_Items[v86 + 1] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0LL);
      v87 = (System_Array_o *)sub_1BCA888(DataVals_OverChargeState___TypeInfo, 3LL);
      v110.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v87, v110, 0LL);
      DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v87, 0LL);
      v88 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
      v46 = 1;
      IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
      v47 = 0;
      TargetRarityList = 0LL;
      v48 = v88 && !IsOverChargeState;
      v50 = buffIndv;
      goto LABEL_79;
    case 12:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v58 = v38->fields._items;
      v59 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v58 )
        goto LABEL_87;
      v60 = v38->fields._size;
      if ( (unsigned int)v60 >= v58->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v60 + 1;
        v58->m_Items[v60 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v61 = v38->fields._items;
      v62 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v61 )
        goto LABEL_87;
      v63 = v38->fields._size;
      if ( (unsigned int)v63 >= v61->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v63 + 1;
        v61->m_Items[v63 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v67 = v38->fields._items;
      v68 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v67 )
        goto LABEL_87;
      v69 = v38->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v69 + 1;
        v67->m_Items[v69 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      if ( !v107 )
        goto LABEL_87;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v107, (int32_t)data, 0LL);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 180, BattlePointPhase, -1, 0LL);
      v74 = v38->fields._items;
      v75 = Method_System_Collections_Generic_List_int__Add__;
      ++v38->fields._version;
      if ( !v74 )
        goto LABEL_87;
      v76 = v38->fields._size;
      if ( (unsigned int)v76 >= v74->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v38,
          (int32_t)data,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v38->fields._size = v76 + 1;
        v74->m_Items[v76 + 1] = (int)data;
      }
      if ( DataVals__IsOverChargeState(baseVals, 1, 0LL) )
        goto LABEL_64;
      v80 = DataVals__IsOverChargeState(baseVals, 2, 0LL);
      TargetRarityList = 0LL;
      v46 = 0;
      if ( BattlePointPhase )
      {
LABEL_65:
        v47 = 0;
        v48 = 0;
        buffIndv = 0LL;
        v50 = 0LL;
      }
      else
      {
        v47 = 0;
        v48 = 0;
        buffIndv = 0LL;
        v50 = 0LL;
        if ( !v80 )
        {
          DataVals__SetOverCharge(baseVals, 0, 0LL);
LABEL_64:
          v46 = 0;
          v47 = 0;
          TargetRarityList = 0LL;
          v48 = 0;
          buffIndv = 0LL;
          v50 = 0LL;
        }
      }
LABEL_79:
      v101 = v48;
      isRarityAtk = v47;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1BCAA2C(
                                                               BattleLogic_DamageProcessArgs_TypeInfo,
                                                               v91,
                                                               v92,
                                                               v93);
      BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
      logic = this->fields.logic;
      v96 = System_Collections_Generic_List_int___ToArray(
              v38,
              (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
      data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
      if ( !logic )
        goto LABEL_87;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v107,
                               target,
                               v96,
                               funcIndexa,
                               type,
                               actiona,
                               v50,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0LL);
      v98 = (BattleActionData_DamageData_o *)data;
      if ( v108 < 8 && ((0x93u >> v108) & 1) != 0 )
      {
        v99 = 1;
        if ( !data )
          goto LABEL_87;
      }
      else
      {
        v99 = v46 & v101;
        if ( !data )
          goto LABEL_87;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
      if ( !v104 )
        goto LABEL_87;
      BattleActionData__setDamageData(v104, v98, baseVals, v99, isRarityAtk, 0LL);
      return v104;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  BattleActionData_o *v25; // x20
  __int64 v26; // x1
  void *data; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  struct BattleData_o *v30; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x21
  System_Action_object__o *v32; // x22
  Il2CppObject *v33; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x2
  __int64 v42; // x3
  struct BattleData_o *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x21
  System_Comparison_T__o *v45; // x22
  Il2CppObject *v46; // x23
  struct BattleLogicFunction___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct BattleData_o *v54; // x8
  int v55; // w8
  unsigned int *v56; // x21
  int32_t v57; // w23
  BattleServantData_o *v58; // x22
  struct BattleData_o *v59; // x8
  unsigned __int64 v60; // x24
  struct System_Int32_array *p_entryid; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v63; // x9
  __int64 v64; // x22
  struct System_Int32_array *v65; // x9
  __int64 v66; // x2
  __int64 v67; // x3
  BattleLogicTask_o *v68; // x21

  if ( (byte_4B18D9E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleServantData__TypeInfo, *(_QWORD *)&actionId, funcEnt);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Comparison_BattleServantData__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__ForEach__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__Sort__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, v19, v20);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, v21, v22);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v23, v24);
    byte_4B18D9E = 1;
  }
  v25 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&actionId, funcEnt, baeVals);
  BattleActionData___ctor(v25, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_43290096((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v30 = this->fields.data;
  if ( !v30 )
    goto LABEL_53;
  player_datalist = (System_Collections_Generic_List_object__o *)v30->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v26);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v32 = *(System_Action_object__o **)(*((_QWORD *)data + 23) + 80LL);
  if ( !v32 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data, v26);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v33 = (Il2CppObject *)**((_QWORD **)data + 23);
    v32 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleServantData__TypeInfo, v26, v28, v29);
    System_Action_object____ctor(v32, v33, Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Action_BattleServantData__o *)v32;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__89_0, (int64_t)v32, v35, v36, v37, v38, v39, v40);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v32,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v43 = this->fields.data;
  if ( !v43 )
    goto LABEL_53;
  data = BattleLogicFunction___c_TypeInfo;
  v44 = (System_Collections_Generic_List_object__o *)v43->fields.player_datalist;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v26);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*((_QWORD *)data + 23) + 88LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data, v26);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)data + 23);
    v45 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BattleServantData__TypeInfo, v26, v41, v42);
    System_Comparison_object____ctor(v45, v46, Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, 0LL);
    v47 = BattleLogicFunction___c_TypeInfo->static_fields;
    v47->__9__89_1 = (struct System_Comparison_BattleServantData__o *)v45;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->__9__89_1, (int64_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v44 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_56244000(
    v44,
    v45,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v54 = this->fields.data;
  if ( !v54 )
    goto LABEL_53;
  data = v54->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_53;
  v55 = *((_DWORD *)data + 6);
  v56 = (unsigned int *)data;
  if ( v55 >= 1 )
  {
    v57 = 0;
    while ( 1 )
    {
      if ( v57 >= (unsigned int)v55 )
LABEL_54:
        sub_1BCAA44(data, v26);
      v58 = *(BattleServantData_o **)&v56[2 * v57 + 8];
      if ( !v58 )
        break;
      if ( v58->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v58, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v58->fields.isEntry = 0;
      }
      v58->fields.deckIndex = v57;
      v55 = v56[6];
      if ( ++v57 >= v55 )
        goto LABEL_32;
    }
LABEL_53:
    sub_1BCAA3C(data, v26);
  }
LABEL_32:
  v59 = this->fields.data;
  if ( !v59 )
    goto LABEL_53;
  v60 = 0LL;
  while ( 1 )
  {
    p_entryid = v59->fields.p_entryid;
    if ( !p_entryid )
      goto LABEL_53;
    max_length = p_entryid->max_length;
    if ( (__int64)v60 >= (int)max_length )
      break;
    if ( v60 >= max_length )
      goto LABEL_54;
    p_entryid->m_Items[v60 + 1] = -1;
    v63 = v56[6];
    if ( (__int64)v60 < (int)v63 )
    {
      if ( v60 >= v63 )
        goto LABEL_54;
      v64 = *(_QWORD *)&v56[2 * v60 + 8];
      if ( !v64 )
        goto LABEL_53;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v56[2 * v60 + 8], 0, 0LL);
      v59 = this->fields.data;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( !v59 )
          goto LABEL_53;
        v65 = v59->fields.p_entryid;
        if ( !v65 )
          goto LABEL_53;
        if ( v60 >= v65->max_length )
          goto LABEL_54;
        v65->m_Items[v60 + 1] = *(_DWORD *)(v64 + 24);
        *(_BYTE *)(v64 + 476) = 1;
        *(_BYTE *)(v64 + 541) = 1;
      }
    }
    ++v60;
    if ( !v59 )
      goto LABEL_53;
  }
  BattleData__createCommandCard(v59, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__shuffleCommand((BattleData_o *)data, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__drawCommand((BattleLogic_o *)data, 0LL);
  if ( !v25 )
    goto LABEL_53;
  v25->fields.redrawCommandCard = 1;
  v68 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, v26, v66, v67);
  BattleLogicTask___ctor(v68, 0LL);
  if ( !v68 )
    goto LABEL_53;
  BattleLogicTask__setCheckEntryFunction(v68, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v68, 0LL);
  return v25;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BattleActionData_o *v17; // x23
  __int64 v18; // x1
  int64_t data; // x0
  BattleServantData_o *v20; // x25
  BattleServantData_o *ServantData; // x24
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x26
  __int64 v26; // x8
  double v27; // d0
  int32_t v28; // w28
  int v29; // w29
  int64_t v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct BattleData_o *v72; // x8
  int32_t uniqueId; // w21
  int32_t v74; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_4B18D9C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&BattleActionData_DamageData_TypeInfo, v11, v12);
    sub_1BCA7E0(&int___TypeInfo, v13, v14);
    sub_1BCA7E0(&BattleBuffData_ShowBuffData___TypeInfo, v15, v16);
    byte_4B18D9C = 1;
  }
  v17 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals);
  BattleActionData___ctor(v17, 0LL);
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (int64_t)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v20 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v25 = sub_1BCAA2C(BattleActionData_DamageData_TypeInfo, v22, v23, v24);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v25, 0LL);
  if ( !v20 )
    goto LABEL_28;
  data = BattleServantData__getAccumulationDamage(v20, 0LL);
  if ( !baseVals )
    goto LABEL_28;
  v26 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (int64_t)this->fields.data;
  v27 = (double)v26 / 1000.0;
  v28 = v27 == INFINITY ? 0x80000000 : (int)v27;
  if ( !data )
    goto LABEL_28;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_28;
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
    goto LABEL_28;
  *(_DWORD *)(v25 + 28) = targetId;
  *(_DWORD *)(v25 + 16) = funcIndex;
  *(_WORD *)(v25 + 32) = 0;
  *(_BYTE *)(v25 + 34) = 0;
  *(_DWORD *)(v25 + 36) = 0;
  *(_BYTE *)(v25 + 40) = 0;
  v31 = sub_1BCA888(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 64) = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 64), v31, v32, v33, v34, v35, v36, v37);
  v38 = sub_1BCA888(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 72) = v38;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 72), v38, v39, v40, v41, v42, v43, v44);
  data = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1BCAA44(data, data);
  *(_DWORD *)(data + 32) = v28;
  *(_QWORD *)(v25 + 96) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 96), data, v45, v46, v47, v48, v49, v50);
  v51 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 104) = v51;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 104), v51, v52, v53, v54, v55, v56, v57);
  v58 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 112) = v58;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 112), v58, v59, v60, v61, v62, v63, v64);
  v65 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v25 + 120) = v65;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 120), v65, v66, v67, v68, v69, v70, v71);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v28, 0LL);
  BattleServantData__ResultDamage(ServantData, v28, v20, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v72 = this->fields.data;
    if ( !v72 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v72->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v25, 80, 0LL);
  if ( !v17
    || (BattleActionData__SetFuncDamageData(v17, (BattleActionData_DamageData_o *)v25, baseVals, 0LL),
        (data = (int64_t)this->fields.data) == 0) )
  {
LABEL_28:
    sub_1BCAA3C(data, v18);
  }
  uniqueId = v20->fields.uniqueId;
  v74 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v74, IsOpponentPTUniqueID, 0LL);
  return v17;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionReplaceEnemyMember(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BattleData_o *data; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  struct BattleData_o *v19; // x8
  BattleData_o *v20; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v22; // x0
  System_Func_object__bool__o *_9__83_0; // x22
  Il2CppObject *v24; // x25
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  BattleActionData_o *v34; // x21
  int32_t Param; // w25
  int32_t v36; // w22
  BattleServantData_o *EnemyServantData; // x25
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  struct BattleData_o *v39; // x8
  int v40; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v43; // x10
  BattleActionData_o *result; // x0
  int DeckIndex; // w23
  struct BattleData_o *v46; // x8
  struct System_Int32_array *v47; // x9
  __int64 v48; // x11
  int32_t v49; // w24
  int32_t uniqueId; // w10
  __int64 v51; // x8
  __int64 v52; // x11
  int32_t *v53; // x9
  struct System_Int32_array *v54; // x8
  unsigned __int64 v55; // x10
  unsigned __int64 v56; // x9
  int32_t *v57; // x12

  if ( (byte_4B18D98 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, funcEnt, baseVals);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_BattleServantData____76879128, v8, v9);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__, v12, v13);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v14, v15);
    byte_4B18D98 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v19 = this->fields.data;
  if ( !v19 )
    goto LABEL_61;
  v20 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v19->fields.enemy_datalist;
  v22 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, funcEnt);
    v22 = BattleLogicFunction___c_TypeInfo;
  }
  _9__83_0 = (System_Func_object__bool__o *)v22->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, funcEnt);
      v22 = BattleLogicFunction___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__83_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleServantData__bool__TypeInfo,
                                                funcEnt,
                                                v17,
                                                v18);
    System_Func_object__bool____ctor(
      _9__83_0,
      v24,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_BattleServantData__bool__o *)_9__83_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__83_0,
      (int64_t)_9__83_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__49476864(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__83_0,
                           (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_BattleServantData____76879128);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v20 )
    goto LABEL_61;
  if ( !v20->fields.m_CancellationTokenSource )
    return 0LL;
  v34 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, funcEnt, v32, v33);
  BattleActionData___ctor(v34, 0LL);
  if ( !baseVals )
    goto LABEL_61;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  v36 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v36, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
    v39 = this->fields.data;
    v40 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v39 )
        goto LABEL_61;
      v40 = 0;
    }
    else
    {
      if ( !v39 )
        goto LABEL_61;
      e_entryid = v39->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_61;
      max_length = e_entryid->max_length;
      if ( v40 >= max_length )
        v40 = max_length - 1;
    }
    v43 = v39->fields.e_entryid;
    if ( !v43 )
      goto LABEL_61;
    if ( v40 >= v43->max_length )
      goto LABEL_64;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v43->m_Items[v40 + 1], 0LL);
    if ( !data )
      goto LABEL_61;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v20->fields.m_CancellationTokenSource) )
        goto LABEL_64;
      data = this->fields.data;
      if ( !data )
        goto LABEL_61;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v20->fields.rootfsm, 0LL);
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
    v46 = this->fields.data;
    if ( v46 )
    {
      v47 = v46->fields.e_entryid;
      if ( v47 )
      {
        v48 = *(_QWORD *)&v47->max_length;
        v49 = (int)data;
        if ( DeckIndex >= (int)v48 )
          goto LABEL_47;
        if ( DeckIndex < (unsigned int)v48 )
        {
          if ( v47->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            EnemyServantData->fields.deckIndex = (int)data;
            EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
LABEL_54:
            v54 = v46->fields.e_entryid;
            if ( v54 )
            {
              v55 = v54->max_length;
              v56 = 0LL;
              v57 = &v54->m_Items[1];
              while ( (__int64)v56 < (int)v55 )
              {
                if ( v56 >= v55 )
                  goto LABEL_64;
                if ( v57[v56] == EnemyServantData->fields.uniqueId )
                  v57[v56] = EnemyServantDataFromNpcId->fields.uniqueId;
                ++v56;
              }
              if ( v34 )
              {
                BattleActionData__setReplaceMember(
                  v34,
                  DeckIndex,
                  EnemyServantDataFromNpcId->fields.uniqueId,
                  EnemyServantData->fields.uniqueId,
                  funcIndex,
                  0LL);
                return v34;
              }
            }
            goto LABEL_61;
          }
LABEL_47:
          if ( (int)v48 >= 1 )
          {
            uniqueId = EnemyServantData->fields.uniqueId;
            v51 = 0LL;
            v52 = (unsigned int)*(_QWORD *)&v47->max_length;
            v53 = &v47->m_Items[1];
            do
            {
              if ( v53[v51] == uniqueId )
                EnemyServantData->fields.deckIndex = v51;
              ++v51;
            }
            while ( v52 != v51 );
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          v46 = this->fields.data;
          EnemyServantData->fields.deckIndex = v49;
          EnemyServantDataFromNpcId->fields.deckIndex = (int)data;
          if ( !v46 )
            goto LABEL_61;
          DeckIndex = (int)data;
          goto LABEL_54;
        }
LABEL_64:
        sub_1BCAA44(data, funcEnt);
      }
    }
LABEL_61:
    sub_1BCAA3C(data, funcEnt);
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

  if ( (byte_4B18D97 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&subTargetId);
    byte_4B18D97 = 1;
  }
  v11 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                *(_QWORD *)&subTargetId,
                                funcEnt);
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
    sub_1BCAA44(data, v12);
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
    || (BattleData__SubBuffFromPT_43290096(data, v15, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_27:
    sub_1BCAA3C(data, v12);
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

  if ( (byte_4B18D96 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
    byte_4B18D96 = 1;
  }
  v7 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt, baseVals);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_43290096(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_1BCAA3C(data, v8);
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
  __int64 v14; // x2
  BattleActionData_o *v15; // x20
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x22
  const MethodInfo *v19; // x7
  int32_t maxhp; // w24
  int32_t Value; // w0
  int32_t v23; // w1
  __int64 v24; // x2
  __int64 v25; // x3
  struct BattleData_o *v26; // x8
  __int64 v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B18DA2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIdx);
    sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, v13, v14);
    byte_4B18DA2 = 1;
  }
  v15 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIdx, funcEnt);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&data->klass[1]._1.this_arg.bits)(
                           data,
                           data->klass[1]._1.element_class);
  if ( (int)data >= 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0LL, 0LL, v19);
  if ( !dataVals )
    goto LABEL_22;
  maxhp = v18->fields.maxhp;
  if ( DataVals__GetValue2(dataVals, 0LL) < 1 )
    Value = DataVals__GetValue(dataVals, 0LL);
  else
    Value = DataVals__GetValue2(dataVals, 0LL) * maxhp / 1000;
  if ( Value <= 1 )
    v23 = 1;
  else
    v23 = Value;
  BattleServantData__setHp(v18, v23, 1, 0LL);
  v18->fields.status = 0;
  data = (BattleData_o *)BattleServantData__isDeadEscape(v18, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v26 = this->fields.data;
    if ( !v26 )
      goto LABEL_22;
    if ( v26->fields.endbattleFlg )
      v18->fields.isSystemDead = 1;
  }
  v27 = sub_1BCAA2C(BattleActionData_BuffData_TypeInfo, v16, v24, v25);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_22;
  uniqueId = v18->fields.uniqueId;
  *(_DWORD *)(v27 + 16) = 0;
  *(_QWORD *)(v27 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = funcEnt->fields.popupText;
  *(_QWORD *)(v27 + 56) = popupText;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 56), (int64_t)popupText, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v27 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v27 + 72) = effectList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 72), (int64_t)effectList, v37, v38, v39, v40, v41, v42);
  *(_DWORD *)(v27 + 28) = 2;
  if ( !v15 )
LABEL_22:
    sub_1BCAA3C(data, v16);
  BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)v27, 0LL, 0LL);
  return v15;
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
  long double v7; // q0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v23; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v25; // x26
  bool IsRevivalUp; // w0
  SkillLvEntity_o *v27; // x29
  __int64 v28; // x1
  BattleActorControl_o *PartsActor; // x27
  BattleActionData_o *v30; // x25
  SkillLvEntity_o *v31; // x28
  __int64 v32; // x2
  __int64 v33; // x3
  int32_t targetId; // w1
  const MethodInfo *v35; // x6
  BattleActionData_o *RevivalHealData; // x0
  __int64 v37; // x1
  BattleActorControl_o *v38; // x26
  BattleServantData_o *battleSvtData; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  BattleActionData_o *v43; // x27
  int32_t v44; // w1
  const MethodInfo *v45; // x6
  BattleActionData_o *v46; // x0

  if ( (byte_4B18DAE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, actionData, funcEnt);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18, v19);
    byte_4B18DAE = 1;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC(v7);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC(v7);
  MasterData_object = **(DataManager_o ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_49;
  v23 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[1]._1.namespaze)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_49;
  if ( !v23 )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v23,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_49;
  v25 = (SkillLvEntity_o *)MasterData_object;
  IsRevivalUp = SkillLvEntity__IsRevivalUp((SkillLvEntity_o *)MasterData_object, 0LL);
  if ( IsRevivalUp )
    v27 = v25;
  else
    v27 = 0LL;
  if ( IsRevivalUp )
  {
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_49;
    PartsActor = BattleData__GetPartsActor((BattleData_o *)MasterData_object, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    MasterData_object = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL);
    v30 = 0LL;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      v31 = v27;
    else
      v31 = 0LL;
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
          v30 = 0LL;
        }
        else
        {
          v30 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, actionData, v32, v33);
          BattleActionData___ctor(v30, 0LL);
          if ( !v30 )
            goto LABEL_49;
          v30->fields.actorId = actionData->fields.actorId;
          v30->fields.targetId = PartsActor->fields.uniqueID;
          BattleActionData__setStateActors(v30, 0LL);
          targetId = v30->fields.targetId;
          v30->fields.isRevival = 1;
          v30->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              this,
                              targetId,
                              funcEnt,
                              baseVals,
                              funcIndex,
                              isCommandSideEffect,
                              v35);
          BattleActionData__addAction(v30, RevivalHealData, 0LL);
        }
        v25 = v31;
      }
      else
      {
        v30 = 0LL;
        v25 = v27;
      }
    }
    if ( !v25 )
LABEL_49:
      sub_1BCAA3C(MasterData_object, actionData);
  }
  else
  {
    v30 = 0LL;
  }
  if ( !SkillLvEntity__IsRevivalUnder(v25, 0LL) )
    goto LABEL_42;
  MasterData_object = (DataManager_o *)this->fields.data;
  if ( !MasterData_object )
    goto LABEL_49;
  v38 = BattleData__GetPartsActor((BattleData_o *)MasterData_object, 2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  MasterData_object = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v38 )
    {
      battleSvtData = v38->fields.battleSvtData;
      if ( !battleSvtData || BattleServantData__isAlive(battleSvtData, 0, 0LL) )
        goto LABEL_42;
      v43 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v40, v41, v42);
      BattleActionData___ctor(v43, 0LL);
      if ( v43 )
      {
        v43->fields.actorId = actionData->fields.actorId;
        v43->fields.targetId = v38->fields.uniqueID;
        BattleActionData__setStateActors(v43, 0LL);
        v44 = v43->fields.targetId;
        v43->fields.isRevival = 1;
        v43->fields.motionId = 2202;
        v46 = BattleLogicFunction__createRevivalHealData(
                this,
                v44,
                funcEnt,
                baseVals,
                funcIndex,
                isCommandSideEffect,
                v45);
        BattleActionData__addAction(v43, v46, 0LL);
        if ( v30 )
          BattleActionData__AddAfterActionData(v30, v43, 0, 0LL);
        else
          v30 = v43;
        goto LABEL_43;
      }
    }
    goto LABEL_49;
  }
LABEL_42:
  if ( v30 )
LABEL_43:
    BattleActionData__AddAfterActionData(actionData, v30, 0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  BattleData_o *data; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  BattleActionData_SkillShiftServant_o *v27; // x23

  if ( (byte_4B18DAB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, actionData, targetData);
    sub_1BCA7E0(&BattleActionData_SkillShiftServant_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_8858/*"MOTION_SHIFT"*/, v11, v12);
    byte_4B18DAB = 1;
  }
  v13 = sub_1BCAA2C(BattleActionData_TypeInfo, actionData, targetData, *(_QWORD *)&npcId);
  BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
  if ( !targetData )
    goto LABEL_8;
  if ( !v13 )
    goto LABEL_8;
  *(_DWORD *)(v13 + 32) = targetData->fields.uniqueId;
  if ( !actionData )
    goto LABEL_8;
  *(_DWORD *)(v13 + 36) = actionData->fields.targetId;
  BattleActionData__setStateMotion((BattleActionData_o *)v13, 0LL);
  *(_BYTE *)(v13 + 243) = 1;
  v16 = StringLiteral_8858/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v13 + 64) = StringLiteral_8858/*"MOTION_SHIFT"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 64), v16, v17, v18, v19, v20, v21, v22);
  data = this->fields.data;
  v27 = (BattleActionData_SkillShiftServant_o *)sub_1BCAA2C(BattleActionData_SkillShiftServant_TypeInfo, v24, v25, v26);
  BattleActionData_SkillShiftServant___ctor(v27, data, npcId, 0LL);
  if ( !v27 )
LABEL_8:
    sub_1BCAA3C(v14, v15);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v27, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v13, (BattleActionData_ShiftServant_o *)v27, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v27, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v13, 1, 0LL);
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x28
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  BattleServantSnapShotOnBuffUpdate_o *v25; // x26
  System_Int32_array *vals; // x27
  int32_t Value; // w29
  int32_t Value2; // w22
  RemovedBuffInfo_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x2
  __int64 v37; // x3
  const MethodInfo *v38; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x25
  BattleActionData_o *v40; // x22
  const MethodInfo *v42; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v43; // [xsp+18h] [xbp-68h]

  if ( (byte_4B18D8A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, funcEnt);
    sub_1BCA7E0(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v18, v19);
    byte_4B18D8A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v25 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1BCAA2C(BattleServantSnapShotOnBuffUpdate_TypeInfo, v22, v23, v24);
  BattleServantSnapShotOnBuffUpdate___ctor(v25, ServantData, 0LL);
  if ( !funcEnt )
    goto LABEL_12;
  if ( !baseVals )
    goto LABEL_12;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 89, 0LL);
  if ( !ServantData
    || (v29 = BattleServantData__subBuffFromIndividualites(
                ServantData,
                vals,
                Value,
                Value2,
                1,
                (unsigned __int8)data & 1,
                0LL),
        *subBuffInfo = v29,
        sub_1BCA784((PartyOrganizationUtility_o *)subBuffInfo, (int64_t)v29, v30, v31, v32, v33, v34, v35),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(data, *(_QWORD *)&targetId);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0LL, 0LL, v38);
  v40 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, *(_QWORD *)&targetId, v36, v37);
  BattleActionData___ctor(v40, 0LL);
  BattleLogicFunction__ApplySubBuffChanges(
    this,
    v40,
    RemovedAllBuffList_k__BackingField,
    targetId,
    v25,
    baseVals,
    index,
    isCommandSideEffect,
    v43,
    v42);
  return v40;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  BattleLogicFunction___c__DisplayClass85_0_o *v37; // x19
  BattleData_o *data; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  BattleActionData_o *v42; // x20
  BattleServantData_o *v43; // x22
  int32_t Param; // w26
  int32_t v45; // w28
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x27
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  BattleLogicFunction___c_c *v53; // x8
  BattleServantData_array *v54; // x25
  System_Func_object__object__o *_9__85_0; // x20
  Il2CppObject *v56; // x29
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v64; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  BattleLogicSkill_SkillExecArgs_o *v69; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  int64_t After_k__BackingField; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct BattleServantSnapShot_o *v78; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x19
  int max_length; // w8
  BattleActionData_o *v85; // x27
  unsigned int v86; // w23
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v87; // x22
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w20
  BattleActionData_BuffData_o *v90; // x26
  __int64 v91; // x2
  __int64 v92; // x3
  BattleServantSnapShot_o *v93; // x27
  BattleServantSnapShot_o *v94; // x28
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v95; // x29
  struct BattleServantData_o *v96; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x20
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  System_Func_object__bool__o *v101; // x21
  struct BattleServantSnapShot_o *v102; // x8
  struct BattleData_o *v103; // x8
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v105; // [xsp+8h] [xbp-98h]
  BattleServantData_o *v106; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_o *v107; // [xsp+18h] [xbp-88h]
  BattleLogicFunction___c__DisplayClass85_0_o *v108; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v109; // [xsp+30h] [xbp-70h]

  if ( (byte_4B18D9A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo, *(_QWORD *)&targetId, funcEnt);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleServantSnapShotShiftServant_TypeInfo, v13, v14);
    sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___, v17, v18);
    sub_1BCA7E0(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Func_BattleActionData_BuffData__bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo, v23, v24);
    sub_1BCA7E0(&BattleActionData_ShiftServant_TypeInfo, v25, v26);
    sub_1BCA7E0(&BattleLogicSkill_SkillExecArgs_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__functionTransformServant_b__85_0__, v29, v30);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__, v31, v32);
    sub_1BCA7E0(&BattleLogicFunction___c__DisplayClass85_0_TypeInfo, v33, v34);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v35, v36);
    byte_4B18D9A = 1;
  }
  v37 = (BattleLogicFunction___c__DisplayClass85_0_o *)sub_1BCAA2C(
                                                         BattleLogicFunction___c__DisplayClass85_0_TypeInfo,
                                                         *(_QWORD *)&targetId,
                                                         funcEnt,
                                                         baeVals);
  BattleLogicFunction___c__DisplayClass85_0___ctor(v37, 0LL);
  if ( !v37 )
    goto LABEL_49;
  v37->fields.targetId = targetId;
  v42 = (BattleActionData_o *)sub_1BCAA2C(BattleActionData_TypeInfo, v39, v40, v41);
  BattleActionData___ctor(v42, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  data = (BattleData_o *)BattleData__getServantData(data, v37->fields.targetId, 0LL);
  if ( !baeVals )
    goto LABEL_49;
  v43 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v45 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_49;
    if ( BattleServantData__get_isTransformed(v43, 0LL) )
      Param = -1;
  }
  v108 = v37;
  v48 = sub_1BCAA2C(BattleActionData_ShiftServant_TypeInfo, v39, v46, v47);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v48, funcIndex, 0LL);
  if ( !v48 )
    goto LABEL_49;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v48, v43, 0LL);
  if ( !v42 )
    goto LABEL_49;
  BattleActionData__setShiftServant(v42, (BattleActionData_ShiftServant_o *)v48, 0LL);
  if ( !v43 )
    goto LABEL_49;
  v43->fields.shiftNpcId = -1;
  v43->fields.beforeUserSvtId = -1LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(data, 3, 0, 0LL);
  v53 = BattleLogicFunction___c_TypeInfo;
  v54 = FieldAliveLogicServantArray;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v50);
    v53 = BattleLogicFunction___c_TypeInfo;
  }
  v109 = v42;
  _9__85_0 = (System_Func_object__object__o *)v53->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, v50);
      v53 = BattleLogicFunction___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__85_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BattleServantData__BattleServantSnapShot__TypeInfo,
                                                  v50,
                                                  v51,
                                                  v52);
    System_Func_object__object____ctor(
      _9__85_0,
      v56,
      Method_BattleLogicFunction___c__functionTransformServant_b__85_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__85_0,
      (int64_t)_9__85_0,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  v64 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1BCAA2C(
                                                                  BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo,
                                                                  v50,
                                                                  v51,
                                                                  v52);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v64,
    v54,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0,
    0LL);
  if ( !v64 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v64, 0LL);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v64, v37->fields.targetId, 0LL);
  v69 = (BattleLogicSkill_SkillExecArgs_o *)sub_1BCAA2C(BattleLogicSkill_SkillExecArgs_TypeInfo, v66, v67, v68);
  BattleLogicSkill_SkillExecArgs___ctor(v69, 0LL);
  BattleServantData__setTransformServant(v43, this->fields.data, Param, v45, 0, v69, 0LL);
  if ( !ElemByUniqueId )
    goto LABEL_49;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_49;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v43, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v64, 0LL);
  After_k__BackingField = (int64_t)ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v48 + 72) = After_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 72), After_k__BackingField, v72, v73, v74, v75, v76, v77);
  v78 = ElemByUniqueId->fields._Before_k__BackingField;
  v105 = ElemByUniqueId;
  if ( !v78 )
    goto LABEL_25;
  methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v78->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    v80 = (BattleServantSnapShotShiftServant_c *)v78->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_25:
    v80 = 0LL;
  v107 = this;
  BattleServantData__ApplyCacheForTransformServant(v43, v80, 0LL);
  SvtCacheArray_k__BackingField = v64->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_49:
    sub_1BCAA3C(data, v39);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v85 = v109;
  v106 = v43;
  if ( max_length >= 1 )
  {
    v86 = 0;
    do
    {
      if ( v86 >= max_length )
        sub_1BCAA44(data, v39);
      v87 = SvtCacheArray_k__BackingField->m_Items[v86];
      if ( !v87 )
        goto LABEL_49;
      SvtData_k__BackingField = v87->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v90 = (BattleActionData_BuffData_o *)sub_1BCAA2C(BattleActionData_BuffData_TypeInfo, v39, v81, v82);
      BattleActionData_BuffData___ctor(v90, 0LL);
      if ( !v90 )
        goto LABEL_49;
      v90->fields.targetId = uniqueId;
      v90->fields.isHideEffect = 1;
      v90->fields.functionIndex = funcIndex;
      v93 = v87->fields._Before_k__BackingField;
      v94 = v87->fields._After_k__BackingField;
      v95 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1BCAA2C(
                                                            BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo,
                                                            v39,
                                                            v91,
                                                            v92);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v95, uniqueId, v93, v94, 0LL);
      BattleActionData_BuffData__SetActionEffectProc(v90, (BattleActionEffect_Base_o *)v95, 0LL);
      v96 = v87->fields._SvtData_k__BackingField;
      if ( !v96 )
        goto LABEL_49;
      BattleActionData_BuffData__setSaveNp(v90, v96->fields.np, 0LL);
      v85 = v109;
      BattleActionData__setBuffData(v109, v90, 0LL, 0LL);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v86 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v85, v108->fields.targetId, 0LL);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v85->fields.buffdatalist;
  v101 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                          System_Func_BattleActionData_BuffData__bool__TypeInfo,
                                          v98,
                                          v99,
                                          v100);
  System_Func_object__bool____ctor(
    v101,
    (Il2CppObject *)v108,
    Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__,
    0LL);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v101,
                           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !procArgs )
    goto LABEL_49;
  if ( !procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    if ( !data )
      goto LABEL_46;
    LODWORD(v39) = v106->fields.nexttpturn;
LABEL_45:
    BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, v39, 0LL);
    goto LABEL_46;
  }
  v102 = v105->fields._Before_k__BackingField;
  if ( !v102 )
    goto LABEL_49;
  v39 = (unsigned int)(v106->fields.maxtpturn - v102->fields._MaxTpTurn_k__BackingField + v106->fields.nexttpturn);
  v106->fields.nexttpturn = v39;
  if ( data )
    goto LABEL_45;
LABEL_46:
  v103 = v107->fields.data;
  if ( !v103 )
    goto LABEL_49;
  data = (BattleData_o *)v103->fields._FieldEnvData_k__BackingField;
  if ( !data )
    goto LABEL_49;
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0LL);
  return v85;
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  BattleActionData_o *v29; // x28
  __int64 v30; // x1
  __int64 data; // x0
  BattleServantData_o *v32; // x29
  BattleServantData_o *v33; // x23
  System_Int32_array *FixDamageRates; // x26
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x24
  int32_t Param; // w0
  int Random; // w27
  BattleServantData_o *v41; // x19
  int IsIgnoreShiftSafeDamage; // w26
  BattleActionData_o *v43; // x29
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x28
  BattleActionData_o *v46; // x28
  int v47; // w26
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t v54; // w8
  int64_t v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Int32_array *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct BattleData_o *v97; // x8
  int32_t v98; // w21
  bool IsOpponentPTUniqueID; // w0
  bool v101; // [xsp+14h] [xbp-8Ch]
  int32_t v102; // [xsp+18h] [xbp-88h]
  int32_t v103; // [xsp+1Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-80h] BYREF
  bool minimumDamageFlg; // [xsp+28h] [xbp-78h] BYREF
  float damage; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_int__o *v107; // [xsp+30h] [xbp-70h] BYREF
  int32_t hitStat; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4B18DA1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&BattleActionData_DamageValueFuncDamageData_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&int___TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v25, v26);
    sub_1BCA7E0(&BattleBuffData_ShowBuffData___TypeInfo, v27, v28);
    byte_4B18DA1 = 1;
  }
  v107 = 0LL;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v29 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                baseVals);
  BattleActionData___ctor(v29, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_53;
  v32 = (BattleServantData_o *)data;
  v101 = safe;
  v102 = playerId;
  v103 = funcIndex;
  data = (__int64)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_53;
  v33 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0LL);
  v38 = sub_1BCAA2C(BattleActionData_DamageValueFuncDamageData_TypeInfo, v35, v36, v37);
  BattleActionData_DamageValueFuncDamageData___ctor(
    (BattleActionData_DamageValueFuncDamageData_o *)v38,
    FixDamageRates,
    0LL);
  LODWORD(FixDamageRates) = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom((int32_t)FixDamageRates, Param + 1, 0LL);
  hitStat = 0;
  data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_53;
    BattleServantData__CheckNoDamageBuff(
      v33,
      this->fields.data,
      v32,
      0LL,
      (BattleActionData_DamageData_o *)v38,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    v41 = v32;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v33,
      this->fields.data,
      v32,
      0LL,
      (BattleActionData_DamageData_o *)v38,
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
    v41 = v32;
  }
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0LL);
  v43 = mainAction ? v29 : 0LL;
  if ( mainAction && mainAction->fields.skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
    data = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_53;
    v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
             mainAction->fields.skillInfo,
             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v45 )
      goto LABEL_53;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v45,
           &entity,
           data,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (__int64)entity;
      if ( !entity )
        goto LABEL_53;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
    }
  }
  else
  {
    v43 = v29;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v46 = (data & 1) != 0 ? 0LL : v43;
  if ( (((unsigned __int8)data | (unsigned __int8)IsIgnoreShiftSafeDamage) & 1) != 0 )
  {
    if ( v101 )
    {
      if ( !v33 )
        goto LABEL_53;
      data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v33->klass->vtable._13_get_resultHp.method)(
               v33,
               v33->klass->vtable._14_set_resultHp.methodPtr);
      if ( (int)data - Random <= 0 )
      {
        data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v33->klass->vtable._13_get_resultHp.method)(
                 v33,
                 v33->klass->vtable._14_set_resultHp.methodPtr);
        Random = data - 1;
      }
    }
    v46 = v43;
  }
  else
  {
    if ( !v33 )
      goto LABEL_53;
    v47 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v33->klass->vtable._9_get_hp.method)(
            v33,
            v33->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v33->klass->vtable._11_get_reducedhp.method)(
             v33,
             v33->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v47 - (int)data >= 1 && v47 - (int)data < Random )
      Random = v47 - data - 1;
  }
  if ( !v38 )
    goto LABEL_53;
  *(_DWORD *)(v38 + 28) = targetId;
  *(_DWORD *)(v38 + 16) = v103;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_53;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_53;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v38 + 136) = data;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 136), data, v48, v49, v50, v51, v52, v53);
  }
  *(_WORD *)(v38 + 32) = 0;
  *(_BYTE *)(v38 + 34) = 0;
  v54 = hitStat;
  *(_BYTE *)(v38 + 40) = 0;
  *(_DWORD *)(v38 + 36) = v54;
  v55 = sub_1BCA888(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v38 + 64) = v55;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 64), v55, v56, v57, v58, v59, v60, v61);
  v62 = sub_1BCA888(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v38 + 72) = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 72), v62, v63, v64, v65, v66, v67, v68);
  (*(void (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v38 + 376LL))(
    v38,
    &v107,
    (unsigned int)Random,
    0LL,
    *(_QWORD *)(*(_QWORD *)v38 + 384LL));
  data = (__int64)v107;
  if ( !v107 )
    goto LABEL_53;
  v69 = System_Collections_Generic_List_int___ToArray(
          v107,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v38 + 96) = v69;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 96), (int64_t)v69, v70, v71, v72, v73, v74, v75);
  v76 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v38 + 104) = v76;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 104), v76, v77, v78, v79, v80, v81, v82);
  v83 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v38 + 112) = v83;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 112), v83, v84, v85, v86, v87, v88, v89);
  v90 = sub_1BCA888(int___TypeInfo, 0LL);
  *(_QWORD *)(v38 + 120) = v90;
  sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 120), v90, v91, v92, v93, v94, v95, v96);
  if ( !v33 )
    goto LABEL_53;
  BattleServantData__provisionalDamage(v33, Random, 0LL);
  BattleServantData__ResultDamage(v33, Random, v41, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(v33, 0LL);
  if ( (data & 1) == 0 )
  {
    v97 = this->fields.data;
    if ( !v97 )
      goto LABEL_53;
    v33->fields.deadTurn = v97->fields.typeTurn;
  }
  data = DataVals__IsActAttackFunction(baseVals, 0LL);
  if ( (data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v38, 80, 0LL);
  if ( !v46
    || (BattleActionData__SetFuncDamageData(v46, (BattleActionData_DamageData_o *)v38, baseVals, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_53:
    sub_1BCAA3C(data, v30);
  }
  v98 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v102, 0LL);
  BattleServantData__setActionHistory(v33, v102, 7, v98, IsOpponentPTUniqueID, 0LL);
  return v46;
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
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  BattleActionData_o *v30; // x21
  __int64 v31; // x1
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v34; // x24
  int v35; // w23
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v38; // x6
  BattleActionData_BuffData_o *v39; // x29
  BattleServantData_o *v40; // x28
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x25
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  long double inited; // q0
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v53; // x23
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  int64_t *v57; // x8
  int64_t v58; // x23
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  long double v72; // q0
  _QWORD *v73; // x23
  __int64 v74; // x8
  __int64 v75; // x0
  __int64 v76; // x0
  int64_t *v77; // x8
  int64_t v78; // x23
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct BattleBuffData_o *v91; // x8
  PartyOrganizationUtility_o *p_invalidLossHpData; // x0
  int64_t v93; // x1
  bool v94; // w25
  __int64 v95; // x1
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  __int64 v99; // x2
  __int64 v100; // x3
  BattleActionEffect_LossHPFunc_o *v101; // x23
  BattleActionData_BuffData_o *v102; // x0
  struct BattleBuffData_o *v103; // x8
  int32_t v104; // w0
  int32_t v106; // [xsp+18h] [xbp-78h]
  int32_t v107; // [xsp+1Ch] [xbp-74h]
  bool v108; // [xsp+20h] [xbp-70h]
  bool v109; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B18D92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, *(_QWORD *)&playerId, *(_QWORD *)&targetId);
    sub_1BCA7E0(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___, v20, v21);
    sub_1BCA7E0(&BattleActionData_TypeInfo, v22, v23);
    sub_1BCA7E0(&BattleActionData_DamageData_TypeInfo, v24, v25);
    sub_1BCA7E0(&BattleActionEffect_LossHPFunc_TypeInfo, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    byte_4B18D92 = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v30 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&playerId,
                                *(_QWORD *)&targetId,
                                funcEnt);
  BattleActionData___ctor(v30, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v109 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_67;
  Random = overwriteLossHp;
  v34 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v35 = data;
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
  if ( v35 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v107 = funcIndex;
  v108 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v34->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v38);
  if ( !this->fields.data )
    goto LABEL_67;
  v39 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !baseVals )
    goto LABEL_67;
  v40 = (BattleServantData_o *)data;
  v106 = v35;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v44 = sub_1BCAA2C(BattleActionData_DamageData_TypeInfo, v41, v42, v43);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v44, 0LL);
    BattleServantData__CheckNoDamageBuff(
      v34,
      this->fields.data,
      v40,
      0LL,
      (BattleActionData_DamageData_o *)v44,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v44 )
      goto LABEL_67;
    *(_DWORD *)(v44 + 36) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v34,
      this->fields.data,
      v40,
      0LL,
      (BattleActionData_DamageData_o *)v44,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v44 + 36),
      mainAction,
      0LL);
    *(float *)&inited = damage;
    buffData = v34->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_67;
    if ( buffData->fields.isNoDamage )
    {
      v53 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
      v54 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
      if ( !v54 )
      {
        sub_1C1C718(Method_System_Array_Empty_BattleBuffData_ShowBuffData___, v31);
        v54 = v53[7];
      }
      v55 = *(_QWORD *)(v54 + 16);
      if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
        v55 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v55 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v55, v31);
      v56 = *(_QWORD *)(v53[7] + 16LL);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1C1C6BC(inited);
      v57 = *(int64_t **)(v56 + 184);
      v58 = *v57;
      *(_QWORD *)(v44 + 72) = *v57;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 72), v58, v45, v46, v47, v48, v49, v50);
      *(_QWORD *)(v44 + 64) = v58;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 64), v58, v59, v60, v61, v62, v63, v64);
      v73 = Method_System_Array_Empty_int___;
      v74 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v74 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v65);
        v74 = v73[7];
      }
      v75 = *(_QWORD *)(v74 + 16);
      if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
        v75 = sub_1C1C6BC(v72);
      if ( !*(_DWORD *)(v75 + 224) )
        v72 = j_il2cpp_runtime_class_init_0(v75, v65);
      v76 = *(_QWORD *)(v73[7] + 16LL);
      if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
        v76 = sub_1C1C6BC(v72);
      v77 = *(int64_t **)(v76 + 184);
      v78 = *v77;
      *(_QWORD *)(v44 + 120) = *v77;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 120), v78, v66, v67, v68, v69, v70, v71);
      *(_QWORD *)(v44 + 112) = v78;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 112), v78, v79, v80, v81, v82, v83, v84);
      *(_QWORD *)(v44 + 104) = v78;
      sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 104), v78, v85, v86, v87, v88, v89, v90);
      v91 = v34->fields.buffData;
      if ( !v91 )
        goto LABEL_67;
      *(_BYTE *)(v44 + 53) = v91->fields.isNoDamage;
      if ( !v39 )
        goto LABEL_67;
      v39->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v44;
      p_invalidLossHpData = (PartyOrganizationUtility_o *)&v39->fields.invalidLossHpData;
      v93 = v44;
    }
    else
    {
      if ( !v39 )
        goto LABEL_67;
      v39->fields.invalidLossHpData = 0LL;
      p_invalidLossHpData = (PartyOrganizationUtility_o *)&v39->fields.invalidLossHpData;
      v93 = 0LL;
    }
    sub_1BCA784(p_invalidLossHpData, v93, v45, v46, v47, v48, v49, v50);
  }
  v94 = !v108 || v109;
  BattleServantData__ResultDamage(v34, Random, v40, 0LL, 0LL, v94, 0LL);
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
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
        BattleServantData__setActionHistory(v34, playerId, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v39)
    || (v39->fields.procType = 2,
        v101 = (BattleActionEffect_LossHPFunc_o *)sub_1BCAA2C(BattleActionEffect_LossHPFunc_TypeInfo, v31, v99, v100),
        BattleActionEffect_LossHPFunc___ctor(v101, targetId, Random, v94, 0LL),
        BattleActionData_BuffData__SetActionEffectProc(v39, (BattleActionEffect_Base_o *)v101, 0LL),
        !v30) )
  {
LABEL_67:
    sub_1BCAA3C(data, v31);
  }
  BattleActionData__setBuffData(v30, v39, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v34->fields.buffData;
      if ( !data )
        goto LABEL_67;
      goto LABEL_61;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v34->fields.buffData;
      if ( !data )
        goto LABEL_67;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_61:
        v102 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v34, v107, 0LL);
        BattleActionData__setBuffData(v30, v102, baseVals, 0LL);
      }
    }
  }
  v103 = v34->fields.buffData;
  if ( !v103 )
    goto LABEL_67;
  v103->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v34->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0LL) )
  {
    v104 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v34->klass->vtable._13_get_resultHp.method)(
             v34,
             v34->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v34, v106, v104, 0LL);
  }
  return v30;
}


FunctionMaster_o *__fastcall BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FunctionMaster_o *result; // x0
  PartyOrganizationUtility_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B18D73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B18D73 = 1;
  }
  master = this->fields.master;
  p_master = (PartyOrganizationUtility_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_master, (int64_t)MasterData_object, v12, v13, v14, v15, v16, v17);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  PartyOrganizationUtility_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B18D72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B18D72 = 1;
  }
  master = this->fields.master;
  p_master = (PartyOrganizationUtility_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (PartyOrganizationUtility_c *)MasterData_object,
          sub_1BCA784(p_master, (int64_t)MasterData_object, v14, v15, v16, v17, v18, v19),
          (Instance = (Il2CppObject *)p_master->klass) == 0LL) )
    {
      sub_1BCAA3C(Instance, v12);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  PartyListViewItem_o *v7; // x7
  BattleActionData_BuffData_o *v8; // x19
  struct System_String_o *popupText; // x1
  System_Int32_array *EffectList; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v8 = defBuffData;
  if ( (byte_4B18D9B & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, funcEnt, *(_QWORD *)&uniqueId);
    byte_4B18D9B = 1;
  }
  if ( !v8
    && (v8 = (BattleActionData_BuffData_o *)sub_1BCAA2C(
                                              BattleActionData_BuffData_TypeInfo,
                                              funcEnt,
                                              *(_QWORD *)&uniqueId,
                                              *(_QWORD *)&funcIndex),
        BattleActionData_BuffData___ctor(v8, 0LL),
        !v8)
    || (v8->fields.targetId = uniqueId, v8->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_1BCAA3C(this, funcEnt);
  }
  popupText = funcEnt->fields.popupText;
  v8->fields.popLabel = popupText;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v8->fields.popLabel,
    (int64_t)popupText,
    *(int64_t *)&uniqueId,
    funcIndex,
    (System_String_o *)isCommandSideEffect,
    (BattleSetupInfo_o *)defBuffData,
    (FollowerInfo_o *)method,
    v7);
  *(_QWORD *)&v8->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  v8->fields.effectList = EffectList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.effectList, (int64_t)EffectList, v15, v16, v17, v18, v19, v20);
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
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicFuncProcess; // x0
  int32_t v8; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v9; // x20

  if ( (byte_4B18D77 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__,
      *(_QWORD *)&functType,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__,
      v5,
      v6);
    byte_4B18D77 = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v8 = 0) : (v8 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v8,
                                                                                     (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_1BCAA3C(dicFuncProcess, *(_QWORD *)&functType);
  }
  v9 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess;
  if ( BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
         (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess,
         this,
         0LL) )
  {
    ((void (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleLogicFunction_o *, Il2CppMethodPointer))v9->klass->vtable._4_init.method)(
      v9,
      this,
      v9->klass->vtable._5_IsPreCheckTargetsAvailable.methodPtr);
  }
  return v9;
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

  if ( (byte_4B18D88 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
    byte_4B18D88 = 1;
  }
  v8 = (BattleActionData_o *)sub_1BCAA2C(
                               BattleActionData_TypeInfo,
                               *(_QWORD *)&targetId,
                               *(_QWORD *)&funcIndex,
                               funcEnt);
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
    sub_1BCAA3C(GrayActionBuffData, v10);
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
    sub_1BCAA3C(this, baseVals);
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
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  BattleActionData_o *v24; // x23
  __int64 v25; // x1
  int64_t v26; // x2
  __int64 v27; // x3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  v10 = defBuffData;
  if ( (byte_4B18D84 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
    sub_1BCA7E0(&BattleActionData_BuffData_TypeInfo, v18, v19);
    sub_1BCA7E0(&int___TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B18D84 = 1;
  }
  v24 = (BattleActionData_o *)sub_1BCAA2C(
                                BattleActionData_TypeInfo,
                                *(_QWORD *)&targetId,
                                *(_QWORD *)&funcIndex,
                                isHide);
  BattleActionData___ctor(v24, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_1BCAA2C(BattleActionData_BuffData_TypeInfo, v25, v26, v27);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.popLabel, (int64_t)dispName, v26, v27, v28, v29, v30, v31);
  v34 = sub_1BCA888(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v34;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.effectList, v34, v35, v36, v37, v38, v39, v40);
  if ( !v24
    || (BattleActionData__setBuffData(v24, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_10:
    sub_1BCAA3C(v32, v33);
  }
  v10->fields.popDelay = DataVals__GetParam(dataVals, 64, 0, 0LL);
  v24->fields.funcResult = 0;
  return v24;
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
  __int64 v17; // x2
  const MethodInfo *v18; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_4B18D85 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&StringLiteral_2942/*"BATTLE_MISS_FUNCTION"*/, v16, v17);
    byte_4B18D85 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1BCAA3C(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2942/*"BATTLE_MISS_FUNCTION"*/, 0LL);
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
           v18);
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
  __int64 v17; // x2
  const MethodInfo *v18; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_4B18D86 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&targetId, *(_QWORD *)&funcIndex);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&StringLiteral_2953/*"BATTLE_NO_EFFECT_FUNCTION"*/, v16, v17);
    byte_4B18D86 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1BCAA3C(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&targetId);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
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
           v18);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Target_BattleTargetArgs_o *args; // x23
  __int64 v18; // x0
  __int64 v19; // x1
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_38428440; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Func_int__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4B18D7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleLogicFunction__getTargetids_b__55_0__, mainAction, *(_QWORD *)&targetType);
    sub_1BCA7E0(&Target_BattleTargetArgs_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v13, v14);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v15, v16);
    byte_4B18D7E = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1BCAA2C(
                                        Target_BattleTargetArgs_TypeInfo,
                                        mainAction,
                                        *(_QWORD *)&targetType,
                                        dataVals);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_1BCAA3C(v18, v19);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_38428440 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_38428440(
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
  v28 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v25, v26, v27);
  System_Func_int__bool____ctor(v28, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__55_0__, 0LL);
  v29 = System_Linq_Enumerable__Where_int_(
          TargetIds_38428440,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v29,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  return data->fields._FieldEnvData_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, passive);
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
    sub_1BCAA3C(this, args);
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
    sub_1BCAA3C(this, 0LL);
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
        sub_1BCAA44(this, *(_QWORD *)&uniqueId);
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
    sub_1BCAA3C(this, *(_QWORD *)&uniqueId);
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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  System_String_o *v121; // x0
  System_String_o *v122; // x0
  int32_t PTSubTargetId; // w29
  System_String_o *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct BattleData_o *data; // x8
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x2
  __int64 v136; // x3
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v138; // x24
  int32_t *p_actSetId; // x24
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  WeightRate_int__o *v143; // x23
  signed int max_length; // w8
  unsigned int v145; // w28
  Il2CppClass **v146; // x8
  DataVals_o *v147; // x25
  int32_t ActSetWeight; // w26
  int32_t Random; // w0
  System_String_o *v150; // x0
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  BattleLogicFunction___c_c *v154; // x0
  System_Object_array *funcUnitArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v157; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x3
  BattleLogicFunction___c_c *v168; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v169; // x21
  System_Func_object__bool__o *_9__41_1; // x22
  Il2CppObject *v171; // x23
  struct BattleLogicFunction___c_StaticFields *v172; // x0
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  int v179; // w21
  bool v180; // w22
  BattleServantData_o *v181; // x25
  __int64 v182; // x2
  __int64 v183; // x3
  SkillValueUpApplierPlayerMaster_o *v184; // x23
  BattleData_o *v185; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v186; // x8
  int v187; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v188; // x23
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v189; // x26
  int v190; // w27
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v191; // x21
  DataVals_o *dataVals_k__BackingField; // x29
  const MethodInfo *v193; // x3
  const MethodInfo *v194; // x4
  __int64 v195; // x2
  __int64 v196; // x3
  BattleLogicFunction___c_c *v197; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_2; // x27
  Il2CppObject *v200; // x28
  struct BattleLogicFunction___c_StaticFields *v201; // x0
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v211; // x21
  BattleLogicFunction___c_c *v212; // x8
  System_Func_object__int__o *_9__41_3; // x27
  Il2CppObject *v214; // x28
  struct BattleLogicFunction___c_StaticFields *v215; // x0
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v222; // x0
  System_Int32_array *v223; // x21
  bool v224; // w27
  __int64 v225; // x1
  __int64 v226; // x2
  __int64 v227; // x3
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v228; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v229; // x0
  const MethodInfo *v230; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v231; // x23
  int v232; // w8
  int i; // w25
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v234; // x28
  int32_t targetId_k__BackingField; // w21
  BattleLogicFunction_o *v236; // x27
  const MethodInfo *v237; // x7
  BattleActionData_o *NoEffectObject; // x0
  int32_t *v239; // x24
  struct System_Int32_array *vals; // x8
  int commandType; // w8
  BattleActionData_o *v242; // x0
  bool v243; // w0
  const MethodInfo *v244; // x5
  const MethodInfo *v245; // x3
  int32_t actorId; // w28
  int32_t v247; // w22
  bool isSafeDamage; // w0
  int32_t v249; // w2
  const MethodInfo *v250; // x7
  const MethodInfo *v251; // x7
  int32_t v252; // w1
  int32_t v253; // w2
  int32_t v254; // w5
  bool isDamage; // w0
  int v256; // w9
  int v257; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v259; // x9
  __int64 size; // x10
  BattleActionData_o *v261; // x0
  const MethodInfo *v262; // x4
  BattleData_o *v263; // x28
  int32_t Value; // w24
  BattleLogicFunction_o *v265; // x0
  const MethodInfo *v266; // x6
  BattleData_o *v267; // x28
  const MethodInfo *v268; // x7
  bool isUnaffected; // w22
  int CorrectedValueFuncGainNp; // w28
  const MethodInfo *v271; // x7
  BattleLogicFunction_o *v272; // x0
  int32_t v273; // w22
  const MethodInfo *v274; // x6
  BattleActionData_BuffData_o *v275; // x28
  int32_t v276; // w0
  BattleLogicFunction_o *v277; // x0
  int32_t v278; // w24
  const MethodInfo *v279; // x6
  int32_t v280; // w1
  int32_t v281; // w22
  System_Int32_array *TargetList; // x28
  int32_t v283; // w0
  const MethodInfo *v284; // x6
  int32_t v285; // w22
  System_Int32_array *v286; // x28
  int32_t v287; // w0
  int32_t v288; // w2
  FunctionEntity_o *v289; // x1
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleLogicFunction_o *v291; // x0
  int32_t v292; // w1
  const MethodInfo *v293; // x3
  int32_t v294; // w22
  bool v295; // w0
  bool v296; // w8
  bool v297; // w6
  bool v298; // w7
  BattleLogicFunction_o *v299; // x0
  int32_t v300; // w1
  BattleActionData_o *v301; // x0
  const MethodInfo *v302; // x7
  const MethodInfo *v303; // x7
  const MethodInfo *v304; // x6
  int32_t v305; // w1
  FunctionEntity_o *v306; // x2
  DataVals_o *v307; // x3
  int32_t v308; // w4
  const MethodInfo *v309; // x5
  BattleActionData_o *v310; // x0
  FunctionEntity_o *v311; // x1
  FunctionEntity_o *v312; // x3
  DataVals_o *v313; // x4
  const MethodInfo *v314; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v316; // x2
  const MethodInfo *v317; // x6
  BattleActionData_o *v318; // x0
  const MethodInfo *v319; // x5
  BattleActionData_o *v320; // x0
  FunctionEntity_o *v321; // x2
  const MethodInfo *v322; // x6
  int32_t v323; // w1
  FunctionEntity_o *v324; // x2
  DataVals_o *v325; // x3
  int32_t v326; // w4
  const MethodInfo *v327; // x5
  BattleActionData_o *v328; // x0
  FunctionEntity_o *v329; // x3
  int32_t v330; // w5
  const MethodInfo *v331; // x6
  _BOOL8 v332; // x0
  FunctionEntity_o *v333; // x2
  int32_t v334; // w4
  const MethodInfo *v335; // x5
  const MethodInfo *v336; // x3
  int32_t v337; // w22
  int32_t v338; // w28
  char v339; // w5
  const MethodInfo *v340; // x7
  BattleLogicFunction_o *v341; // x0
  int32_t v342; // w1
  int32_t v343; // w2
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  struct BattleData_o *v350; // x8
  int64_t draw_commandlist; // x1
  int v352; // w22
  __int64 v353; // x1
  __int64 v354; // x2
  __int64 v355; // x3
  bool v356; // w28
  BattleServantSnapShotOnBuffUpdate_o *v357; // x24
  System_Int32_array *v358; // x0
  BattleData_o *v359; // x24
  int32_t v360; // w28
  __int64 v361; // x1
  __int64 v362; // x2
  __int64 v363; // x3
  Generator_BGMFromChangeBGMFunc_o *v364; // x22
  const MethodInfo *v365; // x4
  const MethodInfo *v366; // x6
  System_Int32_array *v367; // x28
  int32_t SameIndiualityBuffSum; // w0
  int32_t v369; // w28
  bool v370; // w4
  int32_t v371; // w2
  DataVals_o *v372; // x3
  BattleActionData_BuffData_o *v373; // x6
  const MethodInfo *v374; // x7
  int32_t v375; // w1
  int32_t v376; // w2
  int32_t v377; // w5
  const MethodInfo *v378; // x4
  const MethodInfo *v379; // x4
  _BOOL8 v380; // x0
  const MethodInfo *v381; // x3
  bool v382; // w28
  int32_t HpPerValue; // w0
  const MethodInfo *v384; // x3
  bool v385; // w2
  BattleLogicFunction_o *v386; // x0
  DataVals_o *v387; // x1
  _BOOL8 updated; // x0
  __int64 v389; // x1
  __int64 v390; // x2
  __int64 v391; // x3
  const MethodInfo *v392; // x6
  BattleActionData_MasterBuffData_o *v393; // x24
  __int64 v394; // x1
  __int64 v395; // x2
  __int64 v396; // x3
  Generator_BGFromQuickChangeBGFunc_o *v397; // x22
  const MethodInfo *v398; // x3
  int32_t Param; // w0
  const MethodInfo *v400; // x4
  BattleBuffData_o *klass; // x28
  __int64 v402; // x1
  __int64 v403; // x2
  __int64 v404; // x3
  BattleActionData_UpShiftGaugeData_o *v405; // x22
  const MethodInfo *v406; // x5
  __int64 v407; // x1
  __int64 v408; // x2
  __int64 v409; // x3
  DataVals_o *v410; // x3
  const MethodInfo *v411; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v413; // x3
  const MethodInfo *v414; // x6
  const MethodInfo *v415; // x4
  const MethodInfo *v416; // x3
  _BOOL8 v417; // x0
  const MethodInfo *v418; // x3
  const MethodInfo *v419; // x2
  const MethodInfo *v420; // x2
  const MethodInfo *v421; // x5
  const MethodInfo *v422; // x4
  const MethodInfo *v423; // x4
  int32_t v424; // w0
  const MethodInfo *v425; // x2
  const MethodInfo *v426; // x2
  const MethodInfo *v427; // x2
  __int64 monitor_high; // x22
  int32_t v429; // w2
  const MethodInfo *v430; // x6
  float v431; // s0
  int32_t v432; // w5
  __int64 v433; // x22
  float v434; // s0
  int v435; // w8
  BattleLogicFunction_o *v436; // x0
  int32_t v437; // w22
  const MethodInfo *v438; // x6
  const MethodInfo *v439; // x4
  const MethodInfo *v440; // x4
  struct BattleData_o *v441; // x8
  UnityEngine_Object_o *perf; // x28
  struct BattleData_o *v443; // x8
  _BOOL8 v444; // x0
  const MethodInfo *v445; // x3
  int v446; // w27
  bool v447; // w21
  __int64 v448; // x1
  __int64 v449; // x2
  __int64 v450; // x3
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v451; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v453; // x5
  __int64 v454; // x2
  __int64 v455; // x3
  BattleLogicFunction_o *v456; // x21
  BattleCommandData_o *v457; // x22
  UnityEngine_Object_o *v458; // x23
  struct BattleLogic_o *v459; // x8
  unsigned __int64 v460; // x23
  __int64 v461; // x1
  UnityEngine_Object_o *v462; // x21
  int v463; // w8
  BattleLogicFunction_o *v464; // x21
  unsigned int v465; // w22
  __int64 v466; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v468; // x21
  struct BattleData_o *v469; // x8
  UnityEngine_Object_o *v470; // x21
  __int64 v471; // x1
  BattleData_o *v472; // x0
  BattleServantData_o *v473; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-190h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-190h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-188h]
  char isRandomDamagea; // [xsp+8h] [xbp-188h]
  BattleActionData_o *mainAction; // [xsp+10h] [xbp-180h]
  const MethodInfo *v480; // [xsp+18h] [xbp-178h]
  bool isParam; // [xsp+34h] [xbp-15Ch]
  bool v482; // [xsp+38h] [xbp-158h]
  int32_t subTargetId; // [xsp+3Ch] [xbp-154h]
  int32_t *p_actorId; // [xsp+40h] [xbp-150h]
  char v485; // [xsp+4Ch] [xbp-144h]
  char v486; // [xsp+50h] [xbp-140h]
  bool v487; // [xsp+54h] [xbp-13Ch]
  SkillValueUpApplierPlayerMaster_o *v488; // [xsp+58h] [xbp-138h]
  System_Collections_Generic_List_int__o *v489; // [xsp+60h] [xbp-130h]
  char v490; // [xsp+6Ch] [xbp-124h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v492; // [xsp+78h] [xbp-118h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+88h] [xbp-108h]
  int v495; // [xsp+94h] [xbp-FCh]
  Il2CppObject *MasterData_object; // [xsp+98h] [xbp-F8h]
  int32_t index; // [xsp+A4h] [xbp-ECh]
  int32_t *p_funcType; // [xsp+A8h] [xbp-E8h]
  FunctionEntity_o *funcEntity; // [xsp+B8h] [xbp-D8h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+C0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v501; // [xsp+C8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v502; // [xsp+E0h] [xbp-B0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+100h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+10Ch] [xbp-84h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+110h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-78h] BYREF
  int32_t funcIndex; // [xsp+124h] [xbp-6Ch] BYREF
  int32_t PTTargetId; // [xsp+128h] [xbp-68h] BYREF
  int32_t targetId; // [xsp+12Ch] [xbp-64h] BYREF

  v19 = action;
  v20 = this;
  if ( (byte_4B18D78 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo, action, functionlist);
    sub_1BCA7E0(&Generator_BGFromQuickChangeBGFunc_TypeInfo, v21, v22);
    sub_1BCA7E0(&Generator_BGMFromChangeBGMFunc_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___, v25, v26);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v27, v28);
    sub_1BCA7E0(&BattleServantSnapShotOnBuffUpdate_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v31, v32);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v33, v34);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v35, v36);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v37, v38);
    sub_1BCA7E0(&BattleActionData_DownShiftGaugeData_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___, v41, v42);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___, v43, v44);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v45, v46);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v53, v54);
    sub_1BCA7E0(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo, v55, v56);
    sub_1BCA7E0(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo, v57, v58);
    sub_1BCA7E0(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v67, v68);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v69, v70);
    sub_1BCA7E0(&BattleActionData_MasterBuffData_TypeInfo, v71, v72);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v73, v74);
    sub_1BCA7E0(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo, v75, v76);
    sub_1BCA7E0(&BattleLogicFunction_ProcListInArgs_TypeInfo, v77, v78);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v79, v80);
    sub_1BCA7E0(&SkillValueUpApplierPlayerMaster_TypeInfo, v81, v82);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__procList_b__41_0__, v83, v84);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__procList_b__41_1__, v85, v86);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__procList_b__41_2__, v87, v88);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__procList_b__41_3__, v89, v90);
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v91, v92);
    sub_1BCA7E0(&BattleActionData_UpShiftGaugeData_TypeInfo, v93, v94);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v95, v96);
    sub_1BCA7E0(&Method_WeightRate_int__getCount__, v97, v98);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v99, v100);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v101, v102);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v103, v104);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v105, v106);
    sub_1BCA7E0(&StringLiteral_1852/*"====< end BattleLogicFunction::procList >====="*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_254/*" enemytargetId: "*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_1853/*"====< start BattleLogicFunction::procList >====="*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_317/*" pttargetId: "*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_1855/*"========="*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_1866/*">actSetId: "*/, v117, v118);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&StringLiteral_222/*" actorId: "*/, v119, v120);
    byte_4B18D78 = 1;
  }
  PTTargetId = 0;
  funcIndex = 0;
  subBuffInfo = 0LL;
  entity = 0LL;
  absorptionCount = 0;
  buffsToRemove = 0LL;
  memset(&v502, 0, sizeof(v502));
  if ( !v19 )
    goto LABEL_458;
  p_actorId = &v19->fields.actorId;
  v121 = System_Int32__ToString((int)v19 + 32, 0LL);
  System_String__Concat_62401220((System_String_o *)StringLiteral_222/*" actorId: "*/, v121, 0LL);
  this = (BattleLogicFunction_o *)v20->fields.data;
  if ( !this )
    goto LABEL_458;
  ServantData = BattleData__getServantData((BattleData_o *)this, v19->fields.actorId, 0LL);
  targetId = v19->fields.targetId;
  v122 = System_Int32__ToString((int32_t)&targetId, 0LL);
  System_String__Concat_62401220((System_String_o *)StringLiteral_254/*" enemytargetId: "*/, v122, 0LL);
  PTTargetId = BattleActionData__getPTTargetId(v19, 0LL);
  PTSubTargetId = BattleActionData__getPTSubTargetId(v19, 0LL);
  v124 = System_Int32__ToString((int32_t)&PTTargetId, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_317/*" pttargetId: "*/, v124, 0LL);
  data = v20->fields.data;
  if ( !data )
    goto LABEL_458;
  data->fields.beforeAction = v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&data->fields.beforeAction,
    (int64_t)v19,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  v489 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v132,
                                                     v133,
                                                     v134);
  System_Collections_Generic_List_int____ctor(
    v489,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_458;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_458;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v138 = (BattleLogicFunction_ProcListInArgs_o *)sub_1BCAA2C(
                                                   BattleLogicFunction_ProcListInArgs_TypeInfo,
                                                   action,
                                                   v135,
                                                   v136);
  BattleLogicFunction_ProcListInArgs___ctor(v138, argument, v19, 0LL);
  if ( !v138 )
    goto LABEL_458;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v138, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v138, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v138, passive, 0LL);
  v138->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v138, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v138, skillId, 0LL);
  subTargetId = PTSubTargetId;
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v138, v20, functionlist, baseValslist, &funcIndex, 0LL);
  args = v138;
  v138->fields.actSetId = 0;
  p_actSetId = &v138->fields.actSetId;
  v143 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, v140, v141, v142);
  WeightRate_int____ctor(v143, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_458;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v145 = 0;
    while ( v145 < max_length )
    {
      v146 = &baseValslist->obj.klass + (int)v145;
      v147 = (DataVals_o *)v146[4];
      if ( !v147 )
        goto LABEL_458;
      DataVals__loadActSet((DataVals_o *)v146[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v147, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v147, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v147, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v147, 0LL);
          if ( !v143 )
            goto LABEL_458;
          WeightRate_int___setWeight(
            v143,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v145 >= max_length )
        goto LABEL_26;
    }
LABEL_459:
    sub_1BCAA44(this, action);
  }
LABEL_26:
  if ( !v143 )
    goto LABEL_458;
  if ( WeightRate_int___getCount(v143, (const MethodInfo_39842E4 *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v143->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v143, Random, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
    v150 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_62401220((System_String_o *)StringLiteral_1866/*">actSetId: "*/, v150, 0LL);
  }
  v19->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(v19, funcIndex, 0LL);
  v154 = BattleLogicFunction___c_TypeInfo;
  funcUnitArray_k__BackingField = (System_Object_array *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v151);
    v154 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v154->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v154->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v154, v151);
      v154 = BattleLogicFunction___c_TypeInfo;
    }
    v157 = (Il2CppObject *)v154->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                v151,
                                                v152,
                                                v153);
    System_Func_object__bool____ctor(_9__41_0, v157, Method_BattleLogicFunction___c__procList_b__41_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
      (int64_t)_9__41_0,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164);
  }
  if ( !BasicHelper__Any_object__49274176(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__41_0,
          (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    v19->fields.isSuccessTargetSelection = 1;
  v168 = BattleLogicFunction___c_TypeInfo;
  v169 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v165);
    v168 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__bool__o *)v168->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v168->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v168, v165);
      v168 = BattleLogicFunction___c_TypeInfo;
    }
    v171 = (Il2CppObject *)v168->static_fields->__9;
    _9__41_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo,
                                                v165,
                                                v166,
                                                v167);
    System_Func_object__bool____ctor(_9__41_1, v171, Method_BattleLogicFunction___c__procList_b__41_1__, 0LL);
    v172 = BattleLogicFunction___c_TypeInfo->static_fields;
    v172->__9__41_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v172->__9__41_1, (int64_t)_9__41_1, v173, v174, v175, v176, v177, v178);
  }
  v19->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                          v169,
                                          (System_Func_TSource__bool__o *)_9__41_1,
                                          (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v490 = 1;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v179 = (int)this;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v180 = isCommandSideEffect;
    v181 = ServantData;
    if ( !this )
      goto LABEL_458;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_458;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           skillId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      this = (BattleLogicFunction_o *)entity;
      if ( !entity )
        goto LABEL_458;
      this = (BattleLogicFunction_o *)SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0LL);
    }
    else
    {
      this = 0LL;
    }
    v184 = 0LL;
    v490 = 1;
    if ( ((unsigned __int8)this & 1) == 0 && ((v179 ^ 1) & 1) == 0 )
    {
      v185 = v20->fields.data;
      v184 = (SkillValueUpApplierPlayerMaster_o *)sub_1BCAA2C(
                                                    SkillValueUpApplierPlayerMaster_TypeInfo,
                                                    action,
                                                    v182,
                                                    v183);
      SkillValueUpApplierPlayerMaster___ctor(v184, v185, 0LL);
      if ( v184 )
      {
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v184->klass->vtable._4_Init.method)(
                                          v184,
                                          v184->klass->vtable._5_ApplyTo.methodPtr);
        v490 = 0;
      }
      else
      {
        v490 = 1;
      }
    }
  }
  else
  {
    v180 = isCommandSideEffect;
    v181 = ServantData;
    v184 = 0LL;
  }
  v186 = args->fields._funcUnitArray_k__BackingField;
  if ( !v186 )
    goto LABEL_458;
  v492 = args->fields._funcUnitArray_k__BackingField;
  v187 = v186->max_length;
  if ( v187 >= 1 )
  {
    v488 = v184;
    v188 = args->fields._funcUnitArray_k__BackingField;
    v189 = 0LL;
    v190 = 0;
    v485 = 0;
    v486 = 0;
    v487 = v181 == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v190 >= (unsigned int)v187 )
        goto LABEL_459;
      v191 = v188->m_Items[v190];
      v495 = v190;
      if ( !v191 )
        goto LABEL_458;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v191, 0LL);
      dataVals_k__BackingField = v191->fields._dataVals_k__BackingField;
      index = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_458;
      funcEntity = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v191;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v191, v19, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_400;
      if ( (v490 & 1) == 0 )
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppMethodPointer))v488->klass->vtable._5_ApplyTo.method)(
                                          v488,
                                          v191,
                                          v488->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr);
      if ( isCreateSideEffect )
      {
        if ( !funcEntity )
          goto LABEL_458;
        this = (BattleLogicFunction_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          this,
                                          funcEntity->fields.funcType,
                                          dataVals_k__BackingField,
                                          v193);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v197 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v191->fields._funcTargetArray_k__BackingField;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, action);
            v197 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_2 = (System_Func_object__bool__o *)v197->static_fields->__9__41_2;
          if ( !_9__41_2 )
          {
            if ( !v197->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v197, action);
              v197 = BattleLogicFunction___c_TypeInfo;
            }
            v200 = (Il2CppObject *)v197->static_fields->__9;
            _9__41_2 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                        System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo,
                                                        action,
                                                        v195,
                                                        v196);
            System_Func_object__bool____ctor(_9__41_2, v200, Method_BattleLogicFunction___c__procList_b__41_2__, 0LL);
            v201 = BattleLogicFunction___c_TypeInfo->static_fields;
            v201->__9__41_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__41_2;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v201->__9__41_2,
              (int64_t)_9__41_2,
              v202,
              v203,
              v204,
              v205,
              v206,
              v207);
          }
          v211 = System_Linq_Enumerable__Where_object_(
                   funcTargetArray_k__BackingField,
                   (System_Func_TSource__bool__o *)_9__41_2,
                   (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v212 = BattleLogicFunction___c_TypeInfo;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v208);
            v212 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_3 = (System_Func_object__int__o *)v212->static_fields->__9__41_3;
          if ( !_9__41_3 )
          {
            if ( !v212->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v212, v208);
              v212 = BattleLogicFunction___c_TypeInfo;
            }
            v214 = (Il2CppObject *)v212->static_fields->__9;
            _9__41_3 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                       System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo,
                                                       v208,
                                                       v209,
                                                       v210);
            System_Func_object__int____ctor(_9__41_3, v214, Method_BattleLogicFunction___c__procList_b__41_3__, 0LL);
            v215 = BattleLogicFunction___c_TypeInfo->static_fields;
            v215->__9__41_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__41_3;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v215->__9__41_3,
              (int64_t)_9__41_3,
              v216,
              v217,
              v218,
              v219,
              v220,
              v221);
          }
          v222 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                        v211,
                                                                        (System_Func_TSource__TResult__o *)_9__41_3,
                                                                        (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v223 = System_Linq_Enumerable__ToArray_int_(
                   v222,
                   (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
          v224 = FuncList__Check(26, funcEntity->fields.funcType, 0LL);
          v228 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1BCAA2C(
                                                                            BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo,
                                                                            v225,
                                                                            v226,
                                                                            v227);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v228, 0LL);
          if ( !v228 )
            goto LABEL_458;
          v229 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v228->klass->vtable._6_Init.method)(
                                                                   v228,
                                                                   v223,
                                                                   v228->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(v20, v19, v181, v224 || isTreasureDvc, v229, v230);
          v180 = isCommandSideEffect;
        }
      }
      v231 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v231 )
        goto LABEL_458;
      v232 = v231->max_length;
      p_funcType = &funcEntity->fields.funcType;
      if ( v232 >= 1 )
      {
        for ( i = 0; i < v232; ++i )
        {
          if ( i >= (unsigned int)v232 )
            goto LABEL_459;
          v234 = v231->m_Items[i];
          if ( !v234 )
            goto LABEL_458;
          BattleLogicFunction__SetTargetFuncList(
            v20,
            v234->fields._targetId_k__BackingField,
            v19,
            dataVals_k__BackingField,
            v194);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v189 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v189 )
              goto LABEL_458;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v189, v234, 0LL);
          }
          if ( !v234->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v234, 0LL);
            goto LABEL_98;
          }
          this = (BattleLogicFunction_o *)v20->fields.data;
          if ( !this )
            goto LABEL_458;
          targetId_k__BackingField = v234->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_458;
          v236 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v20,
                               (int32_t)v236->fields.logic,
                               index,
                               dataVals_k__BackingField,
                               v180,
                               0LL,
                               0LL,
                               v237);
LABEL_98:
            BattleActionData__addAction(v19, NoEffectObject, 0LL);
            goto LABEL_153;
          }
          v19->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEntity )
            goto LABEL_458;
          v239 = &funcEntity->fields.funcType;
          this = (BattleLogicFunction_o *)FuncList__Check(1, *p_funcType, 0LL);
          if ( ((unsigned __int8)this & 1) != 0
            || (this = (BattleLogicFunction_o *)FuncList__Check(16, *p_funcType, 0LL), ((unsigned __int8)this & 1) != 0) )
          {
            vals = funcEntity->fields.vals;
            if ( !vals )
              goto LABEL_458;
            if ( !vals->max_length )
              goto LABEL_459;
            this = (BattleLogicFunction_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_458;
            this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              vals->m_Items[1],
                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_458;
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
            v239 = &funcEntity->fields.funcType;
            v243 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(v20, v19, v234, args, v243, v244);
            goto LABEL_134;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v242 = BattleLogicFunction__functionSubState(
                     v20,
                     targetId_k__BackingField,
                     funcEntity,
                     dataVals_k__BackingField,
                     index,
                     v180,
                     &subBuffInfo,
                     args,
                     overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            actorId = v19->fields.actorId;
            v247 = (int32_t)v236->fields.logic;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v20,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v245);
            v249 = v247;
            v180 = isCommandSideEffect;
            v242 = BattleLogicFunction__functionDamage(
                     v20,
                     actorId,
                     v249,
                     dataVals_k__BackingField,
                     index,
                     v19,
                     isSafeDamage,
                     v250);
            goto LABEL_133;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 1;
            goto LABEL_132;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 2;
            goto LABEL_132;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 3;
            goto LABEL_132;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 4;
            goto LABEL_132;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 7;
            goto LABEL_132;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 5;
            goto LABEL_132;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 6;
            goto LABEL_132;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            v252 = v19->fields.actorId;
            v253 = (int32_t)v236->fields.logic;
            v254 = 8;
LABEL_132:
            v242 = BattleLogicFunction__functionNPDamage(
                     v20,
                     v252,
                     v253,
                     dataVals_k__BackingField,
                     index,
                     v254,
                     v19,
                     v251);
LABEL_133:
            BattleActionData__addAction(v19, v242, 0LL);
            goto LABEL_134;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v263 = v20->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v263 )
              goto LABEL_458;
            BattleData__addCriticalPoint(v263, Value, (unsigned __int8)this & 1, 0LL);
LABEL_161:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v265,
                                              funcEntity,
                                              (int32_t)v236->fields.logic,
                                              index,
                                              v180,
                                              0LL,
                                              v266);
            if ( !this )
              goto LABEL_458;
            HIDWORD(this->fields.logic) = 4;
            BattleActionData__setBuffData(v19, (BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)v20->fields.data;
            if ( !this )
              goto LABEL_458;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
            goto LABEL_164;
          }
          if ( FuncList__Check(31, *p_funcType, 0LL) )
          {
            v267 = v20->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v267 )
              goto LABEL_458;
            BattleData__lossCriticalPoint(v267, (int32_t)this, 0LL);
            goto LABEL_161;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v242 = BattleLogicFunction__functionGainHp(
                     v20,
                     v19->fields.actorId,
                     targetId_k__BackingField,
                     funcEntity,
                     dataVals_k__BackingField,
                     index,
                     v180,
                     -1,
                     overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v242 = BattleLogicFunction__functionGainHpPer(
                     v20,
                     v19->fields.actorId,
                     targetId_k__BackingField,
                     funcEntity,
                     dataVals_k__BackingField,
                     index,
                     v180,
                     v268);
            goto LABEL_133;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v236, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v236,
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
                v281 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v283 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageShorten(
                                                  (BattleServantData_o *)v236,
                                                  v283,
                                                  0,
                                                  v281,
                                                  TargetList,
                                                  0LL);
                goto LABEL_188;
              }
              if ( FuncList__Check(10, *p_funcType, 0LL) )
              {
                v285 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                v286 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v287 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageExtend(
                                                  (BattleServantData_o *)v236,
                                                  v287,
                                                  999,
                                                  v285,
                                                  v286,
                                                  0LL);
LABEL_188:
                v288 = (int32_t)v236->fields.logic;
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  v180 = isCommandSideEffect;
                  v291 = v20;
                  v292 = (int32_t)v236->fields.logic;
                  goto LABEL_282;
                }
                goto LABEL_189;
              }
              if ( FuncList__Check(12, *p_funcType, 0LL) )
              {
                v294 = v19->fields.actorId;
                v295 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v293);
                isRandomDamagea = 1;
                v296 = isCommandSideEffect;
                mainAction = v19;
                v297 = v295;
                v298 = isCommandSideEffect;
                overwriteLossHpa = -1;
                goto LABEL_194;
              }
              if ( FuncList__Check(25, *p_funcType, 0LL) )
              {
                v180 = isCommandSideEffect;
                v300 = v19->fields.actorId;
                isRandomDamagea = 1;
                mainAction = v19;
                v298 = isCommandSideEffect;
                v297 = 1;
                overwriteLossHpa = -1;
                v299 = v20;
                goto LABEL_197;
              }
              if ( FuncList__Check(13, *p_funcType, 0LL) )
              {
                v180 = isCommandSideEffect;
                v301 = BattleLogicFunction__functionInstantDeath(
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
                v180 = isCommandSideEffect;
                v301 = BattleLogicFunction__functionHastenNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         -1,
                         v302);
                goto LABEL_284;
              }
              if ( FuncList__Check(20, *p_funcType, 0LL) )
              {
                v180 = isCommandSideEffect;
                v301 = BattleLogicFunction__functionDelayNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         &absorptionCount,
                         v303);
                goto LABEL_284;
              }
              if ( FuncList__Check(56, *p_funcType, 0LL) )
              {
                v180 = isCommandSideEffect;
                v301 = BattleLogicFunction__functionAbsorbNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         v19,
                         v234,
                         isCommandSideEffect,
                         v304);
                goto LABEL_284;
              }
              if ( FuncList__Check(23, *p_funcType, 0LL) )
              {
                v310 = BattleLogicFunction__functionResetCommandCard(v20, v305, v306, v307, v308, v309);
                goto LABEL_208;
              }
              if ( FuncList__Check(24, *p_funcType, 0LL) )
              {
                applyTarget = funcEntity->fields.applyTarget;
                if ( applyTarget != 2 )
                {
                  if ( applyTarget == 1 )
                  {
                    v310 = BattleLogicFunction__functionReplaceMember(
                             v20,
                             targetId_k__BackingField,
                             subTargetId,
                             v312,
                             v313,
                             index,
                             v314);
LABEL_208:
                    BattleActionData__addAction(v19, v310, 0LL);
                    this = (BattleLogicFunction_o *)v20->fields.data;
                    if ( !this )
                      goto LABEL_458;
                    BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                  }
LABEL_183:
                  v180 = isCommandSideEffect;
                  goto LABEL_164;
                }
                v318 = BattleLogicFunction__functionReplaceEnemyMember(
                         v20,
                         v311,
                         dataVals_k__BackingField,
                         index,
                         (const MethodInfo *)v313);
LABEL_219:
                BattleActionData__addAction(v19, v318, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v318 = BattleLogicFunction__functionTransformServant(
                         v20,
                         targetId_k__BackingField,
                         v316,
                         dataVals_k__BackingField,
                         index,
                         args,
                         v317);
                goto LABEL_219;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v320 = BattleLogicFunction__functionReflection(
                         v20,
                         v19->fields.actorId,
                         (int32_t)v236->fields.logic,
                         dataVals_k__BackingField,
                         index,
                         v319);
                BattleActionData__addAction(v19, v320, 0LL);
                v486 = 1;
                goto LABEL_183;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v180 = isCommandSideEffect;
                v301 = BattleLogicFunction__functionCallServant(
                         v20,
                         v19->fields.actorId,
                         v321,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         v322);
                goto LABEL_284;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v328 = BattleLogicFunction__functionPtShuffle(v20, v323, v324, v325, v326, v327);
                BattleActionData__addAction(v19, v328, 0LL);
                this = (BattleLogicFunction_o *)v20->fields.data;
                if ( !this )
                  goto LABEL_458;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_225;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v318 = BattleLogicFunction__functionChangeServant(
                         v20,
                         v19->fields.actorId,
                         targetId_k__BackingField,
                         v329,
                         dataVals_k__BackingField,
                         v330,
                         v331);
                goto LABEL_219;
              }
              v332 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v332 )
              {
                v318 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v332,
                         v19->fields.actorId,
                         v333,
                         dataVals_k__BackingField,
                         v334,
                         v335);
                goto LABEL_219;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v337 = v19->fields.actorId;
                v338 = (int32_t)v236->fields.logic;
                v339 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v336);
                goto LABEL_232;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v342 = v19->fields.actorId;
                v343 = (int32_t)v236->fields.logic;
                v339 = 1;
                v341 = v20;
                goto LABEL_235;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v236[9].fields.master) = 1;
                goto LABEL_183;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v350 = v20->fields.data;
                if ( !v350 )
                  goto LABEL_458;
                draw_commandlist = (int64_t)v350->fields.draw_commandlist;
                v350->fields.fixedCommands = (struct BattleCommandData_array *)draw_commandlist;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v350->fields.fixedCommands,
                  draw_commandlist,
                  v344,
                  v345,
                  v346,
                  v347,
                  v348,
                  v349);
                goto LABEL_241;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v352 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v352 = -v352;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v352 *= 2;
                  v482 = 1;
                }
                else
                {
                  v482 = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v356 = DataVals__isParam(dataVals_k__BackingField, 149, 0LL);
                v357 = 0LL;
                if ( v356 )
                {
                  v357 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1BCAA2C(
                                                                  BattleServantSnapShotOnBuffUpdate_TypeInfo,
                                                                  v353,
                                                                  v354,
                                                                  v355);
                  BattleServantSnapShotOnBuffUpdate___ctor(v357, (BattleServantData_o *)v236, 0LL);
                }
                v358 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__ChangeBuffValue(
                                                  (BattleServantData_o *)v236,
                                                  v352,
                                                  v358,
                                                  v482,
                                                  1,
                                                  v356,
                                                  &buffsToRemove,
                                                  isParam,
                                                  0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_280;
                if ( v356 )
                {
                  action = (BattleActionData_o *)buffsToRemove;
                  if ( !buffsToRemove )
                    goto LABEL_458;
                  if ( buffsToRemove->fields._count >= 1 )
                  {
                    this = (BattleLogicFunction_o *)v236[9].klass;
                    if ( !this )
                      goto LABEL_458;
                    this = (BattleLogicFunction_o *)BattleBuffData__SubBuffSpecified(
                                                      (BattleBuffData_o *)this,
                                                      buffsToRemove,
                                                      1,
                                                      0LL);
                    if ( !this )
                      goto LABEL_458;
                    v180 = isCommandSideEffect;
                    BattleLogicFunction__ApplySubBuffChanges(
                      v20,
                      v19,
                      (System_Collections_Generic_List_BattleBuffData_BuffData__o *)this->fields.data,
                      targetId_k__BackingField,
                      v357,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      args,
                      isRandomDamage);
                    goto LABEL_164;
                  }
                }
LABEL_241:
                v288 = (int32_t)v236->fields.logic;
LABEL_189:
                v180 = isCommandSideEffect;
                v289 = funcEntity;
LABEL_190:
                FunctionObject = BattleLogicFunction__getFunctionObject(this, v289, v288, index, v180, 0LL, v284);
                BattleActionData__setBuffData(v19, FunctionObject, dataVals_k__BackingField, 0LL);
                goto LABEL_164;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                v359 = v20->fields.data;
                v360 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v364 = (Generator_BGMFromChangeBGMFunc_o *)sub_1BCAA2C(
                                                             Generator_BGMFromChangeBGMFunc_TypeInfo,
                                                             v361,
                                                             v362,
                                                             v363);
                Generator_BGMFromChangeBGMFunc___ctor(v364, v359, v360, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(v20, args, (Generator_BGM_o *)v364, 0LL, v365);
                goto LABEL_183;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(42, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_241;
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v180 = isCommandSideEffect;
                v301 = BattleLogicFunction__functionResurrection(
                         v20,
                         (int32_t)v236->fields.logic,
                         index,
                         funcEntity,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v366);
                goto LABEL_284;
              }
              if ( FuncList__Check(44, *p_funcType, 0LL)
                || FuncList__Check(133, *p_funcType, 0LL)
                || FuncList__Check(146, *p_funcType, 0LL) )
              {
                v367 = funcEntity->fields.vals;
                if ( FuncList__Check(44, funcEntity->fields.funcType, 0LL) )
                {
                  SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                            (BattleServantData_o *)v236,
                                            v367,
                                            1,
                                            0,
                                            0,
                                            0LL);
                  goto LABEL_276;
                }
                if ( FuncList__Check(133, *p_funcType, 0LL) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                            v20->fields.data,
                                            *p_actorId,
                                            (int32_t)v236->fields.logic,
                                            dataVals_k__BackingField,
                                            funcEntity,
                                            0LL);
                  goto LABEL_276;
                }
                if ( FuncList__Check(146, *p_funcType, 0LL) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetIndividualityIncludeTargetSum(
                                            v20->fields.data,
                                            *p_actorId,
                                            (int32_t)v236->fields.logic,
                                            dataVals_k__BackingField,
                                            funcEntity,
                                            0LL);
LABEL_276:
                  v369 = SameIndiualityBuffSum;
                }
                else
                {
                  v369 = 0;
                }
                CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v369;
                if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                               (BattleServantData_o *)v236,
                                               CorrectedValueFuncGainNp,
                                               0LL);
                if ( CorrectedValueFuncGainNp < 1 )
                {
LABEL_280:
                  v292 = (int32_t)v236->fields.logic;
                  goto LABEL_281;
                }
LABEL_173:
                if ( !BattleServantData__isGainNp((BattleServantData_o *)v236, 1, dataVals_k__BackingField, 0LL) )
                  goto LABEL_280;
                v272 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                  (BattleServantData_o *)v236,
                                                  CorrectedValueFuncGainNp,
                                                  0,
                                                  0LL);
                v273 = (int)v272;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v272,
                                                  funcEntity,
                                                  (int32_t)v236->fields.logic,
                                                  index,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v274);
                if ( !this )
                  goto LABEL_458;
                v275 = (BattleActionData_BuffData_o *)this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v273, 0LL);
                if ( isCommandSideEffect )
                  v275->fields.isCommandAfter = 1;
LABEL_182:
                BattleActionData__setBuffData(v19, v275, dataVals_k__BackingField, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(45, *p_funcType, 0LL) )
              {
                BYTE4(v236[9].fields.master) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                goto LABEL_183;
              }
              if ( FuncList__Check(46, *p_funcType, 0LL) )
              {
                v180 = isCommandSideEffect;
                v301 = BattleLogicFunction__functionInstantDeath(
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
                v375 = v19->fields.actorId;
                v376 = (int32_t)v236->fields.logic;
                v377 = 9;
                goto LABEL_292;
              }
              if ( FuncList__Check(48, *p_funcType, 0LL) )
              {
                v318 = BattleLogicFunction__functionGainNpFromTargets(v20, args, v19, v234, v378);
                goto LABEL_219;
              }
              if ( FuncList__Check(49, *p_funcType, 0LL) )
              {
                v318 = BattleLogicFunction__functionGainHpFromTargets(v20, args, v19, v234, v379);
                goto LABEL_219;
              }
              v380 = FuncList__Check(50, *p_funcType, 0LL);
              if ( v380 || (v380 = FuncList__Check(51, *p_funcType, 0LL)) )
              {
                v382 = *p_funcType == 51;
                if ( *p_funcType == 50 )
                {
                  v380 = BattleLogicFunction__isSafeDamage(
                           v20,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v381);
                  v382 = v380;
                }
                v294 = v19->fields.actorId;
                HpPerValue = BattleLogicFunction__getHpPerValue(
                               (BattleLogicFunction_o *)v380,
                               dataVals_k__BackingField,
                               (BattleServantData_o *)v236,
                               v381);
                v296 = isCommandSideEffect;
                v297 = v382;
                mainAction = v19;
                isRandomDamagea = 0;
                v298 = isCommandSideEffect;
                overwriteLossHpa = HpPerValue;
LABEL_194:
                v299 = v20;
                v300 = v294;
                v180 = v296;
LABEL_197:
                v301 = BattleLogicFunction__functionlossHp(
                         v299,
                         v300,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         v297,
                         v298,
                         overwriteLossHpa,
                         isRandomDamagea,
                         mainAction,
                         v480);
                goto LABEL_284;
              }
              if ( FuncList__Check(52, *p_funcType, 0LL) )
              {
                v385 = 1;
                v386 = v20;
                v387 = dataVals_k__BackingField;
LABEL_306:
                updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v386, v387, v385, v384);
                if ( updated )
                {
                  v180 = isCommandSideEffect;
                  BattleLogicFunction__CreateMasterBuffEffect(
                    (BattleLogicFunction_o *)updated,
                    v19,
                    funcEntity,
                    index,
                    isCommandSideEffect,
                    dataVals_k__BackingField,
                    v392);
                  goto LABEL_164;
                }
                v393 = (BattleActionData_MasterBuffData_o *)sub_1BCAA2C(
                                                              BattleActionData_MasterBuffData_TypeInfo,
                                                              v389,
                                                              v390,
                                                              v391);
                BattleActionData_MasterBuffData___ctor(v393, funcEntity, 0LL);
                if ( !v393 )
                  goto LABEL_458;
                v393->fields.popColor = 1;
                v180 = isCommandSideEffect;
                v292 = v234->fields._targetId_k__BackingField;
                v371 = index;
                v291 = v20;
                v370 = isCommandSideEffect;
                v372 = dataVals_k__BackingField;
                v373 = (BattleActionData_BuffData_o *)v393;
                goto LABEL_283;
              }
              if ( FuncList__Check(62, *p_funcType, 0LL) )
              {
                v386 = v20;
                v387 = dataVals_k__BackingField;
                v385 = 0;
                goto LABEL_306;
              }
              if ( FuncList__Check(53, *p_funcType, 0LL) )
              {
                v397 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1BCAA2C(
                                                                Generator_BGFromQuickChangeBGFunc_TypeInfo,
                                                                v394,
                                                                v395,
                                                                v396);
                Generator_BGFromQuickChangeBGFunc___ctor(v397, dataVals_k__BackingField, 0LL);
                BattleLogicFunction__FunctionQuickChangeBG(v20, args, (Generator_Background_o *)v397, v398);
                goto LABEL_183;
              }
              if ( FuncList__Check(54, *p_funcType, 0LL) )
              {
                this = (BattleLogicFunction_o *)v236[3].klass;
                if ( !this )
                  goto LABEL_458;
                if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                {
                  v292 = v234->fields._targetId_k__BackingField;
LABEL_281:
                  v180 = isCommandSideEffect;
                  v291 = v20;
LABEL_282:
                  v370 = v180;
                  v371 = index;
                  v372 = dataVals_k__BackingField;
                  v373 = 0LL;
LABEL_283:
                  v301 = BattleLogicFunction__getNoEffectObject(v291, v292, v371, v372, v370, 0LL, v373, v271);
LABEL_284:
                  BattleActionData__addAction(v19, v301, 0LL);
                  goto LABEL_164;
                }
                Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                BattleLogicFunction__functionShiftServant(v20, v19, (BattleServantData_o *)v236, Param, v400);
                goto LABEL_183;
              }
              if ( FuncList__Check(55, *p_funcType, 0LL) )
              {
                v375 = v19->fields.actorId;
                v376 = (int32_t)v236->fields.logic;
                v377 = 10;
                goto LABEL_292;
              }
              if ( FuncList__Check(57, *p_funcType, 0LL) )
              {
                LODWORD(v236[7].fields.logic) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(58, *p_funcType, 0LL) )
              {
                klass = (BattleBuffData_o *)v236[9].klass;
                this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                if ( !klass )
                  goto LABEL_458;
                BattleBuffData__UpdateForceAllBuffNoAct(klass, (int32_t)this, funcEntity->fields.vals, 0LL);
                v180 = isCommandSideEffect;
                v288 = (int32_t)v236->fields.logic;
                v289 = funcEntity;
                goto LABEL_190;
              }
              if ( FuncList__Check(59, *p_funcType, 0LL) )
              {
                v405 = (BattleActionData_UpShiftGaugeData_o *)sub_1BCAA2C(
                                                                BattleActionData_UpShiftGaugeData_TypeInfo,
                                                                v402,
                                                                v403,
                                                                v404);
                BattleActionData_UpShiftGaugeData___ctor(v405, 0LL);
              }
              else
              {
                if ( !FuncList__Check(60, *p_funcType, 0LL) )
                {
                  if ( FuncList__Check(61, *p_funcType, 0LL) )
                  {
                    SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                  v20,
                                  (BattleServantData_o *)v236,
                                  funcEntity,
                                  v410,
                                  index,
                                  v411);
                    BattleActionData__addAction(v19, SubMember, 0LL);
                    BattleActionData__UpdateForceBuffEffectAllTrue(v19, 0LL);
LABEL_225:
                    v485 = 1;
                    goto LABEL_183;
                  }
                  if ( FuncList__Check(119, *p_funcType, 0LL) )
                  {
                    BattleLogicFunction__functionMovePosition(v20, v19, (BattleServantData_o *)v236, v413);
                    goto LABEL_183;
                  }
                  if ( FuncList__Check(120, *p_funcType, 0LL) )
                  {
                    v180 = isCommandSideEffect;
                    BattleLogicFunction__functionRevival(
                      v20,
                      v19,
                      funcEntity,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      v414);
                    goto LABEL_164;
                  }
                  if ( FuncList__Check(121, *p_funcType, 0LL) )
                  {
                    v375 = v19->fields.actorId;
                    v376 = (int32_t)v236->fields.logic;
                    v377 = 11;
                  }
                  else
                  {
                    if ( !FuncList__Check(143, *p_funcType, 0LL) )
                    {
                      if ( FuncList__Check(124, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMoveState(v20, args, v19, v234, v415);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(125, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__ChangeBGMCostume(v20, dataVals_k__BackingField, v19, v416);
                        goto LABEL_183;
                      }
                      v417 = FuncList__Check(126, *p_funcType, 0LL);
                      if ( v417 )
                      {
                        BattleLogicFunction__LossCommandSpell(
                          (BattleLogicFunction_o *)v417,
                          dataVals_k__BackingField,
                          v19,
                          v418);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(127, *p_funcType, 0LL) )
                        goto LABEL_183;
                      if ( FuncList__Check(128, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryPositions(v20, dataVals_k__BackingField, v419);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(63, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v20, dataVals_k__BackingField, v420);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(130, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
                          v20,
                          args,
                          v19,
                          v234,
                          isTreasureDvc,
                          v421);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(131, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSubFieldBuff(v20, args, v19, v234, v422);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(134, *p_funcType, 0LL) )
                      {
                        this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        if ( !v20->fields.data )
                          goto LABEL_458;
                        BattleData__AddQuestRouteId(v20->fields.data, (int32_t)this, 0LL);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(135, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionLastSkillCopy(v20, v19, dataVals_k__BackingField, args, v423);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(136, *p_funcType, 0LL) )
                      {
                        v424 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        BattleLogicFunction__FunctionChangeEnemyMasterFace(v20, v424, v425);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(137, *p_funcType, 0LL) )
                      {
                        v337 = v19->fields.actorId;
                        v338 = (int32_t)v236->fields.logic;
                        v339 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v236->klass[1]._1.parent)(
                                 v236,
                                 v236->klass[1]._1.generic_class) > 1;
LABEL_232:
                        v341 = v20;
                        v342 = v337;
                        v343 = v338;
LABEL_235:
                        v318 = BattleLogicFunction__functionValueDamage(
                                 v341,
                                 v342,
                                 v343,
                                 dataVals_k__BackingField,
                                 index,
                                 v339,
                                 v19,
                                 v340);
                        goto LABEL_219;
                      }
                      if ( FuncList__Check(138, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionAddBattleValue(v20, funcEntity, v426);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(139, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSetBattleValue(v20, funcEntity, v427);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(140, *p_funcType, 0LL) )
                      {
                        monitor_high = SHIDWORD(v236[4].monitor);
                        v431 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * monitor_high) / 1000.0;
                        if ( v431 == INFINITY )
                          v432 = 0x80000000;
                        else
                          v432 = (int)v431;
                        v318 = BattleLogicFunction__functionGainNp(
                                 v20,
                                 args,
                                 v429,
                                 targetId_k__BackingField,
                                 dataVals_k__BackingField,
                                 v432,
                                 v430);
                        goto LABEL_219;
                      }
                      if ( !FuncList__Check(141, *p_funcType, 0LL) )
                      {
                        if ( FuncList__Check(142, *p_funcType, 0LL) )
                        {
                          v318 = BattleLogicFunction__FunctionAddBattlePoint(
                                   v20,
                                   args,
                                   targetId_k__BackingField,
                                   dataVals_k__BackingField,
                                   v439);
                          if ( !v318 )
                            goto LABEL_183;
                        }
                        else
                        {
                          if ( !FuncList__Check(144, *p_funcType, 0LL) )
                          {
                            this = (BattleLogicFunction_o *)FuncList__Check(145, *p_funcType, 0LL);
                            if ( ((unsigned __int8)this & 1) != 0 )
                            {
                              v441 = v20->fields.data;
                              if ( !v441 )
                                goto LABEL_458;
                              perf = (UnityEngine_Object_o *)v441->fields.perf;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
                              this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
                              if ( ((unsigned __int8)this & 1) != 0 )
                              {
                                v443 = v20->fields.data;
                                if ( !v443 )
                                  goto LABEL_458;
                                this = (BattleLogicFunction_o *)v443->fields.perf;
                                if ( !this )
                                  goto LABEL_458;
                                BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)this, 0LL);
                              }
                            }
                            else
                            {
                              v444 = FuncList__Check(147, *p_funcType, 0LL);
                              if ( v444 )
                                BattleLogicFunction__SetEnemyCountChangeActionData(
                                  (BattleLogicFunction_o *)v444,
                                  dataVals_k__BackingField,
                                  v19,
                                  v445);
                            }
                            goto LABEL_183;
                          }
                          v318 = BattleLogicFunction__FunctionSetNpExecutedState(
                                   v20,
                                   args,
                                   targetId_k__BackingField,
                                   dataVals_k__BackingField,
                                   v440);
                        }
                        goto LABEL_219;
                      }
                      v433 = SHIDWORD(v236[4].monitor);
                      v434 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * v433) / 1000.0;
                      v435 = (int)v434;
                      if ( v434 == INFINITY )
                        v435 = 0x80000000;
                      v436 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                        (BattleServantData_o *)v236,
                                                        -v435,
                                                        0,
                                                        0LL);
                      v437 = (int)v436;
                      this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                        v436,
                                                        funcEntity,
                                                        (int32_t)v236->fields.logic,
                                                        index,
                                                        isCommandSideEffect,
                                                        0LL,
                                                        v438);
                      if ( !this )
                        goto LABEL_458;
                      v275 = (BattleActionData_BuffData_o *)this;
                      HIDWORD(this->fields.logic) = 3;
                      v280 = v437;
LABEL_181:
                      BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v280, 0LL);
                      goto LABEL_182;
                    }
                    v375 = v19->fields.actorId;
                    v376 = (int32_t)v236->fields.logic;
                    v377 = 12;
                  }
LABEL_292:
                  v318 = BattleLogicFunction__functionNPDamage(
                           v20,
                           v375,
                           v376,
                           dataVals_k__BackingField,
                           index,
                           v377,
                           v19,
                           v374);
                  goto LABEL_219;
                }
                v405 = (BattleActionData_UpShiftGaugeData_o *)sub_1BCAA2C(
                                                                BattleActionData_DownShiftGaugeData_TypeInfo,
                                                                v407,
                                                                v408,
                                                                v409);
                BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v405, 0LL);
              }
              BattleLogicFunction__functionBreakGaugeChange(
                v20,
                v19,
                funcUnit,
                (BattleServantData_o *)v236,
                (BattleActionData_BaseShiftGaugeData_o *)v405,
                v406);
              goto LABEL_183;
            }
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v236, 0LL) )
            {
              v276 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v277 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v236, -v276, 0, 0LL);
              v278 = (int)v277;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v277,
                                                funcEntity,
                                                (int32_t)v236->fields.logic,
                                                index,
                                                v180,
                                                0LL,
                                                v279);
              if ( !this )
                goto LABEL_458;
              v275 = (BattleActionData_BuffData_o *)this;
              v280 = v278;
              HIDWORD(this->fields.logic) = 3;
              goto LABEL_181;
            }
          }
LABEL_164:
          v239 = &funcEntity->fields.funcType;
LABEL_134:
          isDamage = FuncList__isDamage(*v239, 0LL);
          if ( isDamage )
            v256 = 0;
          else
            v256 = -108;
          if ( isDamage )
            v257 = 0;
          else
            v257 = 148;
          if ( v256 != -108 )
          {
            if ( v257 )
              return v19;
            if ( !LOBYTE(v236[9].fields.dicFuncProcess) )
            {
              this = (BattleLogicFunction_o *)v236[9].klass;
              if ( !this )
                goto LABEL_458;
              if ( !LOBYTE(this[1].fields.buffProgressTurnOpponentList) )
              {
                LOBYTE(v236[9].fields.dicFuncProcess) = 1;
                if ( !v489 )
                  goto LABEL_458;
                action = (BattleActionData_o *)LODWORD(v236->fields.logic);
                items = v489->fields._items;
                v259 = Method_System_Collections_Generic_List_int__Add__;
                ++v489->fields._version;
                if ( !items )
                  goto LABEL_458;
                size = v489->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v489,
                    (int32_t)action,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
                  this = (BattleLogicFunction_o *)v236[9].klass;
                  if ( !this )
                    goto LABEL_458;
                }
                else
                {
                  v489->fields._size = size + 1;
                  items->m_Items[size + 1] = (int)action;
                }
                v261 = BattleBuffData__UseProgressingDoNotAct(
                         (BattleBuffData_o *)this,
                         (BattleServantData_o *)v236,
                         0,
                         0LL);
                BattleActionData__addSideEffectActionData(v19, v261, 1, 0LL);
                this = (BattleLogicFunction_o *)v236[9].klass;
                if ( !this )
                  goto LABEL_458;
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
            v262);
LABEL_153:
          v232 = v231->max_length;
        }
      }
      v181 = ServantData;
      if ( !isCreateSideEffect )
        break;
      v188 = v492;
      v446 = v495;
      if ( !funcEntity )
        goto LABEL_458;
      v447 = FuncList__Check(26, *p_funcType, 0LL);
      v451 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1BCAA2C(
                                                                          BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo,
                                                                          v448,
                                                                          v449,
                                                                          v450);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v451, 0LL);
      if ( !v451 )
        goto LABEL_458;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v451, v19, 0LL);
      BattleLogicFunction__setAttackSideEffect(v20, v19, ServantData, v447 || isTreasureDvc, Argument__Init, v453);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(v19, 0LL);
      if ( !this )
        goto LABEL_458;
      v180 = isCommandSideEffect;
      v456 = this;
      if ( this->fields.logic )
      {
        if ( v487 )
        {
          v457 = 0LL;
        }
        else
        {
          v457 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, action, v454, v455);
          BattleCommandData___ctor(v457, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v457 )
            goto LABEL_458;
          v457->fields._type = (int)this;
          v457->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL, 0LL);
        }
        v458 = (UnityEngine_Object_o *)v20->fields.logic;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v458, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v459 = v456->fields.logic, (int)v459 >= 1) )
        {
          v460 = 0LL;
          do
          {
            if ( v460 >= (unsigned int)v459 )
              goto LABEL_459;
            this = (BattleLogicFunction_o *)v20->fields.logic;
            if ( !this )
              goto LABEL_458;
            this = (BattleLogicFunction_o *)BattleLogic__SetDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              v19,
                                              v19->fields.actorId,
                                              *((_DWORD *)&v456->fields.logictarget + v460),
                                              v457,
                                              0LL);
            LODWORD(v459) = v456->fields.logic;
            ++v460;
          }
          while ( (__int64)v460 < (int)v459 );
          v180 = isCommandSideEffect;
          v181 = ServantData;
        }
        else
        {
          v180 = isCommandSideEffect;
        }
        v188 = v492;
      }
LABEL_401:
      v187 = v188->max_length;
      v190 = v446 + 1;
      if ( v190 >= v187 )
        goto LABEL_417;
    }
    v188 = v492;
LABEL_400:
    v446 = v495;
    goto LABEL_401;
  }
  v485 = 0;
  v486 = 0;
LABEL_417:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_458;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v486 & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v20->fields.data;
    if ( !this )
      goto LABEL_458;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, *p_actorId, 0LL);
    if ( !this )
      goto LABEL_458;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(v19, 0LL) )
  {
    v462 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v461);
    if ( UnityEngine_Object__op_Inequality(v462, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(v19, -1, 0LL);
      if ( !this )
        goto LABEL_458;
      v463 = (int)this->fields.logic;
      v464 = this;
      if ( v463 >= 1 )
      {
        v465 = 0;
        while ( v465 < v463 )
        {
          v466 = *((_QWORD *)&v464->fields.logictarget + (int)v465);
          if ( !v466 )
            goto LABEL_458;
          this = (BattleLogicFunction_o *)v20->fields.logic;
          if ( !this )
            goto LABEL_458;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v466 + 28), 0LL);
          v463 = (int)v464->fields.logic;
          if ( (int)++v465 >= v463 )
            goto LABEL_433;
        }
        goto LABEL_459;
      }
    }
  }
LABEL_433:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, void *))FuncSideEffectArg->klass->vtable._7_SetSideEffect.method)(
      FuncSideEffectArg,
      v20,
      v19,
      v181,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v468 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
    if ( UnityEngine_Object__op_Inequality(v468, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_458;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v469 = v20->fields.data;
      if ( !v469 )
        goto LABEL_458;
      this = (BattleLogicFunction_o *)v469->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_458;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v485 & 1) != 0 || args->fields.updateField )
  {
    v470 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, action);
    if ( UnityEngine_Object__op_Inequality(v470, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_458;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v489;
  if ( !v489 )
LABEL_458:
    sub_1BCAA3C(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v501,
    v489,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v502 = v501;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v502,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v472 = v20->fields.data;
    if ( !v472 )
      sub_1BCAA3C(0LL, v471);
    v473 = BattleData__getServantData(v472, v502.fields._current, 0LL);
    if ( v473 )
      v473->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v502,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  BattleCommandData_o *v28; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v34; // x0
  System_Func_object__int__o *_9__52_0; // x26
  Il2CppObject *v36; // x27
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v46; // x0
  const MethodInfo *v47; // x6
  const MethodInfo *v48; // x6

  v9 = mainAction;
  v10 = this;
  if ( (byte_4B18D7C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, mainAction, actionSvtData);
    sub_1BCA7E0(&BattleCommandData_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16);
    sub_1BCA7E0(&System_Func_BattleActionData_SideEffectData__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, v21, v22);
    this = (BattleLogicFunction_o *)sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v23, v24);
    byte_4B18D7C = 1;
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
      v28 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v25, v26, v27);
      BattleCommandData___ctor(v28, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v28 )
        goto LABEL_22;
      v28->fields._type = (int)this;
      v28->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL, 0LL);
    }
    else
    {
      v28 = 0LL;
    }
    v29 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1BCAA2C(
                                                                      BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                      v25,
                                                                      v26,
                                                                      v27);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v29, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v34 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo, v30);
      v34 = BattleLogicFunction___c_TypeInfo;
    }
    _9__52_0 = (System_Func_object__int__o *)v34->static_fields->__9__52_0;
    if ( !_9__52_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34, v30);
        v34 = BattleLogicFunction___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__52_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_BattleActionData_SideEffectData__int__TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32);
      System_Func_object__int____ctor(_9__52_0, v36, Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, 0LL);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__52_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__52_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__52_0,
        (int64_t)_9__52_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__52_0,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v44,
                                      (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0LL);
      v45 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_1BCA888(int___TypeInfo, 1LL);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
          sub_1BCAA44(this, this);
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v45 )
        {
          v46 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v45 + 408LL))(
                                                                  v45,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v45 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v29, v9, actionSvtData, v28, v46, v47);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v29, v9, actionSvtData, v28, attackArg, v48);
          return;
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(this, mainAction);
  }
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( !mainAction )
    sub_1BCAA3C(this, 0LL);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)DamageAttackSideEffectList, v5, v6, v7, v8, v9, v10);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleLogicFunction_SideEffectMakeArgument_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4B18E38 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo, method, v2);
    byte_4B18E38 = 1;
  }
  v4 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1BCAA2C(
                                                         BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.argument, (int64_t)argument, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  int64_t v7; // x20
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B18E1C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, method, v2);
    byte_4B18E1C = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v7 = sub_1BCAA2C(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo, v4, v5, v6);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v7, v8);
  *(_QWORD *)(v7 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)this, v9, v10, v11, v12, v13, v14);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.checkDuplicate, v7, v15, v16, v17, v18, v19, v20);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18E29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v5, v6);
    byte_4B18E29 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *executedFuncList; // x0
  int32_t v7; // w20

  if ( (byte_4B18E25 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__, v4, v5);
    byte_4B18E25 = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1BCAA3C(executedFuncList, method);
  v7 = 0;
  while ( v7 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v7,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    if ( executedFuncList )
    {
      LOBYTE(executedFuncList->fields._size) = 1;
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      ++v7;
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
    sub_1BCAA3C(this, 0LL);
  return DataVals__isCheckDuplicate(vals, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Predicate_object__o *v25; // x20

  if ( (byte_4B18E27 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__,
      vals,
      method);
    sub_1BCA7E0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, v10, v11);
    byte_4B18E27 = 1;
  }
  v12 = sub_1BCAA2C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo, vals, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = vals,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)vals, v15, v16, v17, v18, v19, v20),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v25 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                              v22,
                                              v23,
                                              v24),
        System_Predicate_object____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v25,
           (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedTarget(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Predicate_object__o *v26; // x20

  if ( (byte_4B18E28 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__,
      vals,
      *(_QWORD *)&targetId);
    sub_1BCA7E0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v7, v8);
    sub_1BCA7E0(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
      v9,
      v10);
    sub_1BCA7E0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo, v11, v12);
    byte_4B18E28 = 1;
  }
  v13 = sub_1BCAA2C(
          BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo,
          vals,
          *(_QWORD *)&targetId,
          method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = vals,
        sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)vals, v16, v17, v18, v19, v20, v21),
        *(_DWORD *)(v13 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v26 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                              v23,
                                              v24,
                                              v25),
        System_Predicate_object____ctor(
          v26,
          (Il2CppObject *)v13,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1BCAA3C(v14, v15);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v26,
           (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x21
  __int64 Index; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x2
  __int64 v29; // x3
  unsigned __int64 v30; // x26
  __int64 v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x23
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v44; // x25
  DataVals_o *v45; // x24
  System_Collections_Generic_List_object__o *v46; // x23
  int32_t v47; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v48; // x22
  const MethodInfo *v49; // x3
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0

  if ( (byte_4B18E26 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_ExecutedFunctionData_TypeInfo, vals, targetIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__, v9, v10);
    sub_1BCA7E0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
      v15,
      v16);
    sub_1BCA7E0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v17, v18);
    byte_4B18E26 = 1;
  }
  v19 = sub_1BCAA2C(
          BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo,
          vals,
          targetIds,
          method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_19;
  *(_QWORD *)(v19 + 16) = vals;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)vals, v22, v23, v24, v25, v26, v27);
  if ( !targetIds )
    goto LABEL_19;
  if ( (int)targetIds->max_length >= 1 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      v31 = sub_1BCAA2C(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo, v21, v28, v29);
      System_Object___ctor((Il2CppObject *)v31, 0LL);
      if ( !v31 )
        break;
      *(_QWORD *)(v31 + 24) = v19;
      v38 = v31 + 24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 24), v19, v32, v33, v34, v35, v36, v37);
      if ( v30 >= targetIds->max_length )
        sub_1BCAA44(v39, v40);
      *(_DWORD *)(v31 + 16) = targetIds->m_Items[v30 + 1];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v44 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                            v40,
                                            v41,
                                            v42);
      System_Predicate_object____ctor(
        v44,
        (Il2CppObject *)v31,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        0LL);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_object___FindIndex(
                executedFuncList,
                (System_Predicate_T__o *)v44,
                (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v38 )
          break;
        v45 = *(DataVals_o **)(*(_QWORD *)v38 + 16LL);
        v46 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v47 = *(_DWORD *)(v31 + 16);
        v48 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1BCAA2C(
                                                              BattleLogicFunction_ExecutedFunctionData_TypeInfo,
                                                              v21,
                                                              v28,
                                                              v29);
        BattleLogicFunction_ExecutedFunctionData___ctor(v48, v45, v47, v49);
        if ( !v46 )
          break;
        items = v46->fields._items;
        v57 = Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__;
        ++v46->fields._version;
        if ( !items )
          break;
        size = v46->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v46,
            (Il2CppObject *)v48,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &items->obj.klass + size;
          v46->fields._size = size + 1;
          v59[4] = (Il2CppClass *)v48;
          sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v48, v50, v51, v52, v53, v54, v55);
        }
      }
      if ( (__int64)++v30 >= (int)targetIds->max_length )
        return;
    }
LABEL_19:
    sub_1BCAA3C(Index, v21);
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
    sub_1BCAA3C(this, n);
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
    sub_1BCAA3C(this, n);
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
    sub_1BCAA3C(this, n);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.argument, (int64_t)argument, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  argument = this->fields.argument;
  if ( !argument )
    sub_1BCAA3C(0LL, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, vals);
  if ( !targetIds->max_length )
    sub_1BCAA44(this, vals);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4B18E1B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__,
      method,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
      v5,
      v6);
    byte_4B18E1B = 1;
  }
  *(&this->fields._SkillTiming_k__BackingField + 1) = -1;
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  *(_QWORD *)&this->fields.buffUniqueId = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buffUniqueId, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v14);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *__fastcall BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_int__object__o *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w21
  System_Collections_Generic_List_object__o *v17; // x22

  if ( (byte_4B18E1A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo, v10, v11);
    byte_4B18E1A = 1;
  }
  v12 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v12 )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          v12,
          *(&this->fields._SkillTiming_k__BackingField + 1),
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v15 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
    v16 = *(&this->fields._SkillTiming_k__BackingField + 1);
    v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo,
                                                         method,
                                                         v13,
                                                         v14);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v15 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v15,
      v16,
      (Il2CppObject *)v17,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v12 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v12 )
LABEL_9:
    sub_1BCAA3C(v12, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          v12,
                                                                                          *(&this->fields._SkillTiming_k__BackingField
                                                                                          + 1),
                                                                                          (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
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
    sub_1BCAA3C(v7, v8);
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
    sub_1BCAA3C(this, 0LL);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_HashSet_int__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  int64_t v20; // x20
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B18E1D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v7, v8);
    byte_4B18E1D = 1;
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.executedBuffFuncDic,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v16);
  v20 = sub_1BCAA2C(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo, v17, v18, v19);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)v20,
    v21);
  *(_QWORD *)(v20 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v22, v23, v24, v25, v26, v27);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.checkDuplicate, v20, v28, v29, v30, v31, v32, v33);
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
  if ( (byte_4B18E1F & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1BCA7E0(
                                                                     &Method_System_Collections_Generic_HashSet_int__Add__,
                                                                     funcTarget,
                                                                     method);
    byte_4B18E1F = 1;
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
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_1BCAA3C(this, funcTarget);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_44268180(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *executedBuffFuncDic; // x0

  if ( (byte_4B18E20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, arg, method);
    byte_4B18E20 = 1;
  }
  if ( arg )
  {
    executedBuffFuncDic = (System_Collections_Generic_HashSet_int__o *)this->fields.executedBuffFuncDic;
    if ( !executedBuffFuncDic )
      sub_1BCAA3C(0LL, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      executedBuffFuncDic,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.executedBuffFuncDic,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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

  if ( (byte_4B18E1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BuffList_ACTION___, isMainOnly, method);
    byte_4B18E1E = 1;
  }
  v4 = Method_System_Array_Empty_BuffList_ACTION___;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v5 )
  {
    sub_1C1C718(Method_System_Array_Empty_BuffList_ACTION___, isMainOnly);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6, isMainOnly);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1C6BC(inited);
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

  if ( (byte_4B18E21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, logicFunc, mainActionData);
    byte_4B18E21 = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.executedBuffFuncDic,
         (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1BCAA3C(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B18E19 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method, v2);
    byte_4B18E19 = 1;
  }
  v5 = (Il2CppObject *)sub_1BCAA2C(BattleLogicFunction_CheckDuplicateFunction_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.checkDuplicate, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_1BCAA3C(0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FuncSideEffectArg_k__BackingField = arg;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int64_t)arg,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FuncSideEffectArg_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v2; // x2
  __int64 v3; // x3
  BattleLogicFunction_SideEffectMakeArgument_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4B18E37 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo, method, v2);
    byte_4B18E37 = 1;
  }
  v4 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1BCAA2C(
                                                         BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
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
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleLogicFunction_FunctionArgument_o *v5; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v11; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  int64_t v19; // x2
  __int64 v20; // x3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x0

  v5 = argument;
  if ( (byte_4B18E2B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__,
      argument,
      actionData);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleLogicFunction_FunctionArgument_TypeInfo, v9, v10);
    byte_4B18E2B = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1BCAA2C(
                                                                                   System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo,
                                                                                   argument,
                                                                                   actionData,
                                                                                   method);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v11,
    (const MethodInfo_31BD250 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v5 )
  {
    v5 = (BattleLogicFunction_FunctionArgument_o *)sub_1BCAA2C(
                                                     BattleLogicFunction_FunctionArgument_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20);
    BattleLogicFunction_FunctionArgument___ctor(v5, v25);
  }
  this->fields.externalArg = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.externalArg, (int64_t)v5, v19, v20, v21, v22, v23, v24);
  externalArg = this->fields.externalArg;
  if ( !externalArg
    || (externalArg = (struct BattleLogicFunction_FunctionArgument_o *)((__int64 (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, Il2CppMethodPointer))externalArg->klass->vtable._4_Init.method)(
                                                                         externalArg,
                                                                         externalArg->klass->vtable._5_GetFixTargetIds.methodPtr),
        !actionData) )
  {
    sub_1BCAA3C(externalArg, v26);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x21
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *TriggeredFuncIndex; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  int v48; // w23
  int v49; // w8
  __int64 v50; // x1
  char v51; // w21
  _BOOL4 v52; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x20
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v54; // x0
  System_Func_TSource__bool__o *v55; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v58; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x19
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v65; // x20
  __int64 v66; // x1
  __int64 v67; // x20
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  char v72; // w22
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  char v79; // w23
  BattleServantData_o *ServantData; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  bool value; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-50h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-48h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v91; // 0:x1.8

  if ( (byte_4B18E2D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__,
      *(_QWORD *)&targetId,
      baseVals);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____, v13, v14);
    sub_1BCA7E0(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__, v31, v32);
    sub_1BCA7E0(&System_Math_TypeInfo, v33, v34);
    sub_1BCA7E0(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      v35,
      v36);
    sub_1BCA7E0(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      v37,
      v38);
    sub_1BCA7E0(
      &Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
      v39,
      v40);
    sub_1BCA7E0(&BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_TypeInfo, v41, v42);
    byte_4B18E2D = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v43 = sub_1BCAA2C(
          BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_TypeInfo,
          *(_QWORD *)&targetId,
          baseVals,
          data);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !baseVals )
    goto LABEL_53;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0LL);
  if ( !v43 )
    goto LABEL_53;
  v48 = (int)TriggeredFuncIndex;
  *(_DWORD *)(v43 + 16) = (_DWORD)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
    v51 = 1;
    return v51 & 1;
  }
  *(_BYTE *)(v43 + 20) = (int)TriggeredFuncIndex > 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v45);
  if ( v48 >= 0 )
    v49 = v48;
  else
    v49 = -v48;
  v50 = (unsigned int)(v49 - 1);
  *(_DWORD *)(v43 + 16) = v50;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v50,
      targetId,
      (const MethodInfo_34D778C *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v91 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v91,
             &value,
             (const MethodInfo_31BF3AC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
      {
        v51 = value == *(_BYTE *)(v43 + 20);
        return v51 & 1;
      }
LABEL_24:
      v51 = 0;
      return v51 & 1;
    }
    goto LABEL_53;
  }
  v52 = isAllCond;
  funcResults = this->fields.funcResults;
  v54 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1BCAA2C(
                                                                             System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                             v50,
                                                                             v46,
                                                                             v47);
  v55 = (System_Func_TSource__bool__o *)v54;
  if ( !v52 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v54,
      (Il2CppObject *)v43,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0LL);
    v61 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v55,
            (const MethodInfo_2F4FF20 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v65 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1BCAA2C(
                                                                               System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo,
                                                                               v62,
                                                                               v63,
                                                                               v64);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v65,
      (Il2CppObject *)v43,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0LL);
    v51 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v61,
            (System_Func_TSource__bool__o *)v65,
            (const MethodInfo_2F1ED74 *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v51 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v54,
    (Il2CppObject *)v43,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0LL);
  v56 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v55,
          (const MethodInfo_2F4FF20 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v56,
                                                                                                  (const MethodInfo_2F2D058 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v56 )
LABEL_53:
    sub_1BCAA3C(TriggeredFuncIndex, v45);
  klass = v56->klass;
  v58 = *(unsigned __int16 *)(&v56->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v56->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
    {
      --v58;
      p_offset += 4;
      if ( !v58 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1C1C7C0(
                 v56,
                 System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                 0LL);
  }
  v67 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v56,
          *(_QWORD *)(p_method + 8));
  if ( !v67 )
    sub_1BCAA3C(0LL, v66);
  while ( 1 )
  {
    v68 = *(_QWORD *)v67;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v70 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_32;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_32:
      v71 = sub_1C1C7C0(v67, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v72 = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
    if ( (v72 & 1) == 0 )
      break;
    v73 = *(_QWORD *)v67;
    v74 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v75 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_39;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_39:
      v76 = sub_1C1C7C0(
              v67,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0LL);
    }
    v77 = (*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v67, *(_QWORD *)(v76 + 8));
    if ( !data )
      sub_1BCAA3C(v77, v78);
    v79 = v78;
    ServantData = BattleData__getServantData(data, SHIDWORD(v77), 0LL);
    if ( ServantData )
    {
      if ( !ServantData->fields.isDeadAnime && *(_BYTE *)(v43 + 20) != (v79 != 0) )
        break;
    }
  }
  v51 = v72 ^ 1;
  v81 = *(_QWORD *)v67;
  v82 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
  {
    v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      --v82;
      v83 += 4;
      if ( !v82 )
        goto LABEL_49;
    }
    v84 = v81 + 16LL * *v83 + 312;
  }
  else
  {
LABEL_49:
    v84 = sub_1C1C7C0(v67, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v84)(v67, *(_QWORD *)(v84 + 8));
  return v51 & 1;
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Int32_array *TriggeredFuncIndexArray; // x23
  __int64 v17; // x21
  __int64 v18; // x8
  BattleLogicFunction_ProcListInArgs_o *v19; // x22
  unsigned __int64 v20; // x24
  int v21; // w29
  int v22; // w8
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  unsigned __int64 v24; // x23
  int v25; // w28
  bool value; // [xsp+Ch] [xbp-74h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-70h] BYREF
  bool isAndCheck; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v31; // 0:x1.8

  v7 = this;
  if ( (byte_4B18E2E & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, *(_QWORD *)&targetId, baseVals);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v12, v13);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1BCA7E0(&System_Math_TypeInfo, v14, v15);
    byte_4B18E2E = 1;
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
      v17 = sub_1BCA888(bool___TypeInfo, TriggeredFuncIndexArray->max_length);
      this = (BattleLogicFunction_ProcListInArgs_o *)sub_1BCA888(int___TypeInfo, TriggeredFuncIndexArray->max_length);
      v18 = *(_QWORD *)&TriggeredFuncIndexArray->max_length;
      v19 = this;
      if ( (int)v18 >= 1 )
      {
        v20 = 0LL;
        while ( v20 < (unsigned int)v18 )
        {
          if ( !v17 )
            goto LABEL_37;
          if ( v20 >= *(unsigned int *)(v17 + 24) )
            break;
          v21 = TriggeredFuncIndexArray->m_Items[v20 + 1];
          *(_BYTE *)(v17 + 32 + v20) = v21 > 0;
          this = (BattleLogicFunction_ProcListInArgs_o *)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&targetId);
          if ( !v19 )
            goto LABEL_37;
          if ( v20 >= LODWORD(v19->fields.externalArg) )
            goto LABEL_36;
          if ( v21 >= 0 )
            v22 = v21;
          else
            v22 = -v21;
          *((_DWORD *)&v19->fields._IsTreasureDvc_k__BackingField + v20) = v22 - 1;
          LODWORD(v18) = TriggeredFuncIndexArray->max_length;
          if ( (__int64)++v20 >= (int)v18 )
            goto LABEL_22;
        }
        goto LABEL_36;
      }
      if ( this )
      {
LABEL_22:
        externalArg = v19->fields.externalArg;
        if ( (int)externalArg < 1 )
        {
LABEL_34:
          LOBYTE(this) = isAndCheck;
          return (char)this;
        }
        v24 = 0LL;
        while ( v24 < (unsigned int)externalArg )
        {
          if ( !v17 )
            goto LABEL_37;
          if ( v24 >= *(unsigned int *)(v17 + 24) )
            break;
          v25 = *(unsigned __int8 *)(v17 + 32 + v24);
          p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
          System_Collections_Generic_KeyValuePair_int__int____ctor(
            p_key,
            *((_DWORD *)&v19->fields._IsTreasureDvc_k__BackingField + v24),
            targetId,
            (const MethodInfo_34D778C *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
          this = (BattleLogicFunction_ProcListInArgs_o *)v7->fields.funcResults;
          if ( !this )
            goto LABEL_37;
          v31 = key;
          this = (BattleLogicFunction_ProcListInArgs_o *)System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
                                                           (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)this,
                                                           v31,
                                                           &value,
                                                           (const MethodInfo_31BF3AC *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleLogicFunction_ProcListInArgs_o *)!isAndCheck;
            if ( isAndCheck )
            {
              if ( value != v25 )
                return (char)this;
            }
            else if ( value == v25 )
            {
              return (char)this;
            }
          }
          LODWORD(externalArg) = v19->fields.externalArg;
          if ( (__int64)++v24 >= (int)externalArg )
            goto LABEL_34;
        }
LABEL_36:
        sub_1BCAA44(this, *(_QWORD *)&targetId);
      }
    }
LABEL_37:
    sub_1BCAA3C(this, *(_QWORD *)&targetId);
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
    sub_1BCAA3C(0LL, v7);
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
    sub_1BCAA3C(0LL, v5);
  return GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
           familyLinkageIdCacher,
           targetSvtData,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_ProcListInArgs__MatchSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, *(_QWORD *)&type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, method);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, method);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, method);
  return externalArg->fields.isShift;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  PartyOrganizationUtility_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18E2A & 1) == 0 )
  {
    sub_1BCA7E0(&GeneratedFamilyLinkageIdCacher_TypeInfo, method, v2);
    byte_4B18E2A = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (PartyOrganizationUtility_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v8 = (GeneratedFamilyLinkageIdCacher_o *)sub_1BCAA2C(GeneratedFamilyLinkageIdCacher_TypeInfo, method, v2, v3);
    GeneratedFamilyLinkageIdCacher___ctor(v8, 0LL);
    p_familyLinkageIdCacher->klass = (PartyOrganizationUtility_c *)v8;
    sub_1BCA784(p_familyLinkageIdCacher, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v12; // x2
  signed int max_length; // w25
  int64_t v14; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x2
  __int64 v23; // x3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  il2cpp_array_size_t v25; // w28
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v26; // x26
  const MethodInfo *v27; // x3
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppClass **v34; // x0
  const MethodInfo *v35; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v36; // x8
  int v37; // w8
  int v38; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v39; // x21
  int v40; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v41; // x20
  const MethodInfo *v42; // x2
  _BOOL4 v43; // w8
  __int64 v44; // x0

  v10 = this;
  if ( (byte_4B18E30 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, logic, functionIds);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1BCA7E0(
                                                     &BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                     v11,
                                                     v12);
    byte_4B18E30 = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v14 = sub_1BCA888(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v10->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v14;
  p_funcUnitArray_k__BackingField = &v10->fields._funcUnitArray_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields._funcUnitArray_k__BackingField,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  funcUnitArray_k__BackingField = v10->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1BCAA2C(
                                                                BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo,
                                                                logic,
                                                                v22,
                                                                v23);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v26, logic, v10, v27);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v26 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1BCA91C(
                                                         v26,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v44 = sub_1BCAA60(0LL);
          sub_1BCA908(v44, 0LL);
        }
      }
      if ( v25 >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      v34 = &funcUnitArray_k__BackingField->obj.klass + (int)v25;
      v34[4] = (Il2CppClass *)v26;
      sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v26, v28, v29, v30, v31, v32, v33);
      v36 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v25 >= v36->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v25 >= functionIds->max_length || v25 >= dataValsList->max_length )
LABEL_39:
        sub_1BCAA44(this, logic);
      this = (BattleLogicFunction_ProcListInArgs_o *)v36->m_Items[v25];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        functionIds->m_Items[v25 + 1],
        dataValsList->m_Items[v25],
        v35);
      ++v25;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( max_length == v25 )
        goto LABEL_17;
    }
LABEL_38:
    sub_1BCAA3C(this, logic);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v37 = funcUnitArray_k__BackingField->max_length;
  if ( v37 >= 1 )
  {
    v38 = 0;
    v39 = 0LL;
    v40 = -1;
    do
    {
      if ( v38 >= (unsigned int)v37 )
        goto LABEL_39;
      v41 = funcUnitArray_k__BackingField->m_Items[v38];
      if ( !v41 )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)v41->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0LL) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v41->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v41, *p_funcUnitArray_k__BackingField, v42);
      this = (BattleLogicFunction_ProcListInArgs_o *)v41->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        v43 = v39 == 0LL || (int)this < v40;
        if ( v43 )
          v40 = (int)this;
        if ( v43 )
          v39 = v41;
      }
      v37 = funcUnitArray_k__BackingField->max_length;
      ++v38;
    }
    while ( v38 < v37 );
    if ( v39 )
      v39->fields.isLowestStarFunction = 1;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v17; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v18; // 0:x1.8

  if ( (byte_4B18E2C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__,
      *(_QWORD *)&targetId,
      *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9, v10);
    byte_4B18E2C = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_34D778C *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v17 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v17,
          (const MethodInfo_31BDE38 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1BCAA3C(funcResults, v11);
  v18 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v18,
           (const MethodInfo_31BDB84 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v15; // 0:x1.8

  if ( (byte_4B18E2F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__,
      *(_QWORD *)&targetId,
      result);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__, v9, v10);
    byte_4B18E2F = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_34D778C *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1BCAA3C(0LL, v11);
  v15 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v15,
    result,
    (const MethodInfo_31BDC18 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, value);
  externalArg->fields.isCommandSideEffect = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_ProcListInArgs__set_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, value);
  externalArg->fields.isPassive = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_ProcListInArgs__set_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, value);
  externalArg->fields.isShift = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsTreasureDvc(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTreasureDvc_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_ProcListInArgs__set_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1BCAA3C(this, *(_QWORD *)&value);
  externalArg->fields.skillId = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._funcUnitArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1
  __int64 v6; // x2

  key = x.fields.key.fields.key;
  if ( (byte_4B18E32 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key,
      *(_QWORD *)&x.fields.value);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5, v6);
    byte_4B18E32 = 1;
  }
  return this->fields.funcIndex == key;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_4B18E33 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__,
      *(_QWORD *)&x.fields.key,
      *(_QWORD *)&x.fields.value);
    byte_4B18E33 = 1;
  }
  return this->fields.isTrue == value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass40_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19
  __int64 v5; // x1
  __int64 v6; // x2

  key = x.fields.key.fields.key;
  if ( (byte_4B18E31 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__,
      *(_QWORD *)&x.fields.key,
      *(_QWORD *)&x.fields.value);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v5, v6);
    byte_4B18E31 = 1;
  }
  return this->fields.funcIndex == key;
}


void __fastcall BattleLogicFunction_SideEffectMakeArgument___ctor(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleActionData_SideEffectData_array **v14; // x8
  struct BattleActionData_SideEffectData_array *v15; // x1

  if ( (byte_4B18E35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleActionData_SideEffectData___, method, v2);
    byte_4B18E35 = 1;
  }
  v10 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v11 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v11 )
  {
    sub_1C1C718(Method_System_Array_Empty_BattleActionData_SideEffectData___, method);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1C6BC(inited);
  v14 = *(struct BattleActionData_SideEffectData_array ***)(v13 + 184);
  v15 = *v14;
  this->fields._SideEffectList_k__BackingField = *v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v15, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_SideEffectMakeArgument__Init(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  int64_t v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Func_T__TResult__o *v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B18E34 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_ACTION___TypeInfo, targetIds, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___, v8, v9);
    sub_1BCA7E0(&System_Func_int__BattleActionData_SideEffectData__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__, v12, v13);
    sub_1BCA7E0(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, v14, v15);
    byte_4B18E34 = 1;
  }
  v16 = sub_1BCAA2C(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo, targetIds, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  v17 = sub_1BCA888(BuffList_ACTION___TypeInfo, 1LL);
  v18 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
          this,
          this->klass->vtable._5_unknown.methodPtr);
  if ( !v17 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v17 + 24) )
    sub_1BCAA44(v18, v19);
  *(_DWORD *)(v17 + 32) = v18;
  if ( !v16 )
LABEL_7:
    sub_1BCAA3C(v18, v19);
  *(_QWORD *)(v16 + 16) = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), v17, v20, v21, v22, v23, v24, v25);
  v29 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_int__BattleActionData_SideEffectData__TypeInfo,
                                       v26,
                                       v27,
                                       v28);
  System_Func_int__object____ctor(
    v29,
    (Il2CppObject *)v16,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0LL);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v29,
                                                               (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v31 = System_Linq_Enumerable__ToArray_object_(
          v30,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v31, v32, v33, v34, v35, v36, v37);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SideEffectList_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  BuffList_ACTION_array *buffActs; // x20
  BattleActionData_SideEffectData_o *v7; // x21

  if ( (byte_4B18E36 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_SideEffectData_TypeInfo, *(_QWORD *)&id, method);
    byte_4B18E36 = 1;
  }
  buffActs = this->fields.buffActs;
  v7 = (BattleActionData_SideEffectData_o *)sub_1BCAA2C(
                                              BattleActionData_SideEffectData_TypeInfo,
                                              *(_QWORD *)&id,
                                              method,
                                              v3);
  BattleActionData_SideEffectData___ctor(v7, id, buffActs, 0LL);
  return v7;
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

  if ( (byte_4B18E22 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_ACTION___TypeInfo, isMainOnly, method);
    byte_4B18E22 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1BCA888(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1BCAA3C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1BCAA44(result, v5);
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

  if ( (byte_4B18E23 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_ACTION___TypeInfo, isMainOnly, method);
    byte_4B18E23 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1BCA888(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1BCAA3C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1BCAA44(result, v5);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B18E24 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&targetId, method);
    byte_4B18E24 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1BCAA3C(0LL, v6);
  if ( !v5->max_length )
    sub_1BCAA44(v5, v5);
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fixTargetIds, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18E39 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunction___c_TypeInfo, v1, v2);
    byte_4B18E39 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicFunction___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicFunction___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__121_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__49_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  BattleActionData__SetPopupOnce(x, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionMoveState_b__108_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__89_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_1BCAA3C(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__83_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunction___c___functionTransformServant_b__85_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantSnapShotShiftServant_o *v5; // x20

  if ( (byte_4B18E3A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantSnapShotShiftServant_TypeInfo, x, method);
    byte_4B18E3A = 1;
  }
  v5 = (BattleServantSnapShotShiftServant_o *)sub_1BCAA2C(BattleServantSnapShotShiftServant_TypeInfo, x, method, v3);
  BattleServantSnapShotShiftServant___ctor(v5, x, 0LL);
  return (BattleServantSnapShot_o *)v5;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_1BCAA3C(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_1BCAA3C(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BCAA3C(this, 0LL);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__41_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BCAA3C(this, 0LL);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__52_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass108_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_4B18E3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, x, method);
    byte_4B18E3B = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1BCAA3C(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void __fastcall BattleLogicFunction___c__DisplayClass68_0___ctor(
        BattleLogicFunction___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(this, *(_QWORD *)&linkageIndividuality);
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
    sub_1BCAA3C(targetSvtData, buff);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.targetId == this->fields.targetId;
}