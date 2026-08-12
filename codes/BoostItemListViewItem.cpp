void BoostItemListViewItem___ctor(
        BoostItemListViewItem_o *this,
        int32_t index,
        ItemEntity_o *data,
        QuestRacePointEntity_o *baseQuestRacePointEntity,
        QuestRacePointEntity_o *itemQuestRacePointEntity,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *MasterData_object; // x23
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w8

  if ( (byte_596BDDE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BDDE = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.itemEntity = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemEntity, (int32_t)data, v11, v12, v13, v14, v15, v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v19);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18, v19);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !data || !MasterData_object )
LABEL_19:
    sub_2213CDC(Instance, v18);
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       data->fields.id,
                       0);
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


void BoostItemListViewItem__Finalize(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool BoostItemListViewItem__get_IsCanNotSelect(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanNotSelect;
}


ItemEntity_o *BoostItemListViewItem__get_Item(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


int32_t BoostItemListViewItem__get_ItemId(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8

  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    return itemEntity->fields.id;
  else
    return 0;
}


int32_t BoostItemListViewItem__get_Magnification(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.magnification;
}


System_String_o *BoostItemListViewItem__get_NameText(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  System_String_o **p_name; // x8

  if ( (byte_596BDDF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19957/*"error"*/);
    byte_596BDDF = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( itemEntity )
    p_name = &itemEntity->fields.name;
  else
    p_name = (System_String_o **)&StringLiteral_19957/*"error"*/;
  return *p_name;
}


System_String_o *BoostItemListViewItem__get_NumText(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t itemPossessionSum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_596BDE1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26474/*"{0:N0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BDE1 = 1;
  }
  if ( !this->fields.itemEntity )
    return (System_String_o *)StringLiteral_1/*""*/;
  itemPossessionSum = this->fields.itemPossessionSum;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &itemPossessionSum);
  return System_String__Format((System_String_o *)StringLiteral_26474/*"{0:N0}"*/, v3, 0);
}


System_String_o *BoostItemListViewItem__get_SkillText(BoostItemListViewItem_o *this, const MethodInfo *method)
{
  struct ItemEntity_o *itemEntity; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct ItemEntity_o *v6; // x8
  Il2CppObject *Entity; // x0

  if ( (byte_596BDE0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BDE0 = 1;
  }
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity || itemEntity->fields.type != 19 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___),
        (v6 = this->fields.itemEntity) == 0)
    || !Instance )
  {
    sub_2213CDC(Instance, v5);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             v6->fields.value,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectExplanation((SkillEntity_o *)Entity, 0, 0);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}