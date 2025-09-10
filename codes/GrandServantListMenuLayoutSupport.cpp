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

  if ( (byte_4C220EE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3479/*"CLICK_SUPPORT_BUTTON"*/);
    byte_4C220EE = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    v5 = this->fields.fsm;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    PlayMakerFSM__SendEvent(v5, (System_String_o *)StringLiteral_3479/*"CLICK_SUPPORT_BUTTON"*/, 0);
  }
}


void GrandServantListMenuLayoutSupport__SetupSupportInfo(
        GrandServantListMenuLayoutSupport_o *this,
        GrandServantListQuestData_o *questData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int kind; // w8
  __int64 *v8; // x8
  System_String_o *v9; // x21
  Il2CppObject *v10; // x0
  UILabel_o *descriptionLabel; // x22
  System_String_o *Instance; // x0
  __int64 v13; // x1
  int v14; // w8
  struct FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  struct QuestRestrictionInfo_o *QuestRestriction_k__BackingField; // x19
  int32_t stringLength; // w2
  FollowerQuestInfomationDraw_o *v18; // x0
  QuestRestrictionInfo_o *v19; // x1
  int8_t v20[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C220ED & 1) == 0 )
  {
    sub_1C2D490(&GrandServantListData_DisplayKind_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_7003/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/);
    sub_1C2D490(&StringLiteral_7002/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/);
    byte_4C220ED = 1;
  }
  kind = (unsigned __int8)this->fields.kind;
  if ( kind == 2 )
  {
    v8 = &StringLiteral_7002/*"GRAND_SERVANT_LIST_FORMATION_READONLY_DESCRIPTION_TEXT"*/;
  }
  else
  {
    if ( kind != 1 )
    {
      v20[0] = this->fields.kind;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(GrandServantListData_DisplayKind_TypeInfo, v20, method, v3, v4);
      PrivateImplementationDetails___ThrowSwitchExpressionException(v10, 0);
    }
    v8 = &StringLiteral_7003/*"GRAND_SERVANT_LIST_FORMATION_SELECTABLE_DESCRIPTION_TEXT"*/;
  }
  v9 = (System_String_o *)*v8;
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get(v9, 0);
  if ( !descriptionLabel )
    goto LABEL_20;
  UILabel__set_text(descriptionLabel, Instance, 0);
  v14 = (unsigned __int8)this->fields.kind;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  if ( v14 != 1 )
  {
    if ( followerQuestInfomationDraw )
    {
      v18 = followerQuestInfomationDraw;
      v19 = 0;
      stringLength = 0;
      goto LABEL_19;
    }
LABEL_20:
    sub_1C2D6EC(Instance, v13);
  }
  if ( !questData )
    goto LABEL_20;
  QuestRestriction_k__BackingField = questData->fields._QuestRestriction_k__BackingField;
  Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !followerQuestInfomationDraw )
    goto LABEL_20;
  stringLength = Instance[2].fields._stringLength;
  v18 = followerQuestInfomationDraw;
  v19 = QuestRestriction_k__BackingField;
LABEL_19:
  FollowerQuestInfomationDraw__SetInfomation(v18, v19, stringLength, 0, 0);
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
    sub_1C2D6EC(v5, v6);
  GrandServantListMenuLayoutSupport__SetupSupportInfo(this, grandServantListData->fields._QuestData_k__BackingField, v7);
}