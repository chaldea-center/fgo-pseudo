// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  int v6; // s0
  int v7; // s1
  int v8; // s2
  float v9; // s4
  float v10; // s5
  float v11; // s6
  FollowerSelectItemListViewItemDraw_c *v12; // x8
  struct UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v14; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418AA34 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_418AA34 = 1;
  }
  v6 = 1065287423;
  v7 = 1064300528;
  v8 = 1058642330;
  v14 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  v15.fields.g = 0.64706;
  v15.fields.b = 0.27059;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = v14;
  v15.fields.r = 0.88235;
  v13 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40633184(v15, v9, v10, v11, (const MethodInfo *)&v13);
  v12 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = v13;
  v12->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 12.0;
  v12->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y = 11.0;
}


void __fastcall FollowerSelectItemListViewItemDraw___ctor(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SkillIconComponent_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UIIconLabel_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_GameObject_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct SkillIconComponent_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct UIIconLabel_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_418AA33 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B2C35C(&SkillIconComponent___TypeInfo, v4);
    sub_B2C35C(&UIIconLabel___TypeInfo, v5);
    byte_418AA33 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct UIIconLabel_array *)sub_B2C374(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UnityEngine_GameObject_array *)sub_B2C374(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct SkillIconComponent_array *)sub_B2C374(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UIIconLabel_array *)sub_B2C374(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v42;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__Awake(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UISprite_o *skillIconSprite; // x20

  if ( (byte_418AA2D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_B2C35C(&StringLiteral_19364/*"icon_skill_mini"*/, v5);
    sub_B2C35C(&StringLiteral_19495/*"img_friend_skill"*/, v6);
    sub_B2C35C(&StringLiteral_19275/*"icon_append_mini"*/, v7);
    sub_B2C35C(&StringLiteral_19494/*"img_friend_appendskill"*/, v8);
    byte_418AA2D = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19364/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_19495/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19275/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_19494/*"img_friend_appendskill"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t displaySkill,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  _BOOL4 v12; // w8
  __int64 v13; // x20
  __int64 v14; // x21
  int32_t v15; // w9
  SwitchUIWidgetComponent_o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_418AA32 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_418AA32 = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  this->fields.displaySkill = displaySkill;
  if ( !switchSkillInfo )
    goto LABEL_43;
  SwitchUIWidgetComponent__Clear(switchSkillInfo, 0LL);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
  if ( !switchSkillInfo )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillInfo,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_43;
  (*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
    switchSkillInfo,
    switchSkillInfo->klass[1]._1.this_arg.data,
    0.0);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_43;
  switchSkillInfo = (SwitchUIWidgetComponent_o *)(*(__int64 (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
                                                   switchSkillInfo,
                                                   switchSkillInfo->klass[1]._1.this_arg.data,
                                                   0.0);
  if ( !item )
    goto LABEL_43;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, *(const MethodInfo **)&displaySkill);
  v12 = (int)ServantLeader;
  if ( ServantLeader )
  {
    v14 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v14;
    *(_QWORD *)&v17.fields.fakeValue = v13;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL) > 0;
  }
  v15 = this->fields.displaySkill;
  if ( v15 == 2 )
  {
    if ( v12 )
    {
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !switchSkillInfo )
        goto LABEL_43;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)switchSkillInfo,
                                                       0LL);
      if ( !switchSkillInfo )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !switchSkillInfo )
        goto LABEL_43;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillInfo,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
      if ( !switchSkillInfo )
        goto LABEL_43;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)switchSkillInfo,
                                                       0LL);
      if ( !switchSkillInfo )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !switchSkillInfo )
        goto LABEL_43;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillInfo,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v16 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillInfo,
                                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v16 )
      {
        SwitchUIWidgetComponent__Set(v16, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B2C434(switchSkillInfo, *(_QWORD *)&displaySkill);
  }
  if ( v15 != 1 )
  {
    if ( v15 )
      return;
    if ( !v12 )
      goto LABEL_21;
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
    if ( switchSkillInfo )
    {
      (*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
        switchSkillInfo,
        switchSkillInfo->klass[1]._1.this_arg.data,
        1.0);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( switchSkillInfo )
      {
        switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)switchSkillInfo,
                                                         0LL);
        if ( switchSkillInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
LABEL_21:
          switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
          if ( !switchSkillInfo )
            goto LABEL_43;
          goto LABEL_40;
        }
      }
    }
    goto LABEL_43;
  }
  if ( v12 )
  {
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
    if ( !switchSkillInfo )
      goto LABEL_43;
    (*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
      switchSkillInfo,
      switchSkillInfo->klass[1]._1.this_arg.data,
      1.0);
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
    if ( !switchSkillInfo )
      goto LABEL_43;
    switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillInfo,
                                                     0LL);
    if ( !switchSkillInfo )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
  }
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_43;
LABEL_40:
  switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillInfo,
                                                   0LL);
  if ( !switchSkillInfo )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__SetInput(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        bool isInput,
        bool isTutorial,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Behaviour_o *supportInfoButton; // x0
  __int64 v10; // x1
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v13; // w24
  Il2CppClass **v14; // x8
  UnityEngine_Behaviour_o *v15; // x21
  WebViewObject_o *Component_WebViewObject; // x22
  __int64 v17; // x0

  if ( (byte_418AA31 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418AA31 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)supportInfoButton & 1) != 0 )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_19;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))supportInfoButton->klass[1]._1.namespaze)(
      supportInfoButton,
      1LL,
      supportInfoButton->klass[1]._1.byval_arg.data);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_19;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))supportInfoButton->klass[1]._1.implementedInterfaces)(
      supportInfoButton,
      0LL,
      0LL,
      supportInfoButton->klass[1]._1.interfaceOffsets);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(supportInfoButton, isInput, 0LL);
  }
  skillButtonList = this->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( max_length >= 1 )
    {
      v13 = 0;
      do
      {
        if ( v13 >= skillButtonList->max_length )
        {
          v17 = sub_B2C460(supportInfoButton);
          sub_B2C400(v17, 0LL);
        }
        v14 = &skillButtonList->obj.klass + (int)v13;
        v15 = (UnityEngine_Behaviour_o *)v14[4];
        if ( !v15 )
          break;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v14[4],
                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))v15->klass[1]._1.namespaze)(
          v15,
          1LL,
          v15->klass[1]._1.byval_arg.data);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v15->klass[1]._1.implementedInterfaces)(
          v15,
          0LL,
          0LL,
          v15->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v15, isInput, 0LL);
        if ( !Component_WebViewObject )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_WebViewObject, 1, 0LL);
        if ( (int)++v13 >= max_length )
          goto LABEL_20;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_19:
      sub_B2C434(supportInfoButton, v10);
    }
  }
LABEL_20:
  supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
  if ( !supportInfoButton )
    goto LABEL_19;
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)supportInfoButton,
                                                   0LL);
  if ( !supportInfoButton )
    goto LABEL_19;
  if ( UnityEngine_GameObject__get_active((UnityEngine_GameObject_o *)supportInfoButton, 0LL) )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_19;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))supportInfoButton->klass[1]._1.namespaze)(
      supportInfoButton,
      1LL,
      supportInfoButton->klass[1]._1.byval_arg.data);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_19;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))supportInfoButton->klass[1]._1.implementedInterfaces)(
      supportInfoButton,
      0LL,
      0LL,
      supportInfoButton->klass[1]._1.interfaceOffsets);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(supportInfoButton, isInput, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__SetItem(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        int32_t mode,
        int32_t displaySkill,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 switchSkillUIList; // x0
  UnityEngine_Object_o *rangeSprite; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  ServantLeaderInfo_o *v73; // x21
  int32_t Kind_27344584; // w22
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x23
  System_String_o *v77; // x25
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x23
  __int64 v79; // x23
  __int64 v80; // x24
  struct FollowerInfo_o *v81; // x8
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x1
  System_String_o *name; // x27
  System_String_o *v87; // x26
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v89; // x27
  __int64 v90; // x23
  __int64 v91; // x28
  bool v92; // w8
  FollowerRootComponent_c *v93; // x1
  UIRangeLabel_o *svtNameRangeLabel; // x24
  const MethodInfo *v95; // x2
  FollowerInfo_o *v96; // x8
  bool v97; // w1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v99; // x23
  __int64 v100; // x24
  ServantLimitImageMaster_o *v101; // x28
  WarQuestSelectionMaster_o *v102; // x0
  __int64 v103; // x23
  __int64 v104; // x24
  ServantLimitAddMaster_o *v105; // x28
  FollowerInfo_o *v106; // x8
  Il2CppObject *v107; // x25
  BalanceConfig_c *v108; // x0
  int32_t FollowerPointNotFriend; // w27
  System_String_o **v110; // x8
  System_String_o *v111; // x23
  System_String_o *v112; // x24
  System_String_o *v113; // x26
  UILabel_o *v114; // x24
  System_String_o **v115; // x8
  int32_t v116; // w2
  UILabel_o *playerNameLabel; // x24
  System_String_o **p_userName; // x8
  int32_t userLv; // w2
  System_String_o *v120; // x26
  UILabel_o *v121; // x24
  System_String_o **v122; // x8
  int32_t v123; // w2
  System_String_o *v124; // x25
  bool v125; // w1
  UILabel_o *v126; // x26
  System_String_o **v127; // x8
  int32_t v128; // w2
  UILabel_o *v129; // x26
  System_String_o **v130; // x8
  int32_t v131; // w2
  UILabel_o *v132; // x26
  System_String_o **v133; // x8
  int32_t v134; // w2
  UILabel_o *v135; // x24
  System_String_o *v136; // x25
  int64_t v137; // x0
  UILabel_o *loginDataLabel; // x24
  System_String_o *v139; // x25
  int64_t UpdatedAt; // x0
  UILabel_o *v141; // x24
  System_String_o *v142; // x25
  int64_t v143; // x0
  Il2CppObject *v144; // x0
  __int64 *v145; // x8
  Il2CppObject *v146; // x0
  Il2CppObject *v147; // x0
  const MethodInfo *v148; // x2
  UIRangeLabel_o *svtNpRangeLabel; // x24
  UnityEngine_Object_o *svtNpCommandCard; // x23
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct SkillIconComponent_array *skillIconList; // x8
  struct SkillInfo_array *v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  struct SkillIconComponent_array *v160; // x8
  __int64 v161; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillInfo_array *v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  struct SkillIconComponent_array *v171; // x8
  __int64 v172; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v176; // x26
  System_String_o *v177; // x27
  int64_t v178; // x0
  UILabel_o *v179; // x26
  System_String_o *v180; // x27
  int64_t v181; // x0
  UILabel_o *v182; // x26
  System_String_o *v183; // x27
  int64_t v184; // x0
  Il2CppObject *v185; // x0
  BalanceConfig_c *v186; // x0
  struct BalanceConfig_StaticFields *v187; // x8
  System_String_o **v188; // x9
  int v189; // w11
  LocalizationManager_c *v190; // x0
  Il2CppObject *v191; // x0
  struct QuestRestrictionInfo_o *v192; // x24
  bool HasFlag_23879348; // w0
  BalanceConfig_c *v194; // x8
  int32_t *p_FollowFriendPoint; // x8
  Il2CppObject *v196; // x0
  BalanceConfig_c *v197; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v199; // x23
  System_String_o **v200; // x8
  System_String_o *v201; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v203; // x1
  UIRangeLabel_o *v204; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v206; // x23
  UnityEngine_Object_o *v207; // x23
  const MethodInfo *v208; // x1
  struct ServantNpCommandCardComponent_o *v209; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v212; // w24
  int v213; // w23
  System_String_o *v214; // x1
  int v215; // w8
  __int64 v216; // x8
  struct UILabel_o *friendPointData2Label; // x24
  int32_t v218; // w25
  System_String_o *v219; // x23
  Il2CppObject *v220; // x0
  UILabel_o *campaignLabel; // x24
  struct UILabel_o *v222; // x23
  const MethodInfo *v223; // x1
  System_String_o *v224; // x1
  UILabel_o *v225; // x0
  UnityEngine_Object_o *v226; // x23
  const MethodInfo *v227; // x1
  const MethodInfo *v228; // x2
  const MethodInfo *v229; // x1
  __int64 v230; // x23
  __int64 v231; // x24
  int32_t v232; // w24
  const MethodInfo *v233; // x1
  int32_t Rarity; // w25
  __int64 v235; // x8
  __int64 v236; // x23
  __int64 v237; // x26
  int32_t v238; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  const MethodInfo *v240; // x3
  struct SkillIconComponent_array *v241; // x8
  __int64 v242; // x8
  struct SkillInfo_array *v243; // x11
  int v244; // w9
  unsigned __int64 v245; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v247; // x14
  __int64 v248; // x23
  __int64 v249; // x25
  unsigned __int64 v250; // x26
  struct SkillInfo_array *v251; // x8
  struct UnityEngine_GameObject_array *v252; // x9
  int32_t *v253; // x27
  struct SkillIconComponent_array *v254; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v256; // x8
  struct SkillIconComponent_array *v257; // x8
  struct UIIconLabel_array *v258; // x8
  struct SkillIconComponent_array *v259; // x8
  __int64 v260; // x9
  int32_t v261; // w8
  bool v262; // w1
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v264; // x8
  __int64 v265; // x8
  struct SkillInfo_array *v266; // x11
  int v267; // w9
  signed __int64 v268; // x10
  unsigned __int64 v269; // x14
  SkillInfo_o *v270; // x14
  __int64 v271; // x23
  __int64 v272; // x25
  unsigned __int64 v273; // x26
  struct SkillInfo_array *v274; // x8
  struct UnityEngine_GameObject_array *v275; // x9
  int32_t *v276; // x27
  struct SkillIconComponent_array *v277; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v279; // x8
  struct SkillIconComponent_array *v280; // x8
  struct UIIconLabel_array *v281; // x8
  struct SkillIconComponent_array *v282; // x8
  __int64 v283; // x9
  int32_t v284; // w8
  bool v285; // w1
  SwitchUIWidgetComponent_o *switchSkillInfo; // x23
  UnityEngine_Object_o *v287; // x23
  ServantCommandCardListComponent_o *v288; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v291; // w26
  UnityEngine_Object_o *v292; // x23
  int64_t pushUserSvtId; // x8
  bool v294; // w24
  UnityEngine_Object_o *v295; // x23
  UnityEngine_Object_o *v296; // x23
  UISprite_o *v297; // x24
  UIWidget_o *v298; // x24
  int v299; // s0
  UISprite_o *v303; // x23
  int v304; // s0
  int v307; // s3
  UILabel_o *v308; // x24
  System_String_o *v309; // x23
  Il2CppObject *v310; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  Il2CppObject **v312; // x9
  Il2CppObject *v313; // x23
  Il2CppObject *v314; // x0
  System_String_o *v315; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  UILabel_o *v319; // x24
  UnityEngine_GameObject_o *v320; // x24
  FollowerSelectItemListViewItemDraw_c *v321; // x8
  float CLASS_BOARD_NOT_LABEL_POS_Y; // s0
  FollowerSelectItemListViewItemDraw_c *v323; // x8
  float v324; // s0
  float v325; // s8
  float v326; // s0
  float v327; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v330; // s10
  UnityEngine_GameObject_o *v331; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v334; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v336; // x22
  __int64 v337; // x23
  __int64 v338; // x9
  __int64 v339; // x23
  int32_t v340; // w0
  int32_t v341; // w23
  int32_t v342; // w22
  QuestPhaseEntity_o *v343; // x0
  QuestPhaseEntity_o *v344; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v346; // x23
  __int64 v347; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v348; // x21
  __int64 v349; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v352; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  EventDetailEntity_o *v356; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v360; // s0
  float v361; // s8
  UnityEngine_Transform_o *v362; // x22
  float warningMessageWidth; // s0
  float v364; // s1
  float v365; // s0
  float v366; // s2
  int64_t userId; // x2
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v369; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  System_String_o *v374; // x0
  System_String_o *v375; // x0
  System_String_o *v376; // x0
  __int64 v377; // x0
  __int64 v378; // x0
  FollowerSelectItemListViewItemDraw_o *v379; // x0
  FollowerSelectItemListViewItem_o *v380; // x1
  const MethodInfo *v381; // x2
  int v382; // [xsp+1Ch] [xbp-C4h]
  __int64 v383; // [xsp+28h] [xbp-B8h]
  FollowerInfo_o **p_followerInfo; // [xsp+30h] [xbp-B0h]
  int32_t TimesToRestart_k__BackingField; // [xsp+3Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v386; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-90h] BYREF
  int32_t v388; // [xsp+64h] [xbp-7Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v391; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16

  if ( (byte_418AA2E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&BalanceConfig_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_B2C35C(&DataManager_TypeInfo, v18);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v22);
    sub_B2C35C(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_B2C35C(&Grade_TypeInfo, v24);
    sub_B2C35C(&int_TypeInfo, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_B2C35C(&LocalizationManager_TypeInfo, v29);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v30);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B2C35C(&OptionManager_TypeInfo, v32);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B2C35C(&SkillInfo___TypeInfo, v36);
    sub_B2C35C(&TitleInfoControl_TypeInfo, v37);
    sub_B2C35C(&StringLiteral_3276/*"COMMON_NO_ENTRY"*/, v38);
    sub_B2C35C(&StringLiteral_6400/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_B2C35C(&StringLiteral_6379/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_B2C35C(&StringLiteral_11733/*"SERVANT_HIDE_NAME"*/, v41);
    sub_B2C35C(&StringLiteral_9377/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_B2C35C(&StringLiteral_6380/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_B2C35C(&StringLiteral_6335/*"FFFFFF"*/, v44);
    sub_B2C35C(&StringLiteral_9378/*"NP_HIDE_NAME"*/, v45);
    sub_B2C35C(&StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_B2C35C(&StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_B2C35C(&StringLiteral_9379/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_B2C35C(&StringLiteral_6393/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_B2C35C(&StringLiteral_6378/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_B2C35C(&StringLiteral_19376/*"icon_support_01"*/, v51);
    sub_B2C35C(&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/, v52);
    sub_B2C35C(&StringLiteral_19483/*"img_frames_mask01"*/, v53);
    sub_B2C35C(&StringLiteral_12475/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v54);
    sub_B2C35C(&StringLiteral_12476/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v55);
    sub_B2C35C(&StringLiteral_6392/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v56);
    sub_B2C35C(&StringLiteral_6394/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v57);
    sub_B2C35C(&StringLiteral_6377/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v58);
    sub_B2C35C(&StringLiteral_17883/*"datalost_svt_select"*/, v59);
    sub_B2C35C(&StringLiteral_6334/*"FFFF00"*/, v60);
    sub_B2C35C(&StringLiteral_9354/*"NO_ENTRY_NAME"*/, v61);
    sub_B2C35C(&StringLiteral_9376/*"NP_COLOR_NAME"*/, v62);
    sub_B2C35C(&StringLiteral_15830/*"[{0}]+{1}[-]"*/, v63);
    sub_B2C35C(&StringLiteral_1/*""*/, v64);
    sub_B2C35C(&StringLiteral_19343/*"icon_friend"*/, v65);
    sub_B2C35C(&StringLiteral_6381/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v66);
    sub_B2C35C(&StringLiteral_19342/*"icon_follow"*/, v67);
    sub_B2C35C(&StringLiteral_19519/*"img_listbg_02"*/, v68);
    byte_418AA2E = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v388 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v386.fields.r = 0LL;
  *(_QWORD *)&v386.fields.b = 0LL;
  switchSkillUIList = (__int64)this->fields.switchSkillUIList;
  this->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_569;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
  if ( !switchSkillUIList )
    goto LABEL_569;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillUIList + 440LL))(
    switchSkillUIList,
    *(_QWORD *)(*(_QWORD *)switchSkillUIList + 448LL),
    0.0);
  switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillUIList )
    goto LABEL_569;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillUIList + 440LL))(
    switchSkillUIList,
    *(_QWORD *)(*(_QWORD *)switchSkillUIList + 448LL),
    0.0);
  if ( (this->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    switchSkillUIList = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillUIList )
      goto LABEL_569;
    this->fields.warningMessageWidth = *(_DWORD *)(switchSkillUIList + 160);
    UIWidget__set_width((UIWidget_o *)switchSkillUIList, 1000, 0LL);
    if ( !item )
      return;
  }
  else if ( !item )
  {
    return;
  }
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
  {
    switchSkillUIList = (__int64)this->fields.rangeSprite;
    if ( !switchSkillUIList )
      goto LABEL_569;
    switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)switchSkillUIList,
                                   0LL);
    if ( !switchSkillUIList )
      goto LABEL_569;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, mode == 0, 0LL);
  }
  if ( mode )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item);
    followerInfo = item->fields.followerInfo;
    v73 = ServantLeader;
    p_followerInfo = &item->fields.followerInfo;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_27344584 = Grade__GetKind_27344584(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_27344584, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
    v77 = FollowerBgImage;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
    {
      switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
      if ( !switchSkillUIList )
        goto LABEL_569;
      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)switchSkillUIList,
                                     0LL);
      if ( !switchSkillUIList )
        goto LABEL_569;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
    }
    dataLostMaskMessageLabel = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
    {
      switchSkillUIList = (__int64)this->fields.dataLostMaskMessageLabel;
      if ( !switchSkillUIList )
        goto LABEL_569;
      UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      switchSkillUIList = (__int64)this->fields.dataLostMaskMessageLabel;
      if ( !switchSkillUIList )
        goto LABEL_569;
      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)switchSkillUIList,
                                     0LL);
      if ( !switchSkillUIList )
        goto LABEL_569;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
    }
    if ( !v73 )
      goto LABEL_53;
    v79 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
    v80 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v391.fields.currentCryptoKey = v79;
    *(_QWORD *)&v391.fields.fakeValue = v80;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v391, 0LL);
    if ( (int)switchSkillUIList < 1 )
    {
LABEL_53:
      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_EquipInfo(item, (const MethodInfo *)item);
      if ( !this->fields.servantFaceIcon )
        goto LABEL_254;
      ServantFaceIconComponent__SetEquipDangling(
        this->fields.servantFaceIcon,
        (EquipTargetInfo_o *)switchSkillUIList,
        0LL);
      svtNameRangeLabel = this->fields.svtNameRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3276/*"COMMON_NO_ENTRY"*/, 0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_254;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
      v96 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v96->fields.type )
        {
          case 1:
            v113 = v77;
            playerNameLabel = this->fields.playerNameLabel;
            if ( (byte_418AA27 & 1) == 0 )
            {
              switchSkillUIList = sub_B2C35C(&StringLiteral_18395/*"error"*/, v93);
              byte_418AA27 = 1;
              v96 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_254;
            if ( v96 )
              p_userName = &v96->fields.userName;
            else
              p_userName = (System_String_o **)&StringLiteral_18395/*"error"*/;
            UILabel__set_text(playerNameLabel, *p_userName, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              userLv = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              userLv = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41609428((UIIconLabel_o *)switchSkillUIList, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v139 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              UpdatedAt = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              UpdatedAt = 0LL;
            v146 = (Il2CppObject *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v139, v146, 0LL);
            if ( !loginDataLabel )
              goto LABEL_254;
            UILabel__set_text(loginDataLabel, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v145 = &StringLiteral_19343/*"icon_friend"*/;
LABEL_205:
            v77 = v113;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)*v145, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
              switchSkillUIList,
              *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
            goto LABEL_211;
          case 2:
            v120 = v77;
            v121 = this->fields.playerNameLabel;
            if ( (byte_418AA27 & 1) == 0 )
            {
              switchSkillUIList = sub_B2C35C(&StringLiteral_18395/*"error"*/, v93);
              byte_418AA27 = 1;
              v96 = *p_followerInfo;
            }
            if ( !v121 )
              goto LABEL_254;
            if ( v96 )
              v122 = &v96->fields.userName;
            else
              v122 = (System_String_o **)&StringLiteral_18395/*"error"*/;
            UILabel__set_text(v121, *v122, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v123 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v123 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41609428((UIIconLabel_o *)switchSkillUIList, 2, v123, 0, 0, 0LL, 0, 0, 0, 0LL);
            v141 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v142 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v143 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v143 = 0LL;
            v147 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v143, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v142, v147, 0LL);
            if ( !v141 )
              goto LABEL_254;
            UILabel__set_text(v141, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v77 = v120;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
LABEL_211:
            switchSkillUIList = (__int64)this->fields.supportInfoButton;
            if ( !switchSkillUIList )
              goto LABEL_254;
            switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)switchSkillUIList,
                                           0LL);
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
            switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v97 = 1;
LABEL_215:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v97, 0LL);
            break;
          case 3:
          case 4:
            switchSkillUIList = (__int64)this->fields.playerNameLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v77 = (System_String_o *)StringLiteral_19519/*"img_listbg_02"*/;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.loginDataLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19376/*"icon_support_01"*/, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
              switchSkillUIList,
              *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
            switchSkillUIList = (__int64)this->fields.supportInfoButton;
            if ( !switchSkillUIList )
              goto LABEL_254;
            switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)switchSkillUIList,
                                           0LL);
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v97 = 0;
            goto LABEL_215;
          case 5:
            v113 = v77;
            v114 = this->fields.playerNameLabel;
            if ( (byte_418AA27 & 1) == 0 )
            {
              switchSkillUIList = sub_B2C35C(&StringLiteral_18395/*"error"*/, v93);
              byte_418AA27 = 1;
              v96 = *p_followerInfo;
            }
            if ( !v114 )
              goto LABEL_254;
            if ( v96 )
              v115 = &v96->fields.userName;
            else
              v115 = (System_String_o **)&StringLiteral_18395/*"error"*/;
            UILabel__set_text(v114, *v115, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v116 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v116 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41609428((UIIconLabel_o *)switchSkillUIList, 2, v116, 0, 0, 0LL, 0, 0, 0, 0LL);
            v135 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v136 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v137 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v137 = 0LL;
            v144 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v137, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v136, v144, 0LL);
            if ( !v135 )
              goto LABEL_254;
            UILabel__set_text(v135, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v145 = &StringLiteral_19342/*"icon_follow"*/;
            goto LABEL_205;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v95);
      FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v148);
      svtNpRangeLabel = this->fields.svtNpRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NO_ENTRY_NAME"*/, 0LL);
      if ( !svtNpRangeLabel )
        goto LABEL_254;
      UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
      svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
      {
        switchSkillUIList = (__int64)this->fields.svtNpCommandCard;
        if ( !switchSkillUIList )
          goto LABEL_254;
        ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)switchSkillUIList, 0LL);
      }
      switchSkillUIList = (__int64)this->fields.friendPointIconLabel;
      if ( !switchSkillUIList )
        goto LABEL_254;
      UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
      switchSkillUIList = (__int64)this->fields.friendPointData2Label;
      if ( !switchSkillUIList )
        goto LABEL_254;
      UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      switchSkillUIList = (__int64)this->fields.campaignLabel;
      if ( !switchSkillUIList )
        goto LABEL_254;
      UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      switchSkillUIList = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
      if ( (switchSkillUIList & 1) != 0 )
      {
        switchSkillUIList = (__int64)this->fields.eventUpValIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        EventUpValIconComponent__Clear((EventUpValIconComponent_o *)switchSkillUIList, 0LL);
      }
      skillIconList = this->fields.skillIconList;
      if ( !skillIconList )
        goto LABEL_254;
      v153 = (struct SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, skillIconList->max_length);
      this->fields.skillInfoList = v153;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.skillInfoList,
        (System_Int32_array **)v153,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
      v160 = this->fields.skillIconList;
      if ( !v160 )
        goto LABEL_254;
      v161 = 0LL;
      while ( (int)v161 < (signed int)v160->max_length )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v161 >= skillBaseList->max_length )
          {
LABEL_796:
            v378 = sub_B2C460(switchSkillUIList);
            sub_B2C400(v378, 0LL);
          }
          switchSkillUIList = (__int64)skillBaseList->m_Items[v161];
          if ( switchSkillUIList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            v160 = this->fields.skillIconList;
            ++v161;
            if ( v160 )
              continue;
          }
        }
        goto LABEL_254;
      }
      switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
      if ( !switchSkillUIList )
        goto LABEL_254;
      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)switchSkillUIList,
                                     0LL);
      if ( !switchSkillUIList )
        goto LABEL_254;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
      appendSkillIconList = this->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_254;
      v164 = (struct SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, appendSkillIconList->max_length);
      this->fields.appendSkillInfoList = v164;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.appendSkillInfoList,
        (System_Int32_array **)v164,
        v165,
        v166,
        v167,
        v168,
        v169,
        v170);
      v171 = this->fields.appendSkillIconList;
      if ( !v171 )
        goto LABEL_254;
      v172 = 0LL;
      while ( (int)v172 < (signed int)v171->max_length )
      {
        appendSkillBaseList = this->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_254;
        if ( (unsigned int)v172 >= appendSkillBaseList->max_length )
          goto LABEL_796;
        switchSkillUIList = (__int64)appendSkillBaseList->m_Items[v172];
        if ( switchSkillUIList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
          v171 = this->fields.appendSkillIconList;
          ++v172;
          if ( v171 )
            continue;
        }
        goto LABEL_254;
      }
      switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
      if ( !switchSkillUIList )
        goto LABEL_254;
      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)switchSkillUIList,
                                     0LL);
      if ( !switchSkillUIList )
        goto LABEL_254;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
      svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
      {
        switchSkillUIList = (__int64)this->fields.svtCommandCardList;
        if ( !switchSkillUIList )
          goto LABEL_254;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)switchSkillUIList, 0LL);
      }
      pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
      {
LABEL_631:
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_254;
        LODWORD(v324) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v325 = v324;
        LODWORD(v326) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                      (UserGradeComponent_o *)switchSkillUIList,
                                      0LL);
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v327 = v326;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v330 = LocalPositionX;
        v331 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        GameObjectExtensions__SetLocalPositionX(v331, (float)(v327 * 0.5) + (float)(v325 + v330), 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        UserGradeComponent__Set((UserGradeComponent_o *)switchSkillUIList, Kind_27344584, 0LL);
        baseSprite = this->fields.baseSprite;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        }
        FollowerRootComponent__SetFollowerBase(baseSprite, v77, 0LL);
        if ( item->fields.isQuestRestriction || item->fields._IsSlotRestriction_k__BackingField )
        {
          switchSkillUIList = (__int64)this->fields.maskSprite;
          if ( !switchSkillUIList )
            goto LABEL_254;
          switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)switchSkillUIList,
                                         0LL);
          if ( !switchSkillUIList )
            goto LABEL_254;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
          maskMessageLabel = this->fields.maskMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6392/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0LL);
          if ( !maskMessageLabel )
            goto LABEL_254;
          UILabel__set_text(maskMessageLabel, (System_String_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningBase;
          if ( !switchSkillUIList )
            goto LABEL_254;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
          switchSkillUIList = (__int64)this->fields.warningIcon;
          if ( !switchSkillUIList )
            goto LABEL_254;
          FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        else
        {
          if ( !item->fields.isUniqueSvtRestriction && !item->fields.isUniqueIndividualityRestriction )
          {
            switchSkillUIList = (__int64)this->fields.maskSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)switchSkillUIList,
                                           0LL);
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            switchSkillUIList = (__int64)this->fields.maskMessageLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            switchSkillUIList = (__int64)this->fields.warningBase;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            switchSkillUIList = (__int64)this->fields.warningIcon;
            if ( !switchSkillUIList )
              goto LABEL_254;
            FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.warningMessageLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            v334 = 0;
LABEL_652:
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v73 )
                goto LABEL_684;
              v337 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
              v336 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v397.fields.currentCryptoKey = v337;
              *(_QWORD *)&v397.fields.fakeValue = v336;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v397, 0LL) < 1
                || (v334 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v73, 0LL)
                || item->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_684;
              }
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillUIList, 35, 0LL) )
                goto LABEL_684;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = *(_QWORD *)(switchSkillUIList + 24);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v93 = FollowerRootComponent_TypeInfo;
              v338 = *(&FollowerRootComponent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)switchSkillUIList + 300LL) < (unsigned int)v338
                || *(FollowerRootComponent_c **)(*(_QWORD *)(*(_QWORD *)switchSkillUIList + 200LL) + 8 * v338 - 8) != FollowerRootComponent_TypeInfo )
              {
                sub_B2C728(switchSkillUIList);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v379, v380, v381);
                return;
              }
              v339 = *(_QWORD *)(switchSkillUIList + 136);
              if ( !v339 )
                goto LABEL_684;
              v340 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(switchSkillUIList + 136), 0LL);
              if ( !v340 )
                goto LABEL_684;
              v341 = *(_DWORD *)(v339 + 24);
              if ( !v341 )
                goto LABEL_684;
              v342 = v340;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v343 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillUIList, v342, v341, 0LL);
              if ( v343 )
              {
                v344 = v343;
                switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)switchSkillUIList,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
                v347 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
                v346 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
                v348 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v398.fields.currentCryptoKey = v347;
                *(_QWORD *)&v398.fields.fakeValue = v346;
                switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v398, 0LL);
                if ( !v348 )
                  goto LABEL_254;
                switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v348,
                                               switchSkillUIList,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                v349 = switchSkillUIList;
                switchSkillUIList = (__int64)this->fields.classCompatibilityIcon;
                if ( !switchSkillUIList )
                  goto LABEL_254;
                ServantClassCompatibilityIconComponent__SetIcon(
                  (ServantClassCompatibilityIconComponent_o *)switchSkillUIList,
                  *(_DWORD *)(v349 + 80),
                  v344->fields.classIds,
                  2,
                  0LL);
              }
              else
              {
LABEL_684:
                switchSkillUIList = (__int64)this->fields.classCompatibilityIcon;
                if ( !switchSkillUIList )
                  goto LABEL_254;
                ServantClassCompatibilityIconComponent__Clear(
                  (ServantClassCompatibilityIconComponent_o *)switchSkillUIList,
                  0LL);
              }
            }
            recommendedIcon = (UnityEngine_Object_o *)this->fields.recommendedIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(recommendedIcon, 0LL, 0LL) )
            {
              switchSkillUIList = (__int64)this->fields.recommendedIcon;
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)switchSkillUIList,
                                             0LL);
              if ( !switchSkillUIList )
                goto LABEL_254;
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)switchSkillUIList,
                item->fields.isRecommended,
                0LL);
            }
            recommendedIconText = (UnityEngine_Object_o *)this->fields.recommendedIconText;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
            {
              v352 = this->fields.recommendedIconText;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6394/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0LL);
              if ( !v352 )
                goto LABEL_254;
              UILabel__set_text(v352, (System_String_o *)switchSkillUIList, 0LL);
              switchSkillUIList = (__int64)this->fields.recommendedIconText;
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)switchSkillUIList,
                                             0LL);
              if ( !switchSkillUIList )
                goto LABEL_254;
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)switchSkillUIList,
                item->fields.isRecommended,
                0LL);
            }
            numberOfUsabletimes = (UnityEngine_Object_o *)this->fields.numberOfUsabletimes;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
            {
LABEL_725:
              recommendedUser = (UnityEngine_Object_o *)this->fields.recommendedUser;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
              {
                switchSkillUIList = (__int64)this->fields.recommendedUser;
                if ( switchSkillUIList )
                {
                  UnityEngine_GameObject__SetActive(
                    (UnityEngine_GameObject_o *)switchSkillUIList,
                    item->fields._isRecommendedUser_k__BackingField,
                    0LL);
                  return;
                }
                goto LABEL_254;
              }
              return;
            }
            questRestrictionInfo = item->fields.questRestrictionInfo;
            if ( questRestrictionInfo )
            {
              eventId = questRestrictionInfo->fields.eventId;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
              entity = 0LL;
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                      &entity,
                      questRestrictionInfo->fields.eventId,
                      (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                goto LABEL_718;
              v356 = (EventDetailEntity_o *)entity;
              if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              }
              if ( TitleInfoControl__IsEnableEventShopButton_19598560(v356, 0LL) )
              {
                switchSkillUIList = (__int64)entity;
                if ( !entity )
                  goto LABEL_254;
                LODWORD(questRestrictionInfo) = EventDetailEntity__HasFlag(
                                                  (EventDetailEntity_o *)entity,
                                                  0x1000000000LL,
                                                  0LL);
              }
              else
              {
LABEL_718:
                LODWORD(questRestrictionInfo) = 0;
              }
            }
            else
            {
              eventId = -1;
            }
            switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !switchSkillUIList )
              goto LABEL_254;
            if ( *(_BYTE *)(switchSkillUIList + 140) )
              goto LABEL_722;
            if ( *p_followerInfo )
            {
              type = (*p_followerInfo)->fields.type;
              if ( type != 3 )
              {
                v93 = 0LL;
                if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
                  goto LABEL_723;
                goto LABEL_754;
              }
            }
            else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
            {
LABEL_754:
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
              if ( *p_followerInfo )
              {
                userId = (*p_followerInfo)->fields.userId;
                if ( !switchSkillUIList )
                  goto LABEL_254;
              }
              else
              {
                userId = 0LL;
                if ( !switchSkillUIList )
                  goto LABEL_254;
              }
              UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                            (EventBoostItemUsedMaster_o *)switchSkillUIList,
                            eventId,
                            userId,
                            0LL);
              v369 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v369 = BalanceConfig_TypeInfo;
              }
              MaxFriendChocolateUse = v369->static_fields->MaxFriendChocolateUse;
              v388 = MaxFriendChocolateUse;
              if ( UsedCount )
              {
                if ( (BYTE3(v369->vtable._0_Equals.methodPtr) & 4) != 0 && !v369->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v369);
                  MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                }
                v388 = MaxFriendChocolateUse - UsedCount->fields.count;
              }
              numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6379/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0LL);
              if ( numberOfUsabletimesPrefixLabel )
              {
                UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillUIList, 0LL);
                numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
                switchSkillUIList = (__int64)System_Int32__ToString((int32_t)&v388, 0LL);
                if ( numberOfUsabletimesLabel )
                {
                  UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillUIList, 0LL);
                  numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
                  switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6380/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0LL);
                  if ( numberOfUsabletimesSuffixLabel )
                  {
                    UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillUIList, 0LL);
                    if ( v388 )
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v374 = LocalizationManager__Get((System_String_o *)StringLiteral_6377/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v374, &color, 0LL);
                      v375 = LocalizationManager__Get((System_String_o *)StringLiteral_6378/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v375, &v386, 0LL);
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v376 = LocalizationManager__Get((System_String_o *)StringLiteral_6381/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v376, &color, 0LL);
                      switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                      if ( !switchSkillUIList )
                        goto LABEL_254;
                      UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                      v386 = color;
                    }
                    switchSkillUIList = (__int64)this->fields.numberOfUsabletimesSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                    switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, v386, 0LL);
                    v93 = (FollowerRootComponent_c *)(&dword_0 + 1);
                    goto LABEL_723;
                  }
                }
              }
