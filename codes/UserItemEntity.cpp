void __fastcall UserItemEntity___ctor(UserItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BEA4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserItemEntity___ctor_40136616(
        UserItemEntity_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  if ( (byte_4A5BEA5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BEA5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.itemId = itemId;
  this->fields.num = 0;
}


System_String_o *__fastcall UserItemEntity__CreatePK(int64_t userId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4A5BEA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4A5BEA3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           itemId,
           (const MethodInfo_2E7DC34 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserItemEntity__CreatePrimaryKey(UserItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserItemEntity__CreatePK(this->fields.userId, this->fields.itemId, v2);
}


ItemEntity_o *__fastcall UserItemEntity__getItemInfo(UserItemEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5BEA6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BEA6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return ItemMaster__GetItemData((ItemMaster_o *)Instance, this->fields.itemId, 0LL);
}


int64_t __fastcall UserItemEntity__getUserId(UserItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


int32_t __fastcall UserItemEntity__getUserItemId(UserItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}


int32_t __fastcall UserItemEntity__getUserItemNum(UserItemEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}