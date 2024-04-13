void __fastcall StonePurchaseListViewItem___ctor(
        StonePurchaseListViewItem_o *this,
        int32_t index,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  struct ItemEntity_o *Entity; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E7AB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, index, (_DWORD)bankShop, method);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E7AB0 = 1;
  }
  ListViewItem___ctor_23901828((ListViewItem_o *)this, index, 0LL);
  this->fields.bankShop = bankShop;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bankShop,
    (System_Int32_array **)bankShop,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v20);
  }
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    2,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.entity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.entity,
    (System_Int32_array **)Entity,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall StonePurchaseListViewItem__Finalize(StonePurchaseListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall StonePurchaseListViewItem__ToString(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8

  if ( (byte_42E7AB6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8341/*"Item "*/, (_DWORD)method, v2, v3);
    byte_42E7AB6 = 1;
  }
  if ( (byte_42E7AB1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42E7AB1 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18624/*"error"*/;
  }
  return System_String__Concat_44577788((System_String_o *)StringLiteral_8341/*"Item "*/, *p_name, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_numDetail; // x8

  if ( (byte_42E7AB3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E7AB3 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  BankShopEntity_o *bankShop; // x0
  ItemEntity_o *entity; // x0

  if ( (byte_42E7AB2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42E7AB2 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    return BankShopEntity__GetCountText(bankShop, 0LL);
  entity = this->fields.entity;
  if ( entity )
    return ItemEntity__GetCountText(entity, 1, 0LL);
  else
    return (System_String_o *)StringLiteral_18624/*"error"*/;
}


System_String_o *__fastcall StonePurchaseListViewItem__get_DetailText(
        StonePurchaseListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ItemEntity_o *entity; // x8
  System_String_o **p_detail; // x8

  if ( (byte_42E7AB5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42E7AB5 = 1;
  }
  entity = this->fields.entity;
  if ( entity )
    p_detail = &entity->fields.detail;
  else
    p_detail = (System_String_o **)&StringLiteral_18624/*"error"*/;
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
  int v2; // w2
  __int64 v3; // x3
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_name; // x8
  struct ItemEntity_o *entity; // x8

  if ( (byte_42E7AB1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)method, v2, v3);
    byte_42E7AB1 = 1;
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
      p_name = (System_String_o **)&StringLiteral_18624/*"error"*/;
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
  int v2; // w2
  __int64 v3; // x3
  struct BankShopEntity_o *bankShop; // x8
  System_String_o **p_priceDetail; // x8

  if ( (byte_42E7AB4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E7AB4 = 1;
  }
  bankShop = this->fields.bankShop;
  if ( bankShop )
    p_priceDetail = &bankShop->fields.priceDetail;
  else
    p_priceDetail = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_priceDetail;
}