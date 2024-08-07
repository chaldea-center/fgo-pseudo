void __fastcall UserGachaHistoryEntity___ctor(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF80F & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF80F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaHistoryEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_49FF80E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&gachaId);
    byte_49FF80E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_2E3A00C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
    sub_1B64C5C(0LL, v3);
  return v2->fields.name;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_CreatedAtToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_String_o *DateTime; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF80C & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    byte_49FF80C = 1;
  }
  p_createdAtString = (ServantStatusBattleListViewItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0LL) )
  {
    createdAt = this->fields.createdAt;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    DateTime = LocalizationManager__GetDateTime(createdAt, 0LL);
    p_createdAtString->klass = (ServantStatusBattleListViewItem_c *)DateTime;
    sub_1B649A4(p_createdAtString, (int32_t)DateTime, v6, v7);
  }
  return (System_String_o *)p_createdAtString->klass;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_TitleToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusBattleListViewItem_o *p_titleString; // x19
  int32_t gachaExtraGiftBonusType; // w21
  System_String_o **v7; // x8
  System_String_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FF80D & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, method);
    sub_1B64A00(&StringLiteral_12284/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v3);
    sub_1B64A00(&StringLiteral_12297/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/, v4);
    byte_49FF80D = 1;
  }
  p_titleString = (ServantStatusBattleListViewItem_o *)&this->fields.titleString;
  if ( System_String__IsNullOrEmpty(this->fields.titleString, 0LL) )
  {
    gachaExtraGiftBonusType = this->fields.gachaExtraGiftBonusType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( gachaExtraGiftBonusType == 2 )
      v7 = (System_String_o **)&StringLiteral_12297/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/;
    else
      v7 = (System_String_o **)&StringLiteral_12284/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
    v8 = LocalizationManager__Get(*v7, 0LL);
    p_titleString->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B649A4(p_titleString, (int32_t)v8, v9, v10);
  }
  return (System_String_o *)p_titleString->klass;
}