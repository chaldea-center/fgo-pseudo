void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleLogicTask_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1

  if ( (byte_4B47978 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicTask___TypeInfo, method);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__, v4);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v5);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v6);
    sub_1BDB878(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v8);
    byte_4B47978 = 1;
  }
  v9 = (struct BattleLogicTask_array *)sub_1BDB920(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.zeroTask, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v12,
    (const MethodInfo_336985C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v12 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    48,
    28,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    49,
    29,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    46,
    30,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    47,
    31,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    43,
    32,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    45,
    33,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    44,
    43,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    75,
    64,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    76,
    70,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    79,
    74,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.taskDictionary, (int32_t)v12, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v17,
    (const MethodInfo_336985C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v17 )
LABEL_6:
    sub_1BDBAD4(v13, v14);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    28,
    10,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    29,
    11,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    30,
    12,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    31,
    13,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    32,
    6,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    33,
    4,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    34,
    2,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    43,
    15,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    64,
    21,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    66,
    19,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    67,
    22,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    70,
    23,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    74,
    25,
    (const MethodInfo_336A220 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.stateDicitionary, (int32_t)v17, v18, v19);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v20);
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
  void *Voice; // x0
  __int64 v14; // x1
  struct BattleData_o *data; // x8
  System_String_o *v16; // x24
  int32_t EffectType; // w0
  int32_t v18; // w25
  __int64 v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x2
  __int64 v34; // x8
  _QWORD *v35; // x19
  System_String_o *v36; // x19
  float v37; // s0
  float v38; // s8
  System_String_o *v39; // x19
  System_String_o *v40; // x20

  if ( (byte_4B47973 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicTask_TypeInfo, ent);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1BDB878(&SoundManager_TypeInfo, v12);
    byte_4B47973 = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    v16 = (System_String_o *)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v18 = EffectType;
        v19 = sub_1BDBAC4(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v19, 0LL);
        if ( !v19 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v19, v18, 0LL);
        *(_QWORD *)(v19 + 120) = v16;
        sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 120), (int32_t)v16, v20, v21);
        *(_BYTE *)(v19 + 184) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v19 + 212) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_31;
          motionMessage = mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v19 + 176) = motionMessage;
          sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 176), (int32_t)motionMessage, v22, v23);
          *p_motionMessage = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)p_motionMessage, 0, v27, v28);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          items = retlist->fields._items;
          v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retlist->fields._version;
          if ( items )
          {
            size = retlist->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retlist,
                (Il2CppObject *)v19,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v19;
              sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 4), v19, v22, v23);
            }
            return;
          }
        }
LABEL_31:
        sub_1BDBAD4(Voice, v14);
      }
    }
    if ( !v16 )
      return;
    Voice = System_String__Split(v16, 0x3Au, 0, 0LL);
    if ( !Voice )
      goto LABEL_31;
    v34 = *((_QWORD *)Voice + 3);
    v35 = Voice;
    if ( (int)v34 < 2 )
    {
      if ( (_DWORD)v34 )
      {
        v36 = (System_String_o *)*((_QWORD *)Voice + 4);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice(v36, 0, 0LL);
        return;
      }
LABEL_32:
      sub_1BDBADC(Voice, v14, v33);
    }
    if ( (_DWORD)v34 == 2 )
    {
      v38 = 1.0;
    }
    else
    {
      v37 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
      v34 = v35[3];
      v38 = v37;
    }
    if ( (unsigned int)v34 < 2 )
      goto LABEL_32;
    v40 = (System_String_o *)v35[4];
    v39 = (System_String_o *)v35[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_40520012(v40, v39, v38, 0LL, 0, 0LL);
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
  if ( (byte_4B47975 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt);
    this = (BattleLogicFieldAi_o *)sub_1BDB878(&DataManager_TypeInfo, v11);
    byte_4B47975 = 1;
  }
  entity = 0LL;
  v12 = (unsigned int)*actType;
  if ( (v12 & 0xFFFFFFFE) == 40 )
  {
    if ( !aiActEnt )
      goto LABEL_18;
    skillVals = aiActEnt->fields.skillVals;
    if ( !skillVals )
      goto LABEL_18;
    if ( (int)skillVals->max_length > 1 )
    {
      v15 = skillVals->m_Items[1];
      v14 = skillVals->m_Items[2];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !this )
        goto LABEL_18;
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
LABEL_18:
        sub_1BDBAD4(this, v12);
      }
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v12 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v12, (const MethodInfo *)skillInfo) )
LABEL_16:
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
  __int64 v14; // x21
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x22
  System_Func_object__bool__o *v21; // x23
  Il2CppObject *object; // x21
  BattleSkillInfoData_o *v23; // x22
  const MethodInfo *v24; // x5
  const MethodInfo *v25; // x7
  bool isSkillType; // w8
  bool v27; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-50h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B47977 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Find_BattleFieldData___, aiInfo);
    sub_1BDB878(&BattleSkillInfoData_TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_AiActMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&System_Func_BattleFieldData__bool__TypeInfo, v11);
    sub_1BDB878(&Method_BattleLogicFieldAi___c__DisplayClass25_0__CheckAiCanActionFromTargets_b__0__, v12);
    sub_1BDB878(&BattleLogicFieldAi___c__DisplayClass25_0_TypeInfo, v13);
    byte_4B47977 = 1;
  }
  entity = 0LL;
  ptTarget = 0LL;
  target = 0LL;
  v14 = sub_1BDBAC4(BattleLogicFieldAi___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 16) = aiInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)aiInfo, v17, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0LL) )