LABEL_254:
              sub_B2C434(switchSkillUIList, v93);
            }
LABEL_722:
            v93 = 0LL;
LABEL_723:
            switchSkillUIList = (__int64)this->fields.numberOfUsabletimes;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, (bool)v93, 0LL);
            goto LABEL_725;
          }
          switchSkillUIList = (__int64)this->fields.maskSprite;
          if ( !switchSkillUIList )
            goto LABEL_254;
          switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)switchSkillUIList,
                                         0LL);
          if ( !switchSkillUIList )
            goto LABEL_254;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
          switchSkillUIList = (__int64)this->fields.maskMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          switchSkillUIList = (__int64)this->fields.warningBase;
          if ( !switchSkillUIList )
            goto LABEL_254;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
          switchSkillUIList = (__int64)this->fields.warningIcon;
          if ( !switchSkillUIList )
            goto LABEL_254;
          FlashingIconComponent__SetFast((FlashingIconComponent_o *)switchSkillUIList, 0LL);
          warningMessageLabel = this->fields.warningMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6393/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
          if ( !warningMessageLabel )
            goto LABEL_254;
          UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          LODWORD(v360) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          v361 = v360;
          switchSkillUIList = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)switchSkillUIList,
                                         0LL);
          v362 = (UnityEngine_Transform_o *)switchSkillUIList;
          warningMessageWidth = (float)this->fields.warningMessageWidth;
          if ( v361 <= warningMessageWidth )
          {
            *(UnityEngine_Vector3_o *)&v365 = UnityEngine_Vector3__get_one(0LL);
            if ( !v362 )
              goto LABEL_254;
          }
          else
          {
            v364 = 1.0;
            v365 = warningMessageWidth / v361;
            v366 = 1.0;
            if ( !switchSkillUIList )
              goto LABEL_254;
          }
          UnityEngine_Transform__set_localScale(v362, *(UnityEngine_Vector3_o *)&v365, 0LL);
        }
        v334 = 1;
        goto LABEL_652;
      }
      switchSkillUIList = (__int64)this->fields.pushSprite;
      if ( !switchSkillUIList )
        goto LABEL_254;
      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)switchSkillUIList,
                                     0LL);
      if ( !switchSkillUIList )
        goto LABEL_254;
