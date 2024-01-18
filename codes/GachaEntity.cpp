void __fastcall GachaEntity___ctor(GachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AFE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418AFE7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall GachaEntity__CreatePrimaryKey(GachaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall GachaEntity__HasFlag(GachaEntity_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}


int32_t __fastcall GachaEntity__getPayMultiTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_418AFE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_StoneShopMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_418AFE6 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.shopId2,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPayOneTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_418AFE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_StoneShopMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_418AFE5 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.shopId1,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_418AFE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_418AFE4 = 1;
  }
  if ( this->fields.type != 3 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B2C434(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                             this->fields.shopId1,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  if ( Entity && Entity->fields.payType == 3 )
    return ShopEntity__GetPrice(Entity, 0LL);
  else
    return 0;
}