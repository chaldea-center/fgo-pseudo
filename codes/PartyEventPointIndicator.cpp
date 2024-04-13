void __fastcall PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E63B7 & 1) == 0 )
  {
    sub_B5D5C4(&PartyEventPointIndicator_TypeInfo, v1, v2, v3);
    byte_42E63B7 = 1;
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
    sub_B5D69C(pointEventTotalTitle1Label, method);
  }
  UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0LL);
}


System_Collections_IEnumerator_o *__fastcall PartyEventPointIndicator__DispTotalDropItemCR(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E63B1 & 1) == 0 )
  {
    sub_B5D5C4(&PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63B1 = 1;
  }
  v5 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_B5D694(PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo);
  PartyEventPointIndicator__DispTotalDropItemCR_d__28___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E63B6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63B6 = 1;
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
  sub_B5D560(&this->fields.questRestrictionInfo);
  v8 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v8 )
    sub_B5D69C(0LL, v7);
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, classIds, v9);
}


bool __fastcall PartyEventPointIndicator__SetRestrictionDisp(
        PartyEventPointIndicator_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v10; // s0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E63B5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)restrictionMessage, (_DWORD)method, v3);
    byte_42E63B5 = 1;
  }
  if ( System_String__IsNullOrEmpty(restrictionMessage, 0LL) )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v11.fields.x = 1.0;
      v11.fields.y = 1.0;
      v11.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v11, 0LL);
      restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
      if ( restrictionMessageBase )
      {
        UILabel__set_text((UILabel_o *)restrictionMessageBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        return 0;
      }
    }
LABEL_13:
    sub_B5D69C(restrictionMessageBase, v6);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0LL);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  LODWORD(v10) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0LL);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_13;
  if ( v10 <= (float)baseMessageWidth )
    v10 = (float)baseMessageWidth;
  v12.fields.x = (float)this->fields.baseMessageWidth / v10;
  v12.fields.y = 1.0;
  v12.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v12, 0LL);
  return 1;
}


