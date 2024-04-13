void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
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
  struct BattleLogicTask_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1

  if ( (byte_42EAFD8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo,
      v20,
      v21,
      v22);
    byte_42EAFD8 = 1;
  }
  v23 = (struct BattleLogicTask_array *)sub_B5D5DC(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.zeroTask,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B5D694(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v30,
    (const MethodInfo_2F451F8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v30 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    48,
    28,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    49,
    29,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    46,
    30,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    47,
    31,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    43,
    32,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    45,
    33,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    44,
    43,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    75,
    64,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v30,
    76,
    70,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.taskDictionary,
    (System_Int32_array **)v30,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)sub_B5D694(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId____ctor(
    v39,
    (const MethodInfo_2F451F8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v39 )
LABEL_6:
    sub_B5D69C(v31, v32);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    28,
    10,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    29,
    11,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    30,
    12,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    31,
    13,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    32,
    6,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    33,
    4,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    34,
    2,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    43,
    15,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    64,
    21,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    66,
    19,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    67,
    22,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___Add(
    v39,
    70,
    23,
    (const MethodInfo_2F45D9C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.stateDicitionary,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v46);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFieldAi__AddAiFieldScriptTask(
        BattleLogicFieldAi_o *this,
        AiFieldEntity_o *ent,
        System_Collections_Generic_List_BattleLogicTask__o *retlist,
        bool isForcedSpeedOne,
        BattleLogicTask_o *mainTask,
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
  void *Voice; // x0
  __int64 v21; // x1
  struct BattleData_o *data; // x8
  System_Int32_array **v23; // x23
  int32_t EffectType; // w0
  int32_t v25; // w25
  __int64 v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  System_Int32_array **motionMessage; // t1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x8
  _QWORD *v49; // x19
  System_String_o *v50; // x19
  float v51; // s8
  float v52; // s0
  System_String_o *v53; // x19
  System_String_o *v54; // x20
  __int64 v55; // x0

  if ( (byte_42EAFD3 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)ent, (_DWORD)retlist, isForcedSpeedOne);
    sub_B5D5C4(&char___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    byte_42EAFD3 = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_33;
    v23 = (System_Int32_array **)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v25 = EffectType;
        v26 = sub_B5D694(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v26, 0LL);
        if ( !v26 )
          goto LABEL_33;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v26, v25, 0LL);
        *(_QWORD *)(v26 + 104) = v23;
        sub_B5D560((BattleServantConfConponent_o *)(v26 + 104), v23, v27, v28, v29, v30, v31, v32);
        *(_BYTE *)(v26 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v26 + 188) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_33;
          motionMessage = (System_Int32_array **)mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v26 + 152) = motionMessage;
          sub_B5D560((BattleServantConfConponent_o *)(v26 + 152), motionMessage, v33, v34, v35, v36, v37, v38);
          *p_motionMessage = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)p_motionMessage, 0LL, v42, v43, v44, v45, v46, v47);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)retlist,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
          return;
        }
LABEL_33:
        sub_B5D69C(Voice, v21);
      }
    }
    if ( v23 )
    {
      Voice = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !Voice )
        goto LABEL_33;
      if ( !*((_DWORD *)Voice + 6) )
        goto LABEL_34;
      *((_WORD *)Voice + 16) = 58;
      Voice = System_String__Split((System_String_o *)v23, (System_Char_array *)Voice, 0LL);
      if ( !Voice )
        goto LABEL_33;
      v48 = *((_QWORD *)Voice + 3);
      v49 = Voice;
      if ( (int)v48 < 2 )
      {
        if ( (_DWORD)v48 )
        {
          v50 = (System_String_o *)*((_QWORD *)Voice + 4);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v50, 0LL);
          return;
        }
