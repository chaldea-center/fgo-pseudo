void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleLogicTask_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v18; // x20
  __int64 v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_421700D & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v8);
    byte_421700D = 1;
  }
  v9 = (struct BattleLogicTask_array *)sub_B0D8BC(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.zeroTask,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B0D974(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v16, v17);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v18,
    (const MethodInfo_2EA255C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v18 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    48,
    28,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    49,
    29,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    46,
    30,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    47,
    31,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    43,
    32,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    45,
    33,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    44,
    43,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v18,
    75,
    64,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.taskDictionary,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B0D974(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v26, v27);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v28,
    (const MethodInfo_2EA255C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v28 )
LABEL_6:
    sub_B0D97C(v19);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    28,
    10,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    29,
    11,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    30,
    12,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    31,
    13,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    32,
    6,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    33,
    4,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    34,
    2,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    43,
    15,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    64,
    21,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    66,
    19,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v28,
    67,
    22,
    (const MethodInfo_2EA3100 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.stateDicitionary,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v35);
}


void __fastcall BattleLogicFieldAi__AddAiFieldScriptTask(
        BattleLogicFieldAi_o *this,
        AiFieldEntity_o *ent,
        System_Collections_Generic_List_BattleLogicTask__o *retlist,
        bool isForcedSpeedOne,
        BattleLogicTask_o *mainTask,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *Voice; // x0
  struct BattleData_o *data; // x8
  System_Int32_array **v16; // x23
  int32_t EffectType; // w0
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w25
  __int64 v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  System_Int32_array **motionMessage; // t1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x19
  System_String_o *v45; // x19
  float v46; // s8
  float v47; // s0
  System_String_o *v48; // x19
  System_String_o *v49; // x20
  __int64 v50; // x0

  if ( (byte_4217008 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, ent);
    sub_B0D8A4(&char___TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12);
    sub_B0D8A4(&SoundManager_TypeInfo, v13);
    byte_4217008 = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    v16 = (System_Int32_array **)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v20 = EffectType;
        v21 = sub_B0D974(BattleLogicTask_TypeInfo, v18, v19);
        BattleLogicTask___ctor((BattleLogicTask_o *)v21, 0LL);
        if ( !v21 )
          goto LABEL_33;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v21, v20, 0LL);
        *(_QWORD *)(v21 + 104) = v16;
        sub_B0D840((BattleServantConfConponent_o *)(v21 + 104), v16, v22, v23, v24, v25, v26, v27);
        *(_BYTE *)(v21 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v21 + 188) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_33;
          motionMessage = (System_Int32_array **)mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v21 + 152) = motionMessage;
          sub_B0D840((BattleServantConfConponent_o *)(v21 + 152), motionMessage, v28, v29, v30, v31, v32, v33);
          *p_motionMessage = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)p_motionMessage, 0LL, v37, v38, v39, v40, v41, v42);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retlist,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          return;
        }
LABEL_33:
        sub_B0D97C(Voice);
      }
    }
    if ( v16 )
    {
      Voice = (void *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !Voice )
        goto LABEL_33;
      if ( !*((_DWORD *)Voice + 6) )
        goto LABEL_34;
      *((_WORD *)Voice + 16) = 58;
      Voice = System_String__Split((System_String_o *)v16, (System_Char_array *)Voice, 0LL);
      if ( !Voice )
        goto LABEL_33;
      v43 = *((_QWORD *)Voice + 3);
      v44 = Voice;
      if ( (int)v43 < 2 )
      {
        if ( (_DWORD)v43 )
        {
          v45 = (System_String_o *)*((_QWORD *)Voice + 4);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v45, 0LL);
          return;
        }
LABEL_34:
        v50 = sub_B0D9A8(Voice);
        sub_B0D948(v50, 0LL);
      }
      if ( (_DWORD)v43 == 2 )
      {
        v46 = 1.0;
      }
      else
      {
        v47 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
        v43 = v44[3];
        v46 = v47;
        if ( !(_DWORD)v43 )
          goto LABEL_34;
      }
      if ( (_DWORD)v43 == 1 )
        goto LABEL_34;
      v49 = (System_String_o *)v44[4];
      v48 = (System_String_o *)v44[5];
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_24977528(v49, v48, v46, 0LL, 0LL);
    }
  }
}


