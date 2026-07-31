void UserItemEntity___ctor(UserItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59395F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59395F2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


void UserItemEntity___ctor_50052320(UserItemEntity_o *this, int64_t userId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_59395F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59395F3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.itemId = itemId;
  this->fields.num = 0;
}


System_String_o *UserItemEntity__CreatePK(int64_t userId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_59395F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_59395F1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           itemId,
           (const MethodInfo_3821070 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserItemEntity__CreatePrimaryKey(UserItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserItemEntity__CreatePK(this->fields.userId, this->fields.itemId, v2);
}


ItemEntity_o *UserItemEntity__getItemInfo(UserItemEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59395F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59395F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return ItemMaster__GetItemData((ItemMaster_o *)Instance, this->fields.itemId, -1, 0);
}


int32_t UserItemEntity__getUserItemNum(UserItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}