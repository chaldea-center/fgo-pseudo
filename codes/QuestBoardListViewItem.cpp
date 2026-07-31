void QuestBoardListViewItem___ctor(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
}


void QuestBoardListViewItem___ctor_43256072(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  v15 = this;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  v15->fields._info_kind_k__BackingField = ikind;
  v15->fields._quest_info_k__BackingField = qinf;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v15->fields._quest_info_k__BackingField,
    (int32_t)qinf,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v15->fields._black_mark_prefab_k__BackingField = blackMarkPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v15->fields._black_mark_prefab_k__BackingField,
    (int32_t)blackMarkPrefab,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v15->fields._white_mark_prefab_k__BackingField = whiteMarkPrefab;
  v15 = (QuestBoardListViewItem_o *)((char *)v15 + 144);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v15, (int32_t)whiteMarkPrefab, v28, v29, v30, v31, v32, v33);
  LODWORD(v15->monitor) = overwriteBannerId;
  HIDWORD(v15->monitor) = recollectionWarId;
}


bool QuestBoardListViewItem__IsDisplayableRoadmapButton(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t info_kind_k__BackingField; // w8
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x19
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_593518D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    byte_593518D = 1;
  }
  info_kind_k__BackingField = this->fields._info_kind_k__BackingField;
  entity = 0;
  if ( !info_kind_k__BackingField )
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
LABEL_19:
        sub_21FFECC(Master_object, v9);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             &entity,
             AreaBoardInfo_k__BackingField->fields.warId,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        Master_object = entity;
        if ( !entity )
          goto LABEL_19;
        if ( !WarEntity__IsWarIconFree((WarEntity_o *)entity, 0) )
        {
          Master_object = entity;
          if ( !entity )
            goto LABEL_19;
          if ( !WarEntity__IsWarShortcut((WarEntity_o *)entity, 0) )
          {
            Master_object = entity;
            if ( entity )
            {
              LOBYTE(quest_info_k__BackingField) = !WarEntity__IsGrandBoard((WarEntity_o *)entity, 0);
              return (unsigned __int8)quest_info_k__BackingField & 1;
            }
            goto LABEL_19;
          }
        }
      }
    }
  }
  LOBYTE(quest_info_k__BackingField) = 0;
  return (unsigned __int8)quest_info_k__BackingField & 1;
}


int32_t QuestBoardListViewItem__get_OverwriteBannerId(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._OverwriteBannerId_k__BackingField;
}


int32_t QuestBoardListViewItem__get_RecollectionWarId(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._RecollectionWarId_k__BackingField;
}


UnityEngine_GameObject_o *QuestBoardListViewItem__get_black_mark_prefab(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._black_mark_prefab_k__BackingField;
}


int32_t QuestBoardListViewItem__get_info_kind(QuestBoardListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._info_kind_k__BackingField;
}


MapControl_QuestInfo_o *QuestBoardListViewItem__get_quest_info(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._quest_info_k__BackingField;
}


UnityEngine_GameObject_o *QuestBoardListViewItem__get_white_mark_prefab(
        QuestBoardListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._white_mark_prefab_k__BackingField;
}


void QuestBoardListViewItem__set_OverwriteBannerId(
        QuestBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OverwriteBannerId_k__BackingField = value;
}


void QuestBoardListViewItem__set_RecollectionWarId(
        QuestBoardListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RecollectionWarId_k__BackingField = value;
}


void QuestBoardListViewItem__set_black_mark_prefab(
        QuestBoardListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._black_mark_prefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._black_mark_prefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardListViewItem__set_info_kind(QuestBoardListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._info_kind_k__BackingField = value;
}


void QuestBoardListViewItem__set_quest_info(
        QuestBoardListViewItem_o *this,
        MapControl_QuestInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._quest_info_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._quest_info_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardListViewItem__set_white_mark_prefab(
        QuestBoardListViewItem_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._white_mark_prefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._white_mark_prefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}