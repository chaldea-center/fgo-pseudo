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
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_418A76F & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v8);
    byte_418A76F = 1;
  }
  v9 = (struct BattleLogicTask_array *)sub_B2C374(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.zeroTask,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B2C42C(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v16,
    (const MethodInfo_2E76880 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v16 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    48,
    28,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    49,
    29,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    46,
    30,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    47,
    31,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    43,
    32,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    45,
    33,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    44,
    43,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v16,
    75,
    64,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.taskDictionary,
    (System_Int32_array **)v16,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B2C42C(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v25,
    (const MethodInfo_2E76880 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v25 )
LABEL_6:
    sub_B2C434(v17, v18);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    28,
    10,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    29,
    11,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    30,
    12,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    31,
    13,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    32,
    6,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    33,
    4,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    34,
    2,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    43,
    15,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    64,
    21,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    66,
    19,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v25,
    67,
    22,
    (const MethodInfo_2E77424 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.stateDicitionary,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v32);
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
  __int64 v15; // x1
  struct BattleData_o *data; // x8
  System_Int32_array **v17; // x23
  int32_t EffectType; // w0
  int32_t v19; // w25
  __int64 v20; // x24
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
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  System_Int32_array **motionMessage; // t1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x19
  System_String_o *v44; // x19
  float v45; // s8
  float v46; // s0
  System_String_o *v47; // x19
  System_String_o *v48; // x20
  __int64 v49; // x0

  if ( (byte_418A76A & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, ent);
    sub_B2C35C(&char___TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    byte_418A76A = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    v17 = (System_Int32_array **)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v19 = EffectType;
        v20 = sub_B2C42C(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v20, 0LL);
        if ( !v20 )
          goto LABEL_33;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v20, v19, 0LL);
        *(_QWORD *)(v20 + 104) = v17;
        sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 104), v17, v21, v22, v23, v24, v25, v26);
        *(_BYTE *)(v20 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v20 + 188) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_33;
          motionMessage = (System_Int32_array **)mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v20 + 152) = motionMessage;
          sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 152), motionMessage, v27, v28, v29, v30, v31, v32);
          *p_motionMessage = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)p_motionMessage, 0LL, v36, v37, v38, v39, v40, v41);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retlist,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          return;
        }
