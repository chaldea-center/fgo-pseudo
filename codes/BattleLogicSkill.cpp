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

  if ( (byte_48E5338 & 1) == 0 )
  {
    sub_1B00CCC(&Method_WeightRate_int___ctor__, rateArray);
    sub_1B00CCC(&Method_WeightRate_int__getData__, v4);
    sub_1B00CCC(&Method_WeightRate_int__getTotalWeight__, v5);
    sub_1B00CCC(&Method_WeightRate_int__setWeight__, v6);
    sub_1B00CCC(&WeightRate_int__TypeInfo, v7);
    byte_48E5338 = 1;
  }
  if ( !rateArray )
    return -1;
  v8 = (WeightRate_int__o *)sub_1B00F18(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v8, (const MethodInfo_379B874 *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&rateArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
        sub_1B00F30(v9, v10);
      if ( !v8 )
        break;
      WeightRate_int___setWeight(
        v8,
        rateArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = rateArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_12;
    }
LABEL_13:
    sub_1B00F28(v9, v10);
  }
  if ( !v8 )
    goto LABEL_13;
LABEL_12:
  Next = BattleRandom__getNext(v8->fields.totalweight, 0LL);
  return WeightRate_int___getData(v8, Next, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
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
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  unsigned __int64 v11; // x23
  __int64 v12; // x21
  System_Func_int__bool__o *v13; // x22
  bool v14; // w0

  if ( (byte_48E533A & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_int____74581360, actorIndividualities);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v6);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass17_0__IsNotSkillCopyTargetIndividuality_b__0__, v7);
    sub_1B00CCC(&BattleLogicSkill___c__DisplayClass17_0_TypeInfo, v8);
    byte_48E533A = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actorIndividualities, 0LL) )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                      (System_Collections_ICollection_o *)notSkillCopyTargetIndividualities,
                      0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !notSkillCopyTargetIndividualities )
        goto LABEL_16;
      if ( (int)notSkillCopyTargetIndividualities->max_length >= 1 )
      {
        v11 = 0LL;
        while ( 1 )
        {
          v12 = sub_1B00F18(BattleLogicSkill___c__DisplayClass17_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v12, 0LL);
          if ( v11 >= notSkillCopyTargetIndividualities->max_length )
            sub_1B00F30(IsNullOrEmpty, v10);
          if ( !v12 )
            break;
          *(_DWORD *)(v12 + 16) = notSkillCopyTargetIndividualities->m_Items[v11 + 1];
          v13 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v13,
            (Il2CppObject *)v12,
            Method_BattleLogicSkill___c__DisplayClass17_0__IsNotSkillCopyTargetIndividuality_b__0__,
            0LL);
          v14 = BasicHelper__Any_int__47506688(
                  actorIndividualities,
                  (System_Func_T__bool__o *)v13,
                  (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360);
          if ( !v14 && (__int64)++v11 < (int)notSkillCopyTargetIndividualities->max_length )
            continue;
          return v14;
        }
LABEL_16:
        sub_1B00F28(IsNullOrEmpty, v10);
      }
    }
  }
  return 0;
}


