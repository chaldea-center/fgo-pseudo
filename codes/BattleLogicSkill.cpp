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
  WeightRate_int__o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  unsigned __int64 v21; // x21
  int32_t Next; // w1
  __int64 v24; // x0

  if ( (byte_42EBEB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WeightRate_int___ctor__, (_DWORD)rateArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v5, v6, v7);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v8, v9, v10);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v11, v12, v13);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v14, v15, v16);
    byte_42EBEB8 = 1;
  }
  if ( !rateArray )
    return -1;
  v17 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v17, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  v20 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
      {
        v24 = sub_B5D6C8(v18);
        sub_B5D668(v24, 0LL);
      }
      if ( !v17 )
        break;
      WeightRate_int___setWeight(
        v17,
        rateArray->m_Items[v21 + 1],
        v21,
        (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v20) = rateArray->max_length;
      if ( (__int64)++v21 >= (int)v20 )
        goto LABEL_12;
    }
LABEL_13:
    sub_B5D69C(v18, v19);
  }
  if ( !v17 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v17->fields.totalweight, 0LL);
  return WeightRate_int___getData(v17, Next, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
}


bool __fastcall BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
        BattleLogicSkill_o *this,
        System_Int32_array *actorIndividualities,
        System_Int32_array *notSkillCopyTargetIndividualities,
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v19; // x1
  unsigned __int64 v20; // x23
  BattleLogicSkill___c__DisplayClass16_0_o *v21; // x21
  System_Func_int__bool__o *v22; // x22
  __int64 v24; // x0

  if ( (byte_42EBEBA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_int____68810384,
      (_DWORD)actorIndividualities,
      (_DWORD)notSkillCopyTargetIndividualities,
      method);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleLogicSkill___c__DisplayClass16_0_TypeInfo, v15, v16, v17);
    byte_42EBEBA = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0LL) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)notSkillCopyTargetIndividualities, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !notSkillCopyTargetIndividualities )
