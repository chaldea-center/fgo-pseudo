void __fastcall QuestBehaviorEntity___ctor(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B18A0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B18A0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestBehaviorEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B189E & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42B189E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           questId,
           phase,
           num,
           priority,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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


int64_t __fastcall QuestBehaviorEntity__GetQuestPhaseNo(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  return this->fields.phase + 100 * this->fields.questId;
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
  int32_t condType; // w20
  int64_t Instance; // x0
  __int64 v5; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t num; // w8
  int32_t condTargetId; // w21
  int64_t condNum; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B189F & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B189F = 1;
  }
  entity = 0LL;
  condType = this->fields.condType;
  if ( condType == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = UserItemMaster__TryGetEntity(
                     MasterData_WarQuestSelectionMaster,
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
    sub_B52A5C(Instance, v5);
  }
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
}


int32_t __fastcall QuestBehaviorEntity__getskillId(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *behaviorValues; // x8
  __int64 v4; // x0

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_B52A5C(this, method);
  if ( !behaviorValues->max_length )
  {
    v4 = sub_B52A88(this);
    sub_B52A28(v4, 0LL);
  }
  return behaviorValues->m_Items[1];
}


int32_t __fastcall QuestBehaviorEntity__getskillLv(QuestBehaviorEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *behaviorValues; // x8
  __int64 v4; // x0

  behaviorValues = this->fields.behaviorValues;
  if ( !behaviorValues )
    sub_B52A5C(this, method);
  if ( behaviorValues->max_length <= 1 )
  {
    v4 = sub_B52A88(this);
    sub_B52A28(v4, 0LL);
  }
  return behaviorValues->m_Items[2];
}