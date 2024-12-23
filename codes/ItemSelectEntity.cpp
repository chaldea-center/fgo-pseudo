void __fastcall ItemSelectEntity___ctor(ItemSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66EFB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66EFB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemSelectEntity__CreatePK(int32_t itemId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B66EF9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B66EF9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           itemId,
           idx,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ItemSelectEntity__CreatePrimaryKey(ItemSelectEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ItemSelectEntity__CreatePK(this->fields.itemId, this->fields.idx, v2);
}


GiftEntity_array *__fastcall ItemSelectEntity__GetGiftData(ItemSelectEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B66EFA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B66EFA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v5);
  }
  return GiftMaster__GetGiftListById((GiftMaster_o *)Instance, this->fields.candidateGiftId, v6);
}