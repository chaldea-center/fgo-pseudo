void __fastcall GachaEntity___ctor(GachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438F158 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438F158 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_438F157 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_B775C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_438F157 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_B7769C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.shopId2,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPayOneTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_438F156 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_B775C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_438F156 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_B7769C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.shopId1,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_438F155 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B775C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_438F155 = 1;
  }
  if ( this->fields.type != 3 )
    return 0;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B0F2C4(v4);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B7769C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                             this->fields.shopId1,
                             (const MethodInfo_21FB894 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  if ( Entity && Entity->fields.payType == 3 )
    return ShopEntity__GetPrice(Entity, 0LL);
  else
    return 0;
}