void PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  if ( (byte_5933D69 & 1) == 0 )
  {
    sub_21FFC50(&PartyEventPointIndicator_TypeInfo);
    byte_5933D69 = 1;
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
    sub_21FFECC(pointEventTotalTitle1Label, method);
  }
  UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0);
}


System_Collections_IEnumerator_o *PartyEventPointIndicator__DispTotalDropItemCR(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5933D63 & 1) == 0 )
  {
    sub_21FFC50(&PartyEventPointIndicator__DispTotalDropItemCR_d__29_TypeInfo);
    byte_5933D63 = 1;
  }
  v3 = sub_21FFEBC(PartyEventPointIndicator__DispTotalDropItemCR_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_5933D68 & 1) == 0 )
  {
    sub_21FFC50(&Method_PartyEventPointIndicator_OnClick__);
    byte_5933D68 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_PartyEventPointIndicator_OnClick__;
    if ( (*((_BYTE *)Method_PartyEventPointIndicator_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PartyEventPointIndicator_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ViewWaveEnemyEntity_array *v10; // x21
  int32_t ReachedWave; // w22
  int max_length; // w23
  Il2CppClass **v13; // x24
  char *v14; // x24
  ViewWaveEnemyMaster_o *v15; // t1

  if ( (byte_5933D62 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5933D62 = 1;
  }
  if ( questPhaseEnt )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, questPhaseEnt, method);
    Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    if ( Master_object )
    {
      v6 = Master_object;
      EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                                Master_object,
                                questPhaseEnt->fields.questId,
                                0);
      if ( !EntityListFromQuestId || (v10 = EntityListFromQuestId, !EntityListFromQuestId->max_length) )
      {
LABEL_21:
        this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, questPhaseEnt->fields.classIds, v9);
        return;
      }
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
      Master_object = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
      if ( Master_object )
      {
        ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                        (ReachedWaveInfoMaster_o *)Master_object,
                        questPhaseEnt->fields.questId,
                        0);
        Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v6, v10, ReachedWave, 0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = v10->max_length;
          if ( max_length - 1 >= 0 )
          {
            while ( 1 )
            {
              if ( (unsigned int)--max_length >= LODWORD(v10->max_length) )
LABEL_24:
                sub_21FFED4(Master_object);
              v13 = &v10->obj.klass + (unsigned int)max_length;
              v15 = (ViewWaveEnemyMaster_o *)v13[4];
              v14 = (char *)(v13 + 4);
              Master_object = v15;
              if ( !v15 )
                goto LABEL_23;
              Master_object = (ViewWaveEnemyMaster_o *)ViewWaveEnemyEntity__GetUnknownDispInfo(
                                                         (ViewWaveEnemyEntity_o *)Master_object,
                                                         0);
              if ( Master_object )
              {
                if ( (unsigned int)max_length >= LODWORD(v10->max_length) )
                  goto LABEL_24;
                if ( !*(_QWORD *)v14 )
                  goto LABEL_23;
                if ( ReachedWave < *(_DWORD *)(*(_QWORD *)v14 + 56LL) )
                  goto LABEL_22;
              }
              if ( max_length <= 0 )
                goto LABEL_21;
            }
          }
        }
        goto LABEL_21;
      }
    }
LABEL_23:
    sub_21FFECC(Master_object, questPhaseEnt);
  }
LABEL_22:
  PartyEventPointIndicator__SetUnknown(this, (const MethodInfo *)questPhaseEnt);
}


