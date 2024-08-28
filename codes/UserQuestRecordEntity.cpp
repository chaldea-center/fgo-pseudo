void __fastcall UserQuestRecordEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct UserQuestRecordEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct UserQuestRecordEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A099DC & 1) == 0 )
  {
    sub_1B686D4(&UserQuestRecordEntity_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_24008/*"turnMaxDamage"*/, v4);
    sub_1B686D4(&StringLiteral_20934/*"knockdownNum"*/, v5);
    sub_1B686D4(&StringLiteral_23906/*"totalDamageToAliveEnemy"*/, v6);
    byte_4A099DC = 1;
  }
  UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TURN_MAX_DAMAGE = (struct System_String_o *)StringLiteral_24008/*"turnMaxDamage"*/;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)UserQuestRecordEntity_TypeInfo->static_fields,
    StringLiteral_24008/*"turnMaxDamage"*/,
    v2,
    v3);
  v7 = StringLiteral_20934/*"knockdownNum"*/;
  static_fields = UserQuestRecordEntity_TypeInfo->static_fields;
  static_fields->KEY_RECORD_KNOCKDOWN_NUM = (struct System_String_o *)StringLiteral_20934/*"knockdownNum"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->KEY_RECORD_KNOCKDOWN_NUM, v7, v9, v10);
  v11 = StringLiteral_23906/*"totalDamageToAliveEnemy"*/;
  v12 = UserQuestRecordEntity_TypeInfo->static_fields;
  v12->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY = (struct System_String_o *)StringLiteral_23906/*"totalDamageToAliveEnemy"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v12->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY, v11, v13, v14);
}


void __fastcall UserQuestRecordEntity___ctor(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A099D6 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_string___ctor__, method);
    byte_4A099D6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30E4338 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserQuestRecordEntity___ctor_39892876(
        UserQuestRecordEntity_o *this,
        UserQuestRecordEntity_o *original,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *deckJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o **p_deckJson; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A099D7 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_string___ctor__, original);
    byte_4A099D7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30E4338 *)Method_DataEntityBase_string___ctor__);
  if ( !original )
    sub_1B68930(v5, v6);
  this->fields.userId = original->fields.userId;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&original->fields.questId;
  this->fields.recordValue = original->fields.recordValue;
  recordValueJson = original->fields.recordValueJson;
  this->fields.recordValueJson = recordValueJson;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.recordValueJson, (int32_t)recordValueJson, v7, v8);
  deckJson = original->fields.deckJson;
  this->fields.deckJson = deckJson;
  p_deckJson = &this->fields.deckJson;
  sub_1B68678((ServantStatusBattleListViewItem_o *)p_deckJson, (int32_t)deckJson, v12, v13);
  *((_OWORD *)p_deckJson - 1) = *(_OWORD *)&original->fields.createdAt;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserQuestRecordEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  if ( (byte_4A099D9 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_4A099D9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           recordType,
           (const MethodInfo_2E485C0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserQuestRecordEntity__CreatePrimaryKey(
        UserQuestRecordEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int64_t userId; // x21
  int32_t recordType; // w19
  int32_t questId; // w20

  if ( (byte_4A099D8 & 1) == 0 )
  {
    sub_1B686D4(&UserQuestRecordEntity_TypeInfo, method);
    byte_4A099D8 = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  recordType = this->fields.recordType;
  if ( !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  return UserQuestRecordEntity__CreatePK(userId, questId, recordType, v2);
}


bool __fastcall UserQuestRecordEntity__existRecordKey(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x0

  if ( (byte_4A099DA & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4A099DA = 1;
  }
  recordValueJson = this->fields.recordValueJson;
  if ( recordValueJson )
    LOBYTE(recordValueJson) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)recordValueJson,
                                (Il2CppObject *)key,
                                (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)recordValueJson;
}


int64_t __fastcall UserQuestRecordEntity__getRecordLong(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        int64_t defValue,
        const MethodInfo *method)
{
  int64_t v4; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *recordValueJson; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  int64_t result; // x0
  const MethodInfo *v13; // x0

  v4 = defValue;
  if ( (byte_4A099DB & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B686D4(&long_TypeInfo, v7);
    byte_4A099DB = 1;
  }
  if ( !UserQuestRecordEntity__existRecordKey(this, key, (const MethodInfo *)defValue) )
    return v4;
  recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.recordValueJson;
  if ( !recordValueJson
    || (recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       recordValueJson,
                                                                                       (Il2CppObject *)key,
                                                                                       (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B68930(recordValueJson, v8);
  }
  if ( recordValueJson->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(recordValueJson, long_TypeInfo, v10, v11);
  sub_1B68BF0(recordValueJson);
  UserQuestRecordEntity___cctor(v13);
  return result;
}