LABEL_34:
        v55 = sub_B5D6C8(Voice);
        sub_B5D668(v55, 0LL);
      }
      if ( (_DWORD)v48 == 2 )
      {
        v51 = 1.0;
      }
      else
      {
        v52 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
        v48 = v49[3];
        v51 = v52;
        if ( !(_DWORD)v48 )
          goto LABEL_34;
      }
      if ( (_DWORD)v48 == 1 )
        goto LABEL_34;
      v54 = (System_String_o *)v49[4];
      v53 = (System_String_o *)v49[5];
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice_23391328(v54, v53, v51, 0LL, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  struct System_Int32_array *skillVals; // x8
  int32_t v16; // w22
  unsigned int v17; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_42EAFD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, (_DWORD)aiActEnt, (_DWORD)skillInfo, fieldData);
    this = (BattleLogicFieldAi_o *)sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    byte_42EAFD5 = 1;
  }
  entity = 0LL;
  v14 = (unsigned int)*actType;
  if ( (v14 & 0xFFFFFFFE) == 40 )
  {
    if ( !aiActEnt )
      goto LABEL_19;
    skillVals = aiActEnt->fields.skillVals;
    if ( !skillVals )
      goto LABEL_19;
    if ( (int)skillVals->max_length > 1 )
    {
      v17 = skillVals->m_Items[1];
      v16 = skillVals->m_Items[2];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !this )
        goto LABEL_19;
      this = (BattleLogicFieldAi_o *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v17, v16, 0LL);
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
              v17,
              klass->vtable._5_get_skillId.methodPtr);
            skillInfo->fields.skilllv = v16;
            return;
          }
        }
LABEL_19:
        sub_B5D69C(this, v14);
      }
    }
    goto LABEL_17;
  }
  if ( (_DWORD)v14 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v14, (const MethodInfo *)skillInfo) )
LABEL_17:
    *actType = 0;
}


