void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleLogicTask_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1

  if ( (byte_40FCDC5 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__, v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v9);
    byte_40FCDC5 = 1;
  }
  v10 = (struct BattleLogicTask_array *)sub_B17014(BattleLogicTask___TypeInfo, 0LL, v2);
  this->fields.zeroTask = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.zeroTask,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B170CC(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v17, v18, v19, v20);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v21,
    (const MethodInfo_2DFB4F0 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v21 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    48,
    28,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    49,
    29,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    46,
    30,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    47,
    31,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    43,
    32,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    45,
    33,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    44,
    43,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v21,
    75,
    64,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.taskDictionary,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B170CC(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v28, v29, v30, v31);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v32,
    (const MethodInfo_2DFB4F0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v32 )
LABEL_6:
    sub_B170D4();
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    28,
    10,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    29,
    11,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    30,
    12,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    31,
    13,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    32,
    6,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    33,
    4,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    34,
    2,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    43,
    15,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    64,
    21,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    66,
    19,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v32,
    67,
    22,
    (const MethodInfo_2DFC094 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stateDicitionary,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v39);
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
  System_String_o *Voice; // x0
  __int64 v15; // x2
  struct BattleData_o *data; // x8
  System_Int32_array **v17; // x23
  int32_t EffectType; // w0
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t v22; // w25
  __int64 v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  System_Int32_array **motionMessage; // t1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array *v45; // x0
  __int64 v46; // x2
  System_String_array *v47; // x1
  __int64 v48; // x8
  System_String_array *v49; // x19
  System_String_o *v50; // x19
  float v51; // s8
  float v52; // s0
  System_String_o *v53; // x19
  System_String_o *v54; // x20

  if ( (byte_40FCDC0 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, ent);
    sub_B16FFC(&char___TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12);
    sub_B16FFC(&SoundManager_TypeInfo, v13);
    byte_40FCDC0 = 1;
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
        v22 = EffectType;
        v23 = sub_B170CC(BattleLogicTask_TypeInfo, v19, v15, v20, v21);
        BattleLogicTask___ctor((BattleLogicTask_o *)v23, 0LL);
        if ( !v23 )
          goto LABEL_33;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v23, v22, 0LL);
        *(_QWORD *)(v23 + 104) = v17;
        sub_B16F98((BattleServantConfConponent_o *)(v23 + 104), v17, v24, v25, v26, v27, v28, v29);
        *(_BYTE *)(v23 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v23 + 176) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_33;
          motionMessage = (System_Int32_array **)mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v23 + 152) = motionMessage;
          sub_B16F98((BattleServantConfConponent_o *)(v23 + 152), motionMessage, v30, v31, v32, v33, v34, v35);
          *p_motionMessage = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)p_motionMessage, 0LL, v39, v40, v41, v42, v43, v44);
          *((_BYTE *)p_motionMessage + 28) = 1;
        }
        if ( retlist )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retlist,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          return;
        }
LABEL_33:
        sub_B170D4();
      }
    }
    if ( v17 )
    {
      v45 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v15);
      if ( !v45 )
        goto LABEL_33;
      v47 = v45;
      if ( !v45->max_length )
        goto LABEL_34;
      LOWORD(v45->m_Items[0]) = 58;
      v45 = System_String__Split((System_String_o *)v17, (System_Char_array *)v45, 0LL);
      if ( !v45 )
        goto LABEL_33;
      v48 = *(_QWORD *)&v45->max_length;
      v49 = v45;
      if ( (int)v48 < 2 )
      {
        if ( (_DWORD)v48 )
        {
          v50 = v45->m_Items[0];
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v50, 0LL);
          return;
        }
LABEL_34:
        sub_B17100(v45, v47, v46);
        sub_B170A0();
      }
      if ( (_DWORD)v48 == 2 )
      {
        v51 = 1.0;
      }
      else
      {
        v52 = System_Single__Parse(v45->m_Items[2], 0LL);
        v48 = *(_QWORD *)&v49->max_length;
        v51 = v52;
        if ( !(_DWORD)v48 )
          goto LABEL_34;
      }
      if ( (_DWORD)v48 == 1 )
        goto LABEL_34;
      v54 = v49->m_Items[0];
      v53 = v49->m_Items[1];
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_24824004(v54, v53, v51, 0LL, 0LL);
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
  __int64 v11; // x1
  int32_t v12; // w1
  struct System_Int32_array *skillVals; // x8
  int32_t v14; // w22
  unsigned int v15; // w23
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FCDC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    byte_40FCDC2 = 1;
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
      Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_19;
      if ( SkillLvMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v15, v14, 0LL) )
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
        sub_B170D4();
      }
    }
    goto LABEL_17;
  }
  if ( v12 != 90 && !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v12, (const MethodInfo *)skillInfo) )
