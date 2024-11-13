void __fastcall BattleLogicFieldAi___ctor(BattleLogicFieldAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleLogicTask_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  const MethodInfo *v45; // x1

  if ( (byte_4B18E18 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask___TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__,
      v10,
      v11);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo,
      v12,
      v13);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo,
      v14,
      v15);
    byte_4B18E18 = 1;
  }
  v16 = (struct BattleLogicTask_array *)sub_1BCA888(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.zeroTask, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v26 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__TypeInfo,
                                                                   v23,
                                                                   v24,
                                                                   v25);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v26,
    (const MethodInfo_323183C *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE___ctor__);
  if ( !v26 )
    goto LABEL_6;
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    48,
    28,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    49,
    29,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    46,
    30,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    47,
    31,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    43,
    32,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    45,
    33,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    44,
    43,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    75,
    64,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v26,
    76,
    70,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__Add__);
  this->fields.taskDictionary = (struct System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__o *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.taskDictionary, (int64_t)v26, v29, v30, v31, v32, v33, v34);
  v38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__TypeInfo,
                                                                   v35,
                                                                   v36,
                                                                   v37);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum____ctor(
    v38,
    (const MethodInfo_323183C *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE___ctor__);
  if ( !v38 )
LABEL_6:
    sub_1BCAA3C(v27, v28);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    28,
    10,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    29,
    11,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    30,
    12,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    31,
    13,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    32,
    6,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    33,
    4,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    34,
    2,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    43,
    15,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    64,
    21,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    66,
    19,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    67,
    22,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___Add(
    v38,
    70,
    23,
    (const MethodInfo_3232200 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__Add__);
  this->fields.stateDicitionary = (struct System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__o *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stateDicitionary, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v45);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *Voice; // x0
  __int64 v16; // x1
  struct BattleData_o *data; // x8
  System_String_o *v18; // x24
  int32_t EffectType; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  int32_t v23; // w25
  int64_t v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  float CutinAdditionalTime; // s0
  struct System_String_o **p_motionMessage; // x20
  struct System_String_o *motionMessage; // t1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct BattleLogicTask_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  __int64 v50; // x8
  _QWORD *v51; // x19
  System_String_o *v52; // x19
  float v53; // s0
  float v54; // s8
  System_String_o *v55; // x19
  System_String_o *v56; // x20

  if ( (byte_4B18E13 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, ent, retlist);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11, v12);
    sub_1BCA7E0(&SoundManager_TypeInfo, v13, v14);
    byte_4B18E13 = 1;
  }
  if ( ent )
  {
    Voice = AiFieldEntity__getVoice(ent, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_31;
    v18 = (System_String_o *)Voice;
    if ( data->fields.enemyMasterInfo )
    {
      EffectType = AiFieldEntity__getEffectType(ent, 0LL);
      if ( EffectType )
      {
        v23 = EffectType;
        v24 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v20, v21, v22);
        BattleLogicTask___ctor((BattleLogicTask_o *)v24, 0LL);
        if ( !v24 )
          goto LABEL_31;
        BattleLogicTask__setEnemyMasterCutIn((BattleLogicTask_o *)v24, v23, 0LL);
        *(_QWORD *)(v24 + 104) = v18;
        sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 104), (int64_t)v18, v25, v26, v27, v28, v29, v30);
        *(_BYTE *)(v24 + 160) = isForcedSpeedOne;
        CutinAdditionalTime = AiFieldEntity__GetCutinAdditionalTime(ent, 0.0, 0LL);
        *(float *)(v24 + 188) = CutinAdditionalTime;
        if ( CutinAdditionalTime > 0.0 )
        {
          if ( !mainTask )
            goto LABEL_31;
          motionMessage = mainTask->fields.motionMessage;
          p_motionMessage = &mainTask->fields.motionMessage;
          *(_QWORD *)(v24 + 152) = motionMessage;
          sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 152), (int64_t)motionMessage, v31, v32, v33, v34, v35, v36);
          *p_motionMessage = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)p_motionMessage, 0LL, v40, v41, v42, v43, v44, v45);
          *((_BYTE *)p_motionMessage + 40) = 1;
        }
        if ( retlist )
        {
          items = retlist->fields._items;
          v47 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++retlist->fields._version;
          if ( items )
          {
            size = retlist->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)retlist,
                (Il2CppObject *)v24,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              retlist->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v24;
              sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v24, v31, v32, v33, v34, v35, v36);
            }
            return;
          }
        }
