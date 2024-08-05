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
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1

  if ( (byte_4A01050 & 1) == 0 )
  {
    sub_1B64870(&BattleLogicTask___TypeInfo, method);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__, v4);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v5);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v6);
    sub_1B64870(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v7);
    sub_1B64870(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v8);
    byte_4A01050 = 1;
  }
  v9 = (struct BattleLogicTask_array *)sub_1B64918(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v9;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.zeroTask, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v12,
    (const MethodInfo_313CBD0 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v12 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    48,
    28,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    49,
    29,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    46,
    30,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    47,
    31,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    43,
    32,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    45,
    33,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    44,
    43,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    75,
    64,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v12,
    76,
    70,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v12;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.taskDictionary, (int32_t)v12, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v17,
    (const MethodInfo_313CBD0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v17 )
LABEL_6:
    sub_1B64ACC(v13, v14);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    28,
    10,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    29,
    11,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    30,
    12,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    31,
    13,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    32,
    6,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    33,
    4,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    34,
    2,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    43,
    15,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    64,
    21,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    66,
    19,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    67,
    22,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v17,
    70,
    23,
    (const MethodInfo_313D594 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v17;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.stateDicitionary, (int32_t)v17, v18, v19);
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
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int32_t v27; // w2
  int32_t v28; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x8
  _QWORD *v34; // x19
  System_String_o *v35; // x19
  float v36; // s0
  float v37; // s8
  System_String_o *v38; // x19
  System_String_o *v39; // x20

  if ( (byte_4A0104B & 1) == 0 )
  {
    sub_1B64870(&BattleLogicTask_TypeInfo, ent);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1B64870(&SoundManager_TypeInfo, v12);
    byte_4A0104B = 1;
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
        v19 = sub_1B64ABC(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v19, 0LL);
        if ( !v19 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v19, v18, 0LL);
        *(_QWORD *)(v19 + 104) = v16;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 104), (int32_t)v16, v20, v21);
        *(_BYTE *)(v19 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v19 + 188) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_31;
          motionMessage = mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v19 + 152) = motionMessage;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v19 + 152), (int32_t)motionMessage, v22, v23);
          *p_motionMessage = 0LL;
          sub_1B64814((ServantStatusBattleListViewItem_o *)p_motionMessage, 0, v27, v28);
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
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v19;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v32 + 4), v19, v22, v23);
            }
            return;
          }
        }
LABEL_31:
        sub_1B64ACC(Voice, v14);
      }
    }
    if ( !v16 )
      return;
    Voice = System_String__Split(v16, 0x3Au, 0, 0LL);
    if ( !Voice )
      goto LABEL_31;
    v33 = *((_QWORD *)Voice + 3);
    v34 = Voice;
    if ( (int)v33 < 2 )
    {
      if ( (_DWORD)v33 )
      {
        v35 = (System_String_o *)*((_QWORD *)Voice + 4);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice(v35, 0LL);
        return;
      }
LABEL_32:
      sub_1B64AD4(Voice, v14);
    }
    if ( (_DWORD)v33 == 2 )
    {
      v37 = 1.0;
    }
    else
    {
      v36 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
      v33 = v34[3];
      v37 = v36;
    }
    if ( (unsigned int)v33 < 2 )
      goto LABEL_32;
    v39 = (System_String_o *)v34[4];
    v38 = (System_String_o *)v34[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_38391544(v39, v38, v37, 0LL, 0LL);
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
  if ( (byte_4A0104D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt);
    this = (BattleLogicFieldAi_o *)sub_1B64870(&DataManager_TypeInfo, v11);
    byte_4A0104D = 1;
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
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
        sub_1B64ACC(this, v12);
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
  int32_t v18; // w3
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

  if ( (byte_4A0104F & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Find_BattleFieldData___, aiInfo);
    sub_1B64870(&BattleSkillInfoData_TypeInfo, v7);
    sub_1B64870(&Method_DataManager_GetMaster_AiActMaster___, v8);
    sub_1B64870(&DataManager_TypeInfo, v9);
    sub_1B64870(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v10);
    sub_1B64870(&System_Func_BattleFieldData__bool__TypeInfo, v11);
    sub_1B64870(&Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__, v12);
    sub_1B64870(&BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo, v13);
    byte_4A0104F = 1;
  }
  entity = 0LL;
  ptTarget = 0LL;
  target = 0LL;
  v14 = sub_1B64ABC(BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 16) = aiInfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)aiInfo, v17, v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_30D61D4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0LL) )
