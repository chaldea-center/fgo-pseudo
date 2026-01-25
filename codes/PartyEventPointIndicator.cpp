void PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  if ( (byte_4CE9E16 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyEventPointIndicator_TypeInfo);
    byte_4CE9E16 = 1;
  }
  LODWORD(PartyEventPointIndicator_TypeInfo->static_fields->CLASS_ICON_DEFAULT_POSTION_Y) = (struct PartyEventPointIndicator_StaticFields)1092616192;
}


void PartyEventPointIndicator___ctor(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void PartyEventPointIndicator__Awake(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  UIWidget_o *pointEventTotalTitle1Label; // x0
  struct UILabel_o *restrictionMessageLabel; // x8

  pointEventTotalTitle1Label = (UIWidget_o *)this->fields.pointEventTotalTitle1Label;
  if ( !pointEventTotalTitle1Label
    || (restrictionMessageLabel = this->fields.restrictionMessageLabel,
        this->fields.titleWidth = pointEventTotalTitle1Label->fields.mWidth,
        !restrictionMessageLabel)
    || (this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth,
        UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0),
        (pointEventTotalTitle1Label = (UIWidget_o *)this->fields.pointEventTotalTitle2Label) == 0)
    || (UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0),
        (pointEventTotalTitle1Label = (UIWidget_o *)this->fields.restrictionMessageLabel) == 0) )
  {
    sub_1C7BD40(pointEventTotalTitle1Label, method);
  }
  UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0);
}


System_Collections_IEnumerator_o *PartyEventPointIndicator__DispTotalDropItemCR(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CE9E10 & 1) == 0 )
  {
    sub_1C7BAE8(&PartyEventPointIndicator__DispTotalDropItemCR_d__29_TypeInfo);
    byte_4CE9E10 = 1;
  }
  v3 = sub_1C7BD34(PartyEventPointIndicator__DispTotalDropItemCR_d__29_TypeInfo);
  PartyEventPointIndicator__DispTotalDropItemCR_d__29___ctor(
    (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CE9E15 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PartyEventPointIndicator_OnClick__);
    byte_4CE9E15 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_PartyEventPointIndicator_OnClick__;
    if ( (*((_BYTE *)Method_PartyEventPointIndicator_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_PartyEventPointIndicator_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
}


void PartyEventPointIndicator__SetIndicatorClassIcon(
        PartyEventPointIndicator_o *this,
        QuestPhaseEntity_o *questPhaseEnt,
        const MethodInfo *method)
{
  ViewWaveEnemyMaster_o *Master_object; // x0
  ViewWaveEnemyMaster_o *v6; // x23
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v8; // x2
  ViewWaveEnemyEntity_array *v9; // x21
  int32_t ReachedWave; // w22
  il2cpp_array_size_t max_length; // x8
  unsigned int v12; // w23
  Il2CppClass **v13; // x24
  char *v14; // x24
  ViewWaveEnemyMaster_o *v15; // t1

  if ( (byte_4CE9E0F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CE9E0F = 1;
  }
  if ( questPhaseEnt )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    if ( !Master_object )
      goto LABEL_25;
    v6 = Master_object;
    EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                              Master_object,
                              questPhaseEnt->fields.questId,
                              0);
    if ( EntityListFromQuestId )
    {
      v9 = EntityListFromQuestId;
      if ( EntityListFromQuestId->max_length )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
        if ( !Master_object )
          goto LABEL_25;
        ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                        (ReachedWaveInfoMaster_o *)Master_object,
                        questPhaseEnt->fields.questId,
                        0);
        Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v6, v9, ReachedWave, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = v9->max_length;
          v12 = max_length - 1;
          if ( (int)max_length - 1 >= 0 )
          {
            if ( v12 >= (unsigned int)max_length )
LABEL_22:
              sub_1C7BD48(Master_object);
            while ( 1 )
            {
              v13 = &v9->obj.klass + v12;
              v15 = (ViewWaveEnemyMaster_o *)v13[4];
              v14 = (char *)(v13 + 4);
              Master_object = v15;
              if ( !v15 )
                break;
              Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyEntity__GetUnknownDispInfo(
                                                         (ViewWaveEnemyEntity_o *)Master_object,
                                                         0);
              if ( Master_object )
              {
                if ( v12 >= LODWORD(v9->max_length) )
                  goto LABEL_22;
                if ( !*(_QWORD *)v14 )
                  break;
                if ( ReachedWave < *(_DWORD *)(*(_QWORD *)v14 + 56LL) )
                  goto LABEL_24;
              }
              if ( (--v12 & 0x80000000) != 0 )
                goto LABEL_23;
              if ( v12 >= LODWORD(v9->max_length) )
                goto LABEL_22;
            }
LABEL_25:
            sub_1C7BD40(Master_object, questPhaseEnt);
          }
        }
      }
    }
LABEL_23:
    this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, questPhaseEnt->fields.classIds, v8);
  }
  else
  {
LABEL_24:
    PartyEventPointIndicator__SetUnknown(this, (const MethodInfo *)questPhaseEnt);
  }
}