bool __fastcall BattleLogicFieldAi__CheckAiCanActionFromTargets(
        BattleLogicFieldAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
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
  __int64 v31; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct BattleData_o *data; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *field_datalist; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x23
  BattleFieldData_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x21
  BattleSkillInfoData_o *v44; // x22
  const MethodInfo *v45; // x5
  const MethodInfo *v46; // x7
  bool isSkillType; // w8
  bool v48; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-40h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-34h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_42EAFD7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_BattleFieldData___, (_DWORD)aiInfo, (_DWORD)aiBaseEntity, method);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_AiActMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_BattleFieldData__bool___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_BattleFieldData__bool__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__, v25, v26, v27);
    sub_B5D5C4(&BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo, v28, v29, v30);
    byte_42EAFD7 = 1;
  }
  entity = 0LL;
  actType = 0;
  ptTarget = 0LL;
  target = 0LL;
  v31 = sub_B5D694(BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo);
  BattleLogicFieldAi___c__DisplayClass24_0___ctor((BattleLogicFieldAi___c__DisplayClass24_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_19;
  *(_QWORD *)(v31 + 16) = aiInfo;
  sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)aiInfo, v34, v35, v36, v37, v38, v39);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v33);
  field_datalist = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)data->fields.field_datalist;
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v31,
    Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleFieldData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = (BattleFieldData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                                          field_datalist,
                                                                                          (System_Func_T__bool__o *)v42,
                                                                                          (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_BattleFieldData___);
  v44 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v44, 0LL);
  BattleLogicFieldAi__CheckAiActType(
    this,
    (AiActEntity_o *)entity,
    v44,
    USFGOActorBattleActionEventConditional_OverwriteParamCondition,
    &actType,
    v45);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v48 = 1;
  if ( v44 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v44,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             USFGOActorBattleActionEventConditional_OverwriteParamCondition,
             &target,
             &ptTarget,
             v46);
  }
  return v48;
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
    sub_B5D69C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21304820(
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
  __int64 Instance; // x0
  __int64 v28; // x1
  SkillLvMaster_o *v29; // x19
  SkillLvEntity_o *v30; // x26
  __int64 v31; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x27
  int v33; // w21
  __int64 v34; // x8
  unsigned __int64 v35; // x20
  char v36; // w27
  __int64 v38; // x28
  BattleLogicTarget_o *logictarget; // x19
  int32_t v40; // w20
  System_Int32_array *targetIndividuality; // x25
  int32_t uniqueId; // w26
  System_Int32_array *FieldEnemyServantIDList; // x22
  char v44; // w27
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  BattleData_o *data; // x8
  BattleLogicTarget_o *v52; // x19
  int32_t v53; // w20
  System_Int32_array *v54; // x25
  int32_t v55; // w24
  __int64 v56; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  AiLogic_o *aiLogic; // x19
  __int64 v65; // x0
  bool IsDeadToEnableUpHate; // [xsp+20h] [xbp-80h]
  char v67; // [xsp+24h] [xbp-7Ch]
  BattleFieldData_o *v68; // [xsp+28h] [xbp-78h]
  BattleServantConfConponent_o *v69; // [xsp+30h] [xbp-70h]
  BattleServantConfConponent_o *v70; // [xsp+38h] [xbp-68h]
  BattleLogicFieldAi_o *v71; // [xsp+40h] [xbp-60h]
  AiActEntity_o *v72; // [xsp+48h] [xbp-58h]

  if ( (byte_42EAFD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)skillInfo, (_DWORD)aiEnt, aiActEnt);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&int___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EAFD6 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v72 = aiActEnt;
  v29 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v29 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v29, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v30 = (SkillLvEntity_o *)Instance;
  v31 = *(_QWORD *)(Instance + 32);
  v69 = (BattleServantConfConponent_o *)ptTarget;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v31 )
    goto LABEL_41;
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v70 = (BattleServantConfConponent_o *)target;
  if ( *(_DWORD *)(v31 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        *(_DWORD *)(v31 + 32),
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( Instance )
  {
    Instance = FuncList__Check(43, *(_DWORD *)(Instance + 24), 0LL);
    v33 = Instance & 1;
  }
  else
  {
LABEL_13:
    v33 = 0;
  }
  v34 = *(_QWORD *)(v31 + 24);
  if ( (int)v34 < 1 )
  {
    v36 = 0;
    if ( !fieldData )
      goto LABEL_41;
  }
  else
  {
    v35 = 0LL;
    while ( 1 )
    {
      if ( v35 >= (unsigned int)v34 )
        goto LABEL_42;
      if ( !v32 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v32,
                            *(_DWORD *)(v31 + 32 + 4 * v35),
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v34) = *(_DWORD *)(v31 + 24);
      if ( (__int64)++v35 >= (int)v34 )
      {
        v36 = 0;
        goto LABEL_25;
      }
    }
    v36 = 1;
LABEL_25:
    if ( !fieldData )
      goto LABEL_41;
  }
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( (~((v33 | BattleLogic__checkFunctionTargetsAvailable(
                   (BattleLogic_o *)Instance,
                   v30->fields.funcId,
                   fieldData->fields.uniqueId,
                   0LL)) << 31 >> 31) & 7) != 0 )
    return 0;
  v68 = fieldData;
  v71 = this;
  Instance = SkillLvEntity__IsEnableTarget(v30, 0, 0LL);
  v67 = Instance;
  if ( !aiEnt )
    goto LABEL_41;
  IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
  Instance = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v72 )
    goto LABEL_41;
  v38 = Instance;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  v40 = v72->fields.target;
  targetIndividuality = v72->fields.targetIndividuality;
  uniqueId = v68->fields.uniqueId;
  FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !logictarget )
    goto LABEL_41;
  v44 = v36 | v33;
  Instance = BattleLogicTarget__getTargetAiAct(
               logictarget,
               v40,
               uniqueId,
               targetIndividuality,
               FieldEnemyServantIDList,
               v67 & 1,
               v44,
               (System_Int32_array *)Instance,
               v72,
               IsDeadToEnableUpHate,
               0LL);
  if ( !v38 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_42;
  *(_DWORD *)(v38 + 32) = Instance;
  v70->klass = (BattleServantConfConponent_c *)v38;
  sub_B5D560(v70, (System_Int32_array **)v38, v45, v46, v47, v48, v49, v50);
  Instance = sub_B5D5DC(int___TypeInfo, 1LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_41;
  v52 = this->fields.logictarget;
  v53 = v72->fields.target;
  v54 = v72->fields.targetIndividuality;
  v55 = v68->fields.uniqueId;
  v56 = Instance;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
  Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
  if ( !v52
    || (Instance = BattleLogicTarget__getTargetAiAct(
                     v52,
                     v53,
                     v55,
                     v54,
                     FieldPlayerServantIDList,
                     v67 & 1,
                     v44,
                     (System_Int32_array *)Instance,
                     v72,
                     IsDeadToEnableUpHate,
                     0LL),
        !v56) )
  {
LABEL_41:
    sub_B5D69C(Instance, v28);
  }
  if ( !*(_DWORD *)(v56 + 24) )
  {
LABEL_42:
    v65 = sub_B5D6C8(Instance);
    sub_B5D668(v65, 0LL);
  }
  *(_DWORD *)(v56 + 32) = Instance;
  v69->klass = (BattleServantConfConponent_c *)v56;
  sub_B5D560(v69, (System_Int32_array **)v56, v58, v59, v60, v61, v62, v63);
  aiLogic = v71->fields.aiLogic;
  Instance = AiActEntity__GetNoTargetNoActionType(v72, 0LL);
  if ( !aiLogic )
    goto LABEL_41;
  return !AiLogic__IsNoTargetNoActionTask(
            aiLogic,
            Instance,
            (System_Int32_array *)v70->klass,
            (System_Int32_array *)v69->klass,
            0LL);
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__CreateActionTasks(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicTask_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_42EAFD0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, actionType, (_DWORD)method, v3);
    byte_42EAFD0 = 1;
  }
  v6 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.actiontype = actionType;
  BattleLogicTask__setActor(v6, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v6, v9);
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
      sub_B5D69C(this, aiFieldEntity);
    }
  }
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__GetCommonFieldAiTask(
        BattleLogicFieldAi_o *this,
        int32_t prcState,
        int32_t logicType,
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
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct BattleData_o *data; // x8
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *field_datalist; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x23
  BattleData_o *v31; // x2
  const MethodInfo *v32; // x3

  if ( (byte_42EAFD2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BattleFieldData___, prcState, logicType, method);
    sub_B5D5C4(&Method_System_Func_BattleFieldData__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_BattleFieldData__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__, v13, v14, v15);
    sub_B5D5C4(&BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo, v16, v17, v18);
    byte_42EAFD2 = 1;
  }
  v19 = sub_B5D694(BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo);
  BattleLogicFieldAi___c__DisplayClass18_0___ctor((BattleLogicFieldAi___c__DisplayClass18_0_o *)v19, 0LL);
  if ( !v19
    || (*(_QWORD *)(v19 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v19 + 16),
          (System_Int32_array **)this,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        *(_DWORD *)(v19 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_B5D69C(v20, v21);
  }
  field_datalist = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)data->fields.field_datalist;
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v19,
    Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleFieldData__bool___ctor__);
  if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
         field_datalist,
         (System_Func_T__bool__o *)v30,
         (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleFieldData___) )
  {
    return BattleLogicFieldAi__checkFieldAiTask(this, logicType, v31, v32);
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
    sub_B5D69C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21304820(
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
    sub_B5D69C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21304820(
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
    sub_B5D69C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
    }
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_21304820(
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v11; // x3

  if ( (byte_42EAFCD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      ltype,
      (_DWORD)data,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6,
      v7,
      v8);
    byte_42EAFCD = 1;
  }
  taskDictionary = this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
         ltype,
         (const MethodInfo_2F46000 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                       (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)taskDictionary,
                                       ltype,
                                       (const MethodInfo_2F45CDC *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v11);
    }
LABEL_8:
    sub_B5D69C(taskDictionary, *(_QWORD *)&ltype);
  }
  return this->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBase(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        int32_t index,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleLogicTask_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_42EAFCC & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask___TypeInfo, actionType, index, method);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v6, v7, v8);
    byte_42EAFCC = 1;
  }
  v9 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.actiontype = actionType,
        BattleLogicTask__setActor(v9, 5, index, 0LL),
        (v10 = sub_B5D5DC(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_B5D69C(v10, v11);
  }
  v12 = v10;
  v13 = sub_B5D684(v9, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
  if ( !v13 )
  {
    v21 = sub_B5D6BC(0LL);
    sub_B5D668(v21, 0LL);
  }
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v22 = sub_B5D6C8(v13);
    sub_B5D668(v22, 0LL);
  }
  *(_QWORD *)(v12 + 32) = v9;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)v9, v14, v15, v16, v17, v18, v19);
  return (BattleLogicTask_array *)v12;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBaseActionTask(
        BattleLogicFieldAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicFieldAi_o *v5; // x20
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
  int32_t v21; // w23
  unsigned int v22; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v26; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  struct BattleData_o *v28; // x8
  AiFieldEntity_o *Action_21305888; // x0
  const MethodInfo *v30; // x3
  int32_t v31; // w4
  const MethodInfo *v32; // x5
  __int64 v34; // x0

  v5 = this;
  if ( (byte_42EAFCE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      (_DWORD)task,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v15, v16, v17);
    this = (BattleLogicFieldAi_o *)sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18, v19, v20);
    byte_42EAFCE = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v5->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___ContainsKey(
         (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
         task->fields.actiontype,
         (const MethodInfo_2F46000 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v5->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId___get_Item(
                                     (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__TutorialFlag_ImageId__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_2F45CDC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v21 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0LL);
      v22 = (unsigned int)this;
    }
    else
    {
      v22 = 0;
    }
    data = v5->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v22 < (int)max_length )
    {
      if ( v22 >= max_length )
      {
        v34 = sub_B5D6C8(this);
        sub_B5D668(v34, 0LL);
      }
      v26 = field_datalist->m_Items[v22];
      v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v27,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v28 = v5->fields.data;
      if ( v28 )
      {
        this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
        if ( this )
        {
          Action_21305888 = AiLogic__getAction_21305888(
                              (AiLogic_o *)this,
                              v26,
                              v21,
                              v28->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v5,
                              0,
                              0LL);
          if ( Action_21305888 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v5,
                                             v26,
                                             Action_21305888,
                                             (int32_t)v30,
                                             v31,
                                             v32);
            if ( !v27 )
              goto LABEL_22;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_21305888,
                                           task->fields.actiontype,
                                           v22 + 1,
                                           v30);
          if ( v27 )
          {
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_B5D69C(this, task);
    }
  }
  return v5->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createDeadActionTask(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogicTask_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_42EAFCF & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAFCF = 1;
  }
  v5 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.actiontype = 34;
  BattleLogicTask__setActor(v5, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v5, v8);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  unsigned __int64 v26; // x25
  bool v27; // w26
  int32_t v28; // w24
  __int64 v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v43; // x0

  if ( (byte_42EAFD4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)targetIds, (_DWORD)skillInfo, motionMessage);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19, v20, v21);
    byte_42EAFD4 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_14;
  v25 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    v27 = isForcedSpeedOne;
    do
    {
      if ( v26 >= (unsigned int)v25 )
      {
        v43 = sub_B5D6C8(v23);
        sub_B5D668(v43, 0LL);
      }
      v28 = targetIds->m_Items[v26 + 1];
      if ( (v28 & 0x80000000) == 0 )
      {
        v29 = sub_B5D694(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v29, 0LL);
        if ( !v29 )
          goto LABEL_14;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v29, 0LL);
        *(_QWORD *)(v29 + 72) = skillInfo;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v29 + 72),
          (System_Int32_array **)skillInfo,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        BattleLogicTask__setActor((BattleLogicTask_o *)v29, 5, v28, 0LL);
        *(_QWORD *)(v29 + 152) = motionMessage;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v29 + 152),
          (System_Int32_array **)motionMessage,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        *(_BYTE *)(v29 + 160) = v27;
        if ( !v22 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      }
      LODWORD(v25) = targetIds->max_length;
    }
    while ( (__int64)++v26 < (int)v25 );
  }
  if ( !v22 )