void PartyEventPointIndicator__SetInfomation(
        PartyEventPointIndicator_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x2

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    (System_String_o *)classIds,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v12 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v12 )
    sub_21FFECC(0, v11);
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

  if ( (byte_5933D67 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933D67 = 1;
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
    sub_21FFECC(restrictionMessageBase, v5);
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
  v12.fields.y = 1.0;
  v12.fields.x = (float)this->fields.baseMessageWidth / v9;
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
  System_String_o *pointEventTotalTitle1Label; // x0
  System_String_o *v9; // x21
  System_Array_o *v10; // x0
  System_RuntimeFieldHandle_o v11; // x1
  System_Char_array *v12; // x22
  System_String_o *v13; // x21
  System_String_c *klass; // x8
  float titleWidth; // s9
  float v16; // s0
  float v17; // s8
  float x; // s0
  float v19; // s1
  System_String_o *v20; // x1
  System_String_o *EventUpString; // x21
  __int64 v22; // x2
  struct UILabel_o *pointEventTotalDataLabel; // x20
  System_String_o *v24; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933D65 & 1) == 0 )
  {
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_86/*"\r"*/);
    sub_21FFC50(&StringLiteral_10638/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/);
    byte_5933D65 = 1;
  }
  if ( dropItemInfo )
  {
    NameTotalString = EventMargeItemUpValInfo__GetNameTotalString(dropItemInfo, 0);
    ItemName = (Il2CppObject *)EventMargeItemUpValInfo__GetItemName(dropItemInfo, 0);
    ServantName = (Il2CppObject *)EventMargeItemUpValInfo__GetServantName(dropItemInfo, 0);
    pointEventTotalTitle1Label = System_String__Format_75484576(NameTotalString, ItemName, ServantName, 0);
    if ( !pointEventTotalTitle1Label )
      goto LABEL_43;
    v9 = System_String__Replace_75490096(
           pointEventTotalTitle1Label,
           (System_String_o *)StringLiteral_86/*"\r"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
    v10 = (System_Array_o *)sub_21FFD10(char___TypeInfo, 4);
    v11.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
    v12 = (System_Char_array *)v10;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v10, v11, 0);
    if ( !v9 )
      goto LABEL_43;
    pointEventTotalTitle1Label = (System_String_o *)System_String__Split_75492796(v9, v12, 0, 0);
    if ( !pointEventTotalTitle1Label )
      goto LABEL_43;
    v13 = pointEventTotalTitle1Label;
    klass = pointEventTotalTitle1Label[1].klass;
    pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle1Label;
    titleWidth = (float)this->fields.titleWidth;
    if ( !klass )
    {
      if ( !pointEventTotalTitle1Label )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
      pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle2Label;
      if ( !pointEventTotalTitle1Label )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
      goto LABEL_33;
    }
    if ( (_DWORD)klass == 1 )
    {
      if ( !pointEventTotalTitle1Label )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( LODWORD(v13[1].klass) )
      {
        pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitle1Label )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, (System_String_o *)v13[1].monitor, 0);
        pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitle1Label )
          goto LABEL_43;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitle1Label, 0);
        v19 = (float)this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)klass )
    {
      if ( !pointEventTotalTitle1Label )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, (System_String_o *)v13[1].monitor, 0);
      if ( ((__int64)v13[1].klass & 0xFFFFFFFE) != 0 )
      {
        pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitle1Label )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, *(System_String_o **)&v13[1].fields, 0);
        pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle1Label;
        if ( !pointEventTotalTitle1Label )
          goto LABEL_43;
        LODWORD(v16) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitle1Label, 0);
        pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitle1Label )
          goto LABEL_43;
        v17 = v16;
        x = UILabel__get_printedSize((UILabel_o *)pointEventTotalTitle1Label, 0).fields.x;
        v19 = (float)this->fields.titleWidth;
        if ( v17 > x )
          x = v17;
LABEL_31:
        if ( x > v19 )
          titleWidth = x;
LABEL_33:
        pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitleBase;
        if ( pointEventTotalTitle1Label )
        {
          v27.fields.y = 1.0;
          v27.fields.z = 1.0;
          v27.fields.x = (float)this->fields.titleWidth / titleWidth;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pointEventTotalTitle1Label, v27, 0);
          EventUpString = EventMargeItemUpValInfo__GetEventUpString(dropItemInfo, 0, 0);
          pointEventTotalTitle1Label = (System_String_o *)System_String__IsNullOrEmpty(EventUpString, 0);
          pointEventTotalDataLabel = this->fields.pointEventTotalDataLabel;
          if ( ((unsigned __int8)pointEventTotalTitle1Label & 1) != 0 )
          {
            if ( pointEventTotalDataLabel )
            {
              v20 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_41:
              pointEventTotalTitle1Label = (System_String_o *)pointEventTotalDataLabel;
              goto LABEL_42;
            }
          }
          else
          {
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, dropItemInfo, v22);
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10638/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, 0);
            pointEventTotalTitle1Label = System_String__Format(v24, (Il2CppObject *)EventUpString, 0);
            if ( pointEventTotalDataLabel )
            {
              v20 = pointEventTotalTitle1Label;
              goto LABEL_41;
            }
          }
        }
LABEL_43:
        sub_21FFECC(pointEventTotalTitle1Label, dropItemInfo);
      }
    }
    sub_21FFED4(pointEventTotalTitle1Label);
  }
  pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitleBase;
  if ( !pointEventTotalTitle1Label )
    goto LABEL_43;
  v26.fields.x = 1.0;
  v26.fields.y = 1.0;
  v26.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pointEventTotalTitle1Label, v26, 0);
  pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle1Label;
  if ( !pointEventTotalTitle1Label )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
  pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalTitle2Label;
  if ( !pointEventTotalTitle1Label )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, (System_String_o *)StringLiteral_1/*""*/, 0);
  pointEventTotalTitle1Label = (System_String_o *)this->fields.pointEventTotalDataLabel;
  if ( !pointEventTotalTitle1Label )
    goto LABEL_43;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_42:
  UILabel__set_text((UILabel_o *)pointEventTotalTitle1Label, v20, 0);
  return dropItemInfo != 0;
}


