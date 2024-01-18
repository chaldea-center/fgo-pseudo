void __fastcall UserQuestRecordEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct UserQuestRecordEntity_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UserQuestRecordEntity_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4185E0D & 1) == 0 )
  {
    sub_B2C35C(&UserQuestRecordEntity_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_22819/*"turnMaxDamage"*/, v8);
    sub_B2C35C(&StringLiteral_20145/*"knockdownNum"*/, v9);
    sub_B2C35C(&StringLiteral_22730/*"totalDamageToAliveEnemy"*/, v10);
    byte_4185E0D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserQuestRecordEntity_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_22819/*"turnMaxDamage"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22819/*"turnMaxDamage"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserQuestRecordEntity_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_20145/*"knockdownNum"*/;
  v13->KEY_RECORD_KNOCKDOWN_NUM = (struct System_String_o *)StringLiteral_20145/*"knockdownNum"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->KEY_RECORD_KNOCKDOWN_NUM, v14, v15, v16, v17, v18, v19, v20);
  v21 = UserQuestRecordEntity_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_22730/*"totalDamageToAliveEnemy"*/;
  v21->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY = (struct System_String_o *)StringLiteral_22730/*"totalDamageToAliveEnemy"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v21->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void __fastcall UserQuestRecordEntity___ctor(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185E07 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185E07 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserQuestRecordEntity___ctor_21578468(
        UserQuestRecordEntity_o *this,
        UserQuestRecordEntity_o *original,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *deckJson; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4185E08 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, original);
    byte_4185E08 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !original )
    sub_B2C434(v5, v6);
  this->fields.userId = original->fields.userId;
  this->fields.questId = original->fields.questId;
  this->fields.recordType = original->fields.recordType;
  this->fields.recordValue = original->fields.recordValue;
  recordValueJson = original->fields.recordValueJson;
  this->fields.recordValueJson = recordValueJson;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.recordValueJson,
    (System_Int32_array **)recordValueJson,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  deckJson = original->fields.deckJson;
  this->fields.deckJson = deckJson;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.deckJson,
    (System_Int32_array **)deckJson,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.createdAt = original->fields.createdAt;
  this->fields.updatedAt = original->fields.updatedAt;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserQuestRecordEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  if ( (byte_4185E0A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_4185E0A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           recordType,
           (const MethodInfo_1732E80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserQuestRecordEntity__CreatePrimaryKey(
        UserQuestRecordEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int64_t userId; // x21
  int32_t recordType; // w19
  int32_t questId; // w20

  if ( (byte_4185E09 & 1) == 0 )
  {
    sub_B2C35C(&UserQuestRecordEntity_TypeInfo, method);
    byte_4185E09 = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  recordType = this->fields.recordType;
  if ( (BYTE3(UserQuestRecordEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  }
  return UserQuestRecordEntity__CreatePK(userId, questId, recordType, v2);
}


bool __fastcall UserQuestRecordEntity__existRecordKey(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x0

  if ( (byte_4185E0B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4185E0B = 1;
  }
  recordValueJson = this->fields.recordValueJson;
  if ( recordValueJson )
    LOBYTE(recordValueJson) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recordValueJson,
                                (System_Xml_XmlQualifiedName_o *)key,
                                (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *recordValueJson; // x0
  int64_t result; // x0
  const MethodInfo *v11; // x0

  v4 = defValue;
  if ( (byte_4185E0C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_4185E0C = 1;
  }
  if ( !UserQuestRecordEntity__existRecordKey(this, key, (const MethodInfo *)defValue) )
    return v4;
  recordValueJson = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.recordValueJson;
  if ( !recordValueJson
    || (recordValueJson = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                              recordValueJson,
                                                                                              (System_Type_o *)key,
                                                                                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(recordValueJson, v8);
  }
  if ( recordValueJson->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(recordValueJson);
  v11 = (const MethodInfo *)sub_B2C728(recordValueJson);
  UserQuestRecordEntity___cctor(v11);
  return result;
}