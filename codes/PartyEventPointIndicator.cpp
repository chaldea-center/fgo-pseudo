void __fastcall PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8250 & 1) == 0 )
  {
    sub_1B640C8(&PartyEventPointIndicator_TypeInfo, v1);
    byte_49F8250 = 1;
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
    sub_1B64324(pointEventTotalTitle1Label);
  }
  UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0LL);
}


System_Collections_IEnumerator_o *__fastcall PartyEventPointIndicator__DispTotalDropItemCR(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F824A & 1) == 0 )
  {
    sub_1B640C8(&PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, method);
    byte_49F824A = 1;
  }
  v4 = sub_1B64314(PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_49F824F & 1) == 0 )
  {
    sub_1B640C8(&Method_PartyEventPointIndicator_OnClick__, method);
    byte_49F824F = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_PartyEventPointIndicator_OnClick__;
    if ( (*((_BYTE *)Method_PartyEventPointIndicator_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_PartyEventPointIndicator_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  }
}


void __fastcall PartyEventPointIndicator__SetInfomation(
        PartyEventPointIndicator_o *this,
        QuestRestrictionInfo_o *questRestrictionInfo,
        System_Int32_array *classIds,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  UnityEngine_GameObject_o *v7; // x0
  const MethodInfo *v8; // x2

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    (int32_t)classIds,
    (int32_t)method);
  v7 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v7 )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(v7, 0, 0LL);
  this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, classIds, v8);
}


bool __fastcall PartyEventPointIndicator__SetRestrictionDisp(
        PartyEventPointIndicator_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w19
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  int32_t baseMessageWidth; // s8
  float v8; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F824E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, restrictionMessage);
    byte_49F824E = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(restrictionMessage, 0LL);
  if ( IsNullOrEmpty )
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
        return !IsNullOrEmpty;
      }
    }
LABEL_14:
    sub_1B64324(restrictionMessageBase);
  }
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text((UILabel_o *)restrictionMessageBase, restrictionMessage, 0LL);
  restrictionMessageBase = (UnityEngine_Transform_o *)this->fields.restrictionMessageLabel;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)restrictionMessageBase, 0LL);
  restrictionMessageBase = this->fields.restrictionMessageBase;
  if ( !restrictionMessageBase )
    goto LABEL_14;
  if ( v8 <= (float)baseMessageWidth )
    v8 = (float)baseMessageWidth;
  v11.fields.x = (float)this->fields.baseMessageWidth / v8;
  v11.fields.y = 1.0;
  v11.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(restrictionMessageBase, v11, 0LL);
  return !IsNullOrEmpty;
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
  System_Array_o *v15; // x0
  System_Char_array *v16; // x22
  __int64 v17; // x1
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Transform_o *v19; // x21
  float titleWidth; // s9
  float v21; // s0
  float v22; // s8
  float x; // s0
  int32_t v24; // s1
  System_String_o *EventUpString; // x20
  UILabel_o *pointEventTotalDataLabel; // x19
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  System_RuntimeFieldHandle_o v30; // 0:w1.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F824C & 1) == 0 )
  {
    sub_1B640C8(&char___TypeInfo, dropItemInfo);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3,
      v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    sub_1B640C8(&StringLiteral_88/*"\r"*/, v8);
    sub_1B640C8(&StringLiteral_10215/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, v9);
    byte_49F824C = 1;
  }
  if ( !dropItemInfo )
  {
    pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
    if ( pointEventTotalTitleBase )
    {
      v31.fields.x = 1.0;
      v31.fields.y = 1.0;
      v31.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v31, 0LL);
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
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format_61389768(
                                                          NameTotalString,
                                                          ItemName,
                                                          ServantName,
                                                          0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  v14 = System_String__Replace_61395016(
          (System_String_o *)pointEventTotalTitleBase,
          (System_String_o *)StringLiteral_88/*"\r"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  v15 = (System_Array_o *)sub_1B64170(char___TypeInfo, 4LL);
  v30.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
  v16 = (System_Char_array *)v15;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v15, v30, 0LL);
  if ( !v14 )
    goto LABEL_42;
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Split_61397780(v14, v16, 0, 0LL);
  if ( !pointEventTotalTitleBase )
    goto LABEL_42;
  klass = pointEventTotalTitleBase[1].klass;
  v19 = pointEventTotalTitleBase;
  titleWidth = (float)this->fields.titleWidth;
  if ( klass )
  {
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
    if ( (_DWORD)klass == 1 )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_42;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( LODWORD(v19[1].klass) )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v19[1].monitor, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        v24 = this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)klass )
    {
      if ( !pointEventTotalTitleBase )
        goto LABEL_42;
      UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, (System_String_o *)v19[1].monitor, 0LL);
      if ( LODWORD(v19[1].klass) > 1 )
      {
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        UILabel__set_text((UILabel_o *)pointEventTotalTitleBase, *(System_String_o **)&v19[1].fields.m_CachedPtr, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle1Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL);
        pointEventTotalTitleBase = (UnityEngine_Transform_o *)this->fields.pointEventTotalTitle2Label;
        if ( !pointEventTotalTitleBase )
          goto LABEL_42;
        v22 = v21;
        x = UILabel__get_printedSize((UILabel_o *)pointEventTotalTitleBase, 0LL).fields.x;
        v24 = this->fields.titleWidth;
        if ( v22 > x )
          x = v22;
LABEL_31:
        if ( x > (float)v24 )
          titleWidth = x;
        goto LABEL_33;
      }
    }
    sub_1B6432C(pointEventTotalTitleBase, v17);
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
  v32.fields.y = 1.0;
  v32.fields.z = 1.0;
  v32.fields.x = (float)this->fields.titleWidth / titleWidth;
  UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v32, 0LL);
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(dropItemInfo, 0LL);
  pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(EventUpString, 0LL);
  pointEventTotalDataLabel = this->fields.pointEventTotalDataLabel;
  if ( ((unsigned __int8)pointEventTotalTitleBase & 1) == 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_10215/*"PARTY_ORGANIZATION_EVENT_TOTAL_DATA"*/, 0LL);
    pointEventTotalTitleBase = (UnityEngine_Transform_o *)System_String__Format(v29, (Il2CppObject *)EventUpString, 0LL);
    if ( pointEventTotalDataLabel )
    {
      v28 = (System_String_o *)pointEventTotalTitleBase;
      goto LABEL_41;
    }
LABEL_42:
    sub_1B64324(pointEventTotalTitleBase);
  }
  if ( !pointEventTotalDataLabel )
    goto LABEL_42;
  v28 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_41:
  UILabel__set_text(pointEventTotalDataLabel, v28, 0LL);
  return 1;
}