bool __fastcall PartyEventPointIndicator__SetTotalDropItem(
        PartyEventPointIndicator_o *this,
        EventMargeItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_String_o *NameTotalString; // x21
  Il2CppObject *ItemName; // x22
  Il2CppObject *ServantName; // x0
  UnityEngine_Transform_o *pointEventTotalTitleBase; // x0
  System_String_o *v25; // x21
  System_Array_o *v26; // x22
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v28; // x21
  float titleWidth; // s9
  float v30; // s0
  float v31; // s8
  float x; // s0
  int32_t v33; // s1
  System_String_o *EventUpString; // x20
  UILabel_o *pointEventTotalDataLabel; // x19
  System_String_o *v37; // x1
  System_String_o *v38; // x0
  __int64 v39; // x0
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E63B3 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)dropItemInfo, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3,
      v9,
      v10,
      v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_68/*"\r"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_10453/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, v18, v19, v20);
    byte_42E63B3 = 1;
  }
  if ( !dropItemInfo )
  {
    pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
    if ( pointEventTotalTitleBase )
    {
      v41.fields.x = 1.0;
      v41.fields.y = 1.0;
      v41.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v41, 0LL);
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
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format_44573324(
                                                          NameTotalString,
                                                          ItemName,
                                                          ServantName,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  v25 = System_String__Replace_44585024(
          (System_String_o *)pointEventTotalTitleBase,
          (System_String_o *)StringLiteral_68/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v26 = (System_Array_o *)sub_B5D5DC(char___TypeInfo, 4LL);
  v40.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v26, v40, 0LL);
  if ( !v25 )
    goto LABEL_43;
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Split_44638572(
                                                          v25,
                                                          (System_Char_array *)v26,
                                                          0,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_43;
  klass = pointEventTotalTitleBase[1].klass;
  v28 = pointEventTotalTitleBase;
  titleWidth = (float)this->fields.titleWidth;
  if ( klass )
  {
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
    if ( (_DWORD)klass == 1 )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( LODWORD(v28[1].klass) )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v28[1].monitor, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        v33 = this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)klass )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_43;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v28[1].monitor, 0LL);
      if ( LODWORD(v28[1].klass) > 1 )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, *(System_String_o **)&v28[1].fields.m_CachedPtr, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_43;
        v31 = v30;
        x = UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL).fields.x;
        v33 = this->fields.titleWidth;
        if ( v31 > x )
          x = v31;
LABEL_31:
        if ( x > (float)v33 )
          titleWidth = x;
        goto LABEL_33;
      }
    }
    v39 = sub_B5D6C8(pointEventTotalTitleBase);
    sub_B5D668(v39, 0LL);
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
  v42.fields.y = 1.0;
  v42.fields.z = 1.0;
  v42.fields.x = (float)this->fields.titleWidth / titleWidth;
  UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v42, 0LL);
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
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_10453/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, 0LL);
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format(v38, (Il2CppObject *)EventUpString, 0LL);
    if ( pointEventTotalDataLabel )
    {
      v37 = (System_String_o *)pointEventTotalTitleBase;
      goto LABEL_42;
    }
LABEL_43:
    sub_B5D69C(pointEventTotalTitleBase, dropItemInfo);
  }
  if ( !pointEventTotalDataLabel )
    goto LABEL_43;
  v37 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_42:
  UILabel__set_text(pointEventTotalDataLabel, v37, 0LL);
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
  sub_B5D560(&this->fields.eventMargeItemUpValInfo);
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
    sub_B5D69C(infomationPanel, v6);
  }
  UnityEngine_GameObject__SetActive(infomationPanel, this->fields.isDispTrend, 0LL);
}


bool __fastcall PartyEventPointIndicator__SetTrendDisp(
        PartyEventPointIndicator_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *levelInfoBase; // x0
  struct ServantClassIconComponent_array *v16; // x8
  unsigned __int64 v17; // x23
  int32_t *v18; // x24
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x9
  ServantClassIconComponent_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  PartyEventPointIndicator_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *v27; // x8
  QuestPhaseEntity_o *v28; // x20
  struct ServantClassIconComponent_array *classIconList; // x9
  unsigned __int64 v30; // x23
  unsigned __int64 max_length; // x8
  struct System_Int32_array *v32; // x8
  unsigned __int64 v33; // x10
  ServantClassIconComponent_o *v34; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  PartyEventPointIndicator_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x22
  __int64 v39; // x0

  if ( (byte_42E63B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)classIds, (_DWORD)method, v3);
    sub_B5D5C4(&PartyEventPointIndicator_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E63B4 = 1;
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
    levelInfoBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !levelInfoBase )
      goto LABEL_60;
    levelInfoBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)levelInfoBase,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !levelInfoBase )
      goto LABEL_60;
    Entity = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)levelInfoBase,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0LL);
    if ( Entity && (v27 = Entity->fields.classIds, v28 = Entity, v27) && *(_QWORD *)&v27->max_length )
    {
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v30 = 0LL;
          do
          {
            max_length = classIconList->max_length;
            if ( (__int64)v30 >= (int)max_length )
              return 1;
            if ( v30 >= max_length )
              goto LABEL_61;
            v32 = v28->fields.classIds;
            if ( !v32 )
              break;
            v33 = v32->max_length;
            v34 = classIconList->m_Items[v30];
            if ( (__int64)v30 >= (int)v33 )
              goto LABEL_53;
            if ( v30 >= v33 )
              goto LABEL_61;
            if ( v32->m_Items[v30 + 1] < 1 )
            {
LABEL_53:
              if ( !v34 )
                break;
              ServantClassIconComponent__Clear(v34, 0LL);
            }
            else
            {
              if ( !v30 )
              {
                if ( !v34 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
                v36 = PartyEventPointIndicator_TypeInfo;
                v37 = gameObject;
                if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
                  v36 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v37, v36->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
                v32 = v28->fields.classIds;
                if ( !v32 )
                  break;
              }
              if ( v30 >= v32->max_length )
              {
LABEL_61:
                v39 = sub_B5D6C8(levelInfoBase);
                sub_B5D668(v39, 0LL);
              }
              if ( !v34 )
                break;
              ServantClassIconComponent__Set(v34, v32->m_Items[v30 + 1], 0LL);
            }
            classIconList = this->fields.classIconList;
            ++v30;
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
    sub_B5D69C(levelInfoBase, classIds);
  }
  levelInfoBase = this->fields.classInfoBase;
  if ( !levelInfoBase )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
  v16 = this->fields.classIconList;
  if ( !v16 )
    goto LABEL_60;
  v17 = 0LL;
  v18 = &classIds->m_Items[1];
  while ( 1 )
  {
    v19 = v16->max_length;
    if ( (__int64)v17 >= (int)v19 )
      return 1;
    if ( v17 >= v19 )
      goto LABEL_61;
    v20 = classIds->max_length;
    v21 = v16->m_Items[v17];
    if ( (__int64)v17 >= (int)v20 )
      goto LABEL_24;
    if ( v17 >= v20 )
      goto LABEL_61;
    if ( v18[v17] < 1 )
    {
LABEL_24:
      if ( !v21 )
        goto LABEL_60;
      ServantClassIconComponent__Clear(v21, 0LL);
    }
    else
    {
      if ( !v17 )
      {
        if ( !v21 )
          goto LABEL_60;
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
        v23 = PartyEventPointIndicator_TypeInfo;
        v24 = v22;
        if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
          v23 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v24, v23->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
        v20 = classIds->max_length;
      }
      if ( v17 >= v20 )
        goto LABEL_61;
      if ( !v21 )
        goto LABEL_60;
      ServantClassIconComponent__Set(v21, v18[v17], 0LL);
    }
    v16 = this->fields.classIconList;
    ++v17;
    if ( !v16 )
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
  sub_B5D560(&this->fields.questRestrictionInfo);
  classInfoBase = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !classInfoBase
    || (UnityEngine_GameObject__SetActive(classInfoBase, 0, 0LL), (classInfoBase = this->fields.classInfoBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL), (classIconList = this->fields.classIconList) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(classInfoBase, v4);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = classIconList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
    {
      v12 = sub_B5D6C8(classInfoBase);
      sub_B5D668(v12, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UIPanel_o *infomationPanel; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_42E63B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E63B2 = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)infomationPanel,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
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
    sub_B5D69C(infomationPanel, method);
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
  int v2; // w2
  __int64 v3; // x3
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct PartyEventPointIndicator_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct QuestRestrictionInfo_o *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  PartyEventPointIndicator___c_c *v36; // x0
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x22
  Il2CppObject *v39; // x23
  struct PartyEventPointIndicator___c_StaticFields *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  QuestRestrictionInfo_o *v42; // x8
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v43; // x21
  PartyEventPointIndicator___c_c *v44; // x0
  struct PartyEventPointIndicator___c_StaticFields *v45; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x22
  Il2CppObject *v47; // x23
  struct PartyEventPointIndicator___c_StaticFields *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  struct System_String_array **p_restrictionMessages_5__2; // x21
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **v51; // x21
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **p_ta_5__4; // x21
  System_String_array *Messages; // x0
  int32_t max_length; // w9
  struct System_String_array *v55; // x8
  bool result; // w0
  int dispKind; // w8
  int v58; // w9
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Object_o *v62; // x22
  UnityEngine_WaitForEndOfFrame_o *v63; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *ta_5__4; // x22
  UnityEngine_WaitForEndOfFrame_o *v66; // x22
  UnityEngine_WaitForEndOfFrame_o *v67; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v69; // x0

  v4 = this;
  if ( (byte_42E5A71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_RestrictionEntity__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_RestrictionEntity__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&string___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__, v20, v21, v22);
    sub_B5D5C4(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__, v23, v24, v25);
    sub_B5D5C4(&PartyEventPointIndicator___c_TypeInfo, v26, v27, v28);
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_B5D5C4(
                                                                      &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                      v29,
                                                                      v30,
                                                                      v31);
    byte_42E5A71 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
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
        Messages = (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
LABEL_40:
        v4->fields._restrictionMessages_5__2 = Messages;
        p_restrictionMessages_5__2 = &v4->fields._restrictionMessages_5__2;
        goto LABEL_41;
      }
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                        questRestrictionInfo,
                                                                        0LL);
      v34 = _4__this->fields.questRestrictionInfo;
      if ( !v34 )
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
      restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v34->fields.restrictionEntityList;
      v36 = PartyEventPointIndicator___c_TypeInfo;
      if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
        v36 = PartyEventPointIndicator___c_TypeInfo;
      }
      static_fields = v36->static_fields;
      _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
        }
        v39 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_0,
          v39,
          Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v40 = PartyEventPointIndicator___c_TypeInfo->static_fields;
        v40->__9__28_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_0;
        sub_B5D560(&v40->__9__28_0);
      }
      v41 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              restrictionEntityList,
              (System_Func_TSource__bool__o *)_9__28_0,
              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                        v41,
                                                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
      v42 = _4__this->fields.questRestrictionInfo;
      if ( !v42 )
        goto LABEL_123;
      v43 = this;
      if ( v42->fields.isUniqueServant && v42->fields.isUniqueIndividuality )
      {
        v44 = PartyEventPointIndicator___c_TypeInfo;
        if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
          v44 = PartyEventPointIndicator___c_TypeInfo;
        }
        v45 = v44->static_fields;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v45->__9__28_1;
        if ( !_9__28_1 )
        {
          if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v44);
            v45 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          }
          v47 = (Il2CppObject *)v45->__9;
          _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_RestrictionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__28_1,
            v47,
            Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_RestrictionEntity__bool___ctor__);
          v48 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          v48->__9__28_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_1;
          sub_B5D560(&v48->__9__28_1);
        }
        v49 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                (System_Func_TSource__bool__o *)_9__28_1,
                (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                          v49,
                                                                          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
        v42 = _4__this->fields.questRestrictionInfo;
        if ( !v42 )
          goto LABEL_123;
        v43 = this;
      }
      v4->fields._restrictionMessages_5__2 = QuestRestrictionInfo__GetMessages_34260560(
                                               v42,
                                               (RestrictionEntity_array *)v43,
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
      p_restrictionMessages_5__2 = &v4->fields._restrictionMessages_5__2;
LABEL_41:
      sub_B5D560(p_restrictionMessages_5__2);
      if ( !*p_restrictionMessages_5__2 )
        goto LABEL_123;
      max_length = (*p_restrictionMessages_5__2)->max_length;
      v4->fields._restrictionCount_5__3 = max_length;
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
                v55 = *p_restrictionMessages_5__2;
                if ( *p_restrictionMessages_5__2 )
                {
                  if ( !v55->max_length )
                  {
LABEL_124:
                    v69 = sub_B5D6C8(this);
                    sub_B5D668(v69, 0LL);
                  }
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v55->m_Items[0], 0LL);
                  return 0;
                }
              }
            }
          }
        }
LABEL_123:
        sub_B5D69C(this, method);
      }
      v4->fields._ta_5__4 = 0LL;
      sub_B5D560(&v4->fields._ta_5__4);
      *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !_4__this )
            goto LABEL_123;
          PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0LL);
          dispKind = _4__this->fields.dispKind;
          v58 = _4__this->fields.dispNum + 1;
          _4__this->fields.dispNum = v58;
          if ( dispKind == 2 )
          {
            if ( v58 < v4->fields._restrictionCount_5__3 )
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
            if ( v4->fields._restrictionCount_5__3 < 1 )
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
          if ( v4->fields._restrictionCount_5__3 >= 1 )
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
          restrictionMessages_5__2 = v4->fields._restrictionMessages_5__2;
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
          v4->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_103:
          if ( !_4__this->fields.isClick )
          {
            v67 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v67, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v67;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
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
            v4->fields._ta_5__4 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL);
            p_ta_5__4 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v4->fields._ta_5__4;
            sub_B5D560(&v4->fields._ta_5__4);
            ta_5__4 = (UnityEngine_Object_o *)v4->fields._ta_5__4;
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
              v66 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v66, 0LL);
              v4->fields._wait_5__6 = v66;
              sub_B5D560(&v4->fields._wait_5__6);
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
                  v4->fields.__2__current = (Il2CppObject *)v4->fields._wait_5__6;
                  sub_B5D560(&v4->fields.__2__current);
                  v4->fields.__1__state = 3;
                  return 1;
                }
              }
              v4->fields._wait_5__6 = 0LL;
              sub_B5D560(&v4->fields._wait_5__6);
            }
          }
        }
        v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v4->fields._ta_5__4 = TweenAlpha__Begin(v61, 0.5, 1.0, 0LL);
        v51 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v4->fields._ta_5__4;
        sub_B5D560(&v4->fields._ta_5__4);
        v62 = (UnityEngine_Object_o *)v4->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
LABEL_101:
        if ( !_4__this->fields.isClick )
          goto LABEL_102;
      }
      if ( !*v51 )
        goto LABEL_123;
      LODWORD((*v51)->fields.__2__current) = 6;
      v63 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v63, 0LL);
      v4->fields._wait_5__6 = v63;
      sub_B5D560(&v4->fields._wait_5__6);
LABEL_96:
      this = *v51;
      if ( !*v51 )
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
        v4->fields._wait_5__6 = 0LL;
        sub_B5D560(&v4->fields._wait_5__6);
        if ( !_4__this )
          goto LABEL_123;
        goto LABEL_101;
      }
      v4->fields.__2__current = (Il2CppObject *)v4->fields._wait_5__6;
      sub_B5D560(&v4->fields.__2__current);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    case 1:
      v51 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v4->fields._ta_5__4;
      v4->fields.__1__state = -1;
      goto LABEL_96;
    case 2:
      v4->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._startTime_5__5) >= 3.0 )
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
      p_ta_5__4 = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o **)&v4->fields._ta_5__4;
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_PartyEventPointIndicator__DispTotalDropItemCR_d__28_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A70 & 1) == 0 )
  {
    sub_B5D5C4(&PartyEventPointIndicator___c_TypeInfo, v1, v2, v3);
    byte_42E5A70 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(PartyEventPointIndicator___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct PartyEventPointIndicator___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, entity);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.type != 15;
}