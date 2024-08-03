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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x20
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_49FEF4D & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask___TypeInfo, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__, v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo, v8);
    byte_49FEF4D = 1;
  }
  v9 = (struct BattleLogicTask_array *)sub_1B64170(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.zeroTask, (int32_t)v9, v10, v11);
  v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo,
                                                                   v12,
                                                                   v13);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v14,
    (const MethodInfo_313A8F4 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v14 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    48,
    28,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    49,
    29,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    46,
    30,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    47,
    31,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    43,
    32,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    45,
    33,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    44,
    43,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    75,
    64,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v14,
    76,
    70,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.taskDictionary, (int32_t)v14, v16, v17);
  v20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo,
                                                                   v18,
                                                                   v19);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v20,
    (const MethodInfo_313A8F4 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v20 )
LABEL_6:
    sub_1B64324(v15);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    28,
    10,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    29,
    11,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    30,
    12,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    31,
    13,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    32,
    6,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    33,
    4,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    34,
    2,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    43,
    15,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    64,
    21,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    66,
    19,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    67,
    22,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v20,
    70,
    23,
    (const MethodInfo_313B2B8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stateDicitionary, (int32_t)v20, v21, v22);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v23);
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
  struct BattleData_o *data; // x8
  System_String_o *v15; // x24
  int32_t EffectType; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w25
  __int64 v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int32_t v28; // w2
  int32_t v29; // w3
  struct BattleLogicTask_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  _QWORD *v36; // x19
  System_String_o *v37; // x19
  float v38; // s0
  float v39; // s8
  System_String_o *v40; // x19
  System_String_o *v41; // x20

  if ( (byte_49FEF48 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, ent);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11);
    sub_1B640C8(&SoundManager_TypeInfo, v12);
    byte_49FEF48 = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    v15 = (System_String_o *)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v19 = EffectType;
        v20 = sub_1B64314(BattleLogicTask_TypeInfo, v17, v18);
        BattleLogicTask___ctor((BattleLogicTask_o *)v20, 0LL);
        if ( !v20 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v20, v19, 0LL);
        *(_QWORD *)(v20 + 104) = v15;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 104), (int32_t)v15, v21, v22);
        *(_BYTE *)(v20 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v20 + 188) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_31;
          motionMessage = mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v20 + 152) = motionMessage;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 152), (int32_t)motionMessage, v23, v24);
          *p_motionMessage = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)p_motionMessage, 0, v28, v29);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          items = retlist->fields._items;
          v31 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retlist->fields._version;
          if ( items )
          {
            size = retlist->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retlist,
                (Il2CppObject *)v20,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v20;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), v20, v23, v24);
            }
            return;
          }
        }
LABEL_31:
        sub_1B64324(Voice);
      }
    }
    if ( !v15 )
      return;
    Voice = System_String__Split(v15, 0x3Au, 0, 0LL);
    if ( !Voice )
      goto LABEL_31;
    v35 = *((_QWORD *)Voice + 3);
    v36 = Voice;
    if ( (int)v35 < 2 )
    {
      if ( (_DWORD)v35 )
      {
        v37 = (System_String_o *)*((_QWORD *)Voice + 4);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__playVoice(v37, 0LL);
        return;
      }
LABEL_32:
      sub_1B6432C(Voice, v34);
    }
    if ( (_DWORD)v35 == 2 )
    {
      v39 = 1.0;
    }
    else
    {
      v38 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
      v35 = v36[3];
      v39 = v38;
    }
    if ( (unsigned int)v35 < 2 )
      goto LABEL_32;
    v41 = (System_String_o *)v36[4];
    v40 = (System_String_o *)v36[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_38387180(v41, v40, v39, 0LL, 0LL);
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
  int32_t v12; // w1
  struct System_Int32_array *skillVals; // x8
  int32_t v14; // w22
  unsigned int v15; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_49FEF4A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt);
    this = (BattleLogicFieldAi_o *)sub_1B640C8(&DataManager_TypeInfo, v11);
    byte_49FEF4A = 1;
  }
  entity = 0LL;
  v12 = *actType;
  if ( (*actType & 0xFFFFFFFE) == 40 )
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
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
        sub_1B64324(this);
      }
    }
    goto LABEL_16;
  }
  if ( v12 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v12, (const MethodInfo *)skillInfo) )
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
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x22
  System_Func_object__bool__o *v22; // x23
  Il2CppObject *object; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  BattleSkillInfoData_o *v26; // x22
  const MethodInfo *v27; // x5
  const MethodInfo *v28; // x7
  bool isSkillType; // w8
  bool v30; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-50h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_49FEF4C & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_BattleFieldData___, aiInfo);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_AiActMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&System_Func_BattleFieldData__bool__TypeInfo, v11);
    sub_1B640C8(&Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__, v12);
    sub_1B640C8(&BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo, v13);
    byte_49FEF4C = 1;
  }
  entity = 0LL;
  ptTarget = 0LL;
  target = 0LL;
  v14 = sub_1B64314(BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo, aiInfo, aiBaseEntity);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 16) = aiInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)aiInfo, v16, v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0LL) )