void __fastcall PartyEventPointIndicator__SetTotalDropItemList(
        PartyEventPointIndicator_o *this,
        EventPartyMargeUpValInfo_o *margeItemInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *infomationPanel; // x0

  this->fields.eventMargeItemUpValInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventMargeItemUpValInfo, 0, (int32_t)method, v3);
  PartyEventPointIndicator__StopTotalDropItemtweenAlpha(this, v5);
  PartyEventPointIndicator__SetTotalDropItem(this, 0LL, v6);
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
    sub_1B64324(infomationPanel);
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
  __int64 v9; // x1
  struct ServantClassIconComponent_array *v10; // x8
  unsigned __int64 v11; // x23
  int32_t *v12; // x24
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x9
  ServantClassIconComponent_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x0
  PartyEventPointIndicator_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x22
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *v21; // x8
  QuestPhaseEntity_o *v22; // x20
  struct ServantClassIconComponent_array *classIconList; // x9
  unsigned __int64 v24; // x23
  unsigned __int64 max_length; // x8
  struct System_Int32_array *v26; // x8
  unsigned __int64 v27; // x10
  ServantClassIconComponent_o *v28; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  PartyEventPointIndicator_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x22

  if ( (byte_49F824D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, classIds);
    sub_1B640C8(&PartyEventPointIndicator_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49F824D = 1;
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
    levelInfoBase = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !levelInfoBase )
      goto LABEL_58;
    levelInfoBase = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)levelInfoBase,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !levelInfoBase )
      goto LABEL_58;
    Entity = QuestPhaseMaster__GetEntity(
               (QuestPhaseMaster_o *)levelInfoBase,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0LL);
    if ( Entity && (v21 = Entity->fields.classIds, v22 = Entity, v21) && *(_QWORD *)&v21->max_length )
    {
      levelInfoBase = this->fields.classInfoBase;
      if ( levelInfoBase )
      {
        UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v24 = 0LL;
          do
          {
            max_length = classIconList->max_length;
            if ( (__int64)v24 >= (int)max_length )
              return 1;
            if ( v24 >= max_length )
              goto LABEL_59;
            v26 = v22->fields.classIds;
            if ( !v26 )
              break;
            v27 = v26->max_length;
            v28 = classIconList->m_Items[v24];
            if ( (__int64)v24 >= (int)v27 )
              goto LABEL_51;
            if ( v24 >= v27 )
              goto LABEL_59;
            if ( v26->m_Items[v24 + 1] < 1 )
            {
LABEL_51:
              if ( !v28 )
                break;
              ServantClassIconComponent__Clear(v28, 0LL);
            }
            else
            {
              if ( !v24 )
              {
                if ( !v28 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
                v30 = PartyEventPointIndicator_TypeInfo;
                v31 = gameObject;
                if ( !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
                  v30 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v31, v30->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
                v26 = v22->fields.classIds;
                if ( !v26 )
                  break;
              }
              if ( v24 >= v26->max_length )
LABEL_59:
                sub_1B6432C(levelInfoBase, v9);
              if ( !v28 )
                break;
              ServantClassIconComponent__Set(v28, v26->m_Items[v24 + 1], 0LL);
            }
            classIconList = this->fields.classIconList;
            ++v24;
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
    sub_1B64324(levelInfoBase);
  }
  levelInfoBase = this->fields.classInfoBase;
  if ( !levelInfoBase )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(levelInfoBase, 1, 0LL);
  v10 = this->fields.classIconList;
  if ( !v10 )
    goto LABEL_58;
  v11 = 0LL;
  v12 = &classIds->m_Items[1];
  while ( 1 )
  {
    v13 = v10->max_length;
    if ( (__int64)v11 >= (int)v13 )
      return 1;
    if ( v11 >= v13 )
      goto LABEL_59;
    v14 = classIds->max_length;
    v15 = v10->m_Items[v11];
    if ( (__int64)v11 >= (int)v14 )
      goto LABEL_23;
    if ( v11 >= v14 )
      goto LABEL_59;
    if ( v12[v11] < 1 )
    {
LABEL_23:
      if ( !v15 )
        goto LABEL_58;
      ServantClassIconComponent__Clear(v15, 0LL);
    }
    else
    {
      if ( !v11 )
      {
        if ( !v15 )
          goto LABEL_58;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        v17 = PartyEventPointIndicator_TypeInfo;
        v18 = v16;
        if ( !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
          v17 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v18, v17->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
        v14 = classIds->max_length;
      }
      if ( v11 >= v14 )
        goto LABEL_59;
      if ( !v15 )
        goto LABEL_58;
      ServantClassIconComponent__Set(v15, v12[v11], 0LL);
    }
    v10 = this->fields.classIconList;
    ++v11;
    if ( !v10 )
      goto LABEL_58;
  }
}


void __fastcall PartyEventPointIndicator__SetUnknown(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  UnityEngine_GameObject_o *classInfoBase; // x0
  __int64 v7; // x1
  struct ServantClassIconComponent_array *classIconList; // x8
  __int64 v9; // x21
  int max_length; // w9
  Il2CppClass **v11; // x8
  ServantClassIconComponent_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.questRestrictionInfo = 0LL;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, 0, v2, v3);
  classInfoBase = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !classInfoBase
    || (UnityEngine_GameObject__SetActive(classInfoBase, 0, 0LL), (classInfoBase = this->fields.classInfoBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL), (classIconList = this->fields.classIconList) == 0LL) )
  {
LABEL_12:
    sub_1B64324(classInfoBase);
  }
  v9 = 0LL;
  while ( 1 )
  {
    max_length = classIconList->max_length;
    if ( (int)v9 >= max_length )
      break;
    if ( (unsigned int)v9 >= max_length )
      sub_1B6432C(classInfoBase, v7);
    v11 = &classIconList->obj.klass + v9;
    v12 = (ServantClassIconComponent_o *)v11[4];
    if ( v12 )
    {
      if ( (_DWORD)v9 )
      {
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)v11[4], 0LL);
      }
      else
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11[4], 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
        ServantClassIconComponent__Set(v12, 97, 0LL);
      }
      classIconList = this->fields.classIconList;
      ++v9;
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
  Il2CppObject *Component_object; // x19

  if ( (byte_49F824B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F824B = 1;
  }
  infomationPanel = this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)infomationPanel,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B64324(infomationPanel);
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
  struct PartyEventPointIndicator_o *_4__this; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct QuestRestrictionInfo_o *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  PartyEventPointIndicator___c_c *v17; // x0
  System_Func_object__bool__o *_9__28_0; // x22
  Il2CppObject *v19; // x23
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  QuestRestrictionInfo_o *v26; // x8
  PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *v27; // x21
  PartyEventPointIndicator___c_c *v28; // x0
  System_Func_object__bool__o *_9__28_1; // x22
  Il2CppObject *v30; // x23
  struct PartyEventPointIndicator___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_String_array *Messages_40097968; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_String_array *restrictionMessages_5__2; // x8
  int32_t max_length; // w9
  __int64 v44; // x1
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
  int32_t v56; // w2
  int32_t v57; // w3
  UnityEngine_Object_o *ta_5__4; // x22
  __int64 v59; // x2
  UnityEngine_WaitForEndOfFrame_o *v60; // x21
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  UnityEngine_GameObject_o *v65; // x0
  TweenAlpha_o *v66; // x0
  struct TweenAlpha_o **v67; // x21
  int32_t v68; // w2
  int32_t v69; // w3
  UnityEngine_Object_o *v70; // x22
  __int64 v71; // x2
  UnityEngine_WaitForEndOfFrame_o *v72; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  UnityEngine_WaitForEndOfFrame_o *v77; // x20
  ServantStatusBattleListViewItem_o *v78; // x19
  int32_t v79; // w2
  int32_t v80; // w3
  int v81; // w8
  Il2CppObject *wait_5__6; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  Il2CppObject *v84; // x1

  v2 = this;
  if ( (byte_49F8252 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v3);
    sub_1B640C8(&System_Func_RestrictionEntity__bool__TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&string___TypeInfo, v6);
    sub_1B640C8(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__, v7);
    sub_1B640C8(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__, v8);
    sub_1B640C8(&PartyEventPointIndicator___c_TypeInfo, v9);
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)sub_1B640C8(
                                                                      &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                      v10);
    byte_49F8252 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
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
        v15 = _4__this->fields.questRestrictionInfo;
        if ( !v15 )
          goto LABEL_116;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v15->fields.restrictionEntityList;
          v17 = PartyEventPointIndicator___c_TypeInfo;
          if ( !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
            v17 = PartyEventPointIndicator___c_TypeInfo;
          }
          _9__28_0 = (System_Func_object__bool__o *)v17->static_fields->__9__28_0;
          if ( !_9__28_0 )
          {
            if ( !v17->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v17);
              v17 = PartyEventPointIndicator___c_TypeInfo;
            }
            v19 = (Il2CppObject *)v17->static_fields->__9;
            _9__28_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                        System_Func_RestrictionEntity__bool__TypeInfo,
                                                        v13,
                                                        v14);
            System_Func_object__bool____ctor(
              _9__28_0,
              v19,
              Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__,
              0LL);
            static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
            static_fields->__9__28_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_0;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v21, v22);
          }
          v23 = System_Linq_Enumerable__Where_object_(
                  restrictionEntityList,
                  (System_Func_TSource__bool__o *)_9__28_0,
                  (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_object_(
                                                                            v23,
                                                                            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
          v26 = _4__this->fields.questRestrictionInfo;
          if ( !v26 )
            goto LABEL_116;
          v27 = this;
          if ( v26->fields.isUniqueServant && v26->fields.isUniqueIndividuality )
          {
            v28 = PartyEventPointIndicator___c_TypeInfo;
            if ( !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
              v28 = PartyEventPointIndicator___c_TypeInfo;
            }
            _9__28_1 = (System_Func_object__bool__o *)v28->static_fields->__9__28_1;
            if ( !_9__28_1 )
            {
              if ( !v28->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v28);
                v28 = PartyEventPointIndicator___c_TypeInfo;
              }
              v30 = (Il2CppObject *)v28->static_fields->__9;
              _9__28_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                          System_Func_RestrictionEntity__bool__TypeInfo,
                                                          v24,
                                                          v25);
              System_Func_object__bool____ctor(
                _9__28_1,
                v30,
                Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__,
                0LL);
              v31 = PartyEventPointIndicator___c_TypeInfo->static_fields;
              v31->__9__28_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_1;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->__9__28_1, (int32_t)_9__28_1, v32, v33);
            }
            v34 = System_Linq_Enumerable__Where_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                    (System_Func_TSource__bool__o *)_9__28_1,
                    (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
            this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v34,
                                                                              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
            v26 = _4__this->fields.questRestrictionInfo;
            if ( !v26 )
              goto LABEL_116;
            v27 = this;
          }
          Messages_40097968 = QuestRestrictionInfo__GetMessages_40097968(
                                v26,
                                (RestrictionEntity_array *)v27,
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
          Messages_40097968 = QuestRestrictionInfo__GetMessages(
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
        Messages_40097968 = (System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
      }
      v2->fields._restrictionMessages_5__2 = Messages_40097968;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&v2->fields._restrictionMessages_5__2,
        (int32_t)Messages_40097968,
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
                v46 = v2->fields._restrictionMessages_5__2;
                if ( v46 )
                {
                  if ( !v46->max_length )
LABEL_117:
                    sub_1B6432C(this, v44);
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v46->m_Items[0], v45);
                  return 0;
                }
              }
            }
          }
        }
