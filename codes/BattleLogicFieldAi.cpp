void BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CF1861 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
    byte_4CF1861 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C7BB90(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v10,
    (const MethodInfo_34B8D98 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v10 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    48,
    28,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    49,
    29,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    46,
    30,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    47,
    31,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    43,
    32,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    45,
    33,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    44,
    43,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    75,
    64,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    76,
    70,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    79,
    74,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.taskDictionary, (int32_t)v10, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v19,
    (const MethodInfo_34B8D98 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v19 )
LABEL_6:
    sub_1C7BD40(v11, v12);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    28,
    10,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    29,
    11,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    30,
    12,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    31,
    13,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    32,
    6,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    33,
    4,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    34,
    2,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    43,
    15,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    64,
    21,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    66,
    19,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    67,
    22,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    70,
    23,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    74,
    25,
    (const MethodInfo_34B975C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v19;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.stateDicitionary, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, 0);
}


void BattleLogicFieldAi__AddAiFieldScriptTask(
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
  System_String_o *v14; // x24
  int32_t EffectType; // w0
  int32_t v16; // w25
  __int64 v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  _QWORD *v44; // x19
  System_String_o *v45; // x19
  float v46; // s0
  float v47; // s8
  System_String_o *v48; // x19
  System_String_o *v49; // x20

  if ( (byte_4CF185C & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CF185C = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    v14 = (System_String_o *)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0);
      if ( EffectType )
      {
        v16 = EffectType;
        v17 = sub_1C7BD34(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0);
        if ( !v17 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v17, v16, 0);
        *(_QWORD *)(v17 + 120) = v14;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v17 + 120), (int32_t)v14, v18, v19, v20, v21, v22, v23);
        *(_BYTE *)(v17 + 184) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0);
        *(float *)(v17 + 212) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_31;
          motionMessage = mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v17 + 176) = motionMessage;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v17 + 176), (int32_t)motionMessage, v24, v25, v26, v27, v28, v29);
          *p_motionMessage = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_motionMessage, 0, v33, v34, v35, v36, v37, v38);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          items = retlist->fields._items;
          v40 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retlist->fields._version;
          if ( items )
          {
            size = retlist->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retlist,
                (Il2CppObject *)v17,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v17;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 4), v17, v24, v25, v26, v27, v28, v29);
            }
            return;
          }
        }
LABEL_31:
        sub_1C7BD40(Voice, v12);
      }
    }
    if ( !v14 )
      return;
    Voice = System_String__Split(v14, 0x3Au, 0, 0);
    if ( !Voice )
      goto LABEL_31;
    v43 = *((_QWORD *)Voice + 3);
    v44 = Voice;
    if ( (int)v43 < 2 )
    {
      if ( (_DWORD)v43 )
      {
        v45 = (System_String_o *)*((_QWORD *)Voice + 4);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice(v45, 0, 0);
        return;
      }
LABEL_32:
      sub_1C7BD48(Voice);
    }
    if ( (_DWORD)v43 == 2 )
    {
      v47 = 1.0;
    }
    else
    {
      v46 = System_Single__Parse(*((System_String_o **)Voice + 6), 0);
      v43 = v44[3];
      v47 = v46;
    }
    if ( (unsigned int)v43 < 2 )
      goto LABEL_32;
    v49 = (System_String_o *)v44[4];
    v48 = (System_String_o *)v44[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_42095460(v49, v48, v47, 0, 0, 0);
  }
}