void PartyEventPointIndicator__SetTotalDropItemList(
        PartyEventPointIndicator_o *this,
        EventPartyMargeUpValInfo_o *margeItemInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *infomationPanel; // x0

  this->fields.eventMargeItemUpValInfo = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventMargeItemUpValInfo,
    0,
    (System_String_o *)method,
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
    sub_21FFECC(infomationPanel, v11);
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
  int32_t *m_Items; // x25
  unsigned __int64 v9; // x9
  Il2CppClass **v10; // x9
  unsigned __int64 v11; // x8
  ServantClassIconComponent_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  PartyEventPointIndicator_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *v20; // x8
  QuestPhaseEntity_o *v21; // x20
  struct ServantClassIconComponent_array *classIconList; // x9
  unsigned __int64 v23; // x24
  unsigned __int64 max_length_low; // x8
  struct System_Int32_array *v25; // x8
  Il2CppClass **v26; // x10
  unsigned __int64 v27; // x9
  ServantClassIconComponent_o *v28; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  PartyEventPointIndicator_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x22

  if ( (byte_5933D66 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_21FFC50(&PartyEventPointIndicator_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933D66 = 1;
  }
  levelInfoBase = this->fields.levelInfoBase;
  if ( !levelInfoBase )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0);
  levelInfoBase = (UnityEngine_GameObject_o *)this->fields.levelInfoLabel;
  if ( !levelInfoBase )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)levelInfoBase, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !classIds || !classIds->max_length )
  {
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_55;
    levelInfoBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !levelInfoBase )
      goto LABEL_26;
    levelInfoBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)levelInfoBase,
                                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !levelInfoBase )
      goto LABEL_26;
    Entity = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)levelInfoBase,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0);
    if ( Entity && (v20 = Entity->fields.classIds, v21 = Entity, v20) && v20->max_length )
    {
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v23 = 0;
          do
          {
            max_length_low = LODWORD(classIconList->max_length);
            if ( (__int64)v23 >= (int)max_length_low )
              return 1;
            if ( v23 >= max_length_low )
              goto LABEL_58;
            v25 = v21->fields.classIds;
            if ( !v25 )
              break;
            v26 = &classIconList->obj.klass + v23;
            v27 = LODWORD(v25->max_length);
            v28 = (ServantClassIconComponent_o *)v26[4];
            if ( (__int64)v23 >= (int)v27 )
              goto LABEL_51;
            if ( v23 >= v27 )
              goto LABEL_58;
            if ( v25->m_Items[v23] < 1 )
            {
LABEL_51:
              if ( !v28 )
                break;
              ServantClassIconComponent__Clear((ServantClassIconComponent_o *)v26[4], 0);
            }
            else
            {
              if ( !v23 )
              {
                if ( !v28 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26[4], 0);
                v32 = PartyEventPointIndicator_TypeInfo;
                v33 = gameObject;
                if ( !*(&PartyEventPointIndicator_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo, v30, v31);
                  v32 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v33, v32->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0);
                v25 = v21->fields.classIds;
                if ( !v25 )
                  break;
              }
              if ( v23 >= LODWORD(v25->max_length) )
LABEL_58:
                sub_21FFED4(levelInfoBase);
              if ( !v28 )
                break;
              ServantClassIconComponent__Set(v28, v25->m_Items[v23], 0, 0);
            }
            classIconList = this->fields.classIconList;
            ++v23;
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
LABEL_26:
    sub_21FFECC(levelInfoBase, classIds);
  }
  levelInfoBase = this->fields.classInfoBase;
  if ( !levelInfoBase )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0);
  v6 = this->fields.classIconList;
  if ( !v6 )
    goto LABEL_26;
  v7 = 0;
  m_Items = classIds->m_Items;
  while ( 1 )
  {
    v9 = LODWORD(v6->max_length);
    if ( (__int64)v7 >= (int)v9 )
      return 1;
    if ( v7 >= v9 )
      goto LABEL_58;
    v10 = &v6->obj.klass + v7;
    v11 = LODWORD(classIds->max_length);
    v12 = (ServantClassIconComponent_o *)v10[4];
    if ( (__int64)v7 >= (int)v11 )
      goto LABEL_23;
    if ( v7 >= v11 )
      goto LABEL_58;
    if ( m_Items[v7] < 1 )
    {
LABEL_23:
      if ( !v12 )
        goto LABEL_26;
      ServantClassIconComponent__Clear(v12, 0);
    }
    else
    {
      if ( !v7 )
      {
        if ( !v12 )
          goto LABEL_26;
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
        v16 = PartyEventPointIndicator_TypeInfo;
        v17 = v13;
        if ( !*(&PartyEventPointIndicator_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo, v14, v15);
          v16 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v17, v16->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0);
        v11 = LODWORD(classIds->max_length);
      }
      if ( v7 >= v11 )
        goto LABEL_58;
      if ( !v12 )
        goto LABEL_26;
      ServantClassIconComponent__Set(v12, m_Items[v7], 0, 0);
    }
    v6 = this->fields.classIconList;
    ++v7;
    if ( !v6 )
      goto LABEL_26;
  }
}