void __fastcall BattleLogicFieldAi__CheckAiActType(
        BattleLogicFieldAi_o *this,
        AiActEntity_o *aiActEnt,
        BattleSkillInfoData_o *skillInfo,
        BattleFieldData_o *fieldData,
        int32_t *actType,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v10; // x23
  __int64 v11; // x1
  int32_t v12; // w1
  struct System_Int32_array *skillVals; // x8
  int32_t v14; // w22
  unsigned int v15; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_421700A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt);
    this = (BattleLogicFieldAi_o *)sub_B0D8A4(&DataManager_TypeInfo, v11);
    byte_421700A = 1;
  }
  entity = 0LL;
  v12 = *actType;
  if ( (*actType & 0xFFFFFFFE) == 40 )
  {
    if ( !aiActEnt )
      goto LABEL_19;
    skillVals = aiActEnt->fields.skillVals;
    if ( !skillVals )
      goto LABEL_19;
    if ( (int)skillVals->max_length > 1 )
    {
      v15 = skillVals->m_Items[1];
      v14 = skillVals->m_Items[2];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !this )
        goto LABEL_19;
      this = (BattleLogicFieldAi_o *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v15, v14, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( skillInfo )
        {
          skillInfo->fields.type = 20;
          if ( fieldData )
          {
            uniqueId = fieldData->fields.uniqueId;
            klass = skillInfo->klass;
            skillInfo->fields.index = 0;
            skillInfo->fields.svtUniqueId = uniqueId;
            ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
              skillInfo,
              v15,
              klass->vtable._5_get_skillId.methodPtr);
            skillInfo->fields.skilllv = v14;
            return;
          }
        }
LABEL_19:
        sub_B0D97C(this);
      }
    }
    goto LABEL_17;
  }
  if ( v12 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v12, (const MethodInfo *)skillInfo) )
LABEL_17:
    *actType = 0;
}


bool __fastcall BattleLogicFieldAi__CheckAiCanActionFromTargets(
        BattleLogicFieldAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
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
  __int64 v15; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  struct BattleData_o *data; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *field_datalist; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x23
  BattleFieldData_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  BattleSkillInfoData_o *v31; // x22
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x7
  bool isSkillType; // w8
  bool v35; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-40h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-34h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_421700C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_BattleFieldData___, aiInfo);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_AiActMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v10);
    sub_B0D8A4(&Method_System_Func_BattleFieldData__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_BattleFieldData__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_BattleLogicFieldAi___c__DisplayClass22_0__CheckAiCanActionFromTargets_b__0__, v13);
    sub_B0D8A4(&BattleLogicFieldAi___c__DisplayClass22_0_TypeInfo, v14);
    byte_421700C = 1;
  }
  entity = 0LL;
  actType = 0;
  ptTarget = 0LL;
  target = 0LL;
  v15 = sub_B0D974(BattleLogicFieldAi___c__DisplayClass22_0_TypeInfo, aiInfo, aiBaseEntity);
  BattleLogicFieldAi___c__DisplayClass22_0___ctor((BattleLogicFieldAi___c__DisplayClass22_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = aiInfo;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)aiInfo, v17, v18, v19, v20, v21, v22);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
    goto LABEL_19;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)AiActEntity__GetNoTargetNoActionType(
                                                                                    (AiActEntity_o *)entity,
                                                                                    0LL);
  if ( !(_DWORD)Master_WarQuestSelectionMaster )
    return 1;
  if ( !entity || (actType = *(&entity->fields.id + 1), (data = this->fields.data) == 0LL) )
