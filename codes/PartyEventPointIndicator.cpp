void __fastcall PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4185230 & 1) == 0 )
  {
    sub_B2C35C(&PartyEventPointIndicator_TypeInfo, v1);
    byte_4185230 = 1;
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
    sub_B2C434(pointEventTotalTitle1Label, method);
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

  if ( (byte_418522A & 1) == 0 )
  {
    sub_B2C35C(&PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, method);
    byte_418522A = 1;
  }
  v3 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_B2C42C(PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo);
  PartyEventPointIndicator__DispTotalDropItemCR_d__28___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  if ( (byte_418522F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418522F = 1;
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
  sub_B2C2F8(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v8 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v8 )
    sub_B2C434(0LL, v7);
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

  if ( (byte_418522E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, restrictionMessage);
    byte_418522E = 1;
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
    sub_B2C434(restrictionMessageBase, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *NameTotalString; // x21
  Il2CppObject *ItemName; // x22
  Il2CppObject *ServantName; // x0
  UnityEngine_Transform_o *pointEventTotalTitleBase; // x0
  System_String_o *v14; // x21
  System_Array_o *v15; // x22
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v17; // x21
  float titleWidth; // s9
  float v19; // s0
  float v20; // s8
  float x; // s0
  int32_t v22; // s1
  System_String_o *EventUpString; // x20
  UILabel_o *pointEventTotalDataLabel; // x19
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  __int64 v28; // x0
  System_RuntimeFieldHandle_o v29; // 0:w1.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418522C & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, dropItemInfo);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3,
      v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    sub_B2C35C(&StringLiteral_67/*"\r"*/, v8);
    sub_B2C35C(&StringLiteral_10347/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, v9);
    byte_418522C = 1;
  }
  if ( !dropItemInfo )
  {
    pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
    if ( pointEventTotalTitleBase )
    {
      v30.fields.x = 1.0;
      v30.fields.y = 1.0;
      v30.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v30, 0LL);
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
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format_44301068(
                                                          NameTotalString,
                                                          ItemName,
                                                          ServantName,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  v14 = System_String__Replace_44312768(
          (System_String_o *)pointEventTotalTitleBase,
          (System_String_o *)StringLiteral_67/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v15 = (System_Array_o *)sub_B2C374(char___TypeInfo, 4LL);
  v29.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v15, v29, 0LL);
  if ( !v14 )
    goto LABEL_43;
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Split_44366316(
                                                          v14,
                                                          (System_Char_array *)v15,
                                                          0,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  klass = pointEventTotalTitleBase[1].klass;
  v17 = pointEventTotalTitleBase;
  titleWidth = (float)this->fields.titleWidth;
  if ( klass )
  {
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
    if ( (_DWORD)klass == 1 )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( LODWORD(v17[1].klass) )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v17[1].monitor, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        v22 = this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)klass )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v17[1].monitor, 0LL);
      if ( LODWORD(v17[1].klass) > 1 )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, *(System_String_o **)&v17[1].fields.m_CachedPtr, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        v20 = v19;
        x = UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL).fields.x;
        v22 = this->fields.titleWidth;
        if ( v20 > x )
          x = v20;
LABEL_31:
        if ( x > (float)v22 )
          titleWidth = x;
        goto LABEL_33;
      }
    }
    v28 = sub_B2C460(pointEventTotalTitleBase);
    sub_B2C400(v28, 0LL);
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
  v31.fields.y = 1.0;
  v31.fields.z = 1.0;
  v31.fields.x = (float)this->fields.titleWidth / titleWidth;
  UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v31, 0LL);
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
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_10347/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, 0LL);
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format(v27, (Il2CppObject *)EventUpString, 0LL);
    if ( pointEventTotalDataLabel )
    {
      v26 = (System_String_o *)pointEventTotalTitleBase;
      goto LABEL_42;
    }
LABEL_43:
    sub_B2C434(pointEventTotalTitleBase, dropItemInfo);
  }
  if ( !pointEventTotalDataLabel )
    goto LABEL_43;
  v26 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_42:
  UILabel__set_text(pointEventTotalDataLabel, v26, 0LL);
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
  sub_B2C2F8(&this->fields.eventMargeItemUpValInfo, 0LL);
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
    sub_B2C434(infomationPanel, v6);
  }
  UnityEngine_GameObject__SetActive(infomationPanel, this->fields.isDispTrend, 0LL);
}


