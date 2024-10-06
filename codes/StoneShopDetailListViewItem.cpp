// local variable allocation has failed, the output may be wrong!
void __fastcall StoneShopDetailListViewItem___ctor(
        StoneShopDetailListViewItem_o *this,
        int32_t index,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t num; // w22
  System_String_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  struct System_String_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A6C58A & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&index);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B90010(&int_TypeInfo, v9);
    sub_1B90010(&LocalizationManager_TypeInfo, v10);
    sub_1B90010(&StringLiteral_12317/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, v11);
    byte_4A6C58A = 1;
  }
  ListViewItem___ctor_40760684((ListViewItem_o *)this, index, 0LL);
  if ( giftEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      giftEnt->fields.objectId,
                      (const MethodInfo_312C5A8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Master_object )
      Master_object = (Il2CppObject *)ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
    if ( !this )
LABEL_17:
      sub_1B9026C(Master_object, v13);
    this->fields._ImageId_k__BackingField = (int)Master_object;
    if ( giftEnt->fields.num <= 1 )
      num = -1;
    else
      num = giftEnt->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, 0LL);
    v23 = num;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v16, v17, v18);
    v20 = System_String__Format(v15, v19, 0LL);
    this->fields._Message_k__BackingField = v20;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._Message_k__BackingField, (int32_t)v20, v21, v22);
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
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._Message_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}