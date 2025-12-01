void StonePurchaseListViewItem___ctor(
        StonePurchaseListViewItem_o *this,
        int32_t index,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC4ADC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC4ADC = 1;
  }
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.bankShop = bankShop;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bankShop, (int32_t)bankShop, v7, v8, v9, v10, v11, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C71608(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             2,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = (struct ItemEntity_o *)Entity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.entity, (int32_t)Entity, v16, v17, v18, v19, v20, v21);
}


void StonePurchaseListViewItem__Finalize(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_o *StonePurchaseListViewItem__ToString(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x9
  System_String_o **p_name; // x9
  struct ItemEntity_o *entity; // x9

  if ( (byte_4CC4AE2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_8133/*"Item "*/);
    byte_4CC4AE2 = 1;
  }
  if ( (byte_4CC4ADD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19128/*"error"*/);
    byte_4CC4ADD = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
  {
    p_name = &bankShop->fields.name;
  }
  else
  {
    entity = this->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19128/*"error"*/;
  }
  return System_String__Concat_64031724((System_String_o *)StringLiteral_8133/*"Item "*/, *p_name, 0);
}


BankShopEntity_o *StonePurchaseListViewItem__get_BankShop(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.bankShop;
}


System_String_o *StonePurchaseListViewItem__get_CountDetailText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8

  if ( (byte_4CC4ADF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4ADF = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_numDetail;
}


System_String_o *StonePurchaseListViewItem__get_CountText(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  BankShopEntity_o *bankShop; // x0
  ItemEntity_o *entity; // x0

  if ( (byte_4CC4ADE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19128/*"error"*/);
    byte_4CC4ADE = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    return BankShopEntity__GetCountText(bankShop, 0);
  entity = this->fields.entity;
  if ( entity )
    return ItemEntity__GetCountText(entity, 1, 0);
  else
    return (System_String_o *)StringLiteral_19128/*"error"*/;
}


System_String_o *StonePurchaseListViewItem__get_DetailText(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  System_String_o **p_detail; // x8

  if ( (byte_4CC4AE1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19128/*"error"*/);
    byte_4CC4AE1 = 1;
  }
  entity = this->fields.entity;
  if ( entity )
    p_detail = &entity->fields.detail;
  else
    p_detail = (System_String_o **)&StringLiteral_19128/*"error"*/;
  return *p_detail;
}


int32_t StonePurchaseListViewItem__get_ImageId(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( entity )
    return entity->fields.imageId;
  else
    return 0;
}


System_String_o *StonePurchaseListViewItem__get_NameText(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8

  if ( (byte_4CC4ADD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19128/*"error"*/);
    byte_4CC4ADD = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
  {
    p_name = &bankShop->fields.name;
  }
  else
  {
    entity = this->fields.entity;
    if ( entity )
      p_name = &entity->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19128/*"error"*/;
  }
  return *p_name;
}


int32_t StonePurchaseListViewItem__get_Price(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  struct ItemEntity_o *entity; // x8

  bankShop = this->fields.bankShop;
  if ( bankShop )
    return bankShop->fields.googlePrice;
  entity = this->fields.entity;
  if ( entity )
    return entity->fields.sellQp;
  else
    return 0;
}


System_String_o *StonePurchaseListViewItem__get_PriceDetilText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_priceDetail; // x8

  if ( (byte_4CC4AE0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4AE0 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_priceDetail = &bankShop->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_priceDetail;
}