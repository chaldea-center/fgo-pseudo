void __fastcall UserItemEntity___ctor(UserItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67951 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67951 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserItemEntity___ctor_41096304(
        UserItemEntity_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  if ( (byte_4B67952 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, userId);
    byte_4B67952 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.itemId = itemId;
  this->fields.num = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserItemEntity__CreatePK(int64_t userId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4B67950 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&itemId);
    byte_4B67950 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           itemId,
           (const MethodInfo_2F5743C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserItemEntity__CreatePrimaryKey(UserItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserItemEntity__CreatePK(this->fields.userId, this->fields.itemId, v2);
}


ItemEntity_o *__fastcall UserItemEntity__getItemInfo(UserItemEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B67953 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B67953 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v5);
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