LABEL_15:
    sub_B5D69C(IsNullOrEmpty, v19);
  if ( (int)notSkillCopyTargetIndividualities->max_length < 1 )
    return 0;
  v20 = 0LL;
  while ( 1 )
  {
    v21 = (BattleLogicSkill___c__DisplayClass16_0_o *)sub_B5D694(BattleLogicSkill___c__DisplayClass16_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass16_0___ctor(v21, 0LL);
    if ( v20 >= notSkillCopyTargetIndividualities->max_length )
    {
      v24 = sub_B5D6C8(IsNullOrEmpty);
      sub_B5D668(v24, 0LL);
    }
    if ( !v21 )
      goto LABEL_15;
    v21->fields.individuality = notSkillCopyTargetIndividualities->m_Items[v20 + 1];
    v22 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v22,
      (Il2CppObject *)v21,
      Method_BattleLogicSkill___c__DisplayClass16_0__IsNotSkillCopyTargetIndividuality_b__0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__28142236(
           actorIndividualities,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
    {
      return 1;
    }
    if ( (__int64)++v20 >= (int)notSkillCopyTargetIndividualities->max_length )
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
  if ( (byte_42EBEB2 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_B5D5C4(
                                   &TempBattleSkillInfoData_TypeInfo,
                                   (_DWORD)skillLvMst,
                                   (_DWORD)skillLvEnt,
                                   baseTask);
    byte_42EBEB2 = 1;
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
          v17 = (TempBattleSkillInfoData_o *)sub_B5D694(TempBattleSkillInfoData_TypeInfo);
          TempBattleSkillInfoData___ctor(v17, v16, data_high, v11, 0LL);
          return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v17, actortype, isPlayerID, v18);
        }
      }
    }
LABEL_13:
    sub_B5D69C(this, skillLvMst);
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
  BalanceConfig_c *v26; // x0
  int32_t ClassBoardReleaseQuestId; // w24
  BattleData_o *IsQuestClear_25877652; // x0
  __int64 v29; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v31; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v34; // x22
  unsigned int v35; // w24
  AddSkillData_o *v36; // x8
  __int64 v37; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EBEBB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, commandSpellId, (_DWORD)targetIds, funcIdList);
    sub_B5D5C4(&CondType_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__AddRange__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v23, v24, v25);
    byte_42EBEBB = 1;
  }
  entity = 0LL;
  v26 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v26->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25877652 = (BattleData_o *)CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_25877652 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_32;
    if ( !targetIds->max_length )
      goto LABEL_33;
    IsQuestClear_25877652 = this->fields.data;
    if ( !IsQuestClear_25877652 )
      goto LABEL_32;
    ServantData = BattleData__getServantData(IsQuestClear_25877652, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v31 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_25877652 = (BattleData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v31->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_32:
      sub_B5D69C(IsQuestClear_25877652, v29);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v34 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_25877652;
      v35 = 0;
      while ( v35 < max_length )
      {
        v36 = classBoardAddCommandSpells->m_Items[v35];
        if ( !v36 || !v34 )
          goto LABEL_32;
        IsQuestClear_25877652 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v34,
                                                  &entity,
                                                  v36->fields.id,
                                                  commandSpellId,
                                                  v36->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_25877652 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_32;
          if ( !funcIdList )
            goto LABEL_32;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_25877652 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_32;
          IsQuestClear_25877652 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_32;
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_25877652,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v35 >= max_length )
          return;
      }
LABEL_33:
      v37 = sub_B5D6C8(IsQuestClear_25877652);
      sub_B5D668(v37, 0LL);
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
  System_Collections_ICollection_o *v64; // x25
  BattleServantData_o *v65; // x20
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // x27
  unsigned __int64 v68; // x19
  __int64 v69; // x24
  struct System_Int32_array *v70; // x8
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Func_int__bool__o *v77; // x20
  __int64 v78; // x20
  System_Func_int__bool__o *v79; // x20
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v81; // x3
  System_Func_int__bool__o *v82; // x20
  System_Int32_array *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v98; // x0
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-A0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-90h]
  BattleServantConfConponent_o *v101; // [xsp+18h] [xbp-88h]
  System_Collections_Generic_List_int__o *v102; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v103; // [xsp+30h] [xbp-70h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-68h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-58h]

  v12 = this;
  if ( (byte_42EBEB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)skillLvEnt, (_DWORD)copyFuncVals, functionIdArray);
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__ToArray__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals___ctor__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v40, v41, v42);
    sub_B5D5C4(&System_Collections_Generic_List_DataVals__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__, v52, v53, v54);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__, v55, v56, v57);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__, v58, v59, v60);
    this = (BattleLogicSkill_o *)sub_B5D5C4(&BattleLogicSkill___c__DisplayClass15_0_TypeInfo, v61, v62, v63);
    byte_42EBEB9 = 1;
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
  v64 = (System_Collections_ICollection_o *)this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(v12->fields.data, actorId, 0LL);
  if ( !skillLvEnt )
    goto LABEL_45;
  v65 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(skillLvEnt, 0LL);
  actorIndividualities = v65 ? BattleServantData__getConcatServantAndBuffIndividualityies(v65, 0LL, 0, 0, 0, 0LL) : 0LL;
  v101 = (BattleServantConfConponent_o *)dataValsArray;
  v102 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v102,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v103 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v103,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = skillLvEnt->fields.funcId;
  if ( !funcId )
    goto LABEL_45;
  v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  v68 = 0LL;
  while ( (__int64)v68 < (int)funcId->max_length )
  {
    v69 = sub_B5D694(BattleLogicSkill___c__DisplayClass15_0_TypeInfo);
    BattleLogicSkill___c__DisplayClass15_0___ctor((BattleLogicSkill___c__DisplayClass15_0_o *)v69, 0LL);
    v70 = skillLvEnt->fields.funcId;
    if ( !v70 )
      goto LABEL_45;
    if ( v68 >= v70->max_length )
      goto LABEL_50;
    if ( !v69 )
      goto LABEL_45;
    *(_DWORD *)(v69 + 16) = v70->m_Items[v68 + 1];
    if ( BasicHelper__IsNullOrEmpty(v64, 0LL)
      || (v77 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v77,
            (Il2CppObject *)v69,
            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__0__,
            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__28142236(
                                         (System_Int32_array *)v64,
                                         (System_Func_T__bool__o *)v77,
                                         (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v69 + 24) = 0LL;
      v78 = v69 + 24;
      sub_B5D560((BattleServantConfConponent_o *)(v69 + 24), 0LL, v71, v72, v73, v74, v75, v76);
      if ( !v67 )
        goto LABEL_45;
      this = (BattleLogicSkill_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     v67,
                                     (WarEntity_o **)(v69 + 24),
                                     *(_DWORD *)(v69 + 16),
                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v78 )
          goto LABEL_45;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v78 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v78 )
            goto LABEL_45;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v78 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v78 )
              goto LABEL_45;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v78 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v78 )
                goto LABEL_45;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v78 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v78 )
                  goto LABEL_45;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v78 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v79 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v79,
                        (Il2CppObject *)v69,
                        Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__1__,
                        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__28142236(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v79,
                                                     (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_45;
                  if ( v68 >= SetTypeDataValArray->max_length )
                  {
LABEL_50:
                    v98 = sub_B5D6C8(this);
                    sub_B5D668(v98, 0LL);
                  }
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v68];
                  if ( !this )
                    goto LABEL_45;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v81);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v82 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v82,
                            (Il2CppObject *)v69,
                            Method_BattleLogicSkill___c__DisplayClass15_0__SetSkillCopyFunction_b__2__,
                            (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__28142236(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v82,
                                                         (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v102;
                      if ( !v102 )
                        goto LABEL_45;
                      System_Collections_Generic_List_int___Add(
                        v102,
                        *(_DWORD *)(v69 + 16),
                        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(skillLvEnt, 0LL);
                      if ( !this )
                        goto LABEL_45;
                      if ( v68 >= LODWORD(this->fields.logic) )
                        goto LABEL_50;
                      if ( !v103 )
                        goto LABEL_45;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v103,
                        *((EventMissionProgressRequest_Argument_ProgressData_o **)&this->fields.logictarget + v68),
                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DataVals__Add__);
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
    ++v68;
    if ( !funcId )
      goto LABEL_45;
  }
  this = (BattleLogicSkill_o *)v102;
  if ( !v102
    || (v83 = System_Collections_Generic_List_int___ToArray(
                v102,
                (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        *functionIdArray = v83,
        sub_B5D560(
          (BattleServantConfConponent_o *)functionIdArray,
          (System_Int32_array **)v83,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89),
        (this = (BattleLogicSkill_o *)v103) == 0LL)
    || (v90 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v103,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        v101->klass = (BattleServantConfConponent_c *)v90,
        sub_B5D560(v101, v90, v91, v92, v93, v94, v95, v96),
        !*functionIdArray) )
  {
LABEL_45:
    sub_B5D69C(this, skillLvEnt);
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
  int32_t svtUniqueId; // w25
  int32_t v43; // w0
  int32_t skilllv; // w26
  int32_t v45; // w28
  BattleActionData_o *v46; // x23
  BattleServantData_o *ServantData; // x24
  SkillEntity_o *Entity; // x0
  SkillEntity_o *v49; // x27
  SkillLvEntity_o *v50; // x26
  System_Int32_array *Individualities; // x28
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x28
  int32_t Rarity; // w0
  __int64 v55; // x25
  __int64 v56; // x28
  int32_t v57; // w0
  BattleLogicFunction_FunctionArgument_o *argument; // x25
  bool v59; // w20
  BattleLogicFunction_o *logicfunction; // x21
  System_Int32_array *funcId; // x22
  struct BattleBuffData_o *buffData; // x8
  BattleData_o *data; // x20
  void *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v65; // x21
  Il2CppObject *v66; // x22
  struct BattleLogicSkill___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v8 = this;
  if ( (byte_42EBEB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleServantData___ctor__, (_DWORD)skillInfo, isShift, isDeckDataLoad);
    sub_B5D5C4(&System_Action_BattleServantData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleActionData_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&BattleLogicFunction_FunctionArgument_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__, v36, v37, v38);
    this = (BattleLogicSkill_o *)sub_B5D5C4(&BattleLogicSkill___c_TypeInfo, v39, v40, v41);
    byte_42EBEB3 = 1;
  }
  if ( !skillInfo )
    goto LABEL_38;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v43 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          method);
  skilllv = skillInfo->fields.skilllv;
  v45 = v43;
  v46 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v46, 0LL);
  this = (BattleLogicSkill_o *)v8->fields.data;
  if ( !this )
    goto LABEL_38;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_38;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_38;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v45,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v49 = Entity;
    if ( !SkillEntity__isActive(Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v45, skilllv, 0LL);
          v50 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_38;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v49, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v50, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v46 )
          {
            v46->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v56 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v55 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v74.fields.currentCryptoKey = v56;
              *(_QWORD *)&v74.fields.fakeValue = v55;
              v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL);
              v46->fields.motionId = SkillEntity__GetMotionId(v49, v57, 0LL);
              v46->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v46->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v46->fields.cardIndex = skillInfo->fields.index;
              this = (BattleLogicSkill_o *)v8->fields.logic;
              if ( this )
              {
                BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
                argument = (BattleLogicFunction_FunctionArgument_o *)sub_B5D694(BattleLogicFunction_FunctionArgument_TypeInfo);
                BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
                if ( argument )
                {
                  argument->fields.grantSkillType = skillInfo->fields.type;
                  argument->fields.isDeckDataLoad = isDeckDataLoad;
                  if ( v50 )
                  {
                    v59 = isShift;
                    logicfunction = v8->fields.logicfunction;
                    funcId = v50->fields.funcId;
                    this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v50, 0LL);
                    if ( logicfunction )
                    {
                      this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                                     logicfunction,
                                                     v46,
                                                     funcId,
                                                     (DataVals_array *)this,
                                                     1,
                                                     1,
                                                     0,
                                                     v59,
                                                     0,
                                                     1,
                                                     1,
                                                     argument,
                                                     v50->fields.skillId,
                                                     0LL);
                      buffData = ServantData->fields.buffData;
                      if ( buffData )
                      {
                        this = (BattleLogicSkill_o *)buffData->fields.unfixedBuffList;
                        if ( this )
                        {
                          System_Collections_Generic_List_int___Clear(
                            (System_Collections_Generic_List_int__o *)this,
                            (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
                          data = v8->fields.data;
                          this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                          if ( (BYTE3(BattleLogicSkill___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                            this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                          }
                          static_fields = this[3].fields.logicfunction;
                          v65 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)*((_QWORD *)static_fields + 1);
                          if ( !v65 )
                          {
                            if ( (BYTE3(this[6].fields.data) & 4) != 0 && !LODWORD(this[4].fields.logictarget) )
                            {
                              j_il2cpp_runtime_class_init_0(this);
                              static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                            }
                            v66 = *(Il2CppObject **)static_fields;
                            v65 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleServantData__TypeInfo);
                            System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                              v65,
                              v66,
                              Method_BattleLogicSkill___c__actPassiveSkill_b__9_0__,
                              (const MethodInfo_258B320 *)Method_System_Action_BattleServantData___ctor__);
                            v67 = BattleLogicSkill___c_TypeInfo->static_fields;
                            v67->__9__9_0 = (struct System_Action_BattleServantData__o *)v65;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)&v67->__9__9_0,
                              (System_Int32_array **)v65,
                              v68,
                              v69,
                              v70,
                              v71,
                              v72,
                              v73);
                          }
                          if ( data )
                          {
                            BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)v65, 0LL);
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
      sub_B5D69C(this, skillInfo);
    }
  }
}


bool __fastcall BattleLogicSkill__checkConditions(
        BattleLogicSkill_o *this,
        BattleSkillInfoData_o *skillInfo,
        System_String_o **text,
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
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  __int64 v94; // x26
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  DataManager_o *Instance; // x0
  __int64 v102; // x1
  SkillLvMaster_o *v103; // x22
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **saveDataMapList; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v111; // x0
  System_Func_BattleBuffData_BuffData__int__bool__o *v112; // x25
  System_Func_BattleBuffData_BuffData__int__bool__o *v113; // x24
  System_Func_string__double__bool__o *v114; // x23
  System_Func_string__double__bool__o *v115; // x22
  BattleServantData_o *v116; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v118; // x8
  int32_t NowHp; // w0
  int32_t v120; // w0
  int32_t v121; // w20
  int32_t v122; // w20
  __int64 *v124; // x8
  System_String_o *v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7

  if ( (byte_42EBEB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, (_DWORD)skillInfo, (_DWORD)text, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_string__int__bool__Invoke__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_string__double__bool__Invoke__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_string__double__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_string__int__bool___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_string__double__bool__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Func_string__int__bool__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__, v34, v35, v36);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__, v37, v38, v39);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__, v40, v41, v42);
    sub_B5D5C4(&Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__, v43, v44, v45);
    sub_B5D5C4(&BattleLogicSkill___c__DisplayClass11_0_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_2576/*"BATTLE_SKILLERROR_NP_LOWER"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_2574/*"BATTLE_SKILLERROR_HP_LOWER"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_12511/*"STAR_HIGHER"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_7175/*"HP_PER_LOWER"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_2575/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_2573/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_7174/*"HP_PER_HIGHER"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_2577/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_9476/*"NP_HIGHER"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_2578/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_7176/*"HP_VAL_HIGHER"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_12512/*"STAR_LOWER"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_1/*""*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_9477/*"NP_LOWER"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_7177/*"HP_VAL_LOWER"*/, v91, v92, v93);
    byte_42EBEB5 = 1;
  }
  v94 = sub_B5D694(BattleLogicSkill___c__DisplayClass11_0_TypeInfo);
  BattleLogicSkill___c__DisplayClass11_0___ctor((BattleLogicSkill___c__DisplayClass11_0_o *)v94, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)text,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_53;
  v103 = (SkillLvMaster_o *)Instance;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                skillInfo,
                                skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v103 )
    goto LABEL_53;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity(v103, (int32_t)Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v94 )
    goto LABEL_53;
  saveDataMapList = (System_Int32_array **)Instance->fields.saveDataMapList;
  *(_QWORD *)(v94 + 16) = saveDataMapList;
  sub_B5D560((BattleServantConfConponent_o *)(v94 + 16), saveDataMapList, v104, v105, v106, v107, v108, v109);
  v111 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v94 + 16);
  if ( !v111 )
    return 1;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
         v111,
         (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v112 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B5D694(System_Func_string__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v112,
    (Il2CppObject *)v94,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__0__,
    (const MethodInfo_2C388D0 *)Method_System_Func_string__int__bool___ctor__);
  v113 = (System_Func_BattleBuffData_BuffData__int__bool__o *)sub_B5D694(System_Func_string__int__bool__TypeInfo);
  System_Func_BattleBuffData_BuffData__int__bool____ctor(
    v113,
    (Il2CppObject *)v94,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__1__,
    (const MethodInfo_2C388D0 *)Method_System_Func_string__int__bool___ctor__);
  v114 = (System_Func_string__double__bool__o *)sub_B5D694(System_Func_string__double__bool__TypeInfo);
  System_Func_string__double__bool____ctor(
    v114,
    (Il2CppObject *)v94,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__2__,
    (const MethodInfo_2C3845C *)Method_System_Func_string__double__bool___ctor__);
  v115 = (System_Func_string__double__bool__o *)sub_B5D694(System_Func_string__double__bool__TypeInfo);
  System_Func_string__double__bool____ctor(
    v115,
    (Il2CppObject *)v94,
    Method_BattleLogicSkill___c__DisplayClass11_0__checkConditions_b__3__,
    (const MethodInfo_2C3845C *)Method_System_Func_string__double__bool___ctor__);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_53;
  Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v116 = (BattleServantData_o *)Instance;
  Instance = (DataManager_o *)BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v112 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v112,
          (BattleBuffData_BuffData_o *)StringLiteral_9476/*"NP_HIGHER"*/,
          (int32_t)Instance,
          (const MethodInfo_2C388E4 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v124 = &StringLiteral_2575/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_52;
  }
  Instance = (DataManager_o *)BattleServantData__getNPVal(v116, 0LL);
  if ( !v113 )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v113,
                                (BattleBuffData_BuffData_o *)StringLiteral_9477/*"NP_LOWER"*/,
                                (int32_t)Instance,
                                (const MethodInfo_2C388E4 *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v124 = &StringLiteral_2576/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_52;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  Instance = (DataManager_o *)System_Func_BattleBuffData_BuffData__int__bool___Invoke(
                                v112,
                                (BattleBuffData_BuffData_o *)StringLiteral_12511/*"STAR_HIGHER"*/,
                                data->fields.totalCriticalStars,
                                (const MethodInfo_2C388E4 *)Method_System_Func_string__int__bool__Invoke__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v124 = &StringLiteral_2577/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_52;
  }
  v118 = this->fields.data;
  if ( !v118 )
    goto LABEL_53;
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v113,
          (BattleBuffData_BuffData_o *)StringLiteral_12512/*"STAR_LOWER"*/,
          v118->fields.totalCriticalStars,
          (const MethodInfo_2C388E4 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v124 = &StringLiteral_2578/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_52;
  }
  NowHp = BattleServantData__getNowHp(v116, 0LL);
  if ( !System_Func_BattleBuffData_BuffData__int__bool___Invoke(
          v112,
          (BattleBuffData_BuffData_o *)StringLiteral_7176/*"HP_VAL_HIGHER"*/,
          NowHp,
          (const MethodInfo_2C388E4 *)Method_System_Func_string__int__bool__Invoke__) )
  {
LABEL_44:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v124 = &StringLiteral_2573/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_52;
  }
  v120 = BattleServantData__getNowHp(v116, 0LL);
  if ( System_Func_BattleBuffData_BuffData__int__bool___Invoke(
         v113,
         (BattleBuffData_BuffData_o *)StringLiteral_7177/*"HP_VAL_LOWER"*/,
         v120,
         (const MethodInfo_2C388E4 *)Method_System_Func_string__int__bool__Invoke__) )
  {
    v121 = BattleServantData__getNowHp(v116, 0LL);
    Instance = (DataManager_o *)BattleServantData__getMaxHp(v116, 0LL);
    if ( !v114 )
      goto LABEL_53;
    if ( System_Func_string__double__bool___Invoke(
           v114,
           (System_String_o *)StringLiteral_7174/*"HP_PER_HIGHER"*/,
           (double)v121 * 1000.0 / (double)(int)Instance,
           (const MethodInfo_2C38470 *)Method_System_Func_string__double__bool__Invoke__) )
    {
      v122 = BattleServantData__getNowHp(v116, 0LL);
      Instance = (DataManager_o *)BattleServantData__getMaxHp(v116, 0LL);
      if ( v115 )
      {
        if ( System_Func_string__double__bool___Invoke(
               v115,
               (System_String_o *)StringLiteral_7175/*"HP_PER_LOWER"*/,
               (double)v122 * 1000.0 / (double)(int)Instance,
               (const MethodInfo_2C38470 *)Method_System_Func_string__double__bool__Invoke__) )
        {
          return 1;
        }
        goto LABEL_48;
      }
LABEL_53:
      sub_B5D69C(Instance, v102);
    }
    goto LABEL_44;
  }
LABEL_48:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v124 = &StringLiteral_2574/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_52:
  v125 = LocalizationManager__Get((System_String_o *)*v124, 0LL);
  *text = v125;
  sub_B5D560((BattleServantConfConponent_o *)text, (System_Int32_array **)v125, v126, v127, v128, v129, v130, v131);
  return 0;
}


BattleActionData_o *__fastcall BattleLogicSkill__createCommandSpell(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
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
  __int64 v42; // x22
  DataManager_o *skillId; // x0
  __int64 v44; // x1
  System_Int32_array **skillInfo; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x21
  DataManager_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  BattleActionData_c *v54; // x0
  System_Int32_array **ptTarget; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_int__o *v62; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x25
  const MethodInfo *v64; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v66; // x24
  DataVals_array *v67; // x25
  BattleActionData_o *v68; // x22
  __int64 v69; // x3
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v73; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_42EBEB4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)task, (_DWORD)method, v3);
    sub_B5D5C4(&BattleActionLogManagerInterface_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataVals___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_DataVals__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    byte_42EBEB4 = 1;
  }
  v42 = sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v42, 0LL);
  if ( !task )
    goto LABEL_30;
  skillInfo = (System_Int32_array **)task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_30;
  skillId = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               skillId,
                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_30;
  v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !v46 )
    goto LABEL_30;
  skillId = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v46,
                               (int32_t)skillId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v42 )
    goto LABEL_30;
  v47 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v42, 0LL);
  *(_DWORD *)(v42 + 32) = -1;
  if ( !v47 )
    goto LABEL_30;
  *(_DWORD *)(v42 + 48) = HIDWORD(v47->fields.datalist);
  v54 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v54 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v42 + 56) = v54->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = (System_Int32_array **)task->fields.ptTarget;
  *(_QWORD *)(v42 + 40) = ptTarget;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 40), ptTarget, v48, v49, v50, v51, v52, v53);
  *(_QWORD *)(v42 + 144) = skillInfo;
  sub_B5D560((BattleServantConfConponent_o *)(v42 + 144), skillInfo, v56, v57, v58, v59, v60, v61);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_30;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v62 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v62,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v62 )
    goto LABEL_30;
  System_Collections_Generic_List_int___AddRange(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)v47->fields.saveNameList,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v47, 0LL);
  if ( !v63 )
    goto LABEL_30;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v63,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v47->fields.m_CachedPtr,
    task->fields.ptTarget,
    v62,
    (System_Collections_Generic_List_DataVals__o *)v63,
    v64);
  logicfunction = this->fields.logicfunction;
  v66 = System_Collections_Generic_List_int___ToArray(
          v62,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v67 = (DataVals_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63,
                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*skillInfo)->m_Items[91])(
                               skillInfo,
                               *(_QWORD *)&(*skillInfo)->m_Items[93]);
  if ( !logicfunction )
    goto LABEL_30;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v42,
                               v66,
                               v67,
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
  v68 = (BattleActionData_o *)skillId;
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
    v73 = 0LL;
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      ++v73;
      p_offset += 2;
      if ( v73 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_23:
    p_method = sub_AF54C0(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL, v69);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    task,
    *(_QWORD *)(p_method + 8));
  if ( CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v47, 0LL) > 0.0 )
  {
    logic = this->fields.logic;
    if ( logic )
    {
      perf = logic->fields.perf;
      CutinAdditionalTime = CommandSpellEntity__GetCutinAdditionalTime((CommandSpellEntity_o *)v47, 0LL);
      if ( perf )
      {
        BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 0, 0LL);
        return v68;
      }
    }
