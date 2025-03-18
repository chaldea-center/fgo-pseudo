void __fastcall UserQuestRecordEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct UserQuestRecordEntity_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct UserQuestRecordEntity_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C22DAE & 1) == 0 )
  {
    sub_1C3B764(&UserQuestRecordEntity_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_24593/*"{0:#,0}"*/, v8);
    sub_1C3B764(&StringLiteral_21430/*"mstIndividualityPersonality"*/, v9);
    sub_1C3B764(&StringLiteral_24489/*"xmlns"*/, v10);
    byte_4C22DAE = 1;
  }
  UserQuestRecordEntity_TypeInfo->static_fields->KEY_RECORD_TURN_MAX_DAMAGE = (struct System_String_o *)StringLiteral_24593/*"{0:#,0}"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserQuestRecordEntity_TypeInfo->static_fields,
    StringLiteral_24593/*"{0:#,0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_21430/*"mstIndividualityPersonality"*/;
  static_fields = UserQuestRecordEntity_TypeInfo->static_fields;
  static_fields->KEY_RECORD_KNOCKDOWN_NUM = (struct System_String_o *)StringLiteral_21430/*"mstIndividualityPersonality"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->KEY_RECORD_KNOCKDOWN_NUM, v11, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_24489/*"xmlns"*/;
  v20 = UserQuestRecordEntity_TypeInfo->static_fields;
  v20->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY = (struct System_String_o *)StringLiteral_24489/*"xmlns"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v20->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
    v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall UserQuestRecordEntity___ctor(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22DA8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22DA8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserQuestRecordEntity___ctor_41633328(
        UserQuestRecordEntity_o *this,
        UserQuestRecordEntity_o *original,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *deckJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o **p_deckJson; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C22DA9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, original);
    byte_4C22DA9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
  if ( !original )
    sub_1C3B9C0(v5, v6);
  this->fields.userId = original->fields.userId;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&original->fields.questId;
  this->fields.recordValue = original->fields.recordValue;
  recordValueJson = original->fields.recordValueJson;
  this->fields.recordValueJson = recordValueJson;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.recordValueJson,
    (int64_t)recordValueJson,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  deckJson = original->fields.deckJson;
  this->fields.deckJson = deckJson;
  p_deckJson = &this->fields.deckJson;
  sub_1C3B708((PartyOrganizationUtility_o *)p_deckJson, (int64_t)deckJson, v16, v17, v18, v19, v20, v21);
  *((_OWORD *)p_deckJson - 1) = *(_OWORD *)&original->fields.createdAt;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserQuestRecordEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  if ( (byte_4C22DAB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_4C22DAB = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           recordType,
           (const MethodInfo_2FEE9D8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserQuestRecordEntity__CreatePrimaryKey(
        UserQuestRecordEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int64_t userId; // x21
  int32_t recordType; // w19
  int32_t questId; // w20

  if ( (byte_4C22DAA & 1) == 0 )
  {
    sub_1C3B764(&UserQuestRecordEntity_TypeInfo, method);
    byte_4C22DAA = 1;
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

  if ( (byte_4C22DAC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4C22DAC = 1;
  }
  recordValueJson = this->fields.recordValueJson;
  if ( recordValueJson )
    LOBYTE(recordValueJson) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)recordValueJson,
                                (Il2CppObject *)key,
                                (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  if ( (byte_4C22DAD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C3B764(&long_TypeInfo, v7);
    byte_4C22DAD = 1;
  }
  if ( !UserQuestRecordEntity__existRecordKey(this, key, (const MethodInfo *)defValue) )
    return v4;
  recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.recordValueJson;
  if ( !recordValueJson
    || (recordValueJson = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       recordValueJson,
                                                                                       (Il2CppObject *)key,
                                                                                       (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C3B9C0(recordValueJson, v8);
  }
  if ( recordValueJson->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(recordValueJson, long_TypeInfo, v10, v11);
  sub_1C3BC80(recordValueJson);
  UserQuestRecordEntity___cctor(v13);
  return result;
}