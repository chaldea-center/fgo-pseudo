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

  if ( (byte_4C51B27 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_3486/*"CLICK_SUPPORT_BUTTON"*/);
    byte_4C51B27 = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    v5 = this->fields.fsm;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_3486/*"CLICK_SUPPORT_BUTTON"*/, 0);
  }
}


void GrandServantListMenuLayoutSupport__SetupSupportInfo(
        GrandServantListMenuLayoutSupport_o *this,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  int kind; // w8
  __int64 *v6; // x8
  System_String_o *v7; // x22
  UILabel_o *descriptionLabel; // x21
  System_String_o *Instance; // x0
  __int64 v10; // x1
  int v11; // w8
  struct FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x19
  int32_t stringLength; // w2
  FollowerQuestInfomationDraw_o *v15; // x0
  QuestRestrictionInfo_o *v16; // x1
  __int64 v17; // x0
  System_ArgumentOutOfRangeException_o *v18; // x19
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  __int64 v21; // x0

  if ( (byte_4C51B26 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C3E564(&StringLiteral_7009/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/);
    sub_1C3E564(&StringLiteral_7008/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/);
    byte_4C51B26 = 1;
  }
  kind = (unsigned __int8)this->fields.kind;
  if ( kind == 1 )
  {
    v6 = &StringLiteral_7009/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/;
  }
  else
  {
    if ( kind != 2 )
    {
      v17 = sub_1C3E578(&System_ArgumentOutOfRangeException_TypeInfo);
      v18 = (System_ArgumentOutOfRangeException_o *)sub_1C3E7B0(v17);
      v19 = (System_String_o *)sub_1C3E578(&StringLiteral_21145/*"kind"*/);
      v20 = (System_String_o *)sub_1C3E578(&StringLiteral_25476/*"予期されないタイプです。"*/);
      System_ArgumentOutOfRangeException___ctor_64663252(v18, v19, v20, 0);
      v21 = sub_1C3E578(&Method_GrandServantListMenuLayoutSupport_SetupSupportInfo__);
      sub_1C3E68C(v18, v21);
    }
    v6 = &StringLiteral_7008/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/;
  }
  v7 = (System_String_o *)*v6;
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get(v7, 0);
  if ( !descriptionLabel )
    goto LABEL_18;
  UILabel__set_text(descriptionLabel, Instance, 0);
  v11 = (unsigned __int8)this->fields.kind;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  if ( v11 != 1 )
  {
    if ( followerQuestInfomationDraw )
    {
      v15 = followerQuestInfomationDraw;
      v16 = 0;
      stringLength = 0;
      goto LABEL_17;
    }
LABEL_18:
    sub_1C3E7C0(Instance, v10);
  }
  if ( !questData )
    goto LABEL_18;
  QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
  Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !followerQuestInfomationDraw )
    goto LABEL_18;
  stringLength = Instance[2].fields._stringLength;
  v15 = followerQuestInfomationDraw;
  v16 = QuestRestriction_k__BackingField;
LABEL_17:
  FollowerQuestInfomationDraw__SetInfomation(v15, v16, stringLength, 0, 0);
}


void GrandServantListMenuLayoutSupport__UpdateView(
        GrandServantListMenuLayoutSupport_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  GrandServantListMenuLayout__UpdateView((GrandServantListMenuLayout_o *)this, grandServantListData, method);
  if ( !grandServantListData )
    sub_1C3E7C0(v5, v6);
  GrandServantListMenuLayoutSupport__SetupSupportInfo(this, grandServantListData->fields._QuestData_k__BackingField, v7);
}