void __fastcall PartyEventPointIndicator___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8042 & 1) == 0 )
  {
    sub_B16FFC(&PartyEventPointIndicator_TypeInfo, v1);
    byte_40F8042 = 1;
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
  UIWidget_o *pointEventTotalTitle2Label; // x0
  UIWidget_o *v6; // x0

  pointEventTotalTitle1Label = (UIWidget_o *)this->fields.pointEventTotalTitle1Label;
  if ( !pointEventTotalTitle1Label
    || (restrictionMessageLabel = this->fields.restrictionMessageLabel,
        this->fields.titleWidth = pointEventTotalTitle1Label->fields.mWidth,
        !restrictionMessageLabel)
    || (this->fields.baseMessageWidth = restrictionMessageLabel->fields.mWidth,
        UIWidget__set_width(pointEventTotalTitle1Label, 1000, 0LL),
        (pointEventTotalTitle2Label = (UIWidget_o *)this->fields.pointEventTotalTitle2Label) == 0LL)
    || (UIWidget__set_width(pointEventTotalTitle2Label, 1000, 0LL),
        (v6 = (UIWidget_o *)this->fields.restrictionMessageLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UIWidget__set_width(v6, 1000, 0LL);
}


System_Collections_IEnumerator_o *__fastcall PartyEventPointIndicator__DispTotalDropItemCR(
        PartyEventPointIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F803C & 1) == 0 )
  {
    sub_B16FFC(&PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, method);
    byte_40F803C = 1;
  }
  v6 = sub_B170CC(PartyEventPointIndicator__DispTotalDropItemCR_d__28_TypeInfo, method, v2, v3, v4);
  PartyEventPointIndicator__DispTotalDropItemCR_d__28___ctor(
    (PartyEventPointIndicator__DispTotalDropItemCR_d__28_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall PartyEventPointIndicator__OnClick(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  if ( (byte_40F8041 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8041 = 1;
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  UnityEngine_GameObject_o *v11; // x0
  const MethodInfo *v12; // x2

  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    (System_String_array **)classIds,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v11 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v11 )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v11, 0, 0LL);
  this->fields.isDispTrend = PartyEventPointIndicator__SetTrendDisp(this, classIds, v12);
}


bool __fastcall PartyEventPointIndicator__SetRestrictionDisp(
        PartyEventPointIndicator_o *this,
        System_String_o *restrictionMessage,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *restrictionMessageBase; // x0
  UILabel_o *restrictionMessageLabel; // x0
  UILabel_o *v8; // x0
  int32_t baseMessageWidth; // s8
  UILabel_o *v10; // x0
  float v11; // s0
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8040 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, restrictionMessage);
    byte_40F8040 = 1;
  }
  if ( System_String__IsNullOrEmpty(restrictionMessage, 0LL) )
  {
    restrictionMessageBase = this->fields.restrictionMessageBase;
    if ( restrictionMessageBase )
    {
      v13.fields.x = 1.0;
      v13.fields.y = 1.0;
      v13.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(restrictionMessageBase, v13, 0LL);
      restrictionMessageLabel = this->fields.restrictionMessageLabel;
      if ( restrictionMessageLabel )
      {
        UILabel__set_text(restrictionMessageLabel, (System_String_o *)StringLiteral_1, 0LL);
        return 0;
      }
    }
LABEL_13:
    sub_B170D4();
  }
  v8 = this->fields.restrictionMessageLabel;
  if ( !v8 )
    goto LABEL_13;
  baseMessageWidth = this->fields.baseMessageWidth;
  UILabel__set_text(v8, restrictionMessage, 0LL);
  v10 = this->fields.restrictionMessageLabel;
  if ( !v10 )
    goto LABEL_13;
  LODWORD(v11) = *(_QWORD *)&UILabel__get_printedSize(v10, 0LL);
  v12 = this->fields.restrictionMessageBase;
  if ( !v12 )
    goto LABEL_13;
  if ( v11 <= (float)baseMessageWidth )
    v11 = (float)baseMessageWidth;
  v14.fields.x = (float)this->fields.baseMessageWidth / v11;
  v14.fields.y = 1.0;
  v14.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(v12, v14, 0LL);
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
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  __int64 v15; // x2
  System_Array_o *v16; // x22
  System_String_array *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  System_String_array *v21; // x21
  float titleWidth; // s9
  UILabel_o *v23; // x0
  UILabel_o *v24; // x0
  UILabel_o *v25; // x0
  float v26; // s0
  UILabel_o *v27; // x0
  float v28; // s8
  float x; // s0
  int32_t v30; // s1
  UnityEngine_Transform_o *pointEventTotalTitleBase; // x0
  UILabel_o *pointEventTotalTitle1Label; // x0
  UILabel_o *pointEventTotalTitle2Label; // x0
  UILabel_o *pointEventTotalDataLabel; // x0
  UILabel_o *v36; // x0
  UILabel_o *v37; // x0
  UILabel_o *v38; // x0
  UILabel_o *v39; // x0
  UnityEngine_Transform_o *v40; // x0
  System_String_o *EventUpString; // x20
  bool IsNullOrEmpty; // w0
  UILabel_o *v43; // x19
  System_String_o *v44; // x1
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_RuntimeFieldHandle_o v47; // 0:w1.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F803E & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, dropItemInfo);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3,
      v6);
    sub_B16FFC(&StringLiteral_1, v7);
    sub_B16FFC(&StringLiteral_67, v8);
    sub_B16FFC(&StringLiteral_10314, v9);
    byte_40F803E = 1;
  }
  if ( !dropItemInfo )
  {
    pointEventTotalTitleBase = this->fields.pointEventTotalTitleBase;
    if ( pointEventTotalTitleBase )
    {
      v48.fields.x = 1.0;
      v48.fields.y = 1.0;
      v48.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(pointEventTotalTitleBase, v48, 0LL);
      pointEventTotalTitle1Label = this->fields.pointEventTotalTitle1Label;
      if ( pointEventTotalTitle1Label )
      {
        UILabel__set_text(pointEventTotalTitle1Label, (System_String_o *)StringLiteral_1, 0LL);
        pointEventTotalTitle2Label = this->fields.pointEventTotalTitle2Label;
        if ( pointEventTotalTitle2Label )
        {
          UILabel__set_text(pointEventTotalTitle2Label, (System_String_o *)StringLiteral_1, 0LL);
          pointEventTotalDataLabel = this->fields.pointEventTotalDataLabel;
          if ( pointEventTotalDataLabel )
          {
            UILabel__set_text(pointEventTotalDataLabel, (System_String_o *)StringLiteral_1, 0LL);
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
  v13 = System_String__Format_43739268(NameTotalString, ItemName, ServantName, 0LL);
  if ( !v13 )
    goto LABEL_43;
  v14 = System_String__Replace_43750968(
          v13,
          (System_String_o *)StringLiteral_67,
          (System_String_o *)StringLiteral_1,
          0LL);
  v16 = (System_Array_o *)sub_B17014(char___TypeInfo, 4LL, v15);
  v47.fields.value = Field__PrivateImplementationDetails__307012A837186614D001E192B1D70E6A03D8FC10730FB392A7536E08456B2EF3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v16, v47, 0LL);
  if ( !v14 )
    goto LABEL_43;
  v17 = System_String__Split_43804516(v14, (System_Char_array *)v16, 0, 0LL);
  if ( !v17 )
    goto LABEL_43;
  v20 = *(_QWORD *)&v17->max_length;
  v21 = v17;
  titleWidth = (float)this->fields.titleWidth;
  if ( v20 )
  {
    v23 = this->fields.pointEventTotalTitle1Label;
    if ( (_DWORD)v20 == 1 )
    {
      if ( !v23 )
        goto LABEL_43;
      UILabel__set_text(v23, (System_String_o *)StringLiteral_1, 0LL);
      if ( v21->max_length )
      {
        v38 = this->fields.pointEventTotalTitle2Label;
        if ( !v38 )
          goto LABEL_43;
        UILabel__set_text(v38, v21->m_Items[0], 0LL);
        v39 = this->fields.pointEventTotalTitle2Label;
        if ( !v39 )
          goto LABEL_43;
        LODWORD(x) = *(_QWORD *)&UILabel__get_printedSize(v39, 0LL);
        v30 = this->fields.titleWidth;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)v20 )
    {
      if ( !v23 )
        goto LABEL_43;
      UILabel__set_text(v23, v21->m_Items[0], 0LL);
      if ( v21->max_length > 1 )
      {
        v24 = this->fields.pointEventTotalTitle2Label;
        if ( !v24 )
          goto LABEL_43;
        UILabel__set_text(v24, v21->m_Items[1], 0LL);
        v25 = this->fields.pointEventTotalTitle1Label;
        if ( !v25 )
          goto LABEL_43;
        LODWORD(v26) = *(_QWORD *)&UILabel__get_printedSize(v25, 0LL);
        v27 = this->fields.pointEventTotalTitle2Label;
        if ( !v27 )
          goto LABEL_43;
        v28 = v26;
        x = UILabel__get_printedSize(v27, 0LL).fields.x;
        v30 = this->fields.titleWidth;
        if ( v28 > x )
          x = v28;
LABEL_31:
        if ( x > (float)v30 )
          titleWidth = x;
        goto LABEL_33;
      }
    }
    sub_B17100(v23, v18, v19);
    sub_B170A0();
  }
  v36 = this->fields.pointEventTotalTitle1Label;
  if ( !v36 )
    goto LABEL_43;
  UILabel__set_text(v36, (System_String_o *)StringLiteral_1, 0LL);
  v37 = this->fields.pointEventTotalTitle2Label;
  if ( !v37 )
    goto LABEL_43;
  UILabel__set_text(v37, (System_String_o *)StringLiteral_1, 0LL);
LABEL_33:
  v40 = this->fields.pointEventTotalTitleBase;
  if ( !v40 )
    goto LABEL_43;
  v49.fields.y = 1.0;
  v49.fields.z = 1.0;
  v49.fields.x = (float)this->fields.titleWidth / titleWidth;
  UnityEngine_Transform__set_localScale(v40, v49, 0LL);
  EventUpString = EventMargeItemUpValInfo__GetEventUpString(dropItemInfo, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(EventUpString, 0LL);
  v43 = this->fields.pointEventTotalDataLabel;
  if ( !IsNullOrEmpty )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_10314, 0LL);
    v46 = System_String__Format(v45, (Il2CppObject *)EventUpString, 0LL);
    if ( v43 )
    {
      v44 = v46;
      goto LABEL_42;
    }
LABEL_43:
    sub_B170D4();
  }
  if ( !v43 )
    goto LABEL_43;
  v44 = (System_String_o *)StringLiteral_1;
LABEL_42:
  UILabel__set_text(v43, v44, 0LL);
  return 1;
}


void __fastcall PartyEventPointIndicator__SetTotalDropItemList(
        PartyEventPointIndicator_o *this,
        EventPartyMargeUpValInfo_o *margeItemInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct UIPanel_o *infomationPanel; // x0
  UnityEngine_GameObject_o *pointEventBase; // x0
  UnityEngine_Component_o *restrictionMessageBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *trendInfoBase; // x0

  this->fields.eventMargeItemUpValInfo = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventMargeItemUpValInfo,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PartyEventPointIndicator__StopTotalDropItemtweenAlpha(this, v9);
  PartyEventPointIndicator__SetTotalDropItem(this, 0LL, v10);
  infomationPanel = this->fields.infomationPanel;
  this->fields.isClick = 1;
  if ( !infomationPanel
    || (((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))infomationPanel->klass->vtable._8_set_alpha.method)(
          infomationPanel,
          infomationPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0),
        (pointEventBase = this->fields.pointEventBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(pointEventBase, 0, 0LL),
        (restrictionMessageBase = (UnityEngine_Component_o *)this->fields.restrictionMessageBase) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(restrictionMessageBase, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (trendInfoBase = this->fields.trendInfoBase) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(trendInfoBase, this->fields.isDispTrend, 0LL);
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
  UILabel_o *levelInfoLabel; // x0
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct ServantClassIconComponent_array *v14; // x8
  unsigned __int64 v15; // x23
  int32_t *v16; // x24
  unsigned __int64 v17; // x9
  unsigned __int64 v18; // x9
  ServantClassIconComponent_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  PartyEventPointIndicator_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x22
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *v27; // x8
  QuestPhaseEntity_o *v28; // x20
  UnityEngine_GameObject_o *classInfoBase; // x0
  struct ServantClassIconComponent_array *classIconList; // x9
  unsigned __int64 v31; // x23
  unsigned __int64 max_length; // x8
  struct System_Int32_array *v33; // x8
  unsigned __int64 v34; // x10
  ServantClassIconComponent_o *v35; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  PartyEventPointIndicator_c *v37; // x8
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_GameObject_o *v39; // x0

  if ( (byte_40F803F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, classIds);
    sub_B16FFC(&PartyEventPointIndicator_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40F803F = 1;
  }
  levelInfoBase = this->fields.levelInfoBase;
  if ( !levelInfoBase )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(levelInfoBase, 0, 0LL);
  levelInfoLabel = this->fields.levelInfoLabel;
  if ( !levelInfoLabel )
    goto LABEL_60;
  UILabel__set_text(levelInfoLabel, (System_String_o *)StringLiteral_1, 0LL);
  if ( !classIds || !*(_QWORD *)&classIds->max_length )
  {
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_57;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_60;
    MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !MasterData_WarQuestSelectionMaster )
      goto LABEL_60;
    Entity = QuestPhaseMaster__GetEntity(
               MasterData_WarQuestSelectionMaster,
               questRestrictionInfo->fields.questId,
               questRestrictionInfo->fields.questPhase,
               0LL);
    if ( Entity && (v27 = Entity->fields.classIds, v28 = Entity, v27) && *(_QWORD *)&v27->max_length )
    {
      classInfoBase = this->fields.classInfoBase;
      if ( classInfoBase )
      {
        UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL);
        classIconList = this->fields.classIconList;
        if ( classIconList )
        {
          v31 = 0LL;
          do
          {
            max_length = classIconList->max_length;
            if ( (__int64)v31 >= (int)max_length )
              return 1;
            if ( v31 >= max_length )
              goto LABEL_61;
            v33 = v28->fields.classIds;
            if ( !v33 )
              break;
            v34 = v33->max_length;
            v35 = classIconList->m_Items[v31];
            if ( (__int64)v31 >= (int)v34 )
              goto LABEL_53;
            if ( v31 >= v34 )
              goto LABEL_61;
            if ( v33->m_Items[v31 + 1] < 1 )
            {
LABEL_53:
              if ( !v35 )
                break;
              ServantClassIconComponent__Clear(v35, 0LL);
            }
            else
            {
              if ( !v31 )
              {
                if ( !v35 )
                  break;
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
                v37 = PartyEventPointIndicator_TypeInfo;
                v38 = gameObject;
                if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
                  v37 = PartyEventPointIndicator_TypeInfo;
                }
                GameObjectExtensions__SetLocalPositionY(v38, v37->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
                v33 = v28->fields.classIds;
                if ( !v33 )
                  break;
              }
              if ( v31 >= v33->max_length )
              {
LABEL_61:
                sub_B17100(v11, v12, v13);
                sub_B170A0();
              }
              if ( !v35 )
                break;
              ServantClassIconComponent__Set(v35, v33->m_Items[v31 + 1], 0LL);
            }
            classIconList = this->fields.classIconList;
            ++v31;
          }
          while ( classIconList );
        }
      }
    }
    else
    {
LABEL_57:
      v39 = this->fields.classInfoBase;
      if ( v39 )
      {
        UnityEngine_GameObject__SetActive(v39, 0, 0LL);
        return 0;
      }
    }
LABEL_60:
    sub_B170D4();
  }
  v10 = this->fields.classInfoBase;
  if ( !v10 )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(v10, 1, 0LL);
  v14 = this->fields.classIconList;
  if ( !v14 )
    goto LABEL_60;
  v15 = 0LL;
  v16 = &classIds->m_Items[1];
  while ( 1 )
  {
    v17 = v14->max_length;
    if ( (__int64)v15 >= (int)v17 )
      return 1;
    if ( v15 >= v17 )
      goto LABEL_61;
    v18 = classIds->max_length;
    v19 = v14->m_Items[v15];
    if ( (__int64)v15 >= (int)v18 )
      goto LABEL_24;
    if ( v15 >= v18 )
      goto LABEL_61;
    if ( v16[v15] < 1 )
    {
LABEL_24:
      if ( !v19 )
        goto LABEL_60;
      ServantClassIconComponent__Clear(v19, 0LL);
    }
    else
    {
      if ( !v15 )
      {
        if ( !v19 )
          goto LABEL_60;
        v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
        v21 = PartyEventPointIndicator_TypeInfo;
        v22 = v20;
        if ( (BYTE3(PartyEventPointIndicator_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator_TypeInfo);
          v21 = PartyEventPointIndicator_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionY(v22, v21->static_fields->CLASS_ICON_DEFAULT_POSTION_Y, 0LL);
        v18 = classIds->max_length;
      }
      if ( v15 >= v18 )
        goto LABEL_61;
      if ( !v19 )
        goto LABEL_60;
      ServantClassIconComponent__Set(v19, v16[v15], 0LL);
    }
    v14 = this->fields.classIconList;
    ++v15;
    if ( !v14 )
      goto LABEL_60;
  }
}


void __fastcall PartyEventPointIndicator__SetUnknown(PartyEventPointIndicator_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *classInfoBase; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct ServantClassIconComponent_array *classIconList; // x8
  __int64 v16; // x21
  int max_length; // w9
  Il2CppClass **v18; // x8
  ServantClassIconComponent_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  this->fields.questRestrictionInfo = 0LL;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRestrictionInfo, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (UnityEngine_GameObject_o *)*(p_questRestrictionInfo - 8);
  if ( !v10
    || (UnityEngine_GameObject__SetActive(v10, 0, 0LL), (classInfoBase = this->fields.classInfoBase) == 0LL)
    || (UnityEngine_GameObject__SetActive(classInfoBase, 1, 0LL), (classIconList = this->fields.classIconList) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  v16 = 0LL;
  while ( 1 )
  {
    max_length = classIconList->max_length;
    if ( (int)v16 >= max_length )
      break;
    if ( (unsigned int)v16 >= max_length )
    {
      sub_B17100(v12, v13, v14);
      sub_B170A0();
    }
    v18 = &classIconList->obj.klass + v16;
    v19 = (ServantClassIconComponent_o *)v18[4];
    if ( v19 )
    {
      if ( (_DWORD)v16 )
      {
        ServantClassIconComponent__Clear((ServantClassIconComponent_o *)v18[4], 0LL);
      }
      else
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18[4], 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
        ServantClassIconComponent__Set(v19, 97, 0LL);
      }
      classIconList = this->fields.classIconList;
      ++v16;
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
  UnityEngine_Component_o *infomationPanel; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x19

  if ( (byte_40F803D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F803D = 1;
  }
  infomationPanel = (UnityEngine_Component_o *)this->fields.infomationPanel;
  if ( !infomationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         infomationPanel,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
    {
      if ( UnityEngine_Behaviour__get_enabled(Component_WebViewObject, 0LL) )
        UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
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
  struct UIPanel_o *infomationPanel; // x0
  __int64 v14; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsUseOldMaster; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct QuestRestrictionInfo_o *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *restrictionEntityList; // x21
  PartyEventPointIndicator___c_c *v23; // x0
  struct PartyEventPointIndicator___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_0; // x22
  Il2CppObject *v26; // x23
  struct PartyEventPointIndicator___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  QuestRestrictionInfo_o *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  PartyEventPointIndicator___c_c *v42; // x0
  struct PartyEventPointIndicator___c_StaticFields *v43; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__28_1; // x22
  Il2CppObject *v45; // x23
  struct PartyEventPointIndicator___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v54; // x0
  struct System_String_array *Messages_31240276; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct System_String_array **p_restrictionMessages_5__2; // x21
  UnityEngine_Behaviour_o **v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  UnityEngine_Behaviour_o **p_ta_5__4; // x21
  struct System_String_array *Messages; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int32_t max_length; // w9
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  struct System_String_array *v84; // x8
  UnityEngine_GameObject_o *pointEventBase; // x0
  UnityEngine_GameObject_o *trendInfoBase; // x0
  UnityEngine_Component_o *restrictionMessageBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool result; // w0
  int dispKind; // w8
  int32_t v91; // w9
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_Component_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Component_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x0
  struct System_String_array *restrictionMessages_5__2; // x8
  __int64 dispNum; // x9
  UnityEngine_Component_o *v102; // x0
  UnityEngine_GameObject_o *v103; // x0
  struct TweenAlpha_o *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  UnityEngine_Object_o *v111; // x22
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  UnityEngine_WaitForEndOfFrame_o *v116; // x22
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  struct TweenAlpha_o *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  UnityEngine_Object_o *ta_5__4; // x22
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  UnityEngine_WaitForEndOfFrame_o *v143; // x22
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  UnityEngine_WaitForEndOfFrame_o *v156; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  Il2CppObject *wait_5__6; // x1
  Il2CppObject *v165; // x1

  if ( (byte_40F8368 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_RestrictionEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_RestrictionEntity___, v3);
    sub_B16FFC(&Method_System_Func_RestrictionEntity__bool___ctor__, v4);
    sub_B16FFC(&System_Func_RestrictionEntity__bool__TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&string___TypeInfo, v7);
    sub_B16FFC(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__, v8);
    sub_B16FFC(&Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__, v9);
    sub_B16FFC(&PartyEventPointIndicator___c_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v11);
    byte_40F8368 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_123;
      PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0LL);
      infomationPanel = _4__this->fields.infomationPanel;
      if ( !infomationPanel )
        goto LABEL_123;
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))infomationPanel->klass->vtable._8_set_alpha.method)(
        infomationPanel,
        infomationPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      questRestrictionInfo = _4__this->fields.questRestrictionInfo;
      _4__this->fields.isClick = 1;
      if ( !questRestrictionInfo )
      {
        Messages = (struct System_String_array *)sub_B17014(string___TypeInfo, 0LL, v14);
LABEL_40:
        Messages_31240276 = Messages;
        this->fields._restrictionMessages_5__2 = Messages;
        p_restrictionMessages_5__2 = &this->fields._restrictionMessages_5__2;
        goto LABEL_41;
      }
      IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
      v21 = _4__this->fields.questRestrictionInfo;
      if ( !v21 )
        goto LABEL_123;
      if ( !IsUseOldMaster )
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
      restrictionEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v21->fields.restrictionEntityList;
      v23 = PartyEventPointIndicator___c_TypeInfo;
      if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
        v23 = PartyEventPointIndicator___c_TypeInfo;
      }
      static_fields = v23->static_fields;
      _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__28_0;
      if ( !_9__28_0 )
      {
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          static_fields = PartyEventPointIndicator___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)static_fields->__9;
        _9__28_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                        v17,
                                                                                        v18,
                                                                                        v19,
                                                                                        v20);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__28_0,
          v26,
          Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v27 = PartyEventPointIndicator___c_TypeInfo->static_fields;
        v27->__9__28_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v27->__9__28_0,
          (System_Int32_array **)_9__28_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              restrictionEntityList,
              (System_Func_TSource__bool__o *)_9__28_0,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
      v35 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v34,
              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
      v40 = _4__this->fields.questRestrictionInfo;
      if ( !v40 )
        goto LABEL_123;
      v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
      if ( v40->fields.isUniqueServant && v40->fields.isUniqueIndividuality )
      {
        v42 = PartyEventPointIndicator___c_TypeInfo;
        if ( (BYTE3(PartyEventPointIndicator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyEventPointIndicator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyEventPointIndicator___c_TypeInfo);
          v42 = PartyEventPointIndicator___c_TypeInfo;
        }
        v43 = v42->static_fields;
        _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v43->__9__28_1;
        if ( !_9__28_1 )
        {
          if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v43 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          }
          v45 = (Il2CppObject *)v43->__9;
          _9__28_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                          v36,
                                                                                          v37,
                                                                                          v38,
                                                                                          v39);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__28_1,
            v45,
            Method_PartyEventPointIndicator___c__DispTotalDropItemCR_b__28_1__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionEntity__bool___ctor__);
          v46 = PartyEventPointIndicator___c_TypeInfo->static_fields;
          v46->__9__28_1 = (struct System_Func_RestrictionEntity__bool__o *)_9__28_1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v46->__9__28_1,
            (System_Int32_array **)_9__28_1,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
        }
        v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                v41,
                (System_Func_TSource__bool__o *)_9__28_1,
                (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_RestrictionEntity___);
        v54 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v53,
                (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_RestrictionEntity___);
        v40 = _4__this->fields.questRestrictionInfo;
        if ( !v40 )
          goto LABEL_123;
        v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v54;
      }
      Messages_31240276 = QuestRestrictionInfo__GetMessages_31240276(
                            v40,
                            (RestrictionEntity_array *)v41,
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
      this->fields._restrictionMessages_5__2 = Messages_31240276;
      p_restrictionMessages_5__2 = &this->fields._restrictionMessages_5__2;
LABEL_41:
      sub_B16F98(
        (BattleServantConfConponent_o *)p_restrictionMessages_5__2,
        (System_Int32_array **)Messages_31240276,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      if ( !*p_restrictionMessages_5__2 )
        goto LABEL_123;
      max_length = (*p_restrictionMessages_5__2)->max_length;
      this->fields._restrictionCount_5__3 = max_length;
      if ( _4__this->fields.isDispTrend + max_length < 2 )
      {
        if ( max_length != 1 )
        {
          if ( _4__this->fields.isDispTrend )
          {
            pointEventBase = _4__this->fields.pointEventBase;
            if ( !pointEventBase )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive(pointEventBase, 0, 0LL);
            trendInfoBase = _4__this->fields.trendInfoBase;
            if ( !trendInfoBase )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive(trendInfoBase, 1, 0LL);
            restrictionMessageBase = (UnityEngine_Component_o *)_4__this->fields.restrictionMessageBase;
            if ( !restrictionMessageBase )
              goto LABEL_123;
            gameObject = UnityEngine_Component__get_gameObject(restrictionMessageBase, 0LL);
            if ( !gameObject )
              goto LABEL_123;
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          }
          return 0;
        }
        v77 = _4__this->fields.pointEventBase;
        if ( v77 )
        {
          UnityEngine_GameObject__SetActive(v77, 0, 0LL);
          v78 = _4__this->fields.trendInfoBase;
          if ( v78 )
          {
            UnityEngine_GameObject__SetActive(v78, 0, 0LL);
            v79 = (UnityEngine_Component_o *)_4__this->fields.restrictionMessageBase;
            if ( v79 )
            {
              v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
              if ( v80 )
              {
                UnityEngine_GameObject__SetActive(v80, 1, 0LL);
                v84 = *p_restrictionMessages_5__2;
                if ( *p_restrictionMessages_5__2 )
                {
                  if ( !v84->max_length )
                  {
LABEL_124:
                    sub_B17100(v81, v82, v83);
                    sub_B170A0();
                  }
                  PartyEventPointIndicator__SetRestrictionDisp(_4__this, v84->m_Items[0], 0LL);
                  return 0;
                }
              }
            }
          }
        }
LABEL_123:
        sub_B170D4();
      }
      this->fields._ta_5__4 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._ta_5__4, 0LL, v70, v71, v72, v73, v74, v75);
      *(_QWORD *)&_4__this->fields.dispKind = 0xFFFFFFFF00000000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !_4__this )
            goto LABEL_123;
          PartyEventPointIndicator__StopTotalDropItemtweenAlpha(_4__this, 0LL);
          dispKind = _4__this->fields.dispKind;
          v91 = _4__this->fields.dispNum + 1;
          _4__this->fields.dispNum = v91;
          if ( dispKind == 2 )
          {
            if ( v91 < this->fields._restrictionCount_5__3 )
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
            if ( this->fields._restrictionCount_5__3 < 1 )
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
          if ( this->fields._restrictionCount_5__3 >= 1 )
            goto LABEL_67;
          dispKind = 0;
LABEL_72:
          _4__this->fields.dispNum = 0;
LABEL_73:
          if ( dispKind != 2 )
          {
            if ( dispKind == 1 )
            {
              v92 = _4__this->fields.trendInfoBase;
              if ( !v92 )
                goto LABEL_123;
              UnityEngine_GameObject__SetActive(v92, 1, 0LL);
              v93 = (UnityEngine_Component_o *)_4__this->fields.restrictionMessageBase;
              if ( !v93 )
                goto LABEL_123;
              v94 = UnityEngine_Component__get_gameObject(v93, 0LL);
              if ( !v94 )
                goto LABEL_123;
              UnityEngine_GameObject__SetActive(v94, 0, 0LL);
              v95 = _4__this->fields.pointEventBase;
              if ( !v95 )
                goto LABEL_123;
              UnityEngine_GameObject__SetActive(v95, 0, 0LL);
            }
            goto LABEL_87;
          }
LABEL_80:
          v96 = _4__this->fields.trendInfoBase;
          if ( !v96 )
            goto LABEL_123;
          UnityEngine_GameObject__SetActive(v96, 0, 0LL);
          v97 = (UnityEngine_Component_o *)_4__this->fields.restrictionMessageBase;
          if ( !v97 )
            goto LABEL_123;
          v98 = UnityEngine_Component__get_gameObject(v97, 0LL);
          if ( !v98 )
            goto LABEL_123;
          UnityEngine_GameObject__SetActive(v98, 1, 0LL);
          v99 = _4__this->fields.pointEventBase;
          if ( !v99 )
            goto LABEL_123;
          UnityEngine_GameObject__SetActive(v99, 0, 0LL);
          restrictionMessages_5__2 = this->fields._restrictionMessages_5__2;
          if ( !restrictionMessages_5__2 )
            goto LABEL_123;
          dispNum = _4__this->fields.dispNum;
          if ( (unsigned int)dispNum >= restrictionMessages_5__2->max_length )
            goto LABEL_124;
          PartyEventPointIndicator__SetRestrictionDisp(_4__this, restrictionMessages_5__2->m_Items[dispNum], 0LL);
LABEL_87:
          v102 = (UnityEngine_Component_o *)_4__this->fields.infomationPanel;
          if ( !v102 )
            goto LABEL_123;
          if ( !_4__this->fields.isClick )
            break;
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v102->klass[1]._1.castClass)(
            v102,
            v102->klass[1]._1.declaringType,
            1.0);
          _4__this->fields.isClick = 0;
LABEL_102:
          this->fields._startTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
LABEL_103:
          if ( !_4__this->fields.isClick )
          {
            v156 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                        UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                        v64,
                                                        v65,
                                                        v66,
                                                        v67);
            UnityEngine_WaitForEndOfFrame___ctor(v156, 0LL);
            this->fields.__2__current = (Il2CppObject *)v156;
            p__2__current = &this->fields.__2__current;
            sub_B16F98(
              (BattleServantConfConponent_o *)p__2__current,
              (System_Int32_array **)v156,
              v158,
              v159,
              v160,
              v161,
              v162,
              v163);
            *((_DWORD *)p__2__current - 2) = 2;
            return 1;
          }
LABEL_104:
          if ( !_4__this->fields.isClick )
          {
            v129 = (UnityEngine_Component_o *)_4__this->fields.infomationPanel;
            if ( !v129 )
              goto LABEL_123;
            v130 = UnityEngine_Component__get_gameObject(v129, 0LL);
            v131 = TweenAlpha__Begin(v130, 0.5, 0.0, 0LL);
            this->fields._ta_5__4 = v131;
            p_ta_5__4 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._ta_5__4,
              (System_Int32_array **)v131,
              v132,
              v133,
              v134,
              v135,
              v136,
              v137);
            ta_5__4 = (UnityEngine_Object_o *)this->fields._ta_5__4;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(ta_5__4, 0LL, 0LL) )
            {
              if ( !*p_ta_5__4 )
                goto LABEL_123;
              LODWORD((*p_ta_5__4)[1].klass) = 6;
              v143 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                          UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                          v139,
                                                          v140,
                                                          v141,
                                                          v142);
              UnityEngine_WaitForEndOfFrame___ctor(v143, 0LL);
              this->fields._wait_5__6 = v143;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields._wait_5__6,
                (System_Int32_array **)v143,
                v144,
                v145,
                v146,
                v147,
                v148,
                v149);
LABEL_112:
              if ( !*p_ta_5__4 )
                goto LABEL_123;
              if ( UnityEngine_Behaviour__get_enabled(*p_ta_5__4, 0LL) )
              {
                if ( !_4__this )
                  goto LABEL_123;
                if ( !_4__this->fields.isClick )
                {
                  wait_5__6 = (Il2CppObject *)this->fields._wait_5__6;
                  this->fields.__2__current = wait_5__6;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.__2__current,
                    (System_Int32_array **)wait_5__6,
                    v150,
                    v151,
                    v152,
                    v153,
                    v154,
                    v155);
                  this->fields.__1__state = 3;
                  return 1;
                }
              }
              this->fields._wait_5__6 = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields._wait_5__6,
                0LL,
                v150,
                v151,
                v152,
                v153,
                v154,
                v155);
            }
          }
        }
        v103 = UnityEngine_Component__get_gameObject(v102, 0LL);
        v104 = TweenAlpha__Begin(v103, 0.5, 1.0, 0LL);
        this->fields._ta_5__4 = v104;
        v63 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._ta_5__4,
          (System_Int32_array **)v104,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
        v111 = (UnityEngine_Object_o *)this->fields._ta_5__4;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
          break;
