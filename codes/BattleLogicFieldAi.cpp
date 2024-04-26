void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4353853 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
    byte_4353853 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_B706AC(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.zeroTask, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B70764(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v10,
    (const MethodInfo_2F6D8C0 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v10 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    48,
    28,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    49,
    29,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    46,
    30,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    47,
    31,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    43,
    32,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    45,
    33,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    44,
    43,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    75,
    64,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v10,
    76,
    70,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.taskDictionary,
    (System_Int32_array **)v10,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B70764(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v19,
    (const MethodInfo_2F6D8C0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v19 )
LABEL_6:
    sub_B7076C(v11, v12);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    28,
    10,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    29,
    11,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    30,
    12,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    31,
    13,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    32,
    6,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    33,
    4,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    34,
    2,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    43,
    15,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    64,
    21,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    66,
    19,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    67,
    22,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v19,
    70,
    23,
    (const MethodInfo_2F6E464 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.stateDicitionary,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v26);
}


void __fastcall BattleLogicFieldAi__AddAiFieldScriptTask(
        BattleLogicFieldAi_o *this,
        AiFieldEntity_o *ent,
        System_Collections_Generic_List_BattleLogicTask__o *retlist,
        bool isForcedSpeedOne,
        BattleLogicTask_o *mainTask,
        const MethodInfo *method)
{
  void *Voice; // x0
  __int64 v12; // x1
  struct BattleData_o *data; // x8
  System_Int32_array **v14; // x23
  int32_t EffectType; // w0
  int32_t v16; // w25
  __int64 v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  System_Int32_array **motionMessage; // t1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x8
  _QWORD *v40; // x19
  System_String_o *v41; // x19
  float v42; // s8
  float v43; // s0
  System_String_o *v44; // x19
  System_String_o *v45; // x20
  __int64 v46; // x0

  if ( (byte_435384E & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435384E = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    v14 = (System_Int32_array **)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v16 = EffectType;
        v17 = sub_B70764(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0LL);
        if ( !v17 )
          goto LABEL_33;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v17, v16, 0LL);
        *(_QWORD *)(v17 + 104) = v14;
        sub_B70630((BattleServantConfConponent_o *)(v17 + 104), v14, v18, v19, v20, v21, v22, v23);
        *(_BYTE *)(v17 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v17 + 188) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_33;
          motionMessage = (System_Int32_array **)mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v17 + 152) = motionMessage;
          sub_B70630((BattleServantConfConponent_o *)(v17 + 152), motionMessage, v24, v25, v26, v27, v28, v29);
          *p_motionMessage = 0LL;
          sub_B70630((BattleServantConfConponent_o *)p_motionMessage, 0LL, v33, v34, v35, v36, v37, v38);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retlist,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          return;
        }
LABEL_33:
        sub_B7076C(Voice, v12);
      }
    }
    if ( v14 )
    {
      Voice = (void *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !Voice )
        goto LABEL_33;
      if ( !*((_DWORD *)Voice + 6) )
        goto LABEL_34;
      *((_WORD *)Voice + 16) = 58;
      Voice = System_String__Split((System_String_o *)v14, (System_Char_array *)Voice, 0LL);
      if ( !Voice )
        goto LABEL_33;
      v39 = *((_QWORD *)Voice + 3);
      v40 = Voice;
      if ( (int)v39 < 2 )
      {
        if ( (_DWORD)v39 )
        {
          v41 = (System_String_o *)*((_QWORD *)Voice + 4);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v41, 0LL);
          return;
        }
LABEL_34:
        v46 = sub_B70798(Voice);
        sub_B70738(v46, 0LL);
      }
      if ( (_DWORD)v39 == 2 )
      {
        v42 = 1.0;
      }
      else
      {
        v43 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
        v39 = v40[3];
        v42 = v43;
        if ( !(_DWORD)v39 )
          goto LABEL_34;
      }
      if ( (_DWORD)v39 == 1 )
        goto LABEL_34;
      v45 = (System_String_o *)v40[4];
      v44 = (System_String_o *)v40[5];
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_23183232(v45, v44, v42, 0LL, 0LL);
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
  struct System_Int32_array *skillVals; // x8
  int32_t v13; // w22
  unsigned int v14; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4353850 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_SkillLvMaster___);
    this = (BattleLogicFieldAi_o *)sub_B70694(&DataManager_TypeInfo);
    byte_4353850 = 1;
  }
  entity = 0LL;
  v11 = (unsigned int)*actType;
  if ( (v11 & 0xFFFFFFFE) == 40 )
  {
    if ( !aiActEnt )
      goto LABEL_19;
    skillVals = aiActEnt->fields.skillVals;
    if ( !skillVals )
      goto LABEL_19;
    if ( (int)skillVals->max_length > 1 )
    {
      v14 = skillVals->m_Items[1];
      v13 = skillVals->m_Items[2];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !this )
        goto LABEL_19;
      this = (BattleLogicFieldAi_o *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v14, v13, 0LL);
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
              v14,
              klass->vtable._5_get_skillId.methodPtr);
            skillInfo->fields.skilllv = v13;
            return;
          }
        }
