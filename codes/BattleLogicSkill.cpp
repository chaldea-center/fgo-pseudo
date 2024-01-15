void __fastcall BattleLogicSkill___ctor(BattleLogicSkill_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicSkill__GetHitGimmickSkillId(
        BattleLogicSkill_o *this,
        System_Int32_array *rateArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WeightRate_int__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  int32_t Next; // w1

  if ( (byte_40FC467 & 1) == 0 )
  {
    sub_B16FFC(&Method_WeightRate_int___ctor__, rateArray);
    sub_B16FFC(&Method_WeightRate_int__getData__, v6);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v7);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v8);
    sub_B16FFC(&WeightRate_int__TypeInfo, v9);
    byte_40FC467 = 1;
  }
  if ( !rateArray )
    return -1;
  v10 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, rateArray, method, v3, v4);
  WeightRate_int____ctor(v10, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  v14 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v14 )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      if ( !v10 )
        break;
      WeightRate_int___setWeight(
        v10,
        rateArray->m_Items[v15 + 1],
        v15,
        (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      LODWORD(v14) = rateArray->max_length;
      if ( (__int64)++v15 >= (int)v14 )
        goto LABEL_12;
    }
LABEL_13:
    sub_B170D4();
  }
  if ( !v10 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v10->fields.totalweight, 0LL);
  return WeightRate_int___getData(v10, Next, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  unsigned __int64 v14; // x23
  BattleLogicSkill___c__DisplayClass16_0_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Func_int__bool__o *v21; // x22

  if ( (byte_40FC469 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, actorIndividualities);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v6);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v7);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__, v8);
    sub_B16FFC(&BattleLogicSkill___c__DisplayClass16_0_TypeInfo, v9);
    byte_40FC469 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0LL)
    || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0LL) )
  {
    return 0;
  }
  if ( !notSkillCopyTargetIndividualities )
