void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleLogicTask_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1

  if ( (byte_4C004C9 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask___TypeInfo, method);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__, v4);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v5);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v6);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v8);
    byte_4C004C9 = 1;
  }
  v9 = (struct BattleLogicTask_array *)sub_1C2E1D4(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v9;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.zeroTask, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2E378(System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v16,
    (const MethodInfo_3301FB0 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v16 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    48,
    28,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    49,
    29,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    46,
    30,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    47,
    31,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    43,
    32,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    45,
    33,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    44,
    43,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    75,
    64,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v16,
    76,
    70,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.taskDictionary, (int64_t)v16, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2E378(System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v25,
    (const MethodInfo_3301FB0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v25 )
LABEL_6:
    sub_1C2E388(v17, v18);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    28,
    10,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    29,
    11,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    30,
    12,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    31,
    13,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    32,
    6,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    33,
    4,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    34,
    2,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    43,
    15,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    64,
    21,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    66,
    19,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    67,
    22,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v25,
    70,
    23,
    (const MethodInfo_3302974 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v25;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.stateDicitionary, (int64_t)v25, v26, v27, v28, v29, v30, v31);
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
  void *Voice; // x0
  __int64 v14; // x1
  struct BattleData_o *data; // x8
  System_String_o *v16; // x24
  int32_t EffectType; // w0
  int32_t v18; // w25
  int64_t v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  __int64 v45; // x8
  _QWORD *v46; // x19
  System_String_o *v47; // x19
  float v48; // s0
  float v49; // s8
  System_String_o *v50; // x19
  System_String_o *v51; // x20

  if ( (byte_4C004C4 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask_TypeInfo, ent);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1C2E12C(&SoundManager_TypeInfo, v12);
    byte_4C004C4 = 1;
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
        v19 = sub_1C2E378(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v19, 0LL);
        if ( !v19 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v19, v18, 0LL);
        *(_QWORD *)(v19 + 120) = v16;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 120), (int64_t)v16, v20, v21, v22, v23, v24, v25);
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
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 176), (int64_t)motionMessage, v26, v27, v28, v29, v30, v31);
          *p_motionMessage = 0LL;
          sub_1C2E0D0((PartyOrganizationUtility_o *)p_motionMessage, 0LL, v35, v36, v37, v38, v39, v40);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          items = retlist->fields._items;
          v42 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retlist->fields._version;
          if ( items )
          {
            size = retlist->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retlist,
                (Il2CppObject *)v19,
                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v44[4] = (Il2CppClass *)v19;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v44 + 4), v19, v26, v27, v28, v29, v30, v31);
            }
            return;
          }
        }
LABEL_31:
        sub_1C2E388(Voice, v14);
      }
    }
    if ( !v16 )
      return;
    Voice = System_String__Split(v16, 0x3Au, 0, 0LL);
    if ( !Voice )
      goto LABEL_31;
    v45 = *((_QWORD *)Voice + 3);
    v46 = Voice;
    if ( (int)v45 < 2 )
    {
      if ( (_DWORD)v45 )
      {
        v47 = (System_String_o *)*((_QWORD *)Voice + 4);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice(v47, 0, 0LL);
        return;
      }
LABEL_32:
      sub_1C2E390(Voice, v14);
    }
    if ( (_DWORD)v45 == 2 )
    {
      v49 = 1.0;
    }
    else
    {
      v48 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
      v45 = v46[3];
      v49 = v48;
    }
    if ( (unsigned int)v45 < 2 )
      goto LABEL_32;
    v51 = (System_String_o *)v46[4];
    v50 = (System_String_o *)v46[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_40028076(v51, v50, v49, 0LL, 0, 0LL);
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
  if ( (byte_4C004C6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt);
    this = (BattleLogicFieldAi_o *)sub_1C2E12C(&DataManager_TypeInfo, v11);
    byte_4C004C6 = 1;
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
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillLvMaster___);
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
        sub_1C2E388(this, v12);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x22
  System_Func_object__bool__o *v25; // x23
  Il2CppObject *object; // x21
  BattleSkillInfoData_o *v27; // x22
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x7
  bool isSkillType; // w8
  bool v31; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-50h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C004C8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Find_BattleFieldData___, aiInfo);
    sub_1C2E12C(&BattleSkillInfoData_TypeInfo, v7);
    sub_1C2E12C(&Method_DataManager_GetMaster_AiActMaster___, v8);
    sub_1C2E12C(&DataManager_TypeInfo, v9);
    sub_1C2E12C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v10);
    sub_1C2E12C(&System_Func_BattleFieldData__bool__TypeInfo, v11);
    sub_1C2E12C(&Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__, v12);
    sub_1C2E12C(&BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo, v13);
    byte_4C004C8 = 1;
  }
  entity = 0LL;
  ptTarget = 0LL;
  target = 0LL;
  v14 = sub_1C2E378(BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 16) = aiInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)aiInfo, v17, v18, v19, v20, v21, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0LL) )