LABEL_116:
        sub_1B64324(this);
      }
      v2->fields._ta_5__4 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__4, 0, v40, v41);
      *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
      break;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_90;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v2->fields._startTime_5__5) >= 3.0 )
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
        PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, v38);
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
        v51 = v2->fields._restrictionMessages_5__2;
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
        v2->fields._ta_5__4 = v54;
        p_ta_5__4 = &v2->fields._ta_5__4;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__4, (int32_t)v54, v56, v57);
        ta_5__4 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(
                                                                          ta_5__4,
                                                                          0LL,
                                                                          0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !*p_ta_5__4 )
            goto LABEL_116;
          (*p_ta_5__4)->fields.method = 6;
          v60 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v38, v59);
          UnityEngine_WaitForEndOfFrame___ctor(v60, 0LL);
          v2->fields._wait_5__6 = v60;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, (int32_t)v60, v61, v62);
LABEL_90:
          this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)v2->fields._ta_5__4;
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
              wait_5__6 = (Il2CppObject *)v2->fields._wait_5__6;
              v2->fields.__2__current = wait_5__6;
              p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B6406C(p__2__current, (int32_t)wait_5__6, v63, v64);
              result = 1;
              *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
              return result;
            }
          }
          v2->fields._wait_5__6 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, 0, v63, v64);
          if ( !_4__this )
            goto LABEL_116;
        }
      }
      while ( _4__this->fields.isClick );
      v2->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_97:
      if ( !_4__this->fields.isClick )
      {
        v77 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v38, v39);
        UnityEngine_WaitForEndOfFrame___ctor(v77, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v77;
        v78 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(v78, (int32_t)v77, v79, v80);
        v81 = 2;
        goto LABEL_115;
      }
