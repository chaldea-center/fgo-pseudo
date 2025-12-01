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
  Il2CppObject *v11; // x0
  struct System_String_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC37AE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_12398/*"STONE_SHOP_EXTRA_ITEM_NUM"*/);
    byte_4CC37AE = 1;
  }
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  if ( giftEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      giftEnt->fields.objectId,
                      (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Master_object )
      Master_object = (Il2CppObject *)ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
    if ( !this )
LABEL_17:
      sub_1C71608(Master_object, v8);
    this->fields._ImageId_k__BackingField = (int)Master_object;
    if ( giftEnt->fields.num <= 1 )
      num = -1;
    else
      num = giftEnt->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12398/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, 0);
    v19 = num;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v12 = System_String__Format(v10, v11, 0);
    this->fields._Message_k__BackingField = v12;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields._Message_k__BackingField,
      (int32_t)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Message_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}