LABEL_101:
        if ( !_4__this->fields.isClick )
          goto LABEL_102;
      }
      if ( !*v63 )
        goto LABEL_123;
      LODWORD((*v63)[1].klass) = 6;
      v116 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(
                                                  UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                  v112,
                                                  v113,
                                                  v114,
                                                  v115);
      UnityEngine_WaitForEndOfFrame___ctor(v116, 0LL);
      this->fields._wait_5__6 = v116;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._wait_5__6,
        (System_Int32_array **)v116,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
LABEL_96:
      if ( !*v63 )
        goto LABEL_123;
      if ( !UnityEngine_Behaviour__get_enabled(*v63, 0LL) )
        goto LABEL_100;
      if ( !_4__this )
        goto LABEL_123;
      if ( _4__this->fields.isClick )
      {
LABEL_100:
        this->fields._wait_5__6 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields._wait_5__6, 0LL, v123, v124, v125, v126, v127, v128);
        if ( !_4__this )
          goto LABEL_123;
        goto LABEL_101;
      }
      v165 = (Il2CppObject *)this->fields._wait_5__6;
      this->fields.__2__current = v165;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v165,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    case 1:
      v63 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
      this->fields.__1__state = -1;
      goto LABEL_96;
    case 2:
      this->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields._startTime_5__5) >= 3.0 )
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
      p_ta_5__4 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__4;
      this->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_PartyEventPointIndicator__DispTotalDropItemCR_d__28_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8367 & 1) == 0 )
  {
    sub_B16FFC(&PartyEventPointIndicator___c_TypeInfo, v1);
    byte_40F8367 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(PartyEventPointIndicator___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)PartyEventPointIndicator___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return entity->fields.type != 15;
}