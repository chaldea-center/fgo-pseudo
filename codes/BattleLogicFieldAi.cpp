void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1

  if ( (byte_4BDF23C & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
    byte_4BDF23C = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1C21EE0(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.zeroTask, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v10,
    (const MethodInfo_32E2ABC *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v10 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    48,
    28,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    49,
    29,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    46,
    30,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    47,
    31,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    43,
    32,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    45,
    33,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    44,
    43,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    75,
    64,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v10,
    76,
    70,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.taskDictionary, (int64_t)v10, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v19,
    (const MethodInfo_32E2ABC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v19 )
LABEL_6:
    sub_1C22094(v11, v12);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    28,
    10,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    29,
    11,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    30,
    12,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    31,
    13,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    32,
    6,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    33,
    4,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    34,
    2,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    43,
    15,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    64,
    21,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    66,
    19,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    67,
    22,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v19,
    70,
    23,
    (const MethodInfo_32E3480 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.stateDicitionary, (int64_t)v19, v20, v21, v22, v23, v24, v25);
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
  System_String_o *v14; // x24
  int32_t EffectType; // w0
  int32_t v16; // w25
  int64_t v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
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

  if ( (byte_4BDF237 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDF237 = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    v14 = (System_String_o *)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v16 = EffectType;
        v17 = sub_1C22084(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0LL);
        if ( !v17 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v17, v16, 0LL);
        *(_QWORD *)(v17 + 120) = v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 120), (int64_t)v14, v18, v19, v20, v21, v22, v23);
        *(_BYTE *)(v17 + 176) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v17 + 204) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_31;
          motionMessage = mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v17 + 168) = motionMessage;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 168), (int64_t)motionMessage, v24, v25, v26, v27, v28, v29);
          *p_motionMessage = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)p_motionMessage, 0LL, v33, v34, v35, v36, v37, v38);
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
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retlist,
                (Il2CppObject *)v17,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v17;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), v17, v24, v25, v26, v27, v28, v29);
            }
            return;
          }
        }
LABEL_31:
        sub_1C22094(Voice, v12);
      }
    }
    if ( !v14 )
      return;
    Voice = System_String__Split(v14, 0x3Au, 0, 0LL);
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
        SoundManager__playVoice(v45, 0, 0LL);
        return;
      }
LABEL_32:
      sub_1C2209C(Voice, v12);
    }
    if ( (_DWORD)v43 == 2 )
    {
      v47 = 1.0;
    }
    else
    {
      v46 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
      v43 = v44[3];
      v47 = v46;
    }
    if ( (unsigned int)v43 < 2 )
      goto LABEL_32;
    v49 = (System_String_o *)v44[4];
    v48 = (System_String_o *)v44[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_39957484(v49, v48, v47, 0LL, 0, 0LL);
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
  if ( (byte_4BDF239 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    this = (BattleLogicFieldAi_o *)sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDF239 = 1;
  }
  entity = 0LL;
  v11 = (unsigned int)*actType;
  if ( (v11 & 0xFFFFFFFE) == 40 )
  {
    if ( !aiActEnt )
      goto LABEL_18;
    skillVals = aiActEnt->fields.skillVals;
    if ( !skillVals )
      goto LABEL_18;
    if ( (int)skillVals->max_length > 1 )
    {
      v14 = skillVals->m_Items[1];
      v13 = skillVals->m_Items[2];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !this )
        goto LABEL_18;
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
LABEL_18:
        sub_1C22094(this, v11);
      }
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v11 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v11, (const MethodInfo *)skillInfo) )
LABEL_16:
    *actType = 0;
}


bool __fastcall BattleLogicFieldAi__CheckAiCanActionFromTargets(
        BattleLogicFieldAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 v7; // x21
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
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

  if ( (byte_4BDF23B & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_BattleFieldData___);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C21E38(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_1C21E38(&Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__);
    sub_1C21E38(&BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo);
    byte_4BDF23B = 1;
  }
  entity = 0LL;
  ptTarget = 0LL;
  target = 0LL;
  v7 = sub_1C22084(BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = aiInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)aiInfo, v10, v11, v12, v13, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0LL) )
