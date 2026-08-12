void UserQuestRecordEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct UserQuestRecordEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct UserQuestRecordEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5971808 & 1) == 0 )
  {
    sub_2213A60(&UserQuestRecordEntity_TypeInfo);
    sub_2213A60(&StringLiteral_25539/*"turnMaxDamage"*/);
    sub_2213A60(&StringLiteral_22198/*"knockdownNum"*/);
    sub_2213A60(&StringLiteral_25424/*"totalDamageToAliveEnemy"*/);
    byte_5971808 = 1;
  }
  v7 = StringLiteral_25539/*"turnMaxDamage"*/;
  UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TURN_MAX_DAMAGE = (struct System_String_o *)StringLiteral_25539/*"turnMaxDamage"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserQuestRecordEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_22198/*"knockdownNum"*/;
  static_fields = UserQuestRecordEntity_TypeInfo->static_fields;
  static_fields->KEY_RECORD_KNOCKDOWN_NUM = (struct System_String_o *)StringLiteral_22198/*"knockdownNum"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->KEY_RECORD_KNOCKDOWN_NUM,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_25424/*"totalDamageToAliveEnemy"*/;
  v17 = UserQuestRecordEntity_TypeInfo->static_fields;
  v17->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY = (struct System_String_o *)StringLiteral_25424/*"totalDamageToAliveEnemy"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void UserQuestRecordEntity___ctor(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971803 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5971803 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserQuestRecordEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  if ( (byte_5971805 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5971805 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           recordType,
           (const MethodInfo_3854A80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserQuestRecordEntity__CreatePrimaryKey(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int64_t userId; // x20
  int32_t recordType; // w19
  int32_t questId; // w21

  if ( (byte_5971804 & 1) == 0 )
  {
    sub_2213A60(&UserQuestRecordEntity_TypeInfo);
    byte_5971804 = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  recordType = this->fields.recordType;
  if ( !*(&UserQuestRecordEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo, method);
  return UserQuestRecordEntity__CreatePK(userId, questId, recordType, v2);
}


bool UserQuestRecordEntity__existRecordKey(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x0

  if ( (byte_5971806 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_5971806 = 1;
  }
  recordValueJson = this->fields.recordValueJson;
  if ( recordValueJson )
    LOBYTE(recordValueJson) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)recordValueJson,
                                (Il2CppObject *)key,
                                (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)recordValueJson;
}


int64_t UserQuestRecordEntity__getRecordLong(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        int64_t defValue,
        const MethodInfo *method)
{
  int64_t v4; // x20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *recordValueJson; // x0
  __int64 v9; // x2
  int64_t result; // x0
  const MethodInfo *v11; // x0

  v4 = defValue;
  if ( (byte_5971807 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5971807 = 1;
  }
  if ( !UserQuestRecordEntity__existRecordKey(this, key, (const MethodInfo *)defValue) )
    return v4;
  recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.recordValueJson;
  if ( !recordValueJson
    || (recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       recordValueJson,
                                                                                       (Il2CppObject *)key,
                                                                                       (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(recordValueJson, v7);
  }
  if ( recordValueJson->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_QWORD *)j_il2cpp_object_unbox_0(recordValueJson, qword_5984368, v9);
  sub_221405C(recordValueJson, qword_5984368, v9);
  UserQuestRecordEntity___cctor(v11);
  return result;
}