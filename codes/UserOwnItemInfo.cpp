void __fastcall UserOwnItemInfo___ctor(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserOwnItemInfo___ctor_41533928(
        UserOwnItemInfo_o *this,
        ItemEntity_o *itemEntity,
        UserItemEntity_o *userItemEntity,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int32_t num; // w8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._ItemEntity_k__BackingField,
    (int64_t)itemEntity,
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
  int64_t value; // x20
  bool hasValue; // w21
  __int64 v6; // x1
  __int64 v7; // x1
  ItemEntity_o *ItemEntity_k__BackingField; // x0

  value = time.fields.value;
  hasValue = time.fields.hasValue;
  if ( (byte_4B67EB5 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, *(_QWORD *)&time.fields.hasValue);
    sub_1BE4ACC(&Method_System_Nullable_long__GetValueOrDefault__, v6);
    sub_1BE4ACC(&Method_System_Nullable_long__get_HasValue__, v7);
    byte_4B67EB5 = 1;
  }
  if ( !hasValue )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    value = NetworkManager__getTime(0LL);
  }
  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1BE4D28(0LL, *(_QWORD *)&time.fields.hasValue);
  return !ItemEntity__IsEnable_40319404(ItemEntity_k__BackingField, value, 0LL);
}


int32_t __fastcall UserOwnItemInfo__get_ImageId(UserOwnItemInfo_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *ItemEntity_k__BackingField; // x8

  ItemEntity_k__BackingField = this->fields._ItemEntity_k__BackingField;
  if ( !ItemEntity_k__BackingField )
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(this, method);
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
    sub_1BE4D28(this, method);
  return ItemEntity_k__BackingField->fields.type;
}


void __fastcall UserOwnItemInfo__set_ItemEntity(UserOwnItemInfo_o *this, ItemEntity_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ItemEntity_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._ItemEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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