LABEL_31:
        sub_1BCAA3C(Voice, v16);
      }
    }
    if ( !v18 )
      return;
    Voice = System_String__Split(v18, 0x3Au, 0, 0LL);
    if ( !Voice )
      goto LABEL_31;
    v50 = *((_QWORD *)Voice + 3);
    v51 = Voice;
    if ( (int)v50 < 2 )
    {
      if ( (_DWORD)v50 )
      {
        v52 = (System_String_o *)*((_QWORD *)Voice + 4);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v16);
        SoundManager__playVoice(v52, 0LL);
        return;
      }
LABEL_32:
      sub_1BCAA44(Voice, v16);
    }
    if ( (_DWORD)v50 == 2 )
    {
      v54 = 1.0;
    }
    else
    {
      v53 = System_Single__Parse(*((System_String_o **)Voice + 6), 0LL);
      v50 = v51[3];
      v54 = v53;
    }
    if ( (unsigned int)v50 < 2 )
      goto LABEL_32;
    v56 = (System_String_o *)v51[4];
    v55 = (System_String_o *)v51[5];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v16);
    SoundManager__playVoice_39419392(v56, v55, v54, 0LL, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  struct System_Int32_array *skillVals; // x8
  int32_t v15; // w22
  unsigned int v16; // w23
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v10 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4B18E15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, aiActEnt, skillInfo);
    this = (BattleLogicFieldAi_o *)sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    byte_4B18E15 = 1;
  }
  entity = 0LL;
  v13 = (unsigned int)*actType;
  if ( (v13 & 0xFFFFFFFE) == 40 )
  {
    if ( !aiActEnt )
      goto LABEL_18;
    skillVals = aiActEnt->fields.skillVals;
    if ( !skillVals )
      goto LABEL_18;
    if ( (int)skillVals->max_length > 1 )
    {
      v16 = skillVals->m_Items[1];
      v15 = skillVals->m_Items[2];
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
      this = (BattleLogicFieldAi_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
      if ( !this )
        goto LABEL_18;
      this = (BattleLogicFieldAi_o *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)this, &entity, v16, v15, 0LL);
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
              v16,
              klass->vtable._5_get_skillId.methodPtr);
            skillInfo->fields.skilllv = v15;
            return;
          }
        }
LABEL_18:
        sub_1BCAA3C(this, v13);
      }
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v13 != 90 && !BattleLogicBaseAi__ExistProcAiAct(v10, v13, (const MethodInfo *)skillInfo) )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x22
  System_Func_object__bool__o *v35; // x23
  Il2CppObject *object; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  BattleSkillInfoData_o *v40; // x22
  const MethodInfo *v41; // x5
  const MethodInfo *v42; // x7
  bool isSkillType; // w8
  bool v44; // w0
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-50h] BYREF
  int32_t actType; // [xsp+1Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B18E17 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_BattleFieldData___, aiInfo, aiBaseEntity);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_AiActMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&System_Func_BattleFieldData__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__, v17, v18);
    sub_1BCA7E0(&BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo, v19, v20);
    byte_4B18E17 = 1;
  }
  entity = 0LL;
  ptTarget = 0LL;
  target = 0LL;
  v21 = sub_1BCAA2C(BattleLogicFieldAi___c__DisplayClass24_0_TypeInfo, aiInfo, aiBaseEntity, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_18;
  *(_QWORD *)(v21 + 16) = aiInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)aiInfo, v24, v25, v26, v27, v28, v29);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !entity || (actType = HIDWORD(entity[1].klass), (data = this->fields.data) == 0LL) )
