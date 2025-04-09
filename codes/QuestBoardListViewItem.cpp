void __fastcall QuestBoardListViewItem___ctor(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall QuestBoardListViewItem___ctor_34400940(
        QuestBoardListViewItem_o *this,
        int32_t index,
        int32_t ikind,
        MapControl_QuestInfo_o *qinf,
        UnityEngine_GameObject_o *blackMarkPrefab,
        UnityEngine_GameObject_o *whiteMarkPrefab,
        int32_t overwriteBannerId,
        int32_t recollectionWarId,
        const MethodInfo *method)
{
  QuestBoardListViewItem_o *v15; // x25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v15 = this;
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  v15->fields._info_kind_k__BackingField = ikind;
  v15->fields._quest_info_k__BackingField = qinf;
  sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields._quest_info_k__BackingField, (int32_t)qinf, v16, v17);
  v15->fields._black_mark_prefab_k__BackingField = blackMarkPrefab;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&v15->fields._black_mark_prefab_k__BackingField,
    (int32_t)blackMarkPrefab,
    v18,
    v19);
  v15->fields._white_mark_prefab_k__BackingField = whiteMarkPrefab;
  v15 = (QuestBoardListViewItem_o *)((char *)v15 + 136);
  sub_1B4CF34((CGThumbnailListItem_o *)v15, (int32_t)whiteMarkPrefab, v20, v21);
  LODWORD(v15->monitor) = overwriteBannerId;
  HIDWORD(v15->monitor) = recollectionWarId;
}


bool __fastcall QuestBoardListViewItem__IsDisplayableRoadmapButton(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x19
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49B7CB4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    byte_49B7CB4 = 1;
  }
  entity = 0LL;
  if ( !this->fields._info_kind_k__BackingField )
  {
    quest_info_k__BackingField = this->fields._quest_info_k__BackingField;
    if ( !quest_info_k__BackingField )
      return (unsigned __int8)quest_info_k__BackingField & 1;
    AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
    if ( AreaBoardInfo_k__BackingField )
    {
      LOBYTE(quest_info_k__BackingField) = AreaBoardInfo_k__BackingField->fields.isNext;
      if ( !(_BYTE)quest_info_k__BackingField )
        return (unsigned __int8)quest_info_k__BackingField & 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
LABEL_15:
        sub_1B4D1EC(Master_object, v9);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             AreaBoardInfo_k__BackingField->fields.warId,
             (const MethodInfo_319D9E8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        Master_object = entity;
        if ( entity )
        {
          LOBYTE(quest_info_k__BackingField) = !WarEntity__HasFlag((WarEntity_o *)entity, 0x200000, 0LL);
          return (unsigned __int8)quest_info_k__BackingField & 1;
        }
        goto LABEL_15;
      }
    }
  }
  LOBYTE(quest_info_k__BackingField) = 0;
  return (unsigned __int8)quest_info_k__BackingField & 1;
}


int32_t __fastcall QuestBoardListViewItem__get_OverwriteBannerId(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OverwriteBannerId_k__BackingField;
}


int32_t __fastcall QuestBoardListViewItem__get_RecollectionWarId(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._RecollectionWarId_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall QuestBoardListViewItem__get_black_mark_prefab(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._black_mark_prefab_k__BackingField;
}


int32_t __fastcall QuestBoardListViewItem__get_info_kind(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._info_kind_k__BackingField;
}


MapControl_QuestInfo_o *__fastcall QuestBoardListViewItem__get_quest_info(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._quest_info_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall QuestBoardListViewItem__get_white_mark_prefab(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._white_mark_prefab_k__BackingField;
}


void __fastcall QuestBoardListViewItem__set_OverwriteBannerId(
        QuestBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OverwriteBannerId_k__BackingField = value;
}


void __fastcall QuestBoardListViewItem__set_RecollectionWarId(
        QuestBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RecollectionWarId_k__BackingField = value;
}


void __fastcall QuestBoardListViewItem__set_black_mark_prefab(
        QuestBoardListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._black_mark_prefab_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._black_mark_prefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall QuestBoardListViewItem__set_info_kind(
        QuestBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._info_kind_k__BackingField = value;
}


void __fastcall QuestBoardListViewItem__set_quest_info(
        QuestBoardListViewItem_o *this,
        MapControl_QuestInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._quest_info_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._quest_info_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall QuestBoardListViewItem__set_white_mark_prefab(
        QuestBoardListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._white_mark_prefab_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._white_mark_prefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}