LABEL_30:
    sub_B5D69C(skillId, v44);
  }
  return v68;
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
  v5 = BattleLogicSkill__createSkillData_31393224(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_B5D69C(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_31393224(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
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
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  __int64 skillId; // x0
  BattleActionData_o *v56; // x22
  BattleActionData_o *v57; // x25
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  BattleBoostItemInfoData_o *skillInfo; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v65; // x21
  SkillEntity_o *Entity; // x27
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x24
  BattleActionData_c *v68; // x8
  struct BattleActionData_StaticFields **p_static_fields; // x9
  __int64 v70; // x10
  BattleData_o *data; // x23
  __int64 v72; // x28
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v74; // x23
  BattleServantData_o *EnemyServantData; // x0
  const MethodInfo *v76; // x1
  SkillEntity_o *v77; // x21
  __int64 v78; // x23
  __int64 v79; // x27
  BattleData_o *v80; // x23
  const MethodInfo *v81; // x1
  System_Int32_array **ptTarget; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **Name; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_String_array *v108; // x23
  System_Object_array *v109; // x28
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  BattleServantConfConponent_o *p_motionMessage; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  int32_t actortype; // w8
  System_Int32_array **effectList; // x1
  int v121; // w10
  DataVals_array *v122; // x26
  unsigned int v123; // w8
  __int64 v124; // x10
  SkillEntity_o *v125; // x24
  BattleLogicFunction_o *logicfunction; // x23
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  bool isBuffUpdate; // w21
  int32_t ActorId; // w0
  const MethodInfo *v131; // x6
  struct BattleData_o *v132; // x8
  bool v133; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x23
  BattleLogicFunction_o *v136; // x23
  System_Int32_array *v137; // x27
  DataVals_array *v138; // x28
  int32_t v139; // w0
  UnityEngine_Object_o *v140; // x23
  int32_t v141; // w26
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x3
  struct BattleData_o *v151; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  unsigned __int64 v154; // x10
  BattleActionLogManagerInterface_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v157; // x1
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x1
  System_Int32_array **v165; // x1
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array ***v172; // x25
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **v179; // x1
  System_Int32_array **v180; // x1
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  int32_t type; // w21
  BattleData_o *v188; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v190; // x1
  const MethodInfo *v191; // x4
  _BOOL4 v192; // w8
  BattleData_o *v194; // x23
  BattleServantData_o *v195; // x0
  BattleServantData_o *v196; // x25
  BattleData_o *v197; // x23
  int32_t uniqueId; // w26
  const MethodInfo *v199; // x5
  struct BattleLogic_o *v200; // x23
  BattleLogicTask_array *v201; // x0
  BattleLogicTask_o *v202; // x23
  BattleData_o *v203; // x23
  BattleLogicTask_o *v204; // x22
  const MethodInfo *v205; // x1
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  struct BattleLogic_o *v212; // x8
  BattlePerformance_o *perf; // x22
  float CutinAdditionalTime; // s0
  struct BattleData_o *v215; // x8
  struct BattlePerformance_o *v216; // x8
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  CheckUpdateShiftTask_o *v223; // x21
  __int64 v224; // x0
  SkillLvMaster_o *skillLvMst; // [xsp+38h] [xbp-78h]
  SkillLvEntity_o *v227; // [xsp+48h] [xbp-68h]
  DataVals_array *dataValsArray; // [xsp+50h] [xbp-60h] BYREF
  System_Int32_array *functionIdArray; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // 0:x0.16

  if ( (byte_42EBEB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int___, (_DWORD)task, fromSkillCopyFunc, baseVals);
    sub_B5D5C4(&BattleActionData_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BattleActionLogManagerInterface_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&BattleBoostItemInfoData_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&CheckUpdateShiftTask_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v31, v32, v33);
    sub_B5D5C4(&BattleLogicFunction_FunctionArgument_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v37, v38, v39);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_1/*""*/, v52, v53, v54);
    byte_42EBEB1 = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_157;
  BattleData__ResetWasAttackTargetId((BattleData_o *)skillId, 0LL);
  v56 = (BattleActionData_o *)sub_B5D694(BattleActionData_TypeInfo);
  BattleActionData___ctor(v56, 0LL);
  if ( !v56 )
    goto LABEL_157;
  v57 = BattleActionData__AddDisplayTriggerIntervalBuff(v56, task, 0LL);
  *baseActionData = v57;
  sub_B5D560((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
  if ( !task )
    goto LABEL_157;
  if ( !v57 )
    goto LABEL_157;
  v57->fields.taskActorType = task->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)task->fields.skillInfo;
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_157;
  skillId = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                       (DataManager_o *)skillId,
                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_157;
  v65 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v65 )
    goto LABEL_157;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v65,
                              skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_157;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)skillId,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v227 = (SkillLvEntity_o *)skillId;
  v57->fields.isCounter = task->fields.isCounter;
  v68 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v68 = BattleActionData_TypeInfo;
  }
  p_static_fields = &v68->static_fields;
  v57->fields.type = v68->static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      p_static_fields = &BattleActionData_TypeInfo->static_fields;
    }
    v57->fields.type = (*p_static_fields)->TYPE_BOOSTSKILL;
    v57->fields.imageId = skillInfo->fields.itemImageId;
    v70 = *(&BattleBoostItemInfoData_TypeInfo->_2.bitflags2 + 1);
    if ( *(&skillInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v70
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[v70 - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( (skillId & 1) != 0 )
        v57->fields.noOperation = 1;
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
    || (skillId = BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL), v72 = 0LL, (skillId & 1) != 0) )
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
    v57->fields.actorId = skillId;
    if ( !v227 )
      goto LABEL_157;
    v74 = this->fields.data;
    skillId = SkillLvEntity__GetActNpcServantId(v227, 0LL);
    if ( !v74 )
      goto LABEL_157;
    EnemyServantData = BattleData__getEnemyServantData(v74, skillId, 0LL);
    if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
    {
      v77 = Entity;
      v79 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
      v78 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v230.fields.currentCryptoKey = v79;
      *(_QWORD *)&v230.fields.fakeValue = v78;
      Entity = v77;
      v57->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v230, 0LL);
    }
    v80 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, v76);
    if ( !v80 )
      goto LABEL_157;
    skillId = BattleData__getServantId(v80, skillId, 0LL);
    if ( !Entity )
      goto LABEL_157;
    v57->fields.motionId = SkillEntity__GetMotionId(Entity, skillId, 0LL);
    v57->fields.targetId = BattleLogicTask__getTarget(task, v81);
    ptTarget = (System_Int32_array **)task->fields.ptTarget;
    v57->fields.pttargetIds = (struct System_Int32_array *)ptTarget;
    sub_B5D560((BattleServantConfConponent_o *)&v57->fields.pttargetIds, ptTarget, v83, v84, v85, v86, v87, v88);
    Name = (System_Int32_array **)SkillEntity__getName(Entity, 0LL);
    v57->fields.skillMessage = (struct System_String_o *)Name;
    sub_B5D560((BattleServantConfConponent_o *)&v57->fields.skillMessage, Name, v90, v91, v92, v93, v94, v95);
    v57->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->fields.skillInfo,
      (System_Int32_array **)skillInfo,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
    v57->fields.isForcedSpeedOne = isForcedSkillSpeedOne;
    v57->fields.checkRevengeId = task->fields.checkRevengeId;
    if ( task->fields.gimmickIndexArray )
    {
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_157;
      skillId = (__int64)BattleData__GetGimmickStartVoiceArray((BattleData_o *)skillId, 0LL);
      if ( !this->fields.data )
        goto LABEL_157;
      v108 = (System_String_array *)skillId;
      skillId = (__int64)BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
      if ( !this->fields.data )
        goto LABEL_157;
      v109 = (System_Object_array *)skillId;
      GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
      BattleActionData__SetGimmickData(v57, task->fields.gimmickIndexArray, v108, v109, GimmickAnimTypeArray, 0LL);
    }
    motionMessage = task->fields.motionMessage;
    if ( motionMessage && motionMessage->fields.m_stringLength >= 1 )
    {
      v57->fields.motionMessage = motionMessage;
      p_motionMessage = (BattleServantConfConponent_o *)&v57->fields.motionMessage;
    }
    else
    {
      v57->fields.motionMessage = 0LL;
      p_motionMessage = (BattleServantConfConponent_o *)&v57->fields.motionMessage;
      motionMessage = 0LL;
    }
    sub_B5D560(p_motionMessage, (System_Int32_array **)motionMessage, v102, v103, v104, v105, v106, v107);
    actortype = task->fields.actortype;
    if ( actortype == 5 || actortype == 1 )
      BattleActionData__setStateField(v57, 0LL);
    effectList = (System_Int32_array **)Entity->fields.effectList;
    v57->fields.effectlist = (struct System_Int32_array *)effectList;
    sub_B5D560((BattleServantConfConponent_o *)&v57->fields.effectlist, effectList, v113, v114, v115, v116, v117, v118);
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_157;
    BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
    if ( skillInfo->fields.type == 21 )
    {
      skillId = (__int64)SkillLvEntity__getDataValsList(v227, 0LL);
      if ( !skillId )
        goto LABEL_157;
      v121 = *(_DWORD *)(skillId + 24);
      v122 = (DataVals_array *)skillId;
      if ( v121 >= 1 )
      {
        v123 = 0;
        do
        {
          if ( v123 >= v121 )
          {
            v224 = sub_B5D6C8(skillId);
            sub_B5D668(v224, 0LL);
          }
          v124 = *(_QWORD *)(skillId + 8LL * (int)v123 + 32);
          if ( !v124 )
            goto LABEL_157;
          *(_BYTE *)(v124 + 72) = 1;
          v121 = *(_DWORD *)(skillId + 24);
        }
        while ( (int)++v123 < v121 );
      }
      v125 = Entity;
      logicfunction = this->fields.logicfunction;
      funcId = v227->fields.funcId;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !logicfunction )
        goto LABEL_157;
      skillId = (__int64)BattleLogicFunction__procList(
                           logicfunction,
                           v57,
                           funcId,
                           v122,
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
        v57->fields.commandType = changeTDCommandType;
      functionIdArray = v227->fields.funcId;
      skillId = (__int64)SkillLvEntity__getDataValsList(v227, 0LL);
      isBuffUpdate = 1;
      dataValsArray = (DataVals_array *)skillId;
      if ( baseVals && fromSkillCopyFunc )
      {
        ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
        if ( !BattleLogicSkill__SetSkillCopyFunction(
                this,
                v227,
                baseVals,
                &functionIdArray,
                &dataValsArray,
                ActorId,
                v131) )
          return 0LL;
        skillId = (__int64)this->fields.data;
        if ( !skillId )
          goto LABEL_157;
        skillId = BattleData__isEnemyID((BattleData_o *)skillId, v57->fields.actorId, 0LL);
        if ( (skillId & 1) != 0 )
        {
          v132 = this->fields.data;
          if ( !v132 )
            goto LABEL_157;
          v133 = v132->fields.currentTurn == 0;
        }
        else
        {
          v133 = 0;
        }
        isBuffUpdate = 0;
        v57->fields.isReversalShortBuffTurn = v133;
      }
      if ( skillInfo->fields.type == 1 )
      {
        argument = (BattleLogicFunction_FunctionArgument_o *)sub_B5D694(BattleLogicFunction_FunctionArgument_TypeInfo);
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
          argument = (BattleLogicFunction_FunctionArgument_o *)sub_B5D694(BattleLogicFunction_FunctionArgument_TypeInfo);
          BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
        }
        overwriteFuncSideEffectArg = task->fields.overwriteFuncSideEffectArg;
        if ( !overwriteFuncSideEffectArg )
        {
          overwriteFuncSideEffectArg = (struct BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_B5D694(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
          BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(
            (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
            0LL);
        }
        if ( !argument )
          goto LABEL_157;
        v125 = Entity;
        BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(argument, overwriteFuncSideEffectArg, 0LL);
      }
      else
      {
        v125 = Entity;
      }
      v136 = this->fields.logicfunction;
      v138 = dataValsArray;
      v137 = functionIdArray;
      skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                  skillInfo,
                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v136 )
        goto LABEL_157;
      skillId = (__int64)BattleLogicFunction__procList(
                           v136,
                           v57,
                           v137,
                           v138,
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
    v72 = skillId;
    if ( task->fields.actortype == 5 )
    {
      if ( !skillId )
        goto LABEL_157;
      v139 = BasicHelper__IndexValue_int__28151596(
               *(System_Collections_Generic_List_T__o **)(skillId + 288),
               0,
               0,
               (const MethodInfo_1AD8F2C *)Method_BasicHelper_IndexValue_int___);
      v140 = *(UnityEngine_Object_o **)(v72 + 72);
      v141 = v139;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      skillId = UnityEngine_Object__op_Equality(v140, 0LL, 0LL);
      if ( v141 >= 1 && (skillId & 1) != 0 )
      {
        logic = this->fields.logic;
        if ( !logic )
          goto LABEL_157;
        skillId = (__int64)logic->fields.perf;
        if ( !skillId )
          goto LABEL_157;
        ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                     (BattlePerformance_o *)skillId,
                                                     v141,
                                                     0LL);
        *(_QWORD *)(v72 + 72) = ServantGameObject;
        sub_B5D560((BattleServantConfConponent_o *)(v72 + 72), ServantGameObject, v144, v145, v146, v147, v148, v149);
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
    if ( !v72 )
      goto LABEL_157;
    *(_BYTE *)(v72 + 92) = 0;
    skillId = (__int64)this->fields.data;
    if ( !skillId )
      goto LABEL_157;
    BattleData__setCommandAttack((BattleData_o *)skillId, 0, 0, 0LL);
    v151 = this->fields.data;
    if ( !v151 )
      goto LABEL_157;
    actionLogManager = v151->fields.actionLogManager;
    if ( !actionLogManager )
      goto LABEL_157;
    klass = actionLogManager->klass;
    if ( *(_WORD *)&actionLogManager->klass->_2.bitflags1 )
    {
      v154 = 0LL;
      p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
      {
        ++v154;
        p_offset += 2;
        if ( v154 >= *(unsigned __int16 *)&actionLogManager->klass->_2.bitflags1 )
          goto LABEL_111;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
    }
    else
    {
LABEL_111:
      p_method = sub_AF54C0(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL, v150);
    }
    (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
      actionLogManager,
      task,
      *(_QWORD *)(p_method + 8));
    if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v72, 0LL) )
    {
      v164 = *(System_Int32_array ***)(v72 + 120);
      *(_QWORD *)(v72 + 432) = v164;
      sub_B5D560((BattleServantConfConponent_o *)(v72 + 432), v164, v158, v159, v160, v161, v162, v163);
      v165 = (System_Int32_array **)StringLiteral_1/*""*/;
      *(_QWORD *)(v72 + 120) = StringLiteral_1/*""*/;
      sub_B5D560((BattleServantConfConponent_o *)(v72 + 120), v165, v166, v167, v168, v169, v170, v171);
      v172 = (System_Int32_array ***)(v72 + 128);
      if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v72 + 128), 0LL) )
      {
        v179 = *v172;
        *(_QWORD *)(v72 + 432) = *v172;
        sub_B5D560((BattleServantConfConponent_o *)(v72 + 432), v179, v173, v174, v175, v176, v177, v178);
        v180 = (System_Int32_array **)StringLiteral_1/*""*/;
        *v172 = (System_Int32_array **)StringLiteral_1/*""*/;
        sub_B5D560((BattleServantConfConponent_o *)(v72 + 128), v180, v181, v182, v183, v184, v185, v186);
      }
    }
    type = skillInfo->fields.type;
    v188 = this->fields.data;
    skillId = BattleLogicTask__getActorId(task, v157);
    if ( !v188 )
      goto LABEL_157;
    ServantData = BattleData__getServantData(v188, skillId, 0LL);
    v192 = type != 1 && !ServantData || SkillLvEntity__IsNoTargetSkipSkill(v227, 0LL);
    if ( (v192 & (*(unsigned __int8 *)(v72 + 240) ^ 1)) == 0 && (!*(_BYTE *)(v72 + 297) || *(_BYTE *)(v72 + 298)) )
    {
      if ( task->fields.isCanCounterTask )
      {
        v194 = this->fields.data;
        skillId = BattleLogicTask__getActorId(task, v190);
        if ( !v194 )
          goto LABEL_157;
        v195 = BattleData__getServantData(v194, skillId, 0LL);
        if ( v195 )
        {
          v196 = v195;
          (*(void (__fastcall **)(__int64, struct BattleData_o *, _QWORD))(*(_QWORD *)v72 + 440LL))(
            v72,
            this->fields.data,
            *(_QWORD *)(*(_QWORD *)v72 + 448LL));
          skillId = *(_QWORD *)(v72 + 288);
          if ( !skillId )
            goto LABEL_157;
          v197 = this->fields.data;
          uniqueId = v196->fields.uniqueId;
          skillId = (__int64)System_Collections_Generic_List_int___ToArray(
                               (System_Collections_Generic_List_int__o *)skillId,
                               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          if ( !v197 )
            goto LABEL_157;
          BattleData__SetWasAttackTargetIdList(v197, uniqueId, (System_Int32_array *)skillId, 0LL);
          v200 = this->fields.logic;
          if ( !v200 )
            goto LABEL_157;
          skillId = (__int64)v200->fields.logicnomal;
          if ( !skillId )
            goto LABEL_157;
          v201 = BattleLogicNomal__taskCounterFunc(
                   (BattleLogicNomal_o *)skillId,
                   this->fields.data,
                   !v196->fields.isEnemy,
                   1,
                   0,
                   v199);
          BattleLogic__addBattleLogicTask(v200, v201, 0LL);
        }
      }
      v202 = BattleLogicSkill__MakeAddInvokeSkillTask(this, skillLvMst, v227, task, v191);
      skillId = SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v227, 0LL);
      if ( this->fields.logic )
      {
        if ( (skillId & 1) != 0 )
          BattleLogic__AddTaskTargetTaskAfter(this->fields.logic, task, v202, 0LL);
        else
          BattleLogic__AddBattleLogicTask(this->fields.logic, v202, 0LL);
        v203 = this->fields.data;
        skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                    skillInfo,
                    skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( v203 )
        {
          BattleData__AddUseSkillId(v203, skillId, 0LL);
          if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v72, 0LL) )
          {
            v204 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v204, v205);
            if ( !v204 )
              goto LABEL_157;
            v204->fields.actiontype = 24;
            skillId = (__int64)this->fields.logic;
            if ( !skillId )
              goto LABEL_157;
            BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v204, 0LL);
          }
          if ( SkillEntity__GetCutinAdditionalTime(v125, 0LL) > 0.0 )
          {
            skillId = SkillEntity__getSkillCutInId(v125, 0LL);
            if ( !(_DWORD)skillId )
            {
              v212 = this->fields.logic;
              if ( !v212 )
                goto LABEL_157;
              perf = v212->fields.perf;
              CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(v125, 0LL);
              if ( !perf )
                goto LABEL_157;
              BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
              if ( *(_QWORD *)(v72 + 120) )
              {
                v215 = this->fields.data;
                if ( !v215 )
                  goto LABEL_157;
                v216 = v215->fields.perf;
                if ( !v216 )
                  goto LABEL_157;
                skillId = (__int64)v216->fields.infoComp;
                if ( !skillId )
                  goto LABEL_157;
                BattleInformationComponent__showCommonMessage(
                  (BattleInformationComponent_o *)skillId,
                  (BattleActionData_o *)v72,
                  0LL);
                *(_QWORD *)(v72 + 120) = 0LL;
                sub_B5D560((BattleServantConfConponent_o *)(v72 + 120), 0LL, v217, v218, v219, v220, v221, v222);
                *(_BYTE *)(v72 + 308) = 1;
              }
            }
          }
          if ( task->fields.IsNotShowSkillMessage )
          {
            *(_QWORD *)(v72 + 120) = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)(v72 + 120), 0LL, v206, v207, v208, v209, v210, v211);
            *(_BYTE *)(v72 + 308) = 1;
          }
          if ( SkillEntity__IsCheckUpdateShiftServant(v125, 0LL) )
          {
            v223 = (CheckUpdateShiftTask_o *)sub_B5D694(CheckUpdateShiftTask_TypeInfo);
            CheckUpdateShiftTask___ctor(v223, 0LL);
            skillId = (__int64)this->fields.logic;
            if ( !skillId )
              goto LABEL_157;
            BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, task, (BattleLogicTask_o *)v223, 0LL);
          }
          return (BattleActionData_o *)v72;
        }
      }
