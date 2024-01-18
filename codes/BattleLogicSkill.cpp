void __fastcall BattleLogicSkill___ctor(BattleLogicSkill_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WeightRate_int__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  unsigned __int64 v12; // x21
  int32_t Next; // w1
  __int64 v15; // x0

  if ( (byte_4189B4F & 1) == 0 )
  {
    sub_B2C35C(&Method_WeightRate_int___ctor__, rateArray);
    sub_B2C35C(&Method_WeightRate_int__getData__, v4);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v6);
    sub_B2C35C(&WeightRate_int__TypeInfo, v7);
    byte_4189B4F = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B2C460(v9);
        sub_B2C400(v15, 0LL);
      }
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = rateArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_13:
    sub_B2C434(v9, v10);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
}


bool __fastcall BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  unsigned __int64 v12; // x23
  BattleLogicSkill___c__DisplayClass16_0_o *v13; // x21
  System_Func_int__bool__o *v14; // x22
  __int64 v16; // x0

  if ( (byte_4189B51 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, actorIndividualities);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v6);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v7);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__, v8);
    sub_B2C35C(&BattleLogicSkill___c__DisplayClass16_0_TypeInfo, v9);
    byte_4189B51 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0LL) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !notSkillCopyTargetIndividualities )
LABEL_15:
    sub_B2C434(IsNullOrEmpty, v11);
  if ( (int)notSkillCopyTargetIndividualities->max_length < 1 )
    return 0;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = (BattleLogicSkill___c__DisplayClass16_0_o *)sub_B2C42C(BattleLogicSkill___c__DisplayClass16_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass16_0___ctor(v13, 0LL);
    if ( v12 >= notSkillCopyTargetIndividualities->max_length )
    {
      v16 = sub_B2C460(IsNullOrEmpty);
      sub_B2C400(v16, 0LL);
    }
    if ( !v13 )
      goto LABEL_15;
    v13->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v12 + 1];
    v14 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v14,
      (Il2CppObject *)v13,
      Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__24273940(
           actorIndividualities,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496) )
    {
      return 1;
    }
    if ( (__int64)++v12 >= (int)notSkillCopyTargetIndividualities->max_length )
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
  if ( (byte_4189B49 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_B2C35C(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_4189B49 = 1;
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
          v17 = (TempBattleSkillInfoData_o *)sub_B2C42C(TempBattleSkillInfoData_TypeInfo);
          TempBattleSkillInfoData___ctor(v17, v16, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v17, actortype, isPlayerID, v18);
        }
      }
    }
