void __fastcall PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  if ( (byte_42ADC20 & 1) == 0 )
  {
    sub_B52984(&PartyEventPointIndicator_TypeInfo);
    byte_42ADC20 = 1;
  }
  LODWORD(PartyEventPointIndicator_TypeInfo->static_fields->CLASS_ICON_DEFAULT_POSTION_Y) = (struct PartyEventPointIndicator_StaticFields)1092616192;
}


void __fastcall PartyEventPointIndicator___ctor(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall PartyEventPointIndicator__Awake(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  UIWidget_o *pointEventTotalTitle1Label; // x0
  struct UILabel_o *restrictionMessageLabel; // x8

  pointEventTotalTitle1Label = (UIWidget_o *)this->fields.pointEventTotalTitle1Label;
  if ( !pointEventTotalTitle1Label
    || (restrictionMessageLabel = this->fields.restrictionMessageLabel,
        this->fields.titleWidth = pointEventTotalTitle1Label->fields.mWidth,
        !restrictionMessageLabel)
    || (this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth,
        UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0LL),
        (pointEventTotalTitle1Label = (UIWidget_o *)this->fields.pointEventTotalTitle2Label) == 0LL)
    || (UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0LL),
        (pointEventTotalTitle1Label = (UIWidget_o *)this->fields.restrictionMessageLabel) == 0LL) )
  {
    sub_B52A5C(pointEventTotalTitle1Label, method);
  }
  UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0LL);
}


System_Collections_IEnumerator_o *__fastcall PartyEventPointIndicator__DispTotalDropItemCR(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_42ADC1A & 1) == 0 )
  {
    sub_B52984(&PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo);
    byte_42ADC1A = 1;
  }
  v3 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_B52A54(PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo);
  PartyEventPointIndicator__DispTotalDropItemCR_d__28___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  v3->fields.__4__this = this;
  sub_B52920(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  if ( (byte_42ADC1F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADC1F = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
}


void __fastcall PartyEventPointIndicator__SetInfomation(
        PartyEventPointIndicator_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  const MethodInfo *v9; // x2

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B52920(&this->fields.questRestrictionInfo);
  v8 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v8 )
    sub_B52A5C(0LL, v7);
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, classIds, v9);
}


bool __fastcall PartyEventPointIndicator__SetRestrictionDisp(
        PartyEventPointIndicator_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v9; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADC1E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADC1E = 1;
  }
  if ( System_String__IsNullOrEmpty(restrictionMessage, 0LL) )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v10.fields.x = 1.0;
      v10.fields.y = 1.0;
      v10.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v10, 0LL);
      restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
      if ( restrictionMessageBase )
      {
        UILabel__set_text((UILabel_o *)restrictionMessageBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return 0;
      }
    }
LABEL_13:
    sub_B52A5C(restrictionMessageBase, v5);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0LL);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0LL);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  if ( v9 <= (float)baseMessageWidth )
    v9 = (float)baseMessageWidth;
  v11.fields.x = (float)this->fields.baseMessageWidth / v9;
  v11.fields.y = 1.0;
  v11.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v11, 0LL);
  return 1;
}