void BattleLogicFieldAi__CheckAiActType(
        BattleLogicFieldAi_o *this,
        AiActEntity_o *aiActEnt,
        BattleSkillInfoData_o *skillInfo,
        BattleFieldData_o *fieldData,
        int32_t *actType,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v10; // x22
  __int64 v11; // x1
  int *skillVals; // x8
  int32_t v13; // w22
  unsigned int v14; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4CF185E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    this = (BattleLogicFieldAi_o *)sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF185E = 1;
  }
  entity = 0;
  v11 = (unsigned int)*actType;
  if ( (v11 & 0xFFFFFFFE) == 0x28 )
  {
    if ( !aiActEnt )
      goto LABEL_18;
    skillVals = (int *)aiActEnt->fields.skillVals;
    if ( !skillVals )
      goto LABEL_18;
    if ( skillVals[6] > 1 )
    {
      v14 = skillVals[8];
      v13 = skillVals[9];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !this )
        goto LABEL_18;
      this = (BattleLogicFieldAi_o *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v14, v13, 0);
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
            ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))klass->vtable._4_set_skillId.methodPtr)(
              skillInfo,
              v14,
              klass->vtable._4_set_skillId.method);
            skillInfo->fields.skilllv = v13;
            return;
          }
        }
LABEL_18:
        sub_1C7BD40(this, v11);
      }
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v11 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v11, 0) )
LABEL_16:
    *actType = 0;
}


bool BattleLogicFieldAi__CheckAiCanActionFromTargets(
        BattleLogicFieldAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 v7; // x21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x22
  System_Func_object__bool__o *v18; // x23
  Il2CppObject *object; // x21
  BattleSkillInfoData_o *v20; // x22
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x7
  bool isSkillType; // w8
  bool v24; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-50h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CF1860 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Find_BattleFieldData___);
    sub_1C7BAE8(&BattleSkillInfoData_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C7BAE8(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicFieldAi___c__DisplayClass25_0__CheckAiCanActionFromTargets_b__0__);
    sub_1C7BAE8(&BattleLogicFieldAi___c__DisplayClass25_0_TypeInfo);
    byte_4CF1860 = 1;
  }
  entity = 0;
  ptTarget = 0;
  target = 0;
  v7 = sub_1C7BD34(BattleLogicFieldAi___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = aiInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)aiInfo, v10, v11, v12, v13, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0) )
LABEL_18:
    sub_1C7BD40(Master_object, v9);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v18 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass25_0__CheckAiCanActionFromTargets_b__0__,
    0);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v18,
             (const MethodInfo_315A2F4 *)Method_BasicHelper_Find_BattleFieldData___);
  v20 = (BattleSkillInfoData_o *)sub_1C7BD34(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v20, 0);
  BattleLogicFieldAi__CheckAiActType(this, (AiActEntity_o *)entity, v20, (BattleFieldData_o *)object, &actType, v21);
  isSkillType = AiAct__isSkillType(actType, 0);
  v24 = 1;
  if ( v20 && isSkillType )
  {
    ptTarget = 0;
    target = 0;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v20,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             (BattleFieldData_o *)object,
             &target,
             &ptTarget,
             v22);
  }
  return v24;
}


BattleLogicTask_array *BattleLogicFieldAi__CheckFieldAIBeforeWaveStartAnimation(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleLogicFieldAi__GetCommonFieldAiTask(this, 23, 76, v2);
}


BattleLogicTask_array *BattleLogicFieldAi__CheckFieldAiBeforeBattleResultApi(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleLogicFieldAi__GetCommonFieldAiTask(this, 25, 79, v2);
}


BattleLogicTask_array *BattleLogicFieldAi__CheckFieldAiBeforeMoveWave(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  il2cpp_array_size_t max_length; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0 )
LABEL_11:
    sub_1C7BD40(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C7BD48(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_47224712(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     21,
                                     (BattleLogicBaseAi_o *)v5,
                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 75, v7, v8);
    LODWORD(max_length) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)max_length )
      return v5->fields.zeroTask;
  }
}