LABEL_15:
    sub_B170D4();
  if ( (int)notSkillCopyTargetIndividualities->max_length < 1 )
    return 0;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = (BattleLogicSkill___c__DisplayClass16_0_o *)sub_B170CC(
                                                        BattleLogicSkill___c__DisplayClass16_0_TypeInfo,
                                                        v10,
                                                        v11,
                                                        v12,
                                                        v13);
    BattleLogicSkill___c__DisplayClass16_0___ctor(v15, 0LL);
    if ( v14 >= notSkillCopyTargetIndividualities->max_length )
    {
      sub_B17100(v16, v17, v18);
      sub_B170A0();
    }
    if ( !v15 )
      goto LABEL_15;
    v15->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v14 + 1];
    v21 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v17, v18, v19, v20);
    System_Func_int__bool____ctor(
      v21,
      (Il2CppObject *)v15,
      Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__25910576(
           actorIndividualities,
           (System_Func_T__bool__o *)v21,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656) )
    {
      return 1;
    }
    if ( (__int64)++v14 >= (int)notSkillCopyTargetIndividualities->max_length )
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
  BattleLogicTask_o *result; // x0
  const MethodInfo *v10; // x1
  BattleLogicTask_o *v11; // x20
  int32_t ActorId; // w0
  int32_t actortype; // w21
  int32_t v14; // w22
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleData_o *data; // x21
  int32_t Target; // w0
  bool isPlayerID; // w23
  int32_t v22; // w20
  int32_t v23; // w24
  TempBattleSkillInfoData_o *v24; // x25
  const MethodInfo *v25; // x4

  if ( (byte_40FC461 & 1) == 0 )
  {
    sub_B16FFC(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_40FC461 = 1;
  }
  if ( !skillLvMst )
    goto LABEL_13;
  result = (BattleLogicTask_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0LL);
  if ( result )
  {
    if ( baseTask )
    {
      v11 = result;
      ActorId = BattleLogicTask__getActorId(baseTask, v10);
      if ( skillLvEnt )
      {
        actortype = baseTask->fields.actortype;
        v14 = ActorId;
        if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0LL) != 1 )
        {
          isPlayerID = 0;
          goto LABEL_12;
        }
        data = this->fields.data;
        Target = BattleLogicTask__getTarget(baseTask, v15);
        if ( data )
        {
          isPlayerID = BattleData__isPlayerID(data, Target, 0LL);
          v14 = -1;
          actortype = 5;
LABEL_12:
          v23 = v11->fields.actortype;
          v22 = *(&v11->fields.actortype + 1);
          v24 = (TempBattleSkillInfoData_o *)sub_B170CC(TempBattleSkillInfoData_TypeInfo, v15, v16, v17, v18);
          TempBattleSkillInfoData___ctor(v24, v23, v22, v14, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v24, actortype, isPlayerID, v25);
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
  return result;
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
  WarQuestSelectionMaster_o *IsQuestClear_25438860; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v23; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v26; // x22
  unsigned int v27; // w24
  AddSkillData_o *v28; // x8
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FC46A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_B16FFC(&CondType_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__AddRange__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    byte_40FC46A = 1;
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
  IsQuestClear_25438860 = (WarQuestSelectionMaster_o *)CondType__IsQuestClear_25438860(
                                                         ClassBoardReleaseQuestId,
                                                         -1,
                                                         0,
                                                         0LL);
  if ( ((unsigned __int8)IsQuestClear_25438860 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_32;
    if ( !targetIds->max_length )
      goto LABEL_33;
    data = this->fields.data;
    if ( !data )
      goto LABEL_32;
    ServantData = BattleData__getServantData(data, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v23 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_25438860 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v23->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_32:
      sub_B170D4();
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v26 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_25438860;
      v27 = 0;
      while ( v27 < max_length )
      {
        v28 = classBoardAddCommandSpells->m_Items[v27];
        if ( !v28 || !v26 )
          goto LABEL_32;
        IsQuestClear_25438860 = (WarQuestSelectionMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                               v26,
                                                               &entity,
                                                               v28->fields.id,
                                                               commandSpellId,
                                                               v28->fields.lv,
                                                               0LL);
        if ( ((unsigned __int8)IsQuestClear_25438860 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_32;
          if ( !funcIdList )
            goto LABEL_32;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !entity )
            goto LABEL_32;
          v29 = (System_Collections_Generic_IEnumerable_T__o *)ClassBoardCommandSpellEntity__getDataValsList(
                                                                 entity,
                                                                 0LL);
          if ( !dataValsList )
            goto LABEL_32;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)dataValsList,
            v29,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v27 >= max_length )
          return;
      }
LABEL_33:
      sub_B17100(IsQuestClear_25438860, v19, v20);
      sub_B170A0();
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
  System_Int32_array *NotSkillCopyTargetFuncIdArray; // x0
  System_Collections_ICollection_o *v31; // x25
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x27
  unsigned __int64 v50; // x19
  __int64 v51; // x24
  DataVals_array *IsNullOrEmpty; // x0
  struct System_Int32_array *v53; // x8
  __int64 v54; // x1
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Func_int__bool__o *v58; // x20
  __int64 v59; // x20
  __int64 v60; // x3
  __int64 v61; // x4
  System_Func_int__bool__o *v62; // x20
  DataVals_o *v63; // x0
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v65; // x3
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  System_Func_int__bool__o *v70; // x20
  System_Int32_array *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-A0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-90h]
  BattleServantConfConponent_o *v88; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v89; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // [xsp+30h] [xbp-70h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-68h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-58h]

  if ( (byte_40FC468 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, skillLvEnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v15);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_B16FFC(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__, v26);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__, v27);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__, v28);
    sub_B16FFC(&BattleLogicSkill___c__DisplayClass15_0_TypeInfo, v29);
    byte_40FC468 = 1;
  }
  if ( !copyFuncVals )
    goto LABEL_45;
  CopyTargetFunctionTypeArray = (System_Collections_ICollection_o *)DataVals__GetCopyTargetFunctionTypeArray(
                                                                      copyFuncVals,
                                                                      0LL);
  self = (System_Collections_ICollection_o *)DataVals__GetCopyTargetBuffTypeArray(copyFuncVals, 0LL);
  NotSkillCopyTargetFuncIdArray = DataVals__GetNotSkillCopyTargetFuncIdArray(copyFuncVals, 0LL);
  if ( !this->fields.data )
    goto LABEL_45;
  v31 = (System_Collections_ICollection_o *)NotSkillCopyTargetFuncIdArray;
  ServantData = BattleData__getServantData(this->fields.data, actorId, 0LL);
  if ( !skillLvEnt )
    goto LABEL_45;
  v33 = ServantData;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0LL);
  actorIndividualities = v33 ? BattleServantData__getConcatServantAndBuffIndividualityies(v33, 0LL, 0, 0, 0, 0LL) : 0LL;
  v88 = (BattleServantConfConponent_o *)dataValsArray;
  v89 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v34,
                                                    v35,
                                                    v36,
                                                    v37);
  System_Collections_Generic_List_int____ctor(
    v89,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DataVals__TypeInfo,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40,
                                                                                                  v41);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v90,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
    goto LABEL_45;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v50 = 0LL;
  while ( (__int64)v50 < (int)funcId->max_length )
  {
    v51 = sub_B170CC(BattleLogicSkill___c__DisplayClass15_0_TypeInfo, v44, v45, v46, v47);
    BattleLogicSkill___c__DisplayClass15_0___ctor((BattleLogicSkill___c__DisplayClass15_0_o *)v51, 0LL);
    v53 = skillLvEnt->fields.funcId;
    if ( !v53 )
      goto LABEL_45;
    if ( v50 >= v53->max_length )
      goto LABEL_50;
    if ( !v51 )
      goto LABEL_45;
    *(_DWORD *)(v51 + 16) = v53->m_Items[v50 + 1];
    if ( BasicHelper__IsNullOrEmpty(v31, 0LL)
      || (v58 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v54, v45, v46, v47),
          System_Func_int__bool____ctor(
            v58,
            (Il2CppObject *)v51,
            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__,
            (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
          !BasicHelper__Any_int__25910576(
             (System_Int32_array *)v31,
             (System_Func_T__bool__o *)v58,
             (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656)) )
    {
      *(_QWORD *)(v51 + 24) = 0LL;
      v59 = v51 + 24;
      sub_B16F98((BattleServantConfConponent_o *)(v51 + 24), 0LL, v45, v46, v47, v55, v56, v57);
      if ( !v49 )
        goto LABEL_45;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v49,
             (WarEntity_o **)(v51 + 24),
             *(_DWORD *)(v51 + 16),
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__) )
      {
        if ( !*(_QWORD *)v59 )
          goto LABEL_45;
        if ( !FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v59 + 24LL), 0LL) )
        {
          if ( !*(_QWORD *)v59 )
            goto LABEL_45;
          if ( !FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v59 + 24LL), 0LL) )
          {
            if ( !*(_QWORD *)v59 )
              goto LABEL_45;
            if ( !FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v59 + 24LL), 0LL) )
            {
              if ( !DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL) )
                goto LABEL_29;
              if ( !*(_QWORD *)v59 )
                goto LABEL_45;
              if ( Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v59 + 28LL), 0LL) )
              {
LABEL_29:
                IsNullOrEmpty = (DataVals_array *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v59 )
                  goto LABEL_45;
                IsNullOrEmpty = (DataVals_array *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v59 + 24LL), 0LL);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0
                  || (v62 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v44, v45, v60, v61),
                      System_Func_int__bool____ctor(
                        v62,
                        (Il2CppObject *)v51,
                        Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__,
                        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
                      IsNullOrEmpty = (DataVals_array *)BasicHelper__Any_int__25910576(
                                                          (System_Int32_array *)self,
                                                          (System_Func_T__bool__o *)v62,
                                                          (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656),
                      ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_45;
                  if ( v50 >= SetTypeDataValArray->max_length )
                  {
LABEL_50:
                    sub_B17100(IsNullOrEmpty, v44, v45);
                    sub_B170A0();
                  }
                  v63 = SetTypeDataValArray->m_Items[v50];
                  if ( !v63 )
                    goto LABEL_45;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              v63,
                                                                              0LL);
                  if ( !BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                          NotSkillCopyTargetIndividualities,
                          actorIndividualities,
                          (System_Int32_array *)NotSkillCopyTargetIndividualities,
                          v65) )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v70 = (System_Func_int__bool__o *)sub_B170CC(
                                                              System_Func_int__bool__TypeInfo,
                                                              v66,
                                                              v67,
                                                              v68,
                                                              v69),
                          System_Func_int__bool____ctor(
                            v70,
                            (Il2CppObject *)v51,
                            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__,
                            (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
                          BasicHelper__Any_int__25910576(
                            (System_Int32_array *)CopyTargetFunctionTypeArray,
                            (System_Func_T__bool__o *)v70,
                            (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656)) )
                    {
                      if ( !v89 )
                        goto LABEL_45;
                      System_Collections_Generic_List_int___Add(
                        v89,
                        *(_DWORD *)(v51 + 16),
                        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                      IsNullOrEmpty = SkillLvEntity__getDataValsList(skillLvEnt, 0LL);
                      if ( !IsNullOrEmpty )
                        goto LABEL_45;
                      if ( v50 >= IsNullOrEmpty->max_length )
                        goto LABEL_50;
                      if ( !v90 )
                        goto LABEL_45;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v90,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty->m_Items[v50],
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_DataVals__Add__);
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
    ++v50;
    if ( !funcId )
      goto LABEL_45;
  }
  if ( !v89
    || (v71 = System_Collections_Generic_List_int___ToArray(
                v89,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        *functionIdArray = v71,
        sub_B16F98(
          (BattleServantConfConponent_o *)functionIdArray,
          (System_Int32_array **)v71,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77),
        !v90)
    || (v78 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v90,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        v88->klass = (BattleServantConfConponent_c *)v78,
        sub_B16F98(v88, v78, v79, v80, v81, v82, v83, v84),
        !*functionIdArray) )
  {
LABEL_45:
    sub_B170D4();
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
  __int64 v26; // x3
  __int64 v27; // x4
  BattleActionData_o *v28; // x23
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  SkillEntity_o *v34; // x27
  WebViewManager_o *v35; // x0
  SkillLvMaster_o *v36; // x0
  SkillLvEntity_o *v37; // x26
  System_Int32_array *Individualities; // x28
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x28
  int32_t Rarity; // w0
  __int64 v42; // x25
  __int64 v43; // x28
  int32_t v44; // w0
  BattleLogic_o *logic; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  BattleLogicFunction_FunctionArgument_o *argument; // x25
  bool v51; // w20
  BattleLogicFunction_o *logicfunction; // x21
  System_Int32_array *funcId; // x22
  DataVals_array *DataValsList; // x0
  struct BattleBuffData_o *buffData; // x8
  System_Collections_Generic_List_int__o *unfixedBuffList; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  BattleData_o *v61; // x20
  BattleLogicSkill___c_c *v62; // x0
  struct BattleLogicSkill___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__9_0; // x21
  Il2CppObject *v65; // x22
  struct BattleLogicSkill___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  BattleLogic_o *v73; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_40FC462 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleServantData___ctor__, skillInfo);
    sub_B16FFC(&System_Action_BattleServantData__TypeInfo, v9);
    sub_B16FFC(&BattleActionData_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B16FFC(&BattleLogicFunction_FunctionArgument_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__, v18);
    sub_B16FFC(&BattleLogicSkill___c_TypeInfo, v19);
    byte_40FC462 = 1;
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
  v28 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v24, v25, v26, v27);
  BattleActionData___ctor(v28, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  ServantData = BattleData__getServantData(data, svtUniqueId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v23,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v34 = Entity;
    if ( !SkillEntity__isActive(Entity, 0LL) )
    {
      v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v35 )
      {
        v36 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v35,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( v36 )
        {
          v37 = SkillLvMaster__GetEntity(v36, v23, skilllv, 0LL);
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_38;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v34, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            if ( RarityRestrictedSkillUtil__IsDisabled(v37, svtdata, Rarity, 0LL) )
              return;
          }
          if ( v28 )
          {
            v28->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v43 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v42 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v74.fields.currentCryptoKey = v43;
              *(_QWORD *)&v74.fields.fakeValue = v42;
              v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v74, 0LL);
              v28->fields.motionId = SkillEntity__GetMotionId(v34, v44, 0LL);
              v28->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v28->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v28->fields.cardIndex = skillInfo->fields.index;
              logic = this->fields.logic;
              if ( logic )
              {
                BattleLogic__updateResultServant(logic, 0LL);
                argument = (BattleLogicFunction_FunctionArgument_o *)sub_B170CC(
                                                                       BattleLogicFunction_FunctionArgument_TypeInfo,
                                                                       v46,
                                                                       v47,
                                                                       v48,
                                                                       v49);
                BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                if ( argument )
                {
                  argument->fields.grantSkillType = skillInfo->fields.type;
                  argument->fields.isDeckDataLoad = isDeckDataLoad;
                  if ( v37 )
                  {
                    v51 = isShift;
                    logicfunction = this->fields.logicfunction;
                    funcId = v37->fields.funcId;
                    DataValsList = SkillLvEntity__getDataValsList(v37, 0LL);
                    if ( logicfunction )
                    {
                      BattleLogicFunction__procList(
                        logicfunction,
                        v28,
                        funcId,
                        DataValsList,
                        1,
                        1,
                        0,
                        v51,
                        0,
                        1,
                        1,
                        argument,
                        v37->fields.skillId,
                        0LL);
                      buffData = ServantData->fields.buffData;
                      if ( buffData )
                      {
                        unfixedBuffList = buffData->fields.unfixedBuffList;
                        if ( unfixedBuffList )
                        {
                          System_Collections_Generic_List_int___Clear(
                            unfixedBuffList,
                            (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
                          v61 = this->fields.data;
                          v62 = BattleLogicSkill___c_TypeInfo;
                          if ( (BYTE3(BattleLogicSkill___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                            v62 = BattleLogicSkill___c_TypeInfo;
                          }
                          static_fields = v62->static_fields;
                          _9__9_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__9_0;
                          if ( !_9__9_0 )
                          {
                            if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(v62);
                              static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                            }
                            v65 = (Il2CppObject *)static_fields->__9;
                            _9__9_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(System_Action_BattleServantData__TypeInfo, v57, v58, v59, v60);
                            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                              _9__9_0,
                              v65,
                              Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__,
                              (const MethodInfo_24B7310 *)Method_System_Action_BattleServantData___ctor__);
                            v66 = BattleLogicSkill___c_TypeInfo->static_fields;
                            v66->__9__9_0 = (struct System_Action_BattleServantData__o *)_9__9_0;
                            sub_B16F98(
                              (BattleServantConfConponent_o *)&v66->__9__9_0,
                              (System_Int32_array **)_9__9_0,
                              v67,
                              v68,
                              v69,
                              v70,
                              v71,
                              v72);
                          }
                          if ( v61 )
                          {
                            BattleData__ExecFuncAllServant(v61, (System_Action_BattleServantData__o *)_9__9_0, 0LL);
                            v73 = this->fields.logic;
                            if ( v73 )
                            {
                              BattleLogic__updateConditionsBuffAll(v73, 0LL);
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
      sub_B170D4();
    }
  }
}


bool __fastcall BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
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
  __int64 v36; // x1
  __int64 v37; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v46; // x22
  int32_t v47; // w0
  SkillLvEntity_o *Entity; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **script; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Func_BattleBuffData_BuffData__int__bool__o *v61; // x25
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Func_BattleBuffData_BuffData__int__bool__o *v66; // x24
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Func_string__double__bool__o *v71; // x23
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Func_string__double__bool__o *v76; // x22
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v79; // x21
  int32_t NPVal; // w0
  int32_t v81; // w0
  struct BattleData_o *v82; // x8
  struct BattleData_o *v83; // x8
  int32_t NowHp; // w0
  int32_t v85; // w0
  int32_t v86; // w20
  int32_t MaxHp; // w0
  int32_t v88; // w20
  int32_t v89; // w0
  __int64 *v91; // x8
  System_String_o *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7

  if ( (byte_40FC464 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v8);
    sub_B16FFC(&Method_System_Func_string__int__bool__Invoke__, v9);
    sub_B16FFC(&Method_System_Func_string__double__bool__Invoke__, v10);
    sub_B16FFC(&Method_System_Func_string__double__bool___ctor__, v11);
    sub_B16FFC(&Method_System_Func_string__int__bool___ctor__, v12);
    sub_B16FFC(&System_Func_string__double__bool__TypeInfo, v13);
    sub_B16FFC(&System_Func_string__int__bool__TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__, v17);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__, v18);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__, v19);
    sub_B16FFC(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__, v20);
    sub_B16FFC(&BattleLogicSkill___c__DisplayClass11_0_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_2512/*"BATTLE_SKILLERROR_NP_LOWER"*/, v22);
    sub_B16FFC(&StringLiteral_2510/*"BATTLE_SKILLERROR_HP_LOWER"*/, v23);
    sub_B16FFC(&StringLiteral_12308/*"STAR_HIGHER"*/, v24);
    sub_B16FFC(&StringLiteral_7065/*"HP_PER_LOWER"*/, v25);
    sub_B16FFC(&StringLiteral_2511/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v26);
    sub_B16FFC(&StringLiteral_2509/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v27);
    sub_B16FFC(&StringLiteral_7064/*"HP_PER_HIGHER"*/, v28);
    sub_B16FFC(&StringLiteral_2513/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v29);
    sub_B16FFC(&StringLiteral_9350/*"NP_HIGHER"*/, v30);
    sub_B16FFC(&StringLiteral_2514/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v31);
    sub_B16FFC(&StringLiteral_7066/*"HP_VAL_HIGHER"*/, v32);
    sub_B16FFC(&StringLiteral_12309/*"STAR_LOWER"*/, v33);
    sub_B16FFC(&StringLiteral_1/*""*/, v34);
    sub_B16FFC(&StringLiteral_9351/*"NP_LOWER"*/, v35);
    sub_B16FFC(&StringLiteral_7067/*"HP_VAL_LOWER"*/, v36);
    byte_40FC464 = 1;
  }
  v37 = sub_B170CC(BattleLogicSkill___c__DisplayClass11_0_TypeInfo, skillInfo, text, method, v4);
  BattleLogicSkill___c__DisplayClass11_0___ctor((BattleLogicSkill___c__DisplayClass11_0_o *)v37, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)text, (System_Int32_array **)StringLiteral_1/*""*/, v38, v39, v40, v41, v42, v43);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_53;
  v46 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  v47 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v46 )
    goto LABEL_53;
  Entity = SkillLvMaster__GetEntity(v46, v47, skillInfo->fields.skilllv, 0LL);
  if ( !Entity || !v37 )
    goto LABEL_53;
  script = (System_Int32_array **)Entity->fields.script;
  *(_QWORD *)(v37 + 16) = script;
  sub_B16F98((BattleServantConfConponent_o *)(v37 + 16), script, v49, v50, v51, v52, v53, v54);
  v56 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v37 + 16);
  if ( !v56 )
    return 1;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         v56,
         (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v61 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B170CC(
                                                               System_Func_string__int__bool__TypeInfo,
                                                               v57,
                                                               v58,
                                                               v59,
                                                               v60);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v61,
    (Il2CppObject *)v37,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__,
    (const MethodInfo_2B74740 *)Method_System_Func_string__int__bool___ctor__);
  v66 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B170CC(
                                                               System_Func_string__int__bool__TypeInfo,
                                                               v62,
                                                               v63,
                                                               v64,
                                                               v65);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v66,
    (Il2CppObject *)v37,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__,
    (const MethodInfo_2B74740 *)Method_System_Func_string__int__bool___ctor__);
  v71 = (System_Func_string__double__bool__o *)sub_B170CC(
                                                 System_Func_string__double__bool__TypeInfo,
                                                 v67,
                                                 v68,
                                                 v69,
                                                 v70);
  System_Func_string__double__bool____ctor(
    v71,
    (Il2CppObject *)v37,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__,
    (const MethodInfo_2B742CC *)Method_System_Func_string__double__bool___ctor__);
  v76 = (System_Func_string__double__bool__o *)sub_B170CC(
                                                 System_Func_string__double__bool__TypeInfo,
                                                 v72,
                                                 v73,
                                                 v74,
                                                 v75);
  System_Func_string__double__bool____ctor(
    v76,
    (Il2CppObject *)v37,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__,
    (const MethodInfo_2B742CC *)Method_System_Func_string__double__bool___ctor__);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  ServantData = BattleData__getServantData(data, skillInfo->fields.svtUniqueId, 0LL);
  if ( !ServantData )
    goto LABEL_53;
  v79 = ServantData;
  NPVal = BattleServantData__getNPVal(ServantData, 0LL);
  if ( !v61 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v61,
          (BattleBuffData_BuffData_o *)StringLiteral_9350/*"NP_HIGHER"*/,
          NPVal,
          (const MethodInfo_2B74754 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = &StringLiteral_2511/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_52;
  }
  v81 = BattleServantData__getNPVal(v79, 0LL);
  if ( !v66 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v66,
          (BattleBuffData_BuffData_o *)StringLiteral_9351/*"NP_LOWER"*/,
          v81,
          (const MethodInfo_2B74754 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = &StringLiteral_2512/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_52;
  }
  v82 = this->fields.data;
  if ( !v82 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v61,
          (BattleBuffData_BuffData_o *)StringLiteral_12308/*"STAR_HIGHER"*/,
          v82->fields.totalCriticalStars,
          (const MethodInfo_2B74754 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = &StringLiteral_2513/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_52;
  }
  v83 = this->fields.data;
  if ( !v83 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v66,
          (BattleBuffData_BuffData_o *)StringLiteral_12309/*"STAR_LOWER"*/,
          v83->fields.totalCriticalStars,
          (const MethodInfo_2B74754 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = &StringLiteral_2514/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_52;
  }
  NowHp = BattleServantData__getNowHp(v79, 0LL);
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v61,
          (BattleBuffData_BuffData_o *)StringLiteral_7066/*"HP_VAL_HIGHER"*/,
          NowHp,
          (const MethodInfo_2B74754 *)Method_System_Func_string__int__bool__Invoke__) )
  {
LABEL_44:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v91 = &StringLiteral_2509/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_52;
  }
  v85 = BattleServantData__getNowHp(v79, 0LL);
  if ( System_Func_BattleBuffData_BuffData__int__bool___Invoke(
         v66,
         (BattleBuffData_BuffData_o *)StringLiteral_7067/*"HP_VAL_LOWER"*/,
         v85,
         (const MethodInfo_2B74754 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    v86 = BattleServantData__getNowHp(v79, 0LL);
    MaxHp = BattleServantData__getMaxHp(v79, 0LL);
    if ( !v71 )
      goto LABEL_53;
    if ( System_Func_string__double__bool___Invoke(
           v71,
           (System_String_o *)StringLiteral_7064/*"HP_PER_HIGHER"*/,
           (double)v86 * 1000.0 / (double)MaxHp,
           (const MethodInfo_2B742E0 *)Method_System_Func_string__double__bool__Invoke__) )
    {
      v88 = BattleServantData__getNowHp(v79, 0LL);
      v89 = BattleServantData__getMaxHp(v79, 0LL);
      if ( v76 )
      {
        if ( System_Func_string__double__bool___Invoke(
               v76,
               (System_String_o *)StringLiteral_7065/*"HP_PER_LOWER"*/,
               (double)v88 * 1000.0 / (double)v89,
               (const MethodInfo_2B742E0 *)Method_System_Func_string__double__bool__Invoke__) )
        {
          return 1;
        }
        goto LABEL_48;
      }
LABEL_53:
      sub_B170D4();
    }
    goto LABEL_44;
  }
LABEL_48:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v91 = &StringLiteral_2510/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_52:
  v92 = LocalizationManager__Get((System_String_o *)*v91, 0LL);
  *text = v92;
  sub_B16F98((BattleServantConfConponent_o *)text, (System_Int32_array **)v92, v93, v94, v95, v96, v97, v98);
  return 0;
}


BattleActionData_o *__fastcall BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x22
  System_Int32_array **skillInfo; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x21
  int32_t v24; // w0
  WarEntity_o *Entity; // x0
  WarEntity_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleActionData_c *v33; // x0
  System_Int32_array **ptTarget; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleLogic_o *logic; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_List_int__o *v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x25
  System_Collections_Generic_IEnumerable_T__o *DataValsList; // x0
  const MethodInfo *v53; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v55; // x24
  DataVals_array *v56; // x25
  int32_t skillId; // w0
  BattleActionData_o *v58; // x0
  BattleActionData_o *v59; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v63; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  struct BattleLogic_o *v66; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_40FC463 & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, task);
    sub_B16FFC(&BattleActionLogManagerInterface_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_DataVals___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_DataVals__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FC463 = 1;
  }
  v19 = sub_B170CC(BattleActionData_TypeInfo, task, method, v3, v4);
  BattleActionData___ctor((BattleActionData_o *)v19, 0LL);
  if ( !task )
    goto LABEL_30;
  skillInfo = (System_Int32_array **)task->fields.skillInfo;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_30;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v24 = (*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
          skillInfo,
          *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !v23 )
    goto LABEL_30;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v23,
             v24,
             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v19 )
    goto LABEL_30;
  v26 = Entity;
  BattleActionData__setStateField((BattleActionData_o *)v19, 0LL);
  *(_DWORD *)(v19 + 32) = -1;
  if ( !v26 )
    goto LABEL_30;
  *(_DWORD *)(v19 + 48) = HIDWORD(v26->fields.age);
  v33 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v33 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v19 + 56) = v33->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = (System_Int32_array **)task->fields.ptTarget;
  *(_QWORD *)(v19 + 40) = ptTarget;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 40), ptTarget, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v19 + 144) = skillInfo;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 144), skillInfo, v35, v36, v37, v38, v39, v40);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_30;
  BattleLogic__updateResultServant(logic, 0LL);
  v46 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v42,
                                                    v43,
                                                    v44,
                                                    v45);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_DataVals__TypeInfo,
                                                                                                  v47,
                                                                                                  v48,
                                                                                                  v49,
                                                                                                  v50);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v46 )
    goto LABEL_30;
  System_Collections_Generic_List_int___AddRange(
    v46,
    *(System_Collections_Generic_IEnumerable_T__o **)&v26->fields.bannerId,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  DataValsList = (System_Collections_Generic_IEnumerable_T__o *)CommandSpellEntity__getDataValsList(
                                                                  (CommandSpellEntity_o *)v26,
                                                                  0LL);
  if ( !v51 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v51,
    DataValsList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v26->fields.id,
    task->fields.ptTarget,
    v46,
    (System_Collections_Generic_List_DataVals__o *)v51,
    v53);
  logicfunction = this->fields.logicfunction;
  v55 = System_Collections_Generic_List_int___ToArray(
          v46,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v56 = (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
              skillInfo,
              *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !logicfunction )
    goto LABEL_30;
  v58 = BattleLogicFunction__procList(
          logicfunction,
          (BattleActionData_o *)v19,
          v55,
          v56,
          0,
          1,
          0,
          0,
          0,
          1,
          1,
          0LL,
          skillId,
          0LL);
  if ( !this->fields.logic )
    goto LABEL_30;
  v59 = v58;
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
    v63 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v63;
      p_offset += 2;
      if ( v63 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AAFEF8(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v26, 0LL) > 0.0 )
  {
    v66 = this->fields.logic;
    if ( v66 )
    {
      perf = v66->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v26, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v59;
      }
    }
LABEL_30:
    sub_B170D4();
  }
  return v59;
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
  v5 = BattleLogicSkill__createSkillData_29250012(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_B170D4();
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_29250012(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  BattleData_o *data; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleActionData_o *v29; // x22
  BattleActionData_o *v30; // x25
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleBoostItemInfoData_o *skillInfo; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x21
  int32_t v41; // w0
  SkillEntity_o *Entity; // x21
  WebViewManager_o *v43; // x0
  SkillLvMaster_o *v44; // x24
  int32_t v45; // w0
  const MethodInfo *v46; // x1
  SkillLvEntity_o *v47; // x24
  BattleActionData_c *v48; // x8
  struct BattleActionData_StaticFields **p_static_fields; // x9
  __int64 v50; // x10
  BattleData_o *v51; // x23
  int32_t ActorId; // w0
  BattleServantData_o *ServantData; // x0
  BattleActionData_o *v54; // x28
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v56; // x0
  BattleData_o *v57; // x23
  int32_t ActNpcServantId; // w0
  BattleServantData_o *EnemyServantData; // x0
  const MethodInfo *v60; // x1
  BattleLogicSkill_o *v61; // x28
  SkillLvEntity_o *v62; // x20
  SkillEntity_o *v63; // x24
  DataVals_o *v64; // x21
  bool v65; // w26
  __int64 v66; // x23
  __int64 v67; // x27
  BattleData_o *v68; // x23
  int32_t v69; // w0
  int32_t ServantId; // w0
  const MethodInfo *v71; // x1
  System_Int32_array **ptTarget; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **Name; // x0
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
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  BattleData_o *v98; // x0
  System_String_array *GimmickStartVoiceArray; // x0
  System_String_array *v100; // x23
  System_Object_array *GimmickResultVoiceArray; // x0
  System_Object_array *v102; // x28
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  BattleServantConfConponent_o *p_motionMessage; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  int32_t actortype; // w8
  System_Int32_array **effectList; // x1
  BattleLogic_o *logic; // x0
  DataVals_array *DataValsList; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  int max_length; // w10
  DataVals_array *v119; // x26
  unsigned int v120; // w8
  DataVals_o *v121; // x10
  BattleLogicFunction_o *logicfunction; // x23
  System_Int32_array *funcId; // x27
  int32_t skillId; // w0
  BattleActionData_o *v125; // x0
  int32_t changeTDCommandType; // w8
  const MethodInfo *v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  int32_t v131; // w0
  const MethodInfo *v132; // x6
  BattleData_o *v133; // x0
  struct BattleData_o *v134; // x8
  bool v135; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  BattleLogicFunction_o *v137; // x23
  System_Int32_array *v138; // x27
  DataVals_array *v139; // x28
  int32_t v140; // w0
  int32_t v141; // w0
  UnityEngine_Object_o *targetObject; // x23
  int32_t v143; // w26
  bool v144; // w0
  struct BattleLogic_o *v145; // x8
  BattlePerformance_o *perf; // x0
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  BattleLogic_o *v154; // x0
  BattleData_o *v155; // x0
  struct BattleData_o *v156; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v159; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v162; // x1
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  System_Int32_array **skillMessage; // x1
  System_Int32_array **v170; // x1
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array ***v177; // x25
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Int32_array **v184; // x1
  System_Int32_array **v185; // x1
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  int32_t type; // w25
  BattleData_o *v193; // x23
  int32_t v194; // w0
  BattleServantData_o *v195; // x0
  const MethodInfo *v196; // x1
  const MethodInfo *v197; // x4
  _BOOL4 v198; // w8
  BattleData_o *v200; // x23
  int32_t v201; // w0
  BattleServantData_o *v202; // x0
  BattleServantData_o *v203; // x25
  System_Collections_Generic_List_int__o *funcTargetList; // x0
  BattleData_o *v205; // x23
  int32_t uniqueId; // w26
  System_Int32_array *v207; // x0
  const MethodInfo *v208; // x5
  struct BattleLogic_o *v209; // x23
  BattleLogicNomal_o *logicnomal; // x0
  BattleLogicTask_array *v211; // x0
  BattleLogic_o *v212; // x23
  BattleLogicTask_o *v213; // x0
  BattleData_o *v214; // x23
  int32_t v215; // w0
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x3
  __int64 v219; // x4
  BattleLogicTask_o *v220; // x22
  const MethodInfo *v221; // x1
  BattleLogic_o *v222; // x0
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  struct BattleLogic_o *v229; // x8
  BattlePerformance_o *v230; // x22
  float CutinAdditionalTime; // s0
  struct BattleData_o *v232; // x8
  struct BattlePerformance_o *v233; // x8
  BattleInformationComponent_o *infoComp; // x0
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  bool v241; // [xsp+34h] [xbp-6Ch]
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-68h]
  DataVals_array *dataValsArray; // [xsp+40h] [xbp-60h] BYREF
  System_Int32_array *functionIdArray; // [xsp+48h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v245; // 0:x0.16

  if ( (byte_40FC460 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int___, task);
    sub_B16FFC(&BattleActionData_TypeInfo, v11);
    sub_B16FFC(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_B16FFC(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v17);
    sub_B16FFC(&BattleLogicFunction_FunctionArgument_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_1/*""*/, v23);
    byte_40FC460 = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_143;
  BattleData__ResetWasAttackTargetId(data, 0LL);
  v29 = (BattleActionData_o *)sub_B170CC(BattleActionData_TypeInfo, v25, v26, v27, v28);
  BattleActionData___ctor(v29, 0LL);
  if ( !v29 )
    goto LABEL_143;
  v30 = BattleActionData__AddDisplayTriggerIntervalBuff(v29, task, 0LL);
  *baseActionData = v30;
  sub_B16F98((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  if ( !task )
    goto LABEL_143;
  if ( !v30 )
    goto LABEL_143;
  v30->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_143;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_143;
  v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v41 = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v40 )
    goto LABEL_143;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v40,
                              v41,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v43 )
    goto LABEL_143;
  v44 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v43,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v45 = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v44 )
    goto LABEL_143;
  skillLvMst = v44;
  v47 = SkillLvMaster__GetEntity(v44, v45, skillInfo->fields.skilllv, 0LL);
  v30->fields.isCounter = task->fields.isCounter;
  v48 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v48 = BattleActionData_TypeInfo;
  }
  p_static_fields = &v48->static_fields;
  v30->fields.type = v48->static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      p_static_fields = &BattleActionData_TypeInfo->static_fields;
    }
    v30->fields.type = (*p_static_fields)->TYPE_BOOSTSKILL;
    v30->fields.imageId = skillInfo->fields.itemImageId;
    v50 = *(&BattleBoostItemInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v50
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[v50 - 1] == BattleBoostItemInfoData_TypeInfo
      && BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL) )
    {
      v30->fields.noOperation = 1;
    }
  }
  if ( !task->fields.checkAlive )
    goto LABEL_147;
  v51 = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, v46);
  if ( !v51 )
    goto LABEL_143;
  ServantData = BattleData__getServantData(v51, ActorId, 0LL);
  if ( !ServantData || (v54 = 0LL, BattleServantData__isAlive(ServantData, 0, 0LL)) )
  {
LABEL_147:
    if ( task->fields.isForcedSpeedOne )
    {
      isForcedSkillSpeedOne = 1;
    }
    else
    {
      if ( !Entity )
        goto LABEL_143;
      if ( !SkillEntity__isForcedSkillSpeedOne(Entity, 0LL) )
        goto LABEL_34;
      v56 = this->fields.data;
      if ( !v56 )
        goto LABEL_143;
      if ( BattleData__checkEnablePlaySpeedOneFromSkillIdList(v56, Entity->fields.id, 0LL) )
        isForcedSkillSpeedOne = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
      else
LABEL_34:
        isForcedSkillSpeedOne = 0;
    }
    v30->fields.actorId = BattleLogicTask__getActorId(task, v46);
    if ( !v47 )
      goto LABEL_143;
    v57 = this->fields.data;
    ActNpcServantId = SkillLvEntity__GetActNpcServantId(v47, 0LL);
    if ( !v57 )
      goto LABEL_143;
    EnemyServantData = BattleData__getEnemyServantData(v57, ActNpcServantId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v241 = isForcedSkillSpeedOne;
      v61 = this;
      v62 = v47;
      v63 = Entity;
      v64 = baseVals;
      v65 = fromSkillCopyFunc;
      v67 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v66 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v245.fields.currentCryptoKey = v67;
      *(_QWORD *)&v245.fields.fakeValue = v66;
      fromSkillCopyFunc = v65;
      baseVals = v64;
      Entity = v63;
      v47 = v62;
      this = v61;
      isForcedSkillSpeedOne = v241;
      v30->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v245, 0LL);
    }
    v68 = this->fields.data;
    v69 = BattleLogicTask__getActorId(task, v60);
    if ( !v68 )
      goto LABEL_143;
    ServantId = BattleData__getServantId(v68, v69, 0LL);
    if ( !Entity )
      goto LABEL_143;
    v30->fields.motionId = SkillEntity__GetMotionId(Entity, ServantId, 0LL);
    v30->fields.targetId = BattleLogicTask__getTarget(task, v71);
    ptTarget = (System_Int32_array **)task->fields.ptTarget;
    v30->fields.pttargetIds = (struct System_Int32_array *)ptTarget;
    sub_B16F98((BattleServantConfConponent_o *)&v30->fields.pttargetIds, ptTarget, v73, v74, v75, v76, v77, v78);
    Name = (System_Int32_array **)SkillEntity__getName(Entity, 0LL);
    v30->fields.skillMessage = (struct System_String_o *)Name;
    sub_B16F98((BattleServantConfConponent_o *)&v30->fields.skillMessage, Name, v80, v81, v82, v83, v84, v85);
    v30->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->fields.skillInfo,
      (System_Int32_array **)skillInfo,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
    v30->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v30->fields.checkRevengeId = task->fields.checkRevengeId;
    if ( task->fields.gimmickIndexArray )
    {
      v98 = this->fields.data;
      if ( !v98 )
        goto LABEL_143;
      GimmickStartVoiceArray = BattleData__GetGimmickStartVoiceArray(v98, 0LL);
      if ( !this->fields.data )
        goto LABEL_143;
      v100 = GimmickStartVoiceArray;
      GimmickResultVoiceArray = BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
      if ( !this->fields.data )
        goto LABEL_143;
      v102 = GimmickResultVoiceArray;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
      BattleActionData__SetGimmickData(v30, task->fields.gimmickIndexArray, v100, v102, GimmickAnimTypeArray, 0LL);
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields.m_stringLength >= 1 )
    {
      v30->fields.motionMessage = motionMessage;
      p_motionMessage = (BattleServantConfConponent_o *)&v30->fields.motionMessage;
    }
    else
    {
      v30->fields.motionMessage = 0LL;
      p_motionMessage = (BattleServantConfConponent_o *)&v30->fields.motionMessage;
      motionMessage = 0LL;
    }
    sub_B16F98(p_motionMessage, (System_Int32_array **)motionMessage, v92, v93, v94, v95, v96, v97);
    actortype = task->fields.actortype;
    if ( actortype == 5 || actortype == 1 )
      BattleActionData__setStateField(v30, 0LL);
    effectList = (System_Int32_array **)Entity->fields.effectList;
    v30->fields.effectlist = (struct System_Int32_array *)effectList;
    sub_B16F98((BattleServantConfConponent_o *)&v30->fields.effectlist, effectList, v106, v107, v108, v109, v110, v111);
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_143;
    BattleLogic__updateResultServant(logic, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      DataValsList = SkillLvEntity__getDataValsList(v47, 0LL);
      if ( !DataValsList )
        goto LABEL_143;
      max_length = DataValsList->max_length;
      v119 = DataValsList;
      if ( max_length >= 1 )
      {
        v120 = 0;
        do
        {
          if ( v120 >= max_length )
          {
            sub_B17100(DataValsList, v116, v117);
            sub_B170A0();
          }
          v121 = DataValsList->m_Items[v120];
          if ( !v121 )
            goto LABEL_143;
          v121->fields.flgBoost = 1;
          max_length = DataValsList->max_length;
        }
        while ( (int)++v120 < max_length );
      }
      logicfunction = this->fields.logicfunction;
      funcId = v47->fields.funcId;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_143;
      v125 = BattleLogicFunction__procList(logicfunction, v30, funcId, v119, 1, 1, 0, 0, 0, 1, 1, 0LL, skillId, 0LL);
    }
    else
    {
      changeTDCommandType = skillInfo->fields.changeTDCommandType;
      if ( (changeTDCommandType & 0x80000000) == 0 )
        v30->fields.commandType = changeTDCommandType;
      functionIdArray = v47->fields.funcId;
      dataValsArray = SkillLvEntity__getDataValsList(v47, 0LL);
      if ( baseVals && fromSkillCopyFunc )
      {
        v131 = BattleLogicTask__getActorId(task, v127);
        if ( !BattleLogicSkill__SetSkillCopyFunction(this, v47, baseVals, &functionIdArray, &dataValsArray, v131, v132) )
          return 0LL;
        v133 = this->fields.data;
        if ( !v133 )
          goto LABEL_143;
        if ( BattleData__isEnemyID(v133, v30->fields.actorId, 0LL) )
        {
          v134 = this->fields.data;
          if ( !v134 )
            goto LABEL_143;
          v135 = v134->fields.currentTurn == 0;
        }
        else
        {
          v135 = 0;
        }
        v30->fields.isReversalShortBuffTurn = v135;
      }
      if ( skillInfo->fields.type == 1 )
      {
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_B170CC(
                                                               BattleLogicFunction_FunctionArgument_TypeInfo,
                                                               v127,
                                                               v128,
                                                               v129,
                                                               v130);
        BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        if ( !argument )
          goto LABEL_143;
        argument->fields.grantSkillType = skillInfo->fields.type;
      }
      else
      {
        argument = 0LL;
      }
      v137 = this->fields.logicfunction;
      v139 = dataValsArray;
      v138 = functionIdArray;
      v140 = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v137 )
