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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w8

  if ( (byte_4B4037E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&index);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B4037E = 1;
  }
  ListViewItem___ctor_42734232((ListViewItem_o *)this, index, 0LL);
  this->fields.itemEntity = data;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemEntity, (int32_t)data, v13, v14);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v16);
    byte_4B3ED56 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !data || !MasterData_object )
LABEL_19:
    sub_1BDBAD4(Instance, v16);
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
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

  if ( (byte_4B40380 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    byte_4B40380 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B3FEFD )
    {
      sub_1BDB878(&LocalizationManager_TypeInfo, method);
      byte_4B3FEFD = 1;
    }
    v4 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B4037F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19073/*"error"*/, method);
    byte_4B4037F = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = &itemEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_19073/*"error"*/;
  return *p_name;
}


System_String_o *__fastcall BoostItemListViewItem__get_NumText(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  int32_t itemPossessionSum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B40382 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&StringLiteral_25166/*"{0:N0}"*/, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B40382 = 1;
  }
  if ( !this->fields.itemEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  itemPossessionSum = this->fields.itemPossessionSum;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &itemPossessionSum, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_25166/*"{0:N0}"*/, v8, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct ItemEntity_o *v9; // x8
  Il2CppObject *Entity; // x0

  if ( (byte_4B40381 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B40381 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 19 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___),
        (v9 = this->fields.itemEntity) == 0LL)
    || !Instance )
  {
    sub_1BDBAD4(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v9->fields.value,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectExplanation((SkillEntity_o *)Entity, 0, 0LL);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}