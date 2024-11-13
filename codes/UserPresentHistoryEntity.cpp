void __fastcall UserPresentHistoryEntity___ctor(UserPresentHistoryEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B16F7E = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
}


int32_t __fastcall UserPresentHistoryEntity__CompareTo(
        UserPresentHistoryEntity_o *this,
        UserPresentHistoryEntity_o *other,
        const MethodInfo *method)
{
  int createdAt; // w9
  int v4; // w10
  int32_t result; // w0
  int32_t giftType; // w9
  int32_t v8; // w10
  int32_t objectId; // w9
  int32_t v10; // w10
  int32_t num; // w9
  int32_t v12; // w10

  if ( !other )
    return 1;
  createdAt = other->fields.createdAt;
  v4 = this->fields.createdAt;
  result = createdAt - v4;
  if ( createdAt == v4 )
  {
    giftType = this->fields.giftType;
    v8 = other->fields.giftType;
    result = giftType - v8;
    if ( giftType == v8 )
    {
      objectId = this->fields.objectId;
      v10 = other->fields.objectId;
      result = objectId - v10;
      if ( objectId == v10 )
      {
        num = this->fields.num;
        v12 = other->fields.num;
        result = num - v12;
        if ( num == v12 )
          return LODWORD(this->fields.id) - LODWORD(other->fields.id);
      }
    }
  }
  return result;
}


int64_t __fastcall UserPresentHistoryEntity__CreatePrimaryKey(
        UserPresentHistoryEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall UserPresentHistoryEntity__Equals(
        UserPresentHistoryEntity_o *this,
        UserPresentHistoryEntity_o *other,
        const MethodInfo *method)
{
  return other
      && this->fields.id == other->fields.id
      && this->fields.userId == other->fields.userId
      && this->fields.giftType == other->fields.giftType
      && this->fields.objectId == other->fields.objectId
      && this->fields.num == other->fields.num
      && this->fields.createdAt == other->fields.createdAt;
}


System_String_o *__fastcall UserPresentHistoryEntity__ToString(
        UserPresentHistoryEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  GiftName_GiftNameBase_o *v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4B16F7D & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10589/*"PRESENT_INFO"*/, v4, v5);
    byte_4B16F7D = 1;
  }
  v7 = GiftName_GiftNameFactory__Create(this->fields.giftType, this->fields.objectId, this->fields.num, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_10589/*"PRESENT_INFO"*/, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  return System_String__Format_62415592(v8, (Il2CppObject *)v7->fields.name, (Il2CppObject *)v7->fields.count, 0LL);
}