LABEL_269:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
      goto LABEL_631;
    }
    v81 = item->fields.followerInfo;
    if ( !v81 )
      goto LABEL_569;
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__Set_30720044(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      v73,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0,
      v81->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v82);
    FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v83);
    FollowerSelectItemListViewItem__GetNpInfo(item, &tdInfo, v84);
    switchSkillUIList = FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, v85);
    v382 = switchSkillUIList;
    if ( !tdInfo )
      goto LABEL_569;
    v383 = (__int64)v77;
    name = tdInfo->fields.name;
    v87 = (System_String_o *)StringLiteral_1/*""*/;
    if ( ServantLeaderInfo__IsNpc(v73, 0LL) )
    {
      dispLimitCount = v73->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v73->fields.npcFlag, 0LL) )
      {
        v89 = tdInfo;
        v90 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
        v91 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v392.fields.currentCryptoKey = v90;
        *(_QWORD *)&v392.fields.fakeValue = v91;
        switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v392, 0LL);
        if ( !v89 )
          goto LABEL_569;
        name = TreasureDvcInfo__GetName(v89, switchSkillUIList, 0LL);
      }
      v92 = !NpcServantFollowerEntity__IsHideRarity(v73->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v73, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !switchSkillUIList )
          goto LABEL_569;
        switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)switchSkillUIList,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !switchSkillUIList )
          goto LABEL_569;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           (ServantLimitSpoilerProtectionMaster_o *)switchSkillUIList,
                           v73->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v92 = 1;
    }
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)switchSkillUIList, v92, 0LL);
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      !item->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v73, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v100 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
      v99 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
      v101 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v393.fields.currentCryptoKey = v100;
      *(_QWORD *)&v393.fields.fakeValue = v99;
      switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v393, 0LL);
      if ( !v101 )
        goto LABEL_569;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                         v101,
                         switchSkillUIList,
                         dispLimitCount,
                         0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v102 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v104 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
    v103 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
    v105 = (ServantLimitAddMaster_o *)v102;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v394.fields.currentCryptoKey = v104;
    *(_QWORD *)&v394.fields.fakeValue = v103;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v394, 0LL);
    if ( !tdInfo || !v105 )
      goto LABEL_569;
    switchSkillUIList = (__int64)ServantLimitAddMaster__GetOverwriteTDName(
                                   v105,
                                   switchSkillUIList,
                                   dispLimitCount,
                                   name,
                                   tdInfo->fields.lv,
                                   0LL);
    v106 = *p_followerInfo;
    if ( !*p_followerInfo )
    {
      FollowerPointNotFriend = 0;
LABEL_178:
      v124 = v87;
      goto LABEL_336;
    }
    v107 = (Il2CppObject *)switchSkillUIList;
    switch ( v106->fields.type )
    {
      case 1:
        v129 = this->fields.playerNameLabel;
        if ( (byte_418AA27 & 1) == 0 )
        {
          switchSkillUIList = sub_B2C35C(&StringLiteral_18395/*"error"*/, item);
          byte_418AA27 = 1;
          v106 = *p_followerInfo;
        }
        if ( !v129 )
          goto LABEL_569;
        if ( v106 )
          v130 = &v106->fields.userName;
        else
          v130 = (System_String_o **)&StringLiteral_18395/*"error"*/;
        UILabel__set_text(v129, *v130, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v131 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v131 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41609428((UIIconLabel_o *)switchSkillUIList, 2, v131, 0, 0, 0LL, 0, 0, 0, 0LL);
        v179 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v180 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v181 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v181 = 0LL;
        v191 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v181, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v180, v191, 0LL);
        if ( !v179 )
          goto LABEL_569;
        UILabel__set_text(v179, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19343/*"icon_friend"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v192 = item->fields.questRestrictionInfo;
        if ( v192 )
        {
          switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)switchSkillUIList,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                                         v192->fields.questId,
                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          HasFlag_23879348 = QuestEntity__HasFlag_23879348(
                               (QuestEntity_o *)switchSkillUIList,
                               0x8000000LL,
                               v192->fields.questPhase,
                               0LL);
          v194 = BalanceConfig_TypeInfo;
          if ( HasFlag_23879348 )
          {
            if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v194 = BalanceConfig_TypeInfo;
            }
            p_FollowFriendPoint = &v194->static_fields->FollowFriendPoint;
LABEL_326:
            FollowerPointNotFriend = *p_FollowFriendPoint;
            v200 = (System_String_o **)&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/;
            v190 = LocalizationManager_TypeInfo;
            if ( v382 <= 1 )
              v200 = (System_String_o **)&StringLiteral_9376/*"NP_COLOR_NAME"*/;
            v199 = *v200;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
LABEL_329:
              if ( !v190->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v190);
            }
LABEL_331:
            v201 = LocalizationManager__Get(v199, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v201, v107, 0LL);
            if ( !this->fields.supportInfoButton )
              goto LABEL_569;
            v124 = (System_String_o *)switchSkillUIList;
            switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                           0LL);
            if ( !switchSkillUIList )
              goto LABEL_569;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
            switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
            if ( !switchSkillUIList )
              goto LABEL_569;
            v125 = 1;