void PartyEventPointIndicator__SetUnknown(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  __int64 v10; // x1
  UnityEngine_GameObject_o *classInfoBase; // x0
  struct ServantClassIconComponent_array *classIconList; // x8
  unsigned __int64 v13; // x21
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v15; // x8
  ServantClassIconComponent_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.questRestrictionInfo = 0;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo, 0, v2, v3, v4, v5, v6, v7);
  classInfoBase = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !classInfoBase
    || (UnityEngine_GameObject__SetActive(classInfoBase, 0, 0), (classInfoBase = this->fields.classInfoBase) == 0)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0), (classIconList = this->fields.classIconList) == 0) )
  {
LABEL_13:
    sub_21FFECC(classInfoBase, v10);
  }
  v13 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(classIconList->max_length);
    if ( (__int64)v13 >= (int)max_length_low )
      break;
    if ( v13 >= max_length_low )
      sub_21FFED4(classInfoBase);
    v15 = &classIconList->obj.klass + v13;
    v16 = (ServantClassIconComponent_o *)v15[4];
    if ( v13 )
    {
      if ( !v16 )
        goto LABEL_13;
      ServantClassIconComponent__Clear((ServantClassIconComponent_o *)v15[4], 0);
    }
    else
    {
      if ( !v16 )
        goto LABEL_13;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15[4], 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
      ServantClassIconComponent__Set(v16, 97, 0, 0);
    }
    classIconList = this->fields.classIconList;
    ++v13;
    if ( !classIconList )
      goto LABEL_13;
  }
  this->fields.isDispTrend = 1;
}