bool __fastcall PartyEventPointIndicator__SetTotalDropItem(
        PartyEventPointIndicator_o *this,
        EventMargeItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  System_String_o *NameTotalString; // x21
  Il2CppObject *ItemName; // x22
  Il2CppObject *ServantName; // x0
  UnityEngine_Transform_o *pointEventTotalTitleBase; // x0
  System_String_o *v9; // x21
  System_Array_o *v10; // x22
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v12; // x21
  float titleWidth; // s9
  float v14; // s0
  float v15; // s8
  float x; // s0
  int32_t v17; // s1
  System_String_o *EventUpString; // x20
  UILabel_o *pointEventTotalDataLabel; // x19
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  __int64 v23; // x0
  System_RuntimeFieldHandle_o v24; // 0:w1.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ADC1C & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_68/*"\r"*/);
    sub_B52984(&StringLiteral_10411/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/);
    byte_42ADC1C = 1;
  }
  if ( !dropItemInfo )
  {
    pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
    if ( pointEventTotalTitleBase )
    {
      v25.fields.x = 1.0;
      v25.fields.y = 1.0;
      v25.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v25, 0LL);
      pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
      if ( pointEventTotalTitleBase )
      {
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( pointEventTotalTitleBase )
        {
          UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalDataLabel;
          if ( pointEventTotalTitleBase )
          {
            UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            return 0;
          }
        }
      }
    }
    goto LABEL_43;
  }
  NameTotalString = EventMargeItemUpValInfo__GetNameTotalString(dropItemInfo, 0LL);
  ItemName = (Il2CppObject *)EventMargeItemUpValInfo__GetItemName(dropItemInfo, 0LL);
  ServantName = (Il2CppObject *)EventMargeItemUpValInfo__GetServantName(dropItemInfo, 0LL);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format_44563852(
                                                          NameTotalString,
                                                          ItemName,
                                                          ServantName,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  v9 = System_String__Replace_44575552(
         (System_String_o *)pointEventTotalTitleBase,
         (System_String_o *)StringLiteral_68/*"\r"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  v10 = (System_Array_o *)sub_B5299C(char___TypeInfo, 4LL);
  v24.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v10, v24, 0LL);
  if ( !v9 )
    goto LABEL_43;
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Split_44629100(
                                                          v9,
                                                          (System_Char_array *)v10,
                                                          0,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  klass = pointEventTotalTitleBase[1].klass;
  v12 = pointEventTotalTitleBase;
  titleWidth = (float)this->fields.titleWidth;
  if ( klass )
  {
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
    if ( (_DWORD)klass == 1 )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( LODWORD(v12[1].klass) )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v12[1].monitor, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        v17 = this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)klass )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v12[1].monitor, 0LL);
      if ( LODWORD(v12[1].klass) > 1 )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, *(System_String_o **)&v12[1].fields.m_CachedPtr, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        LODWORD(v14) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        v15 = v14;
        x = UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL).fields.x;
        v17 = this->fields.titleWidth;
        if ( v15 > x )
          x = v15;
LABEL_31:
        if ( x > (float)v17 )
          titleWidth = x;
        goto LABEL_33;
      }
    }
    v23 = sub_B52A88(pointEventTotalTitleBase);
    sub_B52A28(v23, 0LL);
  }
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_33:
  pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  v26.fields.y = 1.0;
  v26.fields.z = 1.0;
  v26.fields.x = (float)this->fields.titleWidth / titleWidth;
  UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v26, 0LL);
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(dropItemInfo, 0LL);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(EventUpString, 0LL);
  pointEventTotalDataLabel = this->fields.pointEventTotalDataLabel;
  if ( ((unsigned __int8)pointEventTotalTitleBase & 1) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10411/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, 0LL);
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format(v22, (Il2CppObject *)EventUpString, 0LL);
    if ( pointEventTotalDataLabel )
    {
      v21 = (System_String_o *)pointEventTotalTitleBase;
      goto LABEL_42;
    }
LABEL_43:
    sub_B52A5C(pointEventTotalTitleBase, dropItemInfo);
  }
  if ( !pointEventTotalDataLabel )
    goto LABEL_43;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_42:
  UILabel__set_text(pointEventTotalDataLabel, v21, 0LL);
  return 1;
}


void __fastcall PartyEventPointIndicator__SetTotalDropItemList(
        PartyEventPointIndicator_o *this,
        EventPartyMargeUpValInfo_o *margeItemInfo,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  UnityEngine_GameObject_o *infomationPanel; // x0

  this->fields.eventMargeItemUpValInfo = 0LL;
  sub_B52920(&this->fields.eventMargeItemUpValInfo);
  PartyEventPointIndicator__StopTotalDropItemtweenAlpha(this, v4);
  PartyEventPointIndicator__SetTotalDropItem(this, 0LL, v5);
  infomationPanel = (UnityEngine_GameObject_o *)this->fields.infomationPanel;
  this->fields.isClick = 1;
  if ( !infomationPanel
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))infomationPanel->klass[1]._1.castClass)(
          infomationPanel,
          infomationPanel->klass[1]._1.declaringType,
          1.0),
        (infomationPanel = this->fields.pointEventBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(infomationPanel, 0, 0LL),
        (infomationPanel = (UnityEngine_GameObject_o *)this->fields.restrictionMessageBase) == 0LL)
    || (infomationPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infomationPanel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(infomationPanel, 0, 0LL), (infomationPanel = this->fields.trendInfoBase) == 0LL) )
  {
    sub_B52A5C(infomationPanel, v6);
  }
  UnityEngine_GameObject__SetActive(infomationPanel, this->fields.isDispTrend, 0LL);
}


bool __fastcall PartyEventPointIndicator__SetTrendDisp(
        PartyEventPointIndicator_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *levelInfoBase; // x0
  struct ServantClassIconComponent_array *v6; // x8
  unsigned __int64 v7; // x23
  int32_t *v8; // x24
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
  unsigned __int64 max_length; // x8
  struct System_Int32_array *v22; // x8
  unsigned __int64 v23; // x10
  ServantClassIconComponent_o *v24; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  PartyEventPointIndicator_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x22
  __int64 v29; // x0

  if ( (byte_42ADC1D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&PartyEventPointIndicator_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADC1D = 1;
  }
  levelInfoBase = this->fields.levelInfoBase;
  if ( !levelInfoBase )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0LL);
  levelInfoBase = (UnityEngine_GameObject_o *)this->fields.levelInfoLabel;
  if ( !levelInfoBase )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)levelInfoBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
  {
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_57;
    levelInfoBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !levelInfoBase )
      goto LABEL_60;
    levelInfoBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)levelInfoBase,
                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !levelInfoBase )
      goto LABEL_60;
    Entity = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)levelInfoBase,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0LL);
    if ( Entity && (v17 = Entity->fields.classIds, v18 = Entity, v17) && *(_QWORD *)&v17->max_length )
    {
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v20 = 0LL;
          do
          {
            max_length = classIconList->max_length;
            if ( (__int64)v20 >= (int)max_length )
              return 1;
            if ( v20 >= max_length )
              goto LABEL_61;
            v22 = v18->fields.classIds;
            if ( !v22 )
              break;
            v23 = v22->max_length;
            v24 = classIconList->m_Items[v20];
            if ( (__int64)v20 >= (int)v23 )
              goto LABEL_53;
            if ( v20 >= v23 )
              goto LABEL_61;
            if ( v22->m_Items[v20 + 1] < 1 )
            {
LABEL_53:
              if ( !v24 )
                break;
              ServantClassIconComponent__Clear(v24, 0LL);
            }
            else
            {
              if ( !v20 )
              {
                if ( !v24 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
                v26 = PartyEventPointIndicator_TypeInfo;
                v27 = gameObject;
                if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
                  v26 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v27, v26->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
                v22 = v18->fields.classIds;
                if ( !v22 )
                  break;
              }
              if ( v20 >= v22->max_length )
              {
LABEL_61:
                v29 = sub_B52A88(levelInfoBase);
                sub_B52A28(v29, 0LL);
              }
              if ( !v24 )
                break;
              ServantClassIconComponent__Set(v24, v22->m_Items[v20 + 1], 0LL);
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
LABEL_57:
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0LL);
        return 0;
      }
    }
LABEL_60:
    sub_B52A5C(levelInfoBase, classIds);
  }
  levelInfoBase = this->fields.classInfoBase;
  if ( !levelInfoBase )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
  v6 = this->fields.classIconList;
  if ( !v6 )
    goto LABEL_60;
  v7 = 0LL;
  v8 = &classIds->m_Items[1];
  while ( 1 )
  {
    v9 = v6->max_length;
    if ( (__int64)v7 >= (int)v9 )
      return 1;
    if ( v7 >= v9 )
      goto LABEL_61;
    v10 = classIds->max_length;
    v11 = v6->m_Items[v7];
    if ( (__int64)v7 >= (int)v10 )
      goto LABEL_24;
    if ( v7 >= v10 )
      goto LABEL_61;
    if ( v8[v7] < 1 )
    {
LABEL_24:
      if ( !v11 )
        goto LABEL_60;
      ServantClassIconComponent__Clear(v11, 0LL);
    }
    else
    {
      if ( !v7 )
      {
        if ( !v11 )
          goto LABEL_60;
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
        v13 = PartyEventPointIndicator_TypeInfo;
        v14 = v12;
        if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
          v13 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v14, v13->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
        v10 = classIds->max_length;
      }
      if ( v7 >= v10 )
        goto LABEL_61;
      if ( !v11 )
        goto LABEL_60;
      ServantClassIconComponent__Set(v11, v8[v7], 0LL);
    }
    v6 = this->fields.classIconList;
    ++v7;
    if ( !v6 )
      goto LABEL_60;
  }
}


void __fastcall PartyEventPointIndicator__SetUnknown(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *classInfoBase; // x0
  struct ServantClassIconComponent_array *classIconList; // x8
  __int64 v7; // x21
  int max_length; // w9
  Il2CppClass **v9; // x8
  ServantClassIconComponent_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x0

  this->fields.questRestrictionInfo = 0LL;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B52920(&this->fields.questRestrictionInfo);
  classInfoBase = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !classInfoBase
    || (UnityEngine_GameObject__SetActive(classInfoBase, 0, 0LL), (classInfoBase = this->fields.classInfoBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL), (classIconList = this->fields.classIconList) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(classInfoBase, v4);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = classIconList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v12 = sub_B52A88(classInfoBase);
      sub_B52A28(v12, 0LL);
    }
    v9 = &classIconList->obj.klass + v7;
    v10 = (ServantClassIconComponent_o *)v9[4];
    if ( v10 )
    {
      if ( (_DWORD)v7 )
      {
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)v9[4], 0LL);
      }
      else
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
        ServantClassIconComponent__Set(v10, 97, 0LL);
      }
      classIconList = this->fields.classIconList;
      ++v7;
      if ( classIconList )
        continue;
    }
    goto LABEL_12;
  }
  this->fields.isDispTrend = 1;
}


void __fastcall PartyEventPointIndicator__StopTotalDropItemtweenAlpha(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  struct UIPanel_o *infomationPanel; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_42ADC1B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADC1B = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)infomationPanel,
                                                      (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  infomationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)infomationPanel & 1) != 0 )
  {
    if ( Component_WebViewObject )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0LL) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B52A5C(infomationPanel, method);
  }
}


void __fastcall PartyEventPointIndicator__DispTotalDropItemCR_d__28___ctor(
        PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall PartyEventPointIndicator__DispTotalDropItemCR_d__28__MoveNext(
        PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *this,
        const MethodInfo *method)
{
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v2; // x19
  struct PartyEventPointIndicator_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct QuestRestrictionInfo_o *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  PartyEventPointIndicator___c_c *v7; // x0
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x22
  Il2CppObject *v10; // x23
  struct PartyEventPointIndicator___c_StaticFields *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  QuestRestrictionInfo_o *v13; // x8
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v14; // x21
  PartyEventPointIndicator___c_c *v15; // x0
  struct PartyEventPointIndicator___c_StaticFields *v16; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x22
  Il2CppObject *v18; // x23
  struct PartyEventPointIndicator___c_StaticFields *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct System_String_array **p_restrictionMessages_5__2; // x21
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **v22; // x21
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **p_ta_5__4; // x21
  System_String_array *Messages; // x0
  int32_t max_length; // w9
  struct System_String_array *v26; // x8
  bool result; // w0
  int dispKind; // w8
  int v29; // w9
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Object_o *v33; // x22
  UnityEngine_WaitForEndOfFrame_o *v34; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *ta_5__4; // x22
  UnityEngine_WaitForEndOfFrame_o *v37; // x22
  UnityEngine_WaitForEndOfFrame_o *v38; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v40; // x0

  v2 = this;
  if ( (byte_42AD400 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_RestrictionEntity___);
    sub_B52984(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__);
    sub_B52984(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__);
    sub_B52984(&PartyEventPointIndicator___c_TypeInfo);
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_42AD400 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_123;
      PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0LL);
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.infomationPanel;
      if ( !this )
        goto LABEL_123;
      ((void (__fastcall *)(PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( !questRestrictionInfo )
      {
        Messages = (System_String_array *)sub_B5299C(string___TypeInfo, 0LL);
LABEL_40:
        v2->fields._restrictionMessages_5__2 = Messages;
        p_restrictionMessages_5__2 = &v2->fields._restrictionMessages_5__2;
        goto LABEL_41;
      }
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                        questRestrictionInfo,
                                                                        0LL);
      v5 = _4__this->fields.questRestrictionInfo;
      if ( !v5 )
        goto LABEL_123;
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        Messages = QuestRestrictionInfo__GetMessages(
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
                     0LL);
        goto LABEL_40;
      }
      restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.restrictionEntityList;
      v7 = PartyEventPointIndicator___c_TypeInfo;
      if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
        v7 = PartyEventPointIndicator___c_TypeInfo;
      }
      static_fields = v7->static_fields;
      _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
        }
        v10 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_0,
          v10,
          Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v11 = PartyEventPointIndicator___c_TypeInfo->static_fields;
        v11->__9__28_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_0;
        sub_B52920(&v11->__9__28_0);
      }
      v12 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              restrictionEntityList,
              (System_Func_TSource__bool__o *)_9__28_0,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v12,
                                                                        (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
      v13 = _4__this->fields.questRestrictionInfo;
      if ( !v13 )
        goto LABEL_123;
      v14 = this;
      if ( v13->fields.isUniqueServant && v13->fields.isUniqueIndividuality )
      {
        v15 = PartyEventPointIndicator___c_TypeInfo;
        if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
          v15 = PartyEventPointIndicator___c_TypeInfo;
        }
        v16 = v15->static_fields;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v16->__9__28_1;
        if ( !_9__28_1 )
        {
          if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v16 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          }
          v18 = (Il2CppObject *)v16->__9;
          _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__28_1,
            v18,
            Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__,
            (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
          v19 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          v19->__9__28_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_1;
          sub_B52920(&v19->__9__28_1);
        }
        v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                (System_Func_TSource__bool__o *)_9__28_1,
                (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                          v20,
                                                                          (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
        v13 = _4__this->fields.questRestrictionInfo;
        if ( !v13 )
          goto LABEL_123;
        v14 = this;
      }
      v2->fields._restrictionMessages_5__2 = QuestRestrictionInfo__GetMessages_34148796(
                                               v13,
                                               (RestrictionEntity_array *)v14,
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
                                               0LL);
      p_restrictionMessages_5__2 = &v2->fields._restrictionMessages_5__2;
LABEL_41:
      sub_B52920(p_restrictionMessages_5__2);
      if ( !*p_restrictionMessages_5__2 )
        goto LABEL_123;
      max_length = (*p_restrictionMessages_5__2)->max_length;
      v2->fields._restrictionCount_5__3 = max_length;
      if ( _4__this->fields.isDispTrend + max_length < 2 )
      {
        if ( max_length != 1 )
        {
          if ( _4__this->fields.isDispTrend )
          {
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.pointEventBase;
            if ( !this )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.trendInfoBase;
            if ( !this )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.restrictionMessageBase;
            if ( !this )
              goto LABEL_123;
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
            if ( !this )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          return 0;
        }
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.pointEventBase;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.trendInfoBase;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.restrictionMessageBase;
            if ( this )
            {
              this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                v26 = *p_restrictionMessages_5__2;
                if ( *p_restrictionMessages_5__2 )
                {
                  if ( !v26->max_length )
                  {
LABEL_124:
                    v40 = sub_B52A88(this);
                    sub_B52A28(v40, 0LL);
                  }
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v26->m_Items[0], 0LL);
                  return 0;
                }
              }
            }
          }
        }
LABEL_123:
        sub_B52A5C(this, method);
      }
      v2->fields._ta_5__4 = 0LL;
      sub_B52920(&v2->fields._ta_5__4);
      *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !_4__this )
            goto LABEL_123;
          PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0LL);
          dispKind = _4__this->fields.dispKind;
          v29 = _4__this->fields.dispNum + 1;
          _4__this->fields.dispNum = v29;
          if ( dispKind == 2 )
          {
            if ( v29 < v2->fields._restrictionCount_5__3 )
              goto LABEL_80;
            if ( !_4__this->fields.isDispTrend )
            {
              dispKind = 2;
              goto LABEL_72;
            }
LABEL_70:
            dispKind = 1;
LABEL_71:
            _4__this->fields.dispKind = dispKind;
            goto LABEL_72;
          }
          if ( dispKind == 1 )
          {
            if ( v2->fields._restrictionCount_5__3 < 1 )
            {
              dispKind = 1;
              goto LABEL_72;
            }
LABEL_67:
            dispKind = 2;
            goto LABEL_71;
          }
          if ( dispKind )
            goto LABEL_73;
          if ( _4__this->fields.isDispTrend )
            goto LABEL_70;
          if ( v2->fields._restrictionCount_5__3 >= 1 )
            goto LABEL_67;
          dispKind = 0;
LABEL_72:
          _4__this->fields.dispNum = 0;
LABEL_73:
          if ( dispKind != 2 )
          {
            if ( dispKind == 1 )
            {
              this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.trendInfoBase;
              if ( !this )
                goto LABEL_123;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.restrictionMessageBase;
              if ( !this )
                goto LABEL_123;
              this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
              if ( !this )
                goto LABEL_123;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.pointEventBase;
              if ( !this )
                goto LABEL_123;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            goto LABEL_87;
          }
LABEL_80:
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.trendInfoBase;
          if ( !this )
            goto LABEL_123;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.restrictionMessageBase;
          if ( !this )
            goto LABEL_123;
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
          if ( !this )
            goto LABEL_123;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.pointEventBase;
          if ( !this )
            goto LABEL_123;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          restrictionMessages_5__2 = v2->fields._restrictionMessages_5__2;
          if ( !restrictionMessages_5__2 )
            goto LABEL_123;
          dispNum = _4__this->fields.dispNum;
          if ( (unsigned int)dispNum >= restrictionMessages_5__2->max_length )
            goto LABEL_124;
          PartyEventPointIndicator__SetRestrictionDisp(_4__this, restrictionMessages_5__2->m_Items[dispNum], 0LL);
LABEL_87:
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.infomationPanel;
          if ( !this )
            goto LABEL_123;
          if ( !_4__this->fields.isClick )
            break;
          ((void (__fastcall *)(PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          _4__this->fields.isClick = 0;
LABEL_102:
          v2->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_103:
          if ( !_4__this->fields.isClick )
          {
            v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v38;
            p__2__current = &v2->fields.__2__current;
            sub_B52920(p__2__current);
            *((_DWORD *)p__2__current - 2) = 2;
            return 1;
          }
LABEL_104:
          if ( !_4__this->fields.isClick )
          {
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.infomationPanel;
            if ( !this )
              goto LABEL_123;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v2->fields._ta_5__4 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL);
            p_ta_5__4 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v2->fields._ta_5__4;
            sub_B52920(&v2->fields._ta_5__4);
            ta_5__4 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(
                                                                              ta_5__4,
                                                                              0LL,
                                                                              0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ta_5__4 )
                goto LABEL_123;
              LODWORD((*p_ta_5__4)->fields.__2__current) = 6;
              v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v37, 0LL);
              v2->fields._wait_5__6 = v37;
              sub_B52920(&v2->fields._wait_5__6);
LABEL_112:
              this = *p_ta_5__4;
              if ( !*p_ta_5__4 )
                goto LABEL_123;
              this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Behaviour__get_enabled(
                                                                                (UnityEngine_Behaviour_o *)this,
                                                                                0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !_4__this )
                  goto LABEL_123;
                if ( !_4__this->fields.isClick )
                {
                  v2->fields.__2__current = (Il2CppObject *)v2->fields._wait_5__6;
                  sub_B52920(&v2->fields.__2__current);
                  v2->fields.__1__state = 3;
                  return 1;
                }
              }
              v2->fields._wait_5__6 = 0LL;
              sub_B52920(&v2->fields._wait_5__6);
            }
          }
        }
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v2->fields._ta_5__4 = TweenAlpha__Begin(v32, 0.5, 1.0, 0LL);
        v22 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v2->fields._ta_5__4;
        sub_B52920(&v2->fields._ta_5__4);
        v33 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
LABEL_101:
        if ( !_4__this->fields.isClick )
          goto LABEL_102;
      }
      if ( !*v22 )
        goto LABEL_123;
      LODWORD((*v22)->fields.__2__current) = 6;
      v34 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v34, 0LL);
      v2->fields._wait_5__6 = v34;
      sub_B52920(&v2->fields._wait_5__6);
LABEL_96:
      this = *v22;
      if ( !*v22 )
        goto LABEL_123;
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Behaviour__get_enabled(
                                                                        (UnityEngine_Behaviour_o *)this,
                                                                        0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_100;
      if ( !_4__this )
        goto LABEL_123;
      if ( _4__this->fields.isClick )
      {
LABEL_100:
        v2->fields._wait_5__6 = 0LL;
        sub_B52920(&v2->fields._wait_5__6);
        if ( !_4__this )
          goto LABEL_123;
        goto LABEL_101;
      }
      v2->fields.__2__current = (Il2CppObject *)v2->fields._wait_5__6;
      sub_B52920(&v2->fields.__2__current);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v22 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v2->fields._ta_5__4;
      v2->fields.__1__state = -1;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v2->fields._startTime_5__5) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_104;
      }
      else if ( _4__this )
      {
        goto LABEL_103;
      }
      goto LABEL_123;
    case 3:
      p_ta_5__4 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v2->fields._ta_5__4;
      v2->fields.__1__state = -1;
      goto LABEL_112;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall PartyEventPointIndicator__DispTotalDropItemCR_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn PartyEventPointIndicator__DispTotalDropItemCR_d__28__System_Collections_IEnumerator_Reset(
        PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_PartyEventPointIndicator__DispTotalDropItemCR_d__28_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall PartyEventPointIndicator__DispTotalDropItemCR_d__28__System_Collections_IEnumerator_get_Current(
        PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall PartyEventPointIndicator__DispTotalDropItemCR_d__28__System_IDisposable_Dispose(
        PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyEventPointIndicator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3FF & 1) == 0 )
  {
    sub_B52984(&PartyEventPointIndicator___c_TypeInfo);
    byte_42AD3FF = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(PartyEventPointIndicator___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyEventPointIndicator___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall PartyEventPointIndicator___c___ctor(PartyEventPointIndicator___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyEventPointIndicator___c___DispTotalDropItemCR_b__28_0(
        PartyEventPointIndicator___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x9

  if ( !entity )
    goto LABEL_7;
  type = entity->fields.type;
  if ( type != 1 )
    return type != 12 && type != 16;
  targetVals2 = entity->fields.targetVals2;
  if ( !targetVals2 )
LABEL_7:
    sub_B52A5C(this, entity);
  if ( *(_QWORD *)&targetVals2->max_length )
    return type != 12 && type != 16;
  return 1;
}


bool __fastcall PartyEventPointIndicator___c___DispTotalDropItemCR_b__28_1(
        PartyEventPointIndicator___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B52A5C(this, 0LL);
  return entity->fields.type != 15;
}