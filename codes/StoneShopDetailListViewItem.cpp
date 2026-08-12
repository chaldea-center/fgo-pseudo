void StoneShopDetailListViewItem___ctor(
        StoneShopDetailListViewItem_o *this,
        int32_t index,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  LocalizationManager_c *v12; // x8
  int32_t num; // w21
  int v14; // w10
  System_String_o *v15; // x20
  Il2CppObject *v16; // x0
  struct System_String_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596C94D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12911/*"STONE_SHOP_EXTRA_ITEM_NUM"*/);
    byte_596C94D = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  if ( giftEnt )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      giftEnt->fields.objectId,
                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Master_object )
      Master_object = (Il2CppObject *)ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
    if ( !this )
LABEL_17:
      sub_2213CDC(Master_object, v10);
    v12 = LocalizationManager_TypeInfo;
    if ( giftEnt->fields.num <= 1 )
      num = -1;
    else
      num = giftEnt->fields.num;
    v14 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    this->fields._ImageId_k__BackingField = (int)Master_object;
    if ( !v14 )
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12911/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, 0);
    v24 = num;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
    v17 = System_String__Format(v15, v16, 0);
    this->fields._Message_k__BackingField = v17;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._Message_k__BackingField,
      (int32_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Message_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}