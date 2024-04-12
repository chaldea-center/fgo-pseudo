void __fastcall UserGachaHistoryEntity___ctor(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF26 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEF26 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaHistoryEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_42AEF25 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_42AEF25 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_1A4E080 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserGachaHistoryEntity__CreatePrimaryKey(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaHistoryEntity__CreatePK(this->fields.userId, this->fields.gachaId, v2);
}


System_String_o *__fastcall UserGachaHistoryEntity__ToString(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  GiftName_GiftNameBase_o *v2; // x0
  __int64 v3; // x1

  v2 = GiftName_GiftNameFactoryBySummonHistory__Create(
         this->fields.giftType,
         this->fields.objectId,
         this->fields.num,
         0LL);
  if ( !v2 )
    sub_B52A5C(0LL, v3);
  return v2->fields.name;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_CreatedAtToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_Int32_array **DateTime; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AEF23 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42AEF23 = 1;
  }
  p_createdAtString = (BattleServantConfConponent_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    DateTime = (System_Int32_array **)LocalizationManager__GetDateTime(createdAt, 0LL);
    p_createdAtString->klass = (BattleServantConfConponent_c *)DateTime;
    sub_B52920(p_createdAtString, DateTime, v6, v7, v8, v9, v10, v11);
  }
  return (System_String_o *)p_createdAtString->klass;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_TitleToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  System_String_o **p_titleString; // x19
  __int64 *v4; // x8
  System_Int32_array **v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AEF24 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12520/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_B52984(&StringLiteral_12530/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/);
    byte_42AEF24 = 1;
  }
  p_titleString = &this->fields.titleString;
  if ( System_String__IsNullOrEmpty(this->fields.titleString, 0LL) )
  {
    if ( this->fields.gachaExtraGiftBonusType == 2 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_12530/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v4 = &StringLiteral_12520/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
    }
    v5 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v4, 0LL);
    *p_titleString = (System_String_o *)v5;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.titleString, v5, v6, v7, v8, v9, v10, v11);
  }
  return *p_titleString;
}