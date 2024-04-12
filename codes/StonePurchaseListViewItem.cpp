void __fastcall StonePurchaseListViewItem___ctor(
        StonePurchaseListViewItem_o *this,
        int32_t index,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct ItemEntity_o *Entity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42AED89 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AED89 = 1;
  }
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.bankShop = bankShop;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.bankShop,
    (System_Int32_array **)bankShop,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v14);
  }
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    2,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.entity,
    (System_Int32_array **)Entity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall StonePurchaseListViewItem__Finalize(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall StonePurchaseListViewItem__ToString(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8

  if ( (byte_42AED8F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8304/*"Item "*/);
    byte_42AED8F = 1;
  }
  if ( (byte_42AED8A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42AED8A = 1;
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
      p_name = (System_String_o **)&StringLiteral_18529/*"error"*/;
  }
  return System_String__Concat_44568316((System_String_o *)StringLiteral_8304/*"Item "*/, *p_name, 0LL);
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

  if ( (byte_42AED8C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AED8C = 1;
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

  if ( (byte_42AED8B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42AED8B = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    return BankShopEntity__GetCountText(bankShop, 0LL);
  entity = this->fields.entity;
  if ( entity )
    return ItemEntity__GetCountText(entity, 1, 0LL);
  else
    return (System_String_o *)StringLiteral_18529/*"error"*/;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_DetailText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  System_String_o **p_detail; // x8

  if ( (byte_42AED8E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42AED8E = 1;
  }
  entity = this->fields.entity;
  if ( entity )
    p_detail = &entity->fields.detail;
  else
    p_detail = (System_String_o **)&StringLiteral_18529/*"error"*/;
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

  if ( (byte_42AED8A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42AED8A = 1;
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
      p_name = (System_String_o **)&StringLiteral_18529/*"error"*/;
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

  if ( (byte_42AED8D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AED8D = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_priceDetail = &bankShop->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_priceDetail;
}