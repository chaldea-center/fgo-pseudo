void __fastcall UserOwnItemInfo___ctor(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserOwnItemInfo___ctor_40610372(
        UserOwnItemInfo_o *this,
        ItemEntity_o *itemEntity,
        UserItemEntity_o *userItemEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t num; // w8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v7,
    v8);
  if ( userItemEntity )
    num = userItemEntity->fields.num;
  else
    num = 0;
  this->fields._Num_k__BackingField = num;
}


bool __fastcall UserOwnItemInfo__IsExpired(
        UserOwnItemInfo_o *this,
        System_Nullable_long__o time,
        const MethodInfo *method)
{
  int64_t value; // x20
  bool hasValue; // w21
  __int64 v6; // x1
  __int64 v7; // x1
  ItemEntity_o *ItemEntity_k__BackingField; // x0

  value = time.fields.value;
  hasValue = time.fields.hasValue;
  if ( (byte_4A710ED & 1) == 0 )
  {
    sub_1B90010(&NetworkManager_TypeInfo, *(_QWORD *)&time.fields.hasValue);
    sub_1B90010(&Method_System_Nullable_long__GetValueOrDefault__, v6);
    sub_1B90010(&Method_System_Nullable_long__get_HasValue__, v7);
    byte_4A710ED = 1;
  }
  if ( !hasValue )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    value = NetworkManager__getTime(0LL);
  }
  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1B9026C(0LL, *(_QWORD *)&time.fields.hasValue);
  return !ItemEntity__IsEnable_39437024(ItemEntity_k__BackingField, value, 0LL);
}


int32_t __fastcall UserOwnItemInfo__get_ImageId(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1B9026C(this, method);
  return ItemEntity_k__BackingField->fields.imageId;
}


ItemEntity_o *__fastcall UserOwnItemInfo__get_ItemEntity(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}


int32_t __fastcall UserOwnItemInfo__get_ItemId(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1B9026C(this, method);
  return ItemEntity_k__BackingField->fields.id;
}


int32_t __fastcall UserOwnItemInfo__get_Num(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int32_t __fastcall UserOwnItemInfo__get_Type(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1B9026C(this, method);
  return ItemEntity_k__BackingField->fields.type;
}


void __fastcall UserOwnItemInfo__set_ItemEntity(UserOwnItemInfo_o *this, ItemEntity_o *value, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ItemEntity_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall UserOwnItemInfo__set_Num(UserOwnItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}