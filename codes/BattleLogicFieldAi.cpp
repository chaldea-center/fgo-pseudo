void BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_4CB93A7 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
    byte_4CB93A7 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C6BAB0(BattleLogicTask___TypeInfo, 0);
  this->fields.zeroTask = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v6,
    (const MethodInfo_3482178 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v6 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    48,
    28,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    49,
    29,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    46,
    30,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    47,
    31,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    43,
    32,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    45,
    33,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    44,
    43,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    75,
    64,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    76,
    70,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v6,
    79,
    74,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.taskDictionary, (int32_t)v6, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v11,
    (const MethodInfo_3482178 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v11 )
LABEL_6:
    sub_1C6BC60(v7, v8);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    28,
    10,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    29,
    11,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    30,
    12,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    31,
    13,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    32,
    6,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    33,
    4,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    34,
    2,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    43,
    15,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    64,
    21,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    66,
    19,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    67,
    22,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    70,
    23,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v11,
    74,
    25,
    (const MethodInfo_3482B3C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.stateDicitionary, (int32_t)v11, v12, v13);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v14);
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
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x8
  _QWORD *v32; // x19
  System_String_o *v33; // x19
  float v34; // s0
  float v35; // s8
  System_String_o *v36; // x19
  System_String_o *v37; // x20

  if ( (byte_4CB93A2 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB93A2 = 1;
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
        v17 = sub_1C6BC54(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0);
        if ( !v17 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v17, v16, 0);
        *(_QWORD *)(v17 + 120) = v14;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 120), (int32_t)v14, v18, v19);
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
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 176), (int32_t)motionMessage, v20, v21);
          *p_motionMessage = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)p_motionMessage, 0, v25, v26);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          items = retlist->fields._items;
          v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retlist->fields._version;
          if ( items )
          {
            size = retlist->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retlist,
                (Il2CppObject *)v17,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v17;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), v17, v20, v21);
            }
            return;
          }
        }
LABEL_31:
        sub_1C6BC60(Voice, v12);
      }
    }
    if ( !v14 )
      return;
    Voice = System_String__Split(v14, 0x3Au, 0, 0);
    if ( !Voice )
      goto LABEL_31;
    v31 = *((_QWORD *)Voice + 3);
    v32 = Voice;
    if ( (int)v31 < 2 )
    {
      if ( (_DWORD)v31 )
      {
        v33 = (System_String_o *)*((_QWORD *)Voice + 4);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice(v33, 0, 0);
        return;
      }
LABEL_32:
      sub_1C6BC68(Voice);
    }
    if ( (_DWORD)v31 == 2 )
    {
      v35 = 1.0;
    }
    else
    {
      v34 = System_Single__Parse(*((System_String_o **)Voice + 6), 0);
      v31 = v32[3];
      v35 = v34;
    }
    if ( (unsigned int)v31 < 2 )
      goto LABEL_32;
    v37 = (System_String_o *)v32[4];
    v36 = (System_String_o *)v32[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_41752360(v37, v36, v35, 0, 0, 0);
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
  BattleLogicBaseAi_o *v10; // x23
  __int64 v11; // x1
  int *skillVals; // x8
  int32_t v13; // w22
  unsigned int v14; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4CB93A4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    this = (BattleLogicFieldAi_o *)sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB93A4 = 1;
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
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
        sub_1C6BC60(this, v11);
      }
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v11 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v11, (const MethodInfo *)skillInfo) )
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
  const MethodInfo *v11; // x3
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x22
  System_Func_object__bool__o *v14; // x23
  Il2CppObject *object; // x21
  BattleSkillInfoData_o *v16; // x22
  const MethodInfo *v17; // x5
  const MethodInfo *v18; // x7
  bool isSkillType; // w8
  bool v20; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-50h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CB93A6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Find_BattleFieldData___);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C6BA08(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFieldAi___c__DisplayClass25_0__CheckAiCanActionFromTargets_b__0__);
    sub_1C6BA08(&BattleLogicFieldAi___c__DisplayClass25_0_TypeInfo);
    byte_4CB93A6 = 1;
  }
  entity = 0;
  ptTarget = 0;
  target = 0;
  v7 = sub_1C6BC54(BattleLogicFieldAi___c__DisplayClass25_0_TypeInfo);
  BattleLogicFieldAi___c__DisplayClass25_0___ctor((BattleLogicFieldAi___c__DisplayClass25_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = aiInfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)aiInfo, v10, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0) )