LABEL_14:
    sub_B5D69C(v23, v24);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicFieldAi__procAiAct(
        BattleLogicFieldAi_o *this,
        BattleFieldData_o *fieldData,
        AiFieldEntity_o *aiEnt,
        int32_t countAct,
        int32_t procState,
        const MethodInfo *method)
{
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  void *Instance; // x0
  __int64 v52; // x1
  int32_t v53; // w25
  AiActEntity_o *v54; // x23
  BattleSkillInfoData_o *v55; // x22
  AiState_o *aiState; // x24
  char v57; // w26
  WeightRate_int__o *v59; // x0
  const MethodInfo *v60; // x2
  int *skillVals; // x8
  int32_t v62; // w24
  unsigned int v63; // w26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  struct BattleData_o *data; // x9
  struct BattleData_o *v67; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x24
  bool isForcedSkillSpeedOne; // w0
  bool v70; // w27
  __int64 v71; // x26
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **infoText; // x1
  const MethodInfo *v79; // x5
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  struct BattleLogic_o *logic; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  bool isSkillType; // w0
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
  int v101; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EAFD1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, (_DWORD)fieldData, (_DWORD)aiEnt, *(_QWORD *)&countAct);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AiActMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&FieldAiActArgument_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&int___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v42, v43, v44);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_8877/*"MOTION_"*/, v48, v49, v50);
    byte_42EAFD1 = 1;
  }
  v101 = 0;
  v99 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_50;
  if ( !Instance )
    goto LABEL_50;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_50;
  v53 = *((_DWORD *)Instance + 5);
  v54 = (AiActEntity_o *)Instance;
  v55 = (BattleSkillInfoData_o *)sub_B5D694(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v55, 0LL);
  Instance = (void *)AiAct__Check(99, v54->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_50;
  aiState = fieldData->fields.aiState;
  v57 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v52 = (unsigned int)Instance;
  if ( (v57 & 1) != 0 )
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
  v59 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v59, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v53 - 40) >= 2 )
  {
    if ( v53 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_50;
      data->fields.endbattleFlg = 1;
      v67 = this->fields.data;
      if ( !v67 )
        goto LABEL_50;
      v53 = 91;
      v67->fields.loseBattleFlg = 1;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v53, v60) )
    {
      v53 = 0;
    }
  }
  else
  {
    skillVals = (int *)v54->fields.skillVals;
    if ( !skillVals )
      goto LABEL_50;
    if ( skillVals[6] < 2 )
      goto LABEL_26;
    v63 = skillVals[8];
    v62 = skillVals[9];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v63, v62, 0LL);
    if ( Instance )
    {
      if ( !v55 )
        goto LABEL_50;
      v55->fields.type = 20;
      uniqueId = fieldData->fields.uniqueId;
      klass = v55->klass;
      v55->fields.index = 0;
      v55->fields.svtUniqueId = uniqueId;
      ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
        v55,
        v63,
        klass->vtable._5_get_skillId.methodPtr);
      v55->fields.skilllv = v62;
    }
    else
    {
LABEL_26:
      v53 = 0;
    }
  }
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v70 = isForcedSkillSpeedOne;
  v71 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v71, 0LL);
  if ( !v71
    || (*(_BYTE *)(v71 + 160) = v70,
        infoText = (System_Int32_array **)aiEnt->fields.infoText,
        *(_QWORD *)(v71 + 152) = infoText,
        sub_B5D560((BattleServantConfConponent_o *)(v71 + 152), infoText, v72, v73, v74, v75, v76, v77),
        BattleLogicTask__setActor((BattleLogicTask_o *)v71, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_50:
    sub_B5D69C(Instance, v52);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v53, aiEnt->fields.aiActId, 0LL);
  if ( v53 != 71 )
  {
    isSkillType = AiAct__isSkillType(v53, 0LL);
    if ( v55 && isSkillType )
    {
      target = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      v99 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                           this,
                           v55,
                           (AiBaseEntity_o *)aiEnt,
                           v54,
                           fieldData,
                           &target,
                           &v99,
                           v91);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        BattleLogicFieldAi__AddAiFieldScriptTask(
          this,
          aiEnt,
          (System_Collections_Generic_List_BattleLogicTask__o *)v68,
          v70,
          (BattleLogicTask_o *)v71,
          v92);
        BattleLogicBaseAi__SetSkillSelectAddIndex(v93, v55, (AiBaseEntity_o *)aiEnt, v94);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v71, v55, target, v99, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v71, 5, fieldData->fields.uniqueId, 0LL);
        if ( !v68 )
          goto LABEL_50;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v68,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
        BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v95);
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v68,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
    }
    else
    {
      v96 = (FieldAiActArgument_o *)sub_B5D694(FieldAiActArgument_TypeInfo);
      FieldAiActArgument___ctor(v96, v54, (AiBaseEntity_o *)aiEnt, fieldData, v70, 0LL);
      BattleLogicBaseAi__SetProcAiActTask(
        (BattleLogicBaseAi_o *)this,
        (System_Collections_Generic_List_BattleLogicTask__o *)v68,
        v53,
        (BaseAiActArgument_o *)v96,
        v97);
      BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v98);
    }
    goto LABEL_48;
  }
  Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
  v101 = (int)Instance;
  if ( (int)Instance < 1 )
  {
LABEL_48:
    if ( !v68 )
      goto LABEL_50;
    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v68,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v68,
    v70,
    (BattleLogicTask_o *)v71,
    v79);
  v80 = System_Int32__ToString((int32_t)&v101, 0LL);
  v81 = System_String__Concat_44577788((System_String_o *)StringLiteral_8877/*"MOTION_"*/, v80, 0LL);
  BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v71, v81, 0LL);
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
  *(_QWORD *)(v71 + 112) = ServantGameObject;
  sub_B5D560((BattleServantConfConponent_o *)(v71 + 112), ServantGameObject, v84, v85, v86, v87, v88, v89);
  BattleLogicTask__setActor((BattleLogicTask_o *)v71, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v68 )
    goto LABEL_50;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v68,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v68,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicFieldAi__setReactionFunction(
        BattleLogicFieldAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattleLogic_reactionFunction_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  BattleLogic_reactionFunction_o *v15; // x21
  BattleLogic_reactionFunction_o *v16; // x21
  BattleLogic_reactionFunction_o *v17; // x21
  BattleLogic_reactionFunction_o *v18; // x21
  BattleLogic_reactionFunction_o *v19; // x21
  BattleLogic_reactionFunction_o *v20; // x21
  BattleLogic_reactionFunction_o *v21; // x21
  BattleLogic_reactionFunction_o *v22; // x21
  BattleLogic_reactionFunction_o *v23; // x21
  BattleLogic_reactionFunction_o *v24; // x21
  BattleLogic_reactionFunction_o *v25; // x21

  if ( (byte_42EAFCB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleLogicFieldAi_createBaseActionTask__, (_DWORD)list, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&BattleLogic_reactionFunction_TypeInfo, v9, v10, v11);
    byte_42EAFCB = 1;
  }
  v12 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_B5D69C(v13, v14);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    28,
    (System_String_o *)v12,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    29,
    (System_String_o *)v15,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    30,
    (System_String_o *)v16,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    31,
    (System_String_o *)v17,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    32,
    (System_String_o *)v18,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    33,
    (System_String_o *)v19,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    34,
    (System_String_o *)v20,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v21 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v21, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    43,
    (System_String_o *)v21,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v22 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v22, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    64,
    (System_String_o *)v22,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v23 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v23, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    66,
    (System_String_o *)v23,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v24 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v24, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    67,
    (System_String_o *)v24,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v25 = (BattleLogic_reactionFunction_o *)sub_B5D694(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v25, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    70,
    (System_String_o *)v25,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_B5D69C(this, fieldData);
  return AiLogic__checkThinking_21304820(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
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
    sub_B5D69C(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}