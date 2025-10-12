void GrandServantListMenuLayoutSupport___ctor(GrandServantListMenuLayoutSupport_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListMenuLayoutSupport__OnClickSupportInfoButton(
        GrandServantListMenuLayoutSupport_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x20
  PlayMakerFSM_o *v4; // x0

  if ( (byte_4C327BD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3486/*"CLICK_SUPPORT_BUTTON"*/);
    byte_4C327BD = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    v4 = this->fields.fsm;
    if ( !v4 )
      sub_1C32E7C(0);
    PlayMakerFSM__SendEvent(v4, (System_String_o *)StringLiteral_3486/*"CLICK_SUPPORT_BUTTON"*/, 0);
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
  int v10; // w8
  struct FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x19
  int32_t stringLength; // w2
  FollowerQuestInfomationDraw_o *v14; // x0
  QuestRestrictionInfo_o *v15; // x1
  __int64 v16; // x0
  System_ArgumentOutOfRangeException_o *v17; // x19
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  __int64 v20; // x0

  if ( (byte_4C327BC & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_7008/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/);
    sub_1C32C20(&StringLiteral_7007/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/);
    byte_4C327BC = 1;
  }
  kind = (unsigned __int8)this->fields.kind;
  if ( kind == 1 )
  {
    v6 = &StringLiteral_7008/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/;
  }
  else
  {
    if ( kind != 2 )
    {
      v16 = sub_1C32C34(&System_ArgumentOutOfRangeException_TypeInfo);
      v17 = (System_ArgumentOutOfRangeException_o *)sub_1C32E6C(v16);
      v18 = (System_String_o *)sub_1C32C34(&StringLiteral_21124/*"kind"*/);
      v19 = (System_String_o *)sub_1C32C34(&StringLiteral_25451/*"予期されないタイプです。"*/);
      System_ArgumentOutOfRangeException___ctor_64545328(v17, v18, v19, 0);
      v20 = sub_1C32C34(&Method_GrandServantListMenuLayoutSupport_SetupSupportInfo__);
      sub_1C32D48(v17, v20);
    }
    v6 = &StringLiteral_7007/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/;
  }
  v7 = (System_String_o *)*v6;
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get(v7, 0);
  if ( !descriptionLabel )
    goto LABEL_18;
  UILabel__set_text(descriptionLabel, Instance, 0);
  v10 = (unsigned __int8)this->fields.kind;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  if ( v10 != 1 )
  {
    if ( followerQuestInfomationDraw )
    {
      v14 = followerQuestInfomationDraw;
      v15 = 0;
      stringLength = 0;
      goto LABEL_17;
    }
LABEL_18:
    sub_1C32E7C(Instance);
  }
  if ( !questData )
    goto LABEL_18;
  QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
  Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !followerQuestInfomationDraw )
    goto LABEL_18;
  stringLength = Instance[2].fields._stringLength;
  v14 = followerQuestInfomationDraw;
  v15 = QuestRestriction_k__BackingField;
LABEL_17:
  FollowerQuestInfomationDraw__SetInfomation(v14, v15, stringLength, 0, 0);
}


void GrandServantListMenuLayoutSupport__UpdateView(
        GrandServantListMenuLayoutSupport_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  GrandServantListMenuLayout__UpdateView((GrandServantListMenuLayout_o *)this, grandServantListData, method);
  if ( !grandServantListData )
    sub_1C32E7C(v5);
  GrandServantListMenuLayoutSupport__SetupSupportInfo(this, grandServantListData->fields._QuestData_k__BackingField, v6);
}