LABEL_18:
    sub_1B64ACC(Master_object, v16);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v21 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_2E27718 *)Method_BasicHelper_Find_BattleFieldData___);
  v23 = (BattleSkillInfoData_o *)sub_1B64ABC(BattleSkillInfoData_TypeInfo);
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

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1B64ACC(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B64AD4(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42891796(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 Instance; // x0
  __int64 v19; // x1
  SkillLvMaster_o *v20; // x19
  SkillLvEntity_o *v21; // x26
  __int64 v22; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x27
  int v24; // w22
  __int64 v25; // x8
  unsigned __int64 v26; // x24
  char v27; // w27
  bool IsDeadToEnableUpHate; // w25
  __int64 v29; // x28
  BattleLogicTarget_o *logictarget; // x29
  int32_t v31; // w20
  int32_t uniqueId; // w19
  System_Int32_array *targetIndividuality; // x24
  System_Int32_array *FieldEnemyServantIDList; // x26
  char v35; // w27
  int32_t v36; // w2
  int32_t v37; // w3
  BattleData_o *data; // x8
  BattleLogicTarget_o *v39; // x19
  int32_t v40; // w20
  System_Int32_array *v41; // x29
  int32_t v42; // w24
  __int64 v43; // x28
  System_Int32_array *FieldPlayerServantIDList; // x26
  int32_t v45; // w2
  int32_t v46; // w3
  AiLogic_o *aiLogic; // x19
  ServantStatusBattleListViewItem_o *v49; // [xsp+18h] [xbp-88h]
  ServantStatusBattleListViewItem_o *v50; // [xsp+20h] [xbp-80h]
  char v51; // [xsp+2Ch] [xbp-74h]
  BattleLogicFieldAi_o *v53; // [xsp+38h] [xbp-68h]

  if ( (byte_4A0104E & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo);
    sub_1B64870(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1B64870(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1B64870(&int___TypeInfo, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4A0104E = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v22 )
    goto LABEL_41;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = (ServantStatusBattleListViewItem_o *)target;
  if ( *(_DWORD *)(v22 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v22 + 32),
                        (const MethodInfo_30D6180 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  v53 = this;
  if ( (int)v25 < 1 )
  {
    v27 = 0;
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
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v23,
                            *(_DWORD *)(v22 + 32 + 4 * v26),
                            (const MethodInfo_30D6180 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
        goto LABEL_24;
      }
    }
    v27 = 1;
LABEL_24:
    this = v53;
  }
  if ( !fieldData )
    goto LABEL_41;
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( v24 | BattleLogic__checkFunctionTargetsAvailable(
               (BattleLogic_o *)Instance,
               v21->fields.funcId,
               fieldData->fields.uniqueId,
               0LL) )
  {
    Instance = SkillLvEntity__IsEnableTarget(v21, 0, 0LL);
    v51 = Instance;
    if ( aiEnt )
    {
      IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
      Instance = sub_1B64918(int___TypeInfo, 1LL);
      if ( aiActEnt )
      {
        v29 = Instance;
        Instance = (__int64)this->fields.data;
        v49 = (ServantStatusBattleListViewItem_o *)ptTarget;
        if ( Instance )
        {
          logictarget = this->fields.logictarget;
          v31 = aiActEnt->fields.target;
          uniqueId = fieldData->fields.uniqueId;
          targetIndividuality = aiActEnt->fields.targetIndividuality;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
          if ( logictarget )
          {
            v35 = v27 | v24;
            Instance = BattleLogicTarget__getTargetAiAct(
                         logictarget,
                         v31,
                         uniqueId,
                         targetIndividuality,
                         FieldEnemyServantIDList,
                         v51 & 1,
                         v35,
                         (System_Int32_array *)Instance,
                         aiActEnt,
                         IsDeadToEnableUpHate,
                         0LL);
            if ( v29 )
            {
              if ( !*(_DWORD *)(v29 + 24) )
                goto LABEL_42;
              *(_DWORD *)(v29 + 32) = Instance;
              v50->klass = (ServantStatusBattleListViewItem_c *)v29;
              sub_1B64814(v50, v29, v36, v37);
              Instance = sub_1B64918(int___TypeInfo, 1LL);
              data = v53->fields.data;
              if ( !data )
                goto LABEL_41;
              v39 = v53->fields.logictarget;
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
                           v51 & 1,
                           v35,
                           (System_Int32_array *)Instance,
                           aiActEnt,
                           IsDeadToEnableUpHate,
                           0LL);
              if ( !v43 )
                goto LABEL_41;
              if ( !*(_DWORD *)(v43 + 24) )
LABEL_42:
                sub_1B64AD4(Instance, v19);
              *(_DWORD *)(v43 + 32) = Instance;
              v49->klass = (ServantStatusBattleListViewItem_c *)v43;
              sub_1B64814(v49, v43, v45, v46);
              aiLogic = v53->fields.aiLogic;
              Instance = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
              if ( aiLogic )
                return !AiLogic__IsNoTargetNoActionTask(
                          aiLogic,
                          Instance,
                          (System_Int32_array *)v50->klass,
                          (System_Int32_array *)v49->klass,
                          0LL);
            }
          }
        }
      }
    }
LABEL_41:
    sub_1B64ACC(Instance, v19);
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

  if ( (byte_4A01048 & 1) == 0 )
  {
    sub_1B64870(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType);
    byte_4A01048 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B64ACC(v6, v7);
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
      sub_1B64ACC(this, aiFieldEntity);
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
  int32_t v14; // w3
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v17; // x23
  BattleData_o *v18; // x2
  const MethodInfo *v19; // x3

  if ( (byte_4A0104A & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_BattleFieldData___, *(_QWORD *)&prcState);
    sub_1B64870(&System_Func_BattleFieldData__bool__TypeInfo, v7);
    sub_1B64870(&Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__, v8);
    sub_1B64870(&BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo, v9);
    byte_4A0104A = 1;
  }
  v10 = sub_1B64ABC(BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_DWORD *)(v10 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_1B64ACC(v11, v12);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v17 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__,
    0LL);
  if ( BasicHelper__Any_object__48393208(
         field_datalist,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_2E26BF8 *)Method_BasicHelper_Any_BattleFieldData___) )
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
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x20
  __int64 v4; // x8
  BattleLogicFieldAi_o *v5; // x19
  unsigned __int64 v6; // x21
  BattleData_o *v7; // x2
  const MethodInfo *v8; // x3

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1B64ACC(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B64AD4(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42891796(
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

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1B64ACC(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B64AD4(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42891796(
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

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1B64ACC(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B64AD4(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42891796(
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4A01045 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6);
    byte_4A01045 = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_313D780 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_313D4F8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v9);
    }
LABEL_8:
    sub_1B64ACC(taskDictionary, *(_QWORD *)&ltype);
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v16; // x0

  if ( (byte_4A01044 & 1) == 0 )
  {
    sub_1B64870(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType);
    sub_1B64870(&BattleLogicTask_TypeInfo, v6);
    byte_4A01044 = 1;
  }
  v7 = (BattleLogicTask_o *)sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.actiontype = actionType,
        BattleLogicTask__setActor(v7, 5, index, 0LL),
        (v8 = sub_1B64918(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_1B64ACC(v8, v9);
  }
  v10 = v8;
  v11 = sub_1B649AC(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
  if ( !v11 )
  {
    v16 = sub_1B64AF0(0LL);
    sub_1B64998(v16, 0LL);
  }
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1B64AD4(v11, v12);
  *(_QWORD *)(v10 + 32) = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)v7, v13, v14);
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
  System_Collections_Generic_List_object__o *v16; // x22
  struct BattleData_o *v17; // x8
  AiFieldEntity_o *Action_42892852; // x0
  const MethodInfo *v19; // x3
  int32_t v20; // w4
  const MethodInfo *v21; // x5

  v4 = this;
  if ( (byte_4A01046 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicFieldAi_o *)sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_4A01046 = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_313D780 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_313D4F8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
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
        sub_1B64AD4(this, task);
      v15 = field_datalist->m_Items[v11];
      v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v17 = v4->fields.data;
      if ( v17 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_42892852 = AiLogic__getAction_42892852(
                              (AiLogic_o *)this,
                              v15,
                              v10,
                              v17->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_42892852 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v15,
                                             Action_42892852,
                                             (int32_t)v19,
                                             v20,
                                             v21);
            if ( !v16 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v16,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_42892852,
                                           task->fields.actiontype,
                                           v11 + 1,
                                           v19);
          if ( v16 )
          {
            System_Collections_Generic_List_object___AddRange(
              v16,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v16,
                                              (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1B64ACC(this, task);
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

  if ( (byte_4A01047 & 1) == 0 )
  {
    sub_1B64870(&BattleLogicTask_TypeInfo, method);
    byte_4A01047 = 1;
  }
  v3 = (BattleLogicTask_o *)sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0LL);
  if ( !v3 )
    sub_1B64ACC(v4, v5);
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
  __int64 v17; // x8
  unsigned __int64 v18; // x25
  bool v19; // w26
  int32_t v20; // w24
  __int64 v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4A0104C & 1) == 0 )
  {
    sub_1B64870(&BattleLogicTask_TypeInfo, targetIds);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_4A0104C = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_17;
  v17 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v19 = isForcedSpeedOne;
    do
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1B64AD4(v15, v16);
      v20 = targetIds->m_Items[v18 + 1];
      if ( (v20 & 0x80000000) == 0 )
      {
        v21 = sub_1B64ABC(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v21, 0LL);
        if ( !v21 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v21, 0LL);
        *(_QWORD *)(v21 + 72) = skillInfo;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 72), (int32_t)skillInfo, v22, v23);
        BattleLogicTask__setActor((BattleLogicTask_o *)v21, 5, v20, 0LL);
        *(_QWORD *)(v21 + 152) = motionMessage;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 152), (int32_t)motionMessage, v24, v25);
        *(_BYTE *)(v21 + 160) = v19;
        if ( !v14 )
          goto LABEL_17;
        items = v14->fields._items;
        v29 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v21,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v21;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v31 + 4), v21, v26, v27);
        }
      }
      LODWORD(v17) = targetIds->max_length;
    }
    while ( (__int64)++v18 < (int)v17 );
  }
  if ( !v14 )
LABEL_17:
    sub_1B64ACC(v15, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  AiActEntity_o *v25; // x24
  int32_t v26; // w25
  __int64 v27; // x23
  AiState_o *aiState; // x22
  char v29; // w26
  WeightRate_int__o *v31; // x0
  const MethodInfo *v32; // x2
  int *skillVals; // x8
  int32_t v34; // w22
  unsigned int v35; // w26
  __int64 v36; // x9
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v38; // x22
  bool isForcedSkillSpeedOne; // w0
  bool v40; // w27
  __int64 v41; // x26
  int32_t v42; // w2
  int32_t v43; // w3
  bool v44; // w27
  struct System_String_o *infoText; // x1
  const MethodInfo *v46; // x5
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  bool isSkillType; // w0
  const MethodInfo *v60; // x7
  const MethodInfo *v61; // x5
  BattleLogicBaseAi_o *v62; // x0
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  const MethodInfo *v70; // x2
  __int64 v71; // x23
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  int32_t v74; // w3
  const MethodInfo *v75; // x4
  const MethodInfo *v76; // x2
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-60h] BYREF
  int v79; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A01049 & 1) == 0 )
  {
    sub_1B64870(&BattleLogicTask_TypeInfo, fieldData);
    sub_1B64870(&BattleSkillInfoData_TypeInfo, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B64870(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v12);
    sub_1B64870(&FieldAiActArgument_TypeInfo, v13);
    sub_1B64870(&int___TypeInfo, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_1B64870(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B64870(&Method_WeightRate_int___ctor__, v20);
    sub_1B64870(&WeightRate_int__TypeInfo, v21);
    sub_1B64870(&StringLiteral_8670/*"MOTION_"*/, v22);
    byte_4A01049 = 1;
  }
  v79 = 0;
  ptTarget = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_52;
  if ( !Instance )
    goto LABEL_52;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_30D6180 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v25 = (AiActEntity_o *)Instance;
  v26 = *((_DWORD *)Instance + 5);
  v27 = sub_1B64ABC(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v27, 0LL);
  Instance = (void *)AiAct__Check(99, v25->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_52;
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
    goto LABEL_52;
  }
  if ( (int)Instance >= 1 )
  {
    Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
    if ( !aiState )
      goto LABEL_52;
    AiState__changeThinking(aiState, (int32_t)Instance, 0LL);
  }
  v31 = (WeightRate_int__o *)sub_1B64ABC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v31, (const MethodInfo_388EB70 *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v26 - 40) >= 2 )
  {
    if ( v26 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_52;
      *(_WORD *)&data->fields.endbattleFlg = 257;
      v26 = 91;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v26, v32) )
    {
      v26 = 0;
    }
  }
  else
  {
    skillVals = (int *)v25->fields.skillVals;
    if ( !skillVals )
      goto LABEL_52;
    if ( skillVals[6] < 2 )
      goto LABEL_25;
    v35 = skillVals[8];
    v34 = skillVals[9];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v35, v34, 0LL);
    if ( Instance )
    {
      if ( !v27 )
        goto LABEL_52;
      v36 = *(_QWORD *)v27;
      *(_DWORD *)(v27 + 24) = fieldData->fields.uniqueId;
      *(_QWORD *)(v27 + 16) = 20LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v36 + 376))(v27, v35, *(_QWORD *)(v36 + 384));
      *(_DWORD *)(v27 + 36) = v34;
    }
    else
    {
LABEL_25:
      v26 = 0;
    }
  }
  v38 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v40 = isForcedSkillSpeedOne;
  v41 = sub_1B64ABC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v41, 0LL);
  if ( !v41
    || (v44 = v40,
        *(_BYTE *)(v41 + 160) = v44,
        infoText = aiEnt->fields.infoText,
        *(_QWORD *)(v41 + 152) = infoText,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v41 + 152), (int32_t)infoText, v42, v43),
        BattleLogicTask__setActor((BattleLogicTask_o *)v41, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_52:
    sub_1B64ACC(Instance, v24);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v26, aiEnt->fields.aiActId, 0LL);
  if ( v26 == 71 )
  {
    Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
    v79 = (int)Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v38,
        v44,
        (BattleLogicTask_o *)v41,
        v46);
      v47 = System_Int32__ToString((int32_t)&v79, 0LL);
      v48 = System_String__Concat_61383576((System_String_o *)StringLiteral_8670/*"MOTION_"*/, v47, 0LL);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v41, v48, 0LL);
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
      *(_QWORD *)(v41 + 112) = ServantGameObject;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v41 + 112), (int32_t)ServantGameObject, v51, v52);
      BattleLogicTask__setActor((BattleLogicTask_o *)v41, 5, fieldData->fields.uniqueId, 0LL);
      if ( !v38 )
        goto LABEL_52;
      items = v38->fields._items;
      v56 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v38->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v38->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          (Il2CppObject *)v41,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v38->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v41;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v58 + 4), v41, v53, v54);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v38,
                                        (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_51:
    if ( !v38 )
      goto LABEL_52;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v38,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v26, 0LL);
  if ( !v27 || !isSkillType )
  {
    v71 = sub_1B64ABC(FieldAiActArgument_TypeInfo);
    BaseAiActArgument___ctor((BaseAiActArgument_o *)v71, v25, (AiBaseEntity_o *)aiEnt, v72);
    *(_QWORD *)(v71 + 32) = fieldData;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v71 + 32), (int32_t)fieldData, v73, v74);
    *(_BYTE *)(v71 + 40) = v44;
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v38,
      v26,
      (BaseAiActArgument_o *)v71,
      v75);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v76);
    goto LABEL_51;
  }
  target = (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  ptTarget = (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                       this,
                       (BattleSkillInfoData_o *)v27,
                       (AiBaseEntity_o *)aiEnt,
                       v25,
                       fieldData,
                       &target,
                       &ptTarget,
                       v60);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_51;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v38,
    v44,
    (BattleLogicTask_o *)v41,
    v61);
  BattleLogicBaseAi__SetSkillSelectAddIndex(v62, (BattleSkillInfoData_o *)v27, (AiBaseEntity_o *)aiEnt, v63);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v41, (BattleSkillInfoData_o *)v27, target, ptTarget, 0, 0, 0LL);
  BattleLogicTask__setActor((BattleLogicTask_o *)v41, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v38 )
    goto LABEL_52;
  v66 = v38->fields._items;
  v67 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v38->fields._version;
  if ( !v66 )
    goto LABEL_52;
  v68 = v38->fields._size;
  if ( (unsigned int)v68 >= v66->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v38,
      (Il2CppObject *)v41,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = &v66->obj.klass + v68;
    v38->fields._size = v68 + 1;
    v69[4] = (Il2CppClass *)v41;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v69 + 4), v41, v64, v65);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v70);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v38,
                                    (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4A01043 & 1) == 0 )
  {
    sub_1B64870(&Method_BattleLogicFieldAi_createBaseActionTask__, list);
    sub_1B64870(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1B64870(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4A01043 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_1B64ACC(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v7,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v10,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v11,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v12,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v13,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v14,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v15,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v16,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v17,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v18,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v19,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_1B64ABC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v20,
    (const MethodInfo_3154B1C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1B64ACC(this, fieldData);
  return AiLogic__checkThinking_42891796(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
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
    sub_1B64ACC(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}