void PartyEventPointIndicator__StopTotalDropItemtweenAlpha(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  struct UIPanel_o *infomationPanel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x19

  if ( (byte_5933D64 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933D64 = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
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
    sub_21FFECC(infomationPanel, method);
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
  UnityEngine_Behaviour_o *ta_5__4; // x0
  int32_t _1__state; // w8
  struct PartyEventPointIndicator_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v7; // x2
  bool IsUseOldMaster; // w8
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x21
  PartyEventPointIndicator___c_c *v10; // x8
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__29_0; // x22
  Il2CppObject *v13; // x23
  struct PartyEventPointIndicator___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x2
  QuestRestrictionInfo_o *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  PartyEventPointIndicator___c_c *v25; // x0
  struct PartyEventPointIndicator___c_StaticFields *v26; // x8
  System_Func_object__bool__o *_9__29_1; // x22
  Il2CppObject *v28; // x23
  struct PartyEventPointIndicator___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  struct System_String_array *Messages_50456620; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int isClick; // w8
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_String_array *v51; // x8
  int32_t max_length; // w9
  _BOOL4 isDispTrend; // w8
  const MethodInfo *v54; // x2
  struct System_String_array *v55; // x8
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  Il2CppObject *wait_5__6; // x1
  Il2CppObject **p__2__current; // x19
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  Il2CppObject *v70; // x1
  Il2CppObject **v71; // x19
  int v72; // w8
  int dispKind; // w8
  int32_t v74; // w9
  int v75; // w9
  const MethodInfo *v76; // x2
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenAlpha_o *v80; // x0
  struct TweenAlpha_o **p_ta_5__4; // x21
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x1
  __int64 v89; // x2
  UnityEngine_Object_o *v90; // x22
  UnityEngine_WaitForEndOfFrame_c *v91; // x0
  UnityEngine_WaitForEndOfFrame_o *v92; // x21
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  UnityEngine_GameObject_o *v99; // x0
  struct TweenAlpha_o *v100; // x0
  struct TweenAlpha_o **v101; // x21
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  __int64 v108; // x1
  __int64 v109; // x2
  UnityEngine_Object_o *v110; // x22
  UnityEngine_WaitForEndOfFrame_c *v111; // x0
  UnityEngine_WaitForEndOfFrame_o *v112; // x21
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  UnityEngine_WaitForEndOfFrame_o *v119; // x20
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7

  if ( (byte_5933D6B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_21FFC50(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_0__);
    sub_21FFC50(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_1__);
    sub_21FFC50(&PartyEventPointIndicator___c_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_5933D6B = 1;
  }
  ta_5__4 = 0;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)ta_5__4;
      this->fields.__1__state = -1;
      while ( 1 )
      {
        ta_5__4 = (UnityEngine_Behaviour_o *)this->fields._ta_5__4;
        if ( !ta_5__4 )
          goto LABEL_123;
        ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_enabled(ta_5__4, 0);
        if ( ((unsigned __int8)ta_5__4 & 1) != 0 )
        {
          if ( !_4__this )
            goto LABEL_123;
          if ( !_4__this->fields.isClick )
          {
            wait_5__6 = (Il2CppObject *)this->fields._wait_5__6;
            this->fields.__2__current = wait_5__6;
            p__2__current = &this->fields.__2__current;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)p__2__current,
              (int32_t)wait_5__6,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            LOBYTE(ta_5__4) = 1;
            *((_DWORD *)p__2__current - 2) = 1;
            return (char)ta_5__4;
          }
          this->fields._wait_5__6 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6, 0, v56, v57, v58, v59, v60, v61);
        }
        else
        {
          this->fields._wait_5__6 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6, 0, v56, v57, v58, v59, v60, v61);
          if ( !_4__this )
            goto LABEL_123;
        }
        do
        {
          if ( _4__this->fields.isClick )
            goto LABEL_75;
          while ( 1 )
          {
            this->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
LABEL_104:
            isClick = 1;
            if ( !_4__this->fields.isClick )
            {
              v119 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v119, 0);
              this->fields.__2__current = (Il2CppObject *)v119;
              v71 = &this->fields.__2__current;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v71, (int32_t)v119, v120, v121, v122, v123, v124, v125);
              v72 = 2;
              goto LABEL_121;
            }
LABEL_105:
            if ( !isClick )
            {
              ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.infomationPanel;
              if ( !ta_5__4 )
                goto LABEL_123;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ta_5__4, 0);
              v80 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0);
              this->fields._ta_5__4 = v80;
              p_ta_5__4 = &this->fields._ta_5__4;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__4,
                (int32_t)v80,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87);
              v90 = (UnityEngine_Object_o *)this->fields._ta_5__4;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v88, v89);
              ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v90, 0, 0);
              if ( ((unsigned __int8)ta_5__4 & 1) != 0 )
              {
                if ( !*p_ta_5__4 )
                  goto LABEL_123;
                v91 = UnityEngine_WaitForEndOfFrame_TypeInfo;
                (*p_ta_5__4)->fields.method = 6;
                v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(v91);
                UnityEngine_WaitForEndOfFrame___ctor(v92, 0);
                this->fields._wait_5__6 = v92;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6,
                  (int32_t)v92,
                  v93,
                  v94,
                  v95,
                  v96,
                  v97,
                  v98);