LABEL_18:
    sub_1BDBAD4(Master_object, v16);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v21 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_BattleLogicFieldAi___c__DisplayClass25_0__CheckAiCanActionFromTargets_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_301D9C8 *)Method_BasicHelper_Find_BattleFieldData___);
  v23 = (BattleSkillInfoData_o *)sub_1BDBAC4(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v23, 0LL);
  BattleLogicFieldAi__CheckAiActType(this, (AiActEntity_o *)entity, v23, (BattleFieldData_o *)object, &actType, v24);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v27 = 1;
  if ( v23 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v23,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             (BattleFieldData_o *)object,
             &target,
             &ptTarget,
             v25);
  }
  return v27;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__CheckFieldAIBeforeWaveStartAnimation(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleLogicFieldAi__GetCommonFieldAiTask(this, 23, 76, v2);
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__CheckFieldAiBeforeBattleResultApi(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleLogicFieldAi__GetCommonFieldAiTask(this, 25, 79, v2);
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
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1BDBAD4(this, method);
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
      sub_1BDBADC(this, method, v2);
    this = (BattleLogicFieldAi_o *)v6->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_45440140(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v7],
                                     21,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 75, v2, v8);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 Instance; // x0
  __int64 v19; // x1
  SkillLvMaster_o *v20; // x19
  SkillLvEntity_o *v21; // x26
  __int64 v22; // x19
  __int64 v23; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x27
  int v25; // w22
  __int64 v26; // x8
  unsigned __int64 v27; // x24
  char v28; // w27
  bool IsDeadToEnableUpHate; // w25
  __int64 v30; // x28
  BattleLogicTarget_o *logictarget; // x29
  int32_t v32; // w20
  int32_t uniqueId; // w19
  System_Int32_array *targetIndividuality; // x24
  System_Int32_array *FieldEnemyServantIDList; // x26
  char v36; // w27
  const MethodInfo *v37; // x3
  BattleData_o *data; // x8
  BattleLogicTarget_o *v39; // x19
  int32_t v40; // w20
  System_Int32_array *v41; // x29
  int32_t v42; // w24
  __int64 v43; // x28
  System_Int32_array *FieldPlayerServantIDList; // x26
  const MethodInfo *v45; // x3
  AiLogic_o *aiLogic; // x19
  CGThumbnailListItem_o *v48; // [xsp+18h] [xbp-88h]
  CGThumbnailListItem_o *v49; // [xsp+20h] [xbp-80h]
  char v50; // [xsp+2Ch] [xbp-74h]
  BattleLogicFieldAi_o *v52; // [xsp+38h] [xbp-68h]

  if ( (byte_4B47976 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1BDB878(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1BDB878(&int___TypeInfo, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B47976 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v22 )
    goto LABEL_41;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v49 = (CGThumbnailListItem_o *)target;
  if ( *(_DWORD *)(v22 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v22 + 32),
                        (const MethodInfo_32E1E3C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  v26 = *(_QWORD *)(v22 + 24);
  v52 = this;
  if ( (int)v26 < 1 )
  {
    v28 = 0;
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
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v24,
                            *(_DWORD *)(v22 + 32 + 4 * v27),
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v26) = *(_DWORD *)(v22 + 24);
      if ( (__int64)++v27 >= (int)v26 )
      {
        v28 = 0;
        goto LABEL_24;
      }
    }
    v28 = 1;
LABEL_24:
    this = v52;
  }
  if ( !fieldData )
    goto LABEL_41;
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( v25 | BattleLogic__checkFunctionTargetsAvailable(
               (BattleLogic_o *)Instance,
               v21->fields.funcId,
               fieldData->fields.uniqueId,
               0LL) )
  {
    Instance = SkillLvEntity__IsEnableTarget(v21, 0, 0LL);
    v50 = Instance;
    if ( aiEnt )
    {
      IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
      Instance = sub_1BDB920(int___TypeInfo, 1LL);
      if ( aiActEnt )
      {
        v30 = Instance;
        Instance = (__int64)this->fields.data;
        v48 = (CGThumbnailListItem_o *)ptTarget;
        if ( Instance )
        {
          logictarget = this->fields.logictarget;
          v32 = aiActEnt->fields.target;
          uniqueId = fieldData->fields.uniqueId;
          targetIndividuality = aiActEnt->fields.targetIndividuality;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
          if ( logictarget )
          {
            v36 = v28 | v25;
            Instance = BattleLogicTarget__getTargetAiAct(
                         logictarget,
                         v32,
                         uniqueId,
                         targetIndividuality,
                         FieldEnemyServantIDList,
                         v50 & 1,
                         v36,
                         (System_Int32_array *)Instance,
                         aiActEnt,
                         IsDeadToEnableUpHate,
                         0LL);
            if ( v30 )
            {
              if ( !*(_DWORD *)(v30 + 24) )
                goto LABEL_42;
              *(_DWORD *)(v30 + 32) = Instance;
              v49->klass = (CGThumbnailListItem_c *)v30;
              sub_1BDB81C(v49, v30, v23, v37);
              Instance = sub_1BDB920(int___TypeInfo, 1LL);
              data = v52->fields.data;
              if ( !data )
                goto LABEL_41;
              v39 = v52->fields.logictarget;
              v40 = aiActEnt->fields.target;
              v41 = aiActEnt->fields.targetIndividuality;
              v42 = fieldData->fields.uniqueId;
              v43 = Instance;
              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
              Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
              if ( !v39 )
                goto LABEL_41;
              Instance = BattleLogicTarget__getTargetAiAct(
                           v39,
                           v40,
                           v42,
                           v41,
                           FieldPlayerServantIDList,
                           v50 & 1,
                           v36,
                           (System_Int32_array *)Instance,
                           aiActEnt,
                           IsDeadToEnableUpHate,
                           0LL);
              if ( !v43 )
                goto LABEL_41;
              if ( !*(_DWORD *)(v43 + 24) )
LABEL_42:
                sub_1BDBADC(Instance, v19, v23);
              *(_DWORD *)(v43 + 32) = Instance;
              v48->klass = (CGThumbnailListItem_c *)v43;
              sub_1BDB81C(v48, v43, v23, v45);
              aiLogic = v52->fields.aiLogic;
              Instance = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
              if ( aiLogic )
                return !AiLogic__IsNoTargetNoActionTask(
                          aiLogic,
                          Instance,
                          (System_Int32_array *)v49->klass,
                          (System_Int32_array *)v48->klass,
                          0LL);
            }
          }
        }
      }
    }
LABEL_41:
    sub_1BDBAD4(Instance, v19);
  }
  return 0;
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

  if ( (byte_4B47970 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType);
    byte_4B47970 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1BDBAC4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_1BDBAD4(v6, v7);
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
      sub_1BDBAD4(this, aiFieldEntity);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicFieldAi__GetCommonFieldAiTask(
        BattleLogicFieldAi_o *this,
        int32_t prcState,
        int32_t logicType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v17; // x23
  BattleData_o *v18; // x2
  const MethodInfo *v19; // x3

  if ( (byte_4B47972 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_BattleFieldData___, *(_QWORD *)&prcState);
    sub_1BDB878(&System_Func_BattleFieldData__bool__TypeInfo, v7);
    sub_1BDB878(&Method_BattleLogicFieldAi___c__DisplayClass19_0__GetCommonFieldAiTask_b__0__, v8);
    sub_1BDB878(&BattleLogicFieldAi___c__DisplayClass19_0_TypeInfo, v9);
    byte_4B47972 = 1;
  }
  v10 = sub_1BDBAC4(BattleLogicFieldAi___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_DWORD *)(v10 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_1BDBAD4(v11, v12);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v17 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleLogicFieldAi___c__DisplayClass19_0__GetCommonFieldAiTask_b__0__,
    0LL);
  if ( BasicHelper__Any_object__50450088(
         field_datalist,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_BattleFieldData___) )
  {
    return BattleLogicFieldAi__checkFieldAiTask(this, logicType, v18, v19);
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
  BattleData_o *v2; // x2
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v5; // x8
  BattleLogicFieldAi_o *v6; // x19
  unsigned __int64 v7; // x21
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1BDBAD4(this, method);
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
      sub_1BDBADC(this, method, v2);
    this = (BattleLogicFieldAi_o *)v6->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_45440140(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v7],
                                     15,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 44, v2, v8);
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
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1BDBAD4(this, method);
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
      sub_1BDBADC(this, method, v2);
    this = (BattleLogicFieldAi_o *)v6->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_45440140(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v7],
                                     4,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 45, v2, v8);
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
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1BDBAD4(this, method);
  v5 = *(_QWORD *)&field_datalist->max_length;
  v6 = this;
  if ( (int)v5 < 1 )
    return v6->fields.zeroTask;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v5 )
      sub_1BDBADC(this, method, v2);
    this = (BattleLogicFieldAi_o *)v6->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_45440140(
                                     (AiLogic_o *)this,
                                     field_datalist->m_Items[v7],
                                     6,
                                     (BattleLogicBaseAi_o *)v6,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return BattleLogicFieldAi__checkFieldAiTask(v6, 43, v2, v8);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B4796D & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6);
    byte_4B4796D = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_336A40C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_336A184 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v9);
    }
LABEL_8:
    sub_1BDBAD4(taskDictionary, *(_QWORD *)&ltype);
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
  __int64 v12; // x1
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v16; // x0

  if ( (byte_4B4796C & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType);
    sub_1BDB878(&BattleLogicTask_TypeInfo, v6);
    byte_4B4796C = 1;
  }
  v7 = (BattleLogicTask_o *)sub_1BDBAC4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.actiontype = actionType,
        BattleLogicTask__setActor(v7, 5, index, 0LL),
        (v8 = sub_1BDB920(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_1BDBAD4(v8, v9);
  }
  v10 = v8;
  v11 = sub_1BDB9B4(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
  if ( !v11 )
  {
    v16 = sub_1BDBAF8(0LL);
    sub_1BDB9A0(v16, 0LL);
  }
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1BDBADC(v11, v12, v13);
  *(_QWORD *)(v10 + 32) = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)v7, v13, v14);
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
  __int64 v10; // x2
  int32_t v11; // w22
  unsigned int v12; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v16; // x24
  System_Collections_Generic_List_object__o *v17; // x23
  struct BattleData_o *v18; // x8
  AiFieldEntity_o *Action_45441196; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x5

  v4 = this;
  if ( (byte_4B4796E & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicFieldAi_o *)sub_1BDB878(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_4B4796E = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_336A40C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_336A184 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v11 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0LL);
      v12 = (unsigned int)this;
    }
    else
    {
      v12 = 0;
    }
    data = v4->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v12 < (int)max_length )
    {
      if ( v12 >= max_length )
        sub_1BDBADC(this, task, v10);
      v16 = field_datalist->m_Items[v12];
      v17 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v18 = v4->fields.data;
      if ( v18 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_45441196 = AiLogic__getAction_45441196(
                              (AiLogic_o *)this,
                              v16,
                              v11,
                              v18->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_45441196 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v16,
                                             Action_45441196,
                                             (int32_t)v20,
                                             v11,
                                             v21);
            if ( !v17 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v17,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_45441196,
                                           task->fields.actiontype,
                                           v12 + 1,
                                           v20);
          if ( v17 )
          {
            System_Collections_Generic_List_object___AddRange(
              v17,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v17,
                                              (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1BDBAD4(this, task);
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

  if ( (byte_4B4796F & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicTask_TypeInfo, method);
    byte_4B4796F = 1;
  }
  v3 = (BattleLogicTask_o *)sub_1BDBAC4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
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
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  bool v20; // w26
  int32_t v21; // w24
  __int64 v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B47974 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicTask_TypeInfo, targetIds);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_4B47974 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_17;
  v18 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = isForcedSpeedOne;
    do
    {
      if ( v19 >= (unsigned int)v18 )
        sub_1BDBADC(v15, v16, v17);
      v21 = targetIds->m_Items[v19 + 1];
      if ( (v21 & 0x80000000) == 0 )
      {
        v22 = sub_1BDBAC4(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v22, 0LL);
        if ( !v22 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v22, 0LL);
        *(_QWORD *)(v22 + 72) = skillInfo;
        sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 72), (int32_t)skillInfo, v23, v24);
        BattleLogicTask__setActor((BattleLogicTask_o *)v22, 5, v21, 0LL);
        *(_QWORD *)(v22 + 176) = motionMessage;
        sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 176), (int32_t)motionMessage, v25, v26);
        *(_BYTE *)(v22 + 184) = v20;
        if ( !v14 )
          goto LABEL_17;
        items = v14->fields._items;
        v30 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v22,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 4), v22, v27, v28);
        }
      }
      LODWORD(v18) = targetIds->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !v14 )
