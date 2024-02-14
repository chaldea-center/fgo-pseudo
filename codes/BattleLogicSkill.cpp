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
  __int64 v10; // x8
  unsigned __int64 v11; // x21
  int32_t Next; // w1
  __int64 v14; // x0

  if ( (byte_42176F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_WeightRate_int___ctor__, rateArray);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v4);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v6);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v7);
    byte_42176F8 = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, rateArray, method);
  WeightRate_int____ctor(v8, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  v10 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v14 = sub_B0D9A8(v9);
        sub_B0D948(v14, 0LL);
      }
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v11 + 1],
        v11,
        (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      LODWORD(v10) = rateArray->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_12;
    }
LABEL_13:
    sub_B0D97C(v9);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
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
  __int64 v12; // x2
  unsigned __int64 v13; // x23
  BattleLogicSkill___c__DisplayClass16_0_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_int__bool__o *v17; // x22
  __int64 v19; // x0

  if ( (byte_42176FA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, actorIndividualities);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__, v8);
    sub_B0D8A4(&BattleLogicSkill___c__DisplayClass16_0_TypeInfo, v9);
    byte_42176FA = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0LL) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !notSkillCopyTargetIndividualities )
LABEL_15:
    sub_B0D97C(IsNullOrEmpty);
  if ( (int)notSkillCopyTargetIndividualities->max_length < 1 )
    return 0;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = (BattleLogicSkill___c__DisplayClass16_0_o *)sub_B0D974(
                                                        BattleLogicSkill___c__DisplayClass16_0_TypeInfo,
                                                        v11,
                                                        v12);
    BattleLogicSkill___c__DisplayClass16_0___ctor(v14, 0LL);
    if ( v13 >= notSkillCopyTargetIndividualities->max_length )
    {
      v19 = sub_B0D9A8(IsNullOrEmpty);
      sub_B0D948(v19, 0LL);
    }
    if ( !v14 )
      goto LABEL_15;
    v14->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v13 + 1];
    v17 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v15, v16);
    System_Func_int__bool____ctor(
      v17,
      (Il2CppObject *)v14,
      Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__24145568(
           actorIndividualities,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312) )
    {
      return 1;
    }
    if ( (__int64)++v13 >= (int)notSkillCopyTargetIndividualities->max_length )
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
  const MethodInfo *v9; // x1
  BattleLogicSkill_o *v10; // x20
  int32_t actortype; // w21
  int32_t v12; // w22
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  BattleData_o *data; // x21
  bool isPlayerID; // w23
  int32_t data_high; // w20
  int32_t v18; // w24
  TempBattleSkillInfoData_o *v19; // x25
  const MethodInfo *v20; // x4

  v8 = this;
  if ( (byte_42176F2 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_B0D8A4(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_42176F2 = 1;
  }
  if ( !skillLvMst )
    goto LABEL_13;
  this = (BattleLogicSkill_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0LL);
  if ( this )
  {
    if ( baseTask )
    {
      v10 = this;
      this = (BattleLogicSkill_o *)BattleLogicTask__getActorId(baseTask, v9);
      if ( skillLvEnt )
      {
        actortype = baseTask->fields.actortype;
        v12 = (int)this;
        if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0LL) != 1 )
        {
          isPlayerID = 0;
          goto LABEL_12;
        }
        data = v8->fields.data;
        this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, v13);
        if ( data )
        {
          isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0LL);
          v12 = -1;
          actortype = 5;
LABEL_12:
          v18 = (int32_t)v10->fields.data;
          data_high = HIDWORD(v10->fields.data);
          v19 = (TempBattleSkillInfoData_o *)sub_B0D974(TempBattleSkillInfoData_TypeInfo, v13, v14);
          TempBattleSkillInfoData___ctor(v19, v18, data_high, v12, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v19, actortype, isPlayerID, v20);
        }
      }
    }
