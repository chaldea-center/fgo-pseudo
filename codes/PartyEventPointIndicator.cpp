void __fastcall PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11DF4 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyEventPointIndicator_TypeInfo, v1, v2);
    byte_4B11DF4 = 1;
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
    sub_1BCAA3C(pointEventTotalTitle1Label, method);
  }
  UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0LL);
}


System_Collections_IEnumerator_o *__fastcall PartyEventPointIndicator__DispTotalDropItemCR(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B11DEE & 1) == 0 )
  {
    sub_1BCA7E0(&PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, method, v2);
    byte_4B11DEE = 1;
  }
  v5 = sub_1BCAA2C(PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784(v5 + 32, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B11DF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyEventPointIndicator_OnClick__, method, v2);
    byte_4B11DF3 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v4 = Method_PartyEventPointIndicator_OnClick__;
    if ( (*((_BYTE *)Method_PartyEventPointIndicator_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyEventPointIndicator_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v8 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v8 )
    sub_1BCAA3C(0LL, v7);
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, classIds, v9);
}


bool __fastcall PartyEventPointIndicator__SetRestrictionDisp(
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

  if ( (byte_4B11DF2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, restrictionMessage, method);
    byte_4B11DF2 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(restrictionMessage, 0LL);
  if ( IsNullOrEmpty )
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
        return !IsNullOrEmpty;
      }
    }
LABEL_14:
    sub_1BCAA3C(restrictionMessageBase, v5);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0LL);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0LL);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  if ( v9 <= (float)baseMessageWidth )
    v9 = (float)baseMessageWidth;
  v12.fields.x = (float)this->fields.baseMessageWidth / v9;
  v12.fields.y = 1.0;
  v12.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v12, 0LL);
  return !IsNullOrEmpty;
}