BattleLogicTask_o *__fastcall BattleLogicSkill__MakeAddInvokeSkillTask(
        BattleLogicSkill_o *this,
        SkillLvMaster_o *skillLvMst,
        SkillLvEntity_o *skillLvEnt,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  BattleLogicSkill_o *v8; // x21
  struct System_Int32_array *actorIdlist; // x8
  BattleLogicSkill_o *v10; // x20
  int32_t v11; // w23
  int32_t actortype; // w24
  const MethodInfo *v13; // x1
  BattleData_o *data; // x21
  bool isPlayerID; // w21
  int32_t data_high; // w20
  int32_t v17; // w22
  TempBattleSkillInfoData_o *v18; // x25
  const MethodInfo *v19; // x4

  v8 = this;
  if ( (byte_48E5332 & 1) == 0 )
  {
    this = (BattleLogicSkill_o *)sub_1B00CCC(&TempBattleSkillInfoData_TypeInfo, skillLvMst);
    byte_48E5332 = 1;
  }
  if ( !skillLvMst )
LABEL_17:
    sub_1B00F28(this, skillLvMst);
  this = (BattleLogicSkill_o *)SkillLvMaster__GetAddInvokeSkillLvEntity(skillLvMst, skillLvEnt, 0LL);
  if ( this )
  {
    if ( !baseTask )
      goto LABEL_17;
    actorIdlist = baseTask->fields.actorIdlist;
    v10 = this;
    if ( actorIdlist )
    {
      if ( !actorIdlist->max_length )
        sub_1B00F30(this, skillLvMst);
      v11 = actorIdlist->m_Items[1];
      if ( !skillLvEnt )
        goto LABEL_17;
    }
    else
    {
      v11 = -1;
      if ( !skillLvEnt )
        goto LABEL_17;
    }
    actortype = baseTask->fields.actortype;
    if ( SkillLvEntity__GetAddInvokeSkillActorType(skillLvEnt, 0LL) == 1 )
    {
      data = v8->fields.data;
      this = (BattleLogicSkill_o *)BattleLogicTask__getTarget(baseTask, v13);
      if ( !data )
        goto LABEL_17;
      isPlayerID = BattleData__isPlayerID(data, (int32_t)this, 0LL);
      v11 = -1;
      actortype = 5;
    }
    else
    {
      isPlayerID = 0;
    }
    v17 = (int32_t)v10->fields.data;
    data_high = HIDWORD(v10->fields.data);
    v18 = (TempBattleSkillInfoData_o *)sub_1B00F18(TempBattleSkillInfoData_TypeInfo);
    TempBattleSkillInfoData___ctor(v18, v17, data_high, v11, 0LL);
    return BattleLogicTask__CloneSkillTask(baseTask, (BattleSkillInfoData_o *)v18, actortype, isPlayerID, v19);
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
  BattleData_o *IsQuestClear_36399468; // x0
  __int64 v19; // x1
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v21; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  ClassBoardCommandSpellMaster_o *v24; // x22
  unsigned int v25; // w24
  AddSkillData_o *v26; // x8
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E533B & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, *(_QWORD *)&commandSpellId);
    sub_1B00CCC(&CondType_TypeInfo, v11);
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v12);
    sub_1B00CCC(&DataManager_TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__AddRange__, v15);
    byte_48E533B = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  entity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v16->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_36399468 = (BattleData_o *)CondType__IsQuestClear_36399468(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( ((unsigned __int8)IsQuestClear_36399468 & 1) != 0 )
  {
    if ( !targetIds )
      goto LABEL_29;
    if ( !targetIds->max_length )
      goto LABEL_30;
    IsQuestClear_36399468 = this->fields.data;
    if ( !IsQuestClear_36399468 )
      goto LABEL_29;
    ServantData = BattleData__getServantData(IsQuestClear_36399468, targetIds->m_Items[1], 0LL);
    if ( !ServantData )
      return;
    v21 = ServantData;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)ServantData->fields.classBoardAddCommandSpells,
           0LL) )
    {
      return;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    IsQuestClear_36399468 = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    classBoardAddCommandSpells = v21->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
LABEL_29:
      sub_1B00F28(IsQuestClear_36399468, v19);
    max_length = classBoardAddCommandSpells->max_length;
    if ( max_length >= 1 )
    {
      v24 = (ClassBoardCommandSpellMaster_o *)IsQuestClear_36399468;
      v25 = 0;
      while ( v25 < max_length )
      {
        v26 = classBoardAddCommandSpells->m_Items[v25];
        if ( !v26 || !v24 )
          goto LABEL_29;
        IsQuestClear_36399468 = (BattleData_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  v26->fields.id,
                                                  commandSpellId,
                                                  v26->fields.lv,
                                                  0LL);
        if ( ((unsigned __int8)IsQuestClear_36399468 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( !funcIdList )
            goto LABEL_29;
          System_Collections_Generic_List_int___AddRange(
            funcIdList,
            (System_Collections_Generic_IEnumerable_T__o *)entity->fields.funcIds,
            (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
          IsQuestClear_36399468 = (BattleData_o *)entity;
          if ( !entity )
            goto LABEL_29;
          IsQuestClear_36399468 = (BattleData_o *)ClassBoardCommandSpellEntity__getDataValsList(entity, 0LL);
          if ( !dataValsList )
            goto LABEL_29;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)dataValsList,
            (System_Collections_Generic_IEnumerable_T__o *)IsQuestClear_36399468,
            (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_DataVals__AddRange__);
        }
        max_length = classBoardAddCommandSpells->max_length;
        if ( (int)++v25 >= max_length )
          return;
      }
LABEL_30:
      sub_1B00F30(IsQuestClear_36399468, v19);
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
  SkillLvEntity_o *v11; // x22
  BattleLogicSkill_o *v12; // x25
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
  BattleData_o *data; // x8
  BattleLogicSkill_o *v30; // x25
  BattleServantData_o *v31; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x23
  unsigned __int64 v34; // x20
  __int64 v35; // x24
  struct System_Int32_array *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_Func_int__bool__o *v39; // x27
  __int64 v40; // x27
  System_Func_int__bool__o *v41; // x27
  BattleLogicSkill_o *NotSkillCopyTargetIndividualities; // x0
  const MethodInfo *v43; // x3
  System_Func_int__bool__o *v44; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Int32_array *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Object_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_ICollection_o *CopyTargetFunctionTypeArray; // [xsp+0h] [xbp-B0h]
  System_Int32_array *actorIndividualities; // [xsp+10h] [xbp-A0h]
  ServantStatusBattleListViewItem_o *v63; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v64; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_int__o *v65; // [xsp+30h] [xbp-80h]
  System_Collections_ICollection_o *self; // [xsp+38h] [xbp-78h]
  DataVals_array *SetTypeDataValArray; // [xsp+48h] [xbp-68h]

  v11 = skillLvEnt;
  v12 = this;
  if ( (byte_48E5339 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_int____74581360, skillLvEnt);
    sub_1B00CCC(&Method_DataManager_GetMasterData_FunctionMaster___, v13);
    sub_1B00CCC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v14);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__Add__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals___ctor__, v21);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1B00CCC(&System_Collections_Generic_List_DataVals__TypeInfo, v23);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__0__, v25);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__1__, v26);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__2__, v27);
    this = (BattleLogicSkill_o *)sub_1B00CCC(&BattleLogicSkill___c__DisplayClass16_0_TypeInfo, v28);
    byte_48E5339 = 1;
  }
  if ( !copyFuncVals )
    goto LABEL_52;
  CopyTargetFunctionTypeArray = (System_Collections_ICollection_o *)DataVals__GetCopyTargetFunctionTypeArray(
                                                                      copyFuncVals,
                                                                      0LL);
  self = (System_Collections_ICollection_o *)DataVals__GetCopyTargetBuffTypeArray(copyFuncVals, 0LL);
  this = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetFuncIdArray(copyFuncVals, 0LL);
  data = v12->fields.data;
  if ( !data )
    goto LABEL_52;
  v30 = this;
  this = (BattleLogicSkill_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !v11 )
    goto LABEL_52;
  v31 = (BattleServantData_o *)this;
  SetTypeDataValArray = SkillLvEntity__GetSetTypeDataValArray(v11, 0LL);
  actorIndividualities = v31 ? BattleServantData__getConcatServantAndBuffIndividualityies(v31, 0LL, 0, 0, 0, 0LL) : 0LL;
  v63 = (ServantStatusBattleListViewItem_o *)functionIdArray;
  v65 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  v64 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_52;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_FunctionMaster___);
  funcId = v11->fields.funcId;
  if ( !funcId )
    goto LABEL_52;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  v34 = 0LL;
  while ( (__int64)v34 < (int)funcId->max_length )
  {
    v35 = sub_1B00F18(BattleLogicSkill___c__DisplayClass16_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v35, 0LL);
    v36 = v11->fields.funcId;
    if ( !v36 )
      goto LABEL_52;
    if ( v34 >= v36->max_length )
      goto LABEL_57;
    if ( !v35 )
      goto LABEL_52;
    *(_DWORD *)(v35 + 16) = v36->m_Items[v34 + 1];
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v30, 0LL)
      || (v39 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo),
          System_Func_int__bool____ctor(
            v39,
            (Il2CppObject *)v35,
            Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__0__,
            0LL),
          this = (BattleLogicSkill_o *)BasicHelper__Any_int__47506688(
                                         (System_Int32_array *)v30,
                                         (System_Func_T__bool__o *)v39,
                                         (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360),
          ((unsigned __int8)this & 1) == 0) )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      v40 = v35 + 24;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 24), 0, v37, v38);
      if ( !v33 )
        goto LABEL_52;
      this = (BattleLogicSkill_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     v33,
                                     (Il2CppObject **)(v35 + 24),
                                     *(_DWORD *)(v35 + 16),
                                     (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(_QWORD *)v40 )
          goto LABEL_52;
        this = (BattleLogicSkill_o *)FuncList__Check(135, *(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !*(_QWORD *)v40 )
            goto LABEL_52;
          this = (BattleLogicSkill_o *)FuncList__Check(109, *(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !*(_QWORD *)v40 )
              goto LABEL_52;
            this = (BattleLogicSkill_o *)FuncList__Check(54, *(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (BattleLogicSkill_o *)DataVals__IsCopyFunctionTargetPTOnly(copyFuncVals, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_29;
              if ( !*(_QWORD *)v40 )
                goto LABEL_52;
              this = (BattleLogicSkill_o *)Target__isFieldPlayer(*(_DWORD *)(*(_QWORD *)v40 + 28LL), 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
LABEL_29:
                this = (BattleLogicSkill_o *)BasicHelper__IsNullOrEmpty(self, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                  goto LABEL_33;
                if ( !*(_QWORD *)v40 )
                  goto LABEL_52;
                this = (BattleLogicSkill_o *)FuncList__isAddState(*(_DWORD *)(*(_QWORD *)v40 + 24LL), 0LL);
                if ( ((unsigned __int8)this & 1) == 0
                  || (v41 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo),
                      System_Func_int__bool____ctor(
                        v41,
                        (Il2CppObject *)v35,
                        Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__1__,
                        0LL),
                      this = (BattleLogicSkill_o *)BasicHelper__Any_int__47506688(
                                                     (System_Int32_array *)self,
                                                     (System_Func_T__bool__o *)v41,
                                                     (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360),
                      ((unsigned __int8)this & 1) != 0) )
                {
LABEL_33:
                  if ( !SetTypeDataValArray )
                    goto LABEL_52;
                  if ( v34 >= SetTypeDataValArray->max_length )
LABEL_57:
                    sub_1B00F30(this, skillLvEnt);
                  this = (BattleLogicSkill_o *)SetTypeDataValArray->m_Items[v34];
                  if ( !this )
                    goto LABEL_52;
                  NotSkillCopyTargetIndividualities = (BattleLogicSkill_o *)DataVals__GetNotSkillCopyTargetIndividualities(
                                                                              (DataVals_o *)this,
                                                                              0LL);
                  this = (BattleLogicSkill_o *)BattleLogicSkill__IsNotSkillCopyTargetIndividuality(
                                                 NotSkillCopyTargetIndividualities,
                                                 actorIndividualities,
                                                 (System_Int32_array *)NotSkillCopyTargetIndividualities,
                                                 v43);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( BasicHelper__IsNullOrEmpty(CopyTargetFunctionTypeArray, 0LL)
                      || (v44 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo),
                          System_Func_int__bool____ctor(
                            v44,
                            (Il2CppObject *)v35,
                            Method_BattleLogicSkill___c__DisplayClass16_0__SetSkillCopyFunction_b__2__,
                            0LL),
                          this = (BattleLogicSkill_o *)BasicHelper__Any_int__47506688(
                                                         (System_Int32_array *)CopyTargetFunctionTypeArray,
                                                         (System_Func_T__bool__o *)v44,
                                                         (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360),
                          ((unsigned __int8)this & 1) != 0) )
                    {
                      this = (BattleLogicSkill_o *)v65;
                      if ( !v65 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*(unsigned int *)(v35 + 16);
                      items = v65->fields._items;
                      v46 = Method_System_Collections_Generic_List_int__Add__;
                      ++v65->fields._version;
                      if ( !items )
                        goto LABEL_52;
                      size = v65->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v65,
                          (int32_t)skillLvEnt,
                          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v65->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)skillLvEnt;
                      }
                      this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v11, 0LL);
                      if ( !this )
                        goto LABEL_52;
                      if ( v34 >= LODWORD(this->fields.logic) )
                        goto LABEL_57;
                      if ( !v64 )
                        goto LABEL_52;
                      skillLvEnt = (SkillLvEntity_o *)*((_QWORD *)&this->fields.logictarget + v34);
                      v50 = v64->fields._items;
                      v51 = Method_System_Collections_Generic_List_DataVals__Add__;
                      ++v64->fields._version;
                      if ( !v50 )
                        goto LABEL_52;
                      v52 = v64->fields._size;
                      if ( (unsigned int)v52 >= v50->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v64,
                          (Il2CppObject *)skillLvEnt,
                          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v53 = &v50->obj.klass + v52;
                        v64->fields._size = v52 + 1;
                        v53[4] = (Il2CppClass *)skillLvEnt;
                        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)skillLvEnt, v48, v49);
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
    funcId = v11->fields.funcId;
    ++v34;
    if ( !funcId )
      goto LABEL_52;
  }
  this = (BattleLogicSkill_o *)v65;
  if ( !v65
    || (v54 = System_Collections_Generic_List_int___ToArray(
                v65,
                (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__),
        v63->klass = (ServantStatusBattleListViewItem_c *)v54,
        sub_1B00C70(v63, (int32_t)v54, v55, v56),
        (this = (BattleLogicSkill_o *)v64) == 0LL)
    || (v57 = System_Collections_Generic_List_object___ToArray(
                v64,
                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_DataVals__ToArray__),
        *dataValsArray = (DataVals_array *)v57,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)dataValsArray, (int32_t)v57, v58, v59),
        !v63->klass) )
  {
LABEL_52:
    sub_1B00F28(this, skillLvEnt);
  }
  return LODWORD(v63->klass->_1.namespaze) != 0;
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
  int32_t svtUniqueId; // w26
  int32_t v22; // w0
  int32_t skilllv; // w27
  int32_t v24; // w29
  BattleActionData_o *v25; // x24
  bool v26; // w20
  BattleServantData_o *ServantData; // x25
  bool v28; // w22
  Il2CppObject *Entity; // x0
  SkillEntity_o *v30; // x28
  SkillLvEntity_o *v31; // x27
  System_Int32_array *Individualities; // x29
  System_Int32_array *ActIndividuality; // x0
  ServantEntity_o *svtdata; // x29
  int32_t Rarity; // w0
  __int64 v36; // x26
  __int64 v37; // x29
  int32_t v38; // w0
  bool v39; // w28
  int32_t Timing_k__BackingField; // w21
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  int32_t type; // w8
  BattleLogicFunction_o *logicfunction; // x22
  System_Int32_array *funcId; // x23
  struct BattleBuffData_o *buffData; // x8
  struct System_Collections_Generic_List_int__o *unfixedBuffList; // x8
  int v47; // w9
  BattleData_o *data; // x20
  System_Action_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct BattleLogicSkill___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  BattleLogicSkill_SkillExecArgs_o *v54; // [xsp+38h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v10 = this;
  if ( (byte_48E5333 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleServantData__TypeInfo, skillInfo);
    sub_1B00CCC(&BattleActionData_TypeInfo, v11);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillMaster___, v13);
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B00CCC(&BattleLogicFunction_FunctionArgument_TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Clear__, v16);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B00CCC(&Method_BattleLogicSkill___c__actPassiveSkill_b__10_0__, v19);
    this = (BattleLogicSkill_o *)sub_1B00CCC(&BattleLogicSkill___c_TypeInfo, v20);
    byte_48E5333 = 1;
  }
  v54 = skillExecArgs;
  if ( !skillInfo )
    goto LABEL_43;
  svtUniqueId = skillInfo->fields.svtUniqueId;
  v22 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, bool, BattleLogicSkill_SkillExecArgs_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
          isShift,
          isDeckDataLoad,
          skillExecArgs,
          method);
  skilllv = skillInfo->fields.skilllv;
  v24 = v22;
  v25 = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  this = (BattleLogicSkill_o *)v10->fields.data;
  if ( !this )
    goto LABEL_43;
  v26 = isDeckDataLoad;
  ServantData = BattleData__getServantData((BattleData_o *)this, svtUniqueId, 0LL);
  this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  v28 = isShift;
  this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !this )
    goto LABEL_43;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v24,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v30 = (SkillEntity_o *)Entity;
    if ( !SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
    {
      this = (BattleLogicSkill_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleLogicSkill_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( this )
        {
          this = (BattleLogicSkill_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v24, skilllv, 0LL);
          v31 = (SkillLvEntity_o *)this;
          if ( skillInfo->fields.type == 12 )
          {
            if ( !ServantData )
              goto LABEL_43;
            Individualities = BattleServantData__getIndividualities(ServantData, 0LL, 0LL);
            ActIndividuality = SkillEntity__getActIndividuality(v30, 0LL);
            if ( !Individuality__CheckIndividualities(Individualities, ActIndividuality, 0LL) )
              return;
            svtdata = ServantData->fields.svtdata;
            Rarity = BattleServantData__getRarity(ServantData, 0LL);
            this = (BattleLogicSkill_o *)RarityRestrictedSkillUtil__IsDisabled(v31, svtdata, Rarity, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              return;
          }
          if ( v25 )
          {
            v25->fields.actorId = svtUniqueId;
            if ( ServantData )
            {
              v37 = *(_QWORD *)&ServantData->fields.svtId.fields.currentCryptoKey;
              v36 = *(_QWORD *)&ServantData->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v55.fields.currentCryptoKey = v37;
              *(_QWORD *)&v55.fields.fakeValue = v36;
              v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v55, 0LL);
              v25->fields.motionId = SkillEntity__GetMotionId(v30, v38, 0LL);
              v39 = v28;
              v25->fields.userCommandCodeId = skillInfo->fields.userCommandCodeId;
              v25->fields.commandAssistId = skillInfo->fields.commandAssistId;
              v25->fields.cardIndex = skillInfo->fields.index;
              if ( v54 )
              {
                if ( !v54->fields._AllowUpdateFieldServantResultStatus_k__BackingField )
                  goto LABEL_24;
              }
              this = (BattleLogicSkill_o *)v10->fields.logic;
              if ( !this )
                goto LABEL_43;
              BattleLogic__updateResultServant((BattleLogic_o *)this, 0LL);
              if ( v54 )
LABEL_24:
                Timing_k__BackingField = v54->fields._Timing_k__BackingField;
              else
                Timing_k__BackingField = 0;
              argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B00F18(BattleLogicFunction_FunctionArgument_TypeInfo);
              BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
              if ( argument )
              {
                type = skillInfo->fields.type;
                argument->fields.isDeckDataLoad = v26;
                argument->fields._SkillTiming_k__BackingField = Timing_k__BackingField;
                argument->fields.grantSkillType = type;
                if ( v31 )
                {
                  logicfunction = v10->fields.logicfunction;
                  funcId = v31->fields.funcId;
                  this = (BattleLogicSkill_o *)SkillLvEntity__getDataValsList(v31, 0LL);
                  if ( logicfunction )
                  {
                    this = (BattleLogicSkill_o *)BattleLogicFunction__procList(
                                                   logicfunction,
                                                   v25,
                                                   funcId,
                                                   (DataVals_array *)this,
                                                   1,
                                                   1,
                                                   0,
                                                   v39,
                                                   0,
                                                   1,
                                                   1,
                                                   argument,
                                                   v31->fields.skillId,
                                                   0LL);
                    if ( !v54 || v54->fields._RemoveActorUnfixedBuff_k__BackingField )
                    {
                      buffData = ServantData->fields.buffData;
                      if ( !buffData )
                        goto LABEL_43;
                      unfixedBuffList = buffData->fields.unfixedBuffList;
                      if ( !unfixedBuffList )
                        goto LABEL_43;
                      v47 = unfixedBuffList->fields._version + 1;
                      unfixedBuffList->fields._size = 0;
                      unfixedBuffList->fields._version = v47;
                    }
                    data = v10->fields.data;
                    this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                    if ( !BattleLogicSkill___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleLogicSkill___c_TypeInfo);
                      this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                    }
                    monitor = (System_Action_object__o *)this[3].fields.logicfunction->monitor;
                    if ( !monitor )
                    {
                      if ( !LODWORD(this[4].fields.logictarget) )
                      {
                        j_il2cpp_runtime_class_init_0(this);
                        this = (BattleLogicSkill_o *)BattleLogicSkill___c_TypeInfo;
                      }
                      klass = (Il2CppObject *)this[3].fields.logicfunction->klass;
                      monitor = (System_Action_object__o *)sub_1B00F18(System_Action_BattleServantData__TypeInfo);
                      System_Action_object____ctor(
                        monitor,
                        klass,
                        Method_BattleLogicSkill___c__actPassiveSkill_b__10_0__,
                        0LL);
                      static_fields = BattleLogicSkill___c_TypeInfo->static_fields;
                      static_fields->__9__10_0 = (struct System_Action_BattleServantData__o *)monitor;
                      sub_1B00C70(
                        (ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0,
                        (int32_t)monitor,
                        v52,
                        v53);
                    }
                    if ( data )
                    {
                      BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)monitor, 0LL);
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
LABEL_43:
      sub_1B00F28(this, skillInfo);
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
  __int64 v32; // x26
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 Instance; // x0
  __int64 v36; // x1
  SkillLvMaster_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  System_Collections_Generic_Dictionary_object__object__o *v41; // x0
  __int64 v42; // x25
  __int64 v43; // x24
  __int64 v44; // x23
  __int64 v45; // x22
  BattleServantData_o *v46; // x21
  struct BattleData_o *data; // x8
  struct BattleData_o *v48; // x8
  unsigned int NowHp; // w0
  unsigned int v50; // w0
  int32_t v51; // w20
  int32_t v52; // w20
  __int64 *v54; // x8
  System_String_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3

  if ( (byte_48E5335 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Count__, v7);
    sub_1B00CCC(&System_Func_string__int__bool__TypeInfo, v8);
    sub_1B00CCC(&System_Func_string__double__bool__TypeInfo, v9);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__0__, v12);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__1__, v13);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__2__, v14);
    sub_1B00CCC(&Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__3__, v15);
    sub_1B00CCC(&BattleLogicSkill___c__DisplayClass12_0_TypeInfo, v16);
    sub_1B00CCC(&StringLiteral_2961/*"BATTLE_SKILLERROR_NP_LOWER"*/, v17);
    sub_1B00CCC(&StringLiteral_2959/*"BATTLE_SKILLERROR_HP_LOWER"*/, v18);
    sub_1B00CCC(&StringLiteral_12065/*"STAR_HIGHER"*/, v19);
    sub_1B00CCC(&StringLiteral_7082/*"HP_PER_LOWER"*/, v20);
    sub_1B00CCC(&StringLiteral_2960/*"BATTLE_SKILLERROR_NP_HIGHER"*/, v21);
    sub_1B00CCC(&StringLiteral_2958/*"BATTLE_SKILLERROR_HP_HIGHER"*/, v22);
    sub_1B00CCC(&StringLiteral_7081/*"HP_PER_HIGHER"*/, v23);
    sub_1B00CCC(&StringLiteral_2962/*"BATTLE_SKILLERROR_STAR_HIGHER"*/, v24);
    sub_1B00CCC(&StringLiteral_9223/*"NP_HIGHER"*/, v25);
    sub_1B00CCC(&StringLiteral_2963/*"BATTLE_SKILLERROR_STAR_LOWER"*/, v26);
    sub_1B00CCC(&StringLiteral_7083/*"HP_VAL_HIGHER"*/, v27);
    sub_1B00CCC(&StringLiteral_12066/*"STAR_LOWER"*/, v28);
    sub_1B00CCC(&StringLiteral_1/*""*/, v29);
    sub_1B00CCC(&StringLiteral_9224/*"NP_LOWER"*/, v30);
    sub_1B00CCC(&StringLiteral_7084/*"HP_VAL_LOWER"*/, v31);
    byte_48E5335 = 1;
  }
  v32 = sub_1B00F18(BattleLogicSkill___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  *text = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)text, (int32_t)StringLiteral_1/*""*/, v33, v34);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_47;
  v37 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v37 )
    goto LABEL_47;
  Instance = (__int64)SkillLvMaster__GetEntity(v37, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance || !v32 )
    goto LABEL_47;
  v40 = *(_QWORD *)(Instance + 56);
  *(_QWORD *)(v32 + 16) = v40;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v32 + 16), v40, v38, v39);
  v41 = *(System_Collections_Generic_Dictionary_object__object__o **)(v32 + 16);
  if ( !v41 )
    return 1;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         v41,
         (const MethodInfo_308D718 *)Method_System_Collections_Generic_Dictionary_string__object__get_Count__) < 1 )
    return 1;
  v42 = sub_1B00F18(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v42,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__0__,
    0LL);
  v43 = sub_1B00F18(System_Func_string__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v43,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__1__,
    0LL);
  v44 = sub_1B00F18(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v44,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__2__,
    0LL);
  v45 = sub_1B00F18(System_Func_string__double__bool__TypeInfo);
  System_Func_object__double__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v45,
    (Il2CppObject *)v32,
    Method_BattleLogicSkill___c__DisplayClass12_0__checkConditions_b__3__,
    0LL);
  if ( !BattleSkillInfoData__isServantSkill(skillInfo, 0LL) )
    return 1;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_47;
  Instance = (__int64)BattleData__getServantData((BattleData_o *)Instance, skillInfo->fields.svtUniqueId, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v46 = (BattleServantData_o *)Instance;
  Instance = BattleServantData__getNPVal((BattleServantData_o *)Instance, 0LL);
  if ( !v42 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_9223/*"NP_HIGHER"*/,
          (unsigned int)Instance,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2960/*"BATTLE_SKILLERROR_NP_HIGHER"*/;
    goto LABEL_46;
  }
  Instance = BattleServantData__getNPVal(v46, 0LL);
  if ( !v43 )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
               *(_QWORD *)(v43 + 64),
               StringLiteral_9224/*"NP_LOWER"*/,
               (unsigned int)Instance,
               *(_QWORD *)(v43 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2961/*"BATTLE_SKILLERROR_NP_LOWER"*/;
    goto LABEL_46;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_47;
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
               *(_QWORD *)(v42 + 64),
               StringLiteral_12065/*"STAR_HIGHER"*/,
               (unsigned int)data->fields.totalCriticalStars,
               *(_QWORD *)(v42 + 40));
  if ( (Instance & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2962/*"BATTLE_SKILLERROR_STAR_HIGHER"*/;
    goto LABEL_46;
  }
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_47;
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_12066/*"STAR_LOWER"*/,
          (unsigned int)v48->fields.totalCriticalStars,
          *(_QWORD *)(v43 + 40)) & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2963/*"BATTLE_SKILLERROR_STAR_LOWER"*/;
    goto LABEL_46;
  }
  NowHp = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v42 + 24))(
          *(_QWORD *)(v42 + 64),
          StringLiteral_7083/*"HP_VAL_HIGHER"*/,
          NowHp,
          *(_QWORD *)(v42 + 40)) & 1) == 0 )
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v54 = &StringLiteral_2958/*"BATTLE_SKILLERROR_HP_HIGHER"*/;
    goto LABEL_46;
  }
  v50 = BattleServantData__getNowHp(v46, 0LL);
  if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v43 + 24))(
          *(_QWORD *)(v43 + 64),
          StringLiteral_7084/*"HP_VAL_LOWER"*/,
          v50,
          *(_QWORD *)(v43 + 40)) & 1) != 0 )
  {
    v51 = BattleServantData__getNowHp(v46, 0LL);
    Instance = BattleServantData__getMaxHp(v46, 0LL);
    if ( !v44 )
      goto LABEL_47;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v44 + 24))(
            *(_QWORD *)(v44 + 64),
            StringLiteral_7081/*"HP_PER_HIGHER"*/,
            *(_QWORD *)(v44 + 40),
            (double)v51 * 1000.0 / (double)(int)Instance) & 1) != 0 )
    {
      v52 = BattleServantData__getNowHp(v46, 0LL);
      Instance = BattleServantData__getMaxHp(v46, 0LL);
      if ( v45 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, double))(v45 + 24))(
                *(_QWORD *)(v45 + 64),
                StringLiteral_7082/*"HP_PER_LOWER"*/,
                *(_QWORD *)(v45 + 40),
                (double)v52 * 1000.0 / (double)(int)Instance) & 1) != 0 )
          return 1;
        goto LABEL_43;
      }