LABEL_13:
    sub_B2C434(this, skillLvMst);
  }
  return (BattleLogicTask_o *)this;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicSkill__SetCommandSpellAddFunctionData(
        BattleLogicSkill_o *this,
        int32_t commandSpellId,
        System_Int32_array *targetIds,
        System_Collections_Generic_List_int__o *funcIdList,
        System_Collections_Generic_List_DataVals__o *dataValsList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BalanceConfig_c *v16; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_25746984; // x0
  __int64 v19; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v24; // x22
  unsigned int v25; // w24
  AddSkillData_o *v26; // x8
  __int64 v27; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4189B52 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_B2C35C(&CondType_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__AddRange__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    byte_4189B52 = 1;
  }
  entity = 0LL;
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v16->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25746984 = (BattleData_o *)CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_25746984 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_32;
    if ( !targetIds->max_length )
      goto LABEL_33;
    IsQuestClear_25746984 = this->fields.data;
    if ( !IsQuestClear_25746984 )
      goto LABEL_32;
    ServantData = BattleData__getServantData(IsQuestClear_25746984, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v21 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_25746984 = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v21->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_32:
      sub_B2C434(IsQuestClear_25746984, v19);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v24 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_25746984;
      v25 = 0;
      while ( v25 < max_length )
      {
        v26 = classBoardAddCommandSpells->m_Items[v25];
        if ( !v26 || !v24 )
          goto LABEL_32;
        IsQuestClear_25746984 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  v26->fields.id,
                                                  commandSpellId,
                                                  v26->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_25746984 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_32;
          if ( !funcIdList )
            goto LABEL_32;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_25746984 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_32;
          IsQuestClear_25746984 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_32;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_25746984,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v25 >= max_length )
          return;
      }
LABEL_33:
      v27 = sub_B2C460(IsQuestClear_25746984);
      sub_B2C400(v27, 0LL);
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
  System_Collections_ICollection_o *v30; // x25
  BattleServantData_o *v31; // x20
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x27
  unsigned __int64 v34; // x19
  __int64 v35; // x24
  struct System_Int32_array *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Func_int__bool__o *v43; // x20
  __int64 v44; // x20
  System_Func_int__bool__o *v45; // x20
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v47; // x3
  System_Func_int__bool__o *v48; // x20
  System_Int32_array *v49; // x0
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
  __int64 v64; // x0
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-A0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-90h]
  BattleServantConfConponent_o *v67; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v68; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // [xsp+30h] [xbp-70h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-68h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-58h]

  v12 = this;
  if ( (byte_4189B50 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, skillLvEnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v15);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_B2C35C(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__, v26);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__, v27);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__, v28);
    this = (BattleLogicSkill_o *)sub_B2C35C(&BattleLogicSkill___c__DisplayClass15_0_TypeInfo, v29);
    byte_4189B50 = 1;
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
  v30 = (System_Collections_ICollection_o *)this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(v12->fields.data, actorId, 0LL);
  if ( !skillLvEnt )
    goto LABEL_45;
  v31 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0LL);
  actorIndividualities = v31 ? BattleServantData__getConcatServantAndBuffIndividualityies(v31, 0LL, 0, 0, 0, 0LL) : 0LL;
  v67 = (BattleServantConfConponent_o *)dataValsArray;
  v68 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v68,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
    goto LABEL_45;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v34 = 0LL;
  while ( (__int64)v34 < (int)funcId->max_length )
  {
    v35 = sub_B2C42C(BattleLogicSkill___c__DisplayClass15_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass15_0___ctor((BattleLogicSkill___c__DisplayClass15_0_o *)v35, 0LL);
    v36 = skillLvEnt->fields.funcId;
    if ( !v36 )
      goto LABEL_45;
    if ( v34 >= v36->max_length )
      goto LABEL_50;
    if ( !v35 )
      goto LABEL_45;
    *(_DWORD *)(v35 + 16) = v36->m_Items[v34 + 1];
    if ( BasicHelper__IsNullOrEmpty(v30, 0LL)
      || (v43 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v43,
            (Il2CppObject *)v35,
            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__,
            (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__24273940(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v43,
                                         (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      v44 = v35 + 24;
      sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 24), 0LL, v37, v38, v39, v40, v41, v42);
      if ( !v33 )
        goto LABEL_45;
      this = (BattleLogicSkill_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     v33,
                                     (WarEntity_o **)(v35 + 24),
                                     *(_DWORD *)(v35 + 16),
                                     (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v44 )
          goto LABEL_45;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v44 )
            goto LABEL_45;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v44 )
              goto LABEL_45;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v44 )
                goto LABEL_45;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v44 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v44 )
                  goto LABEL_45;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v44 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v45 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v45,
                        (Il2CppObject *)v35,
                        Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__,
                        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__24273940(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v45,
                                                     (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_45;
                  if ( v34 >= SetTypeDataValArray->max_length )
                  {
LABEL_50:
                    v64 = sub_B2C460(this);
                    sub_B2C400(v64, 0LL);
                  }
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v34];
                  if ( !this )
                    goto LABEL_45;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v47);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v48 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v48,
                            (Il2CppObject *)v35,
                            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__,
                            (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__24273940(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v48,
                                                         (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v68;
                      if ( !v68 )
                        goto LABEL_45;
                      System_Collections_Generic_List_int___Add(
                        v68,
                        *(_DWORD *)(v35 + 16),
                        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL);
                      if ( !this )
                        goto LABEL_45;
                      if ( v34 >= LODWORD(this->fields.logic) )
                        goto LABEL_50;
                      if ( !v69 )
                        goto LABEL_45;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v69,
                        *((EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.logictarget + v34),
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_DataVals__Add__);
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
    ++v34;
    if ( !funcId )
      goto LABEL_45;
  }
  this = (BattleLogicSkill_o *)v68;
  if ( !v68
    || (v49 = System_Collections_Generic_List_int___ToArray(
                v68,
                (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        *functionIdArray = v49,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)functionIdArray,
          (System_Int32_array **)v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55),
        (this = (BattleLogicSkill_o *)v69) == 0LL)
    || (v56 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v69,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        v67->klass = (BattleServantConfConponent_c *)v56,
        sub_B2C2F8(v67, v56, v57, v58, v59, v60, v61, v62),
        !*functionIdArray) )
  {
LABEL_45:
    sub_B2C434(this, skillLvEnt);
  }
  return (*functionIdArray)->max_length != 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicSkill__actPassiveSkill(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isShift,
        bool isDeckDataLoad,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v8; // x19
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
  int32_t svtUniqueId; // w25
  int32_t v21; // w0
  int32_t skilllv; // w26
  int32_t v23; // w28
  BattleActionData_o *v24; // x23
  BattleServantData_o *ServantData; // x24
  SkillEntity_o *Entity; // x0
  SkillEntity_o *v27; // x27
  SkillLvEntity_o *v28; // x26
  System_Int32_array *Individualities; // x28
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x28
  int32_t Rarity; // w0
  __int64 v33; // x25
  __int64 v34; // x28
  int32_t v35; // w0
  BattleLogicFunction_FunctionArgument_o *argument; // x25
  bool v37; // w20
  BattleLogicFunction_o *logicfunction; // x21
  System_Int32_array *funcId; // x22
  struct BattleBuffData_o *buffData; // x8
  BattleData_o *data; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x21
  Il2CppObject *v44; // x22
  struct BattleLogicSkill___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v8 = this;
  if ( (byte_4189B4A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleServantData___ctor__, skillInfo);
    sub_B2C35C(&System_Action_BattleServantData__TypeInfo, v9);
    sub_B2C35C(&BattleActionData_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B2C35C(&BattleLogicFunction_FunctionArgument_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__, v18);
    this = (BattleLogicSkill_o *)sub_B2C35C(&BattleLogicSkill___c_TypeInfo, v19);
    byte_4189B4A = 1;
  }
  if ( !skillInfo )
    goto LABEL_38;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v21 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          method);
  skilllv = skillInfo->fields.skilllv;
  v23 = v21;
  v24 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v24, 0LL);
  this = (BattleLogicSkill_o *)v8->fields.data;
  if ( !this )
    goto LABEL_38;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_38;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_38;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v23,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v27 = Entity;
    if ( !SkillEntity__isActive(Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v23, skilllv, 0LL);
          v28 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_38;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v27, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v28, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v24 )
          {
            v24->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v34 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v33 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v52.fields.currentCryptoKey = v34;
              *(_QWORD *)&v52.fields.fakeValue = v33;
              v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v52, 0LL);
              v24->fields.motionId = SkillEntity__GetMotionId(v27, v35, 0LL);
              v24->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v24->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v24->fields.cardIndex = skillInfo->fields.index;
              this = (BattleLogicSkill_o *)v8->fields.logic;
              if ( this )
              {
                BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
                argument = (BattleLogicFunction_FunctionArgument_o *)sub_B2C42C(BattleLogicFunction_FunctionArgument_TypeInfo);
                BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                if ( argument )
                {
                  argument->fields.grantSkillType = skillInfo->fields.type;
                  argument->fields.isDeckDataLoad = isDeckDataLoad;
                  if ( v28 )
                  {
                    v37 = isShift;
                    logicfunction = v8->fields.logicfunction;
                    funcId = v28->fields.funcId;
                    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v28, 0LL);
                    if ( logicfunction )
                    {
                      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                                     logicfunction,
                                                     v24,
                                                     funcId,
                                                     (DataVals_array *)this,
                                                     1,
                                                     1,
                                                     0,
                                                     v37,
                                                     0,
                                                     1,
                                                     1,
                                                     argument,
                                                     v28->fields.skillId,
                                                     0LL);
                      buffData = ServantData->fields.buffData;
                      if ( buffData )
                      {
                        this = (BattleLogicSkill_o *)buffData->fields.unfixedBuffList;
                        if ( this )
                        {
                          System_Collections_Generic_List_int___Clear(
                            (System_Collections_Generic_List_int__o *)this,
                            (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
                          data = v8->fields.data;
                          this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                          if ( (BYTE3(BattleLogicSkill___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                            this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                          }
                          static_fields = this[3].fields.logicfunction;
                          v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields + 1);
                          if ( !v43 )
                          {
                            if ( (BYTE3(this[6].fields.data) & 4) != 0 && !LODWORD(this[4].fields.logictarget) )
                            {
                              j_il2cpp_runtime_class_init_0(this);
                              static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                            }
                            v44 = *(Il2CppObject **)static_fields;
                            v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleServantData__TypeInfo);
                            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                              v43,
                              v44,
                              Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__,
                              (const MethodInfo_24BBAD8 *)Method_System_Action_BattleServantData___ctor__);
                            v45 = BattleLogicSkill___c_TypeInfo->static_fields;
                            v45->__9__9_0 = (struct System_Action_BattleServantData__o *)v43;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)&v45->__9__9_0,
                              (System_Int32_array **)v43,
                              v46,
                              v47,
                              v48,
                              v49,
                              v50,
                              v51);
                          }
                          if ( data )
                          {
                            BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)v43, 0LL);
                            this = (BattleLogicSkill_o *)v8->fields.logic;
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
          }
        }
      }
LABEL_38:
      sub_B2C434(this, skillInfo);
    }
  }
}


