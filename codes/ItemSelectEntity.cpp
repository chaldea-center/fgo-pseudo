void ItemSelectEntity___ctor(ItemSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B6F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938B6F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ItemSelectEntity__CreatePK(int32_t itemId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938B6D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938B6D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           itemId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  const MethodInfo *v5; // x2

  if ( (byte_5938B6E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938B6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return GiftMaster__GetGiftListById((GiftMaster_o *)Instance, this->fields.candidateGiftId, v5);
}