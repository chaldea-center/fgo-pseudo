void __fastcall GachaEntity___ctor(GachaEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC60B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EC60B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_42EC60A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_StoneShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    byte_42EC60A = 1;
  }
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.shopId2,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPayOneTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_42EC609 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_StoneShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    byte_42EC609 = 1;
  }
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
             this->fields.shopId1,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity->fields.longName);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPrice(GachaEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_42EC608 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8, v9, v10);
    byte_42EC608 = 1;
  }
  if ( this->fields.type != 3 )
    return 0;
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v12 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                MasterData_WarQuestSelectionMaster,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  Entity = (ShopEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
                             this->fields.shopId1,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  if ( Entity && Entity->fields.payType == 3 )
    return ShopEntity__GetPrice(Entity, 0LL);
  else
    return 0;
}