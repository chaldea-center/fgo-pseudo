void __fastcall UserQuestRecordEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct UserQuestRecordEntity_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UserQuestRecordEntity_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4389343 & 1) == 0 )
  {
    sub_B775C4(&UserQuestRecordEntity_TypeInfo);
    sub_B775C4(&StringLiteral_23297/*"turnMaxDamage"*/);
    sub_B775C4(&StringLiteral_20555/*"knockdownNum"*/);
    sub_B775C4(&StringLiteral_23208/*"totalDamageToAliveEnemy"*/);
    byte_4389343 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserQuestRecordEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23297/*"turnMaxDamage"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23297/*"turnMaxDamage"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserQuestRecordEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20555/*"knockdownNum"*/;
  v9->KEY_RECORD_KNOCKDOWN_NUM = (struct System_String_o *)StringLiteral_20555/*"knockdownNum"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->KEY_RECORD_KNOCKDOWN_NUM, v10, v11, v12, v13, v14, v15, v16);
  v17 = UserQuestRecordEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23208/*"totalDamageToAliveEnemy"*/;
  v17->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY = (struct System_String_o *)StringLiteral_23208/*"totalDamageToAliveEnemy"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&v17->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall UserQuestRecordEntity___ctor(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438933D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438933D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserQuestRecordEntity___ctor_21753760(
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

  if ( (byte_438933E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438933E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  if ( !original )
    sub_B7769C(v5, v6);
  this->fields.userId = original->fields.userId;
  this->fields.questId = original->fields.questId;
  this->fields.recordType = original->fields.recordType;
  this->fields.recordValue = original->fields.recordValue;
  recordValueJson = original->fields.recordValueJson;
  this->fields.recordValueJson = recordValueJson;
  sub_B77560(
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
  sub_B77560(
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


System_String_o *__fastcall UserQuestRecordEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  if ( (byte_4389340 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4389340 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           recordType,
           (const MethodInfo_1D17884 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserQuestRecordEntity__CreatePrimaryKey(
        UserQuestRecordEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int64_t userId; // x21
  int32_t recordType; // w19
  int32_t questId; // w20

  if ( (byte_438933F & 1) == 0 )
  {
    sub_B775C4(&UserQuestRecordEntity_TypeInfo);
    byte_438933F = 1;
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

  if ( (byte_4389341 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4389341 = 1;
  }
  recordValueJson = this->fields.recordValueJson;
  if ( recordValueJson )
    LOBYTE(recordValueJson) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recordValueJson,
                                (System_Xml_XmlQualifiedName_o *)key,
                                (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *recordValueJson; // x0
  int64_t result; // x0
  const MethodInfo *v10; // x0

  v4 = defValue;
  if ( (byte_4389342 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    byte_4389342 = 1;
  }
  if ( !UserQuestRecordEntity__existRecordKey(this, key, (const MethodInfo *)defValue) )
    return v4;
  recordValueJson = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.recordValueJson;
  if ( !recordValueJson
    || (recordValueJson = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                              recordValueJson,
                                                                                              (System_Type_o *)key,
                                                                                              (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(recordValueJson, v7);
  }
  if ( recordValueJson->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(recordValueJson);
  v10 = (const MethodInfo *)sub_B77990(recordValueJson);
  UserQuestRecordEntity___cctor(v10);
  return result;
}