bool BattleLogicFieldAi__CheckFieldSkillTarget(
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
  __int64 v15; // x1
  SkillLvMaster_o *v16; // x19
  SkillLvEntity_o *v17; // x26
  __int64 v18; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x27
  int v20; // w28
  __int64 v21; // x8
  BattleFieldData_o *v22; // x28
  unsigned __int64 v23; // x22
  char v24; // w27
  bool IsEnableTarget; // w0
  bool IsDeadToEnableUpHate; // w25
  BattleData_o *data; // x8
  BattleLogicTarget_o *logictarget; // x29
  int32_t v29; // w20
  int32_t uniqueId; // w19
  System_Int32_array *targetIndividuality; // x24
  __int64 v32; // x28
  BattleFieldData_o *v33; // x26
  System_Int32_array *FieldEnemyServantIDList; // x22
  char v35; // w27
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  BattleData_o *v42; // x8
  BattleLogicTarget_o *v43; // x19
  int32_t v44; // w20
  int32_t v45; // w24
  System_Int32_array *v46; // x29
  __int64 v47; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  AiLogic_o *aiLogic; // x19
  GrandQuestFolderBoardItem_o *v57; // [xsp+18h] [xbp-88h]
  BattleLogicFieldAi_o *v58; // [xsp+20h] [xbp-80h]
  char v59; // [xsp+28h] [xbp-78h]
  int v60; // [xsp+34h] [xbp-6Ch]

  if ( (byte_4CF185F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF185F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v16 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
               skillInfo,
               skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v16 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v16, Instance, skillInfo->fields.skilllv, 0);
  if ( !Instance )
    goto LABEL_41;
  v17 = (SkillLvEntity_o *)Instance;
  v18 = *(_QWORD *)(Instance + 32);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v18 )
    goto LABEL_41;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( *(_DWORD *)(v18 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v18 + 32),
                        (const MethodInfo_342E2FC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( Instance )
  {
    Instance = FuncList__Check(43, *(_DWORD *)(Instance + 24), 0);
    v20 = Instance & 1;
  }
  else
  {
LABEL_13:
    v20 = 0;
  }
  v21 = *(_QWORD *)(v18 + 24);
  v60 = v20;
  if ( (int)v21 < 1 )
  {
    v24 = 0;
  }
  else
  {
    v22 = fieldData;
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
        goto LABEL_42;
      if ( !v19 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v19,
                            *(_DWORD *)(v18 + 32 + 4 * v23),
                            (const MethodInfo_342E2FC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v21) = *(_DWORD *)(v18 + 24);
      if ( (__int64)++v23 >= (int)v21 )
      {
        v24 = 0;
        goto LABEL_24;
      }
    }
    v24 = 1;
LABEL_24:
    fieldData = v22;
    v20 = v60;
  }
  if ( !fieldData )
    goto LABEL_41;
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  Instance = BattleLogic__checkFunctionTargetsAvailable(
               (BattleLogic_o *)Instance,
               v17->fields.funcId,
               fieldData->fields.uniqueId,
               0);
  if ( v20 | Instance & 1 )
  {
    if ( aiActEnt )
    {
      IsEnableTarget = AiActEntity__IsEnableTarget(aiActEnt, 0, 0);
      Instance = SkillLvEntity__IsEnableTarget(v17, IsEnableTarget, 0);
      v59 = Instance;
      if ( aiEnt )
      {
        v57 = (GrandQuestFolderBoardItem_o *)ptTarget;
        IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0);
        Instance = sub_1C7BB90(int___TypeInfo, 1);
        data = this->fields.data;
        if ( data )
        {
          v58 = this;
          logictarget = this->fields.logictarget;
          v29 = aiActEnt->fields.target;
          uniqueId = fieldData->fields.uniqueId;
          targetIndividuality = aiActEnt->fields.targetIndividuality;
          v32 = Instance;
          v33 = fieldData;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 0, 0);
          Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
          if ( logictarget )
          {
            v35 = v24 | v60;
            Instance = BattleLogicTarget__getTargetAiAct(
                         logictarget,
                         v29,
                         uniqueId,
                         targetIndividuality,
                         FieldEnemyServantIDList,
                         v59 & 1,
                         v35,
                         (System_Int32_array *)Instance,
                         aiActEnt,
                         IsDeadToEnableUpHate,
                         0);
            if ( v32 )
            {
              if ( !*(_DWORD *)(v32 + 24) )
                goto LABEL_42;
              *(_DWORD *)(v32 + 32) = Instance;
              *target = (System_Int32_array *)v32;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)target, v32, v36, v37, v38, v39, v40, v41);
              Instance = sub_1C7BB90(int___TypeInfo, 1);
              v42 = v58->fields.data;
              if ( !v42 )
                goto LABEL_41;
              v43 = v58->fields.logictarget;
              v44 = aiActEnt->fields.target;
              v45 = v33->fields.uniqueId;
              v46 = aiActEnt->fields.targetIndividuality;
              v47 = Instance;
              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v42, 0, 0);
              Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
              if ( !v43 )
                goto LABEL_41;
              Instance = BattleLogicTarget__getTargetAiAct(
                           v43,
                           v44,
                           v45,
                           v46,
                           FieldPlayerServantIDList,
                           v59 & 1,
                           v35,
                           (System_Int32_array *)Instance,
                           aiActEnt,
                           IsDeadToEnableUpHate,
                           0);
              if ( !v47 )
                goto LABEL_41;
              if ( !*(_DWORD *)(v47 + 24) )
LABEL_42:
                sub_1C7BD48(Instance);
              *(_DWORD *)(v47 + 32) = Instance;
              v57->klass = (GrandQuestFolderBoardItem_c *)v47;
              sub_1C7BA8C(v57, v47, v49, v50, v51, v52, v53, v54);
              aiLogic = v58->fields.aiLogic;
              Instance = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0);
              if ( aiLogic )
                return !AiLogic__IsNoTargetNoActionTask(aiLogic, Instance, *target, (System_Int32_array *)v57->klass, 0);
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C7BD40(Instance, v15);
  }
  return 0;
}


BattleLogicTask_array *BattleLogicFieldAi__CreateActionTasks(
        BattleLogicFieldAi_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4CF1859 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    byte_4CF1859 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  v5->fields.actiontype = actionType;
  BattleLogicTask__setActor(v5, 5, 0, 0);
  return BattleLogicFieldAi__createBaseActionTask(this, v5, v8);
}


void BattleLogicFieldAi__DefenceTargetInitialize(
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
  FieldHp = AiFieldEntity__GetFieldHp(aiFieldEntity, 0);
  this = (BattleLogicFieldAi_o *)AiFieldEntity__GetFieldUIId(aiFieldEntity, 0);
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
          BattlePerformance__DefenceTargetInitialize((BattlePerformance_o *)this, FieldHp, v6, 0);
          return;
        }
      }