LABEL_17:
    sub_1BDBAD4(v15, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__procAiAct(
        BattleLogicFieldAi_o *this,
        BattleFieldData_o *fieldData,
        AiFieldEntity_o *aiEnt,
        int32_t countAct,
        int32_t procState,
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
  void *Instance; // x0
  __int64 v25; // x1
  AiActEntity_o *v26; // x25
  int32_t v27; // w26
  __int64 v28; // x24
  AiState_o *aiState; // x23
  char v30; // w27
  WeightRate_int__o *v32; // x0
  const MethodInfo *v33; // x2
  int *skillVals; // x8
  int32_t v35; // w23
  unsigned int v36; // w27
  __int64 v37; // x9
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v39; // x23
  bool isForcedSkillSpeedOne; // w0
  bool v41; // w28
  __int64 v42; // x27
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  bool v45; // w28
  struct System_String_o *infoText; // x1
  const MethodInfo *v47; // x5
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  bool isSkillType; // w0
  const MethodInfo *v61; // x7
  const MethodInfo *v62; // x5
  BattleLogicBaseAi_o *v63; // x0
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  const MethodInfo *v71; // x2
  __int64 v72; // x24
  const MethodInfo *v73; // x4
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x4
  const MethodInfo *v77; // x2
  System_Int32_array *v78; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-68h] BYREF
  int v80; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B47971 & 1) == 0 )
  {
    sub_1BDB878(&BattleLogicTask_TypeInfo, fieldData);
    sub_1BDB878(&BattleSkillInfoData_TypeInfo, v10);
    sub_1BDB878(&Method_DataManager_GetMasterData_AiActMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1BDB878(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v13);
    sub_1BDB878(&FieldAiActArgument_TypeInfo, v14);
    sub_1BDB878(&int___TypeInfo, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18);
    sub_1BDB878(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BDB878(&Method_WeightRate_int___ctor__, v21);
    sub_1BDB878(&WeightRate_int__TypeInfo, v22);
    sub_1BDB878(&StringLiteral_8732/*"MOTION_"*/, v23);
    byte_4B47971 = 1;
  }
  v80 = 0;
  v78 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_52;
  if ( !Instance )
    goto LABEL_52;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_32E1E3C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v26 = (AiActEntity_o *)Instance;
  v27 = *((_DWORD *)Instance + 5);
  v28 = sub_1BDBAC4(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v28, 0LL);
  Instance = (void *)AiAct__Check(99, v26->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_52;
  aiState = fieldData->fields.aiState;
  v30 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v25 = (unsigned int)Instance;
  if ( (v30 & 1) != 0 )
  {
    if ( aiState )
    {
      AiState__changeThinking(aiState, (int32_t)Instance, 0LL);
      return this->fields.emptyTask;
    }
    goto LABEL_52;
  }
  if ( (int)Instance >= 1 )
  {
    Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
    if ( !aiState )
      goto LABEL_52;
    AiState__changeThinking(aiState, (int32_t)Instance, 0LL);
  }
  v32 = (WeightRate_int__o *)sub_1BDBAC4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v32, (const MethodInfo_3AB9154 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v27 - 40) >= 2 )
  {
    if ( v27 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_52;
      *(_WORD *)&data->fields.endbattleFlg = 257;
      v27 = 91;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v27, v33) )
    {
      v27 = 0;
    }
  }
  else
  {
    skillVals = (int *)v26->fields.skillVals;
    if ( !skillVals )
      goto LABEL_52;
    if ( skillVals[6] < 2 )
      goto LABEL_25;
    v36 = skillVals[8];
    v35 = skillVals[9];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v36, v35, 0LL);
    if ( Instance )
    {
      if ( !v28 )
        goto LABEL_52;
      v37 = *(_QWORD *)v28;
      *(_DWORD *)(v28 + 24) = fieldData->fields.uniqueId;
      *(_QWORD *)(v28 + 16) = 20LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v37 + 376))(v28, v36, *(_QWORD *)(v37 + 384));
      *(_DWORD *)(v28 + 36) = v35;
    }
    else
    {
LABEL_25:
      v27 = 0;
    }
  }
  v39 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0LL) )
    goto LABEL_32;
  Instance = this->fields.data;
  if ( !Instance )
    goto LABEL_52;
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
LABEL_32:
    isForcedSkillSpeedOne = AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL);
  }
  v41 = isForcedSkillSpeedOne;
  v42 = sub_1BDBAC4(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v42, 0LL);
  if ( !v42
    || (v45 = v41,
        *(_BYTE *)(v42 + 184) = v45,
        infoText = aiEnt->fields.infoText,
        *(_QWORD *)(v42 + 176) = infoText,
        sub_1BDB81C((CGThumbnailListItem_o *)(v42 + 176), (int32_t)infoText, v43, v44),
        BattleLogicTask__setActor((BattleLogicTask_o *)v42, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_52:
    sub_1BDBAD4(Instance, v25);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v27, aiEnt->fields.aiActId, 0LL);
  if ( v27 == 71 )
  {
    Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
    v80 = (int)Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v39,
        v45,
        (BattleLogicTask_o *)v42,
        v47);
      v48 = System_Int32__ToString((int32_t)&v80, 0LL);
      v49 = System_String__Concat_62572260((System_String_o *)StringLiteral_8732/*"MOTION_"*/, v48, 0LL);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v42, v49, 0LL);
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_52;
      Instance = logic->fields.perf;
      if ( !Instance )
        goto LABEL_52;
      ServantGameObject = BattlePerformance__getServantGameObject(
                            (BattlePerformance_o *)Instance,
                            fieldData->fields.uniqueId,
                            0LL);
      *(_QWORD *)(v42 + 128) = ServantGameObject;
      sub_1BDB81C((CGThumbnailListItem_o *)(v42 + 128), (int32_t)ServantGameObject, v52, v53);
      BattleLogicTask__setActor((BattleLogicTask_o *)v42, 5, fieldData->fields.uniqueId, 0LL);
      if ( !v39 )
        goto LABEL_52;
      items = v39->fields._items;
      v57 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v39->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v39->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          (Il2CppObject *)v42,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v59[4] = (Il2CppClass *)v42;
        sub_1BDB81C((CGThumbnailListItem_o *)(v59 + 4), v42, v54, v55);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v39,
                                        (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_51:
    if ( !v39 )
      goto LABEL_52;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v39,
                                      (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v27, 0LL);
  if ( !v28 || !isSkillType )
  {
    v72 = sub_1BDBAC4(FieldAiActArgument_TypeInfo);
    BaseAiActArgument___ctor((BaseAiActArgument_o *)v72, v26, (AiBaseEntity_o *)aiEnt, procState, v73);
    *(_QWORD *)(v72 + 40) = fieldData;
    sub_1BDB81C((CGThumbnailListItem_o *)(v72 + 40), (int32_t)fieldData, v74, v75);
    *(_BYTE *)(v72 + 48) = v45;
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v39,
      v27,
      (BaseAiActArgument_o *)v72,
      v76);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v77);
    goto LABEL_51;
  }
  target = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  v78 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                       this,
                       (BattleSkillInfoData_o *)v28,
                       (AiBaseEntity_o *)aiEnt,
                       v26,
                       fieldData,
                       &target,
                       &v78,
                       v61);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_51;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v39,
    v45,
    (BattleLogicTask_o *)v42,
    v62);
  BattleLogicBaseAi__SetSkillSelectAddIndex(v63, (BattleSkillInfoData_o *)v28, (AiBaseEntity_o *)aiEnt, v64);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v42, (BattleSkillInfoData_o *)v28, target, v78, 0, 0, 0LL);
  BattleLogicTask__setActor((BattleLogicTask_o *)v42, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v39 )
    goto LABEL_52;
  v67 = v39->fields._items;
  v68 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v39->fields._version;
  if ( !v67 )
    goto LABEL_52;
  v69 = v39->fields._size;
  if ( (unsigned int)v69 >= v67->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)v42,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &v67->obj.klass + v69;
    v39->fields._size = v69 + 1;
    v70[4] = (Il2CppClass *)v42;
    sub_1BDB81C((CGThumbnailListItem_o *)(v70 + 4), v42, v65, v66);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v71);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v39,
                                    (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogic_reactionFunction_o *v20; // x21
  BattleLogic_reactionFunction_o *v21; // x21

  if ( (byte_4B4796B & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleLogicFieldAi_createBaseActionTask__, list);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1BDB878(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4B4796B = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_1BDBAD4(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v7,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v10,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v11,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v12,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v13,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v14,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v15,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v16,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v17,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v18,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v19,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v20,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v21 = (BattleLogic_reactionFunction_o *)sub_1BDBAC4(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v21, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    74,
    (Il2CppObject *)v21,
    (const MethodInfo_336D010 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


void __fastcall BattleLogicFieldAi___c__DisplayClass19_0___ctor(
        BattleLogicFieldAi___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFieldAi___c__DisplayClass19_0___GetCommonFieldAiTask_b__0(
        BattleLogicFieldAi___c__DisplayClass19_0_o *this,
        BattleFieldData_o *fieldData,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *_4__this; // x3

  _4__this = (BattleLogicBaseAi_o *)this->fields.__4__this;
  if ( !_4__this || !_4__this->fields.aiLogic )
    sub_1BDBAD4(this, fieldData);
  return AiLogic__checkThinking_45440140(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
}


void __fastcall BattleLogicFieldAi___c__DisplayClass25_0___ctor(
        BattleLogicFieldAi___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFieldAi___c__DisplayClass25_0___CheckAiCanActionFromTargets_b__0(
        BattleLogicFieldAi___c__DisplayClass25_0_o *this,
        BattleFieldData_o *f,
        const MethodInfo *method)
{
  struct AiLogic_AiInfo_o *aiInfo; // x8

  if ( !f || (aiInfo = this->fields.aiInfo) == 0LL )
    sub_1BDBAD4(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}