LABEL_18:
    sub_1C6BC60(Master_object, v9);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v14 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass25_0__CheckAiCanActionFromTargets_b__0__,
    0);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_3124FFC *)Method_BasicHelper_Find_BattleFieldData___);
  v16 = (BattleSkillInfoData_o *)sub_1C6BC54(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v16, 0);
  BattleLogicFieldAi__CheckAiActType(this, (AiActEntity_o *)entity, v16, (BattleFieldData_o *)object, &actType, v17);
  isSkillType = AiAct__isSkillType(actType, 0);
  v20 = 1;
  if ( v16 && isSkillType )
  {
    ptTarget = 0;
    target = 0;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v16,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             (BattleFieldData_o *)object,
             &target,
             &ptTarget,
             v18);
  }
  return v20;
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
    sub_1C6BC60(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C6BC68(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_46916908(
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
  int v20; // w22
  __int64 v21; // x8
  unsigned __int64 v22; // x24
  char v23; // w27
  bool IsDeadToEnableUpHate; // w25
  __int64 v25; // x28
  BattleLogicTarget_o *logictarget; // x29
  int32_t v27; // w20
  int32_t uniqueId; // w19
  System_Int32_array *targetIndividuality; // x24
  System_Int32_array *FieldEnemyServantIDList; // x26
  char v31; // w27
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  BattleData_o *data; // x8
  BattleLogicTarget_o *v35; // x19
  int32_t v36; // w20
  System_Int32_array *v37; // x29
  int32_t v38; // w24
  __int64 v39; // x28
  System_Int32_array *FieldPlayerServantIDList; // x26
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  AiLogic_o *aiLogic; // x19
  CGThumbnailListItem_o *v45; // [xsp+18h] [xbp-88h]
  CGThumbnailListItem_o *v46; // [xsp+20h] [xbp-80h]
  char v47; // [xsp+2Ch] [xbp-74h]
  BattleLogicFieldAi_o *v49; // [xsp+38h] [xbp-68h]

  if ( (byte_4CB93A5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB93A5 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v18 )
    goto LABEL_41;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v46 = (CGThumbnailListItem_o *)target;
  if ( *(_DWORD *)(v18 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v18 + 32),
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  v49 = this;
  if ( (int)v21 < 1 )
  {
    v23 = 0;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        goto LABEL_42;
      if ( !v19 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v19,
                            *(_DWORD *)(v18 + 32 + 4 * v22),
                            (const MethodInfo_33F90DC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v21) = *(_DWORD *)(v18 + 24);
      if ( (__int64)++v22 >= (int)v21 )
      {
        v23 = 0;
        goto LABEL_24;
      }
    }
    v23 = 1;
LABEL_24:
    this = v49;
  }
  if ( !fieldData )
    goto LABEL_41;
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( v20
     | BattleLogic__checkFunctionTargetsAvailable(
         (BattleLogic_o *)Instance,
         v17->fields.funcId,
         fieldData->fields.uniqueId,
         0) )
  {
    Instance = SkillLvEntity__IsEnableTarget(v17, 0, 0);
    v47 = Instance;
    if ( aiEnt )
    {
      IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0);
      Instance = sub_1C6BAB0(int___TypeInfo, 1);
      if ( aiActEnt )
      {
        v25 = Instance;
        Instance = (__int64)this->fields.data;
        v45 = (CGThumbnailListItem_o *)ptTarget;
        if ( Instance )
        {
          logictarget = this->fields.logictarget;
          v27 = aiActEnt->fields.target;
          uniqueId = fieldData->fields.uniqueId;
          targetIndividuality = aiActEnt->fields.targetIndividuality;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0);
          Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
          if ( logictarget )
          {
            v31 = v23 | v20;
            Instance = BattleLogicTarget__getTargetAiAct(
                         logictarget,
                         v27,
                         uniqueId,
                         targetIndividuality,
                         FieldEnemyServantIDList,
                         v47 & 1,
                         v31,
                         (System_Int32_array *)Instance,
                         aiActEnt,
                         IsDeadToEnableUpHate,
                         0);
            if ( v25 )
            {
              if ( !*(_DWORD *)(v25 + 24) )
                goto LABEL_42;
              *(_DWORD *)(v25 + 32) = Instance;
              v46->klass = (CGThumbnailListItem_c *)v25;
              sub_1C6B9AC(v46, v25, v32, v33);
              Instance = sub_1C6BAB0(int___TypeInfo, 1);
              data = v49->fields.data;
              if ( !data )
                goto LABEL_41;
              v35 = v49->fields.logictarget;
              v36 = aiActEnt->fields.target;
              v37 = aiActEnt->fields.targetIndividuality;
              v38 = fieldData->fields.uniqueId;
              v39 = Instance;
              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
              Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0);
              if ( !v35 )
                goto LABEL_41;
              Instance = BattleLogicTarget__getTargetAiAct(
                           v35,
                           v36,
                           v38,
                           v37,
                           FieldPlayerServantIDList,
                           v47 & 1,
                           v31,
                           (System_Int32_array *)Instance,
                           aiActEnt,
                           IsDeadToEnableUpHate,
                           0);
              if ( !v39 )
                goto LABEL_41;
              if ( !*(_DWORD *)(v39 + 24) )
LABEL_42:
                sub_1C6BC68(Instance);
              *(_DWORD *)(v39 + 32) = Instance;
              v45->klass = (CGThumbnailListItem_c *)v39;
              sub_1C6B9AC(v45, v39, v41, v42);
              aiLogic = v49->fields.aiLogic;
              Instance = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0);
              if ( aiLogic )
                return !AiLogic__IsNoTargetNoActionTask(
                          aiLogic,
                          Instance,
                          (System_Int32_array *)v46->klass,
                          (System_Int32_array *)v45->klass,
                          0);
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C6BC60(Instance, v15);
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

  if ( (byte_4CB939F & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    byte_4CB939F = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
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
      sub_1C6BC60(this, aiFieldEntity);
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
  const MethodInfo *v11; // x3
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v14; // x23
  BattleData_o *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_4CB93A1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleFieldData___);
    sub_1C6BA08(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleLogicFieldAi___c__DisplayClass19_0__GetCommonFieldAiTask_b__0__);
    sub_1C6BA08(&BattleLogicFieldAi___c__DisplayClass19_0_TypeInfo);
    byte_4CB93A1 = 1;
  }
  v7 = sub_1C6BC54(BattleLogicFieldAi___c__DisplayClass19_0_TypeInfo);
  BattleLogicFieldAi___c__DisplayClass19_0___ctor((BattleLogicFieldAi___c__DisplayClass19_0_o *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_DWORD *)(v7 + 24) = prcState,
        (data = this->fields.data) == 0) )
  {
    sub_1C6BC60(v8, v9);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v14 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass19_0__GetCommonFieldAiTask_b__0__,
    0);
  if ( BasicHelper__Any_object__51528924(
         field_datalist,
         (System_Func_T__bool__o *)v14,
         (const MethodInfo_31244DC *)Method_BasicHelper_Any_BattleFieldData___) )
  {
    return BattleLogicFieldAi__checkFieldAiTask(this, logicType, v15, v16);
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
    sub_1C6BC60(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C6BC68(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_46916908(
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
    sub_1C6BC60(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C6BC68(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_46916908(
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
    sub_1C6BC60(this, method);
  max_length = field_datalist->max_length;
  v5 = this;
  if ( (int)max_length < 1 )
    return v5->fields.zeroTask;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)max_length )
      sub_1C6BC68(this);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_46916908(
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

  if ( (byte_4CB939C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
    byte_4CB939C = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_3482D28 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_3482AA0 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v8);
    }
LABEL_8:
    sub_1C6BC60(taskDictionary, *(_QWORD *)&ltype);
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
  const MethodInfo *v12; // x3
  __int64 v14; // x0

  if ( (byte_4CB939B & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask___TypeInfo);
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    byte_4CB939B = 1;
  }
  v6 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0);
  if ( !v6
    || (v6->fields.actiontype = actionType,
        BattleLogicTask__setActor(v6, 5, index, 0),
        (v7 = sub_1C6BAB0(BattleLogicTask___TypeInfo, 1)) == 0) )
  {
    sub_1C6BC60(v7, v8);
  }
  v9 = v7;
  v10 = sub_1C6BB44(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
  if ( !v10 )
  {
    v14 = sub_1C6BC84(0);
    sub_1C6BB30(v14, 0);
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C6BC68(v10);
  *(_QWORD *)(v9 + 32) = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v6, v11, v12);
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
  AiFieldEntity_o *Action_46917964; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x5

  v4 = this;
  if ( (byte_4CB939D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicFieldAi_o *)sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB939D = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_3482D28 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_3482AA0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
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
        sub_1C6BC68(this);
      v10 = field_datalist->m_Items[v6];
      v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v12 = v4->fields.data;
      if ( v12 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_46917964 = AiLogic__getAction_46917964(
                              (AiLogic_o *)this,
                              v10,
                              v5,
                              v12->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0);
          if ( Action_46917964 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v10,
                                             Action_46917964,
                                             (int32_t)v14,
                                             v5,
                                             v15);
            if ( !v11 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_46917964,
                                           task->fields.actiontype,
                                           v6 + 1,
                                           v14);
          if ( v11 )
          {
            System_Collections_Generic_List_object___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v11,
                                              (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1C6BC60(this, task);
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

  if ( (byte_4CB939E & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    byte_4CB939E = 1;
  }
  v3 = (BattleLogicTask_o *)sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
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
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4CB93A3 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CB93A3 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C6BC68(v11);
      v16 = targetIds->m_Items[v14];
      if ( (v16 & 0x80000000) == 0 )
      {
        v17 = sub_1C6BC54(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0);
        if ( !v17 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v17, 0);
        *(_QWORD *)(v17 + 72) = skillInfo;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 72), (int32_t)skillInfo, v18, v19);
        BattleLogicTask__setActor((BattleLogicTask_o *)v17, 5, v16, 0);
        *(_QWORD *)(v17 + 176) = motionMessage;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 176), (int32_t)motionMessage, v20, v21);
        *(_BYTE *)(v17 + 184) = v15;
        if ( !v10 )
          goto LABEL_17;
        items = v10->fields._items;
        v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v17,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v17;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 4), v17, v22, v23);
        }
      }
      LODWORD(max_length) = targetIds->max_length;
    }
    while ( (__int64)++v14 < (int)max_length );
  }
  if ( !v10 )
LABEL_17:
    sub_1C6BC60(v11, v12);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicFieldAi__procAiAct(
        BattleLogicFieldAi_o *this,
        BattleFieldData_o *fieldData,
        AiFieldEntity_o *aiEnt,
        int32_t countAct,
        int32_t procState,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v11; // x1
  AiActEntity_o *v12; // x25
  int32_t v13; // w26
  __int64 v14; // x24
  AiState_o *aiState; // x23
  char v16; // w27
  WeightRate_int__o *v18; // x0
  const MethodInfo *v19; // x2
  int *skillVals; // x8
  int32_t v21; // w23
  unsigned int v22; // w27
  __int64 v23; // x9
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v25; // x23
  bool isForcedSkillSpeedOne; // w0
  bool v27; // w28
  __int64 v28; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  bool v31; // w28
  struct System_String_o *infoText; // x1
  const MethodInfo *v33; // x5
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  bool isSkillType; // w0
  const MethodInfo *v47; // x7
  const MethodInfo *v48; // x5
  BattleLogicBaseAi_o *v49; // x0
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  const MethodInfo *v57; // x2
  __int64 v58; // x24
  const MethodInfo *v59; // x4
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x4
  const MethodInfo *v63; // x2
  System_Int32_array *v64; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-68h] BYREF
  int v66; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CB93A0 & 1) == 0 )
  {
    sub_1C6BA08(&BattleLogicTask_TypeInfo);
    sub_1C6BA08(&BattleSkillInfoData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    sub_1C6BA08(&FieldAiActArgument_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_WeightRate_int___ctor__);
    sub_1C6BA08(&WeightRate_int__TypeInfo);
    sub_1C6BA08(&StringLiteral_8737/*"MOTION_"*/);
    byte_4CB93A0 = 1;
  }
  v66 = 0;
  v64 = 0;
  target = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_52;
  if ( !Instance )
    goto LABEL_52;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v12 = (AiActEntity_o *)Instance;
  v13 = *((_DWORD *)Instance + 5);
  v14 = sub_1C6BC54(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0);
  Instance = (void *)AiAct__Check(99, v12->fields.type, 0);
  if ( !fieldData )
    goto LABEL_52;
  aiState = fieldData->fields.aiState;
  v16 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0);
  v11 = (unsigned int)Instance;
  if ( (v16 & 1) != 0 )
  {
    if ( aiState )
    {
      AiState__changeThinking(aiState, (int32_t)Instance, 0);
      return this->fields.emptyTask;
    }
    goto LABEL_52;
  }
  if ( (int)Instance >= 1 )
  {
    Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0);
    if ( !aiState )
      goto LABEL_52;
    AiState__changeThinking(aiState, (int32_t)Instance, 0);
  }
  v18 = (WeightRate_int__o *)sub_1C6BC54(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v18, (const MethodInfo_3BF8CB8 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v13 - 40) >= 2 )
  {
    if ( v13 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_52;
      *(_WORD *)&data->fields.endbattleFlg = 257;
      v13 = 91;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v13, v19) )
    {
      v13 = 0;
    }
  }
  else
  {
    skillVals = (int *)v12->fields.skillVals;
    if ( !skillVals )
      goto LABEL_52;
    if ( skillVals[6] < 2 )
      goto LABEL_25;
    v22 = skillVals[8];
    v21 = skillVals[9];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v22, v21, 0);
    if ( Instance )
    {
      if ( !v14 )
        goto LABEL_52;
      v23 = *(_QWORD *)v14;
      *(_DWORD *)(v14 + 24) = fieldData->fields.uniqueId;
      *(_QWORD *)(v14 + 16) = 20;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v23 + 376))(v14, v22, *(_QWORD *)(v23 + 384));
      *(_DWORD *)(v14 + 36) = v21;
    }
    else
    {
LABEL_25:
      v13 = 0;
    }
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !AiFieldEntity__isForcedSkillSpeedOne(aiEnt, 0) )
    goto LABEL_32;
  Instance = this->fields.data;
  if ( !Instance )
    goto LABEL_52;
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
    isForcedSkillSpeedOne = AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0);
  }
  v27 = isForcedSkillSpeedOne;
  v28 = sub_1C6BC54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v28, 0);
  if ( !v28
    || (v31 = v27,
        *(_BYTE *)(v28 + 184) = v31,
        infoText = aiEnt->fields.infoText,
        *(_QWORD *)(v28 + 176) = infoText,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v28 + 176), (int32_t)infoText, v29, v30),
        BattleLogicTask__setActor((BattleLogicTask_o *)v28, 5, fieldData->fields.uniqueId, 0),
        (Instance = fieldData->fields.aiState) == 0) )
  {
LABEL_52:
    sub_1C6BC60(Instance, v11);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v13, aiEnt->fields.aiActId, 0);
  if ( v13 == 71 )
  {
    Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0);
    v66 = (int)Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v25,
        v31,
        (BattleLogicTask_o *)v28,
        v33);
      v34 = System_Int32__ToString((int32_t)&v66, 0);
      v35 = System_String__Concat_63966792((System_String_o *)StringLiteral_8737/*"MOTION_"*/, v34, 0);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v28, v35, 0);
      logic = this->fields.logic;
      if ( !logic )
        goto LABEL_52;
      Instance = logic->fields.perf;
      if ( !Instance )
        goto LABEL_52;
      ServantGameObject = BattlePerformance__getServantGameObject(
                            (BattlePerformance_o *)Instance,
                            fieldData->fields.uniqueId,
                            0);
      *(_QWORD *)(v28 + 128) = ServantGameObject;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v28 + 128), (int32_t)ServantGameObject, v38, v39);
      BattleLogicTask__setActor((BattleLogicTask_o *)v28, 5, fieldData->fields.uniqueId, 0);
      if ( !v25 )
        goto LABEL_52;
      items = v25->fields._items;
      v43 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v25->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v28,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v28;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v45 + 4), v28, v40, v41);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v25,
                                        (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_51:
    if ( !v25 )
      goto LABEL_52;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v25,
                                      (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v13, 0);
  if ( !v14 || !isSkillType )
  {
    v58 = sub_1C6BC54(FieldAiActArgument_TypeInfo);
    BaseAiActArgument___ctor((BaseAiActArgument_o *)v58, v12, (AiBaseEntity_o *)aiEnt, procState, v59);
    *(_QWORD *)(v58 + 40) = fieldData;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v58 + 40), (int32_t)fieldData, v60, v61);
    *(_BYTE *)(v58 + 48) = v31;
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v25,
      v13,
      (BaseAiActArgument_o *)v58,
      v62);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v63);
    goto LABEL_51;
  }
  target = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  v64 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                       this,
                       (BattleSkillInfoData_o *)v14,
                       (AiBaseEntity_o *)aiEnt,
                       v12,
                       fieldData,
                       &target,
                       &v64,
                       v47);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_51;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v25,
    v31,
    (BattleLogicTask_o *)v28,
    v48);
  BattleLogicBaseAi__SetSkillSelectAddIndex(v49, (BattleSkillInfoData_o *)v14, (AiBaseEntity_o *)aiEnt, v50);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v28, (BattleSkillInfoData_o *)v14, target, v64, 0, 0, 0);
  BattleLogicTask__setActor((BattleLogicTask_o *)v28, 5, fieldData->fields.uniqueId, 0);
  if ( !v25 )
    goto LABEL_52;
  v53 = v25->fields._items;
  v54 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v25->fields._version;
  if ( !v53 )
    goto LABEL_52;
  v55 = v25->fields._size;
  if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)v28,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v25->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v28;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 4), v28, v51, v52);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v57);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v25,
                                    (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4CB939A & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleLogicFieldAi_createBaseActionTask__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C6BA08(&BattleLogic_reactionFunction_TypeInfo);
    byte_4CB939A = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  if ( !list )
    sub_1C6BC60(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v5,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v8,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v9,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v10,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v11,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v12,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v13,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v14,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v15,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v16,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v17,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v18,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_1C6BC54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    74,
    (Il2CppObject *)v19,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1C6BC60(this, fieldData);
  return AiLogic__checkThinking_46916908(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0);
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
    sub_1C6BC60(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}