LABEL_8:
      sub_1C7BD40(this, aiFieldEntity);
    }
  }
}


BattleLogicTask_array *BattleLogicFieldAi__GetCommonFieldAiTask(
        BattleLogicFieldAi_o *this,
        int32_t prcState,
        int32_t logicType,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v18; // x23
  BattleData_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4CF185B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_BattleFieldData___);
    sub_1C7BAE8(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicFieldAi___c__DisplayClass19_0__GetCommonFieldAiTask_b__0__);
    sub_1C7BAE8(&BattleLogicFieldAi___c__DisplayClass19_0_TypeInfo);
    byte_4CF185B = 1;
  }
  v7 = sub_1C7BD34(BattleLogicFieldAi___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = prcState,
        (data = this->fields.data) == 0) )
  {
    sub_1C7BD40(v8, v9);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v18 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass19_0__GetCommonFieldAiTask_b__0__,
    0);
  if ( BasicHelper__Any_object__51746772(
         field_datalist,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_31597D4 *)Method_BasicHelper_Any_BattleFieldData___) )
  {
    return BattleLogicFieldAi__checkFieldAiTask(this, logicType, v19, v20);
  }
  else
  {
    return this->fields.zeroTask;
  }
}


BattleLogicTask_array *BattleLogicFieldAi__checkFieldAiEntry(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  il2cpp_array_size_t max_length; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0 )
LABEL_11:
    sub_1C7BD40(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C7BD48(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_47224712(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     15,
                                     (BattleLogicBaseAi_o *)v5,
                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 44, v7, v8);
    LODWORD(max_length) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)max_length )
      return v5->fields.zeroTask;
  }
}


