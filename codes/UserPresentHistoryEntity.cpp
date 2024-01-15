void __fastcall UserPresentHistoryEntity___ctor(UserPresentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F8088 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40F8088 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
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
  __int64 v3; // x1
  GiftName_GiftNameBase_o *v4; // x19
  System_String_o *v5; // x0

  if ( (byte_40F8087 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10479/*"PRESENT_INFO"*/, v3);
    byte_40F8087 = 1;
  }
  v4 = GiftName_GiftNameFactory__Create(this->fields.giftType, this->fields.objectId, this->fields.num, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10479/*"PRESENT_INFO"*/, 0LL);
  if ( !v4 )
    sub_B170D4();
  return System_String__Format_43739268(v5, (Il2CppObject *)v4->fields.name, (Il2CppObject *)v4->fields.count, 0LL);
}