LABEL_47:
      sub_1B00F28(Instance, v36);
    }
    goto LABEL_40;
  }
LABEL_43:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = &StringLiteral_2959/*"BATTLE_SKILLERROR_HP_LOWER"*/;
LABEL_46:
  v55 = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  *text = v55;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)text, (int32_t)v55, v56, v57);
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
  struct BattleSkillInfoData_o *skillInfo; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  DataManager_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  BattleActionData_c *v25; // x0
  struct System_Int32_array *ptTarget; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_int__o *v29; // x24
  System_Collections_Generic_List_object__o *v30; // x25
  const MethodInfo *v31; // x5
  BattleLogicFunction_o *logicfunction; // x26
  System_Int32_array *v33; // x24
  System_Object_array *v34; // x25
  BattleActionData_o *v35; // x22
  struct BattleData_o *data; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x23
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v39; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x19
  float CutinAdditionalTime; // s0

  if ( (byte_48E5334 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, task);
    sub_1B00CCC(&BattleActionLogManagerInterface_TypeInfo, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6);
    sub_1B00CCC(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__AddRange__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals__ToArray__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_DataVals___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_List_DataVals__TypeInfo, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_48E5334 = 1;
  }
  v17 = sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v17, 0LL);
  if ( !task )
    goto LABEL_29;
  skillInfo = task->fields.skillInfo;
  skillId = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_29;
  skillId = (DataManager_o *)DataManager__GetMasterData_object_(
                               skillId,
                               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !skillInfo )
    goto LABEL_29;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v21 )
    goto LABEL_29;
  skillId = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                               v21,
                               (int32_t)skillId,
                               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !v17 )
    goto LABEL_29;
  v22 = skillId;
  BattleActionData__setStateField((BattleActionData_o *)v17, 0LL);
  *(_DWORD *)(v17 + 32) = -1;
  if ( !v22 )
    goto LABEL_29;
  *(_DWORD *)(v17 + 48) = HIDWORD(v22->fields.m_CancellationTokenSource);
  v25 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v25 = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(v17 + 56) = v25->static_fields->TYPE_COMMAND_SPELL;
  ptTarget = task->fields.ptTarget;
  *(_QWORD *)(v17 + 40) = ptTarget;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)ptTarget, v23, v24);
  *(_QWORD *)(v17 + 144) = skillInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 144), (int32_t)skillInfo, v27, v28);
  skillId = (DataManager_o *)this->fields.logic;
  if ( !skillId )
    goto LABEL_29;
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_DataVals__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_DataVals___ctor__);
  if ( !v29 )
    goto LABEL_29;
  System_Collections_Generic_List_int___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v22->fields.lookup,
    (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  skillId = (DataManager_o *)CommandSpellEntity__getDataValsList((CommandSpellEntity_o *)v22, 0LL);
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)skillId,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_DataVals__AddRange__);
  BattleLogicSkill__SetCommandSpellAddFunctionData(
    this,
    v22->fields.m_CachedPtr,
    task->fields.ptTarget,
    v29,
    (System_Collections_Generic_List_DataVals__o *)v30,
    v31);
  logicfunction = this->fields.logicfunction;
  v33 = System_Collections_Generic_List_int___ToArray(
          v29,
          (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
  v34 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_DataVals__ToArray__);
  skillId = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !logicfunction )
    goto LABEL_29;
  skillId = (DataManager_o *)BattleLogicFunction__procList(
                               logicfunction,
                               (BattleActionData_o *)v17,
                               v33,
                               (DataVals_array *)v34,
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
    goto LABEL_29;
  v35 = (BattleActionData_o *)skillId;
  BattleLogic__updateConditionsBuffAll(this->fields.logic, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  actionLogManager = data->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_29;
  klass = actionLogManager->klass;
  v39 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v39;
      p_offset += 2;
      if ( !v39 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_22:
    p_method = sub_1B52CAC(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 6LL);
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
        return v35;
      }
    }
LABEL_29:
    sub_1B00F28(skillId, v19);
  }
  return v35;
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
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicSkill__createSkillData_42228276(this, task, 0, 0LL, &baseActionData, v3);
  if ( !logic )
    sub_1B00F28(v5, v6);
  return BattleLogic__PrevReturnCreateActionData(logic, v5, baseActionData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicSkill__createSkillData_42228276(
        BattleLogicSkill_o *this,
        BattleLogicTask_o *task,
        bool fromSkillCopyFunc,
        DataVals_o *baseVals,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  BattleLogicTask_o *v9; // x19
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
  __int64 skillId; // x0
  BattleActionData_o *v27; // x22
  BattleActionData_o *v28; // x25
  int32_t v29; // w2
  int32_t v30; // w3
  BattleBoostItemInfoData_o *skillInfo; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x21
  SkillEntity_o *Entity; // x21
  Il2CppObject *MasterData_object; // x24
  SkillLvEntity_o *v35; // x24
  BattleActionData_c *v36; // x8
  struct BattleActionData_StaticFields *static_fields; // x9
  __int64 methodPtr_low; // x10
  struct System_Int32_array *actorIdlist; // x8
  __int64 v40; // x28
  char v41; // w28
  struct System_Int32_array *v42; // x8
  int v43; // w8
  BattleData_o *data; // x29
  BattleServantData_o *EnemyServantData; // x0
  __int64 v46; // x27
  __int64 v47; // x29
  struct System_Int32_array *v48; // x8
  const MethodInfo *v49; // x1
  struct System_Int32_array *ptTarget; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *Name; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_array *v60; // x28
  System_Object_array *v61; // x29
  System_Int32_array *GimmickAnimTypeArray; // x0
  struct System_String_o *motionMessage; // x1
  ServantStatusBattleListViewItem_o *p_motionMessage; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Int32_array *effectList; // x1
  int v68; // w8
  DataVals_array *v69; // x26
  int v70; // w9
  __int64 v71; // x11
  BattleLogicFunction_o *v72; // x28
  System_Int32_array *funcId; // x27
  int32_t changeTDCommandType; // w8
  const MethodInfo *v75; // x6
  bool v76; // w23
  struct System_Int32_array *v77; // x8
  int32_t v78; // w5
  struct BattleData_o *v79; // x8
  bool v80; // w8
  BattleLogicFunction_FunctionArgument_o *argument; // x26
  BattleLogicFunction_SkillSideEffectFunctionArgument_o *overwriteFuncSideEffectArg; // x27
  BattleLogicFunction_o *logicfunction; // x29
  System_Int32_array *v84; // x27
  DataVals_array *v85; // x28
  int32_t v86; // w0
  UnityEngine_Object_o *v87; // x27
  int32_t v88; // w26
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  struct BattleData_o *v93; // x8
  struct BattleActionLogManagerInterface_o *actionLogManager; // x25
  BattleActionLogManagerInterface_c *klass; // x8
  __int64 v96; // x9
  BattleActionLogManagerInterface_c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x1
  int32_t v102; // w1
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 *v105; // x26
  int32_t v106; // w2
  int32_t v107; // w3
  __int64 v108; // x1
  int32_t v109; // w1
  int32_t v110; // w2
  int32_t v111; // w3
  int32_t type; // w23
  struct System_Int32_array *v113; // x8
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v115; // x4
  _BOOL4 v116; // w8
  struct System_Int32_array *v118; // x8
  BattleServantData_o *v119; // x0
  BattleServantData_o *v120; // x25
  BattleData_o *v121; // x26
  int32_t uniqueId; // w27
  struct BattleLogic_o *v123; // x26
  BattleLogicTask_array *v124; // x0
  BattleLogicTask_o *v125; // x23
  BattleData_o *v126; // x23
  BattleLogicTask_o *v127; // x22
  const MethodInfo *v128; // x1
  int32_t v129; // w2
  int32_t v130; // w3
  struct BattleLogic_o *v131; // x8
  BattlePerformance_o *perf; // x22
  float CutinAdditionalTime; // s0
  struct BattleData_o *v134; // x8
  struct BattlePerformance_o *v135; // x8
  int32_t v136; // w2
  int32_t v137; // w3
  BattleLogicTask_o *v138; // x21
  const MethodInfo *v139; // x1
  SkillLvMaster_o *skillLvMst; // [xsp+30h] [xbp-80h]
  DataVals_o *copyFuncVals; // [xsp+38h] [xbp-78h]
  DataVals_array *dataValsArray; // [xsp+40h] [xbp-70h] BYREF
  System_Int32_array *functionIdArray; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  v9 = task;
  if ( (byte_48E5331 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_IndexValue_int___, task);
    sub_1B00CCC(&BattleActionData_TypeInfo, v11);
    sub_1B00CCC(&BattleActionLogManagerInterface_TypeInfo, v12);
    sub_1B00CCC(&BattleBoostItemInfoData_TypeInfo, v13);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v14);
    sub_1B00CCC(&CheckUpdateShiftTask_TypeInfo, v15);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillMaster___, v17);
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v18);
    sub_1B00CCC(&BattleLogicFunction_FunctionArgument_TypeInfo, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v21);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B00CCC(&BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo, v24);
    sub_1B00CCC(&StringLiteral_1/*""*/, v25);
    byte_48E5331 = 1;
  }
  dataValsArray = 0LL;
  functionIdArray = 0LL;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_174;
  BattleData__ResetWasAttackTargetId((BattleData_o *)skillId, 0LL);
  v27 = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_174;
  copyFuncVals = baseVals;
  v28 = BattleActionData__AddDisplayTriggerIntervalBuff(v27, v9, 0LL);
  *baseActionData = v28;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v28, v29, v30);
  if ( !v9 )
    goto LABEL_174;
  if ( !v28 )
    goto LABEL_174;
  v28->fields.taskActorType = v9->fields.actortype;
  skillInfo = (BattleBoostItemInfoData_o *)v9->fields.skillInfo;
  skillId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_174;
  skillId = (__int64)DataManager__GetMasterData_object_(
                       (DataManager_o *)skillId,
                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillInfo )
    goto LABEL_174;
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v32 )
    goto LABEL_174;
  Entity = (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              v32,
                              skillId,
                              (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  skillId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillId )
    goto LABEL_174;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)skillId,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_174;
  skillLvMst = (SkillLvMaster_o *)MasterData_object;
  skillId = (__int64)SkillLvMaster__GetEntity(
                       (SkillLvMaster_o *)MasterData_object,
                       skillId,
                       skillInfo->fields.skilllv,
                       0LL);
  v35 = (SkillLvEntity_o *)skillId;
  v28->fields.isCounter = v9->fields.isCounter;
  v36 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v36 = BattleActionData_TypeInfo;
  }
  static_fields = v36->static_fields;
  v28->fields.type = static_fields->TYPE_SKILL;
  if ( skillInfo->fields.type == 21 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleActionData_TypeInfo->static_fields;
    }
    v28->fields.type = static_fields->TYPE_BOOSTSKILL;
    v28->fields.imageId = skillInfo->fields.itemImageId;
    methodPtr_low = LOBYTE(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(skillInfo->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (BattleBoostItemInfoData_c *)skillInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleBoostItemInfoData_TypeInfo )
    {
      skillId = BattleBoostItemInfoData__checkEffectTiming(skillInfo, 1, 0LL);
      if ( (skillId & 1) != 0 )
        v28->fields.noOperation = 1;
    }
  }
  if ( v9->fields.checkAlive )
  {
    actorIdlist = v9->fields.actorIdlist;
    skillId = (__int64)this->fields.data;
    if ( actorIdlist )
    {
      if ( !actorIdlist->max_length )
        goto LABEL_175;
      task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[1];
      if ( !skillId )
        goto LABEL_174;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !skillId )
        goto LABEL_174;
    }
    skillId = (__int64)BattleData__getServantData((BattleData_o *)skillId, (int32_t)task, 0LL);
    if ( skillId )
    {
      skillId = BattleServantData__isAlive((BattleServantData_o *)skillId, 0, 0LL);
      v40 = 0LL;
      if ( (skillId & 1) == 0 )
        return (BattleActionData_o *)v40;
    }
  }
  if ( v9->fields.isForcedSpeedOne )
  {
    v41 = 1;
  }
  else
  {
    if ( !Entity )
      goto LABEL_174;
    skillId = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
    if ( (skillId & 1) == 0 )
      goto LABEL_36;
    skillId = (__int64)this->fields.data;
    if ( !skillId )
      goto LABEL_174;
    skillId = BattleData__checkEnablePlaySpeedOneFromSkillIdList((BattleData_o *)skillId, Entity->fields.id, 0LL);
    if ( (skillId & 1) != 0 )
    {
      skillId = SkillEntity__isForcedSkillSpeedOne(Entity, 0LL);
      v41 = skillId;
    }
    else
    {
LABEL_36:
      v41 = 0;
    }
  }
  v42 = v9->fields.actorIdlist;
  if ( v42 )
  {
    if ( !v42->max_length )
      goto LABEL_175;
    v43 = v42->m_Items[1];
  }
  else
  {
    v43 = -1;
  }
  v28->fields.actorId = v43;
  if ( !v35 )
    goto LABEL_174;
  data = this->fields.data;
  skillId = SkillLvEntity__GetActNpcServantId(v35, 0LL);
  if ( !data )
    goto LABEL_174;
  EnemyServantData = BattleData__getEnemyServantData(data, skillId, 0LL);
  if ( EnemyServantData && (EnemyServantData->fields.uniqueId & 0x80000000) == 0 )
  {
    v46 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.currentCryptoKey;
    v47 = *(_QWORD *)&EnemyServantData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v144.fields.currentCryptoKey = v46;
    *(_QWORD *)&v144.fields.fakeValue = v47;
    v28->fields.actorId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v144, 0LL);
  }
  v48 = v9->fields.actorIdlist;
  skillId = (__int64)this->fields.data;
  if ( v48 )
  {
    if ( !v48->max_length )
      goto LABEL_175;
    task = (BattleLogicTask_o *)(unsigned int)v48->m_Items[1];
    if ( !skillId )
      goto LABEL_174;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !skillId )
      goto LABEL_174;
  }
  skillId = BattleData__getServantId((BattleData_o *)skillId, (int32_t)task, 0LL);
  if ( !Entity )
    goto LABEL_174;
  v28->fields.motionId = SkillEntity__GetMotionId(Entity, skillId, 0LL);
  v28->fields.targetId = BattleLogicTask__getTarget(v9, v49);
  ptTarget = v9->fields.ptTarget;
  v28->fields.pttargetIds = ptTarget;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->fields.pttargetIds, (int32_t)ptTarget, v51, v52);
  Name = SkillEntity__getName(Entity, 0LL);
  v28->fields.skillMessage = Name;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->fields.skillMessage, (int32_t)Name, v54, v55);
  v28->fields.skillInfo = (struct BattleSkillInfoData_o *)skillInfo;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->fields.skillInfo, (int32_t)skillInfo, v56, v57);
  v28->fields.isForcedSpeedOne = v41 & 1;
  v28->fields.checkRevengeId = v9->fields.checkRevengeId;
  if ( v9->fields.gimmickIndexArray )
  {
    skillId = (__int64)this->fields.data;
    if ( !skillId )
      goto LABEL_174;
    skillId = (__int64)BattleData__GetGimmickStartVoiceArray((BattleData_o *)skillId, 0LL);
    if ( !this->fields.data )
      goto LABEL_174;
    v60 = (System_String_array *)skillId;
    skillId = (__int64)BattleData__GetGimmickResultVoiceArray(this->fields.data, 0LL);
    if ( !this->fields.data )
      goto LABEL_174;
    v61 = (System_Object_array *)skillId;
    GimmickAnimTypeArray = BattleData__GetGimmickAnimTypeArray(this->fields.data, 0LL);
    BattleActionData__SetGimmickData(v28, v9->fields.gimmickIndexArray, v60, v61, GimmickAnimTypeArray, 0LL);
  }
  motionMessage = v9->fields.motionMessage;
  if ( motionMessage && motionMessage->fields._stringLength >= 1 )
  {
    v28->fields.motionMessage = motionMessage;
    p_motionMessage = (ServantStatusBattleListViewItem_o *)&v28->fields.motionMessage;
  }
  else
  {
    v28->fields.motionMessage = 0LL;
    p_motionMessage = (ServantStatusBattleListViewItem_o *)&v28->fields.motionMessage;
    LODWORD(motionMessage) = 0;
  }
  sub_1B00C70(p_motionMessage, (int32_t)motionMessage, v58, v59);
  if ( (v9->fields.actortype | 4) == 5 )
    BattleActionData__setStateField(v28, 0LL);
  effectList = Entity->fields.effectList;
  v28->fields.effectlist = effectList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->fields.effectlist, (int32_t)effectList, v65, v66);
  skillId = (__int64)this->fields.logic;
  if ( !skillId )