LABEL_17:
    *actType = 0;
}


bool __fastcall BattleLogicFieldAi__CheckAiCanActionFromTargets(
        BattleLogicFieldAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
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
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct BattleData_o *data; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *field_datalist; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x23
  BattleFieldData_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  BattleSkillInfoData_o *v36; // x22
  const MethodInfo *v37; // x5
  const MethodInfo *v38; // x7
  bool isSkillType; // w8
  bool v40; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-40h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-34h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_40FCDC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_BattleFieldData___, aiInfo);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_AiActMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v11);
    sub_B16FFC(&Method_System_Func_BattleFieldData__bool___ctor__, v12);
    sub_B16FFC(&System_Func_BattleFieldData__bool__TypeInfo, v13);
    sub_B16FFC(&Method_BattleLogicFieldAi___c__DisplayClass22_0__CheckAiCanActionFromTargets_b__0__, v14);
    sub_B16FFC(&BattleLogicFieldAi___c__DisplayClass22_0_TypeInfo, v15);
    byte_40FCDC4 = 1;
  }
  entity = 0LL;
  actType = 0;
  ptTarget = 0LL;
  target = 0LL;
  v16 = sub_B170CC(BattleLogicFieldAi___c__DisplayClass22_0_TypeInfo, aiInfo, aiBaseEntity, method, v4);
  BattleLogicFieldAi___c__DisplayClass22_0___ctor((BattleLogicFieldAi___c__DisplayClass22_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_19;
  *(_QWORD *)(v16 + 16) = aiInfo;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)aiInfo, v17, v18, v19, v20, v21, v22);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  if ( !entity )
    goto LABEL_19;
  if ( !AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL) )
    return 1;
  if ( !entity || (actType = *(&entity->fields.id + 1), (data = this->fields.data) == 0LL) )