bool __fastcall BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
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
  __int64 v36; // x26
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  SkillLvMaster_o *v45; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **saveDataMapList; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v53; // x0
  System_Func_BattleBuffData_BuffData__int__bool__o *v54; // x25
  System_Func_BattleBuffData_BuffData__int__bool__o *v55; // x24
  System_Func_string__double__bool__o *v56; // x23
  System_Func_string__double__bool__o *v57; // x22
  BattleServantData_o *v58; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v60; // x8
  int32_t NowHp; // w0
  int32_t v62; // w0
  int32_t v63; // w20
  int32_t v64; // w20
  __int64 *v66; // x8
  System_String_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_4189B4C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_B2C35C(&Method_System_Func_string__int__bool__Invoke__, v8);
    sub_B2C35C(&Method_System_Func_string__double__bool__Invoke__, v9);
    sub_B2C35C(&Method_System_Func_string__double__bool___ctor__, v10);
    sub_B2C35C(&Method_System_Func_string__int__bool___ctor__, v11);
    sub_B2C35C(&System_Func_string__double__bool__TypeInfo, v12);
    sub_B2C35C(&System_Func_string__int__bool__TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__, v16);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__, v17);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__, v18);
    sub_B2C35C(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__, v19);
    sub_B2C35C(&BattleLogicSkill___c__DisplayClass11_0_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_2522/*"BATTLE_SKILLERROR_NP_LOWER"*/, v21);
    sub_B2C35C(&StringLiteral_2520/*"BATTLE_SKILLERROR_HP_LOWER"*/, v22);
    sub_B2C35C(&StringLiteral_12363/*"STAR_HIGHER"*/, v23);
    sub_B2C35C(&StringLiteral_7093/*"HP_PER_LOWER"*/, v24);
    sub_B2C35C(&StringLiteral_2521/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v25);
    sub_B2C35C(&StringLiteral_2519/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v26);
    sub_B2C35C(&StringLiteral_7092/*"HP_PER_HIGHER"*/, v27);
    sub_B2C35C(&StringLiteral_2523/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v28);
    sub_B2C35C(&StringLiteral_9380/*"NP_HIGHER"*/, v29);
    sub_B2C35C(&StringLiteral_2524/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v30);
    sub_B2C35C(&StringLiteral_7094/*"HP_VAL_HIGHER"*/, v31);
    sub_B2C35C(&StringLiteral_12364/*"STAR_LOWER"*/, v32);
    sub_B2C35C(&StringLiteral_1/*""*/, v33);
    sub_B2C35C(&StringLiteral_9381/*"NP_LOWER"*/, v34);
    sub_B2C35C(&StringLiteral_7095/*"HP_VAL_LOWER"*/, v35);
    byte_4189B4C = 1;
  }
  v36 = sub_B2C42C(BattleLogicSkill___c__DisplayClass11_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass11_0___ctor((BattleLogicSkill___c__DisplayClass11_0_o *)v36, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)text, (System_Int32_array **)StringLiteral_1/*""*/, v37, v38, v39, v40, v41, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_53;
  v45 = (SkillLvMaster_o *)Instance;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v45 )
    goto LABEL_53;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity(v45, (int32_t)Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v36 )
    goto LABEL_53;
  saveDataMapList = (System_Int32_array **)Instance->fields.saveDataMapList;
  *(_QWORD *)(v36 + 16) = saveDataMapList;
  sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 16), saveDataMapList, v46, v47, v48, v49, v50, v51);
  v53 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v36 + 16);
  if ( !v53 )
    return 1;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         v53,
         (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v54 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B2C42C(System_Func_string__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v54,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__,
    (const MethodInfo_271B804 *)Method_System_Func_string__int__bool___ctor__);
  v55 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B2C42C(System_Func_string__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v55,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__,
    (const MethodInfo_271B804 *)Method_System_Func_string__int__bool___ctor__);
  v56 = (System_Func_string__double__bool__o *)sub_B2C42C(System_Func_string__double__bool__TypeInfo);
  System_Func_string__double__bool____ctor(
    v56,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__,
    (const MethodInfo_271B390 *)Method_System_Func_string__double__bool___ctor__);
  v57 = (System_Func_string__double__bool__o *)sub_B2C42C(System_Func_string__double__bool__TypeInfo);
  System_Func_string__double__bool____ctor(
    v57,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__,
    (const MethodInfo_271B390 *)Method_System_Func_string__double__bool___ctor__);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v58 = (BattleServantData_o *)Instance;
  Instance = (DataManager_o *)BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v54 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v54,
          (BattleBuffData_BuffData_o *)StringLiteral_9380/*"NP_HIGHER"*/,
          (int32_t)Instance,
          (const MethodInfo_271B818 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = &StringLiteral_2521/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_52;
  }
  Instance = (DataManager_o *)BattleServantData__getNPVal(v58, 0LL);
  if ( !v55 )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v55,
                                (BattleBuffData_BuffData_o *)StringLiteral_9381/*"NP_LOWER"*/,
                                (int32_t)Instance,
                                (const MethodInfo_271B818 *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = &StringLiteral_2522/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_52;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v54,
                                (BattleBuffData_BuffData_o *)StringLiteral_12363/*"STAR_HIGHER"*/,
                                data->fields.totalCriticalStars,
                                (const MethodInfo_271B818 *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = &StringLiteral_2523/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_52;
  }
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v55,
          (BattleBuffData_BuffData_o *)StringLiteral_12364/*"STAR_LOWER"*/,
          v60->fields.totalCriticalStars,
          (const MethodInfo_271B818 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = &StringLiteral_2524/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_52;
  }
  NowHp = BattleServantData__getNowHp(v58, 0LL);
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v54,
          (BattleBuffData_BuffData_o *)StringLiteral_7094/*"HP_VAL_HIGHER"*/,
          NowHp,
          (const MethodInfo_271B818 *)Method_System_Func_string__int__bool__Invoke__) )
  {
LABEL_44:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v66 = &StringLiteral_2519/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_52;
  }
  v62 = BattleServantData__getNowHp(v58, 0LL);
  if ( System_Func_BattleBuffData_BuffData__int__bool___Invoke(
         v55,
         (BattleBuffData_BuffData_o *)StringLiteral_7095/*"HP_VAL_LOWER"*/,
         v62,
         (const MethodInfo_271B818 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    v63 = BattleServantData__getNowHp(v58, 0LL);
    Instance = (DataManager_o *)BattleServantData__getMaxHp(v58, 0LL);
    if ( !v56 )
      goto LABEL_53;
    if ( System_Func_string__double__bool___Invoke(
           v56,
           (System_String_o *)StringLiteral_7092/*"HP_PER_HIGHER"*/,
           (double)v63 * 1000.0 / (double)(int)Instance,
           (const MethodInfo_271B3A4 *)Method_System_Func_string__double__bool__Invoke__) )
    {
      v64 = BattleServantData__getNowHp(v58, 0LL);
      Instance = (DataManager_o *)BattleServantData__getMaxHp(v58, 0LL);
      if ( v57 )
      {
        if ( System_Func_string__double__bool___Invoke(
               v57,
               (System_String_o *)StringLiteral_7093/*"HP_PER_LOWER"*/,
               (double)v64 * 1000.0 / (double)(int)Instance,
               (const MethodInfo_271B3A4 *)Method_System_Func_string__double__bool__Invoke__) )
        {
          return 1;
        }
        goto LABEL_48;
      }
LABEL_53:
      sub_B2C434(Instance, v44);
    }
    goto LABEL_44;
  }
LABEL_48:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = &StringLiteral_2520/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_52:
  v67 = LocalizationManager__Get((System_String_o *)*v66, 0LL);
  *text = v67;
  sub_B2C2F8((BattleServantConfConponent_o *)text, (System_Int32_array **)v67, v68, v69, v70, v71, v72, v73);
  return 0;
}


BattleActionData_o *__fastcall BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  DataManager_o *skillId; // x0
  __int64 v19; // x1
  System_Int32_array **skillInfo; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  DataManager_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleActionData_c *v29; // x0
  System_Int32_array **ptTarget; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_int__o *v37; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x25
  const MethodInfo *v39; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v41; // x24
  DataVals_array *v42; // x25
  BattleActionData_o *v43; // x22
  __int64 v44; // x3
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v48; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_4189B4B & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, task);
    sub_B2C35C(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_DataVals___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_DataVals__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4189B4B = 1;
  }
  v17 = sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_30;
  skillInfo = (System_Int32_array **)task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_30;
  skillId = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               skillId,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_30;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !v21 )
    goto LABEL_30;
  skillId = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v21,
                               (int32_t)skillId,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_30;
  v22 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v17, 0LL);
  *(_DWORD *)(v17 + 32) = -1;
  if ( !v22 )
    goto LABEL_30;
  *(_DWORD *)(v17 + 48) = HIDWORD(v22->fields.datalist);
  v29 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v29 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v17 + 56) = v29->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = (System_Int32_array **)task->fields.ptTarget;
  *(_QWORD *)(v17 + 40) = ptTarget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 40), ptTarget, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 144), skillInfo, v31, v32, v33, v34, v35, v36);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_30;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v37 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v37 )
    goto LABEL_30;
  System_Collections_Generic_List_int___AddRange(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.saveNameList,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v22, 0LL);
  if ( !v38 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v22->fields.m_CachedPtr,
    task->fields.ptTarget,
    v37,
    (System_Collections_Generic_List_DataVals__o *)v38,
    v39);
  logicfunction = this->fields.logicfunction;
  v41 = System_Collections_Generic_List_int___ToArray(
          v37,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v42 = (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !logicfunction )
    goto LABEL_30;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v17,
                               v41,
                               v42,
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
  v43 = (BattleActionData_o *)skillId;
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
    v48 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v48;
      p_offset += 2;
      if ( v48 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AC5258(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL, v44);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v22, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v22, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v43;
      }
    }