void PartyEventPointIndicator__SetInfomation(
        PartyEventPointIndicator_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x2

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    (int32_t)classIds,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v12 )
    sub_1C7BD40(0, v11);
  UnityEngine_GameObject__SetActive(v12, 0, 0);
  this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, classIds, v13);
}


bool PartyEventPointIndicator__SetRestrictionDisp(
        PartyEventPointIndicator_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsNullOrEmpty; // w19
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v9; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE9E14 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9E14 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(restrictionMessage, 0);
  if ( IsNullOrEmpty )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v11.fields.x = 1.0;
      v11.fields.y = 1.0;
      v11.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v11, 0);
      restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
      if ( restrictionMessageBase )
      {
        UILabel__set_text((UILabel_o *)restrictionMessageBase, (System_String_o *)StringLiteral_1/*""*/, 0);
        return !IsNullOrEmpty;
      }
    }
LABEL_14:
    sub_1C7BD40(restrictionMessageBase, v5);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  if ( v9 <= (float)baseMessageWidth )
    v9 = (float)baseMessageWidth;
  v12.fields.x = (float)this->fields.baseMessageWidth / v9;
  v12.fields.y = 1.0;
  v12.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v12, 0);
  return !IsNullOrEmpty;
}


bool PartyEventPointIndicator__SetTotalDropItem(
        PartyEventPointIndicator_o *this,
        EventMargeItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  System_String_o *NameTotalString; // x21
  Il2CppObject *ItemName; // x22
  Il2CppObject *ServantName; // x0
  UnityEngine_Transform_o *pointEventTotalTitleBase; // x0
  System_String_o *v9; // x21
  System_Array_o *v10; // x0
  System_RuntimeFieldHandle_o v11; // x1
  System_Char_array *v12; // x22
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v14; // x21
  float titleWidth; // s9
  float v16; // s0
  float v17; // s8
  float x; // s0
  int32_t v19; // s1
  System_String_o *EventUpString; // x20
  UILabel_o *pointEventTotalDataLabel; // x19
  System_String_o *v23; // x1
  System_String_o *v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE9E12 & 1) == 0 )
  {
    sub_1C7BAE8(&char___TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_86/*"\r"*/);
    sub_1C7BAE8(&StringLiteral_10272/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/);
    byte_4CE9E12 = 1;
  }
  if ( !dropItemInfo )
  {
    pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
    if ( pointEventTotalTitleBase )
    {
      v25.fields.x = 1.0;
      v25.fields.y = 1.0;
      v25.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v25, 0);
      pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
      if ( pointEventTotalTitleBase )
      {
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( pointEventTotalTitleBase )
        {
          UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0);
          pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalDataLabel;
          if ( pointEventTotalTitleBase )
          {
            UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0);
            return 0;
          }
        }
      }
    }
    goto LABEL_42;
  }
  NameTotalString = EventMargeItemUpValInfo__GetNameTotalString(dropItemInfo, 0);
  ItemName = (Il2CppObject *)EventMargeItemUpValInfo__GetItemName(dropItemInfo, 0);
  ServantName = (Il2CppObject *)EventMargeItemUpValInfo__GetServantName(dropItemInfo, 0);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format_64218220(
                                                          NameTotalString,
                                                          ItemName,
                                                          ServantName,
                                                          0);
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  v9 = System_String__Replace_64223476(
         (System_String_o *)pointEventTotalTitleBase,
         (System_String_o *)StringLiteral_86/*"\r"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0);
  v10 = (System_Array_o *)sub_1C7BB90(char___TypeInfo, 4);
  v11.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
  v12 = (System_Char_array *)v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64876136(v10, v11, 0);
  if ( !v9 )
    goto LABEL_42;
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Split_64226120(v9, v12, 0, 0);
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  klass = pointEventTotalTitleBase[1].klass;
  v14 = pointEventTotalTitleBase;
  titleWidth = (float)this->fields.titleWidth;
  if ( klass )
  {
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
    if ( (_DWORD)klass == 1 )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_42;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( LODWORD(v14[1].klass) )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v14[1].monitor, 0);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0);
        v19 = this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)klass )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_42;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v14[1].monitor, 0);
      if ( LODWORD(v14[1].klass) > 1 )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v14[1].fields.m_CachedPtr, 0);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        LODWORD(v16) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        v17 = v16;
        x = UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0).fields.x;
        v19 = this->fields.titleWidth;
        if ( v17 > x )
          x = v17;
LABEL_31:
        if ( x > (float)v19 )
          titleWidth = x;
        goto LABEL_33;
      }
    }
    sub_1C7BD48(pointEventTotalTitleBase);
  }
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_33:
  pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  v26.fields.y = 1.0;
  v26.fields.z = 1.0;
  v26.fields.x = (float)this->fields.titleWidth / titleWidth;
  UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v26, 0);
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(dropItemInfo, 0, 0);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(EventUpString, 0);
  pointEventTotalDataLabel = this->fields.pointEventTotalDataLabel;
  if ( ((unsigned __int8)pointEventTotalTitleBase & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10272/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, 0);
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format(v24, (Il2CppObject *)EventUpString, 0);
    if ( pointEventTotalDataLabel )
    {
      v23 = (System_String_o *)pointEventTotalTitleBase;
      goto LABEL_41;
    }
LABEL_42:
    sub_1C7BD40(pointEventTotalTitleBase, dropItemInfo);
  }
  if ( !pointEventTotalDataLabel )
    goto LABEL_42;
  v23 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_41:
  UILabel__set_text(pointEventTotalDataLabel, v23, 0);
  return 1;
}


void PartyEventPointIndicator__SetTotalDropItemList(
        PartyEventPointIndicator_o *this,
        EventPartyMargeUpValInfo_o *margeItemInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *infomationPanel; // x0

  this->fields.eventMargeItemUpValInfo = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventMargeItemUpValInfo,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyEventPointIndicator__StopTotalDropItemtweenAlpha(this, v9);
  PartyEventPointIndicator__SetTotalDropItem(this, 0, v10);
  infomationPanel = (UnityEngine_GameObject_o *)this->fields.infomationPanel;
  this->fields.isClick = 1;
  if ( !infomationPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))infomationPanel->klass[1]._1.element_class)(
          infomationPanel,
          infomationPanel->klass[1]._1.castClass,
          1.0),
        (infomationPanel = this->fields.pointEventBase) == 0)
    || (UnityEngine_GameObject__SetActive(infomationPanel, 0, 0),
        (infomationPanel = (UnityEngine_GameObject_o *)this->fields.restrictionMessageBase) == 0)
    || (infomationPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infomationPanel, 0)) == 0
    || (UnityEngine_GameObject__SetActive(infomationPanel, 0, 0), (infomationPanel = this->fields.trendInfoBase) == 0) )
  {
    sub_1C7BD40(infomationPanel, v11);
  }
  UnityEngine_GameObject__SetActive(infomationPanel, this->fields.isDispTrend, 0);
}


bool PartyEventPointIndicator__SetTrendDisp(
        PartyEventPointIndicator_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *levelInfoBase; // x0
  struct ServantClassIconComponent_array *v6; // x8
  unsigned __int64 v7; // x23
  int32_t *m_Items; // x24
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x9
  ServantClassIconComponent_o *v11; // x21
  UnityEngine_GameObject_o *v12; // x0
  PartyEventPointIndicator_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *v17; // x8
  QuestPhaseEntity_o *v18; // x20
  struct ServantClassIconComponent_array *classIconList; // x9
  unsigned __int64 v20; // x23
  unsigned __int64 max_length_low; // x8
  struct System_Int32_array *v22; // x8
  unsigned __int64 v23; // x10
  ServantClassIconComponent_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  PartyEventPointIndicator_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x22

  if ( (byte_4CE9E13 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C7BAE8(&PartyEventPointIndicator_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9E13 = 1;
  }
  levelInfoBase = this->fields.levelInfoBase;
  if ( !levelInfoBase )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0);
  levelInfoBase = (UnityEngine_GameObject_o *)this->fields.levelInfoLabel;
  if ( !levelInfoBase )
    goto LABEL_58;
  UILabel__set_text((UILabel_o *)levelInfoBase, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !classIds || !classIds->max_length )
  {
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_55;
    levelInfoBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !levelInfoBase )
      goto LABEL_58;
    levelInfoBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)levelInfoBase,
                                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !levelInfoBase )
      goto LABEL_58;
    Entity = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)levelInfoBase,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0);
    if ( Entity && (v17 = Entity->fields.classIds, v18 = Entity, v17) && v17->max_length )
    {
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v20 = 0;
          do
          {
            max_length_low = LODWORD(classIconList->max_length);
            if ( (__int64)v20 >= (int)max_length_low )
              return 1;
            if ( v20 >= max_length_low )
              goto LABEL_59;
            v22 = v18->fields.classIds;
            if ( !v22 )
              break;
            v23 = LODWORD(v22->max_length);
            v24 = classIconList->m_Items[v20];
            if ( (__int64)v20 >= (int)v23 )
              goto LABEL_51;
            if ( v20 >= v23 )
              goto LABEL_59;
            if ( v22->m_Items[v20] < 1 )
            {
LABEL_51:
              if ( !v24 )
                break;
              ServantClassIconComponent__Clear(v24, 0);
            }
            else
            {
              if ( !v20 )
              {
                if ( !v24 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0);
                v26 = PartyEventPointIndicator_TypeInfo;
                v27 = gameObject;
                if ( !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
                  v26 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v27, v26->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0);
                v22 = v18->fields.classIds;
                if ( !v22 )
                  break;
              }
              if ( v20 >= LODWORD(v22->max_length) )
LABEL_59:
                sub_1C7BD48(levelInfoBase);
              if ( !v24 )
                break;
              ServantClassIconComponent__Set(v24, v22->m_Items[v20], 0, 0);
            }
            classIconList = this->fields.classIconList;
            ++v20;
          }
          while ( classIconList );
        }
      }
    }
    else
    {
LABEL_55:
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0);
        return 0;
      }
    }
LABEL_58:
    sub_1C7BD40(levelInfoBase, classIds);
  }
  levelInfoBase = this->fields.classInfoBase;
  if ( !levelInfoBase )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0);
  v6 = this->fields.classIconList;
  if ( !v6 )
    goto LABEL_58;
  v7 = 0;
  m_Items = classIds->m_Items;
  while ( 1 )
  {
    v9 = LODWORD(v6->max_length);
    if ( (__int64)v7 >= (int)v9 )
      return 1;
    if ( v7 >= v9 )
      goto LABEL_59;
    v10 = LODWORD(classIds->max_length);
    v11 = v6->m_Items[v7];
    if ( (__int64)v7 >= (int)v10 )
      goto LABEL_23;
    if ( v7 >= v10 )
      goto LABEL_59;
    if ( m_Items[v7] < 1 )
    {
LABEL_23:
      if ( !v11 )
        goto LABEL_58;
      ServantClassIconComponent__Clear(v11, 0);
    }
    else
    {
      if ( !v7 )
      {
        if ( !v11 )
          goto LABEL_58;
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
        v13 = PartyEventPointIndicator_TypeInfo;
        v14 = v12;
        if ( !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
          v13 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v14, v13->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0);
        v10 = LODWORD(classIds->max_length);
      }
      if ( v7 >= v10 )
        goto LABEL_59;
      if ( !v11 )
        goto LABEL_58;
      ServantClassIconComponent__Set(v11, m_Items[v7], 0, 0);
    }
    v6 = this->fields.classIconList;
    ++v7;
    if ( !v6 )
      goto LABEL_58;
  }
}


void PartyEventPointIndicator__SetUnknown(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  __int64 v10; // x1
  UnityEngine_GameObject_o *classInfoBase; // x0
  struct ServantClassIconComponent_array *classIconList; // x8
  __int64 v13; // x21
  int max_length; // w9
  Il2CppClass **v15; // x8
  ServantClassIconComponent_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.questRestrictionInfo = 0;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo, 0, v2, v3, v4, v5, v6, v7);
  classInfoBase = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !classInfoBase
    || (UnityEngine_GameObject__SetActive(classInfoBase, 0, 0), (classInfoBase = this->fields.classInfoBase) == 0)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0), (classIconList = this->fields.classIconList) == 0) )
  {
LABEL_12:
    sub_1C7BD40(classInfoBase, v10);
  }
  v13 = 0;
  while ( 1 )
  {
    max_length = classIconList->max_length;
    if ( (int)v13 >= max_length )
      break;
    if ( (unsigned int)v13 >= max_length )
      sub_1C7BD48(classInfoBase);
    v15 = &classIconList->obj.klass + v13;
    v16 = (ServantClassIconComponent_o *)v15[4];
    if ( v16 )
    {
      if ( (_DWORD)v13 )
      {
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)v15[4], 0);
      }
      else
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15[4], 0);
        GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
        ServantClassIconComponent__Set(v16, 97, 0, 0);
      }
      classIconList = this->fields.classIconList;
      ++v13;
      if ( classIconList )
        continue;
    }
    goto LABEL_12;
  }
  this->fields.isDispTrend = 1;
}


void PartyEventPointIndicator__StopTotalDropItemtweenAlpha(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  struct UIPanel_o *infomationPanel; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4CE9E11 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9E11 = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  infomationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)infomationPanel & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_11:
    sub_1C7BD40(infomationPanel, method);
  }
}


void PartyEventPointIndicator__DispTotalDropItemCR_d__29___ctor(
        PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool PartyEventPointIndicator__DispTotalDropItemCR_d__29__MoveNext(
        PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *this,
        const MethodInfo *method)
{
  PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *v2; // x19
  struct PartyEventPointIndicator_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct QuestRestrictionInfo_o *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  PartyEventPointIndicator___c_c *v7; // x0
  System_Func_object__bool__o *_9__29_0; // x22
  Il2CppObject *v9; // x23
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  QuestRestrictionInfo_o *v18; // x8
  PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *v19; // x21
  PartyEventPointIndicator___c_c *v20; // x0
  System_Func_object__bool__o *_9__29_1; // x22
  Il2CppObject *v22; // x23
  struct PartyEventPointIndicator___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_String_array *Messages_43951556; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_String_array *restrictionMessages_5__2; // x8
  int32_t max_length; // w9
  struct System_String_array *v46; // x8
  bool result; // w0
  int dispKind; // w8
  int v49; // w9
  struct System_String_array *v50; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v53; // x0
  struct TweenAlpha_o **p_ta_5__4; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  UnityEngine_Object_o *ta_5__4; // x22
  UnityEngine_WaitForEndOfFrame_o *v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UnityEngine_GameObject_o *v75; // x0
  TweenAlpha_o *v76; // x0
  struct TweenAlpha_o **v77; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  UnityEngine_Object_o *v84; // x22
  UnityEngine_WaitForEndOfFrame_o *v85; // x21
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  UnityEngine_WaitForEndOfFrame_o *v98; // x20
  GrandQuestFolderBoardItem_o *v99; // x19
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  int v106; // w8
  Il2CppObject *wait_5__6; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  Il2CppObject *v109; // x1

  v2 = this;
  if ( (byte_4CE9E1E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_1C7BAE8(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_0__);
    sub_1C7BAE8(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_1__);
    sub_1C7BAE8(&PartyEventPointIndicator___c_TypeInfo);
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)sub_1C7BAE8(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CE9E1E = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0);
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.infomationPanel;
      if ( !this )
        goto LABEL_116;
      ((void (__fastcall *)(PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
        1.0);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( questRestrictionInfo )
      {
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                          questRestrictionInfo,
                                                                          0);
        v5 = _4__this->fields.questRestrictionInfo;
        if ( !v5 )
          goto LABEL_116;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.restrictionEntityList;
          v7 = PartyEventPointIndicator___c_TypeInfo;
          if ( !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
            v7 = PartyEventPointIndicator___c_TypeInfo;
          }
          _9__29_0 = (System_Func_object__bool__o *)v7->static_fields->__9__29_0;
          if ( !_9__29_0 )
          {
            if ( !v7->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v7);
              v7 = PartyEventPointIndicator___c_TypeInfo;
            }
            v9 = (Il2CppObject *)v7->static_fields->__9;
            _9__29_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__29_0,
              v9,
              Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_0__,
              0);
            static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
            static_fields->__9__29_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__29_0;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0,
              (int32_t)_9__29_0,
              v11,
              v12,
              v13,
              v14,
              v15,
              v16);
          }
          v17 = System_Linq_Enumerable__Where_object_(
                  restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__29_0,
                  (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)System_Linq_Enumerable__ToArray_object_(
                                                                            v17,
                                                                            (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          v18 = _4__this->fields.questRestrictionInfo;
          if ( !v18 )
            goto LABEL_116;
          v19 = this;
          if ( v18->fields.isUniqueServant && v18->fields.isUniqueIndividuality )
          {
            v20 = PartyEventPointIndicator___c_TypeInfo;
            if ( !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
              v20 = PartyEventPointIndicator___c_TypeInfo;
            }
            _9__29_1 = (System_Func_object__bool__o *)v20->static_fields->__9__29_1;
            if ( !_9__29_1 )
            {
              if ( !v20->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v20);
                v20 = PartyEventPointIndicator___c_TypeInfo;
              }
              v22 = (Il2CppObject *)v20->static_fields->__9;
              _9__29_1 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_RestrictionEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__29_1,
                v22,
                Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_1__,
                0);
              v23 = PartyEventPointIndicator___c_TypeInfo->static_fields;
              v23->__9__29_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__29_1;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&v23->__9__29_1,
                (int32_t)_9__29_1,
                v24,
                v25,
                v26,
                v27,
                v28,
                v29);
            }
            v30 = System_Linq_Enumerable__Where_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                    (System_Func_TSource__bool__o *)_9__29_1,
                    (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v30,
                                                                              (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
            v18 = _4__this->fields.questRestrictionInfo;
            if ( !v18 )
              goto LABEL_116;
            v19 = this;
          }
          Messages_43951556 = QuestRestrictionInfo__GetMessages_43951556(
                                v18,
                                (RestrictionEntity_array *)v19,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0);
        }
        else
        {
          Messages_43951556 = QuestRestrictionInfo__GetMessages(
                                _4__this->fields.questRestrictionInfo,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0,
                                0);
        }
      }
      else
      {
        Messages_43951556 = (System_String_array *)sub_1C7BB90(string___TypeInfo, 0);
      }
      v2->fields._restrictionMessages_5__2 = Messages_43951556;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v2->fields._restrictionMessages_5__2,
        (int32_t)Messages_43951556,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      restrictionMessages_5__2 = v2->fields._restrictionMessages_5__2;
      if ( !restrictionMessages_5__2 )
        goto LABEL_116;
      max_length = restrictionMessages_5__2->max_length;
      v2->fields._restrictionCount_5__3 = max_length;
      if ( _4__this->fields.isDispTrend + max_length < 2 )
      {
        if ( max_length != 1 )
        {
          if ( _4__this->fields.isDispTrend )
          {
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.pointEventBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.trendInfoBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.restrictionMessageBase;
            if ( !this )
              goto LABEL_116;
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          }
          return 0;
        }
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.pointEventBase;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.trendInfoBase;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.restrictionMessageBase;
            if ( this )
            {
              this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                v46 = v2->fields._restrictionMessages_5__2;
                if ( v46 )
                {
                  if ( !LODWORD(v46->max_length) )
LABEL_117:
                    sub_1C7BD48(this);
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v46->m_Items[0], 0);
                  return 0;
                }
              }
            }
          }
        }
LABEL_116:
        sub_1C7BD40(this, method);
      }
      v2->fields._ta_5__4 = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._ta_5__4, 0, v38, v39, v40, v41, v42, v43);
      *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
      break;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_90;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v2->fields._startTime_5__5) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_98;
      }
      else if ( _4__this )
      {
        goto LABEL_97;
      }
      goto LABEL_116;
    case 3:
      v2->fields.__1__state = -1;
      goto LABEL_105;
    default:
      return 0;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( !_4__this )
          goto LABEL_116;
        PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0);
        dispKind = _4__this->fields.dispKind;
        v49 = _4__this->fields.dispNum + 1;
        _4__this->fields.dispNum = v49;
        if ( dispKind == 2 )
        {
          if ( v49 < v2->fields._restrictionCount_5__3 )
            goto LABEL_75;
          if ( !_4__this->fields.isDispTrend )
          {
            dispKind = 2;
            goto LABEL_67;
          }
LABEL_63:
          dispKind = 1;
LABEL_66:
          _4__this->fields.dispKind = dispKind;
          goto LABEL_67;
        }
        if ( dispKind == 1 )
        {
          if ( v2->fields._restrictionCount_5__3 < 1 )
          {
            dispKind = 1;
            goto LABEL_67;
          }
LABEL_65:
          dispKind = 2;
          goto LABEL_66;
        }
        if ( dispKind )
          goto LABEL_68;
        if ( _4__this->fields.isDispTrend )
          goto LABEL_63;
        if ( v2->fields._restrictionCount_5__3 >= 1 )
          goto LABEL_65;
        dispKind = 0;
LABEL_67:
        _4__this->fields.dispNum = 0;
LABEL_68:
        if ( dispKind != 2 )
        {
          if ( dispKind == 1 )
          {
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.trendInfoBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.restrictionMessageBase;
            if ( !this )
              goto LABEL_116;
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.pointEventBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          }
          goto LABEL_82;
        }
LABEL_75:
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.trendInfoBase;
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.restrictionMessageBase;
        if ( !this )
          goto LABEL_116;
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0);
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.pointEventBase;
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v50 = v2->fields._restrictionMessages_5__2;
        if ( !v50 )
          goto LABEL_116;
        dispNum = _4__this->fields.dispNum;
        if ( (unsigned int)dispNum >= LODWORD(v50->max_length) )
          goto LABEL_117;
        PartyEventPointIndicator__SetRestrictionDisp(_4__this, v50->m_Items[dispNum], 0);
LABEL_82:
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_116;
        if ( _4__this->fields.isClick )
        {
          ((void (__fastcall *)(PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
            this,
            this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
            1.0);
          _4__this->fields.isClick = 0;
          break;
        }
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v53 = TweenAlpha__Begin(gameObject, 0.5, 1.0, 0);
        v2->fields._ta_5__4 = v53;
        p_ta_5__4 = &v2->fields._ta_5__4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._ta_5__4, (int32_t)v53, v55, v56, v57, v58, v59, v60);
        ta_5__4 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Object__op_Inequality(ta_5__4, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_116;
          (*p_ta_5__4)->fields.method = 6;
          v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v62, 0);
          v2->fields._wait_5__6 = v62;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._wait_5__6, (int32_t)v62, v63, v64, v65, v66, v67, v68);
LABEL_90:
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)v2->fields._ta_5__4;
          if ( !this )
            goto LABEL_116;
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Behaviour__get_enabled(
                                                                            (UnityEngine_Behaviour_o *)this,
                                                                            0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !_4__this )
              goto LABEL_116;
            if ( !_4__this->fields.isClick )
            {
              wait_5__6 = (Il2CppObject *)v2->fields._wait_5__6;
              v2->fields.__2__current = wait_5__6;
              p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
              sub_1C7BA8C(p__2__current, (int32_t)wait_5__6, v69, v70, v71, v72, v73, v74);
              result = 1;
              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
              return result;
            }
          }
          v2->fields._wait_5__6 = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._wait_5__6, 0, v69, v70, v71, v72, v73, v74);
          if ( !_4__this )
            goto LABEL_116;
        }
      }
      while ( _4__this->fields.isClick );
      v2->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
LABEL_97:
      if ( !_4__this->fields.isClick )
      {
        v98 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v98, 0);
        v2->fields.__2__current = (Il2CppObject *)v98;
        v99 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C7BA8C(v99, (int32_t)v98, v100, v101, v102, v103, v104, v105);
        v106 = 2;
        goto LABEL_115;
      }
LABEL_98:
      if ( !_4__this->fields.isClick )
      {
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_116;
        v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v76 = TweenAlpha__Begin(v75, 0.5, 0.0, 0);
        v2->fields._ta_5__4 = v76;
        v77 = &v2->fields._ta_5__4;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._ta_5__4, (int32_t)v76, v78, v79, v80, v81, v82, v83);
        v84 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Object__op_Inequality(v84, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( !*v77 )
      goto LABEL_116;
    (*v77)->fields.method = 6;
    v85 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C7BD34(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v85, 0);
    v2->fields._wait_5__6 = v85;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._wait_5__6, (int32_t)v85, v86, v87, v88, v89, v90, v91);
LABEL_105:
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)v2->fields._ta_5__4;
    if ( !this )
      goto LABEL_116;
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *)UnityEngine_Behaviour__get_enabled(
                                                                      (UnityEngine_Behaviour_o *)this,
                                                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_116;
      if ( !_4__this->fields.isClick )
        break;
    }
    v2->fields._wait_5__6 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._wait_5__6, 0, v92, v93, v94, v95, v96, v97);
  }
  v109 = (Il2CppObject *)v2->fields._wait_5__6;
  v2->fields.__2__current = v109;
  v99 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C7BA8C(v99, (int32_t)v109, v92, v93, v94, v95, v96, v97);
  v106 = 3;
LABEL_115:
  LODWORD(v99[-1].fields._ClosedMessage_k__BackingField) = v106;
  return 1;
}


Il2CppObject *PartyEventPointIndicator__DispTotalDropItemCR_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn PartyEventPointIndicator__DispTotalDropItemCR_d__29__System_Collections_IEnumerator_Reset(
        PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_PartyEventPointIndicator__DispTotalDropItemCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *PartyEventPointIndicator__DispTotalDropItemCR_d__29__System_Collections_IEnumerator_get_Current(
        PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void PartyEventPointIndicator__DispTotalDropItemCR_d__29__System_IDisposable_Dispose(
        PartyEventPointIndicator__DispTotalDropItemCR_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void PartyEventPointIndicator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CE9E1D & 1) == 0 )
  {
    sub_1C7BAE8(&PartyEventPointIndicator___c_TypeInfo);
    byte_4CE9E1D = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(PartyEventPointIndicator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyEventPointIndicator___c_TypeInfo->static_fields->__9 = (struct PartyEventPointIndicator___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)PartyEventPointIndicator___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyEventPointIndicator___c___ctor(PartyEventPointIndicator___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyEventPointIndicator___c___DispTotalDropItemCR_b__29_0(
        PartyEventPointIndicator___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x9

  if ( !entity )
    goto LABEL_9;
  type = entity->fields.type;
  if ( type == 12 )
    return 0;
  if ( type != 1 )
    return type != 16;
  targetVals2 = entity->fields.targetVals2;
  if ( !targetVals2 )
LABEL_9:
    sub_1C7BD40(this, entity);
  if ( targetVals2->max_length )
    return type != 16;
  return 1;
}


bool PartyEventPointIndicator___c___DispTotalDropItemCR_b__29_1(
        PartyEventPointIndicator___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return entity->fields.type != 15;
}