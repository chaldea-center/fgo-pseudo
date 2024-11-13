void __fastcall UserGachaHistoryEntity___ctor(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16F24 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaHistoryEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_4B16F23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&gachaId, method);
    byte_4B16F23 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
    sub_1BCAA3C(0LL, v3);
  return v2->fields.name;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_CreatedAtToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_createdAtString; // x19
  __int64 v5; // x1
  int64_t createdAt; // x20
  System_String_o *DateTime; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B16F21 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B16F21 = 1;
  }
  p_createdAtString = (PartyOrganizationUtility_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    DateTime = LocalizationManager__GetDateTime(createdAt, 0LL);
    p_createdAtString->klass = (PartyOrganizationUtility_c *)DateTime;
    sub_1BCA784(p_createdAtString, (int64_t)DateTime, v8, v9, v10, v11, v12, v13);
  }
  return (System_String_o *)p_createdAtString->klass;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_TitleToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PartyOrganizationUtility_o *p_titleString; // x19
  __int64 v9; // x1
  int32_t gachaExtraGiftBonusType; // w21
  System_String_o **v11; // x8
  System_String_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B16F22 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12491/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_12504/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/, v6, v7);
    byte_4B16F22 = 1;
  }
  p_titleString = (PartyOrganizationUtility_o *)&this->fields.titleString;
  if ( System_String__IsNullOrEmpty(this->fields.titleString, 0LL) )
  {
    gachaExtraGiftBonusType = this->fields.gachaExtraGiftBonusType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    if ( gachaExtraGiftBonusType == 2 )
      v11 = (System_String_o **)&StringLiteral_12504/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/;
    else
      v11 = (System_String_o **)&StringLiteral_12491/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
    v12 = LocalizationManager__Get(*v11, 0LL);
    p_titleString->klass = (PartyOrganizationUtility_c *)v12;
    sub_1BCA784(p_titleString, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  }
  return (System_String_o *)p_titleString->klass;
}