LABEL_19:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  field_datalist = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)data->fields.field_datalist;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleFieldData__bool__TypeInfo,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_BattleLogicFieldAi___c__DisplayClass22_0__CheckAiCanActionFromTargets_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleFieldData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (BattleFieldData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                          field_datalist,
                                                                                          (System_Func_T__bool__o *)v27,
                                                                                          (const MethodInfo_170767C *)Method_BasicHelper_Find_BattleFieldData___);
  v31 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v29, v30);
  BattleSkillInfoData___ctor(v31, 0LL);
  BattleLogicFieldAi__CheckAiActType(
    this,
    (AiActEntity_o *)entity,
    v31,
    USFGOActorBattleActionEventConditional_OverwriteParamCondition,
    &actType,
    v32);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v35 = 1;
  if ( v31 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v31,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             USFGOActorBattleActionEventConditional_OverwriteParamCondition,
             &target,
             &ptTarget,
             v33);
  }
  return v35;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__CheckFieldAiBeforeMoveWave(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v4; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3
  __int64 v10; // x0

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B0D97C(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_20900428(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     21,
                                     (BattleLogicBaseAi_o *)v5,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 75, v7, v8);
    LODWORD(v4) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)v4 )
      return v5->fields.zeroTask;
  }
}


bool __fastcall BattleLogicFieldAi__CheckFieldSkillTarget(
        BattleLogicFieldAi_o *this,
        BattleSkillInfoData_o *skillInfo,
        AiBaseEntity_o *aiEnt,
        AiActEntity_o *aiActEnt,
        BattleFieldData_o *fieldData,
        System_Int32_array **target,
        System_Int32_array **ptTarget,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 Instance; // x0
  SkillLvMaster_o *v20; // x19
  SkillLvEntity_o *v21; // x26
  __int64 v22; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x27
  int v24; // w21
  __int64 v25; // x8
  unsigned __int64 v26; // x20
  char v27; // w27
  __int64 v29; // x28
  BattleLogicTarget_o *logictarget; // x19
  int32_t v31; // w20
  System_Int32_array *targetIndividuality; // x25
  int32_t uniqueId; // w26
  System_Int32_array *FieldEnemyServantIDList; // x22
  char v35; // w27
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleData_o *data; // x8
  BattleLogicTarget_o *v43; // x19
  int32_t v44; // w20
  System_Int32_array *v45; // x25
  int32_t v46; // w24
  __int64 v47; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  AiLogic_o *aiLogic; // x19
  __int64 v56; // x0
  bool IsDeadToEnableUpHate; // [xsp+20h] [xbp-80h]
  char v58; // [xsp+24h] [xbp-7Ch]
  BattleFieldData_o *v59; // [xsp+28h] [xbp-78h]
  BattleServantConfConponent_o *v60; // [xsp+30h] [xbp-70h]
  BattleServantConfConponent_o *v61; // [xsp+38h] [xbp-68h]
  BattleLogicFieldAi_o *v62; // [xsp+40h] [xbp-60h]
  AiActEntity_o *v63; // [xsp+48h] [xbp-58h]

  if ( (byte_421700B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v16);
    sub_B0D8A4(&int___TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_421700B = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v63 = aiActEnt;
  v20 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v20 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v20, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v21 = (SkillLvEntity_o *)Instance;
  v22 = *(_QWORD *)(Instance + 32);
  v60 = (BattleServantConfConponent_o *)ptTarget;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v22 )
    goto LABEL_41;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v61 = (BattleServantConfConponent_o *)target;
  if ( *(_DWORD *)(v22 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        *(_DWORD *)(v22 + 32),
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( Instance )
  {
    Instance = FuncList__Check(43, *(_DWORD *)(Instance + 24), 0LL);
    v24 = Instance & 1;
  }
  else
  {
LABEL_13:
    v24 = 0;
  }
  v25 = *(_QWORD *)(v22 + 24);
  if ( (int)v25 < 1 )
  {
    v27 = 0;
    if ( !fieldData )
      goto LABEL_41;
  }
  else
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v25 )
        goto LABEL_42;
      if ( !v23 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v23,
                            *(_DWORD *)(v22 + 32 + 4 * v26),
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v25) = *(_DWORD *)(v22 + 24);
      if ( (__int64)++v26 >= (int)v25 )
      {
        v27 = 0;
        goto LABEL_25;
      }
    }
    v27 = 1;
LABEL_25:
    if ( !fieldData )
      goto LABEL_41;
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( (~((v24 | BattleLogic__checkFunctionTargetsAvailable(
                   (BattleLogic_o *)Instance,
                   v21->fields.funcId,
                   fieldData->fields.uniqueId,
                   0LL)) << 31 >> 31) & 7) != 0 )
    return 0;
  v59 = fieldData;
  v62 = this;
  Instance = SkillLvEntity__IsEnableTarget(v21, 0, 0LL);
  v58 = Instance;
  if ( !aiEnt )
    goto LABEL_41;
  IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
  Instance = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v63 )
    goto LABEL_41;
  v29 = Instance;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  v31 = v63->fields.target;
  targetIndividuality = v63->fields.targetIndividuality;
  uniqueId = v59->fields.uniqueId;
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !logictarget )
    goto LABEL_41;
  v35 = v27 | v24;
  Instance = BattleLogicTarget__getTargetAiAct(
               logictarget,
               v31,
               uniqueId,
               targetIndividuality,
               FieldEnemyServantIDList,
               v58 & 1,
               v35,
               (System_Int32_array *)Instance,
               v63,
               IsDeadToEnableUpHate,
               0LL);
  if ( !v29 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v29 + 24) )
    goto LABEL_42;
  *(_DWORD *)(v29 + 32) = Instance;
  v61->klass = (BattleServantConfConponent_c *)v29;
  sub_B0D840(v61, (System_Int32_array **)v29, v36, v37, v38, v39, v40, v41);
  Instance = sub_B0D8BC(int___TypeInfo, 1LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_41;
  v43 = this->fields.logictarget;
  v44 = v63->fields.target;
  v45 = v63->fields.targetIndividuality;
  v46 = v59->fields.uniqueId;
  v47 = Instance;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !v43
    || (Instance = BattleLogicTarget__getTargetAiAct(
                     v43,
                     v44,
                     v46,
                     v45,
                     FieldPlayerServantIDList,
                     v58 & 1,
                     v35,
                     (System_Int32_array *)Instance,
                     v63,
                     IsDeadToEnableUpHate,
                     0LL),
        !v47) )
  {
LABEL_41:
    sub_B0D97C(Instance);
  }
  if ( !*(_DWORD *)(v47 + 24) )
  {
LABEL_42:
    v56 = sub_B0D9A8(Instance);
    sub_B0D948(v56, 0LL);
  }
  *(_DWORD *)(v47 + 32) = Instance;
  v60->klass = (BattleServantConfConponent_c *)v47;
  sub_B0D840(v60, (System_Int32_array **)v47, v49, v50, v51, v52, v53, v54);
  aiLogic = v62->fields.aiLogic;
  Instance = AiActEntity__GetNoTargetNoActionType(v63, 0LL);
  if ( !aiLogic )
    goto LABEL_41;
  return !AiLogic__IsNoTargetNoActionTask(
            aiLogic,
            Instance,
            (System_Int32_array *)v61->klass,
            (System_Int32_array *)v60->klass,
            0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicFieldAi__CreateActionTasks(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4217006 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType);
    byte_4217006 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, method);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.actiontype = actionType;
  BattleLogicTask__setActor(v5, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v5, v7);
}


