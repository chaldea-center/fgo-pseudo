void UserGachaHistoryEntity___ctor(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59395B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59395B6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserGachaHistoryEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_59395B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_59395B5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
    sub_21FFECC(0, v3);
  return v2->fields.name;
}


System_String_o *UserGachaHistoryEntity__get_CreatedAtToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_createdAtString; // x19
  __int64 v4; // x1
  int64_t createdAt; // x20
  System_String_o *DateTime; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59395B3 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59395B3 = 1;
  }
  p_createdAtString = (MissionNaviTransitionBoardItem_o *)&this->fields.createdAtString;
  if ( System_String__IsNullOrEmpty(this->fields.createdAtString, 0) )
  {
    createdAt = this->fields.createdAt;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    DateTime = LocalizationManager__GetDateTime(createdAt, 0);
    p_createdAtString->klass = (MissionNaviTransitionBoardItem_c *)DateTime;
    sub_21FFBF4(p_createdAtString, (int32_t)DateTime, v7, v8, v9, v10, v11, v12);
  }
  return (System_String_o *)p_createdAtString->klass;
}


System_String_o *UserGachaHistoryEntity__get_TitleToString(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_titleString; // x19
  __int64 v4; // x1
  System_String_o *v5; // x0
  System_String_o *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t gachaExtraGiftBonusType; // w8
  LocalizationManager_c *v14; // x0
  __int64 *v15; // x20

  if ( (byte_59395B4 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12920/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/);
    sub_21FFC50(&StringLiteral_12931/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_21FFC50(&StringLiteral_12945/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/);
    byte_59395B4 = 1;
  }
  p_titleString = (MissionNaviTransitionBoardItem_o *)&this->fields.titleString;
  if ( System_String__IsNullOrEmpty(this->fields.titleString, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12931/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0);
    gachaExtraGiftBonusType = this->fields.gachaExtraGiftBonusType;
    if ( gachaExtraGiftBonusType == 3 )
    {
      v14 = LocalizationManager_TypeInfo;
      v15 = &StringLiteral_12920/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_10;
    }
    else
    {
      v6 = v5;
      if ( gachaExtraGiftBonusType != 2 )
      {
LABEL_11:
        p_titleString->klass = (MissionNaviTransitionBoardItem_c *)v6;
        sub_21FFBF4(p_titleString, (int32_t)v6, v7, v8, v9, v10, v11, v12);
        return (System_String_o *)p_titleString->klass;
      }
      v14 = LocalizationManager_TypeInfo;
      v15 = &StringLiteral_12945/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/;
      if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
LABEL_10:
        v6 = LocalizationManager__Get((System_String_o *)*v15, 0);
        goto LABEL_11;
      }
    }
    j_il2cpp_runtime_class_init_0(v14, v6);
    goto LABEL_10;
  }
  return (System_String_o *)p_titleString->klass;
}