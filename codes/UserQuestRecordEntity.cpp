void UserQuestRecordEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct UserQuestRecordEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct UserQuestRecordEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CC8348 & 1) == 0 )
  {
    sub_1C713B0(&UserQuestRecordEntity_TypeInfo);
    sub_1C713B0(&StringLiteral_24348/*"turnMaxDamage"*/);
    sub_1C713B0(&StringLiteral_21229/*"knockdownNum"*/);
    sub_1C713B0(&StringLiteral_24245/*"totalDamageToAliveEnemy"*/);
    byte_4CC8348 = 1;
  }
  UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TURN_MAX_DAMAGE = (struct System_String_o *)StringLiteral_24348/*"turnMaxDamage"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)UserQuestRecordEntity_TypeInfo->static_fields,
    StringLiteral_24348/*"turnMaxDamage"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_21229/*"knockdownNum"*/;
  static_fields = UserQuestRecordEntity_TypeInfo->static_fields;
  static_fields->KEY_RECORD_KNOCKDOWN_NUM = (struct System_String_o *)StringLiteral_21229/*"knockdownNum"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->KEY_RECORD_KNOCKDOWN_NUM, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_24245/*"totalDamageToAliveEnemy"*/;
  v16 = UserQuestRecordEntity_TypeInfo->static_fields;
  v16->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY = (struct System_String_o *)StringLiteral_24245/*"totalDamageToAliveEnemy"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v16->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
    v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void UserQuestRecordEntity___ctor(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8342 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC8342 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


void UserQuestRecordEntity___ctor_43409004(
        UserQuestRecordEntity_o *this,
        UserQuestRecordEntity_o *original,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *deckJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o **p_deckJson; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC8343 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC8343 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
  if ( !original )
    sub_1C71608(v5, v6);
  this->fields.userId = original->fields.userId;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&original->fields.questId;
  this->fields.recordValue = original->fields.recordValue;
  recordValueJson = original->fields.recordValueJson;
  this->fields.recordValueJson = recordValueJson;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.recordValueJson,
    (int32_t)recordValueJson,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  deckJson = original->fields.deckJson;
  this->fields.deckJson = deckJson;
  p_deckJson = &this->fields.deckJson;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_deckJson, (int32_t)deckJson, v16, v17, v18, v19, v20, v21);
  *((_OWORD *)p_deckJson - 1) = *(_OWORD *)&original->fields.createdAt;
}


System_String_o *UserQuestRecordEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  if ( (byte_4CC8345 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4CC8345 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           recordType,
           (const MethodInfo_31498E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserQuestRecordEntity__CreatePrimaryKey(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int64_t userId; // x21
  int32_t recordType; // w19
  int32_t questId; // w20

  if ( (byte_4CC8344 & 1) == 0 )
  {
    sub_1C713B0(&UserQuestRecordEntity_TypeInfo);
    byte_4CC8344 = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  recordType = this->fields.recordType;
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  return UserQuestRecordEntity__CreatePK(userId, questId, recordType, v2);
}


bool UserQuestRecordEntity__existRecordKey(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x0

  if ( (byte_4CC8346 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CC8346 = 1;
  }
  recordValueJson = this->fields.recordValueJson;
  if ( recordValueJson )
    LOBYTE(recordValueJson) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)recordValueJson,
                                (Il2CppObject *)key,
                                (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v10; // x3
  int64_t result; // x0
  const MethodInfo *v12; // x0

  v4 = defValue;
  if ( (byte_4CC8347 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&long_TypeInfo);
    byte_4CC8347 = 1;
  }
  if ( !UserQuestRecordEntity__existRecordKey(this, key, (const MethodInfo *)defValue) )
    return v4;
  recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.recordValueJson;
  if ( !recordValueJson
    || (recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       recordValueJson,
                                                                                       (Il2CppObject *)key,
                                                                                       (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C71608(recordValueJson, v7);
  }
  if ( recordValueJson->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(recordValueJson, long_TypeInfo, v9, v10);
  sub_1C719A4(recordValueJson);
  UserQuestRecordEntity___cctor(v12);
  return result;
}