LABEL_69:
                ta_5__4 = (UnityEngine_Behaviour_o *)this->fields._ta_5__4;
                if ( !ta_5__4 )
                  goto LABEL_123;
                ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_enabled(ta_5__4, 0);
                if ( ((unsigned __int8)ta_5__4 & 1) != 0 )
                {
                  if ( !_4__this )
                    goto LABEL_123;
                  if ( !_4__this->fields.isClick )
                  {
                    v70 = (Il2CppObject *)this->fields._wait_5__6;
                    this->fields.__2__current = v70;
                    v71 = &this->fields.__2__current;
                    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v71, (int32_t)v70, v64, v65, v66, v67, v68, v69);
                    v72 = 3;
LABEL_121:
                    *((_DWORD *)v71 - 2) = v72;
                    LOBYTE(ta_5__4) = 1;
                    return (char)ta_5__4;
                  }
                }
                this->fields._wait_5__6 = 0;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6,
                  0,
                  v64,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69);
              }
            }
LABEL_75:
            if ( !_4__this )
              goto LABEL_123;
            PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, method);
            dispKind = _4__this->fields.dispKind;
            v74 = _4__this->fields.dispNum + 1;
            _4__this->fields.dispNum = v74;
            if ( dispKind == 2 )
            {
              if ( v74 < this->fields._restrictionCount_5__3 )
                goto LABEL_93;
              v75 = 1;
              dispKind = 2;
              if ( !_4__this->fields.isDispTrend )
                goto LABEL_84;
LABEL_83:
              dispKind = v75;
              _4__this->fields.dispKind = v75;
              goto LABEL_84;
            }
            if ( dispKind == 1 )
            {
              v75 = 2;
              dispKind = 1;
              if ( this->fields._restrictionCount_5__3 >= 1 )
                goto LABEL_83;
            }
            else
            {
              if ( dispKind )
                goto LABEL_85;
              dispKind = _4__this->fields.isDispTrend;
              v75 = 1;
              if ( _4__this->fields.isDispTrend )
                goto LABEL_83;
              v75 = 2;
              if ( this->fields._restrictionCount_5__3 >= 1 )
                goto LABEL_83;
            }
LABEL_84:
            _4__this->fields.dispNum = 0;
LABEL_85:
            if ( dispKind != 2 )
            {
              if ( dispKind == 1 )
              {
                ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.trendInfoBase;
                if ( !ta_5__4 )
                  goto LABEL_123;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
                ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.restrictionMessageBase;
                if ( !ta_5__4 )
                  goto LABEL_123;
                ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)ta_5__4,
                                                       0);
                if ( !ta_5__4 )
                  goto LABEL_123;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
                ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.pointEventBase;
                if ( !ta_5__4 )
                  goto LABEL_123;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
              }
              goto LABEL_100;
            }
LABEL_93:
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.trendInfoBase;
            if ( !ta_5__4 )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.restrictionMessageBase;
            if ( !ta_5__4 )
              goto LABEL_123;
            ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)ta_5__4,
                                                   0);
            if ( !ta_5__4 )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.pointEventBase;
            if ( !ta_5__4 )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
            restrictionMessages_5__2 = this->fields._restrictionMessages_5__2;
            if ( !restrictionMessages_5__2 )
              goto LABEL_123;
            dispNum = _4__this->fields.dispNum;
            if ( (unsigned int)dispNum >= LODWORD(restrictionMessages_5__2->max_length) )
              goto LABEL_124;
            PartyEventPointIndicator__SetRestrictionDisp(_4__this, restrictionMessages_5__2->m_Items[dispNum], v76);