LABEL_19:
    sub_B170D4();
  field_datalist = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)data->fields.field_datalist;
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleFieldData__bool__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v16,
    Method_BattleLogicFieldAi___c__DisplayClass22_0__CheckAiCanActionFromTargets_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleFieldData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (BattleFieldData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                          field_datalist,
                                                                                          (System_Func_T__bool__o *)v30,
                                                                                          (const MethodInfo_18B650C *)Method_BasicHelper_Find_BattleFieldData___);
  v36 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v32, v33, v34, v35);
  BattleSkillInfoData___ctor(v36, 0LL);
  BattleLogicFieldAi__CheckAiActType(
    this,
    (AiActEntity_o *)entity,
    v36,
    USFGOActorBattleActionEventConditional_OverwriteParamCondition,
    &actType,
    v37);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v40 = 1;
  if ( v36 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v36,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             USFGOActorBattleActionEventConditional_OverwriteParamCondition,
             &target,
             &ptTarget,
             v38);
  }
  return v40;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__CheckFieldAiBeforeMoveWave(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *v2; // x2
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v5; // x8
  BattleLogicFieldAi_o *v6; // x19
  unsigned __int64 v7; // x21
  AiLogic_o *aiLogic; // x0
  const MethodInfo *v9; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B170D4();
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    aiLogic = v6->fields.aiLogic;
    if ( !aiLogic )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21177852(
                                     aiLogic,
                                     field_datalist->m_Items[v7],
                                     21,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 75, v2, v9);
    LODWORD(v5) = field_datalist->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return v6->fields.zeroTask;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v21; // x19
  int32_t v22; // w0
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v24; // x26
  struct System_Int32_array *funcId; // x19
  WebViewManager_o *v26; // x0
  void *TargetAiAct; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x27
  int v31; // w21
  __int64 v32; // x8
  unsigned __int64 v33; // x20
  char v34; // w27
  BattleLogic_o *logic; // x0
  __int64 v37; // x2
  __int64 v38; // x0
  __int64 v39; // x28
  BattleData_o *data; // x0
  BattleLogicTarget_o *logictarget; // x19
  int32_t v42; // w20
  System_Int32_array *targetIndividuality; // x25
  int32_t uniqueId; // w26
  System_Int32_array *FieldEnemyServantIDList; // x22
  System_Int32_array *AddIndiv; // x0
  char v47; // w27
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x2
  __int64 v54; // x0
  BattleData_o *v55; // x8
  BattleLogicTarget_o *v56; // x19
  int32_t v57; // w20
  System_Int32_array *v58; // x25
  int32_t v59; // w24
  __int64 v60; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  System_Int32_array *v62; // x0
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  AiLogic_o *aiLogic; // x19
  int32_t NoTargetNoActionType; // w0
  bool IsDeadToEnableUpHate; // [xsp+20h] [xbp-80h]
  bool IsEnableTarget; // [xsp+24h] [xbp-7Ch]
  BattleFieldData_o *v72; // [xsp+28h] [xbp-78h]
  BattleServantConfConponent_o *v73; // [xsp+30h] [xbp-70h]
  BattleServantConfConponent_o *v74; // [xsp+38h] [xbp-68h]
  BattleLogicFieldAi_o *v75; // [xsp+40h] [xbp-60h]
  AiActEntity_o *v76; // [xsp+48h] [xbp-58h]

  if ( (byte_40FCDC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v16);
    sub_B16FFC(&int___TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FCDC3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v76 = aiActEnt;
  v21 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  v22 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v21 )
    goto LABEL_41;
  Entity = SkillLvMaster__GetEntity(v21, v22, skillInfo->fields.skilllv, 0LL);
  if ( !Entity )
    goto LABEL_41;
  v24 = Entity;
  funcId = Entity->fields.funcId;
  v73 = (BattleServantConfConponent_o *)ptTarget;
  v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v26 )
    goto LABEL_41;
  TargetAiAct = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v26,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !funcId )
    goto LABEL_41;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)TargetAiAct;
  v74 = (BattleServantConfConponent_o *)target;
  if ( funcId->max_length != 1 )
    goto LABEL_13;
  if ( !TargetAiAct )
    goto LABEL_41;
  TargetAiAct = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                  (DataMasterBase_WarMaster__WarEntity__int__o *)TargetAiAct,
                  funcId->m_Items[1],
                  (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( TargetAiAct )
  {
    TargetAiAct = (void *)FuncList__Check(43, *((_DWORD *)TargetAiAct + 6), 0LL);
    v31 = (unsigned __int8)TargetAiAct & 1;
  }
  else
  {
LABEL_13:
    v31 = 0;
  }
  v32 = *(_QWORD *)&funcId->max_length;
  if ( (int)v32 < 1 )
  {
    v34 = 0;
    if ( !fieldData )
      goto LABEL_41;
  }
  else
  {
    v33 = 0LL;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v32 )
        goto LABEL_42;
      if ( !v30 )
        goto LABEL_41;
      TargetAiAct = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                      v30,
                      funcId->m_Items[v33 + 1],
                      (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( TargetAiAct )
      {
        TargetAiAct = (void *)FuncList__Check(45, *((_DWORD *)TargetAiAct + 6), 0LL);
        if ( ((unsigned __int8)TargetAiAct & 1) != 0 )
          break;
      }
      LODWORD(v32) = funcId->max_length;
      if ( (__int64)++v33 >= (int)v32 )
      {
        v34 = 0;
        goto LABEL_25;
      }
    }
    v34 = 1;
LABEL_25:
    if ( !fieldData )
      goto LABEL_41;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_41;
  if ( (~((v31 | BattleLogic__checkFunctionTargetsAvailable(logic, v24->fields.funcId, fieldData->fields.uniqueId, 0LL)) << 31 >> 31) & 7) != 0 )
    return 0;
  v72 = fieldData;
  v75 = this;
  IsEnableTarget = SkillLvEntity__IsEnableTarget(v24, 0, 0LL);
  if ( !aiEnt )
    goto LABEL_41;
  IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
  v38 = sub_B17014(int___TypeInfo, 1LL, v37);
  if ( !v76 )
    goto LABEL_41;
  v39 = v38;
  data = this->fields.data;
  if ( !data )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  v42 = v76->fields.target;
  targetIndividuality = v76->fields.targetIndividuality;
  uniqueId = v72->fields.uniqueId;
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
  AddIndiv = BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !logictarget )
    goto LABEL_41;
  v47 = v34 | v31;
  TargetAiAct = (void *)BattleLogicTarget__getTargetAiAct(
                          logictarget,
                          v42,
                          uniqueId,
                          targetIndividuality,
                          FieldEnemyServantIDList,
                          IsEnableTarget,
                          v47,
                          AddIndiv,
                          v76,
                          IsDeadToEnableUpHate,
                          0LL);
  if ( !v39 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v39 + 24) )
    goto LABEL_42;
  *(_DWORD *)(v39 + 32) = (_DWORD)TargetAiAct;
  v74->klass = (BattleServantConfConponent_c *)v39;
  sub_B16F98(v74, (System_Int32_array **)v39, v29, v48, v49, v50, v51, v52);
  v54 = sub_B17014(int___TypeInfo, 1LL, v53);
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_41;
  v56 = this->fields.logictarget;
  v57 = v76->fields.target;
  v58 = v76->fields.targetIndividuality;
  v59 = v72->fields.uniqueId;
  v60 = v54;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v55, 0LL, 0LL);
  v62 = BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !v56
    || (TargetAiAct = (void *)BattleLogicTarget__getTargetAiAct(
                                v56,
                                v57,
                                v59,
                                v58,
                                FieldPlayerServantIDList,
                                IsEnableTarget,
                                v47,
                                v62,
                                v76,
                                IsDeadToEnableUpHate,
                                0LL),
        !v60) )
  {
LABEL_41:
    sub_B170D4();
  }
  if ( !*(_DWORD *)(v60 + 24) )
  {
LABEL_42:
    sub_B17100(TargetAiAct, v28, v29);
    sub_B170A0();
  }
  *(_DWORD *)(v60 + 32) = (_DWORD)TargetAiAct;
  v73->klass = (BattleServantConfConponent_c *)v60;
  sub_B16F98(v73, (System_Int32_array **)v60, v29, v63, v64, v65, v66, v67);
  aiLogic = v75->fields.aiLogic;
  NoTargetNoActionType = AiActEntity__GetNoTargetNoActionType(v76, 0LL);
  if ( !aiLogic )
    goto LABEL_41;
  return !AiLogic__IsNoTargetNoActionTask(
            aiLogic,
            NoTargetNoActionType,
            (System_Int32_array *)v74->klass,
            (System_Int32_array *)v73->klass,
            0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicFieldAi__CreateActionTasks(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleLogicTask_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_40FCDBE & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType);
    byte_40FCDBE = 1;
  }
  v7 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, method, v3, v4);
  BattleLogicTask___ctor(v7, 0LL);
  if ( !v7 )
    sub_B170D4();
  v7->fields.actiontype = actionType;
  BattleLogicTask__setActor(v7, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v7, v8);
}


