// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewItem___ctor(
        StonePurchaseListViewItem_o *this,
        int32_t index,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_48E04B2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48E04B2 = 1;
  }
  ListViewItem___ctor_39415512((ListViewItem_o *)this, index, 0LL);
  this->fields.bankShop = bankShop;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.bankShop, (int32_t)bankShop, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v12);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             2,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = (struct ItemEntity_o *)Entity;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.entity, (int32_t)Entity, v14, v15);
}


void __fastcall StonePurchaseListViewItem__Finalize(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall StonePurchaseListViewItem__ToString(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x9
  System_String_o **p_name; // x9
  struct ItemEntity_o *entity; // x9

  if ( (byte_48E04B8 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8018/*"Item "*/, method);
    byte_48E04B8 = 1;
  }
  if ( (byte_48E04B3 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_18800/*"error"*/, method);
    byte_48E04B3 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18800/*"error"*/;
  }
  return System_String__Concat_60325748((System_String_o *)StringLiteral_8018/*"Item "*/, *p_name, 0LL);
}


BankShopEntity_o *__fastcall StonePurchaseListViewItem__get_BankShop(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.bankShop;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_CountDetailText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8

  if ( (byte_48E04B5 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E04B5 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_numDetail = &bankShop->fields.numDetail;
  else
    p_numDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_numDetail;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_CountText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  BankShopEntity_o *bankShop; // x0
  ItemEntity_o *entity; // x0

  if ( (byte_48E04B4 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_18800/*"error"*/, method);
    byte_48E04B4 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    return BankShopEntity__GetCountText(bankShop, 0LL);
  entity = this->fields.entity;
  if ( entity )
    return ItemEntity__GetCountText(entity, 1, 0LL);
  else
    return (System_String_o *)StringLiteral_18800/*"error"*/;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_DetailText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  System_String_o **p_detail; // x8

  if ( (byte_48E04B7 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_18800/*"error"*/, method);
    byte_48E04B7 = 1;
  }
  entity = this->fields.entity;
  if ( entity )
    p_detail = &entity->fields.detail;
  else
    p_detail = (System_String_o **)&StringLiteral_18800/*"error"*/;
  return *p_detail;
}


int32_t __fastcall StonePurchaseListViewItem__get_ImageId(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( entity )
    return entity->fields.imageId;
  else
    return 0;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_NameText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8

  if ( (byte_48E04B3 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_18800/*"error"*/, method);
    byte_48E04B3 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18800/*"error"*/;
  }
  return *p_name;
}


int32_t __fastcall StonePurchaseListViewItem__get_Price(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  int32_t *p_googlePrice; // x8
  struct ItemEntity_o *entity; // x8

  bankShop = this->fields.bankShop;
  if ( bankShop )
  {
    p_googlePrice = &bankShop->fields.googlePrice;
    return *p_googlePrice;
  }
  entity = this->fields.entity;
  if ( entity )
  {
    p_googlePrice = &entity->fields.sellQp;
    return *p_googlePrice;
  }
  return 0;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_PriceDetilText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_priceDetail; // x8

  if ( (byte_48E04B6 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E04B6 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_priceDetail = &bankShop->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_priceDetail;
}