bool __fastcall PartyEventPointIndicator__SetTrendDisp(
        PartyEventPointIndicator_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *levelInfoBase; // x0
  struct ServantClassIconComponent_array *v9; // x8
  unsigned __int64 v10; // x23
  int32_t *v11; // x24
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x9
  ServantClassIconComponent_o *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  PartyEventPointIndicator_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *v20; // x8
  QuestPhaseEntity_o *v21; // x20
  struct ServantClassIconComponent_array *classIconList; // x9
  unsigned __int64 v23; // x23
  unsigned __int64 max_length; // x8
  struct System_Int32_array *v25; // x8
  unsigned __int64 v26; // x10
  ServantClassIconComponent_o *v27; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  PartyEventPointIndicator_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x22
  __int64 v32; // x0

  if ( (byte_418522D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, classIds);
    sub_B2C35C(&PartyEventPointIndicator_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418522D = 1;
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
    levelInfoBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !levelInfoBase )
      goto LABEL_60;
    levelInfoBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)levelInfoBase,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !levelInfoBase )
      goto LABEL_60;
    Entity = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)levelInfoBase,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0LL);
    if ( Entity && (v20 = Entity->fields.classIds, v21 = Entity, v20) && *(_QWORD *)&v20->max_length )
    {
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v23 = 0LL;
          do
          {
            max_length = classIconList->max_length;
            if ( (__int64)v23 >= (int)max_length )
              return 1;
            if ( v23 >= max_length )
              goto LABEL_61;
            v25 = v21->fields.classIds;
            if ( !v25 )
              break;
            v26 = v25->max_length;
            v27 = classIconList->m_Items[v23];
            if ( (__int64)v23 >= (int)v26 )
              goto LABEL_53;
            if ( v23 >= v26 )
              goto LABEL_61;
            if ( v25->m_Items[v23 + 1] < 1 )
            {
LABEL_53:
              if ( !v27 )
                break;
              ServantClassIconComponent__Clear(v27, 0LL);
            }
            else
            {
              if ( !v23 )
              {
                if ( !v27 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
                v29 = PartyEventPointIndicator_TypeInfo;
                v30 = gameObject;
                if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
                  v29 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v30, v29->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
                v25 = v21->fields.classIds;
                if ( !v25 )
                  break;
              }
              if ( v23 >= v25->max_length )
              {
LABEL_61:
                v32 = sub_B2C460(levelInfoBase);
                sub_B2C400(v32, 0LL);
              }
              if ( !v27 )
                break;
              ServantClassIconComponent__Set(v27, v25->m_Items[v23 + 1], 0LL);
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
LABEL_57:
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0LL);
        return 0;
      }
    }
LABEL_60:
    sub_B2C434(levelInfoBase, classIds);
  }
  levelInfoBase = this->fields.classInfoBase;
  if ( !levelInfoBase )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
  v9 = this->fields.classIconList;
  if ( !v9 )
    goto LABEL_60;
  v10 = 0LL;
  v11 = &classIds->m_Items[1];
  while ( 1 )
  {
    v12 = v9->max_length;
    if ( (__int64)v10 >= (int)v12 )
      return 1;
    if ( v10 >= v12 )
      goto LABEL_61;
    v13 = classIds->max_length;
    v14 = v9->m_Items[v10];
    if ( (__int64)v10 >= (int)v13 )
      goto LABEL_24;
    if ( v10 >= v13 )
      goto LABEL_61;
    if ( v11[v10] < 1 )
    {
LABEL_24:
      if ( !v14 )
        goto LABEL_60;
      ServantClassIconComponent__Clear(v14, 0LL);
    }
    else
    {
      if ( !v10 )
      {
        if ( !v14 )
          goto LABEL_60;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        v16 = PartyEventPointIndicator_TypeInfo;
        v17 = v15;
        if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
          v16 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v17, v16->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
        v13 = classIds->max_length;
      }
      if ( v10 >= v13 )
        goto LABEL_61;
      if ( !v14 )
        goto LABEL_60;
      ServantClassIconComponent__Set(v14, v11[v10], 0LL);
    }
    v9 = this->fields.classIconList;
    ++v10;
    if ( !v9 )
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
  sub_B2C2F8(&this->fields.questRestrictionInfo, 0LL);
  classInfoBase = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !classInfoBase
    || (UnityEngine_GameObject__SetActive(classInfoBase, 0, 0LL), (classInfoBase = this->fields.classInfoBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL), (classIconList = this->fields.classIconList) == 0LL) )
  {
LABEL_12:
    sub_B2C434(classInfoBase, v4);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = classIconList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v12 = sub_B2C460(classInfoBase);
      sub_B2C400(v12, 0LL);
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
  __int64 v3; // x1
  struct UIPanel_o *infomationPanel; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_418522B & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418522B = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)infomationPanel,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
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
    sub_B2C434(infomationPanel, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct PartyEventPointIndicator_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct QuestRestrictionInfo_o *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  PartyEventPointIndicator___c_c *v16; // x0
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x22
  Il2CppObject *v19; // x23
  struct PartyEventPointIndicator___c_StaticFields *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  QuestRestrictionInfo_o *v22; // x8
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v23; // x21
  PartyEventPointIndicator___c_c *v24; // x0
  struct PartyEventPointIndicator___c_StaticFields *v25; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x22
  Il2CppObject *v27; // x23
  struct PartyEventPointIndicator___c_StaticFields *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_String_array *Messages_31222988; // x1
  struct System_String_array **p_restrictionMessages_5__2; // x21
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **v32; // x21
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **p_ta_5__4; // x21
  System_String_array *Messages; // x0
  int32_t max_length; // w9
  struct System_String_array *v36; // x8
  bool result; // w0
  int dispKind; // w8
  int v39; // w9
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *v42; // x0
  TweenAlpha_o *v43; // x0
  UnityEngine_Object_o *v44; // x22
  UnityEngine_WaitForEndOfFrame_o *v45; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v47; // x0
  UnityEngine_Object_o *ta_5__4; // x22
  UnityEngine_WaitForEndOfFrame_o *v49; // x22
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  Il2CppObject **p__2__current; // x19
  Il2CppObject *wait_5__6; // x1
  Il2CppObject *v53; // x1
  __int64 v54; // x0

  v2 = this;
  if ( (byte_418527E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v3);
    sub_B2C35C(&Method_System_Func_RestrictionEntity__bool___ctor__, v4);
    sub_B2C35C(&System_Func_RestrictionEntity__bool__TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&string___TypeInfo, v7);
    sub_B2C35C(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__, v8);
    sub_B2C35C(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__, v9);
    sub_B2C35C(&PartyEventPointIndicator___c_TypeInfo, v10);
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_B2C35C(
                                                                      &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                      v11);
    byte_418527E = 1;
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
        Messages = (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
LABEL_40:
        Messages_31222988 = Messages;
        v2->fields._restrictionMessages_5__2 = Messages;
        p_restrictionMessages_5__2 = &v2->fields._restrictionMessages_5__2;
        goto LABEL_41;
      }
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                        questRestrictionInfo,
                                                                        0LL);
      v14 = _4__this->fields.questRestrictionInfo;
      if ( !v14 )
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
      restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.restrictionEntityList;
      v16 = PartyEventPointIndicator___c_TypeInfo;
      if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
        v16 = PartyEventPointIndicator___c_TypeInfo;
      }
      static_fields = v16->static_fields;
      _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
        }
        v19 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_0,
          v19,
          Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__,
          (const MethodInfo_2711C04 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v20 = PartyEventPointIndicator___c_TypeInfo->static_fields;
        v20->__9__28_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_0;
        sub_B2C2F8(&v20->__9__28_0, _9__28_0);
      }
      v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              restrictionEntityList,
              (System_Func_TSource__bool__o *)_9__28_0,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v21,
                                                                        (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
      v22 = _4__this->fields.questRestrictionInfo;
      if ( !v22 )
        goto LABEL_123;
      v23 = this;
      if ( v22->fields.isUniqueServant && v22->fields.isUniqueIndividuality )
      {
        v24 = PartyEventPointIndicator___c_TypeInfo;
        if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
          v24 = PartyEventPointIndicator___c_TypeInfo;
        }
        v25 = v24->static_fields;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v25->__9__28_1;
        if ( !_9__28_1 )
        {
          if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v24);
            v25 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          }
          v27 = (Il2CppObject *)v25->__9;
          _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__28_1,
            v27,
            Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__,
            (const MethodInfo_2711C04 *)Method_System_Func_RestrictionEntity__bool___ctor__);
          v28 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          v28->__9__28_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_1;
          sub_B2C2F8(&v28->__9__28_1, _9__28_1);
        }
        v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                (System_Func_TSource__bool__o *)_9__28_1,
                (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                          v29,
                                                                          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
        v22 = _4__this->fields.questRestrictionInfo;
        if ( !v22 )
          goto LABEL_123;
        v23 = this;
      }
      Messages_31222988 = QuestRestrictionInfo__GetMessages_31222988(
                            v22,
                            (RestrictionEntity_array *)v23,
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
      v2->fields._restrictionMessages_5__2 = Messages_31222988;
      p_restrictionMessages_5__2 = &v2->fields._restrictionMessages_5__2;
LABEL_41:
      sub_B2C2F8(p_restrictionMessages_5__2, Messages_31222988);
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
                v36 = *p_restrictionMessages_5__2;
                if ( *p_restrictionMessages_5__2 )
                {
                  if ( !v36->max_length )
                  {
LABEL_124:
                    v54 = sub_B2C460(this);
                    sub_B2C400(v54, 0LL);
                  }
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v36->m_Items[0], 0LL);
                  return 0;
                }
              }
            }
          }
        }