LABEL_18:
    sub_1BCAA3C(Master_object, v23);
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v35 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleFieldData__bool__TypeInfo, v23, v31, v32);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v21,
    Method_BattleLogicFieldAi___c__DisplayClass24_0__CheckAiCanActionFromTargets_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             field_datalist,
             (System_Func_T__bool__o *)v35,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_BattleFieldData___);
  v40 = (BattleSkillInfoData_o *)sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v37, v38, v39);
  BattleSkillInfoData___ctor(v40, 0LL);
  BattleLogicFieldAi__CheckAiActType(this, (AiActEntity_o *)entity, v40, (BattleFieldData_o *)object, &actType, v41);
  isSkillType = AiAct__isSkillType(actType, 0LL);
  v44 = 1;
  if ( v40 && isSkillType )
  {
    ptTarget = 0LL;
    target = 0LL;
    return BattleLogicFieldAi__CheckFieldSkillTarget(
             this,
             v40,
             aiBaseEntity,
             (AiActEntity_o *)entity,
             (BattleFieldData_o *)object,
             &target,
             &ptTarget,
             v42);
  }
  return v44;
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
    sub_1BCAA3C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1BCAA44(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44105784(
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 Instance; // x0
  __int64 v23; // x1
  SkillLvMaster_o *v24; // x19
  SkillLvEntity_o *v25; // x26
  __int64 v26; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x27
  int v28; // w22
  __int64 v29; // x8
  unsigned __int64 v30; // x24
  char v31; // w27
  bool IsDeadToEnableUpHate; // w25
  int64_t v33; // x28
  BattleLogicTarget_o *logictarget; // x29
  int32_t v35; // w20
  int32_t uniqueId; // w19
  System_Int32_array *targetIndividuality; // x24
  System_Int32_array *FieldEnemyServantIDList; // x26
  char v39; // w27
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  BattleData_o *data; // x8
  BattleLogicTarget_o *v47; // x19
  int32_t v48; // w20
  System_Int32_array *v49; // x29
  int32_t v50; // w24
  int64_t v51; // x28
  System_Int32_array *FieldPlayerServantIDList; // x26
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  AiLogic_o *aiLogic; // x19
  PartyOrganizationUtility_o *v61; // [xsp+18h] [xbp-88h]
  PartyOrganizationUtility_o *v62; // [xsp+20h] [xbp-80h]
  char v63; // [xsp+2Ch] [xbp-74h]
  BattleLogicFieldAi_o *v65; // [xsp+38h] [xbp-68h]

  if ( (byte_4B18E16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, skillInfo, aiEnt);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&int___TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B18E16 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_41;
  v24 = (SkillLvMaster_o *)Instance;
  Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v24 )
    goto LABEL_41;
  Instance = (__int64)SkillLvMaster__GetEntity(v24, Instance, skillInfo->fields.skilllv, 0LL);
  if ( !Instance )
    goto LABEL_41;
  v25 = (SkillLvEntity_o *)Instance;
  v26 = *(_QWORD *)(Instance + 32);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !v26 )
    goto LABEL_41;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v62 = (PartyOrganizationUtility_o *)target;
  if ( *(_DWORD *)(v26 + 24) != 1 )
    goto LABEL_13;
  if ( !Instance )
    goto LABEL_41;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        *(_DWORD *)(v26 + 32),
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
  if ( Instance )
  {
    Instance = FuncList__Check(43, *(_DWORD *)(Instance + 24), 0LL);
    v28 = Instance & 1;
  }
  else
  {
LABEL_13:
    v28 = 0;
  }
  v29 = *(_QWORD *)(v26 + 24);
  v65 = this;
  if ( (int)v29 < 1 )
  {
    v31 = 0;
  }
  else
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v29 )
        goto LABEL_42;
      if ( !v27 )
        goto LABEL_41;
      Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v27,
                            *(_DWORD *)(v26 + 32 + 4 * v30),
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        Instance = FuncList__Check(45, *(_DWORD *)(Instance + 24), 0LL);
        if ( (Instance & 1) != 0 )
          break;
      }
      LODWORD(v29) = *(_DWORD *)(v26 + 24);
      if ( (__int64)++v30 >= (int)v29 )
      {
        v31 = 0;
        goto LABEL_24;
      }
    }
    v31 = 1;
LABEL_24:
    this = v65;
  }
  if ( !fieldData )
    goto LABEL_41;
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_41;
  if ( v28 | BattleLogic__checkFunctionTargetsAvailable(
               (BattleLogic_o *)Instance,
               v25->fields.funcId,
               fieldData->fields.uniqueId,
               0LL) )
  {
    Instance = SkillLvEntity__IsEnableTarget(v25, 0, 0LL);
    v63 = Instance;
    if ( aiEnt )
    {
      IsDeadToEnableUpHate = AiBaseEntity__IsDeadToEnableUpHate(aiEnt, 0, 0LL);
      Instance = sub_1BCA888(int___TypeInfo, 1LL);
      if ( aiActEnt )
      {
        v33 = Instance;
        Instance = (__int64)this->fields.data;
        v61 = (PartyOrganizationUtility_o *)ptTarget;
        if ( Instance )
        {
          logictarget = this->fields.logictarget;
          v35 = aiActEnt->fields.target;
          uniqueId = fieldData->fields.uniqueId;
          targetIndividuality = aiActEnt->fields.targetIndividuality;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList((BattleData_o *)Instance, 0, 0LL);
          Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
          if ( logictarget )
          {
            v39 = v31 | v28;
            Instance = BattleLogicTarget__getTargetAiAct(
                         logictarget,
                         v35,
                         uniqueId,
                         targetIndividuality,
                         FieldEnemyServantIDList,
                         v63 & 1,
                         v39,
                         (System_Int32_array *)Instance,
                         aiActEnt,
                         IsDeadToEnableUpHate,
                         0LL);
            if ( v33 )
            {
              if ( !*(_DWORD *)(v33 + 24) )
                goto LABEL_42;
              *(_DWORD *)(v33 + 32) = Instance;
              v62->klass = (PartyOrganizationUtility_c *)v33;
              sub_1BCA784(v62, v33, v40, v41, v42, v43, v44, v45);
              Instance = sub_1BCA888(int___TypeInfo, 1LL);
              data = v65->fields.data;
              if ( !data )
                goto LABEL_41;
              v47 = v65->fields.logictarget;
              v48 = aiActEnt->fields.target;
              v49 = aiActEnt->fields.targetIndividuality;
              v50 = fieldData->fields.uniqueId;
              v51 = Instance;
              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
              Instance = (__int64)BattleSkillInfoData__GetAddIndiv(skillInfo, 0LL);
              if ( !v47 )
                goto LABEL_41;
              Instance = BattleLogicTarget__getTargetAiAct(
                           v47,
                           v48,
                           v50,
                           v49,
                           FieldPlayerServantIDList,
                           v63 & 1,
                           v39,
                           (System_Int32_array *)Instance,
                           aiActEnt,
                           IsDeadToEnableUpHate,
                           0LL);
              if ( !v51 )
                goto LABEL_41;
              if ( !*(_DWORD *)(v51 + 24) )
LABEL_42:
                sub_1BCAA44(Instance, v23);
              *(_DWORD *)(v51 + 32) = Instance;
              v61->klass = (PartyOrganizationUtility_c *)v51;
              sub_1BCA784(v61, v51, v53, v54, v55, v56, v57, v58);
              aiLogic = v65->fields.aiLogic;
              Instance = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0LL);
              if ( aiLogic )
                return !AiLogic__IsNoTargetNoActionTask(
                          aiLogic,
                          Instance,
                          (System_Int32_array *)v62->klass,
                          (System_Int32_array *)v61->klass,
                          0LL);
            }
          }
        }
      }
    }
