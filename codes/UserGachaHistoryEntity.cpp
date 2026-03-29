void UserGachaHistoryEntity___ctor(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31880 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31880 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserGachaHistoryEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_4D3187F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4D3187F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_31A2CCC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserGachaHistoryEntity__CreatePrimaryKey(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaHistoryEntity__CreatePK(this->fields.userId, this->fields.gachaId, v2);
}


System_String_o *UserGachaHistoryEntity__ToString(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  GiftName_GiftNameBase_o *v2; // x0
  __int64 v3; // x1

  v2 = GiftName_GiftNameFactoryBySummonHistory__Create(
         this->fields.giftType,
         this->fields.objectId,
         this->fields.num,
         0);
  if ( !v2 )
    sub_1C93D2C(0, v3);
  return v2->fields.name;
}


System_String_o *UserGachaHistoryEntity__get_CreatedAtToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *DateTime; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D3187D & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D3187D = 1;
  }
  p_createdAtString = (GrandQuestFolderBoardItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    DateTime = LocalizationManager__GetDateTime(createdAt, 0);
    p_createdAtString->klass = (GrandQuestFolderBoardItem_c *)DateTime;
    sub_1C93A78(p_createdAtString, (int32_t)DateTime, v6, v7, v8, v9, v10, v11);
  }
  return (System_String_o *)p_createdAtString->klass;
}


System_String_o *UserGachaHistoryEntity__get_TitleToString(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  System_String_o **p_titleString; // x19
  System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t gachaExtraGiftBonusType; // w8
  System_String_o *v12; // x1
  __int64 *v13; // x8

  if ( (byte_4D3187E & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12515/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/);
    sub_1C93AD4(&StringLiteral_12526/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12540/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/);
    byte_4D3187E = 1;
  }
  p_titleString = &this->fields.titleString;
  if ( System_String__IsNullOrEmpty(this->fields.titleString, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0);
    gachaExtraGiftBonusType = this->fields.gachaExtraGiftBonusType;
    if ( gachaExtraGiftBonusType == 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_12515/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/;
    }
    else
    {
      v12 = v4;
      if ( gachaExtraGiftBonusType != 2 )
      {
LABEL_15:
        *p_titleString = v12;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.titleString, (int32_t)v12, v5, v6, v7, v8, v9, v10);
        return *p_titleString;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = &StringLiteral_12540/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/;
    }
    v12 = LocalizationManager__Get((System_String_o *)*v13, 0);
    goto LABEL_15;
  }
  return *p_titleString;
}