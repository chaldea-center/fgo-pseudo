void __fastcall GachaEntity___ctor(GachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B3E4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B3E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5B3E3 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.shopId2,
             (const MethodInfo_311D934 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPayOneTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4A5B3E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5B3E2 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.shopId1,
             (const MethodInfo_311D934 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t __fastcall GachaEntity__getPrice(GachaEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_4A5B3E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5B3E1 = 1;
  }
  if ( this->fields.type != 3 )
    return 0;
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0LL )
  {
    sub_1B8880C(MasterData_object, method);
  }
  Entity = (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             this->fields.shopId1,
                             (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  if ( Entity && Entity->fields.payType == 3 )
    return ShopEntity__GetPrice(Entity, 0LL);
  else
    return 0;
}