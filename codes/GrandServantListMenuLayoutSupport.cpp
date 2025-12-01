void GrandServantListMenuLayoutSupport___ctor(GrandServantListMenuLayoutSupport_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListMenuLayoutSupport__OnClickSupportInfoButton(
        GrandServantListMenuLayoutSupport_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x20
  __int64 v4; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_4CC217C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3481/*"CLICK_SUPPORT_BUTTON"*/);
    byte_4CC217C = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    v5 = this->fields.fsm;
    if ( !v5 )
      sub_1C71608(0, v4);
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_3481/*"CLICK_SUPPORT_BUTTON"*/, 0);
  }
}


void GrandServantListMenuLayoutSupport__SetupSupportInfo(
        GrandServantListMenuLayoutSupport_o *this,
        GrandServantListQuestData_o *questData,
        bool displaySupportInfoButton,
        const MethodInfo *method)
{
  int kind; // w8
  __int64 *v8; // x8
  System_String_o *v9; // x23
  UILabel_o *descriptionLabel; // x22
  System_String_o *supportInfoButton; // x0
  __int64 v12; // x1
  int v13; // w8
  struct FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x19
  int32_t stringLength; // w2
  FollowerQuestInfomationDraw_o *v17; // x0
  QuestRestrictionInfo_o *v18; // x1
  __int64 v19; // x0
  System_ArgumentOutOfRangeException_o *v20; // x19
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  __int64 v23; // x0

  if ( (byte_4CC217B & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&StringLiteral_7006/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/);
    sub_1C713B0(&StringLiteral_7005/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/);
    byte_4CC217B = 1;
  }
  kind = (unsigned __int8)this->fields.kind;
  if ( kind == 1 )
  {
    v8 = &StringLiteral_7006/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/;
  }
  else
  {
    if ( kind != 2 )
    {
      v19 = sub_1C713C4(&System_ArgumentOutOfRangeException_TypeInfo);
      v20 = (System_ArgumentOutOfRangeException_o *)sub_1C715FC(v19);
      v21 = (System_String_o *)sub_1C713C4(&StringLiteral_21220/*"kind"*/);
      v22 = (System_String_o *)sub_1C713C4(&StringLiteral_25586/*"予期されないタイプです。"*/);
      System_ArgumentOutOfRangeException___ctor_65056564(v20, v21, v22, 0);
      v23 = sub_1C713C4(&Method_GrandServantListMenuLayoutSupport_SetupSupportInfo__);
      sub_1C714D8(v20, v23);
    }
    v8 = &StringLiteral_7005/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/;
  }
  v9 = (System_String_o *)*v8;
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportInfoButton = LocalizationManager__Get(v9, 0);
  if ( !descriptionLabel )
    goto LABEL_19;
  UILabel__set_text(descriptionLabel, supportInfoButton, 0);
  supportInfoButton = (System_String_o *)this->fields.supportInfoButton;
  if ( !supportInfoButton )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportInfoButton, displaySupportInfoButton, 0);
  v13 = (unsigned __int8)this->fields.kind;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  if ( v13 != 1 )
  {
    if ( followerQuestInfomationDraw )
    {
      v17 = followerQuestInfomationDraw;
      v18 = 0;
      stringLength = 0;
      goto LABEL_18;
    }
LABEL_19:
    sub_1C71608(supportInfoButton, v12);
  }
  if ( !questData )
    goto LABEL_19;
  QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
  supportInfoButton = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !supportInfoButton || !followerQuestInfomationDraw )
    goto LABEL_19;
  stringLength = supportInfoButton[2].fields._stringLength;
  v17 = followerQuestInfomationDraw;
  v18 = QuestRestriction_k__BackingField;
LABEL_18:
  FollowerQuestInfomationDraw__SetInfomation(v17, v18, stringLength, 0, 0);
}


void GrandServantListMenuLayoutSupport__UpdateView(
        GrandServantListMenuLayoutSupport_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  GrandServantListMenuLayout__UpdateView((GrandServantListMenuLayout_o *)this, grandServantListData, method);
  if ( !grandServantListData )
    sub_1C71608(v5, v6);
  GrandServantListMenuLayoutSupport__SetupSupportInfo(
    this,
    grandServantListData->fields._QuestData_k__BackingField,
    grandServantListData->fields._DisplaySupportInfoButton_k__BackingField,
    v7);
}