void __fastcall BattleLogicFieldAi__DefenceTargetInitialize(
        BattleLogicFieldAi_o *this,
        AiFieldEntity_o *aiFieldEntity,
        const MethodInfo *method)
{
  int FieldHp; // w19
  int32_t FieldUIId; // w0
  int32_t v7; // w2
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x0

  if ( !aiFieldEntity )
    goto LABEL_8;
  FieldHp = AiFieldEntity__GetFieldHp(aiFieldEntity, 0LL);
  FieldUIId = AiFieldEntity__GetFieldUIId(aiFieldEntity, 0LL);
  if ( FieldHp >= 1 )
  {
    v7 = FieldUIId;
    if ( FieldUIId >= 1 )
    {
      logic = this->fields.logic;
      if ( logic )
      {
        perf = logic->fields.perf;
        if ( perf )
        {
          BattlePerformance__DefenceTargetInitialize(perf, FieldHp, v7, 0LL);
          return;
        }
      }
LABEL_8:
      sub_B170D4();
    }
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__checkFieldAiEntry(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *v2; // x2
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v5; // x8
  BattleLogicFieldAi_o *v6; // x19
  unsigned __int64 v7; // x21
  AiLogic_o *aiLogic; // x0
  const MethodInfo *v9; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B170D4();
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    aiLogic = v6->fields.aiLogic;
    if ( !aiLogic )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21177852(
                                     aiLogic,
                                     field_datalist->m_Items[v7],
                                     15,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 44, v2, v9);
    LODWORD(v5) = field_datalist->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return v6->fields.zeroTask;
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__checkFieldAiStartTurn(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *v2; // x2
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v5; // x8
  BattleLogicFieldAi_o *v6; // x19
  unsigned __int64 v7; // x21
  AiLogic_o *aiLogic; // x0
  const MethodInfo *v9; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B170D4();
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    aiLogic = v6->fields.aiLogic;
    if ( !aiLogic )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21177852(
                                     aiLogic,
                                     field_datalist->m_Items[v7],
                                     4,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 45, v2, v9);
    LODWORD(v5) = field_datalist->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return v6->fields.zeroTask;
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__checkFieldAiStartWave(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *v2; // x2
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v5; // x8
  BattleLogicFieldAi_o *v6; // x19
  unsigned __int64 v7; // x21
  AiLogic_o *aiLogic; // x0
  const MethodInfo *v9; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_B170D4();
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    aiLogic = v6->fields.aiLogic;
    if ( !aiLogic )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21177852(
                                     aiLogic,
                                     field_datalist->m_Items[v7],
                                     6,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 43, v2, v9);
    LODWORD(v5) = field_datalist->max_length;
    if ( (__int64)++v7 >= (int)v5 )
      return v6->fields.zeroTask;
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
  struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *v8; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v10; // x3

  if ( (byte_40FCDBB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6);
    byte_40FCDBB = 1;
  }
  taskDictionary = this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
         ltype,
         (const MethodInfo_2DFC2F8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    v8 = this->fields.taskDictionary;
    if ( v8 )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                       (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)v8,
                                       ltype,
                                       (const MethodInfo_2DFBFD4 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v10);
    }
LABEL_8:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v7; // x1
  BattleLogicTask_o *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FCDBA & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v7);
    byte_40FCDBA = 1;
  }
  v8 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, *(_QWORD *)&index, method, v4);
  BattleLogicTask___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.actiontype = actionType,
        BattleLogicTask__setActor(v8, 5, index, 0LL),
        (v10 = sub_B17014(BattleLogicTask___TypeInfo, 1LL, v9)) == 0) )
  {
    sub_B170D4();
  }
  v11 = v10;
  v12 = sub_B170BC(v8, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
  if ( !v12 )
  {
    sub_B170F4(0LL);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v11 + 24) )
  {
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  *(_QWORD *)(v11 + 32) = v8;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)v8, v14, v15, v16, v17, v18, v19);
  return (BattleLogicTask_array *)v11;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBaseActionTask(
        BattleLogicFieldAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *stateDicitionary; // x0
  struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *v11; // x0
  __int64 Item; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t v17; // w23
  il2cpp_array_size_t v18; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v22; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  struct BattleData_o *v24; // x8
  AiLogic_o *aiLogic; // x0
  AiFieldEntity_o *Action_21178920; // x0
  const MethodInfo *v27; // x3
  int32_t v28; // w4
  const MethodInfo *v29; // x5
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_IEnumerable_T__o *Base; // x0

  if ( (byte_40FCDBC & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_40FCDBC = 1;
  }
  if ( !task )
    goto LABEL_22;
  stateDicitionary = this->fields.stateDicitionary;
  if ( !stateDicitionary )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)stateDicitionary,
         task->fields.actiontype,
         (const MethodInfo_2DFC2F8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    v11 = this->fields.stateDicitionary;
    if ( !v11 )
      goto LABEL_22;
    Item = System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
             (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)v11,
             task->fields.actiontype,
             (const MethodInfo_2DFBFD4 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v17 = Item;
    if ( task->fields.actortype == 5 )
    {
      Item = BattleLogicTask__getActorId(task, 0LL);
      v18 = Item;
    }
    else
    {
      v18 = 0;
    }
    data = this->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v18 < (int)max_length )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(Item, v13, v14);
        sub_B170A0();
      }
      v22 = field_datalist->m_Items[v18];
      v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13, v14, v15, v16);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v23,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v24 = this->fields.data;
      if ( v24 )
      {
        aiLogic = this->fields.aiLogic;
        if ( aiLogic )
        {
          Action_21178920 = AiLogic__getAction_21178920(
                              aiLogic,
                              v22,
                              v17,
                              v24->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)this,
                              0,
                              0LL);
          if ( Action_21178920 )
          {
            v30 = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__procAiAct(
                                                                   this,
                                                                   v22,
                                                                   Action_21178920,
                                                                   (int32_t)v27,
                                                                   v28,
                                                                   v29);
            if ( !v23 )
              goto LABEL_22;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
              v30,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          Base = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicFieldAi__createBase(
                                                                  (BattleLogicFieldAi_o *)Action_21178920,
                                                                  task->fields.actiontype,
                                                                  v18 + 1,
                                                                  v27);
          if ( v23 )
          {
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
              Base,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_B170D4();
    }
  }
  return this->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createDeadActionTask(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleLogicTask_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_40FCDBD & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, method);
    byte_40FCDBD = 1;
  }
  v6 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, method, v2, v3, v4);
  BattleLogicTask___ctor(v6, 0LL);
  if ( !v6 )
    sub_B170D4();
  v6->fields.actiontype = 34;
  BattleLogicTask__setActor(v6, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v6, v7);
}


