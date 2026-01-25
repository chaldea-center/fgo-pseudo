void UserItemEntity___ctor(UserItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF53B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF53B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


void UserItemEntity___ctor_43636772(UserItemEntity_o *this, int64_t userId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4CEF53C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF53C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.itemId = itemId;
  this->fields.num = 0;
}


System_String_o *UserItemEntity__CreatePK(int64_t userId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4CEF53A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CEF53A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           itemId,
           (const MethodInfo_316E684 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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

  if ( (byte_4CEF53D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF53D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  return ItemMaster__GetItemData((ItemMaster_o *)Instance, this->fields.itemId, -1, 0);
}


int32_t UserItemEntity__getUserItemNum(UserItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}