LABEL_335:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v125, 0LL);
LABEL_336:
            IsHideSupport = ServantLeaderInfo__IsHideSupport(v73, 0LL);
            v204 = this->fields.svtNameRangeLabel;
            if ( IsHideSupport )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11733/*"SERVANT_HIDE_NAME"*/, 0LL);
              if ( !v204 )
                goto LABEL_569;
              UIRangeLabel__Set(v204, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
              switchSkillUIList = (__int64)this->fields.playerNameLabel;
              if ( !switchSkillUIList )
                goto LABEL_569;
              UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              if ( !*p_followerInfo || (*p_followerInfo)->fields.type != 4 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9379/*"NP_HIDE_NAME_LEVEL"*/, 0LL);
                v124 = (System_String_o *)switchSkillUIList;
              }
            }
            else
            {
              switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_SvtNameText(item, v203);
              if ( !v204 )
                goto LABEL_569;
              UIRangeLabel__Set(v204, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
            }
            if ( tdInfo )
            {
              strengthStatus = tdInfo->fields.strengthStatus;
              if ( ServantLeaderInfo__IsHideSupport(v73, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v73, 0LL) )
                strengthStatus = 0;
              v206 = this->fields.svtNpRangeLabel;
              switchSkillUIList = (__int64)StrengthStatus__GetIconName(strengthStatus, 0LL);
              if ( v206 )
              {
                UIRangeLabel__Set(v206, v124, (System_String_o *)switchSkillUIList, 0, 0, 0LL);
                v207 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
                {
                  switchSkillUIList = ServantLeaderInfo__IsHideSupport(v73, 0LL);
                  v209 = this->fields.svtNpCommandCard;
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !v209 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__SetHide(this->fields.svtNpCommandCard, 0LL);
                  }
                  else
                  {
                    if ( !v209 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__Set(this->fields.svtNpCommandCard, tdInfo, 0LL);
                  }
                }
                FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, v208);
                friendPointCampaignEntity = item->fields.friendPointCampaignEntity;
                v212 = FriendPointUpVal;
                v213 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
                switchSkillUIList = (__int64)this->fields.friendPointIconLabel;
                if ( switchSkillUIList )
                {
                  UIIconLabel__Set_41609428(
                    (UIIconLabel_o *)switchSkillUIList,
                    55,
                    FollowerPointNotFriend,
                    0,
                    0,
                    0LL,
                    0,
                    0,
                    0,
                    0LL);
                  if ( v212 > 0 || v213 >= 1 )
                  {
                    if ( v213 <= 0 )
                      v215 = 1000;
                    else
                      v215 = v213;
                    v216 = 274877907LL * (v215 * v212 + (v215 - 1000) * FollowerPointNotFriend);
                    friendPointData2Label = this->fields.friendPointData2Label;
                    v218 = (v216 >> 38) + ((unsigned __int64)v216 >> 63);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v219 = LocalizationManager__Get((System_String_o *)StringLiteral_6400/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
                    TimesToRestart_k__BackingField = v218;
                    v220 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                    switchSkillUIList = (__int64)System_String__Format(v219, v220, 0LL);
                    if ( !friendPointData2Label )
                      goto LABEL_569;
                    v214 = (System_String_o *)switchSkillUIList;
                    switchSkillUIList = (__int64)friendPointData2Label;
                  }
                  else
                  {
                    switchSkillUIList = (__int64)this->fields.friendPointData2Label;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    v214 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text((UILabel_o *)switchSkillUIList, v214, 0LL);
                  campaignLabel = this->fields.campaignLabel;
                  if ( item->fields.friendPointCampaignEntity )
                  {
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItemDraw_TypeInfo;
                    if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItemDraw_TypeInfo;
                    }
                    if ( !campaignLabel )
                      goto LABEL_569;
                    UILabel__set_gradientTop(
                      campaignLabel,
                      *(UnityEngine_Color_o *)*(_QWORD *)(switchSkillUIList + 184),
                      0LL);
                    switchSkillUIList = (__int64)this->fields.campaignLabel;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    UILabel__set_gradientBottom(
                      (UILabel_o *)switchSkillUIList,
                      FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
                      0LL);
                    v222 = this->fields.campaignLabel;
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__GetFriendPointCampaignName(item, v223);
                    if ( !v222 )
                      goto LABEL_569;
                    v224 = (System_String_o *)switchSkillUIList;
                    v225 = v222;
                  }
                  else
                  {
                    if ( !campaignLabel )
                      goto LABEL_569;
                    v225 = this->fields.campaignLabel;
                    v224 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text(v225, v224, 0LL);
                  v226 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
                  {
                    if ( FollowerSelectItemListViewItem__get_ServantLeader(item, v227) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v229);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v230 = *(_QWORD *)(switchSkillUIList + 48);
                      v231 = *(_QWORD *)(switchSkillUIList + 56);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v395.fields.currentCryptoKey = v230;
                      *(_QWORD *)&v395.fields.fakeValue = v231;
                      v232 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v395, 0LL);
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v233);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)switchSkillUIList, 0LL);
                    }
                    else
                    {
                      Rarity = -1;
                      v232 = -1;
                    }
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v229);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    if ( *(_QWORD *)(switchSkillUIList + 144) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(
                                                     item,
                                                     (const MethodInfo *)item);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v235 = *(_QWORD *)(switchSkillUIList + 144);
                      if ( !v235 )
                        goto LABEL_569;
                      v236 = *(_QWORD *)(v235 + 56);
                      v237 = *(_QWORD *)(v235 + 64);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v396.fields.currentCryptoKey = v236;
                      *(_QWORD *)&v396.fields.fakeValue = v237;
                      v238 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v396, 0LL);
                    }
                    else
                    {
                      v238 = -1;
                    }
                    switchSkillUIList = (__int64)this->fields.eventUpValIcon;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    EventUpValIconComponent__Set(
                      (EventUpValIconComponent_o *)switchSkillUIList,
                      item->fields.eventUpValItemList,
                      v232,
                      Rarity,
                      v238,
                      0LL);
                  }
                  p_skillInfoList = &this->fields.skillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetSkillInfo(
                                        item,
                                        &this->fields.skillInfoList,
                                        v228);
                  v241 = this->fields.skillIconList;
                  if ( !v241 )
                    goto LABEL_569;
                  v242 = *(_QWORD *)&v241->max_length;
                  if ( v242 << 32 >= 1 )
                  {
                    v243 = *p_skillInfoList;
                    v244 = 0;
                    v245 = 0LL;
                    while ( v243 )
                    {
                      max_length = v243->max_length;
                      if ( (__int64)v245 < (int)max_length )
                      {
                        if ( v245 >= max_length )
                        {
LABEL_795:
                          v377 = sub_B2C460(switchSkillUIList);
                          sub_B2C400(v377, 0LL);
                        }
                        v247 = (*p_skillInfoList)->m_Items[v245];
                        if ( v247 && v247->fields.id >= 1 )
                          v244 = v245 + 1;
                      }
                      if ( (__int64)++v245 >= (int)v242 )
                        goto LABEL_425;
                    }
                    goto LABEL_569;
                  }
                  v244 = 0;
