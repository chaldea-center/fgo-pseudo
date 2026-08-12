void UserOwnItemInfo___ctor(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserOwnItemInfo___ctor_50646108(
        UserOwnItemInfo_o *this,
        ItemEntity_o *itemEntity,
        UserItemEntity_o *userItemEntity,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int64_t num; // x8

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
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
  if ( (byte_5971E1F & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_long__get_HasValue__);
    byte_5971E1F = 1;
  }
  if ( !hasValue )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&time.fields.hasValue);
    value = NetworkManager__getTime(0);
  }
  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_2213CDC(0, *(_QWORD *)&time.fields.hasValue);
  return !ItemEntity__IsEnable_49376108(ItemEntity_k__BackingField, value, 0);
}


int32_t UserOwnItemInfo__get_ImageId(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ItemEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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