LABEL_18:
    sub_1B64324(Master_object);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v22 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleFieldData__bool__TypeInfo, v18, v19);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v22,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_BattleFieldData___);
  v26 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v24, v25);
  BattleSkillInfoData___ctor(v26, 0LL);
  BattleLogicFieldAi__CheckAiActType(this, (AiActEntity_o *)entity, v26, (BattleFieldData_o *)object, &actType, v27);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v30 = 1;
  if ( v26 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v26,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             (BattleFieldData_o *)object,
             &target,
             &ptTarget,
             v28);
  }
  return v30;
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
    sub_1B64324(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B6432C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42882896(
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
  SkillLvMaster_o *v19; // x19
  SkillLvEntity_o *v20; // x26
  __int64 v21; // x19
  __int64 v22; // x1
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

  if ( (byte_49FEF4B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v15);
    sub_1B640C8(&int___TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FEF4B = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v19 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v19 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v19, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v20 = (SkillLvEntity_o *)Instance;
  v21 = *(_QWORD *)(Instance + 32);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v21 )
    goto LABEL_41;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v50 = (ServantStatusBattleListViewItem_o *)target;
  if ( *(_DWORD *)(v21 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v21 + 32),
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  v25 = *(_QWORD *)(v21 + 24);
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
                            *(_DWORD *)(v21 + 32 + 4 * v26),
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v25) = *(_DWORD *)(v21 + 24);
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
               v20->fields.funcId,
               fieldData->fields.uniqueId,
               0LL) )
  {
    Instance = SkillLvEntity__IsEnableTarget(v20, 0, 0LL);
    v51 = Instance;
    if ( aiEnt )
    {
      IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
      Instance = sub_1B64170(int___TypeInfo, 1LL);
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
              sub_1B6406C(v50, v29, v36, v37);
              Instance = sub_1B64170(int___TypeInfo, 1LL);
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
                sub_1B6432C(Instance, v22);
              *(_DWORD *)(v43 + 32) = Instance;
              v49->klass = (ServantStatusBattleListViewItem_c *)v43;
              sub_1B6406C(v49, v43, v45, v46);
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
    sub_1B64324(Instance);
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
  const MethodInfo *v7; // x2

  if ( (byte_49FEF45 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType);
    byte_49FEF45 = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, method);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  v5->fields.actiontype = actionType;
  BattleLogicTask__setActor(v5, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v5, v7);
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
      sub_1B64324(this);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v18; // x23
  BattleData_o *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_49FEF47 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleFieldData___, *(_QWORD *)&prcState);
    sub_1B640C8(&System_Func_BattleFieldData__bool__TypeInfo, v7);
    sub_1B640C8(&Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__, v8);
    sub_1B640C8(&BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo, v9);
    byte_49FEF47 = 1;
  }
  v10 = sub_1B64314(BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo, *(_QWORD *)&prcState, *(_QWORD *)&logicType);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13),
        *(_DWORD *)(v10 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_1B64324(v11);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleFieldData__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v10,
    Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__,
    0LL);
  if ( BasicHelper__Any_object__48384284(
         field_datalist,
         (System_Func_T__bool__o *)v18,
         (const MethodInfo_2E2491C *)Method_BasicHelper_Any_BattleFieldData___) )
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
    sub_1B64324(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B6432C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42882896(
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
    sub_1B64324(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B6432C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42882896(
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
    sub_1B64324(this);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1B6432C(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_42882896(
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

  if ( (byte_49FEF42 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6);
    byte_49FEF42 = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_313B4A4 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_313B21C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v9);
    }
LABEL_8:
    sub_1B64324(taskDictionary);
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
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v15; // x0

  if ( (byte_49FEF41 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v6);
    byte_49FEF41 = 1;
  }
  v7 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, *(_QWORD *)&index);
  BattleLogicTask___ctor(v7, 0LL);
  if ( !v7
    || (v7->fields.actiontype = actionType,
        BattleLogicTask__setActor(v7, 5, index, 0LL),
        (v8 = sub_1B64170(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_1B64324(v8);
  }
  v9 = v8;
  v10 = sub_1B64204(v7, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
  if ( !v10 )
  {
    v15 = sub_1B64348(0LL);
    sub_1B641F0(v15, 0LL);
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1B6432C(v10, v11);
  *(_QWORD *)(v9 + 32) = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)v7, v12, v13);
  return (BattleLogicTask_array *)v9;
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
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t v12; // w23
  unsigned int v13; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v17; // x24
  System_Collections_Generic_List_object__o *v18; // x22
  struct BattleData_o *v19; // x8
  AiFieldEntity_o *Action_42883952; // x0
  const MethodInfo *v21; // x3
  int32_t v22; // w4
  const MethodInfo *v23; // x5

  v4 = this;
  if ( (byte_49FEF43 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicFieldAi_o *)sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_49FEF43 = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_313B4A4 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_313B21C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v12 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0LL);
      v13 = (unsigned int)this;
    }
    else
    {
      v13 = 0;
    }
    data = v4->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v13 < (int)max_length )
    {
      if ( v13 >= max_length )
        sub_1B6432C(this, v10);
      v17 = field_datalist->m_Items[v13];
      v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                           v10,
                                                           v11);
      System_Collections_Generic_List_object____ctor(
        v18,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v19 = v4->fields.data;
      if ( v19 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_42883952 = AiLogic__getAction_42883952(
                              (AiLogic_o *)this,
                              v17,
                              v12,
                              v19->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_42883952 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v17,
                                             Action_42883952,
                                             (int32_t)v21,
                                             v22,
                                             v23);
            if ( !v18 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v18,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_42883952,
                                           task->fields.actiontype,
                                           v13 + 1,
                                           v21);
          if ( v18 )
          {
            System_Collections_Generic_List_object___AddRange(
              v18,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v18,
                                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1B64324(this);
    }
  }
  return v4->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createDeadActionTask(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogicTask_o *v4; // x20
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FEF44 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, method);
    byte_49FEF44 = 1;
  }
  v4 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, method, v2);
  BattleLogicTask___ctor(v4, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  v4->fields.actiontype = 34;
  BattleLogicTask__setActor(v4, 5, 0, 0LL);
  return BattleLogicFieldAi__createBaseActionTask(this, v4, v6);
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
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_49FEF49 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, targetIds);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    byte_49FEF49 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       targetIds,
                                                       skillInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
        sub_1B6432C(v15, v16);
      v21 = targetIds->m_Items[v19 + 1];
      if ( (v21 & 0x80000000) == 0 )
      {
        v22 = sub_1B64314(BattleLogicTask_TypeInfo, v16, v17);
        BattleLogicTask___ctor((BattleLogicTask_o *)v22, 0LL);
        if ( !v22 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v22, 0LL);
        *(_QWORD *)(v22 + 72) = skillInfo;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 72), (int32_t)skillInfo, v23, v24);
        BattleLogicTask__setActor((BattleLogicTask_o *)v22, 5, v21, 0LL);
        *(_QWORD *)(v22 + 152) = motionMessage;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 152), (int32_t)motionMessage, v25, v26);
        *(_BYTE *)(v22 + 160) = v20;
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
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), v22, v27, v28);
        }
      }
      LODWORD(v18) = targetIds->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !v14 )
