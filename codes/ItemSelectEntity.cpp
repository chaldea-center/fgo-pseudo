void ItemSelectEntity___ctor(ItemSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2775E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2775E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ItemSelectEntity__CreatePK(int32_t itemId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C2775C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2775C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           itemId,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ItemSelectEntity__CreatePrimaryKey(ItemSelectEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ItemSelectEntity__CreatePK(this->fields.itemId, this->fields.idx, v2);
}


GiftEntity_array *ItemSelectEntity__GetGiftData(ItemSelectEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2775D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2775D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  return GiftMaster__GetGiftListById((GiftMaster_o *)Instance, this->fields.candidateGiftId, 0);
}