LABEL_174:
    sub_1B00F28(skillId, task);
  BattleLogic__updateResultServant((BattleLogic_o *)skillId, 0LL);
  if ( skillInfo->fields.type != 21 )
  {
    changeTDCommandType = skillInfo->fields.changeTDCommandType;
    if ( (changeTDCommandType & 0x80000000) == 0 )
      v28->fields.commandType = changeTDCommandType;
    functionIdArray = v35->fields.funcId;
    skillId = (__int64)SkillLvEntity__getDataValsList(v35, 0LL);
    dataValsArray = (DataVals_array *)skillId;
    v76 = copyFuncVals == 0LL || !fromSkillCopyFunc;
    if ( copyFuncVals != 0LL && fromSkillCopyFunc )
    {
      v77 = v9->fields.actorIdlist;
      if ( v77 )
      {
        if ( !v77->max_length )
          goto LABEL_175;
        v78 = v77->m_Items[1];
      }
      else
      {
        v78 = -1;
      }
      if ( !BattleLogicSkill__SetSkillCopyFunction(this, v35, copyFuncVals, &functionIdArray, &dataValsArray, v78, v75) )
        return 0LL;
      skillId = (__int64)this->fields.data;
      if ( !skillId )
        goto LABEL_174;
      skillId = BattleData__isEnemyID((BattleData_o *)skillId, v28->fields.actorId, 0LL);
      if ( (skillId & 1) != 0 )
      {
        v79 = this->fields.data;
        if ( !v79 )
          goto LABEL_174;
        v80 = v79->fields.currentTurn == 0;
      }
      else
      {
        v80 = 0;
      }
      v28->fields.isReversalShortBuffTurn = v80;
    }
    if ( skillInfo->fields.type == 1 )
    {
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B00F18(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
      if ( !argument )
        goto LABEL_174;
      argument->fields.grantSkillType = skillInfo->fields.type;
      if ( !v9->fields.isSideEffectTriggerSkill )
        goto LABEL_100;
    }
    else
    {
      if ( !v9->fields.isSideEffectTriggerSkill )
      {
        argument = 0LL;
LABEL_100:
        logicfunction = this->fields.logicfunction;
        v85 = dataValsArray;
        v84 = functionIdArray;
        skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                    skillInfo,
                    skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( !logicfunction )
          goto LABEL_174;
        skillId = (__int64)BattleLogicFunction__procList(
                             logicfunction,
                             v28,
                             v84,
                             v85,
                             0,
                             1,
                             0,
                             0,
                             0,
                             v76,
                             1,
                             argument,
                             skillId,
                             0LL);
        goto LABEL_102;
      }
      argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B00F18(BattleLogicFunction_FunctionArgument_TypeInfo);
      BattleLogicFunction_FunctionArgument___ctor(argument, 0LL);
    }
    overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)v9->fields.overwriteFuncSideEffectArg;
    if ( !overwriteFuncSideEffectArg )
    {
      overwriteFuncSideEffectArg = (BattleLogicFunction_SkillSideEffectFunctionArgument_o *)sub_1B00F18(BattleLogicFunction_SkillSideEffectFunctionArgument_TypeInfo);
      BattleLogicFunction_SkillSideEffectFunctionArgument___ctor(overwriteFuncSideEffectArg, 0LL);
    }
    if ( !argument )
      goto LABEL_174;
    BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
      argument,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)overwriteFuncSideEffectArg,
      0LL);
    goto LABEL_100;
  }
  skillId = (__int64)SkillLvEntity__getDataValsList(v35, 0LL);
  if ( !skillId )
    goto LABEL_174;
  v68 = *(_DWORD *)(skillId + 24);
  v69 = (DataVals_array *)skillId;
  if ( v68 >= 1 )
  {
    v70 = 0;
    while ( v68 != v70 )
    {
      v71 = *(_QWORD *)(skillId + 8LL * v70 + 32);
      if ( !v71 )
        goto LABEL_174;
      ++v70;
      *(_BYTE *)(v71 + 72) = 1;
      if ( v68 == v70 )
        goto LABEL_73;
    }
LABEL_175:
    sub_1B00F30(skillId, task);
  }
