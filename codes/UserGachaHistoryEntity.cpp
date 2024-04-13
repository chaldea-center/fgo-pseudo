void __fastcall UserGachaHistoryEntity___ctor(UserGachaHistoryEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E711E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E711E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaHistoryEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E711D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_long__int___, gachaId, (_DWORD)method, v3);
    byte_42E711D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_1AE3148 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
    sub_B5D69C(0LL, v3);
  return v2->fields.name;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_CreatedAtToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_createdAtString; // x19
  int64_t createdAt; // x20
  System_Int32_array **DateTime; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E711B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E711B = 1;
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
    sub_B5D560(p_createdAtString, DateTime, v8, v9, v10, v11, v12, v13);
  }
  return (System_String_o *)p_createdAtString->klass;
}


System_String_o *__fastcall UserGachaHistoryEntity__get_TitleToString(
        UserGachaHistoryEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o **p_titleString; // x19
  __int64 *v12; // x8
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E711C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12579/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12589/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/, v8, v9, v10);
    byte_42E711C = 1;
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
      v12 = &StringLiteral_12589/*"SUMMON_EXTRA_ITEM_GIFTS_TITLE"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = &StringLiteral_12579/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
    }
    v13 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)*v12, 0LL);
    *p_titleString = (System_String_o *)v13;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.titleString, v13, v14, v15, v16, v17, v18, v19);
  }
  return *p_titleString;
}