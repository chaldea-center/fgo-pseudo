void __fastcall GachaEntity___ctor(GachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE78B & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE78B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D5F80 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49FE78A & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_StoneShopMaster___, method);
    sub_1B64870(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49FE78A = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB674C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB674C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_1B64ACC(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.shopId2,
             (const MethodInfo_30D6180 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPayOneTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_49FE789 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_StoneShopMaster___, method);
    sub_1B64870(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49FE789 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB674C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB674C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_1B64ACC(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.shopId1,
             (const MethodInfo_30D6180 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_49FE788 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1B64870(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    byte_49FE788 = 1;
  }
  if ( this->fields.type != 3 )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB674C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB674C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1B64ACC(MasterData_object, method);
  }
  Entity = (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             this->fields.shopId1,
                             (const MethodInfo_30D6180 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  if ( Entity && Entity->fields.payType == 3 )
    return ShopEntity__GetPrice(Entity, 0LL);
  else
    return 0;
}