LABEL_19:
        sub_B7076C(this, v11);
      }
    }
    goto LABEL_17;
  }
  if ( (_DWORD)v11 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v11, (const MethodInfo *)skillInfo) )
LABEL_17:
    *actType = 0;
}


bool __fastcall BattleLogicFieldAi__CheckAiCanActionFromTargets(
        BattleLogicFieldAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleData_o *data; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *field_datalist; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x23
  BattleFieldData_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  BattleSkillInfoData_o *v20; // x22
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x7
  bool isSkillType; // w8
  bool v24; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-40h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-34h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4353852 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_BattleFieldData___);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_AiActMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Func_BattleFieldData__bool___ctor__);
    sub_B70694(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_B70694(&Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__);
    sub_B70694(&BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo);
    byte_4353852 = 1;
  }
  entity = 0LL;
  actType = 0;
  ptTarget = 0LL;
  target = 0LL;
  v7 = sub_B70764(BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo);
  BattleLogicFieldAi___c__DisplayClass24_0___ctor((BattleLogicFieldAi___c__DisplayClass24_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = aiInfo;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)aiInfo, v10, v11, v12, v13, v14, v15);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
    sub_B7076C(Master_WarQuestSelectionMaster, v9);
  field_datalist = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)data->fields.field_datalist;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleFieldData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (BattleFieldData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                          field_datalist,
                                                                                          (System_Func_T__bool__o *)v18,
                                                                                          (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_BattleFieldData___);
  v20 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v20, 0LL);
  BattleLogicFieldAi__CheckAiActType(
    this,
    (AiActEntity_o *)entity,
    v20,
    USFGOActorBattleActionEventConditional_OverwriteParamCondition,
    &actType,
    v21);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v24 = 1;
  if ( v20 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v20,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             USFGOActorBattleActionEventConditional_OverwriteParamCondition,
             &target,
             &ptTarget,
             v22);
  }
  return v24;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__CheckFieldAIBeforeWaveStartAnimation(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleLogicFieldAi__GetCommonFieldAiTask(this, 23, 76, v2);
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
    sub_B7076C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21385584(
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
  __int64 Instance; // x0
  __int64 v16; // x1
  SkillLvMaster_o *v17; // x19
  SkillLvEntity_o *v18; // x26
  __int64 v19; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x27
  int v21; // w21
  __int64 v22; // x8
  unsigned __int64 v23; // x20
  char v24; // w27
  __int64 v26; // x28
  BattleLogicTarget_o *logictarget; // x19
  int32_t v28; // w20
  System_Int32_array *targetIndividuality; // x25
  int32_t uniqueId; // w26
  System_Int32_array *FieldEnemyServantIDList; // x22
  char v32; // w27
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleData_o *data; // x8
  BattleLogicTarget_o *v40; // x19
  int32_t v41; // w20
  System_Int32_array *v42; // x25
  int32_t v43; // w24
  __int64 v44; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  AiLogic_o *aiLogic; // x19
  __int64 v53; // x0
  bool IsDeadToEnableUpHate; // [xsp+20h] [xbp-80h]
  char v55; // [xsp+24h] [xbp-7Ch]
  BattleFieldData_o *v56; // [xsp+28h] [xbp-78h]
  BattleServantConfConponent_o *v57; // [xsp+30h] [xbp-70h]
  BattleServantConfConponent_o *v58; // [xsp+38h] [xbp-68h]
  BattleLogicFieldAi_o *v59; // [xsp+40h] [xbp-60h]
  AiActEntity_o *v60; // [xsp+48h] [xbp-58h]

  if ( (byte_4353851 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353851 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v60 = aiActEnt;
  v17 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v17 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v17, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v18 = (SkillLvEntity_o *)Instance;
  v19 = *(_QWORD *)(Instance + 32);
  v57 = (BattleServantConfConponent_o *)ptTarget;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v19 )
    goto LABEL_41;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v58 = (BattleServantConfConponent_o *)target;
  if ( *(_DWORD *)(v19 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        *(_DWORD *)(v19 + 32),
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( Instance )
  {
    Instance = FuncList__Check(43, *(_DWORD *)(Instance + 24), 0LL);
    v21 = Instance & 1;
  }
  else
  {
LABEL_13:
    v21 = 0;
  }
  v22 = *(_QWORD *)(v19 + 24);
  if ( (int)v22 < 1 )
  {
    v24 = 0;
    if ( !fieldData )
      goto LABEL_41;
  }
  else
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v22 )
        goto LABEL_42;
      if ( !v20 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v20,
                            *(_DWORD *)(v19 + 32 + 4 * v23),
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v22) = *(_DWORD *)(v19 + 24);
      if ( (__int64)++v23 >= (int)v22 )
      {
        v24 = 0;
        goto LABEL_25;
      }
    }
    v24 = 1;
LABEL_25:
    if ( !fieldData )
      goto LABEL_41;
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( (~((v21 | BattleLogic__checkFunctionTargetsAvailable(
                   (BattleLogic_o *)Instance,
                   v18->fields.funcId,
                   fieldData->fields.uniqueId,
                   0LL)) << 31 >> 31) & 7) != 0 )
    return 0;
  v56 = fieldData;
  v59 = this;
  Instance = SkillLvEntity__IsEnableTarget(v18, 0, 0LL);
  v55 = Instance;
  if ( !aiEnt )
    goto LABEL_41;
  IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
  Instance = sub_B706AC(int___TypeInfo, 1LL);
  if ( !v60 )
    goto LABEL_41;
  v26 = Instance;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  v28 = v60->fields.target;
  targetIndividuality = v60->fields.targetIndividuality;
  uniqueId = v56->fields.uniqueId;
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !logictarget )
    goto LABEL_41;
  v32 = v24 | v21;
  Instance = BattleLogicTarget__getTargetAiAct(
               logictarget,
               v28,
               uniqueId,
               targetIndividuality,
               FieldEnemyServantIDList,
               v55 & 1,
               v32,
               (System_Int32_array *)Instance,
               v60,
               IsDeadToEnableUpHate,
               0LL);
  if ( !v26 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_42;
  *(_DWORD *)(v26 + 32) = Instance;
  v58->klass = (BattleServantConfConponent_c *)v26;
  sub_B70630(v58, (System_Int32_array **)v26, v33, v34, v35, v36, v37, v38);
  Instance = sub_B706AC(int___TypeInfo, 1LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_41;
  v40 = this->fields.logictarget;
  v41 = v60->fields.target;
  v42 = v60->fields.targetIndividuality;
  v43 = v56->fields.uniqueId;
  v44 = Instance;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !v40
    || (Instance = BattleLogicTarget__getTargetAiAct(
                     v40,
                     v41,
                     v43,
                     v42,
                     FieldPlayerServantIDList,
                     v55 & 1,
                     v32,
                     (System_Int32_array *)Instance,
                     v60,
                     IsDeadToEnableUpHate,
                     0LL),
        !v44) )
  {
LABEL_41:
    sub_B7076C(Instance, v16);
  }
  if ( !*(_DWORD *)(v44 + 24) )
  {
LABEL_42:
    v53 = sub_B70798(Instance);
    sub_B70738(v53, 0LL);
  }
  *(_DWORD *)(v44 + 32) = Instance;
  v57->klass = (BattleServantConfConponent_c *)v44;
  sub_B70630(v57, (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
  aiLogic = v59->fields.aiLogic;
  Instance = AiActEntity__GetNoTargetNoActionType(v60, 0LL);
  if ( !aiLogic )
    goto LABEL_41;
  return !AiLogic__IsNoTargetNoActionTask(
            aiLogic,
            Instance,
            (System_Int32_array *)v58->klass,
            (System_Int32_array *)v57->klass,
            0LL);
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__CreateActionTasks(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_435384B & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    byte_435384B = 1;
  }
  v5 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
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
      sub_B7076C(this, aiFieldEntity);
    }
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__GetCommonFieldAiTask(
        BattleLogicFieldAi_o *this,
        int32_t prcState,
        int32_t logicType,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleData_o *data; // x8
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *field_datalist; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x23
  BattleData_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_435384D & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_BattleFieldData___);
    sub_B70694(&Method_System_Func_BattleFieldData__bool___ctor__);
    sub_B70694(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_B70694(&Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__);
    sub_B70694(&BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo);
    byte_435384D = 1;
  }
  v7 = sub_B70764(BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo);
  BattleLogicFieldAi___c__DisplayClass18_0___ctor((BattleLogicFieldAi___c__DisplayClass18_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_B7076C(v8, v9);
  }
  field_datalist = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)data->fields.field_datalist;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleFieldData__bool___ctor__);
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         field_datalist,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_BattleFieldData___) )
  {
    return BattleLogicFieldAi__checkFieldAiTask(this, logicType, v19, v20);
  }
  else
  {
    return this->fields.zeroTask;
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
    sub_B7076C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21385584(
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
    sub_B7076C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21385584(
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
    sub_B7076C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21385584(
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
  struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4353848 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
    byte_4353848 = 1;
  }
  taskDictionary = this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
         ltype,
         (const MethodInfo_2F6E6C8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                       (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
                                       ltype,
                                       (const MethodInfo_2F6E3A4 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v8);
    }
LABEL_8:
    sub_B7076C(taskDictionary, *(_QWORD *)&ltype);
  }
  return this->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBase(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        int32_t index,
        const MethodInfo *method)
{
  BattleLogicTask_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_4353847 & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask___TypeInfo);
    sub_B70694(&BattleLogicTask_TypeInfo);
    byte_4353847 = 1;
  }
  v6 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0LL);
  if ( !v6
    || (v6->fields.actiontype = actionType,
        BattleLogicTask__setActor(v6, 5, index, 0LL),
        (v7 = sub_B706AC(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_B7076C(v7, v8);
  }
  v9 = v7;
  v10 = sub_B70754(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
  if ( !v10 )
  {
    v18 = sub_B7078C(0LL);
    sub_B70738(v18, 0LL);
  }
  if ( !*(_DWORD *)(v9 + 24) )
  {
    v19 = sub_B70798(v10);
    sub_B70738(v19, 0LL);
  }
  *(_QWORD *)(v9 + 32) = v6;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)v6, v11, v12, v13, v14, v15, v16);
  return (BattleLogicTask_array *)v9;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBaseActionTask(
        BattleLogicFieldAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicFieldAi_o *v4; // x20
  int32_t v5; // w23
  unsigned int v6; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v10; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  struct BattleData_o *v12; // x8
  AiFieldEntity_o *Action_21386652; // x0
  const MethodInfo *v14; // x3
  int32_t v15; // w4
  const MethodInfo *v16; // x5
  __int64 v18; // x0

  v4 = this;
  if ( (byte_4353849 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicFieldAi_o *)sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4353849 = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
         task->fields.actiontype,
         (const MethodInfo_2F6E6C8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                     (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_2F6E3A4 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v5 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0LL);
      v6 = (unsigned int)this;
    }
    else
    {
      v6 = 0;
    }
    data = v4->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v6 < (int)max_length )
    {
      if ( v6 >= max_length )
      {
        v18 = sub_B70798(this);
        sub_B70738(v18, 0LL);
      }
      v10 = field_datalist->m_Items[v6];
      v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v11,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v12 = v4->fields.data;
      if ( v12 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_21386652 = AiLogic__getAction_21386652(
                              (AiLogic_o *)this,
                              v10,
                              v5,
                              v12->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_21386652 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v10,
                                             Action_21386652,
                                             (int32_t)v14,
                                             v15,
                                             v16);
            if ( !v11 )
              goto LABEL_22;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_21386652,
                                           task->fields.actiontype,
                                           v6 + 1,
                                           v14);
          if ( v11 )
          {
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                              (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_B7076C(this, task);
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

  if ( (byte_435384A & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    byte_435384A = 1;
  }
  v3 = (BattleLogicTask_o *)sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x25
  bool v15; // w26
  int32_t v16; // w24
  __int64 v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v31; // x0

  if ( (byte_435384F & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_435384F = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_14;
  v13 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = isForcedSpeedOne;
    do
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v31 = sub_B70798(v11);
        sub_B70738(v31, 0LL);
      }
      v16 = targetIds->m_Items[v14 + 1];
      if ( (v16 & 0x80000000) == 0 )
      {
        v17 = sub_B70764(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0LL);
        if ( !v17 )
          goto LABEL_14;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v17, 0LL);
        *(_QWORD *)(v17 + 72) = skillInfo;
        sub_B70630(
          (BattleServantConfConponent_o *)(v17 + 72),
          (System_Int32_array **)skillInfo,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        BattleLogicTask__setActor((BattleLogicTask_o *)v17, 5, v16, 0LL);
        *(_QWORD *)(v17 + 152) = motionMessage;
        sub_B70630(
          (BattleServantConfConponent_o *)(v17 + 152),
          (System_Int32_array **)motionMessage,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        *(_BYTE *)(v17 + 160) = v15;
        if ( !v10 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v13) = targetIds->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v10 )
LABEL_14:
    sub_B7076C(v11, v12);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__procAiAct(
        BattleLogicFieldAi_o *this,
        BattleFieldData_o *fieldData,
        AiFieldEntity_o *aiEnt,
        int32_t countAct,
        int32_t procState,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w25
  AiActEntity_o *v12; // x23
  BattleSkillInfoData_o *v13; // x22
  AiState_o *aiState; // x24
  char v15; // w26
  WeightRate_int__o *v17; // x0
  const MethodInfo *v18; // x2
  int *skillVals; // x8
  int32_t v20; // w24
  unsigned int v21; // w26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  struct BattleData_o *data; // x9
  struct BattleData_o *v25; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x24
  bool isForcedSkillSpeedOne; // w0
  bool v28; // w27
  __int64 v29; // x26
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **infoText; // x1
  const MethodInfo *v37; // x5
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  bool isSkillType; // w0
  const MethodInfo *v49; // x7
  const MethodInfo *v50; // x5
  BattleLogicBaseAi_o *v51; // x0
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x2
  FieldAiActArgument_o *v54; // x22
  const MethodInfo *v55; // x4
  const MethodInfo *v56; // x2
  System_Int32_array *v57; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-58h] BYREF
  int v59; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_435384C & 1) == 0 )
  {
    sub_B70694(&BattleLogicTask_TypeInfo);
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    sub_B70694(&FieldAiActArgument_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_WeightRate_int___ctor__);
    sub_B70694(&WeightRate_int__TypeInfo);
    sub_B70694(&StringLiteral_8892/*"MOTION_"*/);
    byte_435384C = 1;
  }
  v59 = 0;
  v57 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_50;
  v11 = *((_DWORD *)Instance + 5);
  v12 = (AiActEntity_o *)Instance;
  v13 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v13, 0LL);
  Instance = (void *)AiAct__Check(99, v12->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_50;
  aiState = fieldData->fields.aiState;
  v15 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v10 = (unsigned int)Instance;
  if ( (v15 & 1) != 0 )
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
  v17 = (WeightRate_int__o *)sub_B70764(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v17, (const MethodInfo_2CBC9CC *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v11 - 40) >= 2 )
  {
    if ( v11 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_50;
      data->fields.endbattleFlg = 1;
      v25 = this->fields.data;
      if ( !v25 )
        goto LABEL_50;
      v11 = 91;
      v25->fields.loseBattleFlg = 1;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v11, v18) )
    {
      v11 = 0;
    }
  }
  else
  {
    skillVals = (int *)v12->fields.skillVals;
    if ( !skillVals )
      goto LABEL_50;
    if ( skillVals[6] < 2 )
      goto LABEL_26;
    v21 = skillVals[8];
    v20 = skillVals[9];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v21, v20, 0LL);
    if ( Instance )
    {
      if ( !v13 )
        goto LABEL_50;
      v13->fields.type = 20;
      uniqueId = fieldData->fields.uniqueId;
      klass = v13->klass;
      v13->fields.index = 0;
      v13->fields.svtUniqueId = uniqueId;
      ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
        v13,
        v21,
        klass->vtable._5_get_skillId.methodPtr);
      v13->fields.skilllv = v20;
    }
    else
    {
LABEL_26:
      v11 = 0;
    }
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v28 = isForcedSkillSpeedOne;
  v29 = sub_B70764(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v29, 0LL);
  if ( !v29
    || (*(_BYTE *)(v29 + 160) = v28,
        infoText = (System_Int32_array **)aiEnt->fields.infoText,
        *(_QWORD *)(v29 + 152) = infoText,
        sub_B70630((BattleServantConfConponent_o *)(v29 + 152), infoText, v30, v31, v32, v33, v34, v35),
        BattleLogicTask__setActor((BattleLogicTask_o *)v29, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_50:
    sub_B7076C(Instance, v10);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v11, aiEnt->fields.aiActId, 0LL);
  if ( v11 != 71 )
  {
    isSkillType = AiAct__isSkillType(v11, 0LL);
    if ( v13 && isSkillType )
    {
      target = (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
      v57 = (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
      Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                           this,
                           v13,
                           (AiBaseEntity_o *)aiEnt,
                           v12,
                           fieldData,
                           &target,
                           &v57,
                           v49);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        BattleLogicFieldAi__AddAiFieldScriptTask(
          this,
          aiEnt,
          (System_Collections_Generic_List_BattleLogicTask__o *)v26,
          v28,
          (BattleLogicTask_o *)v29,
          v50);
        BattleLogicBaseAi__SetSkillSelectAddIndex(v51, v13, (AiBaseEntity_o *)aiEnt, v52);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v29, v13, target, v57, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v29, 5, fieldData->fields.uniqueId, 0LL);
        if ( !v26 )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v53);
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
    }
    else
    {
      v54 = (FieldAiActArgument_o *)sub_B70764(FieldAiActArgument_TypeInfo);
      FieldAiActArgument___ctor(v54, v12, (AiBaseEntity_o *)aiEnt, fieldData, v28, 0LL);
      BattleLogicBaseAi__SetProcAiActTask(
        (BattleLogicBaseAi_o *)this,
        (System_Collections_Generic_List_BattleLogicTask__o *)v26,
        v11,
        (BaseAiActArgument_o *)v54,
        v55);
      BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v56);
    }
    goto LABEL_48;
  }
  Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
  v59 = (int)Instance;
  if ( (int)Instance < 1 )
  {
LABEL_48:
    if ( !v26 )
      goto LABEL_50;
    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v26,
    v28,
    (BattleLogicTask_o *)v29,
    v37);
  v38 = System_Int32__ToString((int32_t)&v59, 0LL);
  v39 = System_String__Concat_44758168((System_String_o *)StringLiteral_8892/*"MOTION_"*/, v38, 0LL);
  BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v29, v39, 0LL);
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
  *(_QWORD *)(v29 + 112) = ServantGameObject;
  sub_B70630((BattleServantConfConponent_o *)(v29 + 112), ServantGameObject, v42, v43, v44, v45, v46, v47);
  BattleLogicTask__setActor((BattleLogicTask_o *)v29, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v26 )
    goto LABEL_50;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v26,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicFieldAi__setReactionFunction(
        BattleLogicFieldAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  BattleLogic_reactionFunction_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  BattleLogic_reactionFunction_o *v8; // x21
  BattleLogic_reactionFunction_o *v9; // x21
  BattleLogic_reactionFunction_o *v10; // x21
  BattleLogic_reactionFunction_o *v11; // x21
  BattleLogic_reactionFunction_o *v12; // x21
  BattleLogic_reactionFunction_o *v13; // x21
  BattleLogic_reactionFunction_o *v14; // x21
  BattleLogic_reactionFunction_o *v15; // x21
  BattleLogic_reactionFunction_o *v16; // x21
  BattleLogic_reactionFunction_o *v17; // x21
  BattleLogic_reactionFunction_o *v18; // x21

  if ( (byte_4353846 & 1) == 0 )
  {
    sub_B70694(&Method_BattleLogicFieldAi_createBaseActionTask__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_B70694(&BattleLogic_reactionFunction_TypeInfo);
    byte_4353846 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_B7076C(v6, v7);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    28,
    (System_String_o *)v5,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    29,
    (System_String_o *)v8,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    30,
    (System_String_o *)v9,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    31,
    (System_String_o *)v10,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    32,
    (System_String_o *)v11,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    33,
    (System_String_o *)v12,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    34,
    (System_String_o *)v13,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    43,
    (System_String_o *)v14,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    64,
    (System_String_o *)v15,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    66,
    (System_String_o *)v16,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    67,
    (System_String_o *)v17,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_B70764(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    70,
    (System_String_o *)v18,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


void __fastcall BattleLogicFieldAi___c__DisplayClass18_0___ctor(
        BattleLogicFieldAi___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFieldAi___c__DisplayClass18_0___GetCommonFieldAiTask_b__0(
        BattleLogicFieldAi___c__DisplayClass18_0_o *this,
        BattleFieldData_o *fieldData,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *_4__this; // x3

  _4__this = (BattleLogicBaseAi_o *)this->fields.__4__this;
  if ( !_4__this || !_4__this->fields.aiLogic )
    sub_B7076C(this, fieldData);
  return AiLogic__checkThinking_21385584(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
}


void __fastcall BattleLogicFieldAi___c__DisplayClass24_0___ctor(
        BattleLogicFieldAi___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFieldAi___c__DisplayClass24_0___CheckAiCanActionFromTargets_b__0(
        BattleLogicFieldAi___c__DisplayClass24_0_o *this,
        BattleFieldData_o *f,
        const MethodInfo *method)
{
  struct AiLogic_AiInfo_o *aiInfo; // x8

  if ( !f || (aiInfo = this->fields.aiInfo) == 0LL )
    sub_B7076C(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}