LABEL_30:
    sub_B2C434(skillId, v19);
  }
  return v43;
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
  v5 = BattleLogicSkill__createSkillData_28766400(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_B2C434(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_28766400(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
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
  __int64 skillId; // x0
  BattleActionData_o *v26; // x22
  BattleActionData_o *v27; // x25
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  BattleBoostItemInfoData_o *skillInfo; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x21
  SkillEntity_o *Entity; // x27
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BattleActionData_c *v38; // x8
  struct BattleActionData_StaticFields **p_static_fields; // x9
  __int64 v40; // x10
  BattleData_o *data; // x23
  __int64 v42; // x28
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v44; // x23
  BattleServantData_o *EnemyServantData; // x0
  const MethodInfo *v46; // x1
  SkillEntity_o *v47; // x21
  __int64 v48; // x23
  __int64 v49; // x27
  BattleData_o *v50; // x23
  const MethodInfo *v51; // x1
  System_Int32_array **ptTarget; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **Name; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array *v78; // x23
  System_Object_array *v79; // x28
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  BattleServantConfConponent_o *p_motionMessage; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int32_t actortype; // w8
  System_Int32_array **effectList; // x1
  int v91; // w10
  DataVals_array *v92; // x26
  unsigned int v93; // w8
  __int64 v94; // x10
  SkillEntity_o *v95; // x24
  BattleLogicFunction_o *logicfunction; // x23
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool isBuffUpdate; // w21
  int32_t ActorId; // w0
  const MethodInfo *v101; // x6
  struct BattleData_o *v102; // x8
  bool v103; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x23
  BattleLogicFunction_o *v106; // x23
  System_Int32_array *v107; // x27
  DataVals_array *v108; // x28
  int32_t v109; // w0
  UnityEngine_Object_o *v110; // x23
  int32_t v111; // w26
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  __int64 v120; // x3
  struct BattleData_o *v121; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v124; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x1
  System_Int32_array **v135; // x1
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array ***v142; // x25
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x1
  System_Int32_array **v150; // x1
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  int32_t type; // w21
  BattleData_o *v158; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v160; // x1
  const MethodInfo *v161; // x4
  _BOOL4 v162; // w8
  BattleData_o *v164; // x23
  BattleServantData_o *v165; // x0
  BattleServantData_o *v166; // x25
  BattleData_o *v167; // x23
  int32_t uniqueId; // w26
  const MethodInfo *v169; // x5
  struct BattleLogic_o *v170; // x23
  BattleLogicTask_array *v171; // x0
  BattleLogic_o *v172; // x23
  BattleData_o *v173; // x23
  BattleLogicTask_o *v174; // x22
  const MethodInfo *v175; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  struct BattleLogic_o *v182; // x8
  BattlePerformance_o *perf; // x22
  float CutinAdditionalTime; // s0
  struct BattleData_o *v185; // x8
  struct BattlePerformance_o *v186; // x8
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  CheckUpdateShiftTask_o *v193; // x20
  __int64 v194; // x0
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-78h]
  SkillLvEntity_o *v197; // [xsp+48h] [xbp-68h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-60h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v200; // 0:x0.16

  if ( (byte_4189B48 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int___, task);
    sub_B2C35C(&BattleActionData_TypeInfo, v10);
    sub_B2C35C(&BattleActionLogManagerInterface_TypeInfo, v11);
    sub_B2C35C(&BattleBoostItemInfoData_TypeInfo, v12);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v13);
    sub_B2C35C(&CheckUpdateShiftTask_TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v17);
    sub_B2C35C(&BattleLogicFunction_FunctionArgument_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_1/*""*/, v24);
    byte_4189B48 = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_154;
  BattleData__ResetWasAttackTargetId((BattleData_o *)skillId, 0LL);
  v26 = (BattleActionData_o *)sub_B2C42C(BattleActionData_TypeInfo);
  BattleActionData___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_154;
  v27 = BattleActionData__AddDisplayTriggerIntervalBuff(v26, task, 0LL);
  *baseActionData = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  if ( !task )
    goto LABEL_154;
  if ( !v27 )
    goto LABEL_154;
  v27->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_154;
  skillId = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)skillId,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_154;
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v35 )
    goto LABEL_154;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v35,
                              skillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_154;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)skillId,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_154;
  skillId = (__int64)SkillLvMaster__GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       skillId,
                       skillInfo->fields.skilllv,
                       0LL);
  v197 = (SkillLvEntity_o *)skillId;
  v27->fields.isCounter = task->fields.isCounter;
  v38 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v38 = BattleActionData_TypeInfo;
  }
  p_static_fields = &v38->static_fields;
  v27->fields.type = v38->static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      p_static_fields = &BattleActionData_TypeInfo->static_fields;
    }
    v27->fields.type = (*p_static_fields)->TYPE_BOOSTSKILL;
    v27->fields.imageId = skillInfo->fields.itemImageId;
    v40 = *(&BattleBoostItemInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v40
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[v40 - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( (skillId & 1) != 0 )
        v27->fields.noOperation = 1;
    }
  }
  skillLvMst = MasterData_WarQuestSelectionMaster;
  if ( !task->fields.checkAlive )
    goto LABEL_158;
  data = this->fields.data;
  skillId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_154;
  skillId = (__int64)BattleData__getServantData(data, skillId, 0LL);
  if ( !skillId
    || (skillId = BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL), v42 = 0LL, (skillId & 1) != 0) )
  {
LABEL_158:
    if ( task->fields.isForcedSpeedOne )
    {
      isForcedSkillSpeedOne = 1;
    }
    else
    {
      if ( !Entity )
        goto LABEL_154;
      if ( !SkillEntity__isForcedSkillSpeedOne(Entity, 0LL) )
        goto LABEL_34;
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_154;
      if ( BattleData__checkEnablePlaySpeedOneFromSkillIdList((BattleData_o *)skillId, Entity->fields.id, 0LL) )
        isForcedSkillSpeedOne = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
      else
LABEL_34:
        isForcedSkillSpeedOne = 0;
    }
    skillId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
    v27->fields.actorId = skillId;
    if ( v197 )
    {
      v44 = this->fields.data;
      skillId = SkillLvEntity__GetActNpcServantId(v197, 0LL);
      if ( v44 )
      {
        EnemyServantData = BattleData__getEnemyServantData(v44, skillId, 0LL);
        if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
        {
          v47 = Entity;
          v49 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
          v48 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v200.fields.currentCryptoKey = v49;
          *(_QWORD *)&v200.fields.fakeValue = v48;
          Entity = v47;
          v27->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v200, 0LL);
        }
        v50 = this->fields.data;
        skillId = BattleLogicTask__getActorId(task, v46);
        if ( v50 )
        {
          skillId = BattleData__getServantId(v50, skillId, 0LL);
          if ( Entity )
          {
            v27->fields.motionId = SkillEntity__GetMotionId(Entity, skillId, 0LL);
            v27->fields.targetId = BattleLogicTask__getTarget(task, v51);
            ptTarget = (System_Int32_array **)task->fields.ptTarget;
            v27->fields.pttargetIds = (struct System_Int32_array *)ptTarget;
            sub_B2C2F8((BattleServantConfConponent_o *)&v27->fields.pttargetIds, ptTarget, v53, v54, v55, v56, v57, v58);
            Name = (System_Int32_array **)SkillEntity__getName(Entity, 0LL);
            v27->fields.skillMessage = (struct System_String_o *)Name;
            sub_B2C2F8((BattleServantConfConponent_o *)&v27->fields.skillMessage, Name, v60, v61, v62, v63, v64, v65);
            v27->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v27->fields.skillInfo,
              (System_Int32_array **)skillInfo,
              v66,
              v67,
              v68,
              v69,
              v70,
              v71);
            v27->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
            v27->fields.checkRevengeId = task->fields.checkRevengeId;
            if ( task->fields.gimmickIndexArray )
            {
              skillId = (__int64)this->fields.data;
              if ( !skillId )
                goto LABEL_154;
              skillId = (__int64)BattleData__GetGimmickStartVoiceArray((BattleData_o *)skillId, 0LL);
              if ( !this->fields.data )
                goto LABEL_154;
              v78 = (System_String_array *)skillId;
              skillId = (__int64)BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
              if ( !this->fields.data )
                goto LABEL_154;
              v79 = (System_Object_array *)skillId;
              GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
              BattleActionData__SetGimmickData(v27, task->fields.gimmickIndexArray, v78, v79, GimmickAnimTypeArray, 0LL);
            }
            motionMessage = task->fields.motionMessage;
            if ( motionMessage && motionMessage->fields.m_stringLength >= 1 )
            {
              v27->fields.motionMessage = motionMessage;
              p_motionMessage = (BattleServantConfConponent_o *)&v27->fields.motionMessage;
            }
            else
            {
              v27->fields.motionMessage = 0LL;
              p_motionMessage = (BattleServantConfConponent_o *)&v27->fields.motionMessage;
              motionMessage = 0LL;
            }
            sub_B2C2F8(p_motionMessage, (System_Int32_array **)motionMessage, v72, v73, v74, v75, v76, v77);
            actortype = task->fields.actortype;
            if ( actortype == 5 || actortype == 1 )
              BattleActionData__setStateField(v27, 0LL);
            effectList = (System_Int32_array **)Entity->fields.effectList;
            v27->fields.effectlist = (struct System_Int32_array *)effectList;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v27->fields.effectlist,
              effectList,
              v83,
              v84,
              v85,
              v86,
              v87,
              v88);
            skillId = (__int64)this->fields.logic;
            if ( skillId )
            {
              BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
              if ( skillInfo->fields.type == 21 )
              {
                skillId = (__int64)SkillLvEntity__getDataValsList(v197, 0LL);
                if ( !skillId )
                  goto LABEL_154;
                v91 = *(_DWORD *)(skillId + 24);
                v92 = (DataVals_array *)skillId;
                if ( v91 >= 1 )
                {
                  v93 = 0;
                  do
                  {
                    if ( v93 >= v91 )
                    {
                      v194 = sub_B2C460(skillId);
                      sub_B2C400(v194, 0LL);
                    }
                    v94 = *(_QWORD *)(skillId + 8LL * (int)v93 + 32);
                    if ( !v94 )
                      goto LABEL_154;
                    *(_BYTE *)(v94 + 72) = 1;
                    v91 = *(_DWORD *)(skillId + 24);
                  }
                  while ( (int)++v93 < v91 );
                }
                v95 = Entity;
                logicfunction = this->fields.logicfunction;
                funcId = v197->fields.funcId;
                skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                            skillInfo,
                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !logicfunction )
                  goto LABEL_154;
                skillId = (__int64)BattleLogicFunction__procList(
                                     logicfunction,
                                     v27,
                                     funcId,
                                     v92,
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
                  v27->fields.commandType = changeTDCommandType;
                functionIdArray = v197->fields.funcId;
                skillId = (__int64)SkillLvEntity__getDataValsList(v197, 0LL);
                isBuffUpdate = 1;
                dataValsArray = (DataVals_array *)skillId;
                if ( baseVals && fromSkillCopyFunc )
                {
                  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
                  if ( !BattleLogicSkill__SetSkillCopyFunction(
                          this,
                          v197,
                          baseVals,
                          &functionIdArray,
                          &dataValsArray,
                          ActorId,
                          v101) )
                    return 0LL;
                  skillId = (__int64)this->fields.data;
                  if ( !skillId )
                    goto LABEL_154;
                  skillId = BattleData__isEnemyID((BattleData_o *)skillId, v27->fields.actorId, 0LL);
                  if ( (skillId & 1) != 0 )
                  {
                    v102 = this->fields.data;
                    if ( !v102 )
                      goto LABEL_154;
                    v103 = v102->fields.currentTurn == 0;
                  }
                  else
                  {
                    v103 = 0;
                  }
                  isBuffUpdate = 0;
                  v27->fields.isReversalShortBuffTurn = v103;
                }
                if ( skillInfo->fields.type == 1 )
                {
                  argument = (BattleLogicFunction_FunctionArgument_o *)sub_B2C42C(BattleLogicFunction_FunctionArgument_TypeInfo);
                  BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                  if ( !argument )
                    goto LABEL_154;
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
                    argument = (BattleLogicFunction_FunctionArgument_o *)sub_B2C42C(BattleLogicFunction_FunctionArgument_TypeInfo);
                    BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                  }
                  overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
                  if ( !overwriteFuncSideEffectArg )
                  {
                    overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B2C42C(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
                    BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
                      (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
                      0LL);
                  }
                  if ( !argument )
                    goto LABEL_154;
                  v95 = Entity;
                  BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
                    argument,
                    overwriteFuncSideEffectArg,
                    0LL);
                }
                else
                {
                  v95 = Entity;
                }
                v106 = this->fields.logicfunction;
                v108 = dataValsArray;
                v107 = functionIdArray;
                skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                            skillInfo,
                            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v106 )
                  goto LABEL_154;
                skillId = (__int64)BattleLogicFunction__procList(
                                     v106,
                                     v27,
                                     v107,
                                     v108,
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
              v42 = skillId;
              if ( task->fields.actortype == 5 )
              {
                if ( !skillId )
                  goto LABEL_154;
                v109 = BasicHelper__IndexValue_int__24283300(
                         *(System_Collections_Generic_List_T__o **)(skillId + 288),
                         0,
                         0,
                         (const MethodInfo_17288A4 *)Method_BasicHelper_IndexValue_int___);
                v110 = *(UnityEngine_Object_o **)(v42 + 72);
                v111 = v109;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                skillId = UnityEngine_Object__op_Equality(v110, 0LL, 0LL);
                if ( v111 >= 1 && (skillId & 1) != 0 )
                {
                  logic = this->fields.logic;
                  if ( !logic )
                    goto LABEL_154;
                  skillId = (__int64)logic->fields.perf;
                  if ( !skillId )
                    goto LABEL_154;
                  ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                               (BattlePerformance_o *)skillId,
                                                               v111,
                                                               0LL);
                  *(_QWORD *)(v42 + 72) = ServantGameObject;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)(v42 + 72),
                    ServantGameObject,
                    v114,
                    v115,
                    v116,
                    v117,
                    v118,
                    v119);
                }
              }
              ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
                skillInfo,
                skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
              BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
              skillId = (__int64)this->fields.logic;
              if ( skillId )
              {
                BattleLogic__updateConditionsBuffAll((BattleLogic_o *)skillId, 0LL);
                if ( v42 )
                {
                  *(_BYTE *)(v42 + 92) = 0;
                  skillId = (__int64)this->fields.data;
                  if ( skillId )
                  {
                    BattleData__setCommandAttack((BattleData_o *)skillId, 0, 0, 0LL);
                    v121 = this->fields.data;
                    if ( v121 )
                    {
                      actionLogManager = v121->fields.actionLogManager;
                      if ( actionLogManager )
                      {
                        klass = actionLogManager->klass;
                        if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
                        {
                          v124 = 0LL;
                          p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
                          while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
                          {
                            ++v124;
                            p_offset += 2;
                            if ( v124 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
                              goto LABEL_111;
                          }
                          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
                        }
                        else
                        {
LABEL_111:
                          p_method = sub_AC5258(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL, v120);
                        }
                        (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
                          actionLogManager,
                          task,
                          *(_QWORD *)(p_method + 8));
                        if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v42, 0LL) )
                        {
                          v134 = *(System_Int32_array ***)(v42 + 120);
                          *(_QWORD *)(v42 + 432) = v134;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)(v42 + 432),
                            v134,
                            v128,
                            v129,
                            v130,
                            v131,
                            v132,
                            v133);
                          v135 = (System_Int32_array **)StringLiteral_1/*""*/;
                          *(_QWORD *)(v42 + 120) = StringLiteral_1/*""*/;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)(v42 + 120),
                            v135,
                            v136,
                            v137,
                            v138,
                            v139,
                            v140,
                            v141);
                          v142 = (System_Int32_array ***)(v42 + 128);
                          if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v42 + 128), 0LL) )
                          {
                            v149 = *v142;
                            *(_QWORD *)(v42 + 432) = *v142;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)(v42 + 432),
                              v149,
                              v143,
                              v144,
                              v145,
                              v146,
                              v147,
                              v148);
                            v150 = (System_Int32_array **)StringLiteral_1/*""*/;
                            *v142 = (System_Int32_array **)StringLiteral_1/*""*/;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)(v42 + 128),
                              v150,
                              v151,
                              v152,
                              v153,
                              v154,
                              v155,
                              v156);
                          }
                        }
                        type = skillInfo->fields.type;
                        v158 = this->fields.data;
                        skillId = BattleLogicTask__getActorId(task, v127);
                        if ( v158 )
                        {
                          ServantData = BattleData__getServantData(v158, skillId, 0LL);
                          v162 = type != 1 && !ServantData || SkillLvEntity__IsNoTargetSkipSkill(v197, 0LL);
                          if ( (v162 & (*(unsigned __int8 *)(v42 + 240) ^ 1)) == 0
                            && (!*(_BYTE *)(v42 + 297) || *(_BYTE *)(v42 + 298)) )
                          {
                            if ( task->fields.isCanCounterTask )
                            {
                              v164 = this->fields.data;
                              skillId = BattleLogicTask__getActorId(task, v160);
                              if ( !v164 )
                                goto LABEL_154;
                              v165 = BattleData__getServantData(v164, skillId, 0LL);
                              if ( v165 )
                              {
                                v166 = v165;
                                (*(void (__fastcall **)(__int64, struct BattleData_o *, _QWORD))(*(_QWORD *)v42 + 440LL))(
                                  v42,
                                  this->fields.data,
                                  *(_QWORD *)(*(_QWORD *)v42 + 448LL));
                                skillId = *(_QWORD *)(v42 + 288);
                                if ( !skillId )
                                  goto LABEL_154;
                                v167 = this->fields.data;
                                uniqueId = v166->fields.uniqueId;
                                skillId = (__int64)System_Collections_Generic_List_int___ToArray(
                                                     (System_Collections_Generic_List_int__o *)skillId,
                                                     (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
                                if ( !v167 )
                                  goto LABEL_154;
                                BattleData__SetWasAttackTargetIdList(v167, uniqueId, (System_Int32_array *)skillId, 0LL);
                                v170 = this->fields.logic;
                                if ( !v170 )
                                  goto LABEL_154;
                                skillId = (__int64)v170->fields.logicnomal;
                                if ( !skillId )
                                  goto LABEL_154;
                                v171 = BattleLogicNomal__taskCounterFunc(
                                         (BattleLogicNomal_o *)skillId,
                                         this->fields.data,
                                         !v166->fields.isEnemy,
                                         1,
                                         0,
                                         v169);
                                BattleLogic__addBattleLogicTask(v170, v171, 0LL);
                              }
                            }
                            v172 = this->fields.logic;
                            skillId = (__int64)BattleLogicSkill__MakeAddInvokeSkillTask(
                                                 this,
                                                 skillLvMst,
                                                 v197,
                                                 task,
                                                 v161);
                            if ( !v172 )
                              goto LABEL_154;
                            BattleLogic__AddBattleLogicTask(v172, (BattleLogicTask_o *)skillId, 0LL);
                            v173 = this->fields.data;
                            skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                            if ( !v173 )
                              goto LABEL_154;
                            BattleData__AddUseSkillId(v173, skillId, 0LL);
                            if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v42, 0LL) )
                            {
                              v174 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
                              BattleLogicTask___ctor(v174, v175);
                              if ( !v174 )
                                goto LABEL_154;
                              v174->fields.actiontype = 24;
                              skillId = (__int64)this->fields.logic;
                              if ( !skillId )
                                goto LABEL_154;
                              BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v174, 0LL);
                            }
                            if ( SkillEntity__GetCutinAdditionalTime(v95, 0LL) > 0.0 )
                            {
                              skillId = SkillEntity__getSkillCutInId(v95, 0LL);
                              if ( !(_DWORD)skillId )
                              {
                                v182 = this->fields.logic;
                                if ( !v182 )
                                  goto LABEL_154;
                                perf = v182->fields.perf;
                                CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(v95, 0LL);
                                if ( !perf )
                                  goto LABEL_154;
                                BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
                                if ( *(_QWORD *)(v42 + 120) )
                                {
                                  v185 = this->fields.data;
                                  if ( !v185 )
                                    goto LABEL_154;
                                  v186 = v185->fields.perf;
                                  if ( !v186 )
                                    goto LABEL_154;
                                  skillId = (__int64)v186->fields.infoComp;
                                  if ( !skillId )
                                    goto LABEL_154;
                                  BattleInformationComponent__showCommonMessage(
                                    (BattleInformationComponent_o *)skillId,
                                    (BattleActionData_o *)v42,
                                    0LL);
                                  *(_QWORD *)(v42 + 120) = 0LL;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)(v42 + 120),
                                    0LL,
                                    v187,
                                    v188,
                                    v189,
                                    v190,
                                    v191,
                                    v192);
                                  *(_BYTE *)(v42 + 308) = 1;
                                }
                              }
                            }
                            if ( task->fields.IsNotShowSkillMessage )
                            {
                              *(_QWORD *)(v42 + 120) = 0LL;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)(v42 + 120),
                                0LL,
                                v176,
                                v177,
                                v178,
                                v179,
                                v180,
                                v181);
                              *(_BYTE *)(v42 + 308) = 1;
                            }
                            if ( SkillEntity__IsCheckUpdateShiftServant(v95, 0LL) )
                            {
                              v193 = (CheckUpdateShiftTask_o *)sub_B2C42C(CheckUpdateShiftTask_TypeInfo);
                              CheckUpdateShiftTask___ctor(v193, 0LL);
                              skillId = (__int64)this->fields.logic;
                              if ( !skillId )
                                goto LABEL_154;
                              BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, (BattleLogicTask_o *)v193, 0LL);
                            }
                            return (BattleActionData_o *)v42;
                          }
                          return 0LL;
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
LABEL_154:
    sub_B2C434(skillId, task);
  }
  return (BattleActionData_o *)v42;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  BattleData_o *v7; // x20
  BattleData_o *v8; // x21
  const MethodInfo *v9; // x2
  int32_t HitGimmickSkillId; // w0
  int32_t v11; // w22
  __int64 v12; // x21
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleData_o *v21; // x8
  System_Int32_array *v22; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v24; // x6
  const MethodInfo *v25; // x3
  BattleData_o *v26; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_4189B4E & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask___TypeInfo, method);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v3);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v4);
    sub_B2C35C(&int___TypeInfo, v5);
    byte_4189B4E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v7 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v8 = data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0LL);
  if ( !v7 )
    goto LABEL_26;
  if ( !v7->fields.rootfsm )
    return 0LL;
  if ( !v8 )
    goto LABEL_26;
  if ( !v8->fields.rootfsm )
    return 0LL;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.rootfsm )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, (System_Int32_array *)v8, v9);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v11 = HitGimmickSkillId;
  v12 = sub_B2C42C(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_26;
  *(_DWORD *)(v12 + 24) = -1;
  *(_QWORD *)(v12 + 16) = 20LL;
  if ( (unsigned int)v11 >= LODWORD(v7->fields.rootfsm) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 376LL))(
    v12,
    *((unsigned int *)&v7->fields.fsm + v11),
    *(_QWORD *)(*(_QWORD *)v12 + 384LL));
  *(_DWORD *)(v12 + 36) = 1;
  v13 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, v14);
  data = (BattleData_o *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.rootfsm) )
    goto LABEL_27;
  LODWORD(data->fields.fsm) = v11;
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 136) = data;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 136), (System_Int32_array **)data, v15, v16, v17, v18, v19, v20);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v21 = this->fields.data) == 0LL)
    || (v22 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v21, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v13,
          (BattleSkillInfoData_o *)v12,
          v22,
          FieldPlayerServantIDList,
          0,
          0,
          v24),
        BattleLogicTask__setActor((BattleLogicTask_o *)v13, 5, -1, v25),
        (data = (BattleData_o *)sub_B2C374(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_B2C434(data, method);
  }
  v26 = data;
  data = (BattleData_o *)sub_B2C41C(v13, data->klass->_1.element_class);
  if ( !data )
  {
    v35 = sub_B2C454(0LL);
    sub_B2C400(v35, 0LL);
  }
  if ( !LODWORD(v26->fields.rootfsm) )
  {
LABEL_27:
    v34 = sub_B2C460(data);
    sub_B2C400(v34, 0LL);
  }
  v26->fields.fsm = (struct PlayMakerFSM_o *)v13;
  sub_B2C2F8((BattleServantConfConponent_o *)&v26->fields.fsm, (System_Int32_array **)v13, v27, v28, v29, v30, v31, v32);
  return (BattleLogicTask_array *)v26;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getQuestBehaviorSkillTask(
        BattleLogicSkill_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  BattleLogicTask_array *result; // x0
  QuestBehaviorMaster_o *v13; // x20
  int32_t v14; // w21
  int32_t Phase; // w0
  BattleLogicTask_array *v16; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  __int64 v18; // x25
  BattleLogicTask_o **m_Items; // x26
  __int64 v20; // x22
  unsigned int v21; // w0
  BattleLogicTask_o *v22; // x23
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v27; // x6
  const MethodInfo *v28; // x3
  __int64 v29; // x0

  if ( (byte_4189B4D & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, method);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4189B4D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  result = (BattleLogicTask_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( result )
  {
    v13 = (QuestBehaviorMaster_o *)result;
    Instance = (DataManager_o *)this->fields.data;
    if ( !Instance )
      goto LABEL_24;
    Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
    if ( !this->fields.data )
      goto LABEL_24;
    v14 = (int)Instance;
    Phase = BattleData__getPhase(this->fields.data, 0LL);
    result = (BattleLogicTask_array *)QuestBehaviorMaster__getBattleSkill(v13, v14, Phase, 0LL);
    if ( result )
    {
      v16 = result;
      v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v17,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      if ( (int)v16->max_length >= 1 )
      {
        v18 = 0LL;
        m_Items = v16->m_Items;
        while ( 1 )
        {
          v20 = sub_B2C42C(BattleSkillInfoData_TypeInfo);
          BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v20, 0LL);
          if ( !v20 )
            break;
          *(_DWORD *)(v20 + 24) = -1;
          *(_QWORD *)(v20 + 16) = 20LL;
          if ( (unsigned int)v18 >= v16->max_length )
            goto LABEL_25;
          Instance = (DataManager_o *)m_Items[v18];
          if ( !Instance )
            break;
          v21 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
          Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 376LL))(
                                        v20,
                                        v21,
                                        *(_QWORD *)(*(_QWORD *)v20 + 384LL));
          if ( (unsigned int)v18 >= v16->max_length )
          {
LABEL_25:
            v29 = sub_B2C460(Instance);
            sub_B2C400(v29, 0LL);
          }
          Instance = (DataManager_o *)m_Items[v18];
          if ( !Instance )
            break;
          *(_DWORD *)(v20 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
          v22 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v22, v23);
          if ( !v22 )
            break;
          BattleLogicTask__setActor(v22, 5, -1, v24);
          Instance = (DataManager_o *)this->fields.data;
          if ( !Instance )
            break;
          Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          if ( !this->fields.data )
            break;
          v25 = (System_Int32_array *)Instance;
          FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
          BattleLogicTask__setActionSkill(v22, (BattleSkillInfoData_o *)v20, v25, FieldPlayerServantIDList, 0, 0, v27);
          BattleLogicTask__setActor(v22, 5, -1, v28);
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          if ( (int)++v18 >= (signed int)v16->max_length )
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
LABEL_24:
        sub_B2C434(Instance, v11);
      }
      if ( !v17 )
        goto LABEL_24;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicSkill__taskCommandSpell(
        BattleLogicSkill_o *this,
        int32_t skillId,
        int32_t skillLv,
        System_Int32_array *ptTargetList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  BattleLogicTask_o *v12; // x22
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4

  if ( (byte_4189B47 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_4189B47 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v12, v13);
  if ( !v12 || (BattleLogicTask__setCommandSpell(v12, skillId, 0LL, ptTargetList, v16), !v11) )
    sub_B2C434(v14, v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  BattleLogicTask_o *v21; // x21
  const MethodInfo *v22; // x1
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  const MethodInfo *v25; // x6
  bool v26; // w4
  bool v27; // w5
  BattleLogicTask_o *v28; // x0
  BattleSkillInfoData_o *v29; // x1
  System_Int32_array *v30; // x2
  struct BattleData_o *v31; // x8
  int32_t globaltargetId; // w26
  BattleLogicTarget_o *logictarget; // x26
  int32_t v34; // w27
  const MethodInfo *v35; // x4
  Il2CppClass *v36; // x0
  BattleLogicTarget_o *v37; // x26
  int32_t v38; // w27
  const MethodInfo *v39; // x3
  bool isPlayerID; // w0
  int32_t v41; // w2
  int32_t v42; // w1
  __int64 v44; // x0
  const MethodInfo *v45; // [xsp+10h] [xbp-60h]

  if ( (byte_4189B46 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, skillInfo);
    sub_B2C35C(&int___TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    byte_4189B46 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v21 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v21, v22);
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
      if ( !v21 )
        goto LABEL_35;
      v21->fields.isCanCounterTask = isCanCounterSkill;
      v21->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    if ( !v21 )
      goto LABEL_35;
    v26 = checkAlive;
    v27 = checkRevengeId;
    v28 = v21;
    v29 = skillInfo;
    v30 = enemyTargetList;
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
      v31 = this->fields.data;
      if ( !v31 )
        goto LABEL_35;
      globaltargetId = v31->fields.globaltargetId;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
      {
        logictarget = this->fields.logictarget;
        v34 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_35;
        globaltargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v34,
                           v34 == -1,
                           (System_Int32_array *)data,
                           v35);
      }
      v36 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_35;
      v37 = this->fields.logictarget;
      v38 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v37 )
        goto LABEL_35;
      globaltargetId = BattleLogicTarget__getTargetAiAct(
                         v37,
                         1,
                         v38,
                         0LL,
                         (System_Int32_array *)data,
                         1,
                         0,
                         0LL,
                         0LL,
                         1,
                         v45);
      v36 = int___TypeInfo;
    }
    data = sub_B2C374(v36, 1LL);
    if ( !data )
      goto LABEL_35;
    v30 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
    {
      v44 = sub_B2C460(data);
      sub_B2C400(v44, 0LL);
    }
    *(_DWORD *)(data + 32) = globaltargetId;
    if ( !v21 )
LABEL_35:
      sub_B2C434(data, svtUniqueId);
    v26 = checkAlive;
    v27 = checkRevengeId;
    v28 = v21;
    v29 = skillInfo;
  }
  BattleLogicTask__setActionSkill(v28, v29, v30, ptTargetList, v26, v27, v25);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v42 = 1;
    v41 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_35;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v41 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v42 = 2;
    else
      v42 = 3;
  }
  BattleLogicTask__setActor(v21, v42, v41, v39);
  if ( !v20 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicSkill___c___cctor(const MethodInfo *method)
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

  if ( (byte_41871C4 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicSkill___c_TypeInfo, v1);
    byte_41871C4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicSkill___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleLogicSkill___c___ctor(BattleLogicSkill___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicSkill___c___actPassiveSkill_b__9_0(
        BattleLogicSkill___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleLogicSkill___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_B2C434(this, svt);
  BattleBuffData__DirectUpdateWaitIntervalBuff((BattleBuffData_o *)this, 0LL);
}


void __fastcall BattleLogicSkill___c__DisplayClass11_0___ctor(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__0(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41871C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_41871C5 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_11:
    sub_B2C434(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v10; // x0
  BattleLogicSkill___c__DisplayClass11_0_o *v12; // x0
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2
  double v15; // d0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41871C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_41871C6 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_B2C434(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v10, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                               (System_Type_o *)key,
                                                                                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_14;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions) >= val;
  v12 = (BattleLogicSkill___c__DisplayClass11_0_o *)sub_B2C728(conditions);
  return BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__2(v12, v13, v15, v14);
}


bool __fastcall BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41871C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_41871C7 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v10; // x0
  bool v11; // w0
  BattleLogicSkill___c__DisplayClass15_0_o *v12; // x0
  const MethodInfo *v13; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41871C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_41871C8 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_B2C434(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v10, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                               (System_Type_o *)key,
                                                                                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions) >= val;
  v12 = (BattleLogicSkill___c__DisplayClass15_0_o *)sub_B2C728(conditions);
  BattleLogicSkill___c__DisplayClass15_0___ctor(v12, v13);
  return v11;
}


void __fastcall BattleLogicSkill___c__DisplayClass15_0___ctor(
        BattleLogicSkill___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass15_0___SetSkillCopyFunction_b__0(
        BattleLogicSkill___c__DisplayClass15_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.funcId == x;
}


bool __fastcall BattleLogicSkill___c__DisplayClass15_0___SetSkillCopyFunction_b__1(
        BattleLogicSkill___c__DisplayClass15_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  FunctionEntity_o *funcEntity; // x0

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_B2C434(0LL, type);
  return FunctionEntity__GetAddStateBuffTypeFromFunction(funcEntity, 0LL) == type;
}


bool __fastcall BattleLogicSkill___c__DisplayClass15_0___SetSkillCopyFunction_b__2(
        BattleLogicSkill___c__DisplayClass15_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEntity; // x8

  funcEntity = this->fields.funcEntity;
  if ( !funcEntity )
    sub_B2C434(this, type);
  return funcEntity->fields.funcType == type;
}


void __fastcall BattleLogicSkill___c__DisplayClass16_0___ctor(
        BattleLogicSkill___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicSkill___c__DisplayClass16_0___IsNotSkillCopyTargetIndividuality_b__0(
        BattleLogicSkill___c__DisplayClass16_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.individuality == x;
}