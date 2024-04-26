void __fastcall UserPresentHistoryEntity___ctor(UserPresentHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_434FCEC & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_long___ctor__);
    byte_434FCEC = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21C0344 *)Method_DataEntityBase_long___ctor__);
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
  GiftName_GiftNameBase_o *v3; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_434FCEB & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10650/*"PRESENT_INFO"*/);
    byte_434FCEB = 1;
  }
  v3 = GiftName_GiftNameFactory__Create(this->fields.giftType, this->fields.objectId, this->fields.num, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10650/*"PRESENT_INFO"*/, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  return System_String__Format_44753704(v4, (Il2CppObject *)v3->fields.name, (Il2CppObject *)v3->fields.count, 0LL);
}