LABEL_123:
        sub_B2C434(this, method);
      }
      v2->fields._ta_5__4 = 0LL;
      sub_B2C2F8(&v2->fields._ta_5__4, 0LL);
      *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !_4__this )
            goto LABEL_123;
          PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0LL);
          dispKind = _4__this->fields.dispKind;
          v39 = _4__this->fields.dispNum + 1;
          _4__this->fields.dispNum = v39;
          if ( dispKind == 2 )
          {
            if ( v39 < v2->fields._restrictionCount_5__3 )
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
            v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v50, 0LL);
            v2->fields.__2__current = (Il2CppObject *)v50;
            p__2__current = &v2->fields.__2__current;
            sub_B2C2F8(p__2__current, v50);
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
            v47 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL);
            v2->fields._ta_5__4 = v47;
            p_ta_5__4 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v2->fields._ta_5__4;
            sub_B2C2F8(&v2->fields._ta_5__4, v47);
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
              v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v49, 0LL);
              v2->fields._wait_5__6 = v49;
              sub_B2C2F8(&v2->fields._wait_5__6, v49);
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
                  wait_5__6 = (Il2CppObject *)v2->fields._wait_5__6;
                  v2->fields.__2__current = wait_5__6;
                  sub_B2C2F8(&v2->fields.__2__current, wait_5__6);
                  v2->fields.__1__state = 3;
                  return 1;
                }
              }
              v2->fields._wait_5__6 = 0LL;
              sub_B2C2F8(&v2->fields._wait_5__6, 0LL);
            }
          }
        }
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v43 = TweenAlpha__Begin(v42, 0.5, 1.0, 0LL);
        v2->fields._ta_5__4 = v43;
        v32 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v2->fields._ta_5__4;
        sub_B2C2F8(&v2->fields._ta_5__4, v43);
        v44 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
LABEL_101:
        if ( !_4__this->fields.isClick )
          goto LABEL_102;
      }
      if ( !*v32 )
        goto LABEL_123;
      LODWORD((*v32)->fields.__2__current) = 6;
      v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
      v2->fields._wait_5__6 = v45;
      sub_B2C2F8(&v2->fields._wait_5__6, v45);
LABEL_96:
      this = *v32;
      if ( !*v32 )
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
        sub_B2C2F8(&v2->fields._wait_5__6, 0LL);
        if ( !_4__this )
          goto LABEL_123;
        goto LABEL_101;
      }
      v53 = (Il2CppObject *)v2->fields._wait_5__6;
      v2->fields.__2__current = v53;
      sub_B2C2F8(&v2->fields.__2__current, v53);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v32 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v2->fields._ta_5__4;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_PartyEventPointIndicator__DispTotalDropItemCR_d__28_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x0

  if ( (byte_418527D & 1) == 0 )
  {
    sub_B2C35C(&PartyEventPointIndicator___c_TypeInfo, v1);
    byte_418527D = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(PartyEventPointIndicator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyEventPointIndicator___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, entity);
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
    sub_B2C434(this, 0LL);
  return entity->fields.type != 15;
}