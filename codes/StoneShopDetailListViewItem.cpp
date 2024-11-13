// local variable allocation has failed, the output may be wrong!
void __fastcall StoneShopDetailListViewItem___ctor(
        StoneShopDetailListViewItem_o *this,
        int32_t index,
        GiftEntity_o *giftEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  int32_t num; // w22
  System_String_o *v21; // x20
  Il2CppObject *v22; // x0
  struct System_String_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1281D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&index, giftEnt);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_12448/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, v15, v16);
    byte_4B1281D = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  if ( giftEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      giftEnt->fields.objectId,
                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Master_object )
      Master_object = (Il2CppObject *)ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
    if ( !this )
LABEL_17:
      sub_1BCAA3C(Master_object, v19);
    this->fields._ImageId_k__BackingField = (int)Master_object;
    if ( giftEnt->fields.num <= 1 )
      num = -1;
    else
      num = giftEnt->fields.num;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"STONE_SHOP_EXTRA_ITEM_NUM"*/, 0LL);
    v30 = num;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v23 = System_String__Format(v21, v22, 0LL);
    this->fields._Message_k__BackingField = v23;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._Message_k__BackingField,
      (int64_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Message_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Message_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}