LABEL_425:
                  if ( (int)v242 >= 1 )
                  {
                    v248 = v244;
                    v249 = 4LL;
                    do
                    {
                      v250 = v249 - 4;
                      if ( v249 - 4 >= v248 )
                      {
                        v256 = this->fields.skillBaseList;
                        if ( !v256 )
                          goto LABEL_569;
                        if ( v250 >= v256->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v256->obj.klass + v249);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v251 = *p_skillInfoList;
                        if ( !*p_skillInfoList )
                          goto LABEL_569;
                        if ( v250 >= v251->max_length )
                          goto LABEL_795;
                        v252 = this->fields.skillBaseList;
                        if ( !v252 )
                          goto LABEL_569;
                        if ( v250 >= v252->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v252->obj.klass + v249);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v253 = (int32_t *)*((_QWORD *)&v251->obj.klass + v249);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v73, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v253 )
                            v253[4] = 0;
                          v254 = this->fields.skillIconList;
                          if ( !v254 )
                            goto LABEL_569;
                          if ( v250 >= v254->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v254->obj.klass + v249);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
                          if ( !skillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v250 >= skillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v249);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v257 = this->fields.skillIconList;
                          if ( !v257 )
                            goto LABEL_569;
                          if ( v250 >= v257->max_length )
                            goto LABEL_795;
                          if ( !v253 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v257->obj.klass + v249);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_23786384(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v253[4],
                            v253[5],
                            v253[12],
                            v253[13],
                            0LL);
                          v258 = this->fields.skillLevelIconLabelList;
                          if ( !v258 )
                            goto LABEL_569;
                          if ( v250 >= v258->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v258->obj.klass + v249);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41609428(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v253[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v259 = this->fields.skillIconList;
                      if ( !v259 )
                        goto LABEL_569;
                      v260 = v249 - 3;
                      ++v249;
                    }
                    while ( v260 < (int)v259->max_length );
                  }
                  v261 = this->fields.displaySkill;
                  if ( v261 == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillUIList,
                                                   0LL);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                    switchSkillUIList = (__int64)this->fields.switchSkillUIList;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    if ( v261 == 1 )
                    {
                      switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v262 = 0;
                    }
                    else
                    {
                      if ( v261 )
                        goto LABEL_472;
                      switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillUIList + 440LL))(
                        switchSkillUIList,
                        *(_QWORD *)(*(_QWORD *)switchSkillUIList + 448LL),
                        1.0);
                      switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v262 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v262, 0LL);
                  }
