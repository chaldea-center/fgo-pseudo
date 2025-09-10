void StoneShopDetailListViewItem___ctor(
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
  const MethodInfo *v17; // x3
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2366C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12383/*"STONE_SHOP_EXTRA_ITEM_NUM"*/);
    byte_4C2366C = 1;
  }
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  if ( giftEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      giftEnt->fields.objectId,
                      (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Master_object )
      Master_object = (Il2CppObject *)ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
    if ( !this )
LABEL_17:
      sub_1C2D6EC(Master_object, v8);
    this->fields._ImageId_k__BackingField = (int)Master_object;
    if ( giftEnt->fields.num <= 1 )
      num = -1;
    else
      num = giftEnt->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12383/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, 0);
    v18 = num;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
    v15 = System_String__Format(v10, v14, 0);
    this->fields._Message_k__BackingField = v15;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Message_k__BackingField, (int32_t)v15, v16, v17);
  }
}


int32_t StoneShopDetailListViewItem__get_ImageId(StoneShopDetailListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._ImageId_k__BackingField;
}


System_String_o *StoneShopDetailListViewItem__get_Message(
        StoneShopDetailListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Message_k__BackingField;
}


void StoneShopDetailListViewItem__set_ImageId(
        StoneShopDetailListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ImageId_k__BackingField = value;
}


void StoneShopDetailListViewItem__set_Message(
        StoneShopDetailListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Message_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._Message_k__BackingField, (int32_t)value, (int32_t)method, v3);
}