void __fastcall BattleLogicFieldAi__DefenceTargetInitialize(
        BattleLogicFieldAi_o *this,
        AiFieldEntity_o *aiFieldEntity,
        const MethodInfo *method)
{
  BattleLogicFieldAi_o *v4; // x20
  int FieldHp; // w19
  int32_t v6; // w2
  struct BattleLogic_o *logic; // x8

  if ( !aiFieldEntity )
    goto LABEL_8;
  v4 = this;
  FieldHp = AiFieldEntity__GetFieldHp(aiFieldEntity, 0LL);
  this = (BattleLogicFieldAi_o *)AiFieldEntity__GetFieldUIId(aiFieldEntity, 0LL);
  if ( FieldHp >= 1 )
  {
    v6 = (int)this;
    if ( (int)this >= 1 )
    {
      logic = v4->fields.logic;
      if ( logic )
      {
        this = (BattleLogicFieldAi_o *)logic->fields.perf;
        if ( this )
        {
          BattlePerformance__DefenceTargetInitialize((BattlePerformance_o *)this, FieldHp, v6, 0LL);
          return;
        }
      }
LABEL_8:
      sub_B0D97C(this);
    }
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__checkFieldAiEntry(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v4; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3
  __int64 v10; // x0

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B0D97C(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_20900428(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     15,
                                     (BattleLogicBaseAi_o *)v5,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 44, v7, v8);
    LODWORD(v4) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)v4 )
      return v5->fields.zeroTask;
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__checkFieldAiStartTurn(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v4; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3
  __int64 v10; // x0

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B0D97C(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_20900428(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     4,
                                     (BattleLogicBaseAi_o *)v5,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 45, v7, v8);
    LODWORD(v4) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)v4 )
      return v5->fields.zeroTask;
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__checkFieldAiStartWave(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v4; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3
  __int64 v10; // x0

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B0D97C(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_20900428(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     6,
                                     (BattleLogicBaseAi_o *)v5,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 43, v7, v8);
    LODWORD(v4) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)v4 )
      return v5->fields.zeroTask;
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicFieldAi__checkFieldAiTask(
        BattleLogicFieldAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4217003 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6);
    byte_4217003 = 1;
  }
  taskDictionary = this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
         ltype,
         (const MethodInfo_2EA3364 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                       (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
                                       ltype,
                                       (const MethodInfo_2EA3040 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v9);
    }
LABEL_8:
    sub_B0D97C(taskDictionary);
  }
  return this->fields.zeroTask;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBase(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v6; // x1
  BattleLogicTask_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x20
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_4217002 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v6);
    byte_4217002 = 1;
  }
  v7 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, *(_QWORD *)&index);
  BattleLogicTask___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.actiontype = actionType,
        BattleLogicTask__setActor(v7, 5, index, 0LL),
        (v8 = sub_B0D8BC(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_B0D97C(v8);
  }
  v9 = v8;
  v10 = sub_B0D964(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
  if ( !v10 )
  {
    v18 = sub_B0D99C(0LL);
    sub_B0D948(v18, 0LL);
  }
  if ( !*(_DWORD *)(v9 + 24) )
  {
    v19 = sub_B0D9A8(v10);
    sub_B0D948(v19, 0LL);
  }
  *(_QWORD *)(v9 + 32) = v7;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)v7, v11, v12, v13, v14, v15, v16);
  return (BattleLogicTask_array *)v9;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBaseActionTask(
        BattleLogicFieldAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicFieldAi_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t v12; // w23
  unsigned int v13; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v17; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  struct BattleData_o *v19; // x8
  AiFieldEntity_o *Action_20901496; // x0
  const MethodInfo *v21; // x3
  int32_t v22; // w4
  const MethodInfo *v23; // x5
  __int64 v25; // x0

  v4 = this;
  if ( (byte_4217004 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicFieldAi_o *)sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_4217004 = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
         task->fields.actiontype,
         (const MethodInfo_2EA3364 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                     (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_2EA3040 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v12 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0LL);
      v13 = (unsigned int)this;
    }
    else
    {
      v13 = 0;
    }
    data = v4->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v13 < (int)max_length )
    {
      if ( v13 >= max_length )
      {
        v25 = sub_B0D9A8(this);
        sub_B0D948(v25, 0LL);
      }
      v17 = field_datalist->m_Items[v13];
      v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10, v11);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v18,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v19 = v4->fields.data;
      if ( v19 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_20901496 = AiLogic__getAction_20901496(
                              (AiLogic_o *)this,
                              v17,
                              v12,
                              v19->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_20901496 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v17,
                                             Action_20901496,
                                             (int32_t)v21,
                                             v22,
                                             v23);
            if ( !v18 )
              goto LABEL_22;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_20901496,
                                           task->fields.actiontype,
                                           v13 + 1,
                                           v21);
          if ( v18 )
          {
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_B0D97C(this);
    }
  }
  return v4->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createDeadActionTask(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogicTask_o *v4; // x20
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4217005 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, method);
    byte_4217005 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, method, v2);
  BattleLogicTask___ctor(v4, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.actiontype = 34;
  BattleLogicTask__setActor(v4, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v4, v6);
}


