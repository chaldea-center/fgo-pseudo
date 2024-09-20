void __fastcall StonePurchaseListViewItem___ctor(
        StonePurchaseListViewItem_o *this,
        int32_t index,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5869B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5869B = 1;
  }
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.bankShop = bankShop;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bankShop, (int32_t)bankShop, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             2,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = (struct ItemEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.entity, (int32_t)Entity, v12, v13);
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

  if ( (byte_4A586A1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8104/*"Item "*/);
    byte_4A586A1 = 1;
  }
  if ( (byte_4A5869C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5869C = 1;
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
      p_name = (System_String_o **)&StringLiteral_19052/*"error"*/;
  }
  return System_String__Concat_61707032((System_String_o *)StringLiteral_8104/*"Item "*/, *p_name, 0LL);
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

  if ( (byte_4A5869E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5869E = 1;
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

  if ( (byte_4A5869D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5869D = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    return BankShopEntity__GetCountText(bankShop, 0LL);
  entity = this->fields.entity;
  if ( entity )
    return ItemEntity__GetCountText(entity, 1, 0LL);
  else
    return (System_String_o *)StringLiteral_19052/*"error"*/;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_DetailText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  System_String_o **p_detail; // x8

  if ( (byte_4A586A0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A586A0 = 1;
  }
  entity = this->fields.entity;
  if ( entity )
    p_detail = &entity->fields.detail;
  else
    p_detail = (System_String_o **)&StringLiteral_19052/*"error"*/;
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

  if ( (byte_4A5869C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A5869C = 1;
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
      p_name = (System_String_o **)&StringLiteral_19052/*"error"*/;
  }
  return *p_name;
}


int32_t __fastcall StonePurchaseListViewItem__get_Price(StonePurchaseListViewItem_o *this, const MethodInfo *method)
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


System_String_o *__fastcall StonePurchaseListViewItem__get_PriceDetilText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_priceDetail; // x8

  if ( (byte_4A5869F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5869F = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_priceDetail = &bankShop->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_priceDetail;
}