LABEL_100:
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.infomationPanel;
            if ( !_4__this->fields.isClick )
              break;
            if ( !ta_5__4 )
              goto LABEL_123;
            ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))ta_5__4->klass[1]._1.element_class)(
              ta_5__4,
              ta_5__4->klass[1]._1.castClass,
              1.0);
            _4__this->fields.isClick = 0;
          }
          if ( !ta_5__4 )
            goto LABEL_123;
          v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ta_5__4, 0);
          v100 = TweenAlpha__Begin(v99, 0.5, 1.0, 0);
          this->fields._ta_5__4 = v100;
          v101 = &this->fields._ta_5__4;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__4,
            (int32_t)v100,
            v102,
            v103,
            v104,
            v105,
            v106,
            v107);
          v110 = (UnityEngine_Object_o *)this->fields._ta_5__4;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108, v109);
          ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(v110, 0, 0);
        }
        while ( ((unsigned __int8)ta_5__4 & 1) == 0 );
        if ( !*v101 )
          goto LABEL_123;
        v111 = UnityEngine_WaitForEndOfFrame_TypeInfo;
        (*v101)->fields.method = 6;
        v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(v111);
        UnityEngine_WaitForEndOfFrame___ctor(v112, 0);
        this->fields._wait_5__6 = v112;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__6,
          (int32_t)v112,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118);
      }
    }
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, method);
      ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.infomationPanel;
      if ( ta_5__4 )
      {
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))ta_5__4->klass[1]._1.element_class)(
          ta_5__4,
          ta_5__4->klass[1]._1.castClass,
          1.0);
        questRestrictionInfo = _4__this->fields.questRestrictionInfo;
        _4__this->fields.isClick = 1;
        if ( questRestrictionInfo )
        {
          IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
          ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.questRestrictionInfo;
          if ( IsUseOldMaster )
          {
            if ( !ta_5__4 )
              goto LABEL_123;
            m_CachedPtr = (System_Collections_Generic_IEnumerable_TSource__o *)ta_5__4[6].fields.m_CachedPtr;
            v10 = PartyEventPointIndicator___c_TypeInfo;
            if ( !*(&PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo, method, v7);
              v10 = PartyEventPointIndicator___c_TypeInfo;
            }
            static_fields = v10->static_fields;
            _9__29_0 = (System_Func_object__bool__o *)static_fields->__9__29_0;
            if ( !_9__29_0 )
            {
              if ( !*(&v10->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v10, method, v7);
                static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
              }
              v13 = (Il2CppObject *)static_fields->__9;
              _9__29_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RestrictionEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__29_0,
                v13,
                Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_0__,
                0);
              v14 = PartyEventPointIndicator___c_TypeInfo->static_fields;
              v14->__9__29_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__29_0;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v14->__9__29_0,
                (int32_t)_9__29_0,
                v15,
                v16,
                v17,
                v18,
                v19,
                v20);
            }
            v21 = System_Linq_Enumerable__Where_object_(
                    m_CachedPtr,
                    (System_Func_TSource__bool__o *)_9__29_0,
                    (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
            ta_5__4 = (UnityEngine_Behaviour_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v21,
                                                   (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
            v23 = _4__this->fields.questRestrictionInfo;
            if ( !v23 )
              goto LABEL_123;
            v24 = (System_Collections_Generic_IEnumerable_TSource__o *)ta_5__4;
            if ( v23->fields.isUniqueServant && v23->fields.isUniqueIndividuality )
            {
              v25 = PartyEventPointIndicator___c_TypeInfo;
              if ( !*(&PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo, method, v22);
                v25 = PartyEventPointIndicator___c_TypeInfo;
              }
              v26 = v25->static_fields;
              _9__29_1 = (System_Func_object__bool__o *)v26->__9__29_1;
              if ( !_9__29_1 )
              {
                if ( !*(&v25->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v25, method, v22);
                  v26 = PartyEventPointIndicator___c_TypeInfo->static_fields;
                }
                v28 = (Il2CppObject *)v26->__9;
                _9__29_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RestrictionEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__29_1,
                  v28,
                  Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__29_1__,
                  0);
                v29 = PartyEventPointIndicator___c_TypeInfo->static_fields;
                v29->__9__29_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__29_1;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v29->__9__29_1,
                  (int32_t)_9__29_1,
                  v30,
                  v31,
                  v32,
                  v33,
                  v34,
                  v35);
              }
              v36 = System_Linq_Enumerable__Where_object_(
                      v24,
                      (System_Func_TSource__bool__o *)_9__29_1,
                      (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
              ta_5__4 = (UnityEngine_Behaviour_o *)System_Linq_Enumerable__ToArray_object_(
                                                     v36,
                                                     (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
              v23 = _4__this->fields.questRestrictionInfo;
              if ( !v23 )
                goto LABEL_123;
              v24 = (System_Collections_Generic_IEnumerable_TSource__o *)ta_5__4;
            }
            Messages_50456620 = QuestRestrictionInfo__GetMessages_50456620(
                                  v23,
                                  (RestrictionEntity_array *)v24,
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
            if ( !ta_5__4 )
              goto LABEL_123;
            Messages_50456620 = QuestRestrictionInfo__GetMessages(
                                  (QuestRestrictionInfo_o *)ta_5__4,
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
          Messages_50456620 = (struct System_String_array *)sub_21FFD10(string___TypeInfo, 0);
        }
        this->fields._restrictionMessages_5__2 = Messages_50456620;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._restrictionMessages_5__2,
          (int32_t)Messages_50456620,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        v51 = this->fields._restrictionMessages_5__2;
        if ( !v51 )
          goto LABEL_123;
        max_length = v51->max_length;
        isDispTrend = _4__this->fields.isDispTrend;
        this->fields._restrictionCount_5__3 = max_length;
        if ( isDispTrend + max_length >= 2 )
        {
          this->fields._ta_5__4 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__4, 0, v45, v46, v47, v48, v49, v50);
          *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
          goto LABEL_75;
        }
        if ( max_length != 1 )
        {
          if ( isDispTrend )
          {
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.pointEventBase;
            if ( !ta_5__4 )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.trendInfoBase;
            if ( !ta_5__4 )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.restrictionMessageBase;
            if ( !ta_5__4 )
              goto LABEL_123;
            ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)ta_5__4,
                                                   0);
            if ( !ta_5__4 )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
          }
LABEL_58:
          LOBYTE(ta_5__4) = 0;
          return (char)ta_5__4;
        }
        ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.pointEventBase;
        if ( ta_5__4 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
          ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.trendInfoBase;
          if ( ta_5__4 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 0, 0);
            ta_5__4 = (UnityEngine_Behaviour_o *)_4__this->fields.restrictionMessageBase;
            if ( ta_5__4 )
            {
              ta_5__4 = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)ta_5__4,
                                                     0);
              if ( ta_5__4 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ta_5__4, 1, 0);
                v55 = this->fields._restrictionMessages_5__2;
                if ( v55 )
                {
                  if ( !LODWORD(v55->max_length) )
LABEL_124:
                    sub_21FFED4(ta_5__4);
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v55->m_Items[0], v54);
                  goto LABEL_58;
                }
              }
            }
          }
        }
      }
    }
LABEL_123:
    sub_21FFECC(ta_5__4, method);
  }
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields._startTime_5__5) >= 3.0 )
    {
      if ( _4__this )
      {
        isClick = _4__this->fields.isClick;
        goto LABEL_105;
      }
    }
    else if ( _4__this )
    {
      goto LABEL_104;
    }
    goto LABEL_123;
  }
  if ( _1__state == 3 )
  {
    this->fields.__1__state = -1;
    goto LABEL_69;
  }
  return (char)ta_5__4;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_PartyEventPointIndicator__DispTotalDropItemCR_d__29_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933D6A & 1) == 0 )
  {
    sub_21FFC50(&PartyEventPointIndicator___c_TypeInfo);
    byte_5933D6A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PartyEventPointIndicator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyEventPointIndicator___c_TypeInfo->static_fields->__9 = (struct PartyEventPointIndicator___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PartyEventPointIndicator___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, entity);
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
    sub_21FFECC(this, 0);
  return entity->fields.type != 15;
}