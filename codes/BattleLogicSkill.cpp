void __fastcall BattleLogicSkill___ctor(BattleLogicSkill_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  WeightRate_int__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  int32_t Next; // w1
  __int64 v11; // x0

  if ( (byte_4354FFA & 1) == 0 )
  {
    sub_B70694(&Method_WeightRate_int___ctor__);
    sub_B70694(&Method_WeightRate_int__getData__);
    sub_B70694(&Method_WeightRate_int__getTotalWeight__);
    sub_B70694(&Method_WeightRate_int__setWeight__);
    sub_B70694(&WeightRate_int__TypeInfo);
    byte_4354FFA = 1;
  }
  if ( !rateArray )
    return -1;
  v4 = (WeightRate_int__o *)sub_B70764(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v4, (const MethodInfo_2CBC9CC *)Method_WeightRate_int___ctor__);
  v7 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v11 = sub_B70798(v5);
        sub_B70738(v11, 0LL);
      }
      if ( !v4 )
        break;
      WeightRate_int___setWeight(
        v4,
        rateArray->m_Items[v8 + 1],
        v8,
        (const MethodInfo_2CBBB94 *)Method_WeightRate_int__setWeight__);
      LODWORD(v7) = rateArray->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_12;
    }
LABEL_13:
    sub_B7076C(v5, v6);
  }
  if ( !v4 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v4->fields.totalweight, 0LL);
  return WeightRate_int___getData(v4, Next, (const MethodInfo_2CBC018 *)Method_WeightRate_int__getData__);
}


bool __fastcall BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  unsigned __int64 v8; // x23
  BattleLogicSkill___c__DisplayClass17_0_o *v9; // x21
  System_Func_int__bool__o *v10; // x22
  __int64 v12; // x0

  if ( (byte_4354FFC & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass17_0__IsNotSkillCopyTargetIndividuality_b__0__);
    sub_B70694(&BattleLogicSkill___c__DisplayClass17_0_TypeInfo);
    byte_4354FFC = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0LL) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !notSkillCopyTargetIndividualities )
LABEL_15:
    sub_B7076C(IsNullOrEmpty, v7);
  if ( (int)notSkillCopyTargetIndividualities->max_length < 1 )
    return 0;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (BattleLogicSkill___c__DisplayClass17_0_o *)sub_B70764(BattleLogicSkill___c__DisplayClass17_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass17_0___ctor(v9, 0LL);
    if ( v8 >= notSkillCopyTargetIndividualities->max_length )
    {
      v12 = sub_B70798(IsNullOrEmpty);
      sub_B70738(v12, 0LL);
    }
    if ( !v9 )
      goto LABEL_15;
    v9->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v8 + 1];
    v10 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v10,
      (Il2CppObject *)v9,
      Method_BattleLogicSkill___c__DisplayClass17_0__IsNotSkillCopyTargetIndividuality_b__0__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__29214704(
           actorIndividualities,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
    {
      return 1;
    }
    if ( (__int64)++v8 >= (int)notSkillCopyTargetIndividualities->max_length )
      return 0;
  }
}


BattleLogicTask_o *__fastcall BattleLogicSkill__MakeAddInvokeSkillTask(
        BattleLogicSkill_o *this,
        SkillLvMaster_o *skillLvMst,
        SkillLvEntity_o *skillLvEnt,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v8; // x23
  BattleLogicSkill_o *v9; // x20
  int32_t actortype; // w21
  int32_t v11; // w22
  const MethodInfo *v12; // x1
  BattleData_o *data; // x21
  bool isPlayerID; // w23
  int32_t data_high; // w20
  int32_t v16; // w24
  TempBattleSkillInfoData_o *v17; // x25
  const MethodInfo *v18; // x4

  v8 = this;
  if ( (byte_4354FF4 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_B70694(&TempBattleSkillInfoData_TypeInfo);
    byte_4354FF4 = 1;
  }
  if ( !skillLvMst )
    goto LABEL_13;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0LL);
  if ( this )
  {
    if ( baseTask )
    {
      v9 = this;
      this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(baseTask, (const MethodInfo *)skillLvMst);
      if ( skillLvEnt )
      {
        actortype = baseTask->fields.actortype;
        v11 = (int)this;
        if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0LL) != 1 )
        {
          isPlayerID = 0;
          goto LABEL_12;
        }
        data = v8->fields.data;
        this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, v12);
        if ( data )
        {
          isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0LL);
          v11 = -1;
          actortype = 5;
LABEL_12:
          v16 = (int32_t)v9->fields.data;
          data_high = HIDWORD(v9->fields.data);
          v17 = (TempBattleSkillInfoData_o *)sub_B70764(TempBattleSkillInfoData_TypeInfo);
          TempBattleSkillInfoData___ctor(v17, v16, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v17, actortype, isPlayerID, v18);
        }
      }
    }
LABEL_13:
    sub_B7076C(this, skillLvMst);
  }
  return (BattleLogicTask_o *)this;
}


void __fastcall BattleLogicSkill__SetCommandSpellAddFunctionData(
        BattleLogicSkill_o *this,
        int32_t commandSpellId,
        System_Int32_array *targetIds,
        System_Collections_Generic_List_int__o *funcIdList,
        System_Collections_Generic_List_DataVals__o *dataValsList,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_24296868; // x0
  __int64 v14; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v16; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v19; // x22
  unsigned int v20; // w24
  AddSkillData_o *v21; // x8
  __int64 v22; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4354FFD & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    byte_4354FFD = 1;
  }
  entity = 0LL;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v11->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_24296868 = (BattleData_o *)CondType__IsQuestClear_24296868(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_24296868 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_32;
    if ( !targetIds->max_length )
      goto LABEL_33;
    IsQuestClear_24296868 = this->fields.data;
    if ( !IsQuestClear_24296868 )
      goto LABEL_32;
    ServantData = BattleData__getServantData(IsQuestClear_24296868, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v16 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_24296868 = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v16->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_32:
      sub_B7076C(IsQuestClear_24296868, v14);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v19 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_24296868;
      v20 = 0;
      while ( v20 < max_length )
      {
        v21 = classBoardAddCommandSpells->m_Items[v20];
        if ( !v21 || !v19 )
          goto LABEL_32;
        IsQuestClear_24296868 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v19,
                                                  &entity,
                                                  v21->fields.id,
                                                  commandSpellId,
                                                  v21->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_24296868 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_32;
          if ( !funcIdList )
            goto LABEL_32;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_24296868 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_32;
          IsQuestClear_24296868 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_32;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_24296868,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v20 >= max_length )
          return;
      }
LABEL_33:
      v22 = sub_B70798(IsQuestClear_24296868);
      sub_B70738(v22, 0LL);
    }
  }
}