LABEL_157:
      sub_B5D69C(skillId, task);
    }
    return 0LL;
  }
  return (BattleActionData_o *)v72;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getGimmickTask(BattleLogicSkill_o *this, const MethodInfo *method)
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
  BattleData_o *data; // x0
  BattleData_o *v15; // x20
  BattleData_o *v16; // x21
  const MethodInfo *v17; // x2
  int32_t HitGimmickSkillId; // w0
  int32_t v19; // w22
  __int64 v20; // x21
  __int64 v21; // x20
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleData_o *v29; // x8
  System_Int32_array *v30; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v32; // x6
  const MethodInfo *v33; // x3
  BattleData_o *v34; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_42EBEB7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    byte_42EBEB7 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_26;
  data = (BattleData_o *)BattleData__GetGimmickSkillIdArray(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v15 = data;
  data = (BattleData_o *)BattleData__GetGimmickSkillRateArray(this->fields.data, 0LL);
  if ( !this->fields.data )
    goto LABEL_26;
  v16 = data;
  data = (BattleData_o *)BattleData__GetReelIconArray(this->fields.data, 0LL);
  if ( !v15 )
    goto LABEL_26;
  if ( !v15->fields.rootfsm )
    return 0LL;
  if ( !v16 )
    goto LABEL_26;
  if ( !v16->fields.rootfsm )
    return 0LL;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.rootfsm )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, (System_Int32_array *)v16, v17);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v19 = HitGimmickSkillId;
  v20 = sub_B5D694(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_26;
  *(_DWORD *)(v20 + 24) = -1;
  *(_QWORD *)(v20 + 16) = 20LL;
  if ( (unsigned int)v19 >= LODWORD(v15->fields.rootfsm) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 376LL))(
    v20,
    *((unsigned int *)&v15->fields.fsm + v19),
    *(_QWORD *)(*(_QWORD *)v20 + 384LL));
  *(_DWORD *)(v20 + 36) = 1;
  v21 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v21, v22);
  data = (BattleData_o *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.rootfsm) )
    goto LABEL_27;
  LODWORD(data->fields.fsm) = v19;
  if ( !v21 )
    goto LABEL_26;
  *(_QWORD *)(v21 + 136) = data;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 136), (System_Int32_array **)data, v23, v24, v25, v26, v27, v28);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v29 = this->fields.data) == 0LL)
    || (v30 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v29, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v21,
          (BattleSkillInfoData_o *)v20,
          v30,
          FieldPlayerServantIDList,
          0,
          0,
          v32),
        BattleLogicTask__setActor((BattleLogicTask_o *)v21, 5, -1, v33),
        (data = (BattleData_o *)sub_B5D5DC(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(data, method);
  }
  v34 = data;
  data = (BattleData_o *)sub_B5D684(v21, data->klass->_1.element_class);
  if ( !data )
  {
    v43 = sub_B5D6BC(0LL);
    sub_B5D668(v43, 0LL);
  }
  if ( !LODWORD(v34->fields.rootfsm) )
  {
LABEL_27:
    v42 = sub_B5D6C8(data);
    sub_B5D668(v42, 0LL);
  }
  v34->fields.fsm = (struct PlayMakerFSM_o *)v21;
  sub_B5D560((BattleServantConfConponent_o *)&v34->fields.fsm, (System_Int32_array **)v21, v35, v36, v37, v38, v39, v40);
  return (BattleLogicTask_array *)v34;
}


