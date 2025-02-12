void __fastcall UserGachaHistoryEntity___ctor(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5440 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB5440 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaHistoryEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_4BB543F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&gachaId);
    byte_4BB543F = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_2F8D798 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
    sub_1C13F80(0LL, v3);
  return v2->fields.name;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_CreatedAtToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *DateTime; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB543D & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BB543D = 1;
  }
  p_createdAtString = (PartyOrganizationUtility_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    DateTime = LocalizationManager__GetDateTime(createdAt, 0LL);
    p_createdAtString->klass = (PartyOrganizationUtility_c *)DateTime;
    sub_1C13CC8(p_createdAtString, (int64_t)DateTime, v6, v7, v8, v9, v10, v11);
  }
  return (System_String_o *)p_createdAtString->klass;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_TitleToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PartyOrganizationUtility_o *p_titleString; // x19
  int32_t gachaExtraGiftBonusType; // w21
  System_String_o **v7; // x8
  System_String_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BB543E & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_12554/*"SUMMON_AUTOSALE_MSG"*/, v3);
    sub_1C13D24(&StringLiteral_12567/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/, v4);
    byte_4BB543E = 1;
  }
  p_titleString = (PartyOrganizationUtility_o *)&this->fields.titleString;
  if ( System_String__IsNullOrEmpty(this->fields.titleString, 0LL) )
  {
    gachaExtraGiftBonusType = this->fields.gachaExtraGiftBonusType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( gachaExtraGiftBonusType == 2 )
      v7 = (System_String_o **)&StringLiteral_12567/*"SUMMON_CONFIRM_DLG_BONUS_MESSAGE"*/;
    else
      v7 = (System_String_o **)&StringLiteral_12554/*"SUMMON_AUTOSALE_MSG"*/;
    v8 = LocalizationManager__Get(*v7, 0LL);
    p_titleString->klass = (PartyOrganizationUtility_c *)v8;
    sub_1C13CC8(p_titleString, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  }
  return (System_String_o *)p_titleString->klass;
}