bool __fastcall BattleLogicSkill__SetSkillCopyFunction(
        BattleLogicSkill_o *this,
        SkillLvEntity_o *skillLvEnt,
        DataVals_o *copyFuncVals,
        System_Int32_array **functionIdArray,
        DataVals_array **dataValsArray,
        int32_t actorId,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v12; // x23
  System_Collections_ICollection_o *v13; // x25
  BattleServantData_o *v14; // x20
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x27
  unsigned __int64 v17; // x19
  __int64 v18; // x24
  struct System_Int32_array *v19; // x8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Func_int__bool__o *v26; // x20
  __int64 v27; // x20
  System_Func_int__bool__o *v28; // x20
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v30; // x3
  System_Func_int__bool__o *v31; // x20
  System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v47; // x0
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-A0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-90h]
  BattleServantConfConponent_o *v50; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v51; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // [xsp+30h] [xbp-70h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-68h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-58h]

  v12 = this;
  if ( (byte_4354FFB & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__0__);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__1__);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__2__);
    this = (BattleLogicSkill_o *)sub_B70694(&BattleLogicSkill___c__DisplayClass16_0_TypeInfo);
    byte_4354FFB = 1;
  }
  if ( !copyFuncVals )
    goto LABEL_45;
  CopyTargetFunctionTypeArray = (System_Collections_ICollection_o *)DataVals__GetCopyTargetFunctionTypeArray(
                                                                      copyFuncVals,
                                                                      0LL);
  self = (System_Collections_ICollection_o *)DataVals__GetCopyTargetBuffTypeArray(copyFuncVals, 0LL);
  this = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetFuncIdArray(copyFuncVals, 0LL);
  if ( !v12->fields.data )
    goto LABEL_45;
  v13 = (System_Collections_ICollection_o *)this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(v12->fields.data, actorId, 0LL);
  if ( !skillLvEnt )
    goto LABEL_45;
  v14 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0LL);
  actorIndividualities = v14 ? BattleServantData__getConcatServantAndBuffIndividualityies(v14, 0LL, 0, 0, 0, 0LL) : 0LL;
  v50 = (BattleServantConfConponent_o *)dataValsArray;
  v51 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
    goto LABEL_45;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v17 = 0LL;
  while ( (__int64)v17 < (int)funcId->max_length )
  {
    v18 = sub_B70764(BattleLogicSkill___c__DisplayClass16_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass16_0___ctor((BattleLogicSkill___c__DisplayClass16_0_o *)v18, 0LL);
    v19 = skillLvEnt->fields.funcId;
    if ( !v19 )
      goto LABEL_45;
    if ( v17 >= v19->max_length )
      goto LABEL_50;
    if ( !v18 )
      goto LABEL_45;
    *(_DWORD *)(v18 + 16) = v19->m_Items[v17 + 1];
    if ( BasicHelper__IsNullOrEmpty(v13, 0LL)
      || (v26 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v26,
            (Il2CppObject *)v18,
            Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__0__,
            (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__29214704(
                                         (System_Int32_array *)v13,
                                         (System_Func_T__bool__o *)v26,
                                         (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v18 + 24) = 0LL;
      v27 = v18 + 24;
      sub_B70630((BattleServantConfConponent_o *)(v18 + 24), 0LL, v20, v21, v22, v23, v24, v25);
      if ( !v16 )
        goto LABEL_45;
      this = (BattleLogicSkill_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     v16,
                                     (WarEntity_o **)(v18 + 24),
                                     *(_DWORD *)(v18 + 16),
                                     (const MethodInfo_21C049C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v27 )
          goto LABEL_45;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v27 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v27 )
            goto LABEL_45;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v27 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v27 )
              goto LABEL_45;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v27 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v27 )
                goto LABEL_45;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v27 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v27 )
                  goto LABEL_45;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v27 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v28 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v28,
                        (Il2CppObject *)v18,
                        Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__1__,
                        (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__29214704(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v28,
                                                     (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_45;
                  if ( v17 >= SetTypeDataValArray->max_length )
                  {
LABEL_50:
                    v47 = sub_B70798(this);
                    sub_B70738(v47, 0LL);
                  }
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v17];
                  if ( !this )
                    goto LABEL_45;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v30);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v31 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v31,
                            (Il2CppObject *)v18,
                            Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__2__,
                            (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__29214704(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v31,
                                                         (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v51;
                      if ( !v51 )
                        goto LABEL_45;
                      System_Collections_Generic_List_int___Add(
                        v51,
                        *(_DWORD *)(v18 + 16),
                        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL);
                      if ( !this )
                        goto LABEL_45;
                      if ( v17 >= LODWORD(this->fields.logic) )
                        goto LABEL_50;
                      if ( !v52 )
                        goto LABEL_45;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v52,
                        *((EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.logictarget + v17),
                        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_DataVals__Add__);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    funcId = skillLvEnt->fields.funcId;
    ++v17;
    if ( !funcId )
      goto LABEL_45;
  }
  this = (BattleLogicSkill_o *)v51;
  if ( !v51
    || (v32 = System_Collections_Generic_List_int___ToArray(
                v51,
                (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__),
        *functionIdArray = v32,
        sub_B70630(
          (BattleServantConfConponent_o *)functionIdArray,
          (System_Int32_array **)v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (this = (BattleLogicSkill_o *)v52) == 0LL)
    || (v39 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v52,
                                       (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        v50->klass = (BattleServantConfConponent_c *)v39,
        sub_B70630(v50, v39, v40, v41, v42, v43, v44, v45),
        !*functionIdArray) )
  {
LABEL_45:
    sub_B7076C(this, skillLvEnt);
  }
  return (*functionIdArray)->max_length != 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicSkill__actPassiveSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isShift,
        bool isDeckDataLoad,
        BattleLogicSkill_SkillExecArgs_o *skillExecArgs,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v10; // x19
  int32_t svtUniqueId; // w26
  int32_t v12; // w0
  int32_t skilllv; // w27
  int32_t v14; // w21
  BattleActionData_o *v15; // x24
  BattleServantData_o *ServantData; // x25
  bool v17; // w20
  SkillEntity_o *Entity; // x0
  SkillEntity_o *v19; // x28
  SkillLvEntity_o *v20; // x27
  System_Int32_array *Individualities; // x21
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x21
  int32_t Rarity; // w0
  __int64 v25; // x21
  __int64 v26; // x26
  int32_t v27; // w0
  int32_t Timing_k__BackingField; // w22
  BattleLogicFunction_FunctionArgument_o *argument; // x21
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  struct BattleBuffData_o *buffData; // x8
  BattleData_o *data; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x21
  Il2CppObject *v37; // x22
  struct BattleLogicSkill___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  bool v45; // [xsp+34h] [xbp-5Ch]
  BattleLogicSkill_SkillExecArgs_o *v46; // [xsp+38h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  v10 = this;
  if ( (byte_4354FF5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleServantData___ctor__);
    sub_B70694(&System_Action_BattleServantData__TypeInfo);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BattleLogicSkill___c__actPassiveSkill_b__10_0__);
    this = (BattleLogicSkill_o *)sub_B70694(&BattleLogicSkill___c_TypeInfo);
    byte_4354FF5 = 1;
  }
  v46 = skillExecArgs;
  if ( !skillInfo )
    goto LABEL_46;
  v45 = isDeckDataLoad;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v12 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v14 = v12;
  v15 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_46;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_46;
  v17 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_46;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v14,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v19 = Entity;
    if ( !SkillEntity__isActive(Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v14, skilllv, 0LL);
          v20 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_46;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v19, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v20, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v15 )
          {
            v15->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v26 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v25 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v47.fields.currentCryptoKey = v26;
              *(_QWORD *)&v47.fields.fakeValue = v25;
              v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v47, 0LL);
              v15->fields.motionId = SkillEntity__GetMotionId(v19, v27, 0LL);
              v15->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v15->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v15->fields.cardIndex = skillInfo->fields.index;
              if ( v46 )
              {
                if ( !v46->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
                  goto LABEL_25;
              }
              this = (BattleLogicSkill_o *)v10->fields.logic;
              if ( !this )
                goto LABEL_46;
              BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
              if ( v46 )
LABEL_25:
                Timing_k__BackingField = v46->fields._Timing_k__BackingField;
              else
                Timing_k__BackingField = 0;
              argument = (BattleLogicFunction_FunctionArgument_o *)sub_B70764(BattleLogicFunction_FunctionArgument_TypeInfo);
              BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
              if ( argument )
              {
                type = skillInfo->fields.type;
                argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
                argument->fields.isDeckDataLoad = v45;
                argument->fields.grantSkillType = type;
                if ( v20 )
                {
                  logicfunction = v10->fields.logicfunction;
                  funcId = v20->fields.funcId;
                  this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v20, 0LL);
                  if ( logicfunction )
                  {
                    this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                                   logicfunction,
                                                   v15,
                                                   funcId,
                                                   (DataVals_array *)this,
                                                   1,
                                                   1,
                                                   0,
                                                   v17,
                                                   0,
                                                   1,
                                                   1,
                                                   argument,
                                                   v20->fields.skillId,
                                                   0LL);
                    if ( !v46 || v46->fields._RemoveActorUnfixedBuff_k__BackingField )
                    {
                      buffData = ServantData->fields.buffData;
                      if ( !buffData )
                        goto LABEL_46;
                      this = (BattleLogicSkill_o *)buffData->fields.unfixedBuffList;
                      if ( !this )
                        goto LABEL_46;
                      System_Collections_Generic_List_int___Clear(
                        (System_Collections_Generic_List_int__o *)this,
                        (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
                    }
                    data = v10->fields.data;
                    this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                    if ( (BYTE3(BattleLogicSkill___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                      this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                    }
                    static_fields = this[3].fields.logicfunction;
                    v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields
                                                                                               + 1);
                    if ( !v36 )
                    {
                      if ( (BYTE3(this[6].fields.data) & 4) != 0 && !LODWORD(this[4].fields.logictarget) )
                      {
                        j_il2cpp_runtime_class_init_0(this);
                        static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                      }
                      v37 = *(Il2CppObject **)static_fields;
                      v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleServantData__TypeInfo);
                      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                        v36,
                        v37,
                        Method_BattleLogicSkill___c__actPassiveSkill_b__10_0__,
                        (const MethodInfo_264C148 *)Method_System_Action_BattleServantData___ctor__);
                      v38 = BattleLogicSkill___c_TypeInfo->static_fields;
                      v38->__9__10_0 = (struct System_Action_BattleServantData__o *)v36;
                      sub_B70630(
                        (BattleServantConfConponent_o *)&v38->__9__10_0,
                        (System_Int32_array **)v36,
                        v39,
                        v40,
                        v41,
                        v42,
                        v43,
                        v44);
                    }
                    if ( data )
                    {
                      BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)v36, 0LL);
                      this = (BattleLogicSkill_o *)v10->fields.logic;
                      if ( this )
                      {
                        BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
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
LABEL_46:
      sub_B7076C(this, skillInfo);
    }
  }
}


bool __fastcall BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
        const MethodInfo *method)
{
  __int64 v7; // x26
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  SkillLvMaster_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **saveDataMapList; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v24; // x0
  System_Func_BattleBuffData_BuffData__int__bool__o *v25; // x25
  System_Func_BattleBuffData_BuffData__int__bool__o *v26; // x24
  System_Func_string__double__bool__o *v27; // x23
  System_Func_string__double__bool__o *v28; // x22
  BattleServantData_o *v29; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v31; // x8
  int32_t NowHp; // w0
  int32_t v33; // w0
  int32_t v34; // w20
  int32_t v35; // w20
  __int64 *v37; // x8
  System_String_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_4354FF7 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__);
    sub_B70694(&Method_System_Func_string__int__bool__Invoke__);
    sub_B70694(&Method_System_Func_string__double__bool__Invoke__);
    sub_B70694(&Method_System_Func_string__double__bool___ctor__);
    sub_B70694(&Method_System_Func_string__int__bool___ctor__);
    sub_B70694(&System_Func_string__double__bool__TypeInfo);
    sub_B70694(&System_Func_string__int__bool__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__0__);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__1__);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__2__);
    sub_B70694(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__3__);
    sub_B70694(&BattleLogicSkill___c__DisplayClass12_0_TypeInfo);
    sub_B70694(&StringLiteral_2583/*"BATTLE_SKILLERROR_NP_LOWER"*/);
    sub_B70694(&StringLiteral_2581/*"BATTLE_SKILLERROR_HP_LOWER"*/);
    sub_B70694(&StringLiteral_12532/*"STAR_HIGHER"*/);
    sub_B70694(&StringLiteral_7190/*"HP_PER_LOWER"*/);
    sub_B70694(&StringLiteral_2582/*"BATTLE_SKILLERROR_NP_HIGHER"*/);
    sub_B70694(&StringLiteral_2580/*"BATTLE_SKILLERROR_HP_HIGHER"*/);
    sub_B70694(&StringLiteral_7189/*"HP_PER_HIGHER"*/);
    sub_B70694(&StringLiteral_2584/*"BATTLE_SKILLERROR_STAR_HIGHER"*/);
    sub_B70694(&StringLiteral_9492/*"NP_HIGHER"*/);
    sub_B70694(&StringLiteral_2585/*"BATTLE_SKILLERROR_STAR_LOWER"*/);
    sub_B70694(&StringLiteral_7191/*"HP_VAL_HIGHER"*/);
    sub_B70694(&StringLiteral_12533/*"STAR_LOWER"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_9493/*"NP_LOWER"*/);
    sub_B70694(&StringLiteral_7192/*"HP_VAL_LOWER"*/);
    byte_4354FF7 = 1;
  }
  v7 = sub_B70764(BattleLogicSkill___c__DisplayClass12_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass12_0___ctor((BattleLogicSkill___c__DisplayClass12_0_o *)v7, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)text, (System_Int32_array **)StringLiteral_1/*""*/, v8, v9, v10, v11, v12, v13);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_53;
  v16 = (SkillLvMaster_o *)Instance;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v16 )
    goto LABEL_53;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity(v16, (int32_t)Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v7 )
    goto LABEL_53;
  saveDataMapList = (System_Int32_array **)Instance->fields.saveDataMapList;
  *(_QWORD *)(v7 + 16) = saveDataMapList;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), saveDataMapList, v17, v18, v19, v20, v21, v22);
  v24 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v7 + 16);
  if ( !v24 )
    return 1;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         v24,
         (const MethodInfo_2F4F5E4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v25 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B70764(System_Func_string__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v25,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__0__,
    (const MethodInfo_29B65F0 *)Method_System_Func_string__int__bool___ctor__);
  v26 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B70764(System_Func_string__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v26,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__1__,
    (const MethodInfo_29B65F0 *)Method_System_Func_string__int__bool___ctor__);
  v27 = (System_Func_string__double__bool__o *)sub_B70764(System_Func_string__double__bool__TypeInfo);
  System_Func_string__double__bool____ctor(
    v27,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__2__,
    (const MethodInfo_29B5D04 *)Method_System_Func_string__double__bool___ctor__);
  v28 = (System_Func_string__double__bool__o *)sub_B70764(System_Func_string__double__bool__TypeInfo);
  System_Func_string__double__bool____ctor(
    v28,
    (Il2CppObject *)v7,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__3__,
    (const MethodInfo_29B5D04 *)Method_System_Func_string__double__bool___ctor__);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v29 = (BattleServantData_o *)Instance;
  Instance = (DataManager_o *)BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v25 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v25,
          (BattleBuffData_BuffData_o *)StringLiteral_9492/*"NP_HIGHER"*/,
          (int32_t)Instance,
          (const MethodInfo_29B6604 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = &StringLiteral_2582/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_52;
  }
  Instance = (DataManager_o *)BattleServantData__getNPVal(v29, 0LL);
  if ( !v26 )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v26,
                                (BattleBuffData_BuffData_o *)StringLiteral_9493/*"NP_LOWER"*/,
                                (int32_t)Instance,
                                (const MethodInfo_29B6604 *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = &StringLiteral_2583/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_52;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v25,
                                (BattleBuffData_BuffData_o *)StringLiteral_12532/*"STAR_HIGHER"*/,
                                data->fields.totalCriticalStars,
                                (const MethodInfo_29B6604 *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = &StringLiteral_2584/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_52;
  }
  v31 = this->fields.data;
  if ( !v31 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v26,
          (BattleBuffData_BuffData_o *)StringLiteral_12533/*"STAR_LOWER"*/,
          v31->fields.totalCriticalStars,
          (const MethodInfo_29B6604 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = &StringLiteral_2585/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_52;
  }
  NowHp = BattleServantData__getNowHp(v29, 0LL);
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v25,
          (BattleBuffData_BuffData_o *)StringLiteral_7191/*"HP_VAL_HIGHER"*/,
          NowHp,
          (const MethodInfo_29B6604 *)Method_System_Func_string__int__bool__Invoke__) )
  {
LABEL_44:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = &StringLiteral_2580/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_52;
  }
  v33 = BattleServantData__getNowHp(v29, 0LL);
  if ( System_Func_BattleBuffData_BuffData__int__bool___Invoke(
         v26,
         (BattleBuffData_BuffData_o *)StringLiteral_7192/*"HP_VAL_LOWER"*/,
         v33,
         (const MethodInfo_29B6604 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    v34 = BattleServantData__getNowHp(v29, 0LL);
    Instance = (DataManager_o *)BattleServantData__getMaxHp(v29, 0LL);
    if ( !v27 )
      goto LABEL_53;
    if ( System_Func_string__double__bool___Invoke(
           v27,
           (System_String_o *)StringLiteral_7189/*"HP_PER_HIGHER"*/,
           (double)v34 * 1000.0 / (double)(int)Instance,
           (const MethodInfo_29B5D18 *)Method_System_Func_string__double__bool__Invoke__) )
    {
      v35 = BattleServantData__getNowHp(v29, 0LL);
      Instance = (DataManager_o *)BattleServantData__getMaxHp(v29, 0LL);
      if ( v28 )
      {
        if ( System_Func_string__double__bool___Invoke(
               v28,
               (System_String_o *)StringLiteral_7190/*"HP_PER_LOWER"*/,
               (double)v35 * 1000.0 / (double)(int)Instance,
               (const MethodInfo_29B5D18 *)Method_System_Func_string__double__bool__Invoke__) )
        {
          return 1;
        }
        goto LABEL_48;
      }
LABEL_53:
      sub_B7076C(Instance, v15);
    }
    goto LABEL_44;
  }
LABEL_48:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = &StringLiteral_2581/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_52:
  v38 = LocalizationManager__Get((System_String_o *)*v37, 0LL);
  *text = v38;
  sub_B70630((BattleServantConfConponent_o *)text, (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
  return 0;
}


BattleActionData_o *__fastcall BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x22
  DataManager_o *skillId; // x0
  __int64 v7; // x1
  System_Int32_array **skillInfo; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x21
  DataManager_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleActionData_c *v17; // x0
  System_Int32_array **ptTarget; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x25
  const MethodInfo *v27; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v29; // x24
  DataVals_array *v30; // x25
  BattleActionData_o *v31; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v35; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_4354FF6 & 1) == 0 )
  {
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionLogManagerInterface_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B70694(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_DataVals___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_DataVals__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354FF6 = 1;
  }
  v5 = sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !task )
    goto LABEL_30;
  skillInfo = (System_Int32_array **)task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_30;
  skillId = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               skillId,
                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_30;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !v9 )
    goto LABEL_30;
  skillId = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v9,
                               (int32_t)skillId,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v5 )
    goto LABEL_30;
  v10 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0LL);
  *(_DWORD *)(v5 + 32) = -1;
  if ( !v10 )
    goto LABEL_30;
  *(_DWORD *)(v5 + 48) = HIDWORD(v10->fields.datalist);
  v17 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v17 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v5 + 56) = v17->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = (System_Int32_array **)task->fields.ptTarget;
  *(_QWORD *)(v5 + 40) = ptTarget;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), ptTarget, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v5 + 144) = skillInfo;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 144), skillInfo, v19, v20, v21, v22, v23, v24);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_30;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v25 )
    goto LABEL_30;
  System_Collections_Generic_List_int___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)v10->fields.saveNameList,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v10, 0LL);
  if ( !v26 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v10->fields.m_CachedPtr,
    task->fields.ptTarget,
    v25,
    (System_Collections_Generic_List_DataVals__o *)v26,
    v27);
  logicfunction = this->fields.logicfunction;
  v29 = System_Collections_Generic_List_int___ToArray(
          v25,
          (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v30 = (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !logicfunction )
    goto LABEL_30;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v5,
                               v29,
                               v30,
                               0,
                               1,
                               0,
                               0,
                               0,
                               1,
                               1,
                               0LL,
                               (int32_t)skillId,
                               0LL);
  if ( !this->fields.logic )
    goto LABEL_30;
  v31 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_30;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_30;
  klass = actionLogManager->klass;
  if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v35;
      p_offset += 2;
      if ( v35 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_23:
    p_method = sub_B08590(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v10, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v10, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v31;
      }
    }
LABEL_30:
    sub_B7076C(skillId, v7);
  }
  return v31;
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  __int64 v6; // x1
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-8h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_31281204(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_B7076C(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_31281204(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  __int64 skillId; // x0
  BattleActionData_o *v11; // x22
  BattleActionData_o *v12; // x25
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleBoostItemInfoData_o *skillInfo; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x21
  SkillEntity_o *Entity; // x27
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BattleActionData_c *v23; // x8
  struct BattleActionData_StaticFields **p_static_fields; // x9
  __int64 v25; // x10
  BattleData_o *data; // x23
  __int64 v27; // x28
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v29; // x23
  BattleServantData_o *EnemyServantData; // x0
  const MethodInfo *v31; // x1
  SkillEntity_o *v32; // x21
  __int64 v33; // x23
  __int64 v34; // x27
  BattleData_o *v35; // x23
  const MethodInfo *v36; // x1
  System_Int32_array **ptTarget; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **Name; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array *v63; // x23
  System_Object_array *v64; // x28
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  BattleServantConfConponent_o *p_motionMessage; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  int32_t actortype; // w8
  System_Int32_array **effectList; // x1
  int v76; // w10
  DataVals_array *v77; // x26
  unsigned int v78; // w8
  __int64 v79; // x10
  SkillEntity_o *v80; // x24
  BattleLogicFunction_o *logicfunction; // x23
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool isBuffUpdate; // w21
  int32_t ActorId; // w0
  const MethodInfo *v86; // x6
  struct BattleData_o *v87; // x8
  bool v88; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x23
  BattleLogicFunction_o *v91; // x23
  System_Int32_array *v92; // x27
  DataVals_array *v93; // x28
  int32_t v94; // w0
  UnityEngine_Object_o *v95; // x23
  int32_t v96; // w26
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct BattleData_o *v105; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v108; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  System_Int32_array **v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array ***v126; // x25
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x1
  System_Int32_array **v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  int32_t type; // w21
  BattleData_o *v142; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v144; // x1
  const MethodInfo *v145; // x4
  _BOOL4 v146; // w8
  BattleData_o *v148; // x23
  BattleServantData_o *v149; // x0
  BattleServantData_o *v150; // x25
  BattleData_o *v151; // x23
  int32_t uniqueId; // w26
  const MethodInfo *v153; // x5
  struct BattleLogic_o *v154; // x23
  BattleLogicTask_array *v155; // x0
  BattleLogicTask_o *v156; // x23
  BattleData_o *v157; // x23
  BattleLogicTask_o *v158; // x22
  const MethodInfo *v159; // x1
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  struct BattleLogic_o *v166; // x8
  BattlePerformance_o *perf; // x22
  float CutinAdditionalTime; // s0
  struct BattleData_o *v169; // x8
  struct BattlePerformance_o *v170; // x8
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  CheckUpdateShiftTask_o *v177; // x21
  __int64 v178; // x0
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-78h]
  SkillLvEntity_o *v181; // [xsp+48h] [xbp-68h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-60h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16

  if ( (byte_4354FF3 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_int___);
    sub_B70694(&BattleActionData_TypeInfo);
    sub_B70694(&BattleActionLogManagerInterface_TypeInfo);
    sub_B70694(&BattleBoostItemInfoData_TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&CheckUpdateShiftTask_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&BattleLogicFunction_FunctionArgument_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354FF3 = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_157;
  BattleData__ResetWasAttackTargetId((BattleData_o *)skillId, 0LL);
  v11 = (BattleActionData_o *)sub_B70764(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_157;
  v12 = BattleActionData__AddDisplayTriggerIntervalBuff(v11, task, 0LL);
  *baseActionData = v12;
  sub_B70630((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
  if ( !task )
    goto LABEL_157;
  if ( !v12 )
    goto LABEL_157;
  v12->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_157;
  skillId = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)skillId,
                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_157;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v20 )
    goto LABEL_157;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v20,
                              skillId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_157;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)skillId,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_157;
  skillId = (__int64)SkillLvMaster__GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       skillId,
                       skillInfo->fields.skilllv,
                       0LL);
  v181 = (SkillLvEntity_o *)skillId;
  v12->fields.isCounter = task->fields.isCounter;
  v23 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v23 = BattleActionData_TypeInfo;
  }
  p_static_fields = &v23->static_fields;
  v12->fields.type = v23->static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      p_static_fields = &BattleActionData_TypeInfo->static_fields;
    }
    v12->fields.type = (*p_static_fields)->TYPE_BOOSTSKILL;
    v12->fields.imageId = skillInfo->fields.itemImageId;
    v25 = *(&BattleBoostItemInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v25
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[v25 - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( (skillId & 1) != 0 )
        v12->fields.noOperation = 1;
    }
  }
  skillLvMst = MasterData_WarQuestSelectionMaster;
  if ( !task->fields.checkAlive )
    goto LABEL_161;
  data = this->fields.data;
  skillId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_157;
  skillId = (__int64)BattleData__getServantData(data, skillId, 0LL);
  if ( !skillId
    || (skillId = BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL), v27 = 0LL, (skillId & 1) != 0) )
  {
LABEL_161:
    if ( task->fields.isForcedSpeedOne )
    {
      isForcedSkillSpeedOne = 1;
    }
    else
    {
      if ( !Entity )
        goto LABEL_157;
      if ( !SkillEntity__isForcedSkillSpeedOne(Entity, 0LL) )
        goto LABEL_34;
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_157;
      if ( BattleData__checkEnablePlaySpeedOneFromSkillIdList((BattleData_o *)skillId, Entity->fields.id, 0LL) )
        isForcedSkillSpeedOne = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
      else
LABEL_34:
        isForcedSkillSpeedOne = 0;
    }
    skillId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v12->fields.actorId = skillId;
    if ( !v181 )
      goto LABEL_157;
    v29 = this->fields.data;
    skillId = SkillLvEntity__GetActNpcServantId(v181, 0LL);
    if ( !v29 )
      goto LABEL_157;
    EnemyServantData = BattleData__getEnemyServantData(v29, skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v32 = Entity;
      v34 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v184.fields.currentCryptoKey = v34;
      *(_QWORD *)&v184.fields.fakeValue = v33;
      Entity = v32;
      v12->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v184, 0LL);
    }
    v35 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, v31);
    if ( !v35 )
      goto LABEL_157;
    skillId = BattleData__getServantId(v35, skillId, 0LL);
    if ( !Entity )
      goto LABEL_157;
    v12->fields.motionId = SkillEntity__GetMotionId(Entity, skillId, 0LL);
    v12->fields.targetId = BattleLogicTask__getTarget(task, v36);
    ptTarget = (System_Int32_array **)task->fields.ptTarget;
    v12->fields.pttargetIds = (struct System_Int32_array *)ptTarget;
    sub_B70630((BattleServantConfConponent_o *)&v12->fields.pttargetIds, ptTarget, v38, v39, v40, v41, v42, v43);
    Name = (System_Int32_array **)SkillEntity__getName(Entity, 0LL);
    v12->fields.skillMessage = (struct System_String_o *)Name;
    sub_B70630((BattleServantConfConponent_o *)&v12->fields.skillMessage, Name, v45, v46, v47, v48, v49, v50);
    v12->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_B70630(
      (BattleServantConfConponent_o *)&v12->fields.skillInfo,
      (System_Int32_array **)skillInfo,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    v12->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v12->fields.checkRevengeId = task->fields.checkRevengeId;
    if ( task->fields.gimmickIndexArray )
    {
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_157;
      skillId = (__int64)BattleData__GetGimmickStartVoiceArray((BattleData_o *)skillId, 0LL);
      if ( !this->fields.data )
        goto LABEL_157;
      v63 = (System_String_array *)skillId;
      skillId = (__int64)BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
      if ( !this->fields.data )
        goto LABEL_157;
      v64 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
      BattleActionData__SetGimmickData(v12, task->fields.gimmickIndexArray, v63, v64, GimmickAnimTypeArray, 0LL);
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields.m_stringLength >= 1 )
    {
      v12->fields.motionMessage = motionMessage;
      p_motionMessage = (BattleServantConfConponent_o *)&v12->fields.motionMessage;
    }
    else
    {
      v12->fields.motionMessage = 0LL;
      p_motionMessage = (BattleServantConfConponent_o *)&v12->fields.motionMessage;
      motionMessage = 0LL;
    }
    sub_B70630(p_motionMessage, (System_Int32_array **)motionMessage, v57, v58, v59, v60, v61, v62);
    actortype = task->fields.actortype;
    if ( actortype == 5 || actortype == 1 )
      BattleActionData__setStateField(v12, 0LL);
    effectList = (System_Int32_array **)Entity->fields.effectList;
    v12->fields.effectlist = (struct System_Int32_array *)effectList;
    sub_B70630((BattleServantConfConponent_o *)&v12->fields.effectlist, effectList, v68, v69, v70, v71, v72, v73);
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_157;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (__int64)SkillLvEntity__getDataValsList(v181, 0LL);
      if ( !skillId )
        goto LABEL_157;
      v76 = *(_DWORD *)(skillId + 24);
      v77 = (DataVals_array *)skillId;
      if ( v76 >= 1 )
      {
        v78 = 0;
        do
        {
          if ( v78 >= v76 )
          {
            v178 = sub_B70798(skillId);
            sub_B70738(v178, 0LL);
          }
          v79 = *(_QWORD *)(skillId + 8LL * (int)v78 + 32);
          if ( !v79 )
            goto LABEL_157;
          *(_BYTE *)(v79 + 72) = 1;
          v76 = *(_DWORD *)(skillId + 24);
        }
        while ( (int)++v78 < v76 );
      }
      v80 = Entity;
      logicfunction = this->fields.logicfunction;
      funcId = v181->fields.funcId;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_157;
      skillId = (__int64)BattleLogicFunction__procList(
                           logicfunction,
                           v12,
                           funcId,
                           v77,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           1,
                           0LL,
                           skillId,
                           0LL);
    }
    else
    {
      changeTDCommandType = skillInfo->fields.changeTDCommandType;
      if ( (changeTDCommandType & 0x80000000) == 0 )
        v12->fields.commandType = changeTDCommandType;
      functionIdArray = v181->fields.funcId;
      skillId = (__int64)SkillLvEntity__getDataValsList(v181, 0LL);
      isBuffUpdate = 1;
      dataValsArray = (DataVals_array *)skillId;
      if ( baseVals && fromSkillCopyFunc )
      {
        ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
        if ( !BattleLogicSkill__SetSkillCopyFunction(
                this,
                v181,
                baseVals,
                &functionIdArray,
                &dataValsArray,
                ActorId,
                v86) )
          return 0LL;
        skillId = (__int64)this->fields.data;
        if ( !skillId )
          goto LABEL_157;
        skillId = BattleData__isEnemyID((BattleData_o *)skillId, v12->fields.actorId, 0LL);
        if ( (skillId & 1) != 0 )
        {
          v87 = this->fields.data;
          if ( !v87 )
            goto LABEL_157;
          v88 = v87->fields.currentTurn == 0;
        }
        else
        {
          v88 = 0;
        }
        isBuffUpdate = 0;
        v12->fields.isReversalShortBuffTurn = v88;
      }
      if ( skillInfo->fields.type == 1 )
      {
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_B70764(BattleLogicFunction_FunctionArgument_TypeInfo);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_157;
        argument->fields.grantSkillType = skillInfo->fields.type;
      }
      else
      {
        argument = 0LL;
      }
      if ( task->fields.isSideEffectTriggerSkill )
      {
        if ( !argument )
        {
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_B70764(BattleLogicFunction_FunctionArgument_TypeInfo);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        }
        overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
        if ( !overwriteFuncSideEffectArg )
        {
          overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B70764(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
          BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
            (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
            0LL);
        }
        if ( !argument )
          goto LABEL_157;
        v80 = Entity;
        BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(argument, overwriteFuncSideEffectArg, 0LL);
      }
      else
      {
        v80 = Entity;
      }
      v91 = this->fields.logicfunction;
      v93 = dataValsArray;
      v92 = functionIdArray;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v91 )
        goto LABEL_157;
      skillId = (__int64)BattleLogicFunction__procList(
                           v91,
                           v12,
                           v92,
                           v93,
                           0,
                           1,
                           0,
                           0,
                           0,
                           isBuffUpdate,
                           1,
                           argument,
                           skillId,
                           0LL);
    }
    v27 = skillId;
    if ( task->fields.actortype == 5 )
    {
      if ( !skillId )
        goto LABEL_157;
      v94 = BasicHelper__IndexValue_int__29224064(
              *(System_Collections_Generic_List_T__o **)(skillId + 288),
              0,
              0,
              (const MethodInfo_1BDEC80 *)Method_BasicHelper_IndexValue_int___);
      v95 = *(UnityEngine_Object_o **)(v27 + 72);
      v96 = v94;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      skillId = UnityEngine_Object__op_Equality(v95, 0LL, 0LL);
      if ( v96 >= 1 && (skillId & 1) != 0 )
      {
        logic = this->fields.logic;
        if ( !logic )
          goto LABEL_157;
        skillId = (__int64)logic->fields.perf;
        if ( !skillId )
          goto LABEL_157;
        ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                     (BattlePerformance_o *)skillId,
                                                     v96,
                                                     0LL);
        *(_QWORD *)(v27 + 72) = ServantGameObject;
        sub_B70630((BattleServantConfConponent_o *)(v27 + 72), ServantGameObject, v99, v100, v101, v102, v103, v104);
      }
    }
    ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
      skillInfo,
      skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
    BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_157;
    BattleLogic__updateConditionsBuffAll((BattleLogic_o *)skillId, 0LL);
    if ( !v27 )
      goto LABEL_157;
    *(_BYTE *)(v27 + 92) = 0;
    skillId = (__int64)this->fields.data;
    if ( !skillId )
      goto LABEL_157;
    BattleData__setCommandAttack((BattleData_o *)skillId, 0, 0, 0LL);
    v105 = this->fields.data;
    if ( !v105 )
      goto LABEL_157;
    actionLogManager = v105->fields.actionLogManager;
    if ( !actionLogManager )
      goto LABEL_157;
    klass = actionLogManager->klass;
    if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
    {
      v108 = 0LL;
      p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
      {
        ++v108;
        p_offset += 2;
        if ( v108 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
          goto LABEL_111;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_111:
      p_method = sub_B08590(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
    }
    (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
      actionLogManager,
      task,
      *(_QWORD *)(p_method + 8));
    if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v27, 0LL) )
    {
      v118 = *(System_Int32_array ***)(v27 + 120);
      *(_QWORD *)(v27 + 440) = v118;
      sub_B70630((BattleServantConfConponent_o *)(v27 + 440), v118, v112, v113, v114, v115, v116, v117);
      v119 = (System_Int32_array **)StringLiteral_1/*""*/;
      *(_QWORD *)(v27 + 120) = StringLiteral_1/*""*/;
      sub_B70630((BattleServantConfConponent_o *)(v27 + 120), v119, v120, v121, v122, v123, v124, v125);
      v126 = (System_Int32_array ***)(v27 + 128);
      if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v27 + 128), 0LL) )
      {
        v133 = *v126;
        *(_QWORD *)(v27 + 440) = *v126;
        sub_B70630((BattleServantConfConponent_o *)(v27 + 440), v133, v127, v128, v129, v130, v131, v132);
        v134 = (System_Int32_array **)StringLiteral_1/*""*/;
        *v126 = (System_Int32_array **)StringLiteral_1/*""*/;
        sub_B70630((BattleServantConfConponent_o *)(v27 + 128), v134, v135, v136, v137, v138, v139, v140);
      }
    }
    type = skillInfo->fields.type;
    v142 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, v111);
    if ( !v142 )
      goto LABEL_157;
    ServantData = BattleData__getServantData(v142, skillId, 0LL);
    v146 = type != 1 && !ServantData || SkillLvEntity__IsNoTargetSkipSkill(v181, 0LL);
    if ( (v146 & (*(unsigned __int8 *)(v27 + 240) ^ 1)) == 0 && (!*(_BYTE *)(v27 + 297) || *(_BYTE *)(v27 + 298)) )
    {
      if ( task->fields.isCanCounterTask )
      {
        v148 = this->fields.data;
        skillId = BattleLogicTask__getActorId(task, v144);
        if ( !v148 )
          goto LABEL_157;
        v149 = BattleData__getServantData(v148, skillId, 0LL);
        if ( v149 )
        {
          v150 = v149;
          (*(void (__fastcall **)(__int64, struct BattleData_o *, _QWORD))(*(_QWORD *)v27 + 440LL))(
            v27,
            this->fields.data,
            *(_QWORD *)(*(_QWORD *)v27 + 448LL));
          skillId = *(_QWORD *)(v27 + 288);
          if ( !skillId )
            goto LABEL_157;
          v151 = this->fields.data;
          uniqueId = v150->fields.uniqueId;
          skillId = (__int64)System_Collections_Generic_List_int___ToArray(
                               (System_Collections_Generic_List_int__o *)skillId,
                               (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v151 )
            goto LABEL_157;
          BattleData__SetWasAttackTargetIdList(v151, uniqueId, (System_Int32_array *)skillId, 0LL);
          v154 = this->fields.logic;
          if ( !v154 )
            goto LABEL_157;
          skillId = (__int64)v154->fields.logicnomal;
          if ( !skillId )
            goto LABEL_157;
          v155 = BattleLogicNomal__taskCounterFunc(
                   (BattleLogicNomal_o *)skillId,
                   this->fields.data,
                   !v150->fields.isEnemy,
                   1,
                   0,
                   v153);
          BattleLogic__addBattleLogicTask(v154, v155, 0LL);
        }
      }
      v156 = BattleLogicSkill__MakeAddInvokeSkillTask(this, skillLvMst, v181, task, v145);
      skillId = SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v181, 0LL);
      if ( this->fields.logic )
      {
        if ( (skillId & 1) != 0 )
          BattleLogic__AddTaskTargetTaskAfter(this->fields.logic, task, v156, 0LL);
        else
          BattleLogic__AddBattleLogicTask(this->fields.logic, v156, 0LL);
        v157 = this->fields.data;
        skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                    skillInfo,
                    skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v157 )
        {
          BattleData__AddUseSkillId(v157, skillId, 0LL);
          if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v27, 0LL) )
          {
            v158 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v158, v159);
            if ( !v158 )
              goto LABEL_157;
            v158->fields.actiontype = 24;
            skillId = (__int64)this->fields.logic;
            if ( !skillId )
              goto LABEL_157;
            BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v158, 0LL);
          }
          if ( SkillEntity__GetCutinAdditionalTime(v80, 0LL) > 0.0 )
          {
            skillId = SkillEntity__getSkillCutInId(v80, 0LL);
            if ( !(_DWORD)skillId )
            {
              v166 = this->fields.logic;
              if ( !v166 )
                goto LABEL_157;
              perf = v166->fields.perf;
              CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(v80, 0LL);
              if ( !perf )
                goto LABEL_157;
              BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
              if ( *(_QWORD *)(v27 + 120) )
              {
                v169 = this->fields.data;
                if ( !v169 )
                  goto LABEL_157;
                v170 = v169->fields.perf;
                if ( !v170 )
                  goto LABEL_157;
                skillId = (__int64)v170->fields.infoComp;
                if ( !skillId )
                  goto LABEL_157;
                BattleInformationComponent__showCommonMessage(
                  (BattleInformationComponent_o *)skillId,
                  (BattleActionData_o *)v27,
                  0LL);
                *(_QWORD *)(v27 + 120) = 0LL;
                sub_B70630((BattleServantConfConponent_o *)(v27 + 120), 0LL, v171, v172, v173, v174, v175, v176);
                *(_BYTE *)(v27 + 308) = 1;
              }
            }
          }
          if ( task->fields.IsNotShowSkillMessage )
          {
            *(_QWORD *)(v27 + 120) = 0LL;
            sub_B70630((BattleServantConfConponent_o *)(v27 + 120), 0LL, v160, v161, v162, v163, v164, v165);
            *(_BYTE *)(v27 + 308) = 1;
          }
          if ( SkillEntity__IsCheckUpdateShiftServant(v80, 0LL) )
          {
            v177 = (CheckUpdateShiftTask_o *)sub_B70764(CheckUpdateShiftTask_TypeInfo);
            CheckUpdateShiftTask___ctor(v177, 0LL);
            skillId = (__int64)this->fields.logic;
            if ( !skillId )
              goto LABEL_157;
            BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, (BattleLogicTask_o *)v177, 0LL);
          }
          return (BattleActionData_o *)v27;
        }
      }
