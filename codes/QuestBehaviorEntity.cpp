void __fastcall QuestBehaviorEntity___ctor(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44F32 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44F32 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBehaviorEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B44F2F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&phase);
    byte_4B44F2F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           questId,
           phase,
           num,
           priority,
           (const MethodInfo_3032434 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall QuestBehaviorEntity__CreatePrimaryKey(
        QuestBehaviorEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return QuestBehaviorEntity__CreatePK(
           this->fields.questId,
           this->fields.phase,
           this->fields.num,
           this->fields.priority,
           v2);
}


int64_t __fastcall QuestBehaviorEntity__GetUniqueId(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4B44F30 & 1) == 0 )
  {
    sub_1BDB878(&BattleDataDefine_TypeInfo, method);
    byte_4B44F30 = 1;
  }
  questId = this->fields.questId;
  phase = this->fields.phase;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0LL);
}


bool __fastcall QuestBehaviorEntity__checkBehaviorType(
        QuestBehaviorEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return this->fields.behaviorType == type;
}


bool __fastcall QuestBehaviorEntity__checkConditions(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t condType; // w20
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  int32_t condTargetId; // w21
  int64_t condNum; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44F31 & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1BDB878(&NetworkManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B44F31 = 1;
  }
  entity = 0LL;
  condType = this->fields.condType;
  if ( condType == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v8);
        byte_4B3ED56 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( MasterData_object )
      {
        Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                      (UserItemMaster_o *)MasterData_object,
                                      &entity,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      this->fields.condTargetId,
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          num = 0;
          return this->fields.condNum <= num;
        }
        if ( entity )
        {
          num = entity->fields.num;
          return this->fields.condNum <= num;
        }
      }
    }
    sub_1BDBAD4(Instance, v8);
  }
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}


int32_t __fastcall QuestBehaviorEntity__getskillId(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *behaviorValues; // x8

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_1BDBAD4(this, method);
  if ( !behaviorValues->max_length )
    sub_1BDBADC(this, method, v2);
  return behaviorValues->m_Items[1];
}


int32_t __fastcall QuestBehaviorEntity__getskillLv(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *behaviorValues; // x8

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_1BDBAD4(this, method);
  if ( behaviorValues->max_length <= 1 )
    sub_1BDBADC(this, method, v2);
  return behaviorValues->m_Items[2];
}