int32_t __fastcall BattleLogicFieldAi__get_ActorType(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  return 5;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x8
  unsigned __int64 v21; // x25
  bool v22; // w26
  int32_t v23; // w24
  __int64 v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40FCDC1 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, targetIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_40FCDC1 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  targetIds,
                                                                                                  skillInfo,
                                                                                                  motionMessage,
                                                                                                  isForcedSpeedOne);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_14;
  v20 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    v22 = isForcedSpeedOne;
    do
    {
      if ( v21 >= (unsigned int)v20 )
      {
        sub_B17100(v15, v16, v17);
        sub_B170A0();
      }
      v23 = targetIds->m_Items[v21 + 1];
      if ( (v23 & 0x80000000) == 0 )
      {
        v24 = sub_B170CC(BattleLogicTask_TypeInfo, v16, v17, v18, v19);
        BattleLogicTask___ctor((BattleLogicTask_o *)v24, 0LL);
        if ( !v24 )
          goto LABEL_14;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v24, 0LL);
        *(_QWORD *)(v24 + 72) = skillInfo;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v24 + 72),
          (System_Int32_array **)skillInfo,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        BattleLogicTask__setActor((BattleLogicTask_o *)v24, 5, v23, 0LL);
        *(_QWORD *)(v24 + 152) = motionMessage;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v24 + 152),
          (System_Int32_array **)motionMessage,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        *(_BYTE *)(v24 + 160) = v22;
        if ( !v14 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v20) = targetIds->max_length;
    }
    while ( (__int64)++v21 < (int)v20 );
  }
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w25
  AiActEntity_o *v31; // x23
  BattleSkillInfoData_o *v32; // x22
  bool v33; // w0
  AiState_o *aiState; // x24
  bool v35; // w26
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v41; // w0
  WeightRate_int__o *v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int *skillVals; // x8
  int32_t v48; // w24
  unsigned int v49; // w26
  WebViewManager_o *v50; // x0
  SkillLvMaster_o *v51; // x0
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  struct BattleData_o *data; // x9
  struct BattleData_o *v55; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x24
  BattleData_o *v57; // x0
  bool isForcedSkillSpeedOne; // w0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  bool v63; // w27
  __int64 v64; // x26
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **infoText; // x1
  AiState_o *v72; // x0
  const MethodInfo *v73; // x5
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  struct BattleLogic_o *logic; // x8
  BattlePerformance_o *perf; // x0
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  bool isSkillType; // w0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x2
  const MethodInfo *v91; // x7
  const MethodInfo *v92; // x5
  BattleLogicBaseAi_o *v93; // x0
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x2
  FieldAiActArgument_o *v96; // x22
  const MethodInfo *v97; // x4
  const MethodInfo *v98; // x2
  System_Int32_array *v99; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-58h] BYREF
  int32_t ActionValue; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40FCDBF & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, fieldData);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v12);
    sub_B16FFC(&FieldAiActArgument_TypeInfo, v13);
    sub_B16FFC(&int___TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v20);
    sub_B16FFC(&WeightRate_int__TypeInfo, v21);
    sub_B16FFC(&StringLiteral_8758, v22);
    byte_40FCDBF = 1;
  }
  ActionValue = 0;
  v99 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_50;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             aiEnt->fields.aiActId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_50;
  v30 = *(&Entity->fields.id + 1);
  v31 = (AiActEntity_o *)Entity;
  v32 = (BattleSkillInfoData_o *)sub_B170CC(BattleSkillInfoData_TypeInfo, v26, v27, v28, v29);
  BattleSkillInfoData___ctor(v32, 0LL);
  v33 = AiAct__Check(99, v31->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_50;
  aiState = fieldData->fields.aiState;
  v35 = v33;
  v36 = (unsigned int)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  if ( v35 )
  {
    if ( aiState )
    {
      AiState__changeThinking(aiState, v36, 0LL);
      return this->fields.emptyTask;
    }
    goto LABEL_50;
  }
  if ( (int)v36 >= 1 )
  {
    v41 = AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
    if ( !aiState )
      goto LABEL_50;
    AiState__changeThinking(aiState, v41, 0LL);
  }
  v42 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v36, v37, v38, v39);
  WeightRate_int____ctor(v42, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v30 - 40) >= 2 )
  {
    if ( v30 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_50;
      data->fields.endbattleFlg = 1;
      v55 = this->fields.data;
      if ( !v55 )
        goto LABEL_50;
      v30 = 91;
      v55->fields.loseBattleFlg = 1;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v30, v44) )
    {
      v30 = 0;
    }
  }
  else
  {
    skillVals = (int *)v31->fields.skillVals;
    if ( !skillVals )
      goto LABEL_50;
    if ( skillVals[6] < 2 )
      goto LABEL_26;
    v49 = skillVals[8];
    v48 = skillVals[9];
    v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v50 )
      goto LABEL_50;
    v51 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v50,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !v51 )
      goto LABEL_50;
    if ( SkillLvMaster__GetEntity(v51, v49, v48, 0LL) )
    {
      if ( !v32 )
        goto LABEL_50;
      v32->fields.type = 20;
      uniqueId = fieldData->fields.uniqueId;
      klass = v32->klass;
      v32->fields.index = 0;
      v32->fields.svtUniqueId = uniqueId;
      ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
        v32,
        v49,
        klass->vtable._5_get_skillId.methodPtr);
      v32->fields.skilllv = v48;
    }
    else
    {
LABEL_26:
      v30 = 0;
    }
  }
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0LL) )
    goto LABEL_33;
  v57 = this->fields.data;
  if ( !v57 )
    goto LABEL_50;
  if ( BattleData__checkEnablePlaySpeedOneFromFieldIdList(v57, aiEnt->fields.id, aiEnt->fields.idx, 0LL) )
    isForcedSkillSpeedOne = AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0LL);
  else
