void QuestBehaviorEntity___ctor(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938CC0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938CC0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestBehaviorEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_5938CBD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_5938CBD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           questId,
           phase,
           num,
           priority,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *QuestBehaviorEntity__CreatePrimaryKey(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return QuestBehaviorEntity__CreatePK(
           this->fields.questId,
           this->fields.phase,
           this->fields.num,
           this->fields.priority,
           v2);
}


int64_t QuestBehaviorEntity__GetUniqueId(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_5938CBE & 1) == 0 )
  {
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    byte_5938CBE = 1;
  }
  questId = this->fields.questId;
  phase = this->fields.phase;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
  return BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0);
}


bool QuestBehaviorEntity__checkBehaviorType(QuestBehaviorEntity_o *this, int32_t type, const MethodInfo *method)
{
  return this->fields.behaviorType == type;
}


bool QuestBehaviorEntity__checkConditions(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  int32_t condTargetId; // w21
  int64_t condNum; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938CBF & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938CBF = 1;
  }
  condType = this->fields.condType;
  entity = 0;
  if ( condType == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( MasterData_object )
      {
        Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                      (UserItemMaster_o *)MasterData_object,
                                      &entity,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      this->fields.condTargetId,
                                      0);
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
    sub_21FFECC(Instance, v5);
  }
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}


int32_t QuestBehaviorEntity__getskillId(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *behaviorValues; // x8

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_21FFECC(this, method);
  if ( !LODWORD(behaviorValues->max_length) )
    sub_21FFED4(this);
  return behaviorValues->m_Items[0];
}


int32_t QuestBehaviorEntity__getskillLv(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *behaviorValues; // x8

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_21FFECC(this, method);
  if ( (behaviorValues->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(this);
  return behaviorValues->m_Items[1];
}