LABEL_472:
                  p_appendSkillInfoList = &this->fields.appendSkillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                        item,
                                        &this->fields.appendSkillInfoList,
                                        item->fields.isNpc,
                                        v240);
                  v264 = this->fields.appendSkillIconList;
                  if ( !v264 )
                    goto LABEL_569;
                  v265 = *(_QWORD *)&v264->max_length;
                  if ( v265 << 32 < 1 )
                  {
                    v267 = 0;
                  }
                  else
                  {
                    v266 = *p_appendSkillInfoList;
                    v267 = 0;
                    v268 = 0LL;
                    do
                    {
                      if ( v266 )
                      {
                        v269 = v266->max_length;
                        if ( v268 < (int)v269 )
                        {
                          if ( v268 >= v269 )
                            goto LABEL_795;
                          v270 = (*p_appendSkillInfoList)->m_Items[v268];
                          if ( v270 && v270->fields.id >= 1 )
                            v267 = v268 + 1;
                        }
                      }
                      ++v268;
                    }
                    while ( v268 < (int)v265 );
                  }
                  if ( (int)v265 >= 1 )
                  {
                    v271 = v267;
                    v272 = 4LL;
                    do
                    {
                      v273 = v272 - 4;
                      if ( v272 - 4 >= v271 )
                      {
                        v279 = this->fields.appendSkillBaseList;
                        if ( !v279 )
                          goto LABEL_569;
                        if ( v273 >= v279->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v279->obj.klass + v272);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v274 = *p_appendSkillInfoList;
                        if ( !*p_appendSkillInfoList )
                          goto LABEL_569;
                        if ( v273 >= v274->max_length )
                          goto LABEL_795;
                        v275 = this->fields.appendSkillBaseList;
                        if ( !v275 )
                          goto LABEL_569;
                        if ( v273 >= v275->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v275->obj.klass + v272);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v276 = (int32_t *)*((_QWORD *)&v274->obj.klass + v272);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v73, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v276 )
                            v276[4] = 0;
                          v277 = this->fields.appendSkillIconList;
                          if ( !v277 )
                            goto LABEL_569;
                          if ( v273 >= v277->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v277->obj.klass + v272);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                          if ( !appendSkillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v273 >= appendSkillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v272);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v280 = this->fields.appendSkillIconList;
                          if ( !v280 )
                            goto LABEL_569;
                          if ( v273 >= v280->max_length )
                            goto LABEL_795;
                          if ( !v276 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v280->obj.klass + v272);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_23786384(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v276[4],
                            v276[5],
                            v276[12],
                            v276[13],
                            0LL);
                          v281 = this->fields.appendSkillLevelIconLabelList;
                          if ( !v281 )
                            goto LABEL_569;
                          if ( v273 >= v281->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v281->obj.klass + v272);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41609428(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v276[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v282 = this->fields.appendSkillIconList;
                      if ( !v282 )
                        goto LABEL_569;
                      v283 = v272 - 3;
                      ++v272;
                    }
                    while ( v283 < (int)v282->max_length );
                  }
                  v284 = this->fields.displaySkill;
                  if ( v284 == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                    v77 = (System_String_o *)v383;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillUIList,
                                                   0LL);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                    switchSkillUIList = (__int64)this->fields.switchSkillUIList;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)switchSkillUIList,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    v77 = (System_String_o *)v383;
                    if ( v284 == 1 )
                    {
                      switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillUIList + 440LL))(
                        switchSkillUIList,
                        *(_QWORD *)(*(_QWORD *)switchSkillUIList + 448LL),
                        1.0);
                      switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v285 = 1;
                    }
                    else
                    {
                      if ( v284 )
                        goto LABEL_535;
                      switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v285 = 0;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v285, 0LL);
                  }
                  if ( this->fields.displaySkill == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.switchSkillUIList;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillInfo = this->fields.switchSkillInfo;
                    switchSkillUIList = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillUIList,
                                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !switchSkillInfo )
                      goto LABEL_569;
                    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)switchSkillUIList, 0LL);
                  }