LABEL_33:
    isForcedSkillSpeedOne = AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL);
  v63 = isForcedSkillSpeedOne;
  v64 = sub_B170CC(BattleLogicTask_TypeInfo, v59, v60, v61, v62);
  BattleLogicTask___ctor((BattleLogicTask_o *)v64, 0LL);
  if ( !v64
    || (*(_BYTE *)(v64 + 160) = v63,
        infoText = (System_Int32_array **)aiEnt->fields.infoText,
        *(_QWORD *)(v64 + 152) = infoText,
        sub_B16F98((BattleServantConfConponent_o *)(v64 + 152), infoText, v65, v66, v67, v68, v69, v70),
        BattleLogicTask__setActor((BattleLogicTask_o *)v64, 5, fieldData->fields.uniqueId, 0LL),
        (v72 = fieldData->fields.aiState) == 0LL) )
  {
LABEL_50:
    sub_B170D4();
  }
  AiState__setBeforeAction(v72, v30, aiEnt->fields.aiActId, 0LL);
  if ( v30 != 71 )
  {
    isSkillType = AiAct__isSkillType(v30, 0LL);
    if ( v32 && isSkillType )
    {
      target = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v87);
      v99 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v90);
      if ( BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v32,
             (AiBaseEntity_o *)aiEnt,
             v31,
             fieldData,
             &target,
             &v99,
             v91) )
      {
        BattleLogicFieldAi__AddAiFieldScriptTask(
          this,
          aiEnt,
          (System_Collections_Generic_List_BattleLogicTask__o *)v56,
          v63,
          (BattleLogicTask_o *)v64,
          v92);
        BattleLogicBaseAi__SetSkillSelectAddIndex(v93, v32, (AiBaseEntity_o *)aiEnt, v94);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v64, v32, target, v99, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v64, 5, fieldData->fields.uniqueId, 0LL);
        if ( !v56 )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v56,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v95);
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
    }
    else
    {
      v96 = (FieldAiActArgument_o *)sub_B170CC(FieldAiActArgument_TypeInfo, v86, v87, v88, v89);
      FieldAiActArgument___ctor(v96, v31, (AiBaseEntity_o *)aiEnt, fieldData, v63, 0LL);
      BattleLogicBaseAi__SetProcAiActTask(
        (BattleLogicBaseAi_o *)this,
        (System_Collections_Generic_List_BattleLogicTask__o *)v56,
        v30,
        (BaseAiActArgument_o *)v96,
        v97);
      BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v98);
    }
    goto LABEL_48;
  }
  ActionValue = AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
  if ( ActionValue < 1 )
  {
LABEL_48:
    if ( !v56 )
      goto LABEL_50;
    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v56,
    v63,
    (BattleLogicTask_o *)v64,
    v73);
  v74 = System_Int32__ToString((int32_t)&ActionValue, 0LL);
  v75 = System_String__Concat_43743732((System_String_o *)StringLiteral_8758, v74, 0LL);
  BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v64, v75, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_50;
  perf = logic->fields.perf;
  if ( !perf )
    goto LABEL_50;
  ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                               perf,
                                               fieldData->fields.uniqueId,
                                               0LL);
  *(_QWORD *)(v64 + 112) = ServantGameObject;
  sub_B16F98((BattleServantConfConponent_o *)(v64 + 112), ServantGameObject, v79, v80, v81, v82, v83, v84);
  BattleLogicTask__setActor((BattleLogicTask_o *)v64, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v56 )
    goto LABEL_50;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v56,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicFieldAi__setReactionFunction(
        BattleLogicFieldAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  BattleLogic_reactionFunction_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BattleLogic_reactionFunction_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleLogic_reactionFunction_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  BattleLogic_reactionFunction_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleLogic_reactionFunction_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  BattleLogic_reactionFunction_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  BattleLogic_reactionFunction_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  BattleLogic_reactionFunction_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  BattleLogic_reactionFunction_o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  BattleLogic_reactionFunction_o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BattleLogic_reactionFunction_o *v59; // x21

  if ( (byte_40FCDB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleLogicFieldAi_createBaseActionTask__, list);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v7);
    sub_B16FFC(&BattleLogic_reactionFunction_TypeInfo, v8);
    byte_40FCDB9 = 1;
  }
  v9 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, list, method, v3, v4);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_B170D4();
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    28,
    (System_String_o *)v9,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v10, v11, v12, v13);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    29,
    (System_String_o *)v14,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v15, v16, v17, v18);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    30,
    (System_String_o *)v19,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v24 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v20, v21, v22, v23);
  BattleLogic_reactionFunction___ctor(v24, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    31,
    (System_String_o *)v24,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v29 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v25, v26, v27, v28);
  BattleLogic_reactionFunction___ctor(v29, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    32,
    (System_String_o *)v29,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v34 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v30, v31, v32, v33);
  BattleLogic_reactionFunction___ctor(v34, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    33,
    (System_String_o *)v34,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v39 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v35, v36, v37, v38);
  BattleLogic_reactionFunction___ctor(v39, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    34,
    (System_String_o *)v39,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v44 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v40, v41, v42, v43);
  BattleLogic_reactionFunction___ctor(v44, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    43,
    (System_String_o *)v44,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v49 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v45, v46, v47, v48);
  BattleLogic_reactionFunction___ctor(v49, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    64,
    (System_String_o *)v49,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v54 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v50, v51, v52, v53);
  BattleLogic_reactionFunction___ctor(v54, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    66,
    (System_String_o *)v54,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v59 = (BattleLogic_reactionFunction_o *)sub_B170CC(BattleLogic_reactionFunction_TypeInfo, v55, v56, v57, v58);
  BattleLogic_reactionFunction___ctor(v59, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    67,
    (System_String_o *)v59,
    (const MethodInfo_2DFFC54 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_B170D4();
  return f->fields.index == aiInfo->fields.uniqueId;
}