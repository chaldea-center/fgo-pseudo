// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemListViewItem___ctor(
        BoostItemListViewItem_o *this,
        int32_t index,
        ItemEntity_o *data,
        QuestRacePointEntity_o *baseQuestRacePointEntity,
        QuestRacePointEntity_o *itemQuestRacePointEntity,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w8

  if ( (byte_4187E11 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&index);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4187E11 = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  this->fields.itemEntity = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)data,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !data || !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B2C434(Instance, v20);
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       (int64_t)Instance,
                       data->fields.id,
                       0LL);
  if ( EntityDefinitely )
    num = EntityDefinitely->fields.num;
  else
    num = 0;
  this->fields.isCanNotSelect = num < 1;
  this->fields.itemPossessionSum = num;
  this->fields.magnification = 1;
  if ( baseQuestRacePointEntity )
  {
    if ( itemQuestRacePointEntity )
      this->fields.magnification = itemQuestRacePointEntity->fields.addPoint / baseQuestRacePointEntity->fields.addPoint;
  }
}


void __fastcall BoostItemListViewItem__Finalize(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_o *__fastcall BoostItemListViewItem__get_DetailText(
        BoostItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  LocalizationManager_c *v4; // x0

  if ( (byte_4187E13 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4187E13 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4185BC0 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, method);
      byte_4185BC0 = 1;
    }
    v4 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = LocalizationManager_TypeInfo;
    }
    itemEntity = (struct ItemEntity_o *)v4->static_fields;
  }
  return itemEntity->fields.detail;
}


int32_t __fastcall BoostItemListViewItem__get_ImageId(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.imageId;
  else
    return 0;
}


bool __fastcall BoostItemListViewItem__get_IsCanNotSelect(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


ItemEntity_o *__fastcall BoostItemListViewItem__get_Item(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


int32_t __fastcall BoostItemListViewItem__get_ItemId(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.id;
  else
    return 0;
}


int32_t __fastcall BoostItemListViewItem__get_Magnification(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.magnification;
}


System_String_o *__fastcall BoostItemListViewItem__get_NameText(
        BoostItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_4187E12 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18395/*"error"*/, method);
    byte_4187E12 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = &itemEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_18395/*"error"*/;
  return *p_name;
}


System_String_o *__fastcall BoostItemListViewItem__get_NumText(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t itemPossessionSum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187E15 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4187E15 = 1;
  }
  if ( !this->fields.itemEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  itemPossessionSum = this->fields.itemPossessionSum;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &itemPossessionSum);
  return System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v5, 0LL);
}


int32_t __fastcall BoostItemListViewItem__get_PriceIcon(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  ItemEntity_o *itemEntity; // x0

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return ItemEntity__GetPriceIcon(itemEntity, 0LL);
  else
    return 1;
}


int32_t __fastcall BoostItemListViewItem__get_PriceUnitIcon(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  ItemEntity_o *itemEntity; // x0

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return ItemEntity__GetPriceUnitIcon(itemEntity, 0LL);
  else
    return 1;
}


System_String_o *__fastcall BoostItemListViewItem__get_SkillText(
        BoostItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ItemEntity_o *itemEntity; // x8
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct ItemEntity_o *v9; // x8
  SkillEntity_o *Entity; // x0

  if ( (byte_4187E14 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4187E14 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 19 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___),
        (v9 = this->fields.itemEntity) == 0LL)
    || !Instance )
  {
    sub_B2C434(Instance, v8);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              v9->fields.value,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectExplanation(Entity, 0, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}