LABEL_33:
        sub_B2C434(Voice, v15);
      }
    }
    if ( v17 )
    {
      Voice = (void *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !Voice )
        goto LABEL_33;
      if ( !*((_DWORD *)Voice + 6) )
        goto LABEL_34;
      *((_WORD *)Voice + 16) = 58;
      Voice = System_String__Split((System_String_o *)v17, (System_Char_array *)Voice, 0LL);
      if ( !Voice )
        goto LABEL_33;
      v42 = *((_QWORD *)Voice + 3);
      v43 = Voice;
      if ( (int)v42 < 2 )
      {
        if ( (_DWORD)v42 )
        {
          v44 = (System_String_o *)*((_QWORD *)Voice + 4);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v44, 0LL);
          return;
        }
LABEL_34:
        v49 = sub_B2C460(Voice);
        sub_B2C400(v49, 0LL);
      }
      if ( (_DWORD)v42 == 2 )
      {
        v45 = 1.0;
      }
      else
      {
        v46 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
        v42 = v43[3];
        v45 = v46;
        if ( !(_DWORD)v42 )
          goto LABEL_34;
      }
      if ( (_DWORD)v42 == 1 )
        goto LABEL_34;
      v48 = (System_String_o *)v43[4];
      v47 = (System_String_o *)v43[5];
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_24786800(v48, v47, v45, 0LL, 0LL);
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
  __int64 v12; // x1
  struct System_Int32_array *skillVals; // x8
  int32_t v14; // w22
  unsigned int v15; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_418A76C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt);
    this = (BattleLogicFieldAi_o *)sub_B2C35C(&DataManager_TypeInfo, v11);
    byte_418A76C = 1;
  }
  entity = 0LL;
  v12 = (unsigned int)*actType;
  if ( (v12 & 0xFFFFFFFE) == 40 )
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
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
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
        sub_B2C434(this, v12);
      }
    }
    goto LABEL_17;
  }
  if ( (_DWORD)v12 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v12, (const MethodInfo *)skillInfo) )
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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct BattleData_o *data; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *field_datalist; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x23
  BattleFieldData_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  BattleSkillInfoData_o *v28; // x22
  const MethodInfo *v29; // x5
  const MethodInfo *v30; // x7
  bool isSkillType; // w8
  bool v32; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-40h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-34h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_418A76E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_BattleFieldData___, aiInfo);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_AiActMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&Method_System_Func_BattleFieldData__bool___ctor__, v11);
    sub_B2C35C(&System_Func_BattleFieldData__bool__TypeInfo, v12);
    sub_B2C35C(&Method_BattleLogicFieldAi___c__DisplayClass22_0__CheckAiCanActionFromTargets_b__0__, v13);
    sub_B2C35C(&BattleLogicFieldAi___c__DisplayClass22_0_TypeInfo, v14);
    byte_418A76E = 1;
  }
  entity = 0LL;
  actType = 0;
  ptTarget = 0LL;
  target = 0LL;
  v15 = sub_B2C42C(BattleLogicFieldAi___c__DisplayClass22_0_TypeInfo);
  BattleLogicFieldAi___c__DisplayClass22_0___ctor((BattleLogicFieldAi___c__DisplayClass22_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = aiInfo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)aiInfo, v18, v19, v20, v21, v22, v23);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
    sub_B2C434(Master_WarQuestSelectionMaster, v17);
  field_datalist = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)data->fields.field_datalist;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v15,
    Method_BattleLogicFieldAi___c__DisplayClass22_0__CheckAiCanActionFromTargets_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleFieldData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (BattleFieldData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                          field_datalist,
                                                                                          (System_Func_T__bool__o *)v26,
                                                                                          (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_BattleFieldData___);
  v28 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v28, 0LL);
  BattleLogicFieldAi__CheckAiActType(
    this,
    (AiActEntity_o *)entity,
    v28,
    USFGOActorBattleActionEventConditional_OverwriteParamCondition,
    &actType,
    v29);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v32 = 1;
  if ( v28 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v28,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             USFGOActorBattleActionEventConditional_OverwriteParamCondition,
             &target,
             &ptTarget,
             v30);
  }
  return v32;
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
    sub_B2C434(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21171696(
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
  __int64 v20; // x1
  SkillLvMaster_o *v21; // x19
  SkillLvEntity_o *v22; // x26
  __int64 v23; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x27
  int v25; // w21
  __int64 v26; // x8
  unsigned __int64 v27; // x20
  char v28; // w27
  __int64 v30; // x28
  BattleLogicTarget_o *logictarget; // x19
  int32_t v32; // w20
  System_Int32_array *targetIndividuality; // x25
  int32_t uniqueId; // w26
  System_Int32_array *FieldEnemyServantIDList; // x22
  char v36; // w27
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BattleData_o *data; // x8
  BattleLogicTarget_o *v44; // x19
  int32_t v45; // w20
  System_Int32_array *v46; // x25
  int32_t v47; // w24
  __int64 v48; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  AiLogic_o *aiLogic; // x19
  __int64 v57; // x0
  bool IsDeadToEnableUpHate; // [xsp+20h] [xbp-80h]
  char v59; // [xsp+24h] [xbp-7Ch]
  BattleFieldData_o *v60; // [xsp+28h] [xbp-78h]
  BattleServantConfConponent_o *v61; // [xsp+30h] [xbp-70h]
  BattleServantConfConponent_o *v62; // [xsp+38h] [xbp-68h]
  BattleLogicFieldAi_o *v63; // [xsp+40h] [xbp-60h]
  AiActEntity_o *v64; // [xsp+48h] [xbp-58h]

  if ( (byte_418A76D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v16);
    sub_B2C35C(&int___TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418A76D = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v64 = aiActEnt;
  v21 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v21 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v21, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v22 = (SkillLvEntity_o *)Instance;
  v23 = *(_QWORD *)(Instance + 32);
  v61 = (BattleServantConfConponent_o *)ptTarget;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v23 )
    goto LABEL_41;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v62 = (BattleServantConfConponent_o *)target;
  if ( *(_DWORD *)(v23 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        *(_DWORD *)(v23 + 32),
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( Instance )
  {
    Instance = FuncList__Check(43, *(_DWORD *)(Instance + 24), 0LL);
    v25 = Instance & 1;
  }
  else
  {
LABEL_13:
    v25 = 0;
  }
  v26 = *(_QWORD *)(v23 + 24);
  if ( (int)v26 < 1 )
  {
    v28 = 0;
    if ( !fieldData )
      goto LABEL_41;
  }
  else
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v26 )
        goto LABEL_42;
      if ( !v24 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v24,
                            *(_DWORD *)(v23 + 32 + 4 * v27),
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v26) = *(_DWORD *)(v23 + 24);
      if ( (__int64)++v27 >= (int)v26 )
      {
        v28 = 0;
        goto LABEL_25;
      }
    }
    v28 = 1;
LABEL_25:
    if ( !fieldData )
      goto LABEL_41;
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( (~((v25 | BattleLogic__checkFunctionTargetsAvailable(
                   (BattleLogic_o *)Instance,
                   v22->fields.funcId,
                   fieldData->fields.uniqueId,
                   0LL)) << 31 >> 31) & 7) != 0 )
    return 0;
  v60 = fieldData;
  v63 = this;
  Instance = SkillLvEntity__IsEnableTarget(v22, 0, 0LL);
  v59 = Instance;
  if ( !aiEnt )
    goto LABEL_41;
  IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
  Instance = sub_B2C374(int___TypeInfo, 1LL);
  if ( !v64 )
    goto LABEL_41;
  v30 = Instance;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  v32 = v64->fields.target;
  targetIndividuality = v64->fields.targetIndividuality;
  uniqueId = v60->fields.uniqueId;
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !logictarget )
    goto LABEL_41;
  v36 = v28 | v25;
  Instance = BattleLogicTarget__getTargetAiAct(
               logictarget,
               v32,
               uniqueId,
               targetIndividuality,
               FieldEnemyServantIDList,
               v59 & 1,
               v36,
               (System_Int32_array *)Instance,
               v64,
               IsDeadToEnableUpHate,
               0LL);
  if ( !v30 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v30 + 24) )
    goto LABEL_42;
  *(_DWORD *)(v30 + 32) = Instance;
  v62->klass = (BattleServantConfConponent_c *)v30;
  sub_B2C2F8(v62, (System_Int32_array **)v30, v37, v38, v39, v40, v41, v42);
  Instance = sub_B2C374(int___TypeInfo, 1LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_41;
  v44 = this->fields.logictarget;
  v45 = v64->fields.target;
  v46 = v64->fields.targetIndividuality;
  v47 = v60->fields.uniqueId;
  v48 = Instance;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !v44
    || (Instance = BattleLogicTarget__getTargetAiAct(
                     v44,
                     v45,
                     v47,
                     v46,
                     FieldPlayerServantIDList,
                     v59 & 1,
                     v36,
                     (System_Int32_array *)Instance,
                     v64,
                     IsDeadToEnableUpHate,
                     0LL),
        !v48) )
  {
LABEL_41:
    sub_B2C434(Instance, v20);
  }
  if ( !*(_DWORD *)(v48 + 24) )
  {
LABEL_42:
    v57 = sub_B2C460(Instance);
    sub_B2C400(v57, 0LL);
  }
  *(_DWORD *)(v48 + 32) = Instance;
  v61->klass = (BattleServantConfConponent_c *)v48;
  sub_B2C2F8(v61, (System_Int32_array **)v48, v50, v51, v52, v53, v54, v55);
  aiLogic = v63->fields.aiLogic;
  Instance = AiActEntity__GetNoTargetNoActionType(v64, 0LL);
  if ( !aiLogic )
    goto LABEL_41;
  return !AiLogic__IsNoTargetNoActionTask(
            aiLogic,
            Instance,
            (System_Int32_array *)v62->klass,
            (System_Int32_array *)v61->klass,
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_418A768 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType);
    byte_418A768 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.actiontype = actionType;
  BattleLogicTask__setActor(v5, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v5, v8);
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
      sub_B2C434(this, aiFieldEntity);
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
    sub_B2C434(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21171696(
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
    sub_B2C434(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21171696(
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
    sub_B2C434(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21171696(
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

  if ( (byte_418A765 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6);
    byte_418A765 = 1;
  }
  taskDictionary = this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
         ltype,
         (const MethodInfo_2E77688 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                       (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
                                       ltype,
                                       (const MethodInfo_2E77364 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v9);
    }
LABEL_8:
    sub_B2C434(taskDictionary, *(_QWORD *)&ltype);
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
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_418A764 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v6);
    byte_418A764 = 1;
  }
  v7 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.actiontype = actionType,
        BattleLogicTask__setActor(v7, 5, index, 0LL),
        (v8 = sub_B2C374(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_B2C434(v8, v9);
  }
  v10 = v8;
  v11 = sub_B2C41C(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
  if ( !v11 )
  {
    v19 = sub_B2C454(0LL);
    sub_B2C400(v19, 0LL);
  }
  if ( !*(_DWORD *)(v10 + 24) )
  {
    v20 = sub_B2C460(v11);
    sub_B2C400(v20, 0LL);
  }
  *(_QWORD *)(v10 + 32) = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)v7, v12, v13, v14, v15, v16, v17);
  return (BattleLogicTask_array *)v10;
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
  int32_t v10; // w23
  unsigned int v11; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v15; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x22
  struct BattleData_o *v17; // x8
  AiFieldEntity_o *Action_21172764; // x0
  const MethodInfo *v19; // x3
  int32_t v20; // w4
  const MethodInfo *v21; // x5
  __int64 v23; // x0

  v4 = this;
  if ( (byte_418A766 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicFieldAi_o *)sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_418A766 = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
         task->fields.actiontype,
         (const MethodInfo_2E77688 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                     (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_2E77364 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v10 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0LL);
      v11 = (unsigned int)this;
    }
    else
    {
      v11 = 0;
    }
    data = v4->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v11 < (int)max_length )
    {
      if ( v11 >= max_length )
      {
        v23 = sub_B2C460(this);
        sub_B2C400(v23, 0LL);
      }
      v15 = field_datalist->m_Items[v11];
      v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v16,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v17 = v4->fields.data;
      if ( v17 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_21172764 = AiLogic__getAction_21172764(
                              (AiLogic_o *)this,
                              v15,
                              v10,
                              v17->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_21172764 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v15,
                                             Action_21172764,
                                             (int32_t)v19,
                                             v20,
                                             v21);
            if ( !v16 )
              goto LABEL_22;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_21172764,
                                           task->fields.actiontype,
                                           v11 + 1,
                                           v19);
          if ( v16 )
          {
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_B2C434(this, task);
    }
  }
  return v4->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createDeadActionTask(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_418A767 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, method);
    byte_418A767 = 1;
  }
  v3 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.actiontype = 34;
  BattleLogicTask__setActor(v3, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v3, v6);
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
  __int64 v17; // x8
  unsigned __int64 v18; // x25
  bool v19; // w26
  int32_t v20; // w24
  __int64 v21; // x23
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
  __int64 v35; // x0

  if ( (byte_418A76B & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, targetIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_418A76B = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_14;
  v17 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v19 = isForcedSpeedOne;
    do
    {
      if ( v18 >= (unsigned int)v17 )
      {
        v35 = sub_B2C460(v15);
        sub_B2C400(v35, 0LL);
      }
      v20 = targetIds->m_Items[v18 + 1];
      if ( (v20 & 0x80000000) == 0 )
      {
        v21 = sub_B2C42C(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v21, 0LL);
        if ( !v21 )
          goto LABEL_14;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v21, 0LL);
        *(_QWORD *)(v21 + 72) = skillInfo;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v21 + 72),
          (System_Int32_array **)skillInfo,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        BattleLogicTask__setActor((BattleLogicTask_o *)v21, 5, v20, 0LL);
        *(_QWORD *)(v21 + 152) = motionMessage;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v21 + 152),
          (System_Int32_array **)motionMessage,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        *(_BYTE *)(v21 + 160) = v19;
        if ( !v14 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v17) = targetIds->max_length;
    }
    while ( (__int64)++v18 < (int)v17 );
  }
  if ( !v14 )
LABEL_14:
    sub_B2C434(v15, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v25; // w25
  AiActEntity_o *v26; // x23
  BattleSkillInfoData_o *v27; // x22
  AiState_o *aiState; // x24
  char v29; // w26
  WeightRate_int__o *v31; // x0
  const MethodInfo *v32; // x2
  int *skillVals; // x8
  int32_t v34; // w24
  unsigned int v35; // w26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  struct BattleData_o *data; // x9
  struct BattleData_o *v39; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x24
  bool isForcedSkillSpeedOne; // w0
  bool v42; // w27
  __int64 v43; // x26
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **infoText; // x1
  const MethodInfo *v51; // x5
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  bool isSkillType; // w0
  const MethodInfo *v63; // x7
  const MethodInfo *v64; // x5
  BattleLogicBaseAi_o *v65; // x0
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x2
  FieldAiActArgument_o *v68; // x22
  const MethodInfo *v69; // x4
  const MethodInfo *v70; // x2
  System_Int32_array *v71; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-58h] BYREF
  int v73; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_418A769 & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, fieldData);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v12);
    sub_B2C35C(&FieldAiActArgument_TypeInfo, v13);
    sub_B2C35C(&int___TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v20);
    sub_B2C35C(&WeightRate_int__TypeInfo, v21);
    sub_B2C35C(&StringLiteral_8787/*"MOTION_"*/, v22);
    byte_418A769 = 1;
  }
  v73 = 0;
  v71 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_50;
  v25 = *((_DWORD *)Instance + 5);
  v26 = (AiActEntity_o *)Instance;
  v27 = (BattleSkillInfoData_o *)sub_B2C42C(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v27, 0LL);
  Instance = (void *)AiAct__Check(99, v26->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_50;
  aiState = fieldData->fields.aiState;
  v29 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v24 = (unsigned int)Instance;
  if ( (v29 & 1) != 0 )
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
  v31 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v31, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v25 - 40) >= 2 )
  {
    if ( v25 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_50;
      data->fields.endbattleFlg = 1;
      v39 = this->fields.data;
      if ( !v39 )
        goto LABEL_50;
      v25 = 91;
      v39->fields.loseBattleFlg = 1;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v25, v32) )
    {
      v25 = 0;
    }
  }
  else
  {
    skillVals = (int *)v26->fields.skillVals;
    if ( !skillVals )
      goto LABEL_50;
    if ( skillVals[6] < 2 )
      goto LABEL_26;
    v35 = skillVals[8];
    v34 = skillVals[9];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v35, v34, 0LL);
    if ( Instance )
    {
      if ( !v27 )
        goto LABEL_50;
      v27->fields.type = 20;
      uniqueId = fieldData->fields.uniqueId;
      klass = v27->klass;
      v27->fields.index = 0;
      v27->fields.svtUniqueId = uniqueId;
      ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
        v27,
        v35,
        klass->vtable._5_get_skillId.methodPtr);
      v27->fields.skilllv = v34;
    }
    else
    {
LABEL_26:
      v25 = 0;
    }
  }
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v42 = isForcedSkillSpeedOne;
  v43 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v43, 0LL);
  if ( !v43
    || (*(_BYTE *)(v43 + 160) = v42,
        infoText = (System_Int32_array **)aiEnt->fields.infoText,
        *(_QWORD *)(v43 + 152) = infoText,
        sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 152), infoText, v44, v45, v46, v47, v48, v49),
        BattleLogicTask__setActor((BattleLogicTask_o *)v43, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_50:
    sub_B2C434(Instance, v24);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v25, aiEnt->fields.aiActId, 0LL);
  if ( v25 != 71 )
  {
    isSkillType = AiAct__isSkillType(v25, 0LL);
    if ( v27 && isSkillType )
    {
      target = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      v71 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                           this,
                           v27,
                           (AiBaseEntity_o *)aiEnt,
                           v26,
                           fieldData,
                           &target,
                           &v71,
                           v63);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        BattleLogicFieldAi__AddAiFieldScriptTask(
          this,
          aiEnt,
          (System_Collections_Generic_List_BattleLogicTask__o *)v40,
          v42,
          (BattleLogicTask_o *)v43,
          v64);
        BattleLogicBaseAi__SetSkillSelectAddIndex(v65, v27, (AiBaseEntity_o *)aiEnt, v66);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v43, v27, target, v71, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v43, 5, fieldData->fields.uniqueId, 0LL);
        if ( !v40 )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v67);
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
    }
    else
    {
      v68 = (FieldAiActArgument_o *)sub_B2C42C(FieldAiActArgument_TypeInfo);
      FieldAiActArgument___ctor(v68, v26, (AiBaseEntity_o *)aiEnt, fieldData, v42, 0LL);
      BattleLogicBaseAi__SetProcAiActTask(
        (BattleLogicBaseAi_o *)this,
        (System_Collections_Generic_List_BattleLogicTask__o *)v40,
        v25,
        (BaseAiActArgument_o *)v68,
        v69);
      BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v70);
    }
    goto LABEL_48;
  }
  Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
  v73 = (int)Instance;
  if ( (int)Instance < 1 )
  {
LABEL_48:
    if ( !v40 )
      goto LABEL_50;
    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v40,
    v42,
    (BattleLogicTask_o *)v43,
    v51);
  v52 = System_Int32__ToString((int32_t)&v73, 0LL);
  v53 = System_String__Concat_44305532((System_String_o *)StringLiteral_8787/*"MOTION_"*/, v52, 0LL);
  BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v43, v53, 0LL);
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
  *(_QWORD *)(v43 + 112) = ServantGameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v43 + 112), ServantGameObject, v56, v57, v58, v59, v60, v61);
  BattleLogicTask__setActor((BattleLogicTask_o *)v43, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v40 )
    goto LABEL_50;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v40,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogic_reactionFunction_o *v10; // x21
  BattleLogic_reactionFunction_o *v11; // x21
  BattleLogic_reactionFunction_o *v12; // x21
  BattleLogic_reactionFunction_o *v13; // x21
  BattleLogic_reactionFunction_o *v14; // x21
  BattleLogic_reactionFunction_o *v15; // x21
  BattleLogic_reactionFunction_o *v16; // x21
  BattleLogic_reactionFunction_o *v17; // x21
  BattleLogic_reactionFunction_o *v18; // x21
  BattleLogic_reactionFunction_o *v19; // x21

  if ( (byte_418A763 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleLogicFieldAi_createBaseActionTask__, list);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_B2C35C(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_418A763 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_B2C434(v8, v9);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    28,
    (System_String_o *)v7,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    29,
    (System_String_o *)v10,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    30,
    (System_String_o *)v11,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    31,
    (System_String_o *)v12,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    32,
    (System_String_o *)v13,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    33,
    (System_String_o *)v14,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    34,
    (System_String_o *)v15,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    43,
    (System_String_o *)v16,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    64,
    (System_String_o *)v17,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    66,
    (System_String_o *)v18,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_B2C42C(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    67,
    (System_String_o *)v19,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_B2C434(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}