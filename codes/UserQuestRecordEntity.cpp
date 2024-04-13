void __fastcall UserQuestRecordEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct UserQuestRecordEntity_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct UserQuestRecordEntity_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E6AC0 & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestRecordEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23124/*"turnMaxDamage"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_20400/*"knockdownNum"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23035/*"totalDamageToAliveEnemy"*/, v14, v15, v16);
    byte_42E6AC0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserQuestRecordEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23124/*"turnMaxDamage"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23124/*"turnMaxDamage"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = UserQuestRecordEntity_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_20400/*"knockdownNum"*/;
  v19->KEY_RECORD_KNOCKDOWN_NUM = (struct System_String_o *)StringLiteral_20400/*"knockdownNum"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->KEY_RECORD_KNOCKDOWN_NUM, v20, v21, v22, v23, v24, v25, v26);
  v27 = UserQuestRecordEntity_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_23035/*"totalDamageToAliveEnemy"*/;
  v27->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY = (struct System_String_o *)StringLiteral_23035/*"totalDamageToAliveEnemy"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v27->KEY_RECORD_TOTAL_DAMAGE_TO_ALIVE_ENEMY,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall UserQuestRecordEntity___ctor(UserQuestRecordEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6ABA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6ABA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserQuestRecordEntity___ctor_21765844(
        UserQuestRecordEntity_o *this,
        UserQuestRecordEntity_o *original,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *deckJson; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E6ABB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)original, (_DWORD)method, v3);
    byte_42E6ABB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !original )
    sub_B5D69C(v6, v7);
  this->fields.userId = original->fields.userId;
  this->fields.questId = original->fields.questId;
  this->fields.recordType = original->fields.recordType;
  this->fields.recordValue = original->fields.recordValue;
  recordValueJson = original->fields.recordValueJson;
  this->fields.recordValueJson = recordValueJson;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.recordValueJson,
    (System_Int32_array **)recordValueJson,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  deckJson = original->fields.deckJson;
  this->fields.deckJson = deckJson;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckJson,
    (System_Int32_array **)deckJson,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.createdAt = original->fields.createdAt;
  this->fields.updatedAt = original->fields.updatedAt;
}


System_String_o *__fastcall UserQuestRecordEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t recordType,
        const MethodInfo *method)
{
  if ( (byte_42E6ABD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, questId, recordType, method);
    byte_42E6ABD = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           recordType,
           (const MethodInfo_1AE36E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserQuestRecordEntity__CreatePrimaryKey(
        UserQuestRecordEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int64_t userId; // x21
  int32_t recordType; // w19
  int32_t questId; // w20

  if ( (byte_42E6ABC & 1) == 0 )
  {
    sub_B5D5C4(&UserQuestRecordEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6ABC = 1;
  }
  userId = this->fields.userId;
  questId = this->fields.questId;
  recordType = this->fields.recordType;
  if ( (BYTE3(UserQuestRecordEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserQuestRecordEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserQuestRecordEntity_TypeInfo);
  }
  return UserQuestRecordEntity__CreatePK(userId, questId, recordType, v3);
}


bool __fastcall UserQuestRecordEntity__existRecordKey(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *recordValueJson; // x0

  if ( (byte_42E6ABE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42E6ABE = 1;
  }
  recordValueJson = this->fields.recordValueJson;
  if ( recordValueJson )
    LOBYTE(recordValueJson) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)recordValueJson,
                                (System_Xml_XmlQualifiedName_o *)key,
                                (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)recordValueJson;
}


int64_t __fastcall UserQuestRecordEntity__getRecordLong(
        UserQuestRecordEntity_o *this,
        System_String_o *key,
        int64_t defValue,
        const MethodInfo *method)
{
  int64_t v4; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *recordValueJson; // x0
  int64_t result; // x0
  const MethodInfo *v13; // x0

  v4 = defValue;
  if ( (byte_42E6ABF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)key, defValue, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42E6ABF = 1;
  }
  if ( !UserQuestRecordEntity__existRecordKey(this, key, (const MethodInfo *)defValue) )
    return v4;
  recordValueJson = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.recordValueJson;
  if ( !recordValueJson
    || (recordValueJson = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                              recordValueJson,
                                                                                              (System_Type_o *)key,
                                                                                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(recordValueJson, v10);
  }
  if ( recordValueJson->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(recordValueJson);
  v13 = (const MethodInfo *)sub_B5D990(recordValueJson);
  UserQuestRecordEntity___cctor(v13);
  return result;
}