LABEL_157:
      sub_B7076C(skillId, task);
    }
    return 0LL;
  }
  return (BattleActionData_o *)v27;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v4; // x20
  BattleData_o *v5; // x21
  const MethodInfo *v6; // x2
  int32_t HitGimmickSkillId; // w0
  int32_t v8; // w22
  __int64 v9; // x21
  __int64 v10; // x20
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleData_o *v18; // x8
  System_Int32_array *v19; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x3
  BattleData_o *v23; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_4354FF9 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask___TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_4354FF9 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v4 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v5 = data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0LL);
  if ( !v4 )
    goto LABEL_26;
  if ( !v4->fields.rootfsm )
    return 0LL;
  if ( !v5 )
    goto LABEL_26;
  if ( !v5->fields.rootfsm )
    return 0LL;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.rootfsm )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, (System_Int32_array *)v5, v6);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v8 = HitGimmickSkillId;
  v9 = sub_B70764(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_26;
  *(_DWORD *)(v9 + 24) = -1;
  *(_QWORD *)(v9 + 16) = 20LL;
  if ( (unsigned int)v8 >= LODWORD(v4->fields.rootfsm) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 376LL))(
    v9,
    *((unsigned int *)&v4->fields.fsm + v8),
    *(_QWORD *)(*(_QWORD *)v9 + 384LL));
  *(_DWORD *)(v9 + 36) = 1;
  v10 = sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v10, v11);
  data = (BattleData_o *)sub_B706AC(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.rootfsm) )
    goto LABEL_27;
  LODWORD(data->fields.fsm) = v8;
  if ( !v10 )
    goto LABEL_26;
  *(_QWORD *)(v10 + 136) = data;
  sub_B70630((BattleServantConfConponent_o *)(v10 + 136), (System_Int32_array **)data, v12, v13, v14, v15, v16, v17);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v18 = this->fields.data) == 0LL)
    || (v19 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v18, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v10,
          (BattleSkillInfoData_o *)v9,
          v19,
          FieldPlayerServantIDList,
          0,
          0,
          v21),
        BattleLogicTask__setActor((BattleLogicTask_o *)v10, 5, -1, v22),
        (data = (BattleData_o *)sub_B706AC(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_B7076C(data, method);
  }
  v23 = data;
  data = (BattleData_o *)sub_B70754(v10, data->klass->_1.element_class);
  if ( !data )
  {
    v32 = sub_B7078C(0LL);
    sub_B70738(v32, 0LL);
  }
  if ( !LODWORD(v23->fields.rootfsm) )
  {
LABEL_27:
    v31 = sub_B70798(data);
    sub_B70738(v31, 0LL);
  }
  v23->fields.fsm = (struct PlayMakerFSM_o *)v10;
  sub_B70630((BattleServantConfConponent_o *)&v23->fields.fsm, (System_Int32_array **)v10, v24, v25, v26, v27, v28, v29);
  return (BattleLogicTask_array *)v23;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getQuestBehaviorSkillTask(
        BattleLogicSkill_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  BattleLogicTask_array *result; // x0
  QuestBehaviorMaster_o *v6; // x20
  int32_t v7; // w21
  int32_t Phase; // w0
  BattleLogicTask_array *v9; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x25
  BattleLogicTask_o **m_Items; // x26
  __int64 v13; // x22
  unsigned int v14; // w0
  BattleLogicTask_o *v15; // x23
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x3
  __int64 v22; // x0

  if ( (byte_4354FF8 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354FF8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  result = (BattleLogicTask_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( result )
  {
    v6 = (QuestBehaviorMaster_o *)result;
    Instance = (DataManager_o *)this->fields.data;
    if ( !Instance )
      goto LABEL_24;
    Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
    if ( !this->fields.data )
      goto LABEL_24;
    v7 = (int)Instance;
    Phase = BattleData__getPhase(this->fields.data, 0LL);
    result = (BattleLogicTask_array *)QuestBehaviorMaster__getBattleSkill(v6, v7, Phase, 0LL);
    if ( result )
    {
      v9 = result;
      v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v10,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      if ( (int)v9->max_length >= 1 )
      {
        v11 = 0LL;
        m_Items = v9->m_Items;
        while ( 1 )
        {
          v13 = sub_B70764(BattleSkillInfoData_TypeInfo);
          BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v13, 0LL);
          if ( !v13 )
            break;
          *(_DWORD *)(v13 + 24) = -1;
          *(_QWORD *)(v13 + 16) = 20LL;
          if ( (unsigned int)v11 >= v9->max_length )
            goto LABEL_25;
          Instance = (DataManager_o *)m_Items[v11];
          if ( !Instance )
            break;
          v14 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
          Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 376LL))(
                                        v13,
                                        v14,
                                        *(_QWORD *)(*(_QWORD *)v13 + 384LL));
          if ( (unsigned int)v11 >= v9->max_length )
          {
LABEL_25:
            v22 = sub_B70798(Instance);
            sub_B70738(v22, 0LL);
          }
          Instance = (DataManager_o *)m_Items[v11];
          if ( !Instance )
            break;
          *(_DWORD *)(v13 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
          v15 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v15, v16);
          if ( !v15 )
            break;
          BattleLogicTask__setActor(v15, 5, -1, v17);
          Instance = (DataManager_o *)this->fields.data;
          if ( !Instance )
            break;
          Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          if ( !this->fields.data )
            break;
          v18 = (System_Int32_array *)Instance;
          FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
          BattleLogicTask__setActionSkill(v15, (BattleSkillInfoData_o *)v13, v18, FieldPlayerServantIDList, 0, 0, v20);
          BattleLogicTask__setActor(v15, 5, -1, v21);
          if ( !v10 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          if ( (int)++v11 >= (signed int)v9->max_length )
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                              (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
LABEL_24:
        sub_B7076C(Instance, v4);
      }
      if ( !v10 )
        goto LABEL_24;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
  }
  return result;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__taskCommandSpell(
        BattleLogicSkill_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_Int32_array *ptTargetList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  BattleLogicTask_o *v8; // x22
  const MethodInfo *v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4

  if ( (byte_4354FF2 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FF2 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v8 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v8, v9);
  if ( !v8 || (BattleLogicTask__setCommandSpell(v8, skillId, 0LL, ptTargetList, v12), !v7) )
    sub_B7076C(v10, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicSkill__taskSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_Int32_array *ptTargetList,
        System_Int32_array *enemyTargetList,
        bool checkAlive,
        bool checkRevengeId,
        bool isCanCounterSkill,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  BattleLogicTask_o *v16; // x21
  const MethodInfo *v17; // x1
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  const MethodInfo *v20; // x6
  bool v21; // w4
  bool v22; // w5
  BattleLogicTask_o *v23; // x0
  BattleSkillInfoData_o *v24; // x1
  System_Int32_array *v25; // x2
  struct BattleData_o *v26; // x8
  int32_t globaltargetId; // w26
  BattleLogicTarget_o *logictarget; // x26
  int32_t v29; // w27
  const MethodInfo *v30; // x4
  Il2CppClass *v31; // x0
  BattleLogicTarget_o *v32; // x26
  int32_t v33; // w27
  const MethodInfo *v34; // x3
  bool isPlayerID; // w0
  int32_t v36; // w2
  int32_t v37; // w1
  __int64 v39; // x0
  const MethodInfo *v40; // [xsp+10h] [xbp-60h]

  if ( (byte_4354FF1 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4354FF1 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v16, v17);
  if ( !skillInfo )
    goto LABEL_35;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_35;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_35;
      v16->fields.isCanCounterTask = isCanCounterSkill;
      v16->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    if ( !v16 )
      goto LABEL_35;
    v21 = checkAlive;
    v22 = checkRevengeId;
    v23 = v16;
    v24 = skillInfo;
    v25 = enemyTargetList;
  }
  else
  {
    svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
    if ( (_DWORD)svtUniqueId == -1 )
      goto LABEL_15;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_35;
    data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    if ( (data & 1) != 0 )
    {
LABEL_15:
      v26 = this->fields.data;
      if ( !v26 )
        goto LABEL_35;
      globaltargetId = v26->fields.globaltargetId;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
      {
        logictarget = this->fields.logictarget;
        v29 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_35;
        globaltargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v29,
                           v29 == -1,
                           (System_Int32_array *)data,
                           v30);
      }
      v31 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_35;
      v32 = this->fields.logictarget;
      v33 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v32 )
        goto LABEL_35;
      globaltargetId = BattleLogicTarget__getTargetAiAct(
                         v32,
                         1,
                         v33,
                         0LL,
                         (System_Int32_array *)data,
                         1,
                         0,
                         0LL,
                         0LL,
                         1,
                         v40);
      v31 = int___TypeInfo;
    }
    data = sub_B706AC(v31, 1LL);
    if ( !data )
      goto LABEL_35;
    v25 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
    {
      v39 = sub_B70798(data);
      sub_B70738(v39, 0LL);
    }
    *(_DWORD *)(data + 32) = globaltargetId;
    if ( !v16 )
LABEL_35:
      sub_B7076C(data, svtUniqueId);
    v21 = checkAlive;
    v22 = checkRevengeId;
    v23 = v16;
    v24 = skillInfo;
  }
  BattleLogicTask__setActionSkill(v23, v24, v25, ptTargetList, v21, v22, v20);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v37 = 1;
    v36 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_35;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v36 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v37 = 2;
    else
      v37 = 3;
  }
  BattleLogicTask__setActor(v16, v37, v36, v34);
  if ( !v15 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v15,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicSkill_SkillExecArgs___ctor(BattleLogicSkill_SkillExecArgs_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill_SkillExecArgs__get_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._AllowUpdateFieldServantResultStatus_k__BackingField;
}


bool __fastcall BattleLogicSkill_SkillExecArgs__get_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveActorUnfixedBuff_k__BackingField;
}


bool __fastcall BattleLogicSkill_SkillExecArgs__get_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._RemoveAllUnfixedBuff_k__BackingField;
}


int32_t __fastcall BattleLogicSkill_SkillExecArgs__get_Timing(
        BattleLogicSkill_SkillExecArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._Timing_k__BackingField;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_AllowUpdateFieldServantResultStatus(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._AllowUpdateFieldServantResultStatus_k__BackingField = value;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_RemoveActorUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveActorUnfixedBuff_k__BackingField = value;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_RemoveAllUnfixedBuff(
        BattleLogicSkill_SkillExecArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._RemoveAllUnfixedBuff_k__BackingField = value;
}


void __fastcall BattleLogicSkill_SkillExecArgs__set_Timing(
        BattleLogicSkill_SkillExecArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Timing_k__BackingField = value;
}


void __fastcall BattleLogicSkill___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4351421 & 1) == 0 )
  {
    sub_B70694(&BattleLogicSkill___c_TypeInfo);
    byte_4351421 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicSkill___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleLogicSkill___c___ctor(BattleLogicSkill___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__10_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_B7076C(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


void __fastcall BattleLogicSkill___c__DisplayClass12_0___ctor(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__0(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351422 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4351422 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_11:
    sub_B7076C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v8, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v8; // x0
  BattleLogicSkill___c__DisplayClass12_0_o *v10; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  double v13; // d0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351423 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    byte_4351423 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_B7076C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v8, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                               (System_Type_o *)key,
                                                                                               (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_14;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions) >= val;
  v10 = (BattleLogicSkill___c__DisplayClass12_0_o *)sub_B70A60(conditions);
  return BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__2(v10, v11, v13, v12);
}


bool __fastcall BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v8; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351424 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4351424 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B7076C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v8, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v8; // x0
  bool v9; // w0
  BattleLogicSkill___c__DisplayClass16_0_o *v10; // x0
  const MethodInfo *v11; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351425 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long_TypeInfo);
    byte_4351425 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_B7076C(conditions, key);
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v8, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                               (System_Type_o *)key,
                                                                                               (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions) >= val;
  v10 = (BattleLogicSkill___c__DisplayClass16_0_o *)sub_B70A60(conditions);
  BattleLogicSkill___c__DisplayClass16_0___ctor(v10, v11);
  return v9;
}


void __fastcall BattleLogicSkill___c__DisplayClass16_0___ctor(
        BattleLogicSkill___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass16_0___SetSkillCopyFunction_b__0(
        BattleLogicSkill___c__DisplayClass16_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.funcId == x;
}


bool __fastcall BattleLogicSkill___c__DisplayClass16_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass16_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_B7076C(0LL, type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0LL) == type;
}


bool __fastcall BattleLogicSkill___c__DisplayClass16_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass16_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_B7076C(this, type);
  return funcEntity->fields.funcType == type;
}


void __fastcall BattleLogicSkill___c__DisplayClass17_0___ctor(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass17_0___IsNotSkillCopyTargetIndividuality_b__0(
        BattleLogicSkill___c__DisplayClass17_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.individuality == x;
}