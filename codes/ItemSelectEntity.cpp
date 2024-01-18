void __fastcall ItemSelectEntity___ctor(ItemSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41870D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41870D6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemSelectEntity__CreatePK(int32_t itemId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_41870D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_41870D4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           itemId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ItemSelectEntity__CreatePrimaryKey(ItemSelectEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ItemSelectEntity__CreatePK(this->fields.itemId, this->fields.idx, v2);
}


GiftEntity_array *__fastcall ItemSelectEntity__GetGiftData(ItemSelectEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_41870D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_41870D5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
  }
  return GiftMaster__GetGiftListById((GiftMaster_o *)Instance, this->fields.candidateGiftId, 0LL);
}