LABEL_41:
    sub_1BCAA3C(Instance, v23);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B18E10 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, method);
    byte_4B18E10 = 1;
  }
  v6 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, method, v3);
  BattleLogicTask___ctor(v6, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
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
      sub_1BCAA3C(this, aiFieldEntity);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x2
  __int64 v23; // x3
  struct BattleData_o *data; // x8
  System_Object_array *field_datalist; // x21
  System_Func_object__bool__o *v26; // x23
  BattleData_o *v27; // x2
  const MethodInfo *v28; // x3

  if ( (byte_4B18E12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleFieldData___, *(_QWORD *)&prcState, *(_QWORD *)&logicType);
    sub_1BCA7E0(&System_Func_BattleFieldData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__, v9, v10);
    sub_1BCA7E0(&BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo, v11, v12);
    byte_4B18E12 = 1;
  }
  v13 = sub_1BCAA2C(
          BattleLogicFieldAi___c__DisplayClass18_0_TypeInfo,
          *(_QWORD *)&prcState,
          *(_QWORD *)&logicType,
          method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21),
        *(_DWORD *)(v13 + 24) = prcState,
        (data = this->fields.data) == 0LL) )
  {
    sub_1BCAA3C(v14, v15);
  }
  field_datalist = (System_Object_array *)data->fields.field_datalist;
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleFieldData__bool__TypeInfo, v15, v22, v23);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_BattleLogicFieldAi___c__DisplayClass18_0__GetCommonFieldAiTask_b__0__,
    0LL);
  if ( BasicHelper__Any_object__49274176(
         field_datalist,
         (System_Func_T__bool__o *)v26,
         (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleFieldData___) )
  {
    return BattleLogicFieldAi__checkFieldAiTask(this, logicType, v27, v28);
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
    sub_1BCAA3C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1BCAA44(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44105784(
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
    sub_1BCAA3C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1BCAA44(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44105784(
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
    sub_1BCAA3C(this, method);
  v4 = *(_QWORD *)&field_datalist->max_length;
  v5 = this;
  if ( (int)v4 < 1 )
    return v5->fields.zeroTask;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v4 )
      sub_1BCAA44(this, method);
    this = (BattleLogicFieldAi_o *)v5->fields.aiLogic;
    if ( !this )
      goto LABEL_11;
    this = (BattleLogicFieldAi_o *)AiLogic__checkThinking_44105784(
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
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *taskDictionary; // x0
  BattleLogicFieldAi_o *Item; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4B18E0D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__,
      *(_QWORD *)&ltype,
      data);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__,
      v6,
      v7);
    byte_4B18E0D = 1;
  }
  taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
  if ( !taskDictionary )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         taskDictionary,
         ltype,
         (const MethodInfo_32323EC *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__ContainsKey__) )
  {
    taskDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.taskDictionary;
    if ( taskDictionary )
    {
      Item = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                       taskDictionary,
                                       ltype,
                                       (const MethodInfo_3232164 *)Method_System_Collections_Generic_Dictionary_BattleLogic_LOGICTYPE__BattleLogicTask_ACTIONTYPE__get_Item__);
      return BattleLogicFieldAi__createBase(Item, (int32_t)Item, 0, v10);
    }
LABEL_8:
    sub_1BCAA3C(taskDictionary, *(_QWORD *)&ltype);
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
  __int64 v7; // x2
  BattleLogicTask_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v21; // x0

  if ( (byte_4B18E0C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask___TypeInfo, *(_QWORD *)&actionType, *(_QWORD *)&index);
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, v6, v7);
    byte_4B18E0C = 1;
  }
  v8 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, *(_QWORD *)&actionType, *(_QWORD *)&index, method);
  BattleLogicTask___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.actiontype = actionType,
        BattleLogicTask__setActor(v8, 5, index, 0LL),
        (v9 = sub_1BCA888(BattleLogicTask___TypeInfo, 1LL)) == 0) )
  {
    sub_1BCAA3C(v9, v10);
  }
  v11 = v9;
  v12 = sub_1BCA91C(v8, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
  if ( !v12 )
  {
    v21 = sub_1BCAA60(0LL);
    sub_1BCA908(v21, 0LL);
  }
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1BCAA44(v12, v13);
  *(_QWORD *)(v11 + 32) = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v8, v14, v15, v16, v17, v18, v19);
  return (BattleLogicTask_array *)v11;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createBaseActionTask(
        BattleLogicFieldAi_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicFieldAi_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x2
  __int64 v16; // x3
  int32_t v17; // w23
  unsigned int v18; // w21
  struct BattleData_o *data; // x8
  struct BattleFieldData_array *field_datalist; // x8
  il2cpp_array_size_t max_length; // w9
  BattleFieldData_o *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x22
  struct BattleData_o *v24; // x8
  AiFieldEntity_o *Action_44106840; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w4
  const MethodInfo *v28; // x5

  v4 = this;
  if ( (byte_4B18E0E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__,
      task,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11, v12);
    this = (BattleLogicFieldAi_o *)sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13, v14);
    byte_4B18E0E = 1;
  }
  if ( !task )
    goto LABEL_22;
  this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
  if ( !this )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
         task->fields.actiontype,
         (const MethodInfo_32323EC *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__ContainsKey__) )
  {
    this = (BattleLogicFieldAi_o *)v4->fields.stateDicitionary;
    if ( !this )
      goto LABEL_22;
    this = (BattleLogicFieldAi_o *)System_Collections_Generic_Dictionary_Int32Enum__Int32Enum___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                     task->fields.actiontype,
                                     (const MethodInfo_3232164 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__AiLogic_PROC_STATE__get_Item__);
    v17 = (int)this;
    if ( task->fields.actortype == 5 )
    {
      this = (BattleLogicFieldAi_o *)BattleLogicTask__getActorId(task, 0LL);
      v18 = (unsigned int)this;
    }
    else
    {
      v18 = 0;
    }
    data = v4->fields.data;
    if ( !data )
      goto LABEL_22;
    field_datalist = data->fields.field_datalist;
    if ( !field_datalist )
      goto LABEL_22;
    max_length = field_datalist->max_length;
    if ( (int)v18 < (int)max_length )
    {
      if ( v18 >= max_length )
        sub_1BCAA44(this, task);
      v22 = field_datalist->m_Items[v18];
      v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                           task,
                                                           v15,
                                                           v16);
      System_Collections_Generic_List_object____ctor(
        v23,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v24 = v4->fields.data;
      if ( v24 )
      {
        this = (BattleLogicFieldAi_o *)v4->fields.aiLogic;
        if ( this )
        {
          Action_44106840 = AiLogic__getAction_44106840(
                              (AiLogic_o *)this,
                              v22,
                              v17,
                              v24->fields.turnCount,
                              0,
                              (BattleLogicBaseAi_o *)v4,
                              0,
                              0LL);
          if ( Action_44106840 )
          {
            this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__procAiAct(
                                             v4,
                                             v22,
                                             Action_44106840,
                                             (int32_t)v26,
                                             v27,
                                             v28);
            if ( !v23 )
              goto LABEL_22;
            System_Collections_Generic_List_object___AddRange(
              v23,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          }
          this = (BattleLogicFieldAi_o *)BattleLogicFieldAi__createBase(
                                           (BattleLogicFieldAi_o *)Action_44106840,
                                           task->fields.actiontype,
                                           v18 + 1,
                                           v26);
          if ( v23 )
          {
            System_Collections_Generic_List_object___AddRange(
              v23,
              (System_Collections_Generic_IEnumerable_T__o *)this,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                              v23,
                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
          }
        }
      }
LABEL_22:
      sub_1BCAA3C(this, task);
    }
  }
  return v4->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicFieldAi__createDeadActionTask(
        BattleLogicFieldAi_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleLogicTask_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B18E0F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, method, v2);
    byte_4B18E0F = 1;
  }
  v5 = (BattleLogicTask_o *)sub_1BCAA2C(BattleLogicTask_TypeInfo, method, v2, v3);
  BattleLogicTask___ctor(v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  bool v25; // w26
  int32_t v26; // w24
  int64_t v27; // x23
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
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0

  if ( (byte_4B18E14 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, targetIds, skillInfo);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    byte_4B18E14 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       targetIds,
                                                       skillInfo,
                                                       motionMessage);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !targetIds )
    goto LABEL_17;
  v23 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = isForcedSpeedOne;
    do
    {
      if ( v24 >= (unsigned int)v23 )
        sub_1BCAA44(v19, v20);
      v26 = targetIds->m_Items[v24 + 1];
      if ( (v26 & 0x80000000) == 0 )
      {
        v27 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v20, v21, v22);
        BattleLogicTask___ctor((BattleLogicTask_o *)v27, 0LL);
        if ( !v27 )
          goto LABEL_17;
        BattleLogicTask__setResurrection((BattleLogicTask_o *)v27, 0LL);
        *(_QWORD *)(v27 + 72) = skillInfo;
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 72), (int64_t)skillInfo, v28, v29, v30, v31, v32, v33);
        BattleLogicTask__setActor((BattleLogicTask_o *)v27, 5, v26, 0LL);
        *(_QWORD *)(v27 + 152) = motionMessage;
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 152), (int64_t)motionMessage, v34, v35, v36, v37, v38, v39);
        *(_BYTE *)(v27 + 160) = v25;
        if ( !v18 )
          goto LABEL_17;
        items = v18->fields._items;
        v47 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)v27,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v27, v40, v41, v42, v43, v44, v45);
        }
      }
      LODWORD(v23) = targetIds->max_length;
    }
    while ( (__int64)++v24 < (int)v23 );
  }
  if ( !v18 )