BattleLogicTask_array *BattleLogicFieldAi__checkFieldAiStartTurn(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  il2cpp_array_size_t max_length; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0 )
LABEL_11:
    sub_1C7BD40(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C7BD48(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_47224712(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     4,
                                     (BattleLogicBaseAi_o *)v5,
                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 45, v7, v8);
    LODWORD(max_length) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)max_length )
      return v5->fields.zeroTask;
  }
}


BattleLogicTask_array *BattleLogicFieldAi__checkFieldAiStartWave(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  il2cpp_array_size_t max_length; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0 )
LABEL_11:
    sub_1C7BD40(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C7BD48(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_47224712(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v6],
                                     6,
                                     (BattleLogicBaseAi_o *)v5,
                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v5, 43, v7, v8);
    LODWORD(max_length) = field_datalist->max_length;
    if ( (__int64)++v6 >= (int)max_length )
      return v5->fields.zeroTask;
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicFieldAi__checkFieldAiTask(
        BattleLogicFieldAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4CF1856 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
    byte_4CF1856 = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_34B9948 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_34B96C0 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v8);
    }
LABEL_8:
    sub_1C7BD40(taskDictionary, *(_QWORD *)&ltype);
  }
  return this->fields.zeroTask;
}


BattleLogicTask_array *BattleLogicFieldAi__createBase(
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v18; // x0

  if ( (byte_4CF1855 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask___TypeInfo);
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    byte_4CF1855 = 1;
  }
  v6 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0);
  if ( !v6
    || (v6->fields.actiontype = actionType,
        BattleLogicTask__setActor(v6, 5, index, 0),
        (v7 = sub_1C7BB90(BattleLogicTask___TypeInfo, 1)) == 0) )
  {
    sub_1C7BD40(v7, v8);
  }
  v9 = v7;
  v10 = sub_1C7BC24(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
  if ( !v10 )
  {
    v18 = sub_1C7BD64(0);
    sub_1C7BC10(v18, 0);
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C7BD48(v10);
  *(_QWORD *)(v9 + 32) = v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)v6, v11, v12, v13, v14, v15, v16);
  return (BattleLogicTask_array *)v9;
}


BattleLogicTask_array *BattleLogicFieldAi__createBaseActionTask(
        BattleLogicFieldAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicFieldAi_o *v4; // x20
  int32_t v5; // w22
  unsigned int v6; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  unsigned int max_length; // w9
  BattleFieldData_o *v10; // x24
  System_Collections_Generic_List_object__o *v11; // x23
  struct BattleData_o *v12; // x8
  AiFieldEntity_o *Action_47225768; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x5

  v4 = this;
  if ( (byte_4CF1857 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicFieldAi_o *)sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF1857 = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_34B9948 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_34B96C0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v5 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0);
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
        sub_1C7BD48(this);
      v10 = field_datalist->m_Items[v6];
      v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v12 = v4->fields.data;
      if ( v12 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_47225768 = AiLogic__getAction_47225768(
                              (AiLogic_o *)this,
                              v10,
                              v5,
                              v12->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0);
          if ( Action_47225768 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v10,
                                             Action_47225768,
                                             (int32_t)v14,
                                             v5,
                                             v15);
            if ( !v11 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_47225768,
                                           task->fields.actiontype,
                                           v6 + 1,
                                           v14);
          if ( v11 )
          {
            System_Collections_Generic_List_object___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v11,
                                              (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1C7BD40(this, task);
    }
  }
  return v4->fields.zeroTask;
}


BattleLogicTask_array *BattleLogicFieldAi__createDeadActionTask(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  BattleLogicTask_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4CF1858 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    byte_4CF1858 = 1;
  }
  v3 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  v3->fields.actiontype = 34;
  BattleLogicTask__setActor(v3, 5, 0, 0);
  return BattleLogicFieldAi__createBaseActionTask(this, v3, v6);
}


int32_t BattleLogicFieldAi__get_ActorType(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  return 5;
}


