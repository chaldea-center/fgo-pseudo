void __fastcall BoostItemListViewItem___ctor(
        BoostItemListViewItem_o *this,
        int32_t index,
        ItemEntity_o *data,
        QuestRacePointEntity_o *baseQuestRacePointEntity,
        QuestRacePointEntity_o *itemQuestRacePointEntity,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w8

  if ( (byte_42AFF26 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFF26 = 1;
  }
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.itemEntity = data;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemEntity,
    (System_Int32_array **)data,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !data || !MasterData_WarQuestSelectionMaster )
LABEL_16:
    sub_B52A5C(Instance, v18);
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

  if ( (byte_42AFF28 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42AFF28 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42ADEE6 )
    {
      sub_B52984(&LocalizationManager_TypeInfo);
      byte_42ADEE6 = 1;
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

  if ( (byte_42AFF27 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42AFF27 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = &itemEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_18529/*"error"*/;
  return *p_name;
}


System_String_o *__fastcall BoostItemListViewItem__get_NumText(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t itemPossessionSum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AFF2A & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23720/*"{0:N0}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFF2A = 1;
  }
  if ( !this->fields.itemEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  itemPossessionSum = this->fields.itemPossessionSum;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &itemPossessionSum);
  return System_String__Format((System_String_o *)StringLiteral_23720/*"{0:N0}"*/, v3, 0LL);
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
  struct ItemEntity_o *itemEntity; // x8
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct ItemEntity_o *v6; // x8
  SkillEntity_o *Entity; // x0

  if ( (byte_42AFF29 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFF29 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 19 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___),
        (v6 = this->fields.itemEntity) == 0LL)
    || !Instance )
  {
    sub_B52A5C(Instance, v5);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              v6->fields.value,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectExplanation(Entity, 0, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}