// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewItem___ctor(
        StonePurchaseListViewItem_o *this,
        int32_t index,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FAE9F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FAE9F = 1;
  }
  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.bankShop = bankShop;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bankShop,
    (System_Int32_array **)bankShop,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    2,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.entity,
    (System_Int32_array **)Entity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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

  if ( (byte_40FAEA5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8228/*"Item "*/, method);
    byte_40FAEA5 = 1;
  }
  if ( (byte_40FAEA0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326/*"error"*/, method);
    byte_40FAEA0 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18326/*"error"*/;
  }
  return System_String__Concat_43743732((System_String_o *)StringLiteral_8228/*"Item "*/, *p_name, 0LL);
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

  if ( (byte_40FAEA2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FAEA2 = 1;
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

  if ( (byte_40FAEA1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326/*"error"*/, method);
    byte_40FAEA1 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    return BankShopEntity__GetCountText(bankShop, 0LL);
  entity = this->fields.entity;
  if ( entity )
    return ItemEntity__GetCountText(entity, 1, 0LL);
  else
    return (System_String_o *)StringLiteral_18326/*"error"*/;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_DetailText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *entity; // x8
  System_String_o **p_detail; // x8

  if ( (byte_40FAEA4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326/*"error"*/, method);
    byte_40FAEA4 = 1;
  }
  entity = this->fields.entity;
  if ( entity )
    p_detail = &entity->fields.detail;
  else
    p_detail = (System_String_o **)&StringLiteral_18326/*"error"*/;
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

  if ( (byte_40FAEA0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18326/*"error"*/, method);
    byte_40FAEA0 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18326/*"error"*/;
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

  if ( (byte_40FAEA3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FAEA3 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_priceDetail = &bankShop->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_priceDetail;
}