void UserOwnItemInfo___ctor(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserOwnItemInfo___ctor_44161200(
        UserOwnItemInfo_o *this,
        ItemEntity_o *itemEntity,
        UserItemEntity_o *userItemEntity,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int64_t num; // x8

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( userItemEntity )
    num = userItemEntity->fields.num;
  else
    num = 0;
  this->fields._Num_k__BackingField = num;
}


bool UserOwnItemInfo__IsExpired(UserOwnItemInfo_o *this, System_Nullable_long__o time, const MethodInfo *method)
{
  int64_t value; // x20
  bool hasValue; // w21
  ItemEntity_o *ItemEntity_k__BackingField; // x0

  value = time.fields.value;
  hasValue = time.fields.hasValue;
  if ( (byte_4CEFBA0 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_long__get_HasValue__);
    byte_4CEFBA0 = 1;
  }
  if ( !hasValue )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    value = NetworkManager__getTime(0);
  }
  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1C7BD40(0, *(_QWORD *)&time.fields.hasValue);
  return !ItemEntity__IsEnable_42924100(ItemEntity_k__BackingField, value, 0);
}


int32_t UserOwnItemInfo__get_ImageId(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1C7BD40(this, method);
  return ItemEntity_k__BackingField->fields.imageId;
}


ItemEntity_o *UserOwnItemInfo__get_ItemEntity(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}


int64_t UserOwnItemInfo__get_Num(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


void UserOwnItemInfo__set_ItemEntity(UserOwnItemInfo_o *this, ItemEntity_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ItemEntity_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserOwnItemInfo__set_Num(UserOwnItemInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}