BattleLogicTask_array *__fastcall BattleLogicSkill__getQuestBehaviorSkillTask(
        BattleLogicSkill_o *this,
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  BattleLogicTask_array *result; // x0
  QuestBehaviorMaster_o *v29; // x20
  int32_t v30; // w21
  int32_t Phase; // w0
  BattleLogicTask_array *v32; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  __int64 v34; // x25
  BattleLogicTask_o **m_Items; // x26
  __int64 v36; // x22
  unsigned int v37; // w0
  BattleLogicTask_o *v38; // x23
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  System_Int32_array *v41; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x3
  __int64 v45; // x0

  if ( (byte_42EBEB6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42EBEB6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  result = (BattleLogicTask_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( result )
  {
    v29 = (QuestBehaviorMaster_o *)result;
    Instance = (DataManager_o *)this->fields.data;
    if ( !Instance )
      goto LABEL_24;
    Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
    if ( !this->fields.data )
      goto LABEL_24;
    v30 = (int)Instance;
    Phase = BattleData__getPhase(this->fields.data, 0LL);
    result = (BattleLogicTask_array *)QuestBehaviorMaster__getBattleSkill(v29, v30, Phase, 0LL);
    if ( result )
    {
      v32 = result;
      v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v33,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      if ( (int)v32->max_length >= 1 )
      {
        v34 = 0LL;
        m_Items = v32->m_Items;
        while ( 1 )
        {
          v36 = sub_B5D694(BattleSkillInfoData_TypeInfo);
          BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v36, 0LL);
          if ( !v36 )
            break;
          *(_DWORD *)(v36 + 24) = -1;
          *(_QWORD *)(v36 + 16) = 20LL;
          if ( (unsigned int)v34 >= v32->max_length )
            goto LABEL_25;
          Instance = (DataManager_o *)m_Items[v34];
          if ( !Instance )
            break;
          v37 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
          Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 376LL))(
                                        v36,
                                        v37,
                                        *(_QWORD *)(*(_QWORD *)v36 + 384LL));
          if ( (unsigned int)v34 >= v32->max_length )
          {
LABEL_25:
            v45 = sub_B5D6C8(Instance);
            sub_B5D668(v45, 0LL);
          }
          Instance = (DataManager_o *)m_Items[v34];
          if ( !Instance )
            break;
          *(_DWORD *)(v36 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
          v38 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
          BattleLogicTask___ctor(v38, v39);
          if ( !v38 )
            break;
          BattleLogicTask__setActor(v38, 5, -1, v40);
          Instance = (DataManager_o *)this->fields.data;
          if ( !Instance )
            break;
          Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          if ( !this->fields.data )
            break;
          v41 = (System_Int32_array *)Instance;
          FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
          BattleLogicTask__setActionSkill(v38, (BattleSkillInfoData_o *)v36, v41, FieldPlayerServantIDList, 0, 0, v43);
          BattleLogicTask__setActor(v38, 5, -1, v44);
          if ( !v33 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          if ( (int)++v34 >= (signed int)v32->max_length )
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
LABEL_24:
        sub_B5D69C(Instance, v27);
      }
      if ( !v33 )
        goto LABEL_24;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  BattleLogicTask_o *v20; // x22
  const MethodInfo *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x4

  if ( (byte_42EBEB0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, skillId, skillLv, ptTargetList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17, v18);
    byte_42EBEB0 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v20 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v20, v21);
  if ( !v20 || (BattleLogicTask__setCommandSpell(v20, skillId, 0LL, ptTargetList, v24), !v19) )
    sub_B5D69C(v22, v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v19,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  BattleLogicTask_o *v31; // x21
  const MethodInfo *v32; // x1
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  const MethodInfo *v35; // x6
  bool v36; // w4
  bool v37; // w5
  BattleLogicTask_o *v38; // x0
  BattleSkillInfoData_o *v39; // x1
  System_Int32_array *v40; // x2
  struct BattleData_o *v41; // x8
  int32_t globaltargetId; // w26
  BattleLogicTarget_o *logictarget; // x26
  int32_t v44; // w27
  const MethodInfo *v45; // x4
  Il2CppClass *v46; // x0
  BattleLogicTarget_o *v47; // x26
  int32_t v48; // w27
  const MethodInfo *v49; // x3
  bool isPlayerID; // w0
  int32_t v51; // w2
  int32_t v52; // w1
  __int64 v54; // x0
  const MethodInfo *v55; // [xsp+10h] [xbp-60h]

  if ( (byte_42EBEAF & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)skillInfo, (_DWORD)ptTargetList, enemyTargetList);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v27, v28, v29);
    byte_42EBEAF = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v31 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v31, v32);
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
      if ( !v31 )
        goto LABEL_35;
      v31->fields.isCanCounterTask = isCanCounterSkill;
      v31->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( enemyTargetList )
  {
    if ( !v31 )
      goto LABEL_35;
    v36 = checkAlive;
    v37 = checkRevengeId;
    v38 = v31;
    v39 = skillInfo;
    v40 = enemyTargetList;
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
      v41 = this->fields.data;
      if ( !v41 )
        goto LABEL_35;
      globaltargetId = v41->fields.globaltargetId;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
      {
        logictarget = this->fields.logictarget;
        v44 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_35;
        globaltargetId = BattleLogicTarget__getGlobalTargetId(
                           logictarget,
                           v44,
                           v44 == -1,
                           (System_Int32_array *)data,
                           v45);
      }
      v46 = int___TypeInfo;
    }
    else
    {
      data = (__int64)this->fields.data;
      if ( !data )
        goto LABEL_35;
      v47 = this->fields.logictarget;
      v48 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v47 )
        goto LABEL_35;
      globaltargetId = BattleLogicTarget__getTargetAiAct(
                         v47,
                         1,
                         v48,
                         0LL,
                         (System_Int32_array *)data,
                         1,
                         0,
                         0LL,
                         0LL,
                         1,
                         v55);
      v46 = int___TypeInfo;
    }
    data = sub_B5D5DC(v46, 1LL);
    if ( !data )
      goto LABEL_35;
    v40 = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
    {
      v54 = sub_B5D6C8(data);
      sub_B5D668(v54, 0LL);
    }
    *(_DWORD *)(data + 32) = globaltargetId;
    if ( !v31 )
LABEL_35:
      sub_B5D69C(data, svtUniqueId);
    v36 = checkAlive;
    v37 = checkRevengeId;
    v38 = v31;
    v39 = skillInfo;
  }
  BattleLogicTask__setActionSkill(v38, v39, v40, ptTargetList, v36, v37, v35);
  svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
  if ( (_DWORD)svtUniqueId == -1 )
  {
    v52 = 1;
    v51 = -1;
  }
  else
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_35;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v51 = skillInfo->fields.svtUniqueId;
    if ( isPlayerID )
      v52 = 2;
    else
      v52 = 3;
  }
  BattleLogicTask__setActor(v31, v52, v51, v49);
  if ( !v30 )
    goto LABEL_35;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v30,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicSkill___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7CAF & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicSkill___c_TypeInfo, v1, v2, v3);
    byte_42E7CAF = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicSkill___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, svt);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v11; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7CB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, val, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    byte_42E7CB0 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_11;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_11:
    sub_B5D69C(conditions, key);
  }
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v14; // x0
  BattleLogicSkill___c__DisplayClass11_0_o *v16; // x0
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2
  double v19; // d0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7CB1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, val, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E7CB1 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(conditions, key);
  }
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v14, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_14;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                               (System_Type_o *)key,
                                                                                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_14;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions) >= val;
  v16 = (BattleLogicSkill___c__DisplayClass11_0_o *)sub_B5D990(conditions);
  return BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__2(v16, v17, v19, v18);
}


bool __fastcall BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v12; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7CB2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9, v10);
    byte_42E7CB2 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(conditions, key);
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v12, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass11_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass11_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *conditions; // x0
  System_String_o *v15; // x0
  bool v16; // w0
  BattleLogicSkill___c__DisplayClass15_0_o *v17; // x0
  const MethodInfo *v18; // x1
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7CB3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9, v10);
    sub_B5D5C4(&long_TypeInfo, v11, v12, v13);
    byte_42E7CB3 = 1;
  }
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          conditions,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                                     (System_Type_o *)key,
                                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(conditions, key);
  }
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v15, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)conditions,
                                                                                               (System_Type_o *)key,
                                                                                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions) >= val;
  v17 = (BattleLogicSkill___c__DisplayClass15_0_o *)sub_B5D990(conditions);
  BattleLogicSkill___c__DisplayClass15_0___ctor(v17, v18);
  return v16;
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
    sub_B5D69C(0LL, type);
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
    sub_B5D69C(this, type);
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