BattleLogicTask_array *BattleLogicFieldAi__makeResurrectionTask(
        BattleLogicFieldAi_o *this,
        System_Int32_array *targetIds,
        BattleSkillInfoData_o *skillInfo,
        System_String_o *motionMessage,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x25
  bool v15; // w26
  int32_t v16; // w24
  __int64 v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_4CF185D & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF185D = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_17;
  max_length = targetIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    v15 = isForcedSpeedOne;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C7BD48(v11);
      v16 = targetIds->m_Items[v14];
      if ( (v16 & 0x80000000) == 0 )
      {
        v17 = sub_1C7BD34(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0);
        if ( !v17 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v17, 0);
        *(_QWORD *)(v17 + 72) = skillInfo;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v17 + 72), (int32_t)skillInfo, v18, v19, v20, v21, v22, v23);
        BattleLogicTask__setActor((BattleLogicTask_o *)v17, 5, v16, 0);
        *(_QWORD *)(v17 + 176) = motionMessage;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v17 + 176), (int32_t)motionMessage, v24, v25, v26, v27, v28, v29);
        *(_BYTE *)(v17 + 184) = v15;
        if ( !v10 )
          goto LABEL_17;
        items = v10->fields._items;
        v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v17,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v17;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v39 + 4), v17, v30, v31, v32, v33, v34, v35);
        }
      }
      LODWORD(max_length) = targetIds->max_length;
    }
    while ( (__int64)++v14 < (int)max_length );
  }
  if ( !v10 )
LABEL_17:
    sub_1C7BD40(v11, v12);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicFieldAi__procAiAct(
        BattleLogicFieldAi_o *this,
        BattleFieldData_o *fieldData,
        AiFieldEntity_o *aiEnt,
        int32_t countAct,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v11; // x1
  AiActEntity_o *v12; // x25
  int32_t v13; // w26
  __int64 v14; // x24
  AiState_o *aiState; // x23
  char v16; // w27
  WeightRate_int__o *v18; // x0
  int *skillVals; // x8
  int32_t v20; // w23
  unsigned int v21; // w27
  __int64 v22; // x9
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v24; // x23
  bool isForcedSkillSpeedOne; // w28
  BattleData_o *v26; // x27
  __int64 v27; // x27
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_String_o *infoText; // x1
  const MethodInfo *v35; // x5
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  bool isSkillType; // w0
  const MethodInfo *v57; // x7
  const MethodInfo *v58; // x5
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  const MethodInfo *v69; // x2
  FieldAiActArgument_o *v70; // x24
  const MethodInfo *v71; // x2
  System_Int32_array *v72; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-68h] BYREF
  int v74; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CF185A & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&BattleSkillInfoData_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    sub_1C7BAE8(&FieldAiActArgument_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_WeightRate_int___ctor__);
    sub_1C7BAE8(&WeightRate_int__TypeInfo);
    sub_1C7BAE8(&StringLiteral_8764/*"MOTION_"*/);
    byte_4CF185A = 1;
  }
  v74 = 0;
  v72 = 0;
  target = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_57;
  if ( !Instance )
    goto LABEL_57;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        aiEnt->fields.aiActId,
                        (const MethodInfo_342E2FC *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_57;
  v12 = (AiActEntity_o *)Instance;
  v13 = *(_DWORD *)(Instance + 20);
  v14 = sub_1C7BD34(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0);
  Instance = AiAct__Check(99, v12->fields.type, 0);
  if ( !fieldData )
    goto LABEL_57;
  aiState = fieldData->fields.aiState;
  v16 = Instance;
  Instance = AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0);
  v11 = (unsigned int)Instance;
  if ( (v16 & 1) != 0 )
  {
    if ( aiState )
    {
      AiState__changeThinking(aiState, Instance, 0);
      return this->fields.emptyTask;
    }
LABEL_57:
    sub_1C7BD40(Instance, v11);
  }
  if ( (int)Instance >= 1 )
  {
    Instance = AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0);
    if ( !aiState )
      goto LABEL_57;
    AiState__changeThinking(aiState, Instance, 0);
  }
  v18 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v18, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v13 - 40) >= 2 )
  {
    if ( v13 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_57;
      *(_WORD *)&data->fields.endbattleFlg = 257;
      v13 = 91;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v13, 0) )
    {
      v13 = 0;
    }
  }
  else
  {
    skillVals = (int *)v12->fields.skillVals;
    if ( !skillVals )
      goto LABEL_57;
    if ( skillVals[6] < 2 )
      goto LABEL_25;
    v21 = skillVals[8];
    v20 = skillVals[9];
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_57;
    Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v21, v20, 0);
    if ( Instance )
    {
      if ( !v14 )
        goto LABEL_57;
      v22 = *(_QWORD *)v14;
      *(_DWORD *)(v14 + 24) = fieldData->fields.uniqueId;
      *(_QWORD *)(v14 + 16) = 20;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v22 + 376))(v14, v21, *(_QWORD *)(v22 + 384));
      *(_DWORD *)(v14 + 36) = v20;
    }
    else
    {
LABEL_25:
      v13 = 0;
    }
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0) )
    goto LABEL_32;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_57;
  if ( BattleData__checkEnablePlaySpeedOneFromFieldIdList(
         (BattleData_o *)Instance,
         aiEnt->fields.id,
         aiEnt->fields.idx,
         0) )
  {
    isForcedSkillSpeedOne = AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0);
  }
  else
  {
LABEL_32:
    if ( !AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0) )
    {
      if ( (((__int64 (__fastcall *)(BattleLogicFieldAi_o *, AiFieldEntity_o *, const MethodInfo *))this->klass->vtable._27_IsNotPlayedActionFirstTime.methodPtr)(
              this,
              aiEnt,
              this->klass->vtable._27_IsNotPlayedActionFirstTime.method)
          & 1) == 0 )
      {
        isForcedSkillSpeedOne = 0;
        goto LABEL_38;
      }
      v26 = this->fields.data;
      Instance = ((__int64 (__fastcall *)(AiFieldEntity_o *, const MethodInfo *))aiEnt->klass->vtable._7_get_FirstTimeSaveKey.methodPtr)(
                   aiEnt,
                   aiEnt->klass->vtable._7_get_FirstTimeSaveKey.method);
      if ( !v26 )
        goto LABEL_57;
      BattleData__AddPlayedFirstTimeNormalSpeedAiList(v26, (System_String_o *)Instance, 0);
    }
    isForcedSkillSpeedOne = 1;
  }
