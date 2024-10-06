void __fastcall QuestBehaviorEntity___ctor(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A7029D & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A7029D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBehaviorEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A7029A & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&phase);
    byte_4A7029A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           questId,
           phase,
           num,
           priority,
           (const MethodInfo_2E8CD90 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_4A7029B & 1) == 0 )
  {
    sub_1B90010(&BattleDataDefine_TypeInfo, method);
    byte_4A7029B = 1;
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
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  int32_t condTargetId; // w21
  int64_t condNum; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A7029C & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, v3);
    sub_1B90010(&NetworkManager_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A7029C = 1;
  }
  entity = 0LL;
  condType = this->fields.condType;
  if ( condType == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      if ( MasterData_object )
      {
        Instance = UserItemMaster__TryGetEntity(
                     (UserItemMaster_o *)MasterData_object,
                     &entity,
                     Instance,
                     this->fields.condTargetId,
                     0LL);
        if ( (Instance & 1) == 0 )
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
    sub_1B9026C(Instance, v8);
  }
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}


int32_t __fastcall QuestBehaviorEntity__getskillId(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *behaviorValues; // x8

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_1B9026C(this, method);
  if ( !behaviorValues->max_length )
    sub_1B90274(this, method);
  return behaviorValues->m_Items[1];
}


int32_t __fastcall QuestBehaviorEntity__getskillLv(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *behaviorValues; // x8

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_1B9026C(this, method);
  if ( behaviorValues->max_length <= 1 )
    sub_1B90274(this, method);
  return behaviorValues->m_Items[2];
}