LABEL_18:
    sub_1C2E388(Master_object, v16);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v25 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v25,
             (const MethodInfo_2FBCE08 *)Method_BasicHelper_Find_BattleFieldData___);
  v27 = (BattleSkillInfoData_o *)sub_1C2E378(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v27, 0LL);
  BattleLogicFieldAi__CheckAiActType(this, (AiActEntity_o *)entity, v27, (BattleFieldData_o *)object, &actType, v28);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v31 = 1;
  if ( v27 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v27,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             (BattleFieldData_o *)object,
             &target,
             &ptTarget,
             v29);
  }
  return v31;
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
    sub_1C2E388(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2E390(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44797900(
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
  int64_t v29; // x28
  BattleLogicTarget_o *logictarget; // x29
  int32_t v31; // w20
  int32_t uniqueId; // w19
  System_Int32_array *targetIndividuality; // x24
  System_Int32_array *FieldEnemyServantIDList; // x26
  char v35; // w27
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  BattleData_o *data; // x8
  BattleLogicTarget_o *v43; // x19
  int32_t v44; // w20
  System_Int32_array *v45; // x29
  int32_t v46; // w24
  int64_t v47; // x28
  System_Int32_array *FieldPlayerServantIDList; // x26
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  AiLogic_o *aiLogic; // x19
  PartyOrganizationUtility_o *v57; // [xsp+18h] [xbp-88h]
  PartyOrganizationUtility_o *v58; // [xsp+20h] [xbp-80h]
  char v59; // [xsp+2Ch] [xbp-74h]
  BattleLogicFieldAi_o *v61; // [xsp+38h] [xbp-68h]

  if ( (byte_4C004C7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1C2E12C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1C2E12C(&int___TypeInfo, v16);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4C004C7 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v22 )
    goto LABEL_41;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v58 = (PartyOrganizationUtility_o *)target;
  if ( *(_DWORD *)(v22 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v22 + 32),
                        (const MethodInfo_327B180 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  v61 = this;
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
                            (const MethodInfo_327B180 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
    this = v61;
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
    v59 = Instance;
    if ( aiEnt )
    {
      IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
      Instance = sub_1C2E1D4(int___TypeInfo, 1LL);
      if ( aiActEnt )
      {
        v29 = Instance;
        Instance = (__int64)this->fields.data;
        v57 = (PartyOrganizationUtility_o *)ptTarget;
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
                         v59 & 1,
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
              v58->klass = (PartyOrganizationUtility_c *)v29;
              sub_1C2E0D0(v58, v29, v36, v37, v38, v39, v40, v41);
              Instance = sub_1C2E1D4(int___TypeInfo, 1LL);
              data = v61->fields.data;
              if ( !data )
                goto LABEL_41;
              v43 = v61->fields.logictarget;
              v44 = aiActEnt->fields.target;
              v45 = aiActEnt->fields.targetIndividuality;
              v46 = fieldData->fields.uniqueId;
              v47 = Instance;
              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
              Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
              if ( !v43 )
                goto LABEL_41;
              Instance = BattleLogicTarget__getTargetAiAct(
                           v43,
                           v44,
                           v46,
                           v45,
                           FieldPlayerServantIDList,
                           v59 & 1,
                           v35,
                           (System_Int32_array *)Instance,
                           aiActEnt,
                           IsDeadToEnableUpHate,
                           0LL);
              if ( !v47 )
                goto LABEL_41;
              if ( !*(_DWORD *)(v47 + 24) )
LABEL_42:
                sub_1C2E390(Instance, v19);
              *(_DWORD *)(v47 + 32) = Instance;
              v57->klass = (PartyOrganizationUtility_c *)v47;
              sub_1C2E0D0(v57, v47, v49, v50, v51, v52, v53, v54);
              aiLogic = v61->fields.aiLogic;
              Instance = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
              if ( aiLogic )
                return !AiLogic__IsNoTargetNoActionTask(
                          aiLogic,
                          Instance,
                          (System_Int32_array *)v58->klass,
                          (System_Int32_array *)v57->klass,
                          0LL);
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C2E388(Instance, v19);
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

  if ( (byte_4C004C1 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType);
    byte_4C004C1 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1C2E378(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_1C2E388(v6, v7);
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
      sub_1C2E388(this, aiFieldEntity);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v21; // x23
  BattleData_o *v22; // x2
  const MethodInfo *v23; // x3

  if ( (byte_4C004C3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_BattleFieldData___, *(_QWORD *)&prcState);
    sub_1C2E12C(&System_Func_BattleFieldData__bool__TypeInfo, v7);
    sub_1C2E12C(&Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__, v8);
    sub_1C2E12C(&BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo, v9);
    byte_4C004C3 = 1;
  }
  v10 = sub_1C2E378(BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v10 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_1C2E388(v11, v12);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v21 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_BattleFieldData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v10,
    Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__,
    0LL);
  if ( BasicHelper__Any_object__50053864(
         field_datalist,
         (System_Func_T__bool__o *)v21,
         (const MethodInfo_2FBC2E8 *)Method_BasicHelper_Any_BattleFieldData___) )
  {
    return BattleLogicFieldAi__checkFieldAiTask(this, logicType, v22, v23);
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
    sub_1C2E388(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2E390(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44797900(
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
    sub_1C2E388(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2E390(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44797900(
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
    sub_1C2E388(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1C2E390(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44797900(
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

  if ( (byte_4C004BE & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6);
    byte_4C004BE = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_3302B60 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_33028D8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v9);
    }
LABEL_8:
    sub_1C2E388(taskDictionary, *(_QWORD *)&ltype);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v20; // x0

  if ( (byte_4C004BD & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType);
    sub_1C2E12C(&BattleLogicTask_TypeInfo, v6);
    byte_4C004BD = 1;
  }
  v7 = (BattleLogicTask_o *)sub_1C2E378(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.actiontype = actionType,
        BattleLogicTask__setActor(v7, 5, index, 0LL),
        (v8 = sub_1C2E1D4(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_1C2E388(v8, v9);
  }
  v10 = v8;
  v11 = sub_1C2E268(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
  if ( !v11 )
  {
    v20 = sub_1C2E3AC(0LL);
    sub_1C2E254(v20, 0LL);
  }
  if ( !*(_DWORD *)(v10 + 24) )
    sub_1C2E390(v11, v12);
  *(_QWORD *)(v10 + 32) = v7;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)v7, v13, v14, v15, v16, v17, v18);
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
  int32_t v10; // w22
  unsigned int v11; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v15; // x24
  System_Collections_Generic_List_object__o *v16; // x23
  struct BattleData_o *v17; // x8
  AiFieldEntity_o *Action_44798956; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x5

  v4 = this;
  if ( (byte_4C004BF & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicFieldAi_o *)sub_1C2E12C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_4C004BF = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_3302B60 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_33028D8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
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
        sub_1C2E390(this, task);
      v15 = field_datalist->m_Items[v11];
      v16 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v17 = v4->fields.data;
      if ( v17 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_44798956 = AiLogic__getAction_44798956(
                              (AiLogic_o *)this,
                              v15,
                              v10,
                              v17->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_44798956 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v15,
                                             Action_44798956,
                                             (int32_t)v19,
                                             v10,
                                             v20);
            if ( !v16 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v16,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_44798956,
                                           task->fields.actiontype,
                                           v11 + 1,
                                           v19);
          if ( v16 )
          {
            System_Collections_Generic_List_object___AddRange(
              v16,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v16,
                                              (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1C2E388(this, task);
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

  if ( (byte_4C004C0 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask_TypeInfo, method);
    byte_4C004C0 = 1;
  }
  v3 = (BattleLogicTask_o *)sub_1C2E378(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v3, 0LL);
  if ( !v3 )
    sub_1C2E388(v4, v5);
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
  int64_t v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4C004C5 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask_TypeInfo, targetIds);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_4C004C5 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1C2E390(v15, v16);
      v20 = targetIds->m_Items[v18 + 1];
      if ( (v20 & 0x80000000) == 0 )
      {
        v21 = sub_1C2E378(BattleLogicTask_TypeInfo);
        BattleLogicTask___ctor((BattleLogicTask_o *)v21, 0LL);
        if ( !v21 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v21, 0LL);
        *(_QWORD *)(v21 + 72) = skillInfo;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 72), (int64_t)skillInfo, v22, v23, v24, v25, v26, v27);
        BattleLogicTask__setActor((BattleLogicTask_o *)v21, 5, v20, 0LL);
        *(_QWORD *)(v21 + 176) = motionMessage;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 176), (int64_t)motionMessage, v28, v29, v30, v31, v32, v33);
        *(_BYTE *)(v21 + 184) = v19;
        if ( !v14 )
          goto LABEL_17;
        items = v14->fields._items;
        v41 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v14->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)v21,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v21;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v43 + 4), v21, v34, v35, v36, v37, v38, v39);
        }
      }
      LODWORD(v17) = targetIds->max_length;
    }
    while ( (__int64)++v18 < (int)v17 );
  }
  if ( !v14 )
LABEL_17:
    sub_1C2E388(v15, v16);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int64_t v42; // x27
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  bool v49; // w28
  struct System_String_o *infoText; // x1
  const MethodInfo *v51; // x5
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 size; // x10
  Il2CppClass **v71; // x0
  bool isSkillType; // w0
  const MethodInfo *v73; // x7
  const MethodInfo *v74; // x5
  BattleLogicBaseAi_o *v75; // x0
  const MethodInfo *v76; // x3
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  const MethodInfo *v87; // x2
  __int64 v88; // x24
  const MethodInfo *v89; // x4
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  const MethodInfo *v96; // x4
  const MethodInfo *v97; // x2
  System_Int32_array *v98; // [xsp+0h] [xbp-70h] BYREF
  System_Int32_array *target; // [xsp+8h] [xbp-68h] BYREF
  int v100; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C004C2 & 1) == 0 )
  {
    sub_1C2E12C(&BattleLogicTask_TypeInfo, fieldData);
    sub_1C2E12C(&BattleSkillInfoData_TypeInfo, v10);
    sub_1C2E12C(&Method_DataManager_GetMasterData_AiActMaster___, v11);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_1C2E12C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v13);
    sub_1C2E12C(&FieldAiActArgument_TypeInfo, v14);
    sub_1C2E12C(&int___TypeInfo, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18);
    sub_1C2E12C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C2E12C(&Method_WeightRate_int___ctor__, v21);
    sub_1C2E12C(&WeightRate_int__TypeInfo, v22);
    sub_1C2E12C(&StringLiteral_8885/*"MOTION_"*/, v23);
    byte_4C004C2 = 1;
  }
  v100 = 0;
  v98 = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_52;
  if ( !Instance )
    goto LABEL_52;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_327B180 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v26 = (AiActEntity_o *)Instance;
  v27 = *((_DWORD *)Instance + 5);
  v28 = sub_1C2E378(BattleSkillInfoData_TypeInfo);
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
  v32 = (WeightRate_int__o *)sub_1C2E378(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v32, (const MethodInfo_3A513FC *)Method_WeightRate_int___ctor__);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v39 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v42 = sub_1C2E378(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v42, 0LL);
  if ( !v42
    || (v49 = v41,
        *(_BYTE *)(v42 + 184) = v49,
        infoText = aiEnt->fields.infoText,
        *(_QWORD *)(v42 + 176) = infoText,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 176), (int64_t)infoText, v43, v44, v45, v46, v47, v48),
        BattleLogicTask__setActor((BattleLogicTask_o *)v42, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_52:
    sub_1C2E388(Instance, v25);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v27, aiEnt->fields.aiActId, 0LL);
  if ( v27 == 71 )
  {
    Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
    v100 = (int)Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v39,
        v49,
        (BattleLogicTask_o *)v42,
        v51);
      v52 = System_Int32__ToString((int32_t)&v100, 0LL);
      v53 = System_String__Concat_63235584((System_String_o *)StringLiteral_8885/*"MOTION_"*/, v52, 0LL);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v42, v53, 0LL);
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
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 128), (int64_t)ServantGameObject, v56, v57, v58, v59, v60, v61);
      BattleLogicTask__setActor((BattleLogicTask_o *)v42, 5, fieldData->fields.uniqueId, 0LL);
      if ( !v39 )
        goto LABEL_52;
      items = v39->fields._items;
      v69 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v39->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v39->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          (Il2CppObject *)v42,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v71[4] = (Il2CppClass *)v42;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v71 + 4), v42, v62, v63, v64, v65, v66, v67);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v39,
                                        (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_51:
    if ( !v39 )
      goto LABEL_52;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v39,
                                      (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v27, 0LL);
  if ( !v28 || !isSkillType )
  {
    v88 = sub_1C2E378(FieldAiActArgument_TypeInfo);
    BaseAiActArgument___ctor((BaseAiActArgument_o *)v88, v26, (AiBaseEntity_o *)aiEnt, procState, v89);
    *(_QWORD *)(v88 + 40) = fieldData;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v88 + 40), (int64_t)fieldData, v90, v91, v92, v93, v94, v95);
    *(_BYTE *)(v88 + 48) = v49;
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v39,
      v27,
      (BaseAiActArgument_o *)v88,
      v96);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v97);
    goto LABEL_51;
  }
  target = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  v98 = (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                       this,
                       (BattleSkillInfoData_o *)v28,
                       (AiBaseEntity_o *)aiEnt,
                       v26,
                       fieldData,
                       &target,
                       &v98,
                       v73);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_51;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v39,
    v49,
    (BattleLogicTask_o *)v42,
    v74);
  BattleLogicBaseAi__SetSkillSelectAddIndex(v75, (BattleSkillInfoData_o *)v28, (AiBaseEntity_o *)aiEnt, v76);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v42, (BattleSkillInfoData_o *)v28, target, v98, 0, 0, 0LL);
  BattleLogicTask__setActor((BattleLogicTask_o *)v42, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v39 )
    goto LABEL_52;
  v83 = v39->fields._items;
  v84 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v39->fields._version;
  if ( !v83 )
    goto LABEL_52;
  v85 = v39->fields._size;
  if ( (unsigned int)v85 >= v83->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)v42,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v86 = &v83->obj.klass + v85;
    v39->fields._size = v85 + 1;
    v86[4] = (Il2CppClass *)v42;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v86 + 4), v42, v77, v78, v79, v80, v81, v82);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v87);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v39,
                                    (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4C004BC & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleLogicFieldAi_createBaseActionTask__, list);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1C2E12C(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_4C004BC = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_1C2E388(v8, v9);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v7,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v10 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v10,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v11,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v12 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v12, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v12,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v13 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v13, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v13,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v14,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v15 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v15, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v15,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v16,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v17,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v18 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v18, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v18,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v19 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v19, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v19,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_1C2E378(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v20,
    (const MethodInfo_330576C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1C2E388(this, fieldData);
  return AiLogic__checkThinking_44797900(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
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
    sub_1C2E388(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}