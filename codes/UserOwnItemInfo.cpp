void __fastcall UserOwnItemInfo___ctor(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserOwnItemInfo___ctor_22626104(
        UserOwnItemInfo_o *this,
        ItemEntity_o *itemEntity,
        UserItemEntity_o *userItemEntity,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t num; // w8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ItemEntity_k__BackingField,
    (System_Int32_array **)itemEntity,
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


bool __fastcall UserOwnItemInfo__IsExpired(
        UserOwnItemInfo_o *this,
        System_Nullable_long__o time,
        const MethodInfo *method)
{
  bool has_value; // w21
  int64_t value; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  ItemEntity_o *ItemEntity_k__BackingField; // x0

  has_value = time.fields.has_value;
  value = time.fields.value;
  if ( (byte_42137BC & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, time.fields.value);
    sub_B0D8A4(&Method_System_Nullable_long__GetValueOrDefault__, v6);
    sub_B0D8A4(&Method_System_Nullable_long__get_HasValue__, v7);
    byte_42137BC = 1;
  }
  if ( !has_value )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    value = NetworkManager__getTime(0LL);
  }
  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_B0D97C(0LL);
  return !ItemEntity__IsEnable_26851644(ItemEntity_k__BackingField, value, 0LL);
}


int32_t __fastcall UserOwnItemInfo__get_ImageId(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return ItemEntity_k__BackingField->fields.type;
}


void __fastcall UserOwnItemInfo__set_ItemEntity(UserOwnItemInfo_o *this, ItemEntity_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ItemEntity_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ItemEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserOwnItemInfo__set_Num(UserOwnItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}