LABEL_98:
      if ( !_4__this->fields.isClick )
      {
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)_4__this->fields.infomationPanel;
        if ( !this )
          goto LABEL_116;
        v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v66 = TweenAlpha__Begin(v65, 0.5, 0.0, 0LL);
        v2->fields._ta_5__4 = v66;
        v67 = &v2->fields._ta_5__4;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__4, (int32_t)v66, v68, v69);
        v70 = (UnityEngine_Object_o *)v2->fields._ta_5__4;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    if ( !*v67 )
      goto LABEL_116;
    (*v67)->fields.method = 6;
    v72 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v38, v71);
    UnityEngine_WaitForEndOfFrame___ctor(v72, 0LL);
    v2->fields._wait_5__6 = v72;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, (int32_t)v72, v73, v74);
LABEL_105:
    this = (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)v2->fields._ta_5__4;
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
    v2->fields._wait_5__6 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__6, 0, v75, v76);
  }
  v84 = (Il2CppObject *)v2->fields._wait_5__6;
  v2->fields.__2__current = v84;
  v78 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v78, (int32_t)v84, v75, v76);
  v81 = 3;
LABEL_115:
  *(_DWORD *)&v78[-1].fields.isMine = v81;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_PartyEventPointIndicator__DispTotalDropItemCR_d__28_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8251 & 1) == 0 )
  {
    sub_1B640C8(&PartyEventPointIndicator___c_TypeInfo, v1);
    byte_49F8251 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PartyEventPointIndicator___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PartyEventPointIndicator___c_TypeInfo->static_fields->__9 = (struct PartyEventPointIndicator___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)PartyEventPointIndicator___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return entity->fields.type != 15;
}