LABEL_17:
    sub_1BCAA3C(v19, v20);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v18,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  void *Instance; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  AiActEntity_o *v41; // x24
  int32_t v42; // w25
  __int64 v43; // x23
  AiState_o *aiState; // x22
  char v45; // w26
  __int64 v46; // x2
  __int64 v47; // x3
  WeightRate_int__o *v49; // x0
  const MethodInfo *v50; // x2
  __int64 v51; // x3
  int *skillVals; // x8
  int32_t v53; // w22
  unsigned int v54; // w26
  __int64 v55; // x9
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v57; // x22
  bool isForcedSkillSpeedOne; // w0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  bool v62; // w27
  int64_t v63; // x26
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  bool v70; // w27
  struct System_String_o *infoText; // x1
  const MethodInfo *v72; // x5
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x0
  bool isSkillType; // w0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  const MethodInfo *v97; // x7
  const MethodInfo *v98; // x5
  BattleLogicBaseAi_o *v99; // x0
  const MethodInfo *v100; // x3
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  const MethodInfo *v111; // x2
  __int64 v112; // x23
  const MethodInfo *v113; // x3
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  const MethodInfo *v120; // x4
  const MethodInfo *v121; // x2
  System_Int32_array *ptTarget; // [xsp+8h] [xbp-68h] BYREF
  System_Int32_array *target; // [xsp+10h] [xbp-60h] BYREF
  int v124; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B18E11 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicTask_TypeInfo, fieldData, aiEnt);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AiActMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&FieldAiActArgument_TypeInfo, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v31, v32);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_8835/*"MOTION_"*/, v35, v36);
    byte_4B18E11 = 1;
  }
  v124 = 0;
  ptTarget = 0LL;
  target = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AiActMaster___);
  if ( !aiEnt )
    goto LABEL_52;
  if ( !Instance )
    goto LABEL_52;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               aiEnt->fields.aiActId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_52;
  v41 = (AiActEntity_o *)Instance;
  v42 = *((_DWORD *)Instance + 5);
  v43 = sub_1BCAA2C(BattleSkillInfoData_TypeInfo, v38, v39, v40);
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v43, 0LL);
  Instance = (void *)AiAct__Check(99, v41->fields.type, 0LL);
  if ( !fieldData )
    goto LABEL_52;
  aiState = fieldData->fields.aiState;
  v45 = (char)Instance;
  Instance = (void *)AiBaseEntity__getChangeAiId((AiBaseEntity_o *)aiEnt, 0LL);
  v38 = (unsigned int)Instance;
  if ( (v45 & 1) != 0 )
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
  v49 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, v38, v46, v47);
  WeightRate_int____ctor(v49, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  if ( (unsigned int)(v42 - 40) >= 2 )
  {
    if ( v42 == 91 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_52;
      *(_WORD *)&data->fields.endbattleFlg = 257;
      v42 = 91;
    }
    else if ( !BattleLogicBaseAi__ExistProcAiAct((BattleLogicBaseAi_o *)this, v42, v50) )
    {
      v42 = 0;
    }
  }
  else
  {
    skillVals = (int *)v41->fields.skillVals;
    if ( !skillVals )
      goto LABEL_52;
    if ( skillVals[6] < 2 )
      goto LABEL_25;
    v54 = skillVals[8];
    v53 = skillVals[9];
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_52;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_52;
    Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v54, v53, 0LL);
    if ( Instance )
    {
      if ( !v43 )
        goto LABEL_52;
      v55 = *(_QWORD *)v43;
      *(_DWORD *)(v43 + 24) = fieldData->fields.uniqueId;
      *(_QWORD *)(v43 + 16) = 20LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v55 + 376))(v43, v54, *(_QWORD *)(v55 + 384));
      *(_DWORD *)(v43 + 36) = v53;
    }
    else
    {
LABEL_25:
      v42 = 0;
    }
  }
  v57 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v38,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v62 = isForcedSkillSpeedOne;
  v63 = sub_1BCAA2C(BattleLogicTask_TypeInfo, v59, v60, v61);
  BattleLogicTask___ctor((BattleLogicTask_o *)v63, 0LL);
  if ( !v63
    || (v70 = v62,
        *(_BYTE *)(v63 + 160) = v70,
        infoText = aiEnt->fields.infoText,
        *(_QWORD *)(v63 + 152) = infoText,
        sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 152), (int64_t)infoText, v64, v65, v66, v67, v68, v69),
        BattleLogicTask__setActor((BattleLogicTask_o *)v63, 5, fieldData->fields.uniqueId, 0LL),
        (Instance = fieldData->fields.aiState) == 0LL) )
  {
LABEL_52:
    sub_1BCAA3C(Instance, v38);
  }
  AiState__setBeforeAction((AiState_o *)Instance, v42, aiEnt->fields.aiActId, 0LL);
  if ( v42 == 71 )
  {
    Instance = (void *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
    v124 = (int)Instance;
    if ( (int)Instance >= 1 )
    {
      BattleLogicFieldAi__AddAiFieldScriptTask(
        this,
        aiEnt,
        (System_Collections_Generic_List_BattleLogicTask__o *)v57,
        v70,
        (BattleLogicTask_o *)v63,
        v72);
      v73 = System_Int32__ToString((int32_t)&v124, 0LL);
      v74 = System_String__Concat_62401220((System_String_o *)StringLiteral_8835/*"MOTION_"*/, v73, 0LL);
      BattleLogicTask__SetPlayFieldMotion((BattleLogicTask_o *)v63, v74, 0LL);
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
      *(_QWORD *)(v63 + 112) = ServantGameObject;
      sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 112), (int64_t)ServantGameObject, v77, v78, v79, v80, v81, v82);
      BattleLogicTask__setActor((BattleLogicTask_o *)v63, 5, fieldData->fields.uniqueId, 0LL);
      if ( !v57 )
        goto LABEL_52;
      items = v57->fields._items;
      v90 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v57->fields._version;
      if ( !items )
        goto LABEL_52;
      size = v57->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v57,
          (Il2CppObject *)v63,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
      }
      else
      {
        v92 = &items->obj.klass + size;
        v57->fields._size = size + 1;
        v92[4] = (Il2CppClass *)v63;
        sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 4), v63, v83, v84, v85, v86, v87, v88);
      }
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v57,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    }
LABEL_51:
    if ( !v57 )
      goto LABEL_52;
    return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                      v57,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
  isSkillType = AiAct__isSkillType(v42, 0LL);
  if ( !v43 || !isSkillType )
  {
    v112 = sub_1BCAA2C(FieldAiActArgument_TypeInfo, v94, v95, v96);
    BaseAiActArgument___ctor((BaseAiActArgument_o *)v112, v41, (AiBaseEntity_o *)aiEnt, v113);
    *(_QWORD *)(v112 + 32) = fieldData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 32), (int64_t)fieldData, v114, v115, v116, v117, v118, v119);
    *(_BYTE *)(v112 + 40) = v70;
    BattleLogicBaseAi__SetProcAiActTask(
      (BattleLogicBaseAi_o *)this,
      (System_Collections_Generic_List_BattleLogicTask__o *)v57,
      v42,
      (BaseAiActArgument_o *)v112,
      v120);
    BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v121);
    goto LABEL_51;
  }
  target = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  ptTarget = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  Instance = (void *)BattleLogicFieldAi__CheckFieldSkillTarget(
                       this,
                       (BattleSkillInfoData_o *)v43,
                       (AiBaseEntity_o *)aiEnt,
                       v41,
                       fieldData,
                       &target,
                       &ptTarget,
                       v97);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_51;
  BattleLogicFieldAi__AddAiFieldScriptTask(
    this,
    aiEnt,
    (System_Collections_Generic_List_BattleLogicTask__o *)v57,
    v70,
    (BattleLogicTask_o *)v63,
    v98);
  BattleLogicBaseAi__SetSkillSelectAddIndex(v99, (BattleSkillInfoData_o *)v43, (AiBaseEntity_o *)aiEnt, v100);
  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v63, (BattleSkillInfoData_o *)v43, target, ptTarget, 0, 0, 0LL);
  BattleLogicTask__setActor((BattleLogicTask_o *)v63, 5, fieldData->fields.uniqueId, 0LL);
  if ( !v57 )
    goto LABEL_52;
  v107 = v57->fields._items;
  v108 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v57->fields._version;
  if ( !v107 )
    goto LABEL_52;
  v109 = v57->fields._size;
  if ( (unsigned int)v109 >= v107->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v57,
      (Il2CppObject *)v63,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
  }
  else
  {
    v110 = &v107->obj.klass + v109;
    v57->fields._size = v109 + 1;
    v110[4] = (Il2CppClass *)v63;
    sub_1BCA784((PartyOrganizationUtility_o *)(v110 + 4), v63, v101, v102, v103, v104, v105, v106);
  }
  BattleLogicFieldAi__DefenceTargetInitialize(this, aiEnt, v111);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v57,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicFieldAi__setReactionFunction(
        BattleLogicFieldAi_o *this,
        System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__o *list,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleLogic_reactionFunction_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleLogic_reactionFunction_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  BattleLogic_reactionFunction_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  BattleLogic_reactionFunction_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  BattleLogic_reactionFunction_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  BattleLogic_reactionFunction_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  BattleLogic_reactionFunction_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  BattleLogic_reactionFunction_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  BattleLogic_reactionFunction_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  BattleLogic_reactionFunction_o *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  BattleLogic_reactionFunction_o *v52; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  BattleLogic_reactionFunction_o *v56; // x21

  if ( (byte_4B18E0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleLogicFieldAi_createBaseActionTask__, list, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v6,
      v7);
    sub_1BCA7E0(&BattleLogic_reactionFunction_TypeInfo, v8, v9);
    byte_4B18E0B = 1;
  }
  v10 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, list, method, v3);
  BattleLogic_reactionFunction___ctor(v10, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  if ( !list )
    sub_1BCAA3C(v11, v12);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    28,
    (Il2CppObject *)v10,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v16 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v13, v14, v15);
  BattleLogic_reactionFunction___ctor(v16, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    29,
    (Il2CppObject *)v16,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v20 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v17, v18, v19);
  BattleLogic_reactionFunction___ctor(v20, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    30,
    (Il2CppObject *)v20,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v24 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v21, v22, v23);
  BattleLogic_reactionFunction___ctor(v24, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    31,
    (Il2CppObject *)v24,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v28 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v25, v26, v27);
  BattleLogic_reactionFunction___ctor(v28, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    32,
    (Il2CppObject *)v28,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v32 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v29, v30, v31);
  BattleLogic_reactionFunction___ctor(v32, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    33,
    (Il2CppObject *)v32,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v36 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v33, v34, v35);
  BattleLogic_reactionFunction___ctor(v36, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    34,
    (Il2CppObject *)v36,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v40 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v37, v38, v39);
  BattleLogic_reactionFunction___ctor(v40, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    43,
    (Il2CppObject *)v40,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v44 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v41, v42, v43);
  BattleLogic_reactionFunction___ctor(v44, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    64,
    (Il2CppObject *)v44,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v48 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v45, v46, v47);
  BattleLogic_reactionFunction___ctor(v48, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    66,
    (Il2CppObject *)v48,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v52 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v49, v50, v51);
  BattleLogic_reactionFunction___ctor(v52, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    67,
    (Il2CppObject *)v52,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
  v56 = (BattleLogic_reactionFunction_o *)sub_1BCAA2C(BattleLogic_reactionFunction_TypeInfo, v53, v54, v55);
  BattleLogic_reactionFunction___ctor(v56, (Il2CppObject *)this, Method_BattleLogicFieldAi_createBaseActionTask__, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    70,
    (Il2CppObject *)v56,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
    sub_1BCAA3C(this, fieldData);
  return AiLogic__checkThinking_44105784(_4__this->fields.aiLogic, fieldData, this->fields.prcState, _4__this, 0LL);
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
    sub_1BCAA3C(this, f);
  return f->fields.index == aiInfo->fields.uniqueId;
}