LABEL_18:
    sub_1C22094(Master_object, v9);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v18,
             (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_BattleFieldData___);
  v20 = (BattleSkillInfoData_o *)sub_1C22084(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v20, 0LL);
  BattleLogicFieldAi__CheckAiActType(this, (AiActEntity_o *)entity, v20, (BattleFieldData_o *)object, &actType, v21);
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
             (BattleFieldData_o *)object,
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

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1C22094(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2209C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44677164(
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
  int64_t v25; // x28
  BattleLogicTarget_o *logictarget; // x29
  int32_t v27; // w20
  int32_t uniqueId; // w19
  System_Int32_array *targetIndividuality; // x24
  System_Int32_array *FieldEnemyServantIDList; // x26
  char v31; // w27
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BattleData_o *data; // x8
  BattleLogicTarget_o *v39; // x19
  int32_t v40; // w20
  System_Int32_array *v41; // x29
  int32_t v42; // w24
  int64_t v43; // x28
  System_Int32_array *FieldPlayerServantIDList; // x26
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  AiLogic_o *aiLogic; // x19
  PartyOrganizationUtility_o *v53; // [xsp+18h] [xbp-88h]
  PartyOrganizationUtility_o *v54; // [xsp+20h] [xbp-80h]
  char v55; // [xsp+2Ch] [xbp-74h]
  BattleLogicFieldAi_o *v57; // [xsp+38h] [xbp-68h]

  if ( (byte_4BDF23A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF23A = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v16 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v16 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v16, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v17 = (SkillLvEntity_o *)Instance;
  v18 = *(_QWORD *)(Instance + 32);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v18 )
    goto LABEL_41;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v54 = (PartyOrganizationUtility_o *)target;
  if ( *(_DWORD *)(v18 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v18 + 32),
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( Instance )
  {
    Instance = FuncList__Check(43, *(_DWORD *)(Instance + 24), 0LL);
    v20 = Instance & 1;
  }
  else
  {
LABEL_13:
    v20 = 0;
  }
  v21 = *(_QWORD *)(v18 + 24);
  v57 = this;
  if ( (int)v21 < 1 )
  {
    v23 = 0;
  }
  else
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        goto LABEL_42;
      if ( !v19 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v19,
                            *(_DWORD *)(v18 + 32 + 4 * v22),
                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
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
    this = v57;
  }
  if ( !fieldData )
    goto LABEL_41;
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( v20 | BattleLogic__checkFunctionTargetsAvailable(
               (BattleLogic_o *)Instance,
               v17->fields.funcId,
               fieldData->fields.uniqueId,
               0LL) )
  {
    Instance = SkillLvEntity__IsEnableTarget(v17, 0, 0LL);
    v55 = Instance;
    if ( aiEnt )
    {
      IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
      Instance = sub_1C21EE0(int___TypeInfo, 1LL);
      if ( aiActEnt )
      {
        v25 = Instance;
        Instance = (__int64)this->fields.data;
        v53 = (PartyOrganizationUtility_o *)ptTarget;
        if ( Instance )
        {
          logictarget = this->fields.logictarget;
          v27 = aiActEnt->fields.target;
          uniqueId = fieldData->fields.uniqueId;
          targetIndividuality = aiActEnt->fields.targetIndividuality;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
          if ( logictarget )
          {
            v31 = v23 | v20;
            Instance = BattleLogicTarget__getTargetAiAct(
                         logictarget,
                         v27,
                         uniqueId,
                         targetIndividuality,
                         FieldEnemyServantIDList,
                         v55 & 1,
                         v31,
                         (System_Int32_array *)Instance,
                         aiActEnt,
                         IsDeadToEnableUpHate,
                         0LL);
            if ( v25 )
            {
              if ( !*(_DWORD *)(v25 + 24) )
                goto LABEL_42;
              *(_DWORD *)(v25 + 32) = Instance;
              v54->klass = (PartyOrganizationUtility_c *)v25;
              sub_1C21DDC(v54, v25, v32, v33, v34, v35, v36, v37);
              Instance = sub_1C21EE0(int___TypeInfo, 1LL);
              data = v57->fields.data;
              if ( !data )
                goto LABEL_41;
              v39 = v57->fields.logictarget;
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
                           v55 & 1,
                           v31,
                           (System_Int32_array *)Instance,
                           aiActEnt,
                           IsDeadToEnableUpHate,
                           0LL);
              if ( !v43 )
                goto LABEL_41;
              if ( !*(_DWORD *)(v43 + 24) )
LABEL_42:
                sub_1C2209C(Instance, v15);
              *(_DWORD *)(v43 + 32) = Instance;
              v53->klass = (PartyOrganizationUtility_c *)v43;
              sub_1C21DDC(v53, v43, v45, v46, v47, v48, v49, v50);
              aiLogic = v57->fields.aiLogic;
              Instance = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
              if ( aiLogic )
                return !AiLogic__IsNoTargetNoActionTask(
                          aiLogic,
                          Instance,
                          (System_Int32_array *)v54->klass,
                          (System_Int32_array *)v53->klass,
                          0LL);
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C22094(Instance, v15);
  }
  return 0;
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

  if ( (byte_4BDF234 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    byte_4BDF234 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
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
      sub_1C22094(this, aiFieldEntity);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v18; // x23
  BattleData_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4BDF236 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleFieldData___);
    sub_1C21E38(&System_Func_BattleFieldData__bool__TypeInfo);
    sub_1C21E38(&Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__);
    sub_1C21E38(&BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo);
    byte_4BDF236 = 1;
  }
  v7 = sub_1C22084(BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_1C22094(v8, v9);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__,
    0LL);
  if ( BasicHelper__Any_object__49917468(
         field_datalist,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_BattleFieldData___) )
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

  data = this->fields.data;
  if ( !data || (field_datalist = data->fields.field_datalist) == 0LL )
LABEL_11:
    sub_1C22094(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2209C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44677164(
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
    sub_1C22094(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2209C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44677164(
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
    sub_1C22094(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2209C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44677164(
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4BDF231 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
    byte_4BDF231 = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_32E366C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_32E33E4 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v8);
    }
LABEL_8:
    sub_1C22094(taskDictionary, *(_QWORD *)&ltype);
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
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v19; // x0

  if ( (byte_4BDF230 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask___TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    byte_4BDF230 = 1;
  }
  v6 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0LL);
  if ( !v6
    || (v6->fields.actiontype = actionType,
        BattleLogicTask__setActor(v6, 5, index, 0LL),
        (v7 = sub_1C21EE0(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_1C22094(v7, v8);
  }
  v9 = v7;
  v10 = sub_1C21F74(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
  if ( !v10 )
  {
    v19 = sub_1C220B8(0LL);
    sub_1C21F60(v19, 0LL);
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C2209C(v10, v11);
  *(_QWORD *)(v9 + 32) = v6;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)v6, v12, v13, v14, v15, v16, v17);
  return (BattleLogicTask_array *)v9;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBaseActionTask(
        BattleLogicFieldAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicFieldAi_o *v4; // x20
  int32_t v5; // w22
  unsigned int v6; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v10; // x24
  System_Collections_Generic_List_object__o *v11; // x23
  struct BattleData_o *v12; // x8
  AiFieldEntity_o *Action_44678220; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x5

  v4 = this;
  if ( (byte_4BDF232 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicFieldAi_o *)sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF232 = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_32E366C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_32E33E4 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
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
        sub_1C2209C(this, task);
      v10 = field_datalist->m_Items[v6];
      v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v11,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v12 = v4->fields.data;
      if ( v12 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_44678220 = AiLogic__getAction_44678220(
                              (AiLogic_o *)this,
                              v10,
                              v5,
                              v12->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_44678220 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v10,
                                             Action_44678220,
                                             (int32_t)v14,
                                             v5,
                                             v15);
            if ( !v11 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_44678220,
                                           task->fields.actiontype,
                                           v6 + 1,
                                           v14);
          if ( v11 )
          {
            System_Collections_Generic_List_object___AddRange(
              v11,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v11,
                                              (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1C22094(this, task);
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

  if ( (byte_4BDF233 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    byte_4BDF233 = 1;
  }
  v3 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
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
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  unsigned __int64 v14; // x25
  bool v15; // w26
  int32_t v16; // w24
  int64_t v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_4BDF238 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF238 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_17;
  v13 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = isForcedSpeedOne;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1C2209C(v11, v12);
      v16 = targetIds->m_Items[v14 + 1];
      if ( (v16 & 0x80000000) == 0 )
      {
        v17 = sub_1C22084(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v17, 0LL);
        if ( !v17 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v17, 0LL);
        *(_QWORD *)(v17 + 72) = skillInfo;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 72), (int64_t)skillInfo, v18, v19, v20, v21, v22, v23);
        BattleLogicTask__setActor((BattleLogicTask_o *)v17, 5, v16, 0LL);
        *(_QWORD *)(v17 + 168) = motionMessage;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 168), (int64_t)motionMessage, v24, v25, v26, v27, v28, v29);
        *(_BYTE *)(v17 + 176) = v15;
        if ( !v10 )
          goto LABEL_17;
        items = v10->fields._items;
        v37 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v17,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v17;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v17, v30, v31, v32, v33, v34, v35);
        }
      }
      LODWORD(v13) = targetIds->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v10 )
LABEL_17:
    sub_1C22094(v11, v12);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v28; // x27
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  bool v35; // w28
  struct System_String_o *infoText; // x1
  const MethodInfo *v37; // x5
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  bool isSkillType; // w0
  const MethodInfo *v59; // x7
  const MethodInfo *v60; // x5
  BattleLogicBaseAi_o *v61; // x0
  const MethodInfo *v62; // x3
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  const MethodInfo *v73; // x2
  __int64 v74; // x24
  const MethodInfo *v75; // x4
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  const MethodInfo *v82; // x4
  const MethodInfo *v83; // x2
  System_Int32_array *v84; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-68h] BYREF
  int v86; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4BDF235 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&BattleSkillInfoData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
    sub_1C21E38(&FieldAiActArgument_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    sub_1C21E38(&StringLiteral_8894/*"MOTION_"*/);
    byte_4BDF235 = 1;
  }
  v86 = 0;
  v84 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_52;
  if ( !Instance )
    goto LABEL_52;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v12 = (AiActEntity_o *)Instance;
  v13 = *((_DWORD *)Instance + 5);
  v14 = sub_1C22084(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v14, 0LL);
  Instance = (void *)AiAct__Check(99, v12->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_52;
  aiState = fieldData->fields.aiState;
  v16 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v11 = (unsigned int)Instance;
  if ( (v16 & 1) != 0 )
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
  v18 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v18, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v22, v21, 0LL);
    if ( Instance )
    {
      if ( !v14 )
        goto LABEL_52;
      v23 = *(_QWORD *)v14;
      *(_DWORD *)(v14 + 24) = fieldData->fields.uniqueId;
      *(_QWORD *)(v14 + 16) = 20LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v23 + 376))(v14, v22, *(_QWORD *)(v23 + 384));
      *(_DWORD *)(v14 + 36) = v21;
    }
    else
    {
LABEL_25:
      v13 = 0;
    }
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v27 = isForcedSkillSpeedOne;
  v28 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v28, 0LL);
  if ( !v28
    || (v35 = v27,
        *(_BYTE *)(v28 + 176) = v35,
        infoText = aiEnt->fields.infoText,
        *(_QWORD *)(v28 + 168) = infoText,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 168), (int64_t)infoText, v29, v30, v31, v32, v33, v34),
        BattleLogicTask__setActor((BattleLogicTask_o *)v28, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_52:
    sub_1C22094(Instance, v11);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v13, aiEnt->fields.aiActId, 0LL);
  if ( v13 == 71 )
  {
    Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
    v86 = (int)Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v25,
        v35,
        (BattleLogicTask_o *)v28,
        v37);
      v38 = System_Int32__ToString((int32_t)&v86, 0LL);
      v39 = System_String__Concat_63115476((System_String_o *)StringLiteral_8894/*"MOTION_"*/, v38, 0LL);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v28, v39, 0LL);
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
      *(_QWORD *)(v28 + 128) = ServantGameObject;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 128), (int64_t)ServantGameObject, v42, v43, v44, v45, v46, v47);
      BattleLogicTask__setActor((BattleLogicTask_o *)v28, 5, fieldData->fields.uniqueId, 0LL);
      if ( !v25 )
        goto LABEL_52;
      items = v25->fields._items;
      v55 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v25->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v25->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v25,
          (Il2CppObject *)v28,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v25->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v28;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v57 + 4), v28, v48, v49, v50, v51, v52, v53);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v25,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_51:
    if ( !v25 )
      goto LABEL_52;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v25,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v13, 0LL);
  if ( !v14 || !isSkillType )
  {
    v74 = sub_1C22084(FieldAiActArgument_TypeInfo);
    BaseAiActArgument___ctor((BaseAiActArgument_o *)v74, v12, (AiBaseEntity_o *)aiEnt, procState, v75);
    *(_QWORD *)(v74 + 40) = fieldData;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v74 + 40), (int64_t)fieldData, v76, v77, v78, v79, v80, v81);
    *(_BYTE *)(v74 + 48) = v35;
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v25,
      v13,
      (BaseAiActArgument_o *)v74,
      v82);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v83);
    goto LABEL_51;
  }
  target = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  v84 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                       this,
                       (BattleSkillInfoData_o *)v14,
                       (AiBaseEntity_o *)aiEnt,
                       v12,
                       fieldData,
                       &target,
                       &v84,
                       v59);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_51;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v25,
    v35,
    (BattleLogicTask_o *)v28,
    v60);
  BattleLogicBaseAi__SetSkillSelectAddIndex(v61, (BattleSkillInfoData_o *)v14, (AiBaseEntity_o *)aiEnt, v62);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v28, (BattleSkillInfoData_o *)v14, target, v84, 0, 0, 0LL);
  BattleLogicTask__setActor((BattleLogicTask_o *)v28, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v25 )
    goto LABEL_52;
  v69 = v25->fields._items;
  v70 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v25->fields._version;
  if ( !v69 )
    goto LABEL_52;
  v71 = v25->fields._size;
  if ( (unsigned int)v71 >= v69->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)v28,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v69->obj.klass + v71;
    v25->fields._size = v71 + 1;
    v72[4] = (Il2CppClass *)v28;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 4), v28, v63, v64, v65, v66, v67, v68);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v73);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v25,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4BDF22F & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleLogicFieldAi_createBaseActionTask__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1C21E38(&BattleLogic_reactionFunction_TypeInfo);
    byte_4BDF22F = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_1C22094(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v5,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v8 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v8, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v8,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v9 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v9, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v9,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v10,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v11,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v12,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v13,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v14,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v15,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v16,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v17,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1C22084(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v18,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1C22094(this, fieldData);
  return AiLogic__checkThinking_44677164(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
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
    sub_1C22094(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}