int32_t __fastcall BattleLogicFieldAi__get_ActorType(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  return 5;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__makeResurrectionTask(
        BattleLogicFieldAi_o *this,
        System_Int32_array *targetIds,
        BattleSkillInfoData_o *skillInfo,
        System_String_o *motionMessage,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  bool v20; // w26
  int32_t v21; // w24
  __int64 v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v36; // x0

  if ( (byte_4217009 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, targetIds);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_4217009 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  targetIds,
                                                                                                  skillInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_14;
  v18 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = isForcedSpeedOne;
    do
    {
      if ( v19 >= (unsigned int)v18 )
      {
        v36 = sub_B0D9A8(v15);
        sub_B0D948(v36, 0LL);
      }
      v21 = targetIds->m_Items[v19 + 1];
      if ( (v21 & 0x80000000) == 0 )
      {
        v22 = sub_B0D974(BattleLogicTask_TypeInfo, v16, v17);
        BattleLogicTask___ctor((BattleLogicTask_o *)v22, 0LL);
        if ( !v22 )
          goto LABEL_14;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v22, 0LL);
        *(_QWORD *)(v22 + 72) = skillInfo;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v22 + 72),
          (System_Int32_array **)skillInfo,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        BattleLogicTask__setActor((BattleLogicTask_o *)v22, 5, v21, 0LL);
        *(_QWORD *)(v22 + 152) = motionMessage;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v22 + 152),
          (System_Int32_array **)motionMessage,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        *(_BYTE *)(v22 + 160) = v20;
        if ( !v14 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v18) = targetIds->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !v14 )
LABEL_14:
    sub_B0D97C(v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__procAiAct(
        BattleLogicFieldAi_o *this,
        BattleFieldData_o *fieldData,
        AiFieldEntity_o *aiEnt,
        int32_t countAct,
        int32_t procState,
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
  void *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w25
  AiActEntity_o *v27; // x23
  BattleSkillInfoData_o *v28; // x22
  AiState_o *aiState; // x24
  char v30; // w26
  __int64 v31; // x2
  __int64 v32; // x1
  WeightRate_int__o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  int *skillVals; // x8
  int32_t v38; // w24
  unsigned int v39; // w26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  struct BattleData_o *data; // x9
  struct BattleData_o *v43; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x24
  bool isForcedSkillSpeedOne; // w0
  __int64 v46; // x1
  __int64 v47; // x2
  bool v48; // w27
  __int64 v49; // x26
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **infoText; // x1
  const MethodInfo *v57; // x5
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  bool isSkillType; // w0
  __int64 v69; // x1
  __int64 v70; // x2
  const MethodInfo *v71; // x7
  const MethodInfo *v72; // x5
  BattleLogicBaseAi_o *v73; // x0
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x2
  FieldAiActArgument_o *v76; // x22
  const MethodInfo *v77; // x4
  const MethodInfo *v78; // x2
  System_Int32_array *v79; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-58h] BYREF
  int v81; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4217007 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, fieldData);
    sub_B0D8A4(&BattleSkillInfoData_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v12);
    sub_B0D8A4(&FieldAiActArgument_TypeInfo, v13);
    sub_B0D8A4(&int___TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v20);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_8809/*"MOTION_"*/, v22);
    byte_4217007 = 1;
  }
  v81 = 0;
  v79 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_50;
  v26 = *((_DWORD *)Instance + 5);
  v27 = (AiActEntity_o *)Instance;
  v28 = (BattleSkillInfoData_o *)sub_B0D974(BattleSkillInfoData_TypeInfo, v24, v25);
  BattleSkillInfoData___ctor(v28, 0LL);
  Instance = (void *)AiAct__Check(99, v27->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_50;
  aiState = fieldData->fields.aiState;
  v30 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v32 = (unsigned int)Instance;
  if ( (v30 & 1) != 0 )
  {
    if ( aiState )
    {
      AiState__changeThinking(aiState, (int32_t)Instance, 0LL);
      return this->fields.emptyTask;
    }
    goto LABEL_50;
  }
  if ( (int)Instance >= 1 )
  {
    Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
    if ( !aiState )
      goto LABEL_50;
    AiState__changeThinking(aiState, (int32_t)Instance, 0LL);
  }
  v34 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v32, v31);
  WeightRate_int____ctor(v34, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v26 - 40) >= 2 )
  {
    if ( v26 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_50;
      data->fields.endbattleFlg = 1;
      v43 = this->fields.data;
      if ( !v43 )
        goto LABEL_50;
      v26 = 91;
      v43->fields.loseBattleFlg = 1;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v26, v36) )
    {
      v26 = 0;
    }
  }
  else
  {
    skillVals = (int *)v27->fields.skillVals;
    if ( !skillVals )
      goto LABEL_50;
    if ( skillVals[6] < 2 )
      goto LABEL_26;
    v39 = skillVals[8];
    v38 = skillVals[9];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v39, v38, 0LL);
    if ( Instance )
    {
      if ( !v28 )
        goto LABEL_50;
      v28->fields.type = 20;
      uniqueId = fieldData->fields.uniqueId;
      klass = v28->klass;
      v28->fields.index = 0;
      v28->fields.svtUniqueId = uniqueId;
      ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
        v28,
        v39,
        klass->vtable._5_get_skillId.methodPtr);
      v28->fields.skilllv = v38;
    }
    else
    {
LABEL_26:
      v26 = 0;
    }
  }
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0LL) )
    goto LABEL_33;
  Instance = this->fields.data;
  if ( !Instance )
    goto LABEL_50;
  if ( BattleData__checkEnablePlaySpeedOneFromFieldIdList(
         (BattleData_o *)Instance,
         aiEnt->fields.id,
         aiEnt->fields.idx,
         0LL) )
  {
    isForcedSkillSpeedOne = AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0LL);
  }
  else
  {
LABEL_33:
    isForcedSkillSpeedOne = AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL);
  }
  v48 = isForcedSkillSpeedOne;
  v49 = sub_B0D974(BattleLogicTask_TypeInfo, v46, v47);
  BattleLogicTask___ctor((BattleLogicTask_o *)v49, 0LL);
  if ( !v49
    || (*(_BYTE *)(v49 + 160) = v48,
        infoText = (System_Int32_array **)aiEnt->fields.infoText,
        *(_QWORD *)(v49 + 152) = infoText,
        sub_B0D840((BattleServantConfConponent_o *)(v49 + 152), infoText, v50, v51, v52, v53, v54, v55),
        BattleLogicTask__setActor((BattleLogicTask_o *)v49, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_50:
    sub_B0D97C(Instance);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v26, aiEnt->fields.aiActId, 0LL);
  if ( v26 != 71 )
  {
    isSkillType = AiAct__isSkillType(v26, 0LL);
    if ( v28 && isSkillType )
    {
      target = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      v79 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                           this,
                           v28,
                           (AiBaseEntity_o *)aiEnt,
                           v27,
                           fieldData,
                           &target,
                           &v79,
                           v71);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        BattleLogicFieldAi__AddAiFieldScriptTask(
          this,
          aiEnt,
          (System_Collections_Generic_List_BattleLogicTask__o *)v44,
          v48,
          (BattleLogicTask_o *)v49,
          v72);
        BattleLogicBaseAi__SetSkillSelectAddIndex(v73, v28, (AiBaseEntity_o *)aiEnt, v74);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v49, v28, target, v79, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v49, 5, fieldData->fields.uniqueId, 0LL);
        if ( !v44 )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v44,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v75);
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
    }
    else
    {
      v76 = (FieldAiActArgument_o *)sub_B0D974(FieldAiActArgument_TypeInfo, v69, v70);
      FieldAiActArgument___ctor(v76, v27, (AiBaseEntity_o *)aiEnt, fieldData, v48, 0LL);
      BattleLogicBaseAi__SetProcAiActTask(
        (BattleLogicBaseAi_o *)this,
        (System_Collections_Generic_List_BattleLogicTask__o *)v44,
        v26,
        (BaseAiActArgument_o *)v76,
        v77);
      BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v78);
    }
    goto LABEL_48;
  }
  Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
  v81 = (int)Instance;
  if ( (int)Instance < 1 )
  {
LABEL_48:
    if ( !v44 )
      goto LABEL_50;
    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v44,
    v48,
    (BattleLogicTask_o *)v49,
    v57);
  v58 = System_Int32__ToString((int32_t)&v81, 0LL);
  v59 = System_String__Concat_43849904((System_String_o *)StringLiteral_8809/*"MOTION_"*/, v58, 0LL);
  BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v49, v59, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_50;
  Instance = logic->fields.perf;
  if ( !Instance )
    goto LABEL_50;
  ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                               (BattlePerformance_o *)Instance,
                                               fieldData->fields.uniqueId,
                                               0LL);
  *(_QWORD *)(v49 + 112) = ServantGameObject;
  sub_B0D840((BattleServantConfConponent_o *)(v49 + 112), ServantGameObject, v62, v63, v64, v65, v66, v67);
  BattleLogicTask__setActor((BattleLogicTask_o *)v49, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v44 )
    goto LABEL_50;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v44,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicFieldAi__setReactionFunction(
        BattleLogicFieldAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattleLogic_reactionFunction_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  BattleLogic_reactionFunction_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  BattleLogic_reactionFunction_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  BattleLogic_reactionFunction_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogic_reactionFunction_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  BattleLogic_reactionFunction_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  BattleLogic_reactionFunction_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  BattleLogic_reactionFunction_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  BattleLogic_reactionFunction_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  BattleLogic_reactionFunction_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  BattleLogic_reactionFunction_o *v38; // x21

  if ( (byte_4217001 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleLogicFieldAi_createBaseActionTask__, list);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_B0D8A4(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4217001 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_B0D97C(v8);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    28,
    (System_String_o *)v7,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v9, v10);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    29,
    (System_String_o *)v11,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v12, v13);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    30,
    (System_String_o *)v14,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v15, v16);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    31,
    (System_String_o *)v17,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v18, v19);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    32,
    (System_String_o *)v20,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v23 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v21, v22);
  BattleLogic_reactionFunction___ctor(v23, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    33,
    (System_String_o *)v23,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v26 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v24, v25);
  BattleLogic_reactionFunction___ctor(v26, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    34,
    (System_String_o *)v26,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v29 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v27, v28);
  BattleLogic_reactionFunction___ctor(v29, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    43,
    (System_String_o *)v29,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v32 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v30, v31);
  BattleLogic_reactionFunction___ctor(v32, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    64,
    (System_String_o *)v32,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v35 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v33, v34);
  BattleLogic_reactionFunction___ctor(v35, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    66,
    (System_String_o *)v35,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v38 = (BattleLogic_reactionFunction_o *)sub_B0D974(BattleLogic_reactionFunction_TypeInfo, v36, v37);
  BattleLogic_reactionFunction___ctor(v38, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    67,
    (System_String_o *)v38,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


void __fastcall BattleLogicFieldAi___c__DisplayClass22_0___ctor(
        BattleLogicFieldAi___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFieldAi___c__DisplayClass22_0___CheckAiCanActionFromTargets_b__0(
        BattleLogicFieldAi___c__DisplayClass22_0_o *this,
        BattleFieldData_o *f,
        const MethodInfo *method)
{
  struct AiLogic_AiInfo_o *aiInfo; // x8

  if ( !f || (aiInfo = this->fields.aiInfo) == 0LL )
    sub_B0D97C(this);
  return f->fields.index == aiInfo->fields.uniqueId;
}