LABEL_13:
    sub_B0D97C(this);
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
  BattleData_o *IsQuestClear_25410236; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v20; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v23; // x22
  unsigned int v24; // w24
  AddSkillData_o *v25; // x8
  __int64 v26; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42176FB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_B0D8A4(&CondType_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataVals__AddRange__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    byte_42176FB = 1;
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
  IsQuestClear_25410236 = (BattleData_o *)CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_25410236 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_32;
    if ( !targetIds->max_length )
      goto LABEL_33;
    IsQuestClear_25410236 = this->fields.data;
    if ( !IsQuestClear_25410236 )
      goto LABEL_32;
    ServantData = BattleData__getServantData(IsQuestClear_25410236, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v20 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_25410236 = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v20->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_32:
      sub_B0D97C(IsQuestClear_25410236);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v23 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_25410236;
      v24 = 0;
      while ( v24 < max_length )
      {
        v25 = classBoardAddCommandSpells->m_Items[v24];
        if ( !v25 || !v23 )
          goto LABEL_32;
        IsQuestClear_25410236 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v23,
                                                  &entity,
                                                  v25->fields.id,
                                                  commandSpellId,
                                                  v25->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_25410236 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_32;
          if ( !funcIdList )
            goto LABEL_32;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_25410236 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_32;
          IsQuestClear_25410236 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_32;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_25410236,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v24 >= max_length )
          return;
      }
LABEL_33:
      v26 = sub_B0D9A8(IsQuestClear_25410236);
      sub_B0D948(v26, 0LL);
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  System_String_array **v37; // x2
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x27
  unsigned __int64 v40; // x19
  __int64 v41; // x24
  struct System_Int32_array *v42; // x8
  __int64 v43; // x1
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Func_int__bool__o *v49; // x20
  __int64 v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  System_Func_int__bool__o *v53; // x20
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v55; // x3
  __int64 v56; // x1
  __int64 v57; // x2
  System_Func_int__bool__o *v58; // x20
  System_Int32_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v74; // x0
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-A0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-90h]
  BattleServantConfConponent_o *v77; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v78; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // [xsp+30h] [xbp-70h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-68h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-58h]

  v12 = this;
  if ( (byte_42176F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, skillLvEnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v15);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_B0D8A4(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__, v26);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__, v27);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__, v28);
    this = (BattleLogicSkill_o *)sub_B0D8A4(&BattleLogicSkill___c__DisplayClass15_0_TypeInfo, v29);
    byte_42176F9 = 1;
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
  v77 = (BattleServantConfConponent_o *)dataValsArray;
  v78 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v32, v33);
  System_Collections_Generic_List_int____ctor(
    v78,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DataVals__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
    goto LABEL_45;
  v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v40 = 0LL;
  while ( (__int64)v40 < (int)funcId->max_length )
  {
    v41 = sub_B0D974(BattleLogicSkill___c__DisplayClass15_0_TypeInfo, v36, v37);
    BattleLogicSkill___c__DisplayClass15_0___ctor((BattleLogicSkill___c__DisplayClass15_0_o *)v41, 0LL);
    v42 = skillLvEnt->fields.funcId;
    if ( !v42 )
      goto LABEL_45;
    if ( v40 >= v42->max_length )
      goto LABEL_50;
    if ( !v41 )
      goto LABEL_45;
    *(_DWORD *)(v41 + 16) = v42->m_Items[v40 + 1];
    if ( BasicHelper__IsNullOrEmpty(v30, 0LL)
      || (v49 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v43, v37),
          System_Func_int__bool____ctor(
            v49,
            (Il2CppObject *)v41,
            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__,
            (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__24145568(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v49,
                                         (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v41 + 24) = 0LL;
      v50 = v41 + 24;
      sub_B0D840((BattleServantConfConponent_o *)(v41 + 24), 0LL, v37, v44, v45, v46, v47, v48);
      if ( !v39 )
        goto LABEL_45;
      this = (BattleLogicSkill_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     v39,
                                     (WarEntity_o **)(v41 + 24),
                                     *(_DWORD *)(v41 + 16),
                                     (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v50 )
          goto LABEL_45;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v50 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v50 )
            goto LABEL_45;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v50 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v50 )
              goto LABEL_45;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v50 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v50 )
                goto LABEL_45;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v50 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v50 )
                  goto LABEL_45;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v50 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v53 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v51, v52),
                      System_Func_int__bool____ctor(
                        v53,
                        (Il2CppObject *)v41,
                        Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__,
                        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__24145568(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v53,
                                                     (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_45;
                  if ( v40 >= SetTypeDataValArray->max_length )
                  {
LABEL_50:
                    v74 = sub_B0D9A8(this);
                    sub_B0D948(v74, 0LL);
                  }
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v40];
                  if ( !this )
                    goto LABEL_45;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v55);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v58 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v56, v57),
                          System_Func_int__bool____ctor(
                            v58,
                            (Il2CppObject *)v41,
                            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__,
                            (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__24145568(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v58,
                                                         (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v78;
                      if ( !v78 )
                        goto LABEL_45;
                      System_Collections_Generic_List_int___Add(
                        v78,
                        *(_DWORD *)(v41 + 16),
                        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL);
                      if ( !this )
                        goto LABEL_45;
                      if ( v40 >= LODWORD(this->fields.logic) )
                        goto LABEL_50;
                      if ( !v79 )
                        goto LABEL_45;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v79,
                        *((EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.logictarget + v40),
                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_DataVals__Add__);
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
    ++v40;
    if ( !funcId )
      goto LABEL_45;
  }
  this = (BattleLogicSkill_o *)v78;
  if ( !v78
    || (v59 = System_Collections_Generic_List_int___ToArray(
                v78,
                (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        *functionIdArray = v59,
        sub_B0D840(
          (BattleServantConfConponent_o *)functionIdArray,
          (System_Int32_array **)v59,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65),
        (this = (BattleLogicSkill_o *)v79) == 0LL)
    || (v66 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v79,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        v77->klass = (BattleServantConfConponent_c *)v66,
        sub_B0D840(v77, v66, v67, v68, v69, v70, v71, v72),
        !*functionIdArray) )
  {
LABEL_45:
    sub_B0D97C(this);
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
  __int64 v24; // x1
  __int64 v25; // x2
  BattleActionData_o *v26; // x23
  BattleServantData_o *ServantData; // x24
  SkillEntity_o *Entity; // x0
  SkillEntity_o *v29; // x27
  SkillLvEntity_o *v30; // x26
  System_Int32_array *Individualities; // x28
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x28
  int32_t Rarity; // w0
  __int64 v35; // x25
  __int64 v36; // x28
  int32_t v37; // w0
  __int64 v38; // x1
  __int64 v39; // x2
  BattleLogicFunction_FunctionArgument_o *argument; // x25
  bool v41; // w20
  BattleLogicFunction_o *logicfunction; // x21
  System_Int32_array *funcId; // x22
  struct BattleBuffData_o *buffData; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  BattleData_o *data; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x21
  Il2CppObject *v50; // x22
  struct BattleLogicSkill___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  v8 = this;
  if ( (byte_42176F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleServantData___ctor__, skillInfo);
    sub_B0D8A4(&System_Action_BattleServantData__TypeInfo, v9);
    sub_B0D8A4(&BattleActionData_TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B0D8A4(&BattleLogicFunction_FunctionArgument_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__, v18);
    this = (BattleLogicSkill_o *)sub_B0D8A4(&BattleLogicSkill___c_TypeInfo, v19);
    byte_42176F3 = 1;
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
  v26 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v24, v25);
  BattleActionData___ctor(v26, 0LL);
  this = (BattleLogicSkill_o *)v8->fields.data;
  if ( !this )
    goto LABEL_38;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_38;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_38;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v23,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v29 = Entity;
    if ( !SkillEntity__isActive(Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v23, skilllv, 0LL);
          v30 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_38;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v29, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v30, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v26 )
          {
            v26->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v36 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v35 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v36;
              *(_QWORD *)&v58.fields.fakeValue = v35;
              v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v58, 0LL);
              v26->fields.motionId = SkillEntity__GetMotionId(v29, v37, 0LL);
              v26->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v26->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v26->fields.cardIndex = skillInfo->fields.index;
              this = (BattleLogicSkill_o *)v8->fields.logic;
              if ( this )
              {
                BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
                argument = (BattleLogicFunction_FunctionArgument_o *)sub_B0D974(
                                                                       BattleLogicFunction_FunctionArgument_TypeInfo,
                                                                       v38,
                                                                       v39);
                BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                if ( argument )
                {
                  argument->fields.grantSkillType = skillInfo->fields.type;
                  argument->fields.isDeckDataLoad = isDeckDataLoad;
                  if ( v30 )
                  {
                    v41 = isShift;
                    logicfunction = v8->fields.logicfunction;
                    funcId = v30->fields.funcId;
                    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v30, 0LL);
                    if ( logicfunction )
                    {
                      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                                     logicfunction,
                                                     v26,
                                                     funcId,
                                                     (DataVals_array *)this,
                                                     1,
                                                     1,
                                                     0,
                                                     v41,
                                                     0,
                                                     1,
                                                     1,
                                                     argument,
                                                     v30->fields.skillId,
                                                     0LL);
                      buffData = ServantData->fields.buffData;
                      if ( buffData )
                      {
                        this = (BattleLogicSkill_o *)buffData->fields.unfixedBuffList;
                        if ( this )
                        {
                          System_Collections_Generic_List_int___Clear(
                            (System_Collections_Generic_List_int__o *)this,
                            (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
                          data = v8->fields.data;
                          this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                          if ( (BYTE3(BattleLogicSkill___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                            this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                          }
                          static_fields = this[3].fields.logicfunction;
                          v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields + 1);
                          if ( !v49 )
                          {
                            if ( (BYTE3(this[6].fields.data) & 4) != 0 && !LODWORD(this[4].fields.logictarget) )
                            {
                              j_il2cpp_runtime_class_init_0(this);
                              static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                            }
                            v50 = *(Il2CppObject **)static_fields;
                            v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(System_Action_BattleServantData__TypeInfo, v45, v46);
                            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                              v49,
                              v50,
                              Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__,
                              (const MethodInfo_246EA3C *)Method_System_Action_BattleServantData___ctor__);
                            v51 = BattleLogicSkill___c_TypeInfo->static_fields;
                            v51->__9__9_0 = (struct System_Action_BattleServantData__o *)v49;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)&v51->__9__9_0,
                              (System_Int32_array **)v49,
                              v52,
                              v53,
                              v54,
                              v55,
                              v56,
                              v57);
                          }
                          if ( data )
                          {
                            BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)v49, 0LL);
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
      sub_B0D97C(this);
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
  SkillLvMaster_o *v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **saveDataMapList; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Func_BattleBuffData_BuffData__int__bool__o *v55; // x25
  __int64 v56; // x1
  __int64 v57; // x2
  System_Func_BattleBuffData_BuffData__int__bool__o *v58; // x24
  __int64 v59; // x1
  __int64 v60; // x2
  System_Func_string__double__bool__o *v61; // x23
  __int64 v62; // x1
  __int64 v63; // x2
  System_Func_string__double__bool__o *v64; // x22
  BattleServantData_o *v65; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v67; // x8
  int32_t NowHp; // w0
  int32_t v69; // w0
  int32_t v70; // w20
  int32_t v71; // w20
  __int64 *v73; // x8
  System_String_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7

  if ( (byte_42176F5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_B0D8A4(&Method_System_Func_string__int__bool__Invoke__, v8);
    sub_B0D8A4(&Method_System_Func_string__double__bool__Invoke__, v9);
    sub_B0D8A4(&Method_System_Func_string__double__bool___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_string__int__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_string__double__bool__TypeInfo, v12);
    sub_B0D8A4(&System_Func_string__int__bool__TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__, v16);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__, v17);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__, v18);
    sub_B0D8A4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__, v19);
    sub_B0D8A4(&BattleLogicSkill___c__DisplayClass11_0_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_2533/*"BATTLE_SKILLERROR_NP_LOWER"*/, v21);
    sub_B0D8A4(&StringLiteral_2531/*"BATTLE_SKILLERROR_HP_LOWER"*/, v22);
    sub_B0D8A4(&StringLiteral_12401/*"STAR_HIGHER"*/, v23);
    sub_B0D8A4(&StringLiteral_7113/*"HP_PER_LOWER"*/, v24);
    sub_B0D8A4(&StringLiteral_2532/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v25);
    sub_B0D8A4(&StringLiteral_2530/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v26);
    sub_B0D8A4(&StringLiteral_7112/*"HP_PER_HIGHER"*/, v27);
    sub_B0D8A4(&StringLiteral_2534/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v28);
    sub_B0D8A4(&StringLiteral_9403/*"NP_HIGHER"*/, v29);
    sub_B0D8A4(&StringLiteral_2535/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v30);
    sub_B0D8A4(&StringLiteral_7114/*"HP_VAL_HIGHER"*/, v31);
    sub_B0D8A4(&StringLiteral_12402/*"STAR_LOWER"*/, v32);
    sub_B0D8A4(&StringLiteral_1/*""*/, v33);
    sub_B0D8A4(&StringLiteral_9404/*"NP_LOWER"*/, v34);
    sub_B0D8A4(&StringLiteral_7115/*"HP_VAL_LOWER"*/, v35);
    byte_42176F5 = 1;
  }
  v36 = sub_B0D974(BattleLogicSkill___c__DisplayClass11_0_TypeInfo, skillInfo, text);
  BattleLogicSkill___c__DisplayClass11_0___ctor((BattleLogicSkill___c__DisplayClass11_0_o *)v36, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)text, (System_Int32_array **)StringLiteral_1/*""*/, v37, v38, v39, v40, v41, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_53;
  v44 = (SkillLvMaster_o *)Instance;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v44 )
    goto LABEL_53;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity(v44, (int32_t)Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v36 )
    goto LABEL_53;
  saveDataMapList = (System_Int32_array **)Instance->fields.saveDataMapList;
  *(_QWORD *)(v36 + 16) = saveDataMapList;
  sub_B0D840((BattleServantConfConponent_o *)(v36 + 16), saveDataMapList, v45, v46, v47, v48, v49, v50);
  v52 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v36 + 16);
  if ( !v52 )
    return 1;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         v52,
         (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v55 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B0D974(
                                                               System_Func_string__int__bool__TypeInfo,
                                                               v53,
                                                               v54);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v55,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__,
    (const MethodInfo_26225B8 *)Method_System_Func_string__int__bool___ctor__);
  v58 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B0D974(
                                                               System_Func_string__int__bool__TypeInfo,
                                                               v56,
                                                               v57);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v58,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__,
    (const MethodInfo_26225B8 *)Method_System_Func_string__int__bool___ctor__);
  v61 = (System_Func_string__double__bool__o *)sub_B0D974(System_Func_string__double__bool__TypeInfo, v59, v60);
  System_Func_string__double__bool____ctor(
    v61,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__,
    (const MethodInfo_2622144 *)Method_System_Func_string__double__bool___ctor__);
  v64 = (System_Func_string__double__bool__o *)sub_B0D974(System_Func_string__double__bool__TypeInfo, v62, v63);
  System_Func_string__double__bool____ctor(
    v64,
    (Il2CppObject *)v36,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__,
    (const MethodInfo_2622144 *)Method_System_Func_string__double__bool___ctor__);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v65 = (BattleServantData_o *)Instance;
  Instance = (DataManager_o *)BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v55 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v55,
          (BattleBuffData_BuffData_o *)StringLiteral_9403/*"NP_HIGHER"*/,
          (int32_t)Instance,
          (const MethodInfo_26225CC *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = &StringLiteral_2532/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_52;
  }
  Instance = (DataManager_o *)BattleServantData__getNPVal(v65, 0LL);
  if ( !v58 )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v58,
                                (BattleBuffData_BuffData_o *)StringLiteral_9404/*"NP_LOWER"*/,
                                (int32_t)Instance,
                                (const MethodInfo_26225CC *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = &StringLiteral_2533/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_52;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v55,
                                (BattleBuffData_BuffData_o *)StringLiteral_12401/*"STAR_HIGHER"*/,
                                data->fields.totalCriticalStars,
                                (const MethodInfo_26225CC *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = &StringLiteral_2534/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_52;
  }
  v67 = this->fields.data;
  if ( !v67 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v58,
          (BattleBuffData_BuffData_o *)StringLiteral_12402/*"STAR_LOWER"*/,
          v67->fields.totalCriticalStars,
          (const MethodInfo_26225CC *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = &StringLiteral_2535/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_52;
  }
  NowHp = BattleServantData__getNowHp(v65, 0LL);
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v55,
          (BattleBuffData_BuffData_o *)StringLiteral_7114/*"HP_VAL_HIGHER"*/,
          NowHp,
          (const MethodInfo_26225CC *)Method_System_Func_string__int__bool__Invoke__) )
  {
LABEL_44:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v73 = &StringLiteral_2530/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_52;
  }
  v69 = BattleServantData__getNowHp(v65, 0LL);
  if ( System_Func_BattleBuffData_BuffData__int__bool___Invoke(
         v58,
         (BattleBuffData_BuffData_o *)StringLiteral_7115/*"HP_VAL_LOWER"*/,
         v69,
         (const MethodInfo_26225CC *)Method_System_Func_string__int__bool__Invoke__) )
  {
    v70 = BattleServantData__getNowHp(v65, 0LL);
    Instance = (DataManager_o *)BattleServantData__getMaxHp(v65, 0LL);
    if ( !v61 )
      goto LABEL_53;
    if ( System_Func_string__double__bool___Invoke(
           v61,
           (System_String_o *)StringLiteral_7112/*"HP_PER_HIGHER"*/,
           (double)v70 * 1000.0 / (double)(int)Instance,
           (const MethodInfo_2622158 *)Method_System_Func_string__double__bool__Invoke__) )
    {
      v71 = BattleServantData__getNowHp(v65, 0LL);
      Instance = (DataManager_o *)BattleServantData__getMaxHp(v65, 0LL);
      if ( v64 )
      {
        if ( System_Func_string__double__bool___Invoke(
               v64,
               (System_String_o *)StringLiteral_7113/*"HP_PER_LOWER"*/,
               (double)v71 * 1000.0 / (double)(int)Instance,
               (const MethodInfo_2622158 *)Method_System_Func_string__double__bool__Invoke__) )
        {
          return 1;
        }
        goto LABEL_48;
      }
LABEL_53:
      sub_B0D97C(Instance);
    }
    goto LABEL_44;
  }
LABEL_48:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v73 = &StringLiteral_2531/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_52:
  v74 = LocalizationManager__Get((System_String_o *)*v73, 0LL);
  *text = v74;
  sub_B0D840((BattleServantConfConponent_o *)text, (System_Int32_array **)v74, v75, v76, v77, v78, v79, v80);
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
  System_Int32_array **skillInfo; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x21
  DataManager_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleActionData_c *v28; // x0
  System_Int32_array **ptTarget; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_int__o *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x25
  const MethodInfo *v42; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v44; // x24
  DataVals_array *v45; // x25
  BattleActionData_o *v46; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v50; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_42176F4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleActionData_TypeInfo, task);
    sub_B0D8A4(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataVals__AddRange__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataVals__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_DataVals___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_DataVals__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_42176F4 = 1;
  }
  v17 = sub_B0D974(BattleActionData_TypeInfo, task, method);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_30;
  skillInfo = (System_Int32_array **)task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_30;
  skillId = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               skillId,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_30;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !v20 )
    goto LABEL_30;
  skillId = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v20,
                               (int32_t)skillId,
                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_30;
  v21 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v17, 0LL);
  *(_DWORD *)(v17 + 32) = -1;
  if ( !v21 )
    goto LABEL_30;
  *(_DWORD *)(v17 + 48) = HIDWORD(v21->fields.datalist);
  v28 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v28 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v17 + 56) = v28->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = (System_Int32_array **)task->fields.ptTarget;
  *(_QWORD *)(v17 + 40) = ptTarget;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), ptTarget, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 144), skillInfo, v30, v31, v32, v33, v34, v35);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_30;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v38 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v36, v37);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_DataVals__TypeInfo,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v38 )
    goto LABEL_30;
  System_Collections_Generic_List_int___AddRange(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)v21->fields.saveNameList,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v21, 0LL);
  if ( !v41 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v41,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v21->fields.m_CachedPtr,
    task->fields.ptTarget,
    v38,
    (System_Collections_Generic_List_DataVals__o *)v41,
    v42);
  logicfunction = this->fields.logicfunction;
  v44 = System_Collections_Generic_List_int___ToArray(
          v38,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v45 = (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !logicfunction )
    goto LABEL_30;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v17,
                               v44,
                               v45,
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
  v46 = (BattleActionData_o *)skillId;
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
    v50 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v50;
      p_offset += 2;
      if ( v50 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AA67A0(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v21, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v21, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v46;
      }
    }
LABEL_30:
    sub_B0D97C(skillId);
  }
  return v46;
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  BattleLogic_o *logic; // x19
  BattleActionData_o *v5; // x0
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-8h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_29867180(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_B0D97C(v5);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_29867180(
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
  __int64 v26; // x1
  __int64 v27; // x2
  BattleActionData_o *v28; // x22
  BattleActionData_o *v29; // x25
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BattleBoostItemInfoData_o *skillInfo; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x21
  SkillEntity_o *Entity; // x27
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x24
  const MethodInfo *v40; // x1
  BattleActionData_c *v41; // x8
  struct BattleActionData_StaticFields **p_static_fields; // x9
  __int64 v43; // x10
  BattleData_o *data; // x23
  __int64 v45; // x28
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v47; // x23
  BattleServantData_o *EnemyServantData; // x0
  const MethodInfo *v49; // x1
  SkillEntity_o *v50; // x21
  __int64 v51; // x23
  __int64 v52; // x27
  BattleData_o *v53; // x23
  const MethodInfo *v54; // x1
  System_Int32_array **ptTarget; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **Name; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array *v81; // x23
  System_Object_array *v82; // x28
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  BattleServantConfConponent_o *p_motionMessage; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int32_t actortype; // w8
  System_Int32_array **effectList; // x1
  int v94; // w10
  DataVals_array *v95; // x26
  unsigned int v96; // w8
  __int64 v97; // x10
  SkillEntity_o *v98; // x24
  BattleLogicFunction_o *logicfunction; // x23
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  const MethodInfo *v102; // x1
  __int64 v103; // x2
  bool isBuffUpdate; // w21
  int32_t ActorId; // w0
  const MethodInfo *v106; // x6
  struct BattleData_o *v107; // x8
  bool v108; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x23
  BattleLogicFunction_o *v111; // x23
  System_Int32_array *v112; // x27
  DataVals_array *v113; // x28
  int32_t v114; // w0
  UnityEngine_Object_o *v115; // x23
  int32_t v116; // w26
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  struct BattleData_o *v125; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v128; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v131; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x1
  System_Int32_array **v139; // x1
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array ***v146; // x25
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x1
  System_Int32_array **v154; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  int32_t type; // w21
  BattleData_o *v162; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v164; // x1
  const MethodInfo *v165; // x4
  _BOOL4 v166; // w8
  BattleData_o *v168; // x23
  BattleServantData_o *v169; // x0
  BattleServantData_o *v170; // x25
  BattleData_o *v171; // x23
  int32_t uniqueId; // w26
  const MethodInfo *v173; // x5
  struct BattleLogic_o *v174; // x23
  BattleLogicTask_array *v175; // x0
  BattleLogicTask_o *v176; // x23
  BattleData_o *v177; // x23
  __int64 v178; // x1
  __int64 v179; // x2
  BattleLogicTask_o *v180; // x22
  const MethodInfo *v181; // x1
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  struct BattleLogic_o *v188; // x8
  BattlePerformance_o *perf; // x22
  float CutinAdditionalTime; // s0
  struct BattleData_o *v191; // x8
  struct BattlePerformance_o *v192; // x8
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  __int64 v199; // x1
  __int64 v200; // x2
  CheckUpdateShiftTask_o *v201; // x21
  __int64 v202; // x0
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-78h]
  SkillLvEntity_o *v205; // [xsp+48h] [xbp-68h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-60h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v208; // 0:x0.16

  if ( (byte_42176F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int___, task);
    sub_B0D8A4(&BattleActionData_TypeInfo, v10);
    sub_B0D8A4(&BattleActionLogManagerInterface_TypeInfo, v11);
    sub_B0D8A4(&BattleBoostItemInfoData_TypeInfo, v12);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v13);
    sub_B0D8A4(&CheckUpdateShiftTask_TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v16);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v17);
    sub_B0D8A4(&BattleLogicFunction_FunctionArgument_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_1/*""*/, v24);
    byte_42176F1 = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_157;
  BattleData__ResetWasAttackTargetId((BattleData_o *)skillId, 0LL);
  v28 = (BattleActionData_o *)sub_B0D974(BattleActionData_TypeInfo, v26, v27);
  BattleActionData___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_157;
  v29 = BattleActionData__AddDisplayTriggerIntervalBuff(v28, task, 0LL);
  *baseActionData = v29;
  sub_B0D840((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  if ( !task )
    goto LABEL_157;
  if ( !v29 )
    goto LABEL_157;
  v29->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_157;
  skillId = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)skillId,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_157;
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v37 )
    goto LABEL_157;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v37,
                              skillId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_157;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)skillId,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v205 = (SkillLvEntity_o *)skillId;
  v29->fields.isCounter = task->fields.isCounter;
  v41 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v41 = BattleActionData_TypeInfo;
  }
  p_static_fields = &v41->static_fields;
  v29->fields.type = v41->static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      p_static_fields = &BattleActionData_TypeInfo->static_fields;
    }
    v29->fields.type = (*p_static_fields)->TYPE_BOOSTSKILL;
    v29->fields.imageId = skillInfo->fields.itemImageId;
    v43 = *(&BattleBoostItemInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v43
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[v43 - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( (skillId & 1) != 0 )
        v29->fields.noOperation = 1;
    }
  }
  skillLvMst = MasterData_WarQuestSelectionMaster;
  if ( !task->fields.checkAlive )
    goto LABEL_161;
  data = this->fields.data;
  skillId = BattleLogicTask__getActorId(task, v40);
  if ( !data )
    goto LABEL_157;
  skillId = (__int64)BattleData__getServantData(data, skillId, 0LL);
  if ( !skillId
    || (skillId = BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL), v45 = 0LL, (skillId & 1) != 0) )
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
    skillId = BattleLogicTask__getActorId(task, v40);
    v29->fields.actorId = skillId;
    if ( !v205 )
      goto LABEL_157;
    v47 = this->fields.data;
    skillId = SkillLvEntity__GetActNpcServantId(v205, 0LL);
    if ( !v47 )
      goto LABEL_157;
    EnemyServantData = BattleData__getEnemyServantData(v47, skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v50 = Entity;
      v52 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v51 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v208.fields.currentCryptoKey = v52;
      *(_QWORD *)&v208.fields.fakeValue = v51;
      Entity = v50;
      v29->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v208, 0LL);
    }
    v53 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, v49);
    if ( !v53 )
      goto LABEL_157;
    skillId = BattleData__getServantId(v53, skillId, 0LL);
    if ( !Entity )
      goto LABEL_157;
    v29->fields.motionId = SkillEntity__GetMotionId(Entity, skillId, 0LL);
    v29->fields.targetId = BattleLogicTask__getTarget(task, v54);
    ptTarget = (System_Int32_array **)task->fields.ptTarget;
    v29->fields.pttargetIds = (struct System_Int32_array *)ptTarget;
    sub_B0D840((BattleServantConfConponent_o *)&v29->fields.pttargetIds, ptTarget, v56, v57, v58, v59, v60, v61);
    Name = (System_Int32_array **)SkillEntity__getName(Entity, 0LL);
    v29->fields.skillMessage = (struct System_String_o *)Name;
    sub_B0D840((BattleServantConfConponent_o *)&v29->fields.skillMessage, Name, v63, v64, v65, v66, v67, v68);
    v29->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->fields.skillInfo,
      (System_Int32_array **)skillInfo,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    v29->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v29->fields.checkRevengeId = task->fields.checkRevengeId;
    if ( task->fields.gimmickIndexArray )
    {
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_157;
      skillId = (__int64)BattleData__GetGimmickStartVoiceArray((BattleData_o *)skillId, 0LL);
      if ( !this->fields.data )
        goto LABEL_157;
      v81 = (System_String_array *)skillId;
      skillId = (__int64)BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
      if ( !this->fields.data )
        goto LABEL_157;
      v82 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
      BattleActionData__SetGimmickData(v29, task->fields.gimmickIndexArray, v81, v82, GimmickAnimTypeArray, 0LL);
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields.m_stringLength >= 1 )
    {
      v29->fields.motionMessage = motionMessage;
      p_motionMessage = (BattleServantConfConponent_o *)&v29->fields.motionMessage;
    }
    else
    {
      v29->fields.motionMessage = 0LL;
      p_motionMessage = (BattleServantConfConponent_o *)&v29->fields.motionMessage;
      motionMessage = 0LL;
    }
    sub_B0D840(p_motionMessage, (System_Int32_array **)motionMessage, v75, v76, v77, v78, v79, v80);
    actortype = task->fields.actortype;
    if ( actortype == 5 || actortype == 1 )
      BattleActionData__setStateField(v29, 0LL);
    effectList = (System_Int32_array **)Entity->fields.effectList;
    v29->fields.effectlist = (struct System_Int32_array *)effectList;
    sub_B0D840((BattleServantConfConponent_o *)&v29->fields.effectlist, effectList, v86, v87, v88, v89, v90, v91);
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_157;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (__int64)SkillLvEntity__getDataValsList(v205, 0LL);
      if ( !skillId )
        goto LABEL_157;
      v94 = *(_DWORD *)(skillId + 24);
      v95 = (DataVals_array *)skillId;
      if ( v94 >= 1 )
      {
        v96 = 0;
        do
        {
          if ( v96 >= v94 )
          {
            v202 = sub_B0D9A8(skillId);
            sub_B0D948(v202, 0LL);
          }
          v97 = *(_QWORD *)(skillId + 8LL * (int)v96 + 32);
          if ( !v97 )
            goto LABEL_157;
          *(_BYTE *)(v97 + 72) = 1;
          v94 = *(_DWORD *)(skillId + 24);
        }
        while ( (int)++v96 < v94 );
      }
      v98 = Entity;
      logicfunction = this->fields.logicfunction;
      funcId = v205->fields.funcId;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_157;
      skillId = (__int64)BattleLogicFunction__procList(
                           logicfunction,
                           v29,
                           funcId,
                           v95,
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
        v29->fields.commandType = changeTDCommandType;
      functionIdArray = v205->fields.funcId;
      skillId = (__int64)SkillLvEntity__getDataValsList(v205, 0LL);
      isBuffUpdate = 1;
      dataValsArray = (DataVals_array *)skillId;
      if ( baseVals && fromSkillCopyFunc )
      {
        ActorId = BattleLogicTask__getActorId(task, v102);
        if ( !BattleLogicSkill__SetSkillCopyFunction(
                this,
                v205,
                baseVals,
                &functionIdArray,
                &dataValsArray,
                ActorId,
                v106) )
          return 0LL;
        skillId = (__int64)this->fields.data;
        if ( !skillId )
          goto LABEL_157;
        skillId = BattleData__isEnemyID((BattleData_o *)skillId, v29->fields.actorId, 0LL);
        if ( (skillId & 1) != 0 )
        {
          v107 = this->fields.data;
          if ( !v107 )
            goto LABEL_157;
          v108 = v107->fields.currentTurn == 0;
        }
        else
        {
          v108 = 0;
        }
        isBuffUpdate = 0;
        v29->fields.isReversalShortBuffTurn = v108;
      }
      if ( skillInfo->fields.type == 1 )
      {
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_B0D974(
                                                               BattleLogicFunction_FunctionArgument_TypeInfo,
                                                               v102,
                                                               v103);
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_B0D974(
                                                                 BattleLogicFunction_FunctionArgument_TypeInfo,
                                                                 v102,
                                                                 v103);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        }
        overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
        if ( !overwriteFuncSideEffectArg )
        {
          overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B0D974(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v102, v103);
          BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
            (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
            0LL);
        }
        if ( !argument )
          goto LABEL_157;
        v98 = Entity;
        BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(argument, overwriteFuncSideEffectArg, 0LL);
      }
      else
      {
        v98 = Entity;
      }
      v111 = this->fields.logicfunction;
      v113 = dataValsArray;
      v112 = functionIdArray;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v111 )
        goto LABEL_157;
      skillId = (__int64)BattleLogicFunction__procList(
                           v111,
                           v29,
                           v112,
                           v113,
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
    v45 = skillId;
    if ( task->fields.actortype == 5 )
    {
      if ( !skillId )
        goto LABEL_157;
      v114 = BasicHelper__IndexValue_int__24154928(
               *(System_Collections_Generic_List_T__o **)(skillId + 288),
               0,
               0,
               (const MethodInfo_1709330 *)Method_BasicHelper_IndexValue_int___);
      v115 = *(UnityEngine_Object_o **)(v45 + 72);
      v116 = v114;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      skillId = UnityEngine_Object__op_Equality(v115, 0LL, 0LL);
      if ( v116 >= 1 && (skillId & 1) != 0 )
      {
        logic = this->fields.logic;
        if ( !logic )
          goto LABEL_157;
        skillId = (__int64)logic->fields.perf;
        if ( !skillId )
          goto LABEL_157;
        ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                     (BattlePerformance_o *)skillId,
                                                     v116,
                                                     0LL);
        *(_QWORD *)(v45 + 72) = ServantGameObject;
        sub_B0D840((BattleServantConfConponent_o *)(v45 + 72), ServantGameObject, v119, v120, v121, v122, v123, v124);
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
    if ( !v45 )
      goto LABEL_157;
    *(_BYTE *)(v45 + 92) = 0;
    skillId = (__int64)this->fields.data;
    if ( !skillId )
      goto LABEL_157;
    BattleData__setCommandAttack((BattleData_o *)skillId, 0, 0, 0LL);
    v125 = this->fields.data;
    if ( !v125 )
      goto LABEL_157;
    actionLogManager = v125->fields.actionLogManager;
    if ( !actionLogManager )
      goto LABEL_157;
    klass = actionLogManager->klass;
    if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
    {
      v128 = 0LL;
      p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
      {
        ++v128;
        p_offset += 2;
        if ( v128 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
          goto LABEL_111;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_111:
      p_method = sub_AA67A0(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
    }
    (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
      actionLogManager,
      task,
      *(_QWORD *)(p_method + 8));
    if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v45, 0LL) )
    {
      v138 = *(System_Int32_array ***)(v45 + 120);
      *(_QWORD *)(v45 + 432) = v138;
      sub_B0D840((BattleServantConfConponent_o *)(v45 + 432), v138, v132, v133, v134, v135, v136, v137);
      v139 = (System_Int32_array **)StringLiteral_1/*""*/;
      *(_QWORD *)(v45 + 120) = StringLiteral_1/*""*/;
      sub_B0D840((BattleServantConfConponent_o *)(v45 + 120), v139, v140, v141, v142, v143, v144, v145);
      v146 = (System_Int32_array ***)(v45 + 128);
      if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v45 + 128), 0LL) )
      {
        v153 = *v146;
        *(_QWORD *)(v45 + 432) = *v146;
        sub_B0D840((BattleServantConfConponent_o *)(v45 + 432), v153, v147, v148, v149, v150, v151, v152);
        v154 = (System_Int32_array **)StringLiteral_1/*""*/;
        *v146 = (System_Int32_array **)StringLiteral_1/*""*/;
        sub_B0D840((BattleServantConfConponent_o *)(v45 + 128), v154, v155, v156, v157, v158, v159, v160);
      }
    }
    type = skillInfo->fields.type;
    v162 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, v131);
    if ( !v162 )
      goto LABEL_157;
    ServantData = BattleData__getServantData(v162, skillId, 0LL);
    v166 = type != 1 && !ServantData || SkillLvEntity__IsNoTargetSkipSkill(v205, 0LL);
    if ( (v166 & (*(unsigned __int8 *)(v45 + 240) ^ 1)) == 0 && (!*(_BYTE *)(v45 + 297) || *(_BYTE *)(v45 + 298)) )
    {
      if ( task->fields.isCanCounterTask )
      {
        v168 = this->fields.data;
        skillId = BattleLogicTask__getActorId(task, v164);
        if ( !v168 )
          goto LABEL_157;
        v169 = BattleData__getServantData(v168, skillId, 0LL);
        if ( v169 )
        {
          v170 = v169;
          (*(void (__fastcall **)(__int64, struct BattleData_o *, _QWORD))(*(_QWORD *)v45 + 440LL))(
            v45,
            this->fields.data,
            *(_QWORD *)(*(_QWORD *)v45 + 448LL));
          skillId = *(_QWORD *)(v45 + 288);
          if ( !skillId )
            goto LABEL_157;
          v171 = this->fields.data;
          uniqueId = v170->fields.uniqueId;
          skillId = (__int64)System_Collections_Generic_List_int___ToArray(
                               (System_Collections_Generic_List_int__o *)skillId,
                               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v171 )
            goto LABEL_157;
          BattleData__SetWasAttackTargetIdList(v171, uniqueId, (System_Int32_array *)skillId, 0LL);
          v174 = this->fields.logic;
          if ( !v174 )
            goto LABEL_157;
          skillId = (__int64)v174->fields.logicnomal;
          if ( !skillId )
            goto LABEL_157;
          v175 = BattleLogicNomal__taskCounterFunc(
                   (BattleLogicNomal_o *)skillId,
                   this->fields.data,
                   !v170->fields.isEnemy,
                   1,
                   0,
                   v173);
          BattleLogic__addBattleLogicTask(v174, v175, 0LL);
        }
      }
      v176 = BattleLogicSkill__MakeAddInvokeSkillTask(this, skillLvMst, v205, task, v165);
      skillId = SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v205, 0LL);
      if ( this->fields.logic )
      {
        if ( (skillId & 1) != 0 )
          BattleLogic__AddTaskTargetTaskAfter(this->fields.logic, task, v176, 0LL);
        else
          BattleLogic__AddBattleLogicTask(this->fields.logic, v176, 0LL);
        v177 = this->fields.data;
        skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                    skillInfo,
                    skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v177 )
        {
          BattleData__AddUseSkillId(v177, skillId, 0LL);
          if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v45, 0LL) )
          {
            v180 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v178, v179);
            BattleLogicTask___ctor(v180, v181);
            if ( !v180 )
              goto LABEL_157;
            v180->fields.actiontype = 24;
            skillId = (__int64)this->fields.logic;
            if ( !skillId )
              goto LABEL_157;
            BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v180, 0LL);
          }
          if ( SkillEntity__GetCutinAdditionalTime(v98, 0LL) > 0.0 )
          {
            skillId = SkillEntity__getSkillCutInId(v98, 0LL);
            if ( !(_DWORD)skillId )
            {
              v188 = this->fields.logic;
              if ( !v188 )
                goto LABEL_157;
              perf = v188->fields.perf;
              CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(v98, 0LL);
              if ( !perf )
                goto LABEL_157;
              BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
              if ( *(_QWORD *)(v45 + 120) )
              {
                v191 = this->fields.data;
                if ( !v191 )
                  goto LABEL_157;
                v192 = v191->fields.perf;
                if ( !v192 )
                  goto LABEL_157;
                skillId = (__int64)v192->fields.infoComp;
                if ( !skillId )
                  goto LABEL_157;
                BattleInformationComponent__showCommonMessage(
                  (BattleInformationComponent_o *)skillId,
                  (BattleActionData_o *)v45,
                  0LL);
                *(_QWORD *)(v45 + 120) = 0LL;
                sub_B0D840((BattleServantConfConponent_o *)(v45 + 120), 0LL, v193, v194, v195, v196, v197, v198);
                *(_BYTE *)(v45 + 308) = 1;
              }
            }
          }
          if ( task->fields.IsNotShowSkillMessage )
          {
            *(_QWORD *)(v45 + 120) = 0LL;
            sub_B0D840((BattleServantConfConponent_o *)(v45 + 120), 0LL, v182, v183, v184, v185, v186, v187);
            *(_BYTE *)(v45 + 308) = 1;
          }
          if ( SkillEntity__IsCheckUpdateShiftServant(v98, 0LL) )
          {
            v201 = (CheckUpdateShiftTask_o *)sub_B0D974(CheckUpdateShiftTask_TypeInfo, v199, v200);
            CheckUpdateShiftTask___ctor(v201, 0LL);
            skillId = (__int64)this->fields.logic;
            if ( !skillId )
              goto LABEL_157;
            BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, (BattleLogicTask_o *)v201, 0LL);
          }
          return (BattleActionData_o *)v45;
        }
      }