LABEL_73:
  v72 = this->fields.logicfunction;
  funcId = v35->fields.funcId;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v72 )
    goto LABEL_174;
  skillId = (__int64)BattleLogicFunction__procList(v72, v28, funcId, v69, 1, 1, 0, 0, 0, 1, 1, 0LL, skillId, 0LL);
LABEL_102:
  v40 = skillId;
  if ( v9->fields.actortype == 5 )
  {
    if ( !skillId )
      goto LABEL_174;
    v86 = BasicHelper__IndexValue_int__47520064(
            *(System_Collections_Generic_List_T__o **)(skillId + 288),
            0,
            0,
            (const MethodInfo_2D51940 *)Method_BasicHelper_IndexValue_int___);
    v87 = *(UnityEngine_Object_o **)(v40 + 72);
    v88 = v86;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    skillId = UnityEngine_Object__op_Equality(v87, 0LL, 0LL);
    if ( v88 >= 1 && (skillId & 1) != 0 )
    {
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_174;
      skillId = (__int64)logic->fields.perf;
      if ( !skillId )
        goto LABEL_174;
      ServantGameObject = BattlePerformance__getServantGameObject((BattlePerformance_o *)skillId, v88, 0LL);
      *(_QWORD *)(v40 + 72) = ServantGameObject;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 72), (int32_t)ServantGameObject, v91, v92);
    }
  }
  ((void (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._13_UseSkill.method)(
    skillInfo,
    skillInfo->klass->vtable._14_MakeSkillSkip.methodPtr);
  BattleSkillInfoData__UpdateSelectAddIndex((BattleSkillInfoData_o *)skillInfo, -1, 0LL);
  skillId = (__int64)this->fields.logic;
  if ( !skillId )
    goto LABEL_174;
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)skillId, 0LL);
  if ( !v40 )
    goto LABEL_174;
  *(_BYTE *)(v40 + 92) = 0;
  skillId = (__int64)this->fields.data;
  if ( !skillId )
    goto LABEL_174;
  BattleData__setCommandAttack((BattleData_o *)skillId, 0, 0, 0LL);
  v93 = this->fields.data;
  if ( !v93 )
    goto LABEL_174;
  actionLogManager = v93->fields.actionLogManager;
  if ( !actionLogManager )
    goto LABEL_174;
  klass = actionLogManager->klass;
  v96 = *(unsigned __int16 *)(&actionLogManager->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actionLogManager->klass->_2.bitflags2 + 3) )
  {
    p_offset = (BattleActionLogManagerInterface_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != BattleActionLogManagerInterface_TypeInfo )
    {
      --v96;
      p_offset += 2;
      if ( !v96 )
        goto LABEL_120;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_120:
    p_method = sub_1B52CAC(actionLogManager, BattleActionLogManagerInterface_TypeInfo, 5LL);
  }
  (*(void (__fastcall **)(struct BattleActionLogManagerInterface_o *, BattleLogicTask_o *, _QWORD))p_method)(
    actionLogManager,
    v9,
    *(_QWORD *)(p_method + 8));
  if ( BattleActionData__isSkillCutIn((BattleActionData_o *)v40, 0LL) )
  {
    v101 = *(_QWORD *)(v40 + 120);
    *(_QWORD *)(v40 + 440) = v101;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 440), v101, v99, v100);
    v102 = (int)StringLiteral_1/*""*/;
    *(_QWORD *)(v40 + 120) = StringLiteral_1/*""*/;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 120), v102, v103, v104);
    v105 = (__int64 *)(v40 + 128);
    if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v40 + 128), 0LL) )
    {
      v108 = *v105;
      *(_QWORD *)(v40 + 440) = *v105;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 440), v108, v106, v107);
      v109 = (int)StringLiteral_1/*""*/;
      *v105 = (__int64)StringLiteral_1/*""*/;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 128), v109, v110, v111);
    }
  }
  type = skillInfo->fields.type;
  v113 = v9->fields.actorIdlist;
  skillId = (__int64)this->fields.data;
  if ( v113 )
  {
    if ( !v113->max_length )
      goto LABEL_175;
    task = (BattleLogicTask_o *)(unsigned int)v113->m_Items[1];
    if ( !skillId )
      goto LABEL_174;
  }
  else
  {
    task = (BattleLogicTask_o *)0xFFFFFFFFLL;
    if ( !skillId )
      goto LABEL_174;
  }
  ServantData = BattleData__getServantData((BattleData_o *)skillId, (int32_t)task, 0LL);
  v116 = type != 1 && !ServantData || SkillLvEntity__IsNoTargetSkipSkill(v35, 0LL);
  if ( (v116 & (*(unsigned __int8 *)(v40 + 240) ^ 1)) != 0 || *(_BYTE *)(v40 + 297) && !*(_BYTE *)(v40 + 298) )
    return 0LL;
  if ( v9->fields.isCanCounterTask )
  {
    v118 = v9->fields.actorIdlist;
    skillId = (__int64)this->fields.data;
    if ( v118 )
    {
      if ( !v118->max_length )
        goto LABEL_175;
      task = (BattleLogicTask_o *)(unsigned int)v118->m_Items[1];
      if ( !skillId )
        goto LABEL_174;
    }
    else
    {
      task = (BattleLogicTask_o *)0xFFFFFFFFLL;
      if ( !skillId )
        goto LABEL_174;
    }
    v119 = BattleData__getServantData((BattleData_o *)skillId, (int32_t)task, 0LL);
    if ( v119 )
    {
      v120 = v119;
      (*(void (__fastcall **)(__int64, struct BattleData_o *, _QWORD))(*(_QWORD *)v40 + 440LL))(
        v40,
        this->fields.data,
        *(_QWORD *)(*(_QWORD *)v40 + 448LL));
      skillId = *(_QWORD *)(v40 + 288);
      if ( !skillId )
        goto LABEL_174;
      v121 = this->fields.data;
      uniqueId = v120->fields.uniqueId;
      skillId = (__int64)System_Collections_Generic_List_int___ToArray(
                           (System_Collections_Generic_List_int__o *)skillId,
                           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
      if ( !v121 )
        goto LABEL_174;
      BattleData__SetWasAttackTargetIdList(v121, uniqueId, (System_Int32_array *)skillId, 0LL);
      v123 = this->fields.logic;
      if ( !v123 )
        goto LABEL_174;
      skillId = (__int64)v123->fields.logicnomal;
      if ( !skillId )
        goto LABEL_174;
      v124 = BattleLogicNomal__taskCounterFunc(
               (BattleLogicNomal_o *)skillId,
               this->fields.data,
               !v120->fields.isEnemy,
               1,
               0,
               0LL);
      BattleLogic__addBattleLogicTask(v123, v124, 0LL);
    }
  }
  v125 = BattleLogicSkill__MakeAddInvokeSkillTask(this, skillLvMst, v35, v9, v115);
  skillId = SkillLvEntity__IsAdditionalSkillInsertCurrentSkillAfter(v35, 0LL);
  if ( !this->fields.logic )
    goto LABEL_174;
  if ( (skillId & 1) != 0 )
    BattleLogic__AddTaskTargetTaskAfter(this->fields.logic, v9, v125, 0LL);
  else
    BattleLogic__AddBattleLogicTask(this->fields.logic, v125, 0LL);
  v126 = this->fields.data;
  skillId = ((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
              skillInfo,
              skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v126 )
    goto LABEL_174;
  BattleData__AddUseSkillId(v126, skillId, 0LL);
  if ( BattleActionData__checkSummonServantList((BattleActionData_o *)v40, 0LL) )
  {
    v127 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v127, v128);
    if ( !v127 )
      goto LABEL_174;
    v127->fields.actiontype = 24;
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_174;
    BattleLogic__AddBattleLogicTask((BattleLogic_o *)skillId, v127, 0LL);
  }
  if ( SkillEntity__GetCutinAdditionalTime(Entity, 0LL) > 0.0 )
  {
    skillId = SkillEntity__getSkillCutInId(Entity, 0LL);
    if ( !(_DWORD)skillId )
    {
      v131 = this->fields.logic;
      if ( !v131 )
        goto LABEL_174;
      perf = v131->fields.perf;
      CutinAdditionalTime = SkillEntity__GetCutinAdditionalTime(Entity, 0LL);
      if ( !perf )
        goto LABEL_174;
      BattlePerformance__InsertWaitAction(perf, CutinAdditionalTime, 1, 0LL);
      if ( *(_QWORD *)(v40 + 120) )
      {
        v134 = this->fields.data;
        if ( !v134 )
          goto LABEL_174;
        v135 = v134->fields.perf;
        if ( !v135 )
          goto LABEL_174;
        skillId = (__int64)v135->fields.infoComp;
        if ( !skillId )
          goto LABEL_174;
        BattleInformationComponent__showCommonMessage(
          (BattleInformationComponent_o *)skillId,
          (BattleActionData_o *)v40,
          0LL);
        *(_QWORD *)(v40 + 120) = 0LL;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 120), 0, v136, v137);
        *(_BYTE *)(v40 + 308) = 1;
      }
    }
  }
  if ( v9->fields.IsNotShowSkillMessage )
  {
    *(_QWORD *)(v40 + 120) = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 120), 0, v129, v130);
    *(_BYTE *)(v40 + 308) = 1;
  }
  if ( SkillEntity__IsCheckUpdateShiftServant(Entity, 0LL) )
  {
    v138 = (BattleLogicTask_o *)sub_1B00F18(CheckUpdateShiftTask_TypeInfo);
    BattleLogicTask___ctor(v138, v139);
    v138->fields.actiontype = 68;
    skillId = (__int64)this->fields.logic;
    if ( !skillId )
      goto LABEL_174;
    BattleLogic__AddTaskTargetTaskAfter((BattleLogic_o *)skillId, v9, v138, 0LL);
  }
  return (BattleActionData_o *)v40;
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
  unsigned int v11; // w22
  __int64 v12; // x21
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  BattleData_o *v17; // x8
  System_Int32_array *v18; // x19
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x3
  BattleData_o *v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v26; // x0

  if ( (byte_48E5337 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask___TypeInfo, method);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v3);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v4);
    sub_1B00CCC(&int___TypeInfo, v5);
    byte_48E5337 = 1;
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
  if ( !v7->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !v8 )
    goto LABEL_26;
  if ( !v8->fields.m_CancellationTokenSource )
    return 0LL;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.m_CancellationTokenSource )
    return 0LL;
  HitGimmickSkillId = BattleLogicSkill__GetHitGimmickSkillId((BattleLogicSkill_o *)data, (System_Int32_array *)v8, v9);
  if ( (HitGimmickSkillId & 0x80000000) != 0 )
    return 0LL;
  v11 = HitGimmickSkillId;
  v12 = sub_1B00F18(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_26;
  *(_DWORD *)(v12 + 24) = -1;
  *(_QWORD *)(v12 + 16) = 20LL;
  if ( v11 >= LODWORD(v7->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 376LL))(
    v12,
    *((unsigned int *)&v7->fields.rootfsm + v11),
    *(_QWORD *)(*(_QWORD *)v12 + 384LL));
  *(_DWORD *)(v12 + 36) = 1;
  v13 = sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, v14);
  data = (BattleData_o *)sub_1B00D74(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_26;
  method = (const MethodInfo *)data;
  if ( !LODWORD(data->fields.m_CancellationTokenSource) )
    goto LABEL_27;
  LODWORD(data->fields.rootfsm) = v11;
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 136) = data;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 136), (int32_t)data, v15, v16);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 0, 0LL), (v17 = this->fields.data) == 0LL)
    || (v18 = (System_Int32_array *)data,
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v17, 0LL, 0LL),
        BattleLogicTask__setActionSkill(
          (BattleLogicTask_o *)v13,
          (BattleSkillInfoData_o *)v12,
          v18,
          FieldPlayerServantIDList,
          0,
          0,
          v20),
        BattleLogicTask__setActor((BattleLogicTask_o *)v13, 5, -1, v21),
        (data = (BattleData_o *)sub_1B00D74(BattleLogicTask___TypeInfo, 1LL)) == 0LL) )
  {
LABEL_26:
    sub_1B00F28(data, method);
  }
  v22 = data;
  data = (BattleData_o *)sub_1B00E08(v13, data->klass->_1.element_class);
  if ( !data )
  {
    v26 = sub_1B00F4C(0LL);
    sub_1B00DF4(v26, 0LL);
  }
  if ( !LODWORD(v22->fields.m_CancellationTokenSource) )