LABEL_535:
                  v287 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v287, 0LL, 0LL) )
                  {
                    switchSkillUIList = ServantLeaderInfo__IsHideSupport(v73, 0LL);
                    v288 = this->fields.svtCommandCardList;
                    if ( (switchSkillUIList & 1) != 0 )
                    {
                      if ( !v288 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__SetHide(this->fields.svtCommandCardList, 0LL);
                    }
                    else
                    {
                      SvtId = FollowerSelectItemListViewItem__get_SvtId(item, (const MethodInfo *)item);
                      commandCardParam = v73->fields.commandCardParam;
                      v291 = SvtId;
                      switchSkillUIList = (__int64)ServantLeaderInfo__getCommandCodeIdList(v73, 0LL);
                      if ( !v288 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__Set_29228872(
                        v288,
                        v291,
                        commandCardParam,
                        (System_Int32_array *)switchSkillUIList,
                        2,
                        1,
                        0LL);
                      v77 = (System_String_o *)v383;
                    }
                  }
                  v292 = (UnityEngine_Object_o *)this->fields.pushSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  switchSkillUIList = UnityEngine_Object__op_Inequality(v292, 0LL, 0LL);
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !*p_followerInfo )
                      goto LABEL_569;
                    pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
                    v294 = pushUserSvtId && pushUserSvtId == v73->fields.userSvtId;
                    switchSkillUIList = (__int64)this->fields.pushSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillUIList,
                                                   0LL);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v294, 0LL);
                  }
                  v295 = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v295, 0LL, 0LL) )
                  {
                    v296 = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(v296, 0LL, 0LL) )
                    {
                      if ( item->fields._IsDataLost_k__BackingField )
                      {
                        v297 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetPartyOrganizationImage(v297, (System_String_o *)StringLiteral_17883/*"datalost_svt_select"*/, 0LL);
                        v298 = (UIWidget_o *)this->fields.dataLostMaskSprite;
                        *(UnityEngine_Color_o *)&v299 = UnityEngine_Color__get_white(0LL);
                        if ( !v298 )
                          goto LABEL_569;
                        UIWidget__set_color(v298, *(UnityEngine_Color_o *)&v299, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                      }
                      else
                      {
                        if ( item->fields._TimesToRestart_k__BackingField < 1 )
                          goto LABEL_585;
                        v303 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetCommon(v303, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        UISprite__set_spriteName(
                          (UISprite_o *)switchSkillUIList,
                          (System_String_o *)StringLiteral_19483/*"img_frames_mask01"*/,
                          0LL);
                        *(UnityEngine_Color_o *)&v304 = UnityEngine_Color__get_black(0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v307 = 1059037088;
                        UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v304, 0LL);
                        v308 = this->fields.dataLostMaskMessageLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v309 = LocalizationManager__Get((System_String_o *)StringLiteral_11637/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
                        v310 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                        switchSkillUIList = (__int64)System_String__Format(v309, v310, 0LL);
                        if ( !v308 )
                          goto LABEL_254;
                        UILabel__set_text(v308, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)switchSkillUIList,
                                                       0LL);
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskMessageLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                      }
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_254;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                    }
                  }
LABEL_585:
                  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                  {
                    if ( (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0
                      || !item->fields._IsReleasedClassBoard_k__BackingField )
                    {
                      switchSkillUIList = (__int64)this->fields.openClassBoardNumLabel;
                      if ( !switchSkillUIList )
                        goto LABEL_254;
                      v315 = (System_String_o *)StringLiteral_1/*""*/;
                    }
                    else
                    {
                      if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                        v312 = (Il2CppObject **)&StringLiteral_6334/*"FFFF00"*/;
                      else
                        v312 = (Il2CppObject **)&StringLiteral_6335/*"FFFFFF"*/;
                      v313 = *v312;
                      TimesToRestart_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                      v314 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                      switchSkillUIList = (__int64)System_String__Format_44301068(
                                                     (System_String_o *)StringLiteral_15830/*"[{0}]+{1}[-]"*/,
                                                     v313,
                                                     v314,
                                                     0LL);
                      if ( !this->fields.openClassBoardNumLabel )
                        goto LABEL_254;
                      v315 = (System_String_o *)switchSkillUIList;
                      switchSkillUIList = (__int64)this->fields.openClassBoardNumLabel;
                    }
                    UILabel__set_text((UILabel_o *)switchSkillUIList, v315, 0LL);
                  }
                  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
                    goto LABEL_631;
                  switchSkillUIList = (__int64)this->fields.classBoardOpenButton;
                  if ( !switchSkillUIList )
                    goto LABEL_254;
                  IsReleasedClassBoard_k__BackingField = item->fields._IsReleasedClassBoard_k__BackingField;
                  switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)switchSkillUIList,
                                                 0LL);
                  if ( !switchSkillUIList )
                    goto LABEL_254;
                  if ( IsReleasedClassBoard_k__BackingField )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                    switchSkillUIList = (__int64)this->fields.classBoardOpenButton;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UICommonButton__SetButtonEnable(
                      (UICommonButton_o *)switchSkillUIList,
                      item->fields._OpenClassBoardNum_k__BackingField >= 0,
                      1,
                      0LL);
                    classBoardOpenButtonLabel = (UnityEngine_Object_o *)this->fields.classBoardOpenButtonLabel;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(classBoardOpenButtonLabel, 0LL, 0LL) )
                    {
                      v319 = this->fields.classBoardOpenButtonLabel;
                      if ( (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12476/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                       0LL);
                        if ( !v319 )
                          goto LABEL_254;
                        UILabel__set_text(v319, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v320 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v323->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y;
                      }
                      else
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12475/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                       0LL);
                        if ( !v319 )
                          goto LABEL_254;
                        UILabel__set_text(v319, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v320 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v321 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v321 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v321->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y;
                      }
                      GameObjectExtensions__SetLocalPositionY(v320, CLASS_BOARD_NOT_LABEL_POS_Y, 0LL);
                    }
                    goto LABEL_631;
                  }
                  goto LABEL_269;
                }
              }
            }
