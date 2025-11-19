void GachaEntity___ctor(GachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6597 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB6597 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t GachaEntity__CreatePrimaryKey(GachaEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool GachaEntity__HasFlag(GachaEntity_o *this, int32_t check, const MethodInfo *method)
{
  return (this->fields.flag & check) != 0;
}


bool GachaEntity__IsClosed(GachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6596 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6596 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) > this->fields.closedAt;
}


int32_t GachaEntity__getPayMultiTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4CB6595 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB6595 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C41A9C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C41A9C(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.shopId2,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t GachaEntity__getPayOneTimePrice(GachaEntity_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0
  Il2CppObject *Entity; // x0

  if ( (byte_4CB6594 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB6594 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C41A9C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C41A9C(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_StoneShopMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, method);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
             this->fields.shopId1,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = HIDWORD(Entity[2].monitor);
  return (int)Entity;
}


int32_t GachaEntity__getPrice(GachaEntity_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  Il2CppObject *MasterData_object; // x0
  ShopEntity_o *Entity; // x0

  if ( (byte_4CB6593 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4CB6593 = 1;
  }
  if ( this->fields.type != 3 )
    return 0;
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C41A9C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C41A9C(v2);
  MasterData_object = **(Il2CppObject ***)(v5 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0 )
  {
    sub_1C6BC60(MasterData_object, method);
  }
  Entity = (ShopEntity_o *)DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                             this->fields.shopId1,
                             (const MethodInfo_33F90DC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
  if ( Entity && Entity->fields.payType == 3 )
    return ShopEntity__GetPrice(Entity, 0);
  else
    return 0;
}