LABEL_27:
    sub_1B00F30(data, method);
  v22->fields.rootfsm = (struct PlayMakerFSM_o *)v13;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v22->fields.rootfsm, v13, v23, v24);
  return (BattleLogicTask_array *)v22;
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
  Il2CppObject *MasterData_object; // x0
  QuestBehaviorMaster_o *v13; // x20
  int32_t v14; // w21
  int32_t Phase; // w0
  QuestBehaviorEntity_array *BattleSkill; // x0
  QuestBehaviorEntity_array *v17; // x20
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x25
  QuestBehaviorEntity_o **m_Items; // x26
  __int64 v21; // x22
  unsigned int v22; // w0
  BattleLogicTask_o *v23; // x23
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x24
  System_Int32_array *FieldPlayerServantIDList; // x0
  const MethodInfo *v28; // x6
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_48E5336 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, method);
    sub_1B00CCC(&BattleSkillInfoData_TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48E5336 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_object )
    return 0LL;
  v13 = (QuestBehaviorMaster_o *)MasterData_object;
  Instance = (DataManager_o *)this->fields.data;
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)BattleData__getQuestId((BattleData_o *)Instance, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v14 = (int)Instance;
  Phase = BattleData__getPhase(this->fields.data, 0LL);
  BattleSkill = QuestBehaviorMaster__getBattleSkill(v13, v14, Phase, 0LL);
  if ( !BattleSkill )
    return 0LL;
  v17 = BattleSkill;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( (int)v17->max_length >= 1 )
  {
    v19 = 0LL;
    m_Items = v17->m_Items;
    while ( 1 )
    {
      v21 = sub_1B00F18(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v21, 0LL);
      if ( !v21 )
        break;
      *(_DWORD *)(v21 + 24) = -1;
      *(_QWORD *)(v21 + 16) = 20LL;
      if ( (unsigned int)v19 >= v17->max_length )
        goto LABEL_29;
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      v22 = QuestBehaviorEntity__getskillId((QuestBehaviorEntity_o *)Instance, 0LL);
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 376LL))(
                                    v21,
                                    v22,
                                    *(_QWORD *)(*(_QWORD *)v21 + 384LL));
      if ( (unsigned int)v19 >= v17->max_length )
LABEL_29:
        sub_1B00F30(Instance, v11);
      Instance = (DataManager_o *)m_Items[v19];
      if ( !Instance )
        break;
      *(_DWORD *)(v21 + 36) = QuestBehaviorEntity__getskillLv((QuestBehaviorEntity_o *)Instance, 0LL);
      v23 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v23, v24);
      if ( !v23 )
        break;
      BattleLogicTask__setActor(v23, 5, -1, v25);
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
      if ( !this->fields.data )
        break;
      v26 = (System_Int32_array *)Instance;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(this->fields.data, 0LL, 0LL);
      BattleLogicTask__setActionSkill(v23, (BattleSkillInfoData_o *)v21, v26, FieldPlayerServantIDList, 0, 0, v28);
      BattleLogicTask__setActor(v23, 5, -1, v29);
      if ( !v18 )
        break;
      items = v18->fields._items;
      v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v23,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v23;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v23, v30, v31);
      }
      if ( (int)++v19 >= (signed int)v17->max_length )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_28:
    sub_1B00F28(Instance, v11);
  }
  if ( !v18 )
    goto LABEL_28;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  BattleLogicTask_o *v12; // x22
  const MethodInfo *v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_48E5330 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&skillId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_48E5330 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v12, v13);
  if ( !v12
    || (BattleLogicTask__setCommandSpell(v12, skillId, 0LL, ptTargetList, v16), !v11)
    || (items = v11->fields._items,
        v20 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v11->fields._version,
        !items) )
  {
    sub_1B00F28(v14, v15);
  }
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v12;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v17, v18);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v20; // x19
  BattleLogicTask_o *v21; // x20
  const MethodInfo *v22; // x1
  __int64 data; // x0
  __int64 svtUniqueId; // x1
  const MethodInfo *v25; // x6
  struct BattleData_o *v26; // x8
  int32_t globaltargetId; // w27
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
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  const MethodInfo *v45; // [xsp+10h] [xbp-70h]

  if ( (byte_48E532F & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, skillInfo);
    sub_1B00CCC(&int___TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    byte_48E532F = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v21 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v21, v22);
  if ( !skillInfo )
    goto LABEL_37;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_37;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, skillInfo->fields.svtUniqueId, 0LL);
  if ( data )
  {
    data = BattleSkillInfoData__isServantSkill(skillInfo, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_37;
      v21->fields.isCanCounterTask = isCanCounterSkill;
      v21->fields.isSideEffectTriggerSkill = isCanCounterSkill;
    }
  }
  if ( !enemyTargetList )
  {
    svtUniqueId = (unsigned int)skillInfo->fields.svtUniqueId;
    if ( (_DWORD)svtUniqueId == -1 )
      goto LABEL_13;
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_37;
    data = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    if ( (data & 1) != 0 )
    {
LABEL_13:
      v26 = this->fields.data;
      if ( !v26 )
        goto LABEL_37;
      globaltargetId = v26->fields.globaltargetId;
      if ( BattleSkillInfoData__IsTargetTypeEnemy(skillInfo, 0LL) )
      {
        logictarget = this->fields.logictarget;
        v29 = skillInfo->fields.svtUniqueId;
        data = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
        if ( !logictarget )
          goto LABEL_37;
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
        goto LABEL_37;
      v32 = this->fields.logictarget;
      v33 = skillInfo->fields.svtUniqueId;
      data = (__int64)BattleData__getFieldPlayerServantIDList((BattleData_o *)data, 0LL, 0LL);
      if ( !v32 )
        goto LABEL_37;
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
                         v45);
      v31 = int___TypeInfo;
    }
    data = sub_1B00D74(v31, 1LL);
    if ( !data )
      goto LABEL_37;
    enemyTargetList = (System_Int32_array *)data;
    if ( !*(_DWORD *)(data + 24) )
      sub_1B00F30(data, svtUniqueId);
    *(_DWORD *)(data + 32) = globaltargetId;
  }
  if ( !v21 )
    goto LABEL_37;
  BattleLogicTask__setActionSkill(v21, skillInfo, enemyTargetList, ptTargetList, checkAlive, checkRevengeId, v25);
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
      goto LABEL_37;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)data, svtUniqueId, 0LL);
    v36 = skillInfo->fields.svtUniqueId;
    v37 = isPlayerID ? 2 : 3;
  }
  BattleLogicTask__setActor(v21, v37, v36, v34);
  if ( !v20
    || (items = v20->fields._items,
        v41 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v20->fields._version,
        !items) )
  {
LABEL_37:
    sub_1B00F28(data, svtUniqueId);
  }
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v21,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v43[4] = (Il2CppClass *)v21;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v21, v38, v39);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v20,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E533C & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicSkill___c_TypeInfo, v1);
    byte_48E533C = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleLogicSkill___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicSkill___c_TypeInfo->static_fields->__9 = (struct BattleLogicSkill___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)BattleLogicSkill___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, svt);
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
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E533D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_48E533D = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B00F28(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__1(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  BattleLogicSkill___c__DisplayClass12_0_o *v14; // x0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2
  long double v17; // q0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E533E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B00CCC(&long_TypeInfo, v8);
    byte_48E533E = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B00F28(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v10, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  v17 = sub_1B011E8(conditions);
  return BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__2(v14, v15, *(double *)&v17, v16);
}


bool __fastcall BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__2(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E533F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_48E533F = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1B00F28(conditions, key);
  }
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                            conditions,
                            conditions->klass->vtable._4_unknown.methodPtr);
  if ( System_Int64__TryParse(v9, &result, 0LL) )
    return (double)(int)result <= val;
  return 1;
}


