void __fastcall StoneShopDetailListViewItem___ctor(
        StoneShopDetailListViewItem_o *this,
        int32_t index,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t num; // w22
  System_String_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A57890 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12292/*"STONE_SHOP_EXTRA_ITEM_NUM"*/);
    byte_4A57890 = 1;
  }
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  if ( giftEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      giftEnt->fields.objectId,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Master_object )
      Master_object = (Il2CppObject *)ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
    if ( !this )
LABEL_17:
      sub_1B8880C(Master_object, v8);
    this->fields._ImageId_k__BackingField = (int)Master_object;
    if ( giftEnt->fields.num <= 1 )
      num = -1;
    else
      num = giftEnt->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12292/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, 0LL);
    v18 = num;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
    v15 = System_String__Format(v10, v14, 0LL);
    this->fields._Message_k__BackingField = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Message_k__BackingField, (int32_t)v15, v16, v17);
  }
}


int32_t __fastcall StoneShopDetailListViewItem__get_ImageId(
        StoneShopDetailListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ImageId_k__BackingField;
}


System_String_o *__fastcall StoneShopDetailListViewItem__get_Message(
        StoneShopDetailListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


void __fastcall StoneShopDetailListViewItem__set_ImageId(
        StoneShopDetailListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ImageId_k__BackingField = value;
}


void __fastcall StoneShopDetailListViewItem__set_Message(
        StoneShopDetailListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Message_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}