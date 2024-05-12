void __fastcall UserItemEntity___ctor(UserItemEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4389D5A & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389D5A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserItemEntity___ctor_23047108(
        UserItemEntity_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  if ( (byte_4389D5B & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389D5B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.itemId = itemId;
  this->fields.num = 0;
}


System_String_o *__fastcall UserItemEntity__CreatePK(int64_t userId, int32_t itemId, const MethodInfo *method)
{
  if ( (byte_4389D59 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4389D59 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           itemId,
           (const MethodInfo_1D172EC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserItemEntity__CreatePrimaryKey(UserItemEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserItemEntity__CreatePK(this->fields.userId, this->fields.itemId, v2);
}


ItemEntity_o *__fastcall UserItemEntity__getItemInfo(UserItemEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4389D5C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389D5C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
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