LABEL_17:
    sub_1B64324(v15);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v25; // x2
  AiActEntity_o *v26; // x24
  int32_t v27; // w25
  __int64 v28; // x23
  AiState_o *aiState; // x22
  char v30; // w26
  __int64 v31; // x2
  __int64 v32; // x1
  WeightRate_int__o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  int *skillVals; // x8
  int32_t v38; // w22
  unsigned int v39; // w26
  __int64 v40; // x9
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v42; // x22
  bool isForcedSkillSpeedOne; // w0
  __int64 v44; // x1
  __int64 v45; // x2
  bool v46; // w27
  __int64 v47; // x26
  int32_t v48; // w2
  int32_t v49; // w3
  bool v50; // w27
  struct System_String_o *infoText; // x1
  const MethodInfo *v52; // x5
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  bool isSkillType; // w0
  __int64 v66; // x1
  __int64 v67; // x2
  const MethodInfo *v68; // x7
  const MethodInfo *v69; // x5
  BattleLogicBaseAi_o *v70; // x0
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  int32_t v73; // w3
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  const MethodInfo *v78; // x2
  __int64 v79; // x23
  const MethodInfo *v80; // x3
  int32_t v81; // w2
  int32_t v82; // w3
  const MethodInfo *v83; // x4
  const MethodInfo *v84; // x2
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-60h] BYREF
  int v87; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_49FEF46 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, fieldData);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v12);
    sub_1B640C8(&FieldAiActArgument_TypeInfo, v13);
    sub_1B640C8(&int___TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v20);
    sub_1B640C8(&WeightRate_int__TypeInfo, v21);
    sub_1B640C8(&StringLiteral_8668/*"MOTION_"*/, v22);
    byte_49FEF46 = 1;
  }
  v87 = 0;
  ptTarget = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_52;
  if ( !Instance )
    goto LABEL_52;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v26 = (AiActEntity_o *)Instance;
  v27 = *((_DWORD *)Instance + 5);
  v28 = sub_1B64314(BattleSkillInfoData_TypeInfo, v24, v25);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v28, 0LL);
  Instance = (void *)AiAct__Check(99, v26->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_52;
  aiState = fieldData->fields.aiState;
  v30 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v32 = (unsigned int)Instance;
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
  v34 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v32, v31);
  WeightRate_int____ctor(v34, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
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
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v27, v36) )
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
    v39 = skillVals[8];
    v38 = skillVals[9];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v39, v38, 0LL);
    if ( Instance )
    {
      if ( !v28 )
        goto LABEL_52;
      v40 = *(_QWORD *)v28;
      *(_DWORD *)(v28 + 24) = fieldData->fields.uniqueId;
      *(_QWORD *)(v28 + 16) = 20LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v40 + 376))(v28, v39, *(_QWORD *)(v40 + 384));
      *(_DWORD *)(v28 + 36) = v38;
    }
    else
    {
LABEL_25:
      v27 = 0;
    }
  }
  v42 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v46 = isForcedSkillSpeedOne;
  v47 = sub_1B64314(BattleLogicTask_TypeInfo, v44, v45);
  BattleLogicTask___ctor((BattleLogicTask_o *)v47, 0LL);
  if ( !v47
    || (v50 = v46,
        *(_BYTE *)(v47 + 160) = v50,
        infoText = aiEnt->fields.infoText,
        *(_QWORD *)(v47 + 152) = infoText,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 152), (int32_t)infoText, v48, v49),
        BattleLogicTask__setActor((BattleLogicTask_o *)v47, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_52:
    sub_1B64324(Instance);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v27, aiEnt->fields.aiActId, 0LL);
  if ( v27 == 71 )
  {
    Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
    v87 = (int)Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v42,
        v50,
        (BattleLogicTask_o *)v47,
        v52);
      v53 = System_Int32__ToString((int32_t)&v87, 0LL);
      v54 = System_String__Concat_61375396((System_String_o *)StringLiteral_8668/*"MOTION_"*/, v53, 0LL);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v47, v54, 0LL);
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
      *(_QWORD *)(v47 + 112) = ServantGameObject;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 112), (int32_t)ServantGameObject, v57, v58);
      BattleLogicTask__setActor((BattleLogicTask_o *)v47, 5, fieldData->fields.uniqueId, 0LL);
      if ( !v42 )
        goto LABEL_52;
      items = v42->fields._items;
      v62 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v42->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v42,
          (Il2CppObject *)v47,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        v42->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v47;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 4), v47, v59, v60);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v42,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_51:
    if ( !v42 )
      goto LABEL_52;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v42,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v27, 0LL);
  if ( !v28 || !isSkillType )
  {
    v79 = sub_1B64314(FieldAiActArgument_TypeInfo, v66, v67);
    BaseAiActArgument___ctor((BaseAiActArgument_o *)v79, v26, (AiBaseEntity_o *)aiEnt, v80);
    *(_QWORD *)(v79 + 32) = fieldData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v79 + 32), (int32_t)fieldData, v81, v82);
    *(_BYTE *)(v79 + 40) = v50;
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v42,
      v27,
      (BaseAiActArgument_o *)v79,
      v83);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v84);
    goto LABEL_51;
  }
  target = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  ptTarget = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                       this,
                       (BattleSkillInfoData_o *)v28,
                       (AiBaseEntity_o *)aiEnt,
                       v26,
                       fieldData,
                       &target,
                       &ptTarget,
                       v68);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_51;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v42,
    v50,
    (BattleLogicTask_o *)v47,
    v69);
  BattleLogicBaseAi__SetSkillSelectAddIndex(v70, (BattleSkillInfoData_o *)v28, (AiBaseEntity_o *)aiEnt, v71);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v47, (BattleSkillInfoData_o *)v28, target, ptTarget, 0, 0, 0LL);
  BattleLogicTask__setActor((BattleLogicTask_o *)v47, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v42 )
    goto LABEL_52;
  v74 = v42->fields._items;
  v75 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v42->fields._version;
  if ( !v74 )
    goto LABEL_52;
  v76 = v42->fields._size;
  if ( (unsigned int)v76 >= v74->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      (Il2CppObject *)v47,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = &v74->obj.klass + v76;
    v42->fields._size = v76 + 1;
    v77[4] = (Il2CppClass *)v47;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 4), v47, v72, v73);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v78);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v42,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v10; // x2
  BattleLogic_reactionFunction_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  BattleLogic_reactionFunction_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  BattleLogic_reactionFunction_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogic_reactionFunction_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  BattleLogic_reactionFunction_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  BattleLogic_reactionFunction_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  BattleLogic_reactionFunction_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  BattleLogic_reactionFunction_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  BattleLogic_reactionFunction_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  BattleLogic_reactionFunction_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  BattleLogic_reactionFunction_o *v41; // x21

  if ( (byte_49FEF40 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleLogicFieldAi_createBaseActionTask__, list);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1B640C8(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_49FEF40 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_1B64324(v8);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v7,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v11 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v9, v10);
  BattleLogic_reactionFunction___ctor(v11, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v11,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v14 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v12, v13);
  BattleLogic_reactionFunction___ctor(v14, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v14,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v17 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v15, v16);
  BattleLogic_reactionFunction___ctor(v17, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v17,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v18, v19);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v20,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v23 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v21, v22);
  BattleLogic_reactionFunction___ctor(v23, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v23,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v26 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v24, v25);
  BattleLogic_reactionFunction___ctor(v26, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v26,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v29 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v27, v28);
  BattleLogic_reactionFunction___ctor(v29, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v29,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v32 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v30, v31);
  BattleLogic_reactionFunction___ctor(v32, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v32,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v35 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v33, v34);
  BattleLogic_reactionFunction___ctor(v35, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v35,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v38 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v36, v37);
  BattleLogic_reactionFunction___ctor(v38, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v38,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v41 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, v39, v40);
  BattleLogic_reactionFunction___ctor(v41, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v41,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1B64324(this);
  return AiLogic__checkThinking_42882896(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
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
    sub_1B64324(this);
  return f->fields.index == aiInfo->fields.uniqueId;
}