LABEL_38:
  v27 = sub_1C7BD34(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v27, 0);
  if ( !v27 )
    goto LABEL_57;
  *(_BYTE *)(v27 + 184) = isForcedSkillSpeedOne;
  infoText = aiEnt->fields.infoText;
  *(_QWORD *)(v27 + 176) = infoText;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 176), (int32_t)infoText, v28, v29, v30, v31, v32, v33);
  BattleLogicTask__setActor((BattleLogicTask_o *)v27, 5, fieldData->fields.uniqueId, 0);
  Instance = (__int64)fieldData->fields.aiState;
  if ( !Instance )
    goto LABEL_57;
  AiState__setBeforeAction((AiState_o *)Instance, v13, aiEnt->fields.aiActId, 0);
  if ( v13 == 71 )
  {
    Instance = AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0);
    v74 = Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v24,
        isForcedSkillSpeedOne,
        (BattleLogicTask_o *)v27,
        v35);
      v36 = System_Int32__ToString((int32_t)&v74, 0);
      v37 = System_String__Concat_64176912((System_String_o *)StringLiteral_8764/*"MOTION_"*/, v36, 0);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v27, v37, 0);
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_57;
      Instance = (__int64)logic->fields.perf;
      if ( !Instance )
        goto LABEL_57;
      ServantGameObject = BattlePerformance__getServantGameObject(
                            (BattlePerformance_o *)Instance,
                            fieldData->fields.uniqueId,
                            0);
      *(_QWORD *)(v27 + 128) = ServantGameObject;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 128), (int32_t)ServantGameObject, v40, v41, v42, v43, v44, v45);
      BattleLogicTask__setActor((BattleLogicTask_o *)v27, 5, fieldData->fields.uniqueId, 0);
      if ( !v24 )
        goto LABEL_57;
      items = v24->fields._items;
      v53 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v24->fields._version;
      if ( !items )
        goto LABEL_57;
      size = v24->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v27,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v55[4] = (Il2CppClass *)v27;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v55 + 4), v27, v46, v47, v48, v49, v50, v51);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v24,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_56:
    if ( !v24 )
      goto LABEL_57;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v24,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v13, 0);
  if ( !v14 || !isSkillType )
  {
    v70 = (FieldAiActArgument_o *)sub_1C7BD34(FieldAiActArgument_TypeInfo);
    FieldAiActArgument___ctor(v70, v12, (AiBaseEntity_o *)aiEnt, fieldData, isForcedSkillSpeedOne, procState, 0);
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v24,
      v13,
      (BaseAiActArgument_o *)v70,
      0);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v71);
    goto LABEL_56;
  }
  target = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  v72 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
  Instance = BattleLogicFieldAi__CheckFieldSkillTarget(
               this,
               (BattleSkillInfoData_o *)v14,
               (AiBaseEntity_o *)aiEnt,
               v12,
               fieldData,
               &target,
               &v72,
               v57);
  if ( (Instance & 1) == 0 )
    goto LABEL_56;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v24,
    isForcedSkillSpeedOne,
    (BattleLogicTask_o *)v27,
    v58);
  BattleLogicBaseAi__SetSkillSelectAddIndex(
    (BattleLogicBaseAi_o *)this,
    (BattleSkillInfoData_o *)v14,
    (AiBaseEntity_o *)aiEnt,
    0);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v27, (BattleSkillInfoData_o *)v14, target, v72, 0, 0, 0);
  BattleLogicTask__setActor((BattleLogicTask_o *)v27, 5, fieldData->fields.uniqueId, 0);
  if ( !v24 )
    goto LABEL_57;
  v65 = v24->fields._items;
  v66 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v24->fields._version;
  if ( !v65 )
    goto LABEL_57;
  v67 = v24->fields._size;
  if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v27,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v68 = &v65->obj.klass + v67;
    v24->fields._size = v67 + 1;
    v68[4] = (Il2CppClass *)v27;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v68 + 4), v27, v59, v60, v61, v62, v63, v64);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v69);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v24,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicFieldAi__setReactionFunction(
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
  BattleLogic_reactionFunction_o *v19; // x21

  if ( (byte_4CF1854 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleLogicFieldAi_createBaseActionTask__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C7BAE8(&BattleLogic_reactionFunction_TypeInfo);
    byte_4CF1854 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  if ( !list )
    sub_1C7BD40(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v5,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v8,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v9,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v10,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v11,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v12,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v13,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v14,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v15,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v16,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v17,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v18,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_1C7BD34(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    74,
    (Il2CppObject *)v19,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


void BattleLogicFieldAi___c__DisplayClass19_0___ctor(
        BattleLogicFieldAi___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFieldAi___c__DisplayClass19_0___GetCommonFieldAiTask_b__0(
        BattleLogicFieldAi___c__DisplayClass19_0_o *this,
        BattleFieldData_o *fieldData,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *_4__this; // x3

  _4__this = (BattleLogicBaseAi_o *)this->fields.__4__this;
  if ( !_4__this || !_4__this->fields.aiLogic )
    sub_1C7BD40(this, fieldData);
  return AiLogic__checkThinking_47224712(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0);
}


void BattleLogicFieldAi___c__DisplayClass25_0___ctor(
        BattleLogicFieldAi___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFieldAi___c__DisplayClass25_0___CheckAiCanActionFromTargets_b__0(
        BattleLogicFieldAi___c__DisplayClass25_0_o *this,
        BattleFieldData_o *f,
        const MethodInfo *method)
{
  struct AiLogic_AiInfo_o *aiInfo; // x8

  if ( !f || (aiInfo = this->fields.aiInfo) == 0 )
    sub_1C7BD40(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}