LABEL_157:
      sub_B0D97C(skillId);
    }
    return 0LL;
  }
  return (BattleActionData_o *)v45;
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
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w22
  __int64 v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleData_o *v25; // x8
  System_Int32_array *v26; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v28; // x6
  const MethodInfo *v29; // x3
  BattleData_o *v30; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_42176F7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___TypeInfo, method);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v3);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    byte_42176F7 = 1;
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
  v13 = HitGimmickSkillId;
  v14 = sub_B0D974(BattleSkillInfoData_TypeInfo, v11, v12);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_26;
  *(_DWORD *)(v14 + 24) = -1;
  *(_QWORD *)(v14 + 16) = 20LL;
  if ( (unsigned int)v13 >= LODWORD(v7->fields.rootfsm) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(
    v14,
    *((unsigned int *)&v7->fields.fsm + v13),
    *(_QWORD *)(*(_QWORD *)v14 + 384LL));
  *(_DWORD *)(v14 + 36) = 1;
  v17 = sub_B0D974(BattleLogicTask_TypeInfo, v15, v16);
  BattleLogicTask___ctor((BattleLogicTask_o *)v17, v18);
  data = (BattleData_o *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  if ( !LODWORD(data->fields.rootfsm) )
    goto LABEL_27;
  LODWORD(data->fields.fsm) = v13;
  if ( !v17 )
    goto LABEL_26;
  *(_QWORD *)(v17 + 136) = data;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 136), (System_Int32_array **)data, v19, v20, v21, v22, v23, v24);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v25 = this->fields.data) == 0LL)
    || (v26 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v25, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v17,
          (BattleSkillInfoData_o *)v14,
          v26,
          FieldPlayerServantIDList,
          0,
          0,
          v28),
        BattleLogicTask__setActor((BattleLogicTask_o *)v17, 5, -1, v29),
        (data = (BattleData_o *)sub_B0D8BC(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(data);
  }
  v30 = data;
  data = (BattleData_o *)sub_B0D964(v17, data->klass->_1.element_class);
  if ( !data )
  {
    v39 = sub_B0D99C(0LL);
    sub_B0D948(v39, 0LL);
  }
  if ( !LODWORD(v30->fields.rootfsm) )
  {
LABEL_27:
    v38 = sub_B0D9A8(data);
    sub_B0D948(v38, 0LL);
  }
  v30->fields.fsm = (struct PlayMakerFSM_o *)v17;
  sub_B0D840((BattleServantConfConponent_o *)&v30->fields.fsm, (System_Int32_array **)v17, v31, v32, v33, v34, v35, v36);
  return (BattleLogicTask_array *)v30;
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
  BattleLogicTask_array *result; // x0
  QuestBehaviorMaster_o *v12; // x20
  int32_t v13; // w21
  int32_t Phase; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  BattleLogicTask_array *v17; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x25
  BattleLogicTask_o **m_Items; // x26
  __int64 v23; // x22
  unsigned int v24; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  BattleLogicTask_o *v27; // x23
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v32; // x6
  const MethodInfo *v33; // x3
  __int64 v34; // x0

  if ( (byte_42176F6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, method);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42176F6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  result = (BattleLogicTask_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( result )
  {
    v12 = (QuestBehaviorMaster_o *)result;
    Instance = (DataManager_o *)this->fields.data;
    if ( !Instance )
      goto LABEL_24;
    Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
    if ( !this->fields.data )
      goto LABEL_24;
    v13 = (int)Instance;
    Phase = BattleData__getPhase(this->fields.data, 0LL);
    result = (BattleLogicTask_array *)QuestBehaviorMaster__getBattleSkill(v12, v13, Phase, 0LL);
    if ( result )
    {
      v17 = result;
      v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleLogicTask__TypeInfo, v15, v16);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v18,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      if ( (int)v17->max_length >= 1 )
      {
        v21 = 0LL;
        m_Items = v17->m_Items;
        while ( 1 )
        {
          v23 = sub_B0D974(BattleSkillInfoData_TypeInfo, v19, v20);
          BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v23, 0LL);
          if ( !v23 )
            break;
          *(_DWORD *)(v23 + 24) = -1;
          *(_QWORD *)(v23 + 16) = 20LL;
          if ( (unsigned int)v21 >= v17->max_length )
            goto LABEL_25;
          Instance = (DataManager_o *)m_Items[v21];
          if ( !Instance )
            break;
          v24 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
          Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 376LL))(
                                        v23,
                                        v24,
                                        *(_QWORD *)(*(_QWORD *)v23 + 384LL));
          if ( (unsigned int)v21 >= v17->max_length )
          {
LABEL_25:
            v34 = sub_B0D9A8(Instance);
            sub_B0D948(v34, 0LL);
          }
          Instance = (DataManager_o *)m_Items[v21];
          if ( !Instance )
            break;
          *(_DWORD *)(v23 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
          v27 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v25, v26);
          BattleLogicTask___ctor(v27, v28);
          if ( !v27 )
            break;
          BattleLogicTask__setActor(v27, 5, -1, v29);
          Instance = (DataManager_o *)this->fields.data;
          if ( !Instance )
            break;
          Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          if ( !this->fields.data )
            break;
          v30 = (System_Int32_array *)Instance;
          FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
          BattleLogicTask__setActionSkill(v27, (BattleSkillInfoData_o *)v23, v30, FieldPlayerServantIDList, 0, 0, v32);
          BattleLogicTask__setActor(v27, 5, -1, v33);
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          if ( (int)++v21 >= (signed int)v17->max_length )
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
LABEL_24:
        sub_B0D97C(Instance);
      }
      if ( !v18 )
        goto LABEL_24;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v12; // x1
  __int64 v13; // x2
  BattleLogicTask_o *v14; // x22
  const MethodInfo *v15; // x1
  __int64 v16; // x0
  const MethodInfo *v17; // x4

  if ( (byte_42176F0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_42176F0 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&skillId,
                                                                                                  *(_QWORD *)&skillLv);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v14 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v12, v13);
  BattleLogicTask___ctor(v14, v15);
  if ( !v14 || (BattleLogicTask__setCommandSpell(v14, skillId, 0LL, ptTargetList, v17), !v11) )
    sub_B0D97C(v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v21; // x1
  __int64 v22; // x2
  BattleLogicTask_o *v23; // x21
  const MethodInfo *v24; // x1
  __int64 data; // x0
  const MethodInfo *v26; // x6
  bool v27; // w4
  bool v28; // w5
  BattleLogicTask_o *v29; // x0
  BattleSkillInfoData_o *v30; // x1
  System_Int32_array *v31; // x2
  int32_t svtUniqueId; // w1
  struct BattleData_o *v33; // x8
  int32_t globaltargetId; // w26
  BattleLogicTarget_o *logictarget; // x26
  int32_t v36; // w27
  const MethodInfo *v37; // x4
  Il2CppClass *v38; // x0
  BattleLogicTarget_o *v39; // x26
  int32_t v40; // w27
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  bool isPlayerID; // w0
  int32_t v44; // w2
  int32_t v45; // w1
  __int64 v47; // x0
  const MethodInfo *v48; // [xsp+10h] [xbp-60h]

  if ( (byte_42176EF & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, skillInfo);
    sub_B0D8A4(&int___TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    byte_42176EF = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  skillInfo,
                                                                                                  ptTargetList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v23 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v21, v22);
  BattleLogicTask___ctor(v23, v24);
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
      if ( !v23 )
        goto LABEL_35;
      v23->fields.isCanCounterTask = isCanCounterSkill;
      v23->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    if ( !v23 )
      goto LABEL_35;
    v27 = checkAlive;
    v28 = checkRevengeId;
    v29 = v23;
    v30 = skillInfo;
    v31 = enemyTargetList;
  }
  else
  {
    svtUniqueId = skillInfo->fields.svtUniqueId;
    if ( svtUniqueId == -1 )
      goto LABEL_15;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_35;
    data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    if ( (data & 1) != 0 )
    {
LABEL_15:
      v33 = this->fields.data;
      if ( !v33 )
        goto LABEL_35;
      globaltargetId = v33->fields.globaltargetId;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
      {
        logictarget = this->fields.logictarget;
        v36 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_35;
        globaltargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v36,
                           v36 == -1,
                           (System_Int32_array *)data,
                           v37);
      }
      v38 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_35;
      v39 = this->fields.logictarget;
      v40 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v39 )
        goto LABEL_35;
      globaltargetId = BattleLogicTarget__getTargetAiAct(
                         v39,
                         1,
                         v40,
                         0LL,
                         (System_Int32_array *)data,
                         1,
                         0,
                         0LL,
                         0LL,
                         1,
                         v48);
      v38 = int___TypeInfo;
    }
    data = sub_B0D8BC(v38, 1LL);
    if ( !data )
      goto LABEL_35;
    v31 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
    {
      v47 = sub_B0D9A8(data);
      sub_B0D948(v47, 0LL);
    }
    *(_DWORD *)(data + 32) = globaltargetId;
    if ( !v23 )
LABEL_35:
      sub_B0D97C(data);
    v27 = checkAlive;
    v28 = checkRevengeId;
    v29 = v23;
    v30 = skillInfo;
  }
  BattleLogicTask__setActionSkill(v29, v30, v31, ptTargetList, v27, v28, v26);
  v42 = skillInfo->fields.svtUniqueId;
  if ( v42 == -1 )
  {
    v45 = 1;
    v44 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_35;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, v42, 0LL);
    v44 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v45 = 2;
    else
      v45 = 3;
  }
  BattleLogicTask__setActor(v23, v45, v44, v41);
  if ( !v20 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicSkill___c___cctor(const MethodInfo *method)
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

  if ( (byte_4213BDB & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicSkill___c_TypeInfo, v1);
    byte_4213BDB = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicSkill___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicSkill___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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

  if ( (byte_4213BDC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4213BDC = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_11:
    sub_B0D97C(conditions);
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

  if ( (byte_4213BDD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_4213BDD = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_B0D97C(conditions);
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
                                                                                               (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_14;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions) >= val;
  v12 = (BattleLogicSkill___c__DisplayClass11_0_o *)sub_B0DC70(conditions);
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

  if ( (byte_4213BDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_4213BDE = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(conditions);
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

  if ( (byte_4213BDF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    byte_4213BDF = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(conditions);
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
                                                                                               (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions) >= val;
  v12 = (BattleLogicSkill___c__DisplayClass15_0_o *)sub_B0DC70(conditions);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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