LABEL_143:
        sub_B170D4();
      v125 = BattleLogicFunction__procList(v137, v30, v138, v139, 0, 1, 0, 0, 0, 1, 1, argument, v140, 0LL);
    }
    v54 = v125;
    if ( task->fields.actortype == 5 )
    {
      if ( !v125 )
        goto LABEL_143;
      v141 = BasicHelper__IndexValue_int__25919804(
               (System_Collections_Generic_List_T__o *)v125->fields.funcTargetList,
               0,
               0,
               (const MethodInfo_18B813C *)Method_BasicHelper_IndexValue_int___);
      targetObject = (UnityEngine_Object_o *)v54->fields.targetObject;
      v143 = v141;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v144 = UnityEngine_Object__op_Equality(targetObject, 0LL, 0LL);
      if ( v143 >= 1 && v144 )
      {
        v145 = this->fields.logic;
        if ( !v145 )
          goto LABEL_143;
        perf = v145->fields.perf;
        if ( !perf )
          goto LABEL_143;
        ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(perf, v143, 0LL);
        v54->fields.targetObject = (struct UnityEngine_GameObject_o *)ServantGameObject;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v54->fields.targetObject,
          ServantGameObject,
          v148,
          v149,
          v150,
          v151,
          v152,
          v153);
      }
    }
    ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
      skillInfo,
      skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
    BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
    v154 = this->fields.logic;
    if ( v154 )
    {
      BattleLogic__updateConditionsBuffAll(v154, 0LL);
      if ( v54 )
      {
        v54->fields.prevattackme = 0;
        v155 = this->fields.data;
        if ( v155 )
        {
          BattleData__setCommandAttack(v155, 0, 0, 0LL);
          v156 = this->fields.data;
          if ( v156 )
          {
            actionLogManager = v156->fields.actionLogManager;
            if ( actionLogManager )
            {
              klass = actionLogManager->klass;
              if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
              {
                v159 = 0LL;
                p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
                while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
                {
                  ++v159;
                  p_offset += 2;
                  if ( v159 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
                    goto LABEL_103;
                }
                p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
              }
              else
              {
LABEL_103:
                p_method = sub_AAFEF8(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
              }
              (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
                actionLogManager,
                task,
                *(_QWORD *)(p_method + 8));
              if ( BattleActionData__isSkillCutIn(v54, 0LL) )
              {
                skillMessage = (System_Int32_array **)v54->fields.skillMessage;
                v54->fields.skillCutInMessage = (struct System_String_o *)skillMessage;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v54->fields.skillCutInMessage,
                  skillMessage,
                  v163,
                  v164,
                  v165,
                  v166,
                  v167,
                  v168);
                v170 = (System_Int32_array **)StringLiteral_1/*""*/;
                v54->fields.skillMessage = (struct System_String_o *)StringLiteral_1/*""*/;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v54->fields.skillMessage,
                  v170,
                  v171,
                  v172,
                  v173,
                  v174,
                  v175,
                  v176);
                v177 = (System_Int32_array ***)&v54->fields.motionMessage;
                if ( !System_String__IsNullOrEmpty(v54->fields.motionMessage, 0LL) )
                {
                  v184 = *v177;
                  v54->fields.skillCutInMessage = (struct System_String_o *)*v177;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v54->fields.skillCutInMessage,
                    v184,
                    v178,
                    v179,
                    v180,
                    v181,
                    v182,
                    v183);
                  v185 = (System_Int32_array **)StringLiteral_1/*""*/;
                  *v177 = (System_Int32_array **)StringLiteral_1/*""*/;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v54->fields.motionMessage,
                    v185,
                    v186,
                    v187,
                    v188,
                    v189,
                    v190,
                    v191);
                }
              }
              type = skillInfo->fields.type;
              v193 = this->fields.data;
              v194 = BattleLogicTask__getActorId(task, v162);
              if ( v193 )
              {
                v195 = BattleData__getServantData(v193, v194, 0LL);
                v198 = type != 1 && !v195 || SkillLvEntity__IsNoTargetSkipSkill(v47, 0LL);
                if ( (!v198 || v54->fields.isSuccessTargetSelection)
                  && (!v54->fields.isSkillCopyFunctionOnly || v54->fields.isSuccessSkillCopyFunction) )
                {
                  if ( task->fields.isCanCounterTask )
                  {
                    v200 = this->fields.data;
                    v201 = BattleLogicTask__getActorId(task, v196);
                    if ( !v200 )
                      goto LABEL_143;
                    v202 = BattleData__getServantData(v200, v201, 0LL);
                    if ( v202 )
                    {
                      v203 = v202;
                      ((void (__fastcall *)(BattleActionData_o *, struct BattleData_o *, Il2CppMethodPointer))v54->klass->vtable._8_FixDisplayWaitingIntervalBuff.method)(
                        v54,
                        this->fields.data,
                        v54->klass->vtable._9_ExecAction.methodPtr);
                      funcTargetList = v54->fields.funcTargetList;
                      if ( !funcTargetList )
                        goto LABEL_143;
                      v205 = this->fields.data;
                      uniqueId = v203->fields.uniqueId;
                      v207 = System_Collections_Generic_List_int___ToArray(
                               funcTargetList,
                               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
                      if ( !v205 )
                        goto LABEL_143;
                      BattleData__SetWasAttackTargetIdList(v205, uniqueId, v207, 0LL);
                      v209 = this->fields.logic;
                      if ( !v209 )
                        goto LABEL_143;
                      logicnomal = v209->fields.logicnomal;
                      if ( !logicnomal )
                        goto LABEL_143;
                      v211 = BattleLogicNomal__taskCounterFunc(
                               logicnomal,
                               this->fields.data,
                               !v203->fields.isEnemy,
                               1,
                               0,
                               v208);
                      BattleLogic__addBattleLogicTask(v209, v211, 0LL);
                    }
                  }
                  v212 = this->fields.logic;
                  v213 = BattleLogicSkill__MakeAddInvokeSkillTask(this, skillLvMst, v47, task, v197);
                  if ( !v212 )
                    goto LABEL_143;
                  BattleLogic__AddBattleLogicTask(v212, v213, 0LL);
                  v214 = this->fields.data;
                  v215 = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                           skillInfo,
                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
                  if ( !v214 )
                    goto LABEL_143;
                  BattleData__AddUseSkillId(v214, v215, 0LL);
                  if ( BattleActionData__checkSummonServantList(v54, 0LL) )
                  {
                    v220 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v216, v217, v218, v219);
                    BattleLogicTask___ctor(v220, v221);
                    if ( !v220 )
                      goto LABEL_143;
                    v220->fields.actiontype = 24;
                    v222 = this->fields.logic;
                    if ( !v222 )
                      goto LABEL_143;
                    BattleLogic__AddBattleLogicTask(v222, v220, 0LL);
                  }
                  if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0
                    && !SkillEntity__getSkillCutInId(Entity, 0LL) )
                  {
                    v229 = this->fields.logic;
                    if ( !v229 )
                      goto LABEL_143;
                    v230 = v229->fields.perf;
                    CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
                    if ( !v230 )
                      goto LABEL_143;
                    BattlePerformance__InsertWaitAction(v230, CutinAdditionalTime, 1, 0LL);
                    if ( v54->fields.skillMessage )
                    {
                      v232 = this->fields.data;
                      if ( !v232 )
                        goto LABEL_143;
                      v233 = v232->fields.perf;
                      if ( !v233 )
                        goto LABEL_143;
                      infoComp = v233->fields.infoComp;
                      if ( !infoComp )
                        goto LABEL_143;
                      BattleInformationComponent__showCommonMessage(infoComp, v54, 0LL);
                      v54->fields.skillMessage = 0LL;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)&v54->fields.skillMessage,
                        0LL,
                        v235,
                        v236,
                        v237,
                        v238,
                        v239,
                        v240);
                      v54->fields.IsDontUpdateMessage = 1;
                    }
                  }
                  if ( task->fields.IsNotShowSkillMessage )
                  {
                    v54->fields.skillMessage = 0LL;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v54->fields.skillMessage,
                      0LL,
                      v223,
                      v224,
                      v225,
                      v226,
                      v227,
                      v228);
                    v54->fields.IsDontUpdateMessage = 1;
                  }
                  return v54;
                }
                return 0LL;
              }
            }
          }
        }
      }
    }
    goto LABEL_143;
  }
  return v54;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  System_Int32_array *GimmickSkillIdArray; // x0
  System_Int32_array *v8; // x20
  System_Int32_array *GimmickSkillRateArray; // x0
  System_Int32_array *v10; // x21
  BattleLogicSkill_o *ReelIconArray; // x0
  const MethodInfo *v12; // x2
  int32_t HitGimmickSkillId; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int32_t v18; // w22
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x20
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleData_o *v35; // x0
  System_Int32_array *FieldEnemyServantIDList; // x0
  BattleData_o *v37; // x8
  System_Int32_array *v38; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x0
  __int64 v44; // x19
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_40FC466 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask___TypeInfo, method);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v3);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v4);
    sub_B16FFC(&int___TypeInfo, v5);
    byte_40FC466 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  GimmickSkillIdArray = BattleData__GetGimmickSkillIdArray(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v8 = GimmickSkillIdArray;
  GimmickSkillRateArray = BattleData__GetGimmickSkillRateArray(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v10 = GimmickSkillRateArray;
  ReelIconArray = (BattleLogicSkill_o *)BattleData__GetReelIconArray(this->fields.data, 0LL);
  if ( !v8 )
    goto LABEL_26;
  if ( !*(_QWORD *)&v8->max_length )
    return 0LL;
  if ( !v10 )
    goto LABEL_26;
  if ( !*(_QWORD *)&v10->max_length )
    return 0LL;
  if ( !ReelIconArray )
    goto LABEL_26;
  if ( !ReelIconArray->fields.logic )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId(ReelIconArray, v10, v12);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v18 = HitGimmickSkillId;
  v19 = sub_B170CC(BattleSkillInfoData_TypeInfo, v14, v15, v16, v17);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_26;
  *(_DWORD *)(v19 + 24) = -1;
  *(_QWORD *)(v19 + 16) = 20LL;
  if ( v18 >= v8->max_length )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 376LL))(
    v19,
    (unsigned int)v8->m_Items[v18 + 1],
    *(_QWORD *)(*(_QWORD *)v19 + 384LL));
  *(_DWORD *)(v19 + 36) = 1;
  v27 = sub_B170CC(BattleLogicTask_TypeInfo, v23, v24, v25, v26);
  BattleLogicTask___ctor((BattleLogicTask_o *)v27, v28);
  v20 = sub_B17014(int___TypeInfo, 1LL, v29);
  if ( !v20 )
    goto LABEL_26;
  v21 = v20;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_27;
  *(_DWORD *)(v20 + 32) = v18;
  if ( !v27 )
    goto LABEL_26;
  *(_QWORD *)(v27 + 136) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 136), (System_Int32_array **)v20, v22, v30, v31, v32, v33, v34);
  v35 = this->fields.data;
  if ( !v35
    || (FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(v35, 0, 0LL), (v37 = this->fields.data) == 0LL)
    || (v38 = FieldEnemyServantIDList,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v37, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v27,
          (BattleSkillInfoData_o *)v19,
          v38,
          FieldPlayerServantIDList,
          0,
          0,
          v40),
        BattleLogicTask__setActor((BattleLogicTask_o *)v27, 5, -1, v41),
        (v43 = sub_B17014(BattleLogicTask___TypeInfo, 1LL, v42)) == 0) )
  {
LABEL_26:
    sub_B170D4();
  }
  v44 = v43;
  v20 = sub_B170BC(v27, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
  if ( !v20 )
  {
    sub_B170F4(0LL);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v44 + 24) )
  {
LABEL_27:
    sub_B17100(v20, v21, v22);
    sub_B170A0();
  }
  *(_QWORD *)(v44 + 32) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v44 + 32), (System_Int32_array **)v27, v22, v45, v46, v47, v48, v49);
  return (BattleLogicTask_array *)v44;
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
  WebViewManager_o *Instance; // x0
  BattleLogicTask_array *result; // x0
  QuestBehaviorMaster_o *v12; // x20
  BattleData_o *data; // x0
  int32_t QuestId; // w0
  int32_t v15; // w21
  int32_t Phase; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleLogicTask_array *v21; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x25
  BattleLogicTask_o **m_Items; // x26
  __int64 v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  QuestBehaviorEntity_o *v33; // x0
  unsigned int v34; // w0
  QuestBehaviorEntity_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  BattleLogicTask_o *v40; // x23
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x3
  BattleData_o *v43; // x0
  System_Int32_array *FieldEnemyServantIDList; // x0
  System_Int32_array *v45; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v47; // x6
  const MethodInfo *v48; // x3

  if ( (byte_40FC465 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, method);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FC465 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  result = (BattleLogicTask_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( result )
  {
    v12 = (QuestBehaviorMaster_o *)result;
    data = this->fields.data;
    if ( !data )
      goto LABEL_24;
    QuestId = BattleData__getQuestId(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_24;
    v15 = QuestId;
    Phase = BattleData__getPhase(this->fields.data, 0LL);
    result = (BattleLogicTask_array *)QuestBehaviorMaster__getBattleSkill(v12, v15, Phase, 0LL);
    if ( result )
    {
      v21 = result;
      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18, v19, v20);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v22,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      if ( (int)v21->max_length >= 1 )
      {
        v27 = 0LL;
        m_Items = v21->m_Items;
        while ( 1 )
        {
          v29 = sub_B170CC(BattleSkillInfoData_TypeInfo, v23, v24, v25, v26);
          BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v29, 0LL);
          if ( !v29 )
            break;
          *(_DWORD *)(v29 + 24) = -1;
          *(_QWORD *)(v29 + 16) = 20LL;
          if ( (unsigned int)v27 >= v21->max_length )
            goto LABEL_25;
          v33 = (QuestBehaviorEntity_o *)m_Items[v27];
          if ( !v33 )
            break;
          v34 = QuestBehaviorEntity__getskillId(v33, 0LL);
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 376LL))(
                  v29,
                  v34,
                  *(_QWORD *)(*(_QWORD *)v29 + 384LL));
          if ( (unsigned int)v27 >= v21->max_length )
          {
LABEL_25:
            sub_B17100(v30, v31, v32);
            sub_B170A0();
          }
          v35 = (QuestBehaviorEntity_o *)m_Items[v27];
          if ( !v35 )
            break;
          *(_DWORD *)(v29 + 36) = QuestBehaviorEntity__getskillLv(v35, 0LL);
          v40 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v36, v37, v38, v39);
          BattleLogicTask___ctor(v40, v41);
          if ( !v40 )
            break;
          BattleLogicTask__setActor(v40, 5, -1, v42);
          v43 = this->fields.data;
          if ( !v43 )
            break;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(v43, 0, 0LL);
          if ( !this->fields.data )
            break;
          v45 = FieldEnemyServantIDList;
          FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
          BattleLogicTask__setActionSkill(v40, (BattleSkillInfoData_o *)v29, v45, FieldPlayerServantIDList, 0, 0, v47);
          BattleLogicTask__setActor(v40, 5, -1, v48);
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          if ( (int)++v27 >= (signed int)v21->max_length )
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
LABEL_24:
        sub_B170D4();
      }
      if ( !v22 )
        goto LABEL_24;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v14; // x3
  __int64 v15; // x4
  BattleLogicTask_o *v16; // x22
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x4

  if ( (byte_40FC45F & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_40FC45F = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&skillId,
                                                                                                  *(_QWORD *)&skillLv,
                                                                                                  ptTargetList,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v12, v13, v14, v15);
  BattleLogicTask___ctor(v16, v17);
  if ( !v16 || (BattleLogicTask__setCommandSpell(v16, skillId, 0LL, ptTargetList, v18), !v11) )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v23; // x3
  __int64 v24; // x4
  BattleLogicTask_o *v25; // x21
  const MethodInfo *v26; // x1
  BattleData_o *data; // x0
  const MethodInfo *v28; // x6
  bool v29; // w4
  bool v30; // w5
  BattleLogicTask_o *v31; // x0
  BattleSkillInfoData_o *v32; // x1
  System_Int32_array *v33; // x2
  int32_t svtUniqueId; // w1
  BattleData_o *v35; // x0
  struct BattleData_o *v36; // x8
  int32_t globaltargetId; // w26
  __int64 v38; // x2
  BattleLogicTarget_o *logictarget; // x26
  int32_t v40; // w27
  System_Int32_array *AddIndiv; // x0
  const MethodInfo *v42; // x4
  Il2CppClass *v43; // x0
  BattleData_o *v44; // x0
  BattleLogicTarget_o *v45; // x26
  int32_t v46; // w27
  System_Int32_array *FieldPlayerServantIDList; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x3
  int32_t v51; // w1
  BattleData_o *v52; // x0
  bool isPlayerID; // w0
  int32_t v54; // w2
  int32_t v55; // w1
  const MethodInfo *v57; // [xsp+10h] [xbp-60h]

  if ( (byte_40FC45E & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, skillInfo);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    byte_40FC45E = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  skillInfo,
                                                                                                  ptTargetList,
                                                                                                  enemyTargetList,
                                                                                                  checkAlive);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v25 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v21, v22, v23, v24);
  BattleLogicTask___ctor(v25, v26);
  if ( !skillInfo )
    goto LABEL_35;
  data = this->fields.data;
  if ( !data )
    goto LABEL_35;
  if ( BattleData__getServantData(data, skillInfo->fields.svtUniqueId, 0LL)
    && BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
  {
    if ( !v25 )
      goto LABEL_35;
    v25->fields.isCanCounterTask = isCanCounterSkill;
  }
  if ( enemyTargetList )
  {
    if ( !v25 )
      goto LABEL_35;
    v29 = checkAlive;
    v30 = checkRevengeId;
    v31 = v25;
    v32 = skillInfo;
    v33 = enemyTargetList;
  }
  else
  {
    svtUniqueId = skillInfo->fields.svtUniqueId;
    if ( svtUniqueId == -1 )
      goto LABEL_15;
    v35 = this->fields.data;
    if ( !v35 )
      goto LABEL_35;
    if ( BattleData__isPlayerID(v35, svtUniqueId, 0LL) )
    {
LABEL_15:
      v36 = this->fields.data;
      if ( !v36 )
        goto LABEL_35;
      globaltargetId = v36->fields.globaltargetId;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
      {
        logictarget = this->fields.logictarget;
        v40 = skillInfo->fields.svtUniqueId;
        AddIndiv = BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_35;
        globaltargetId = BattleLogicTarget__getGlobalTargetId(logictarget, v40, v40 == -1, AddIndiv, v42);
      }
      v43 = int___TypeInfo;
    }
    else
    {
      v44 = this->fields.data;
      if ( !v44 )
        goto LABEL_35;
      v45 = this->fields.logictarget;
      v46 = skillInfo->fields.svtUniqueId;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v44, 0LL, 0LL);
      if ( !v45 )
        goto LABEL_35;
      globaltargetId = BattleLogicTarget__getTargetAiAct(
                         v45,
                         1,
                         v46,
                         0LL,
                         FieldPlayerServantIDList,
                         1,
                         0,
                         0LL,
                         0LL,
                         1,
                         v57);
      v43 = int___TypeInfo;
    }
    v48 = sub_B17014(v43, 1LL, v38);
    if ( !v48 )
      goto LABEL_35;
    v33 = (System_Int32_array *)v48;
    if ( !*(_DWORD *)(v48 + 24) )
    {
      sub_B17100(v48, v49, v48);
      sub_B170A0();
    }
    *(_DWORD *)(v48 + 32) = globaltargetId;
    if ( !v25 )
LABEL_35:
      sub_B170D4();
    v29 = checkAlive;
    v30 = checkRevengeId;
    v31 = v25;
    v32 = skillInfo;
  }
  BattleLogicTask__setActionSkill(v31, v32, v33, ptTargetList, v29, v30, v28);
  v51 = skillInfo->fields.svtUniqueId;
  if ( v51 == -1 )
  {
    v55 = 1;
    v54 = -1;
  }
  else
  {
    v52 = this->fields.data;
    if ( !v52 )
      goto LABEL_35;
    isPlayerID = BattleData__isPlayerID(v52, v51, 0LL);
    v54 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v55 = 2;
    else
      v55 = 3;
  }
  BattleLogicTask__setActor(v25, v55, v54, v50);
  if ( !v20 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicSkill___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9DD5 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicSkill___c_TypeInfo, v1);
    byte_40F9DD5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicSkill___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicSkill___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  BattleBuffData_o *BuffData; // x0

  if ( !svt || (BuffData = BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_B170D4();
  BattleBuffData__DirectUpdateWaitIntervalBuff(BuffData, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__object__o *conditions; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v11; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9DD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_40F9DD6 = 1;
  }
  result = 0LL;
  conditions = this->fields.conditions;
  if ( !conditions )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  v9 = this->fields.conditions;
  if ( !v9
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_11:
    sub_B170D4();
  }
  v11 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  if ( System_Int64__TryParse(v11, &result, 0LL) )
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
  struct System_Collections_Generic_Dictionary_string__object__o *conditions; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v12; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v14; // x0
  BattleLogicSkill___c__DisplayClass11_0_o *v16; // x0
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2
  double v19; // d0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9DD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40F9DD7 = 1;
  }
  result = 0LL;
  conditions = this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  v10 = this->fields.conditions;
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  if ( !System_Int64__TryParse(v12, &result, 0LL) )
    return 1;
  v13 = this->fields.conditions;
  if ( !v13 )
    goto LABEL_14;
  v14 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13,
          (System_Type_o *)key,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v14 )
    goto LABEL_14;
  if ( v14->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(v14) >= val;
  v16 = (BattleLogicSkill___c__DisplayClass11_0_o *)sub_B173C8(v14);
  return BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__2(v16, v17, v19, v18);
}


bool __fastcall BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *conditions; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v11; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9DD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_40F9DD8 = 1;
  }
  result = 0LL;
  conditions = this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  v9 = this->fields.conditions;
  if ( !v9
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  v11 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  if ( System_Int64__TryParse(v11, &result, 0LL) )
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
  struct System_Collections_Generic_Dictionary_string__object__o *conditions; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v12; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v14; // x0
  bool v15; // w0
  BattleLogicSkill___c__DisplayClass15_0_o *v16; // x0
  const MethodInfo *v17; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9DD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40F9DD9 = 1;
  }
  result = 0LL;
  conditions = this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  v10 = this->fields.conditions;
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  if ( !System_Int64__TryParse(v12, &result, 0LL) )
    return 1;
  v13 = this->fields.conditions;
  if ( !v13 )
    goto LABEL_13;
  v14 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13,
          (System_Type_o *)key,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v14 )
    goto LABEL_13;
  if ( v14->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(v14) >= val;
  v16 = (BattleLogicSkill___c__DisplayClass15_0_o *)sub_B173C8(v14);
  BattleLogicSkill___c__DisplayClass15_0___ctor(v16, v17);
  return v15;
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
    sub_B170D4();
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
    sub_B170D4();
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