LABEL_569:
            sub_B2C434(switchSkillUIList, item);
          }
          if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            goto LABEL_323;
        }
        else
        {
          v194 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_323:
            if ( !v194->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v194);
              v194 = BalanceConfig_TypeInfo;
            }
          }
        }
        p_FollowFriendPoint = &v194->static_fields->FollowerPointFriend;
        goto LABEL_326;
      case 2:
        v132 = this->fields.playerNameLabel;
        if ( (byte_418AA27 & 1) == 0 )
        {
          switchSkillUIList = sub_B2C35C(&StringLiteral_18395/*"error"*/, item);
          byte_418AA27 = 1;
          v106 = *p_followerInfo;
        }
        if ( !v132 )
          goto LABEL_569;
        if ( v106 )
          v133 = &v106->fields.userName;
        else
          v133 = (System_String_o **)&StringLiteral_18395/*"error"*/;
        UILabel__set_text(v132, *v133, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v134 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v134 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41609428((UIIconLabel_o *)switchSkillUIList, 2, v134, 0, 0, 0LL, 0, 0, 0, 0LL);
        v182 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v183 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v184 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v184 = 0LL;
        v196 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v184, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v183, v196, 0LL);
        if ( !v182 )
          goto LABEL_569;
        UILabel__set_text(v182, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
        v197 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v197 = BalanceConfig_TypeInfo;
        }
        static_fields = v197->static_fields;
        v188 = (System_String_o **)&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/;
        v189 = v382;
        v190 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = static_fields->FollowerPointNotFriend;
LABEL_316:
        if ( v189 <= 1 )
          v188 = (System_String_o **)&StringLiteral_9376/*"NP_COLOR_NAME"*/;
        v199 = *v188;
        if ( (BYTE3(v190->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_331;
        goto LABEL_329;
      case 3:
      case 4:
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v383 = StringLiteral_19519/*"img_listbg_02"*/;
        UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.loginDataLabel;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UILabel__set_text((UILabel_o *)switchSkillUIList, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19376/*"icon_support_01"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v108 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v108 = BalanceConfig_TypeInfo;
        }
        FollowerPointNotFriend = v108->static_fields->FollowerPointNpc;
        if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
        {
          v110 = (System_String_o **)&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/;
          if ( v382 <= 1 )
            v110 = (System_String_o **)&StringLiteral_9376/*"NP_COLOR_NAME"*/;
          v111 = *v110;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v112 = LocalizationManager__Get(v111, 0LL);
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v112 = LocalizationManager__Get((System_String_o *)StringLiteral_9377/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
          v107 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9378/*"NP_HIDE_NAME"*/, 0LL);
        }
        switchSkillUIList = (__int64)System_String__Format(v112, v107, 0LL);
        if ( !this->fields.supportInfoButton )
          goto LABEL_569;
        v124 = (System_String_o *)switchSkillUIList;
        switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                       0LL);
        if ( !switchSkillUIList )
          goto LABEL_569;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
        switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v125 = 0;
        goto LABEL_335;
      case 5:
        v126 = this->fields.playerNameLabel;
        if ( (byte_418AA27 & 1) == 0 )
        {
          switchSkillUIList = sub_B2C35C(&StringLiteral_18395/*"error"*/, item);
          byte_418AA27 = 1;
          v106 = *p_followerInfo;
        }
        if ( !v126 )
          goto LABEL_569;
        if ( v106 )
          v127 = &v106->fields.userName;
        else
          v127 = (System_String_o **)&StringLiteral_18395/*"error"*/;
        UILabel__set_text(v126, *v127, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v128 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v128 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41609428((UIIconLabel_o *)switchSkillUIList, 2, v128, 0, 0, 0LL, 0, 0, 0, 0LL);
        v176 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v177 = LocalizationManager__Get((System_String_o *)StringLiteral_13371/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v178 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v178 = 0LL;
        v185 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v178, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v177, v185, 0LL);
        if ( !v176 )
          goto LABEL_569;
        UILabel__set_text(v176, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19342/*"icon_follow"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v186 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v186 = BalanceConfig_TypeInfo;
        }
        v187 = v186->static_fields;
        v188 = (System_String_o **)&StringLiteral_9382/*"NP_MAX_COLOR_NAME"*/;
        v189 = v382;
        v190 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = v187->FollowFriendPoint;
        goto LABEL_316;
      default:
        FollowerPointNotFriend = 0;
        goto LABEL_178;
    }
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetupLockUI(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v3; // x20
  UnityEngine_Object_o *lockMarkSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  v3 = item;
  if ( (byte_418AA30 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_418AA30 = 1;
  }
  if ( v3 )
    LOBYTE(v3) = v3->fields.isLockUser;
  lockMarkSprite = (UnityEngine_Object_o *)this->fields.lockMarkSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockMarkSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockMarkSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B2C434(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v3, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__setupMessageUI(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v4; // x19
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_GameObject_o *v6; // x0
  bool v7; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  struct FollowerInfo_o *v9; // x8
  UnityEngine_GameObject_o *v10; // x0
  int v11; // s0
  UnityEngine_GameObject_o *v12; // x0

  v4 = this;
  if ( (byte_418AA2F & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)sub_B2C35C(&OptionManager_TypeInfo, item);
    byte_418AA2F = 1;
  }
  if ( !item )
LABEL_34:
    sub_B2C434(this, item);
  followerInfo = item->fields.followerInfo;
  if ( followerInfo )
  {
    switch ( followerInfo->fields.type )
    {
      case 1:
        if ( System_String__IsNullOrEmpty(followerInfo->fields.message, 0LL) )
          goto LABEL_26;
        if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OptionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        }
        if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
          goto LABEL_26;
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_34;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
        v9 = item->fields.followerInfo;
        if ( !v9 )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        UILabel__set_text((UILabel_o *)this, v9->fields.message, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -1.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, -1.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
        if ( !this )
          goto LABEL_34;
        v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v11 = 1112801280;
        goto LABEL_33;
      case 2:
      case 5:
LABEL_26:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_34;
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v12, -19.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( !this )
          goto LABEL_34;
        v7 = 1;
        goto LABEL_31;
      case 3:
      case 4:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_34;
        v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v6, -16.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( !this )
          goto LABEL_34;
        v7 = 0;
LABEL_31:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -11.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, 10.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
        if ( !this )
          goto LABEL_34;
        v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v11 = 1113849856;
LABEL_33:
        GameObjectExtensions__SetLocalPositionY(v10, *(float *)&v11, 0LL);
        break;
      default:
        return;
    }
  }
}