bool __fastcall PartyEventPointIndicator__SetTotalDropItem(
        PartyEventPointIndicator_o *this,
        EventMargeItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *NameTotalString; // x21
  Il2CppObject *ItemName; // x22
  Il2CppObject *ServantName; // x0
  UnityEngine_Transform_o *pointEventTotalTitleBase; // x0
  System_String_o *v19; // x21
  System_Array_o *v20; // x0
  System_Char_array *v21; // x22
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v23; // x21
  float titleWidth; // s9
  float v25; // s0
  float v26; // s8
  float x; // s0
  int32_t v28; // s1
  System_String_o *EventUpString; // x20
  UILabel_o *pointEventTotalDataLabel; // x19
  System_String_o *v32; // x1
  System_String_o *v33; // x0
  System_RuntimeFieldHandle_o v34; // 0:w1.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11DF0 & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, dropItemInfo, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3,
      v7,
      v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_87/*"\r"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_10397/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, v13, v14);
    byte_4B11DF0 = 1;
  }
  if ( !dropItemInfo )
  {
    pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
    if ( pointEventTotalTitleBase )
    {
      v35.fields.x = 1.0;
      v35.fields.y = 1.0;
      v35.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v35, 0LL);
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
    goto LABEL_42;
  }
  NameTotalString = EventMargeItemUpValInfo__GetNameTotalString(dropItemInfo, 0LL);
  ItemName = (Il2CppObject *)EventMargeItemUpValInfo__GetItemName(dropItemInfo, 0LL);
  ServantName = (Il2CppObject *)EventMargeItemUpValInfo__GetServantName(dropItemInfo, 0LL);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format_62415592(
                                                          NameTotalString,
                                                          ItemName,
                                                          ServantName,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  v19 = System_String__Replace_62420848(
          (System_String_o *)pointEventTotalTitleBase,
          (System_String_o *)StringLiteral_87/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v20 = (System_Array_o *)sub_1BCA888(char___TypeInfo, 4LL);
  v34.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
  v21 = (System_Char_array *)v20;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v20, v34, 0LL);
  if ( !v19 )
    goto LABEL_42;
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Split_62423612(v19, v21, 0, 0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  klass = pointEventTotalTitleBase[1].klass;
  v23 = pointEventTotalTitleBase;
  titleWidth = (float)this->fields.titleWidth;
  if ( klass )
  {
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
    if ( (_DWORD)klass == 1 )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_42;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( LODWORD(v23[1].klass) )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v23[1].monitor, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        v28 = this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)klass )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_42;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v23[1].monitor, 0LL);
      if ( LODWORD(v23[1].klass) > 1 )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, *(System_String_o **)&v23[1].fields.m_CachedPtr, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        v26 = v25;
        x = UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL).fields.x;
        v28 = this->fields.titleWidth;
        if ( v26 > x )
          x = v26;
LABEL_31:
        if ( x > (float)v28 )
          titleWidth = x;
        goto LABEL_33;
      }
    }
    sub_1BCAA44(pointEventTotalTitleBase, dropItemInfo);
  }
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_33:
  pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  v36.fields.y = 1.0;
  v36.fields.z = 1.0;
  v36.fields.x = (float)this->fields.titleWidth / titleWidth;
  UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v36, 0LL);
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(dropItemInfo, 0LL);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(EventUpString, 0LL);
  pointEventTotalDataLabel = this->fields.pointEventTotalDataLabel;
  if ( ((unsigned __int8)pointEventTotalTitleBase & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, dropItemInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, 0LL);
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format(v33, (Il2CppObject *)EventUpString, 0LL);
    if ( pointEventTotalDataLabel )
    {
      v32 = (System_String_o *)pointEventTotalTitleBase;
      goto LABEL_41;
    }
LABEL_42:
    sub_1BCAA3C(pointEventTotalTitleBase, dropItemInfo);
  }
  if ( !pointEventTotalDataLabel )
    goto LABEL_42;
  v32 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_41:
  UILabel__set_text(pointEventTotalDataLabel, v32, 0LL);
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
  sub_1BCA784(&this->fields.eventMargeItemUpValInfo, 0LL);
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
    sub_1BCAA3C(infomationPanel, v6);
  }
  UnityEngine_GameObject__SetActive(infomationPanel, this->fields.isDispTrend, 0LL);
}


bool __fastcall PartyEventPointIndicator__SetTrendDisp(
        PartyEventPointIndicator_o *this,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *levelInfoBase; // x0
  struct ServantClassIconComponent_array *v12; // x8
  unsigned __int64 v13; // x23
  int32_t *v14; // x24
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x9
  ServantClassIconComponent_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  PartyEventPointIndicator_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *v24; // x8
  QuestPhaseEntity_o *v25; // x20
  struct ServantClassIconComponent_array *classIconList; // x9
  unsigned __int64 v27; // x23
  unsigned __int64 max_length; // x8
  struct System_Int32_array *v29; // x8
  unsigned __int64 v30; // x10
  ServantClassIconComponent_o *v31; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  PartyEventPointIndicator_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x22

  if ( (byte_4B11DF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, classIds, method);
    sub_1BCA7E0(&PartyEventPointIndicator_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B11DF1 = 1;
  }
  levelInfoBase = this->fields.levelInfoBase;
  if ( !levelInfoBase )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0LL);
  levelInfoBase = (UnityEngine_GameObject_o *)this->fields.levelInfoLabel;
  if ( !levelInfoBase )
    goto LABEL_58;
  UILabel__set_text((UILabel_o *)levelInfoBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
  {
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_55;
    levelInfoBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !levelInfoBase )
      goto LABEL_58;
    levelInfoBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)levelInfoBase,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !levelInfoBase )
      goto LABEL_58;
    Entity = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)levelInfoBase,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0LL);
    if ( Entity && (v24 = Entity->fields.classIds, v25 = Entity, v24) && *(_QWORD *)&v24->max_length )
    {
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v27 = 0LL;
          do
          {
            max_length = classIconList->max_length;
            if ( (__int64)v27 >= (int)max_length )
              return 1;
            if ( v27 >= max_length )
              goto LABEL_59;
            v29 = v25->fields.classIds;
            if ( !v29 )
              break;
            v30 = v29->max_length;
            v31 = classIconList->m_Items[v27];
            if ( (__int64)v27 >= (int)v30 )
              goto LABEL_51;
            if ( v27 >= v30 )
              goto LABEL_59;
            if ( v29->m_Items[v27 + 1] < 1 )
            {
LABEL_51:
              if ( !v31 )
                break;
              ServantClassIconComponent__Clear(v31, 0LL);
            }
            else
            {
              if ( !v27 )
              {
                if ( !v31 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
                v34 = PartyEventPointIndicator_TypeInfo;
                v35 = gameObject;
                if ( !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo, v33);
                  v34 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v35, v34->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
                v29 = v25->fields.classIds;
                if ( !v29 )
                  break;
              }
              if ( v27 >= v29->max_length )
LABEL_59:
                sub_1BCAA44(levelInfoBase, classIds);
              if ( !v31 )
                break;
              ServantClassIconComponent__Set(v31, v29->m_Items[v27 + 1], 0LL);
            }
            classIconList = this->fields.classIconList;
            ++v27;
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
        UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0LL);
        return 0;
      }
    }
LABEL_58:
    sub_1BCAA3C(levelInfoBase, classIds);
  }
  levelInfoBase = this->fields.classInfoBase;
  if ( !levelInfoBase )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
  v12 = this->fields.classIconList;
  if ( !v12 )
    goto LABEL_58;
  v13 = 0LL;
  v14 = &classIds->m_Items[1];
  while ( 1 )
  {
    v15 = v12->max_length;
    if ( (__int64)v13 >= (int)v15 )
      return 1;
    if ( v13 >= v15 )
      goto LABEL_59;
    v16 = classIds->max_length;
    v17 = v12->m_Items[v13];
    if ( (__int64)v13 >= (int)v16 )
      goto LABEL_23;
    if ( v13 >= v16 )
      goto LABEL_59;
    if ( v14[v13] < 1 )
    {
LABEL_23:
      if ( !v17 )
        goto LABEL_58;
      ServantClassIconComponent__Clear(v17, 0LL);
    }
    else
    {
      if ( !v13 )
      {
        if ( !v17 )
          goto LABEL_58;
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
        v20 = PartyEventPointIndicator_TypeInfo;
        v21 = v18;
        if ( !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo, v19);
          v20 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v21, v20->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
        v16 = classIds->max_length;
      }
      if ( v13 >= v16 )
        goto LABEL_59;
      if ( !v17 )
        goto LABEL_58;
      ServantClassIconComponent__Set(v17, v14[v13], 0LL);
    }
    v12 = this->fields.classIconList;
    ++v13;
    if ( !v12 )
      goto LABEL_58;
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

  this->fields.questRestrictionInfo = 0LL;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, 0LL);
  classInfoBase = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !classInfoBase
    || (UnityEngine_GameObject__SetActive(classInfoBase, 0, 0LL), (classInfoBase = this->fields.classInfoBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL), (classIconList = this->fields.classIconList) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(classInfoBase, v4);
  }
  v7 = 0LL;
  while ( 1 )
  {
    max_length = classIconList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1BCAA44(classInfoBase, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UIPanel_o *infomationPanel; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B11DEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11DEF = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  infomationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
  if ( ((unsigned __int8)infomationPanel & 1) != 0 )
  {
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(infomationPanel, method);
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
  __int64 v2; // x2
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct PartyEventPointIndicator_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  struct QuestRestrictionInfo_o *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  PartyEventPointIndicator___c_c *v26; // x0
  System_Func_object__bool__o *_9__28_0; // x22
  Il2CppObject *v28; // x23
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  QuestRestrictionInfo_o *v33; // x8
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v34; // x21
  PartyEventPointIndicator___c_c *v35; // x0
  System_Func_object__bool__o *_9__28_1; // x22
  Il2CppObject *v37; // x23
  struct PartyEventPointIndicator___c_StaticFields *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_String_array *Messages_41169892; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  struct System_String_array *restrictionMessages_5__2; // x8
  int32_t max_length; // w9
  const MethodInfo *v45; // x2
  struct System_String_array *v46; // x8
  bool result; // w0
  int dispKind; // w8
  int v49; // w9
  const MethodInfo *v50; // x2
  struct System_String_array *v51; // x8
  __int64 dispNum; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v54; // x0
  struct TweenAlpha_o **p_ta_5__4; // x21
  __int64 v56; // x1
  UnityEngine_Object_o *ta_5__4; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  UnityEngine_WaitForEndOfFrame_o *v60; // x21
  UnityEngine_GameObject_o *v61; // x0
  TweenAlpha_o *v62; // x0
  struct TweenAlpha_o **v63; // x21
  __int64 v64; // x1
  UnityEngine_Object_o *v65; // x22
  __int64 v66; // x2
  __int64 v67; // x3
  UnityEngine_WaitForEndOfFrame_o *v68; // x21
  UnityEngine_WaitForEndOfFrame_o *v69; // x20
  Il2CppObject **v70; // x19
  int v71; // w8
  Il2CppObject *wait_5__6; // x1
  Il2CppObject **p__2__current; // x19
  Il2CppObject *v74; // x1

  v3 = this;
  if ( (byte_4B11DF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v4, v5);
    sub_1BCA7E0(&System_Func_RestrictionEntity__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&string___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__, v12, v13);
    sub_1BCA7E0(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__, v14, v15);
    sub_1BCA7E0(&PartyEventPointIndicator___c_TypeInfo, v16, v17);
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_1BCA7E0(
                                                                      &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                      v18,
                                                                      v19);
    byte_4B11DF6 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_116;
      PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, method);
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.infomationPanel;
      if ( !this )
        goto LABEL_116;
      ((void (__fastcall *)(PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( questRestrictionInfo )
      {
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)QuestRestrictionInfo__IsUseOldMaster(
                                                                          questRestrictionInfo,
                                                                          0LL);
        v24 = _4__this->fields.questRestrictionInfo;
        if ( !v24 )
          goto LABEL_116;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.restrictionEntityList;
          v26 = PartyEventPointIndicator___c_TypeInfo;
          if ( !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo, method);
            v26 = PartyEventPointIndicator___c_TypeInfo;
          }
          _9__28_0 = (System_Func_object__bool__o *)v26->static_fields->__9__28_0;
          if ( !_9__28_0 )
          {
            if ( !v26->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v26, method);
              v26 = PartyEventPointIndicator___c_TypeInfo;
            }
            v28 = (Il2CppObject *)v26->static_fields->__9;
            _9__28_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                        System_Func_RestrictionEntity__bool__TypeInfo,
                                                        method,
                                                        v22,
                                                        v23);
            System_Func_object__bool____ctor(
              _9__28_0,
              v28,
              Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__,
              0LL);
            static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
            static_fields->__9__28_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_0;
            sub_1BCA784(&static_fields->__9__28_0, _9__28_0);
          }
          v30 = System_Linq_Enumerable__Where_object_(
                  restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__28_0,
                  (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_object_(
                                                                            v30,
                                                                            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          v33 = _4__this->fields.questRestrictionInfo;
          if ( !v33 )
            goto LABEL_116;
          v34 = this;
          if ( v33->fields.isUniqueServant && v33->fields.isUniqueIndividuality )
          {
            v35 = PartyEventPointIndicator___c_TypeInfo;
            if ( !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo, method);
              v35 = PartyEventPointIndicator___c_TypeInfo;
            }
            _9__28_1 = (System_Func_object__bool__o *)v35->static_fields->__9__28_1;
            if ( !_9__28_1 )
            {
              if ( !v35->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v35, method);
                v35 = PartyEventPointIndicator___c_TypeInfo;
              }
              v37 = (Il2CppObject *)v35->static_fields->__9;
              _9__28_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                          System_Func_RestrictionEntity__bool__TypeInfo,
                                                          method,
                                                          v31,
                                                          v32);
              System_Func_object__bool____ctor(
                _9__28_1,
                v37,
                Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__,
                0LL);
              v38 = PartyEventPointIndicator___c_TypeInfo->static_fields;
              v38->__9__28_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_1;
              sub_1BCA784(&v38->__9__28_1, _9__28_1);
            }
            v39 = System_Linq_Enumerable__Where_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                    (System_Func_TSource__bool__o *)_9__28_1,
                    (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v39,
                                                                              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
            v33 = _4__this->fields.questRestrictionInfo;
            if ( !v33 )
              goto LABEL_116;
            v34 = this;
          }
          Messages_41169892 = QuestRestrictionInfo__GetMessages_41169892(
                                v33,
                                (RestrictionEntity_array *)v34,
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
        }
        else
        {
          Messages_41169892 = QuestRestrictionInfo__GetMessages(
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
        }
      }
      else
      {
        Messages_41169892 = (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
      }
      v3->fields._restrictionMessages_5__2 = Messages_41169892;
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_1BCA784(
                                                                        &v3->fields._restrictionMessages_5__2,
                                                                        Messages_41169892);
      restrictionMessages_5__2 = v3->fields._restrictionMessages_5__2;
      if ( !restrictionMessages_5__2 )
        goto LABEL_116;
      max_length = restrictionMessages_5__2->max_length;
      v3->fields._restrictionCount_5__3 = max_length;
      if ( _4__this->fields.isDispTrend + max_length < 2 )
      {
        if ( max_length != 1 )
        {
          if ( _4__this->fields.isDispTrend )
          {
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.pointEventBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.trendInfoBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.restrictionMessageBase;
            if ( !this )
              goto LABEL_116;
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
            if ( !this )
              goto LABEL_116;
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
                v46 = v3->fields._restrictionMessages_5__2;
                if ( v46 )
                {
                  if ( !v46->max_length )
LABEL_117:
                    sub_1BCAA44(this, method);
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v46->m_Items[0], v45);
                  return 0;
                }
              }
            }
          }
        }
LABEL_116:
        sub_1BCAA3C(this, method);
      }
      v3->fields._ta_5__4 = 0LL;
      this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_1BCA784(&v3->fields._ta_5__4, 0LL);
      *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
      break;
    case 1:
      v3->fields.__1__state = -1;
      goto LABEL_90;
    case 2:
      v3->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v3->fields._startTime_5__5) >= 3.0 )
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
      v3->fields.__1__state = -1;
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
        PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, method);
        dispKind = _4__this->fields.dispKind;
        v49 = _4__this->fields.dispNum + 1;
        _4__this->fields.dispNum = v49;
        if ( dispKind == 2 )
        {
          if ( v49 < v3->fields._restrictionCount_5__3 )
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
          if ( v3->fields._restrictionCount_5__3 < 1 )
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
        if ( v3->fields._restrictionCount_5__3 >= 1 )
          goto LABEL_65;
        dispKind = 0;
LABEL_67:
        _4__this->fields.dispNum = 0;
LABEL_68:
        if ( dispKind != 2 )
        {
          if ( dispKind == 1 )
          {
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.trendInfoBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.restrictionMessageBase;
            if ( !this )
              goto LABEL_116;
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.pointEventBase;
            if ( !this )
              goto LABEL_116;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          }
          goto LABEL_82;
        }
LABEL_75:
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.trendInfoBase;
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.restrictionMessageBase;
        if ( !this )
          goto LABEL_116;
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)this,
                                                                          0LL);
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.pointEventBase;
        if ( !this )
          goto LABEL_116;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v51 = v3->fields._restrictionMessages_5__2;
        if ( !v51 )
          goto LABEL_116;
        dispNum = _4__this->fields.dispNum;
        if ( (unsigned int)dispNum >= v51->max_length )
          goto LABEL_117;
        PartyEventPointIndicator__SetRestrictionDisp(_4__this, v51->m_Items[dispNum], v50);
LABEL_82:
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_116;
        if ( _4__this->fields.isClick )
        {
          ((void (__fastcall *)(PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
            this,
            this->klass[1]._1.image,
            1.0);
          _4__this->fields.isClick = 0;
          break;
        }
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v54 = TweenAlpha__Begin(gameObject, 0.5, 1.0, 0LL);
        v3->fields._ta_5__4 = v54;
        p_ta_5__4 = &v3->fields._ta_5__4;
        sub_1BCA784(&v3->fields._ta_5__4, v54);
        ta_5__4 = (UnityEngine_Object_o *)v3->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(
                                                                          ta_5__4,
                                                                          0LL,
                                                                          0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_116;
          (*p_ta_5__4)->fields.method = 6;
          v60 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v58, v59);
          UnityEngine_WaitForEndOfFrame___ctor(v60, 0LL);
          v3->fields._wait_5__6 = v60;
          sub_1BCA784(&v3->fields._wait_5__6, v60);
LABEL_90:
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)v3->fields._ta_5__4;
          if ( !this )
            goto LABEL_116;
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Behaviour__get_enabled(
                                                                            (UnityEngine_Behaviour_o *)this,
                                                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !_4__this )
              goto LABEL_116;
            if ( !_4__this->fields.isClick )
            {
              wait_5__6 = (Il2CppObject *)v3->fields._wait_5__6;
              v3->fields.__2__current = wait_5__6;
              p__2__current = &v3->fields.__2__current;
              sub_1BCA784(p__2__current, wait_5__6);
              result = 1;
              *((_DWORD *)p__2__current - 2) = 1;
              return result;
            }
          }
          v3->fields._wait_5__6 = 0LL;
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_1BCA784(&v3->fields._wait_5__6, 0LL);
          if ( !_4__this )
            goto LABEL_116;
        }
      }
      while ( _4__this->fields.isClick );
      v3->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_97:
      if ( !_4__this->fields.isClick )
      {
        v69 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v41, v42);
        UnityEngine_WaitForEndOfFrame___ctor(v69, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v69;
        v70 = &v3->fields.__2__current;
        sub_1BCA784(v70, v69);
        v71 = 2;
        goto LABEL_115;
      }
LABEL_98:
      if ( !_4__this->fields.isClick )
      {
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_116;
        v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v62 = TweenAlpha__Begin(v61, 0.5, 0.0, 0LL);
        v3->fields._ta_5__4 = v62;
        v63 = &v3->fields._ta_5__4;
        sub_1BCA784(&v3->fields._ta_5__4, v62);
        v65 = (UnityEngine_Object_o *)v3->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(v65, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( !*v63 )
      goto LABEL_116;
    (*v63)->fields.method = 6;
    v68 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v66, v67);
    UnityEngine_WaitForEndOfFrame___ctor(v68, 0LL);
    v3->fields._wait_5__6 = v68;
    sub_1BCA784(&v3->fields._wait_5__6, v68);
LABEL_105:
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)v3->fields._ta_5__4;
    if ( !this )
      goto LABEL_116;
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Behaviour__get_enabled(
                                                                      (UnityEngine_Behaviour_o *)this,
                                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_116;
      if ( !_4__this->fields.isClick )
        break;
    }
    v3->fields._wait_5__6 = 0LL;
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_1BCA784(&v3->fields._wait_5__6, 0LL);
  }
  v74 = (Il2CppObject *)v3->fields._wait_5__6;
  v3->fields.__2__current = v74;
  v70 = &v3->fields.__2__current;
  sub_1BCA784(v70, v74);
  v71 = 3;
LABEL_115:
  *((_DWORD *)v70 - 2) = v71;
  return 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_PartyEventPointIndicator__DispTotalDropItemCR_d__28_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11DF5 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyEventPointIndicator___c_TypeInfo, v1, v2);
    byte_4B11DF5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PartyEventPointIndicator___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PartyEventPointIndicator___c_TypeInfo->static_fields->__9 = (struct PartyEventPointIndicator___c_o *)v4;
  sub_1BCA784(PartyEventPointIndicator___c_TypeInfo->static_fields, v4);
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
    goto LABEL_9;
  type = entity->fields.type;
  if ( type == 12 )
    return 0;
  if ( type != 1 )
    return type != 16;
  targetVals2 = entity->fields.targetVals2;
  if ( !targetVals2 )
LABEL_9:
    sub_1BCAA3C(this, entity);
  if ( *(_QWORD *)&targetVals2->max_length )
    return type != 16;
  return 1;
}


bool __fastcall PartyEventPointIndicator___c___DispTotalDropItemCR_b__28_1(
        PartyEventPointIndicator___c_o *this,
        RestrictionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.type != 15;
}