bool __fastcall BattleLogicSkill___c__DisplayClass12_0___checkConditions_b__3(
        BattleLogicSkill___c__DisplayClass12_0_o *this,
        System_String_o *key,
        double val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *conditions; // x0
  System_String_o *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  BattleLogicSkill___c__DisplayClass16_0_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E5340 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B00CCC(&long_TypeInfo, v8);
    byte_48E5340 = 1;
  }
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          conditions,
          (Il2CppObject *)key,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 1;
  result = 0LL;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions
    || (conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  conditions,
                                                                                  (Il2CppObject *)key,
                                                                                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_13:
    sub_1B00F28(conditions, key);
  }
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))conditions->klass->vtable._3_ToString.method)(
                             conditions,
                             conditions->klass->vtable._4_unknown.methodPtr);
  if ( !System_Int64__TryParse(v10, &result, 0LL) )
    return 1;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.conditions;
  if ( !conditions )
    goto LABEL_13;
  conditions = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            conditions,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !conditions )
    goto LABEL_13;
  if ( conditions->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return (double)*(int *)j_il2cpp_object_unbox_0(conditions, long_TypeInfo, v11, v12) >= val;
  sub_1B011E8(conditions);
  return BattleLogicSkill___c__DisplayClass16_0___SetSkillCopyFunction_b__0(v14, v15, v16);
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
    sub_1B00F28(0LL, type);
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
    sub_1B00F28(this, type);
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