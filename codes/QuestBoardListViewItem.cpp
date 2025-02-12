void __fastcall QuestBoardListViewItem___ctor(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
}


void __fastcall QuestBoardListViewItem___ctor_34967452(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  v15 = this;
  ListViewItem___ctor_41884928((ListViewItem_o *)this, index, 0LL);
  v15->fields._info_kind_k__BackingField = ikind;
  v15->fields._quest_info_k__BackingField = qinf;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v15->fields._quest_info_k__BackingField,
    (int64_t)qinf,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v15->fields._black_mark_prefab_k__BackingField = blackMarkPrefab;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v15->fields._black_mark_prefab_k__BackingField,
    (int64_t)blackMarkPrefab,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v15->fields._white_mark_prefab_k__BackingField = whiteMarkPrefab;
  v15 = (QuestBoardListViewItem_o *)((char *)v15 + 136);
  sub_1C13CC8((PartyOrganizationUtility_o *)v15, (int64_t)whiteMarkPrefab, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_4BB1527 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    byte_4BB1527 = 1;
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
LABEL_15:
        sub_1C13F80(Master_object, v9);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             AreaBoardInfo_k__BackingField->fields.warId,
             (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._black_mark_prefab_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._black_mark_prefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._quest_info_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._quest_info_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestBoardListViewItem__set_white_mark_prefab(
        QuestBoardListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._white_mark_prefab_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._white_mark_prefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}