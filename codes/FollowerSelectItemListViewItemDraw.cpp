// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int v5; // s0
  int v6; // s1
  int v7; // s2
  float v8; // s4
  float v9; // s5
  float v10; // s6
  FollowerSelectItemListViewItemDraw_c *v11; // x8
  struct UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v13; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435536D & 1) == 0 )
  {
    sub_B70694(&FollowerSelectItemListViewItemDraw_TypeInfo);
    byte_435536D = 1;
  }
  v5 = 1065287423;
  v6 = 1064300528;
  v7 = 1058642330;
  v13 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41064944(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v13);
  v14.fields.g = 0.64706;
  v14.fields.b = 0.27059;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = v13;
  v14.fields.r = 0.88235;
  v12 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41064944(v14, v8, v9, v10, (const MethodInfo *)&v12);
  v11 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = v12;
  v11->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 12.0;
  v11->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y = 11.0;
}


void __fastcall FollowerSelectItemListViewItemDraw___ctor(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct SkillIconComponent_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UIIconLabel_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_GameObject_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct SkillIconComponent_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UIIconLabel_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_435536C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&SkillIconComponent___TypeInfo);
    sub_B70694(&UIIconLabel___TypeInfo);
    byte_435536C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_B706AC(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct SkillIconComponent_array *)sub_B706AC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UIIconLabel_array *)sub_B706AC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UnityEngine_GameObject_array *)sub_B706AC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v25;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (struct SkillIconComponent_array *)sub_B706AC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v32;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (struct UIIconLabel_array *)sub_B706AC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v39;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__Awake(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UISprite_o *skillIconSprite; // x20

  if ( (byte_4355366 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B70694(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B70694(&StringLiteral_19667/*"icon_skill_mini"*/);
    sub_B70694(&StringLiteral_19801/*"img_friend_skill"*/);
    sub_B70694(&StringLiteral_19577/*"icon_append_mini"*/);
    sub_B70694(&StringLiteral_19800/*"img_friend_appendskill"*/);
    byte_4355366 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19667/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_19801/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19577/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_19800/*"img_friend_appendskill"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t displaySkill,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  _BOOL4 v9; // w8
  __int64 v10; // x20
  __int64 v11; // x21
  int32_t v12; // w9
  SwitchUIWidgetComponent_o *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_435536B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_435536B = 1;
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
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
  v9 = (int)ServantLeader;
  if ( ServantLeader )
  {
    v11 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v11;
    *(_QWORD *)&v14.fields.fakeValue = v10;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v14, 0LL) > 0;
  }
  v12 = this->fields.displaySkill;
  if ( v12 == 2 )
  {
    if ( v9 )
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
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v13 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillInfo,
                                                       (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v13 )
      {
        SwitchUIWidgetComponent__Set(v13, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B7076C(switchSkillInfo, *(_QWORD *)&displaySkill);
  }
  if ( v12 != 1 )
  {
    if ( v12 )
      return;
    if ( !v9 )
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
  if ( v9 )
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
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Behaviour_o *supportInfoButton; // x0
  __int64 v9; // x1
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v12; // w24
  Il2CppClass **v13; // x8
  UnityEngine_Behaviour_o *v14; // x21
  WebViewObject_o *Component_WebViewObject; // x22
  __int64 v16; // x0

  if ( (byte_435536A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435536A = 1;
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
      v12 = 0;
      do
      {
        if ( v12 >= skillButtonList->max_length )
        {
          v16 = sub_B70798(supportInfoButton);
          sub_B70738(v16, 0LL);
        }
        v13 = &skillButtonList->obj.klass + (int)v12;
        v14 = (UnityEngine_Behaviour_o *)v13[4];
        if ( !v14 )
          break;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v13[4],
                                    (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))v14->klass[1]._1.namespaze)(
          v14,
          1LL,
          v14->klass[1]._1.byval_arg.data);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v14->klass[1]._1.implementedInterfaces)(
          v14,
          0LL,
          0LL,
          v14->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v14, isInput, 0LL);
        if ( !Component_WebViewObject )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_WebViewObject, 1, 0LL);
        if ( (int)++v12 >= max_length )
          goto LABEL_20;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_19:
      sub_B7076C(supportInfoButton, v9);
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
  __int64 switchSkillUIList; // x0
  UnityEngine_Object_o *rangeSprite; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  ServantLeaderInfo_o *v13; // x21
  int32_t Kind_27772296; // w22
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x23
  System_String_o *v17; // x25
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x23
  __int64 v19; // x23
  __int64 v20; // x24
  struct FollowerInfo_o *v21; // x8
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  System_String_o *name; // x27
  System_String_o *v27; // x26
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v29; // x27
  __int64 v30; // x23
  __int64 v31; // x28
  bool v32; // w8
  FollowerRootComponent_c *v33; // x1
  UIRangeLabel_o *svtNameRangeLabel; // x24
  const MethodInfo *v35; // x2
  FollowerInfo_o *v36; // x8
  bool v37; // w1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v39; // x23
  __int64 v40; // x24
  ServantLimitImageMaster_o *v41; // x28
  WarQuestSelectionMaster_o *v42; // x0
  __int64 v43; // x23
  __int64 v44; // x24
  ServantLimitAddMaster_o *v45; // x28
  FollowerInfo_o *v46; // x8
  Il2CppObject *v47; // x25
  BalanceConfig_c *v48; // x0
  int32_t FollowerPointNotFriend; // w27
  System_String_o **v50; // x8
  System_String_o *v51; // x23
  System_String_o *v52; // x24
  System_String_o *v53; // x26
  UILabel_o *v54; // x24
  System_String_o **v55; // x8
  int32_t v56; // w2
  UILabel_o *playerNameLabel; // x24
  System_String_o **p_userName; // x8
  int32_t userLv; // w2
  System_String_o *v60; // x26
  UILabel_o *v61; // x24
  System_String_o **v62; // x8
  int32_t v63; // w2
  System_String_o *v64; // x25
  bool v65; // w1
  UILabel_o *v66; // x26
  System_String_o **v67; // x8
  int32_t v68; // w2
  UILabel_o *v69; // x26
  System_String_o **v70; // x8
  int32_t v71; // w2
  UILabel_o *v72; // x26
  System_String_o **v73; // x8
  int32_t v74; // w2
  UILabel_o *v75; // x24
  System_String_o *v76; // x25
  int64_t v77; // x0
  UILabel_o *loginDataLabel; // x24
  System_String_o *v79; // x25
  int64_t UpdatedAt; // x0
  UILabel_o *v81; // x24
  System_String_o *v82; // x25
  int64_t v83; // x0
  Il2CppObject *v84; // x0
  __int64 *v85; // x8
  Il2CppObject *v86; // x0
  Il2CppObject *v87; // x0
  const MethodInfo *v88; // x2
  UIRangeLabel_o *svtNpRangeLabel; // x24
  UnityEngine_Object_o *svtNpCommandCard; // x23
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct SkillIconComponent_array *skillIconList; // x8
  struct SkillInfo_array *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct SkillIconComponent_array *v100; // x8
  __int64 v101; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillInfo_array *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  struct SkillIconComponent_array *v111; // x8
  __int64 v112; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v116; // x26
  System_String_o *v117; // x27
  int64_t v118; // x0
  UILabel_o *v119; // x26
  System_String_o *v120; // x27
  int64_t v121; // x0
  UILabel_o *v122; // x26
  System_String_o *v123; // x27
  int64_t v124; // x0
  Il2CppObject *v125; // x0
  BalanceConfig_c *v126; // x0
  struct BalanceConfig_StaticFields *v127; // x8
  System_String_o **v128; // x9
  int v129; // w11
  LocalizationManager_c *v130; // x0
  Il2CppObject *v131; // x0
  struct QuestRestrictionInfo_o *v132; // x24
  bool HasFlag_26076348; // w0
  BalanceConfig_c *v134; // x8
  int32_t *p_FollowFriendPoint; // x8
  Il2CppObject *v136; // x0
  BalanceConfig_c *v137; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v139; // x23
  System_String_o **v140; // x8
  System_String_o *v141; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v143; // x1
  UIRangeLabel_o *v144; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v146; // x23
  UnityEngine_Object_o *v147; // x23
  const MethodInfo *v148; // x1
  struct ServantNpCommandCardComponent_o *v149; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v152; // w24
  int v153; // w23
  System_String_o *v154; // x1
  int v155; // w8
  __int64 v156; // x8
  struct UILabel_o *friendPointData2Label; // x24
  int32_t v158; // w25
  System_String_o *v159; // x23
  __int64 v160; // x2
  Il2CppObject *v161; // x0
  UILabel_o *campaignLabel; // x24
  struct UILabel_o *v163; // x23
  const MethodInfo *v164; // x1
  System_String_o *v165; // x1
  UILabel_o *v166; // x0
  UnityEngine_Object_o *v167; // x23
  const MethodInfo *v168; // x1
  const MethodInfo *v169; // x2
  const MethodInfo *v170; // x1
  __int64 v171; // x23
  __int64 v172; // x24
  int32_t v173; // w24
  const MethodInfo *v174; // x1
  int32_t Rarity; // w25
  __int64 v176; // x8
  __int64 v177; // x23
  __int64 v178; // x26
  int32_t v179; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  const MethodInfo *v181; // x3
  struct SkillIconComponent_array *v182; // x8
  __int64 v183; // x8
  struct SkillInfo_array *v184; // x11
  int v185; // w9
  unsigned __int64 v186; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v188; // x14
  __int64 v189; // x23
  __int64 v190; // x25
  unsigned __int64 v191; // x26
  struct SkillInfo_array *v192; // x8
  struct UnityEngine_GameObject_array *v193; // x9
  int32_t *v194; // x27
  struct SkillIconComponent_array *v195; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v197; // x8
  struct SkillIconComponent_array *v198; // x8
  struct UIIconLabel_array *v199; // x8
  struct SkillIconComponent_array *v200; // x8
  __int64 v201; // x9
  int32_t v202; // w8
  bool v203; // w1
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v205; // x8
  __int64 v206; // x8
  struct SkillInfo_array *v207; // x11
  int v208; // w9
  signed __int64 v209; // x10
  unsigned __int64 v210; // x14
  SkillInfo_o *v211; // x14
  __int64 v212; // x23
  __int64 v213; // x25
  unsigned __int64 v214; // x26
  struct SkillInfo_array *v215; // x8
  struct UnityEngine_GameObject_array *v216; // x9
  int32_t *v217; // x27
  struct SkillIconComponent_array *v218; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v220; // x8
  struct SkillIconComponent_array *v221; // x8
  struct UIIconLabel_array *v222; // x8
  struct SkillIconComponent_array *v223; // x8
  __int64 v224; // x9
  int32_t v225; // w8
  bool v226; // w1
  SwitchUIWidgetComponent_o *switchSkillInfo; // x23
  UnityEngine_Object_o *v228; // x23
  ServantCommandCardListComponent_o *v229; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v232; // w26
  UnityEngine_Object_o *v233; // x23
  int64_t pushUserSvtId; // x8
  bool v235; // w24
  UnityEngine_Object_o *v236; // x23
  UnityEngine_Object_o *v237; // x23
  UISprite_o *v238; // x24
  UIWidget_o *v239; // x24
  int v240; // s0
  UISprite_o *v244; // x23
  int v245; // s0
  int v248; // s3
  UILabel_o *v249; // x24
  System_String_o *v250; // x23
  __int64 v251; // x2
  Il2CppObject *v252; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v254; // x2
  Il2CppObject **v255; // x9
  Il2CppObject *v256; // x23
  Il2CppObject *v257; // x0
  System_String_o *v258; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  UILabel_o *v262; // x24
  UnityEngine_GameObject_o *v263; // x24
  FollowerSelectItemListViewItemDraw_c *v264; // x8
  float CLASS_BOARD_NOT_LABEL_POS_Y; // s0
  FollowerSelectItemListViewItemDraw_c *v266; // x8
  float v267; // s0
  float v268; // s8
  float v269; // s0
  float v270; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v273; // s10
  UnityEngine_GameObject_o *v274; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v277; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v279; // x22
  __int64 v280; // x23
  __int64 v281; // x9
  __int64 v282; // x23
  int32_t v283; // w0
  int32_t v284; // w23
  int32_t v285; // w22
  QuestPhaseEntity_o *v286; // x0
  QuestPhaseEntity_o *v287; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v289; // x23
  __int64 v290; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v291; // x21
  __int64 v292; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v295; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  EventDetailEntity_o *v299; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v303; // s0
  float v304; // s8
  UnityEngine_Transform_o *v305; // x22
  float warningMessageWidth; // s0
  float v307; // s1
  float v308; // s0
  float v309; // s2
  int64_t userId; // x2
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v312; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  System_String_o *v317; // x0
  System_String_o *v318; // x0
  System_String_o *v319; // x0
  __int64 v320; // x0
  __int64 v321; // x0
  FollowerSelectItemListViewItemDraw_o *v322; // x0
  FollowerSelectItemListViewItem_o *v323; // x1
  const MethodInfo *v324; // x2
  int v325; // [xsp+1Ch] [xbp-C4h]
  __int64 v326; // [xsp+28h] [xbp-B8h]
  FollowerInfo_o **p_followerInfo; // [xsp+30h] [xbp-B0h]
  int32_t TimesToRestart_k__BackingField; // [xsp+3Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v329; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-90h] BYREF
  int32_t v331; // [xsp+64h] [xbp-7Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v334; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v335; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v336; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v337; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v338; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v339; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v340; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v341; // 0:x0.16

  if ( (byte_4355367 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B70694(&FollowerRootComponent_TypeInfo);
    sub_B70694(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_B70694(&Grade_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SkillInfo___TypeInfo);
    sub_B70694(&TitleInfoControl_TypeInfo);
    sub_B70694(&StringLiteral_3351/*"COMMON_NO_ENTRY"*/);
    sub_B70694(&StringLiteral_6492/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/);
    sub_B70694(&StringLiteral_6471/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/);
    sub_B70694(&StringLiteral_11893/*"SERVANT_HIDE_NAME"*/);
    sub_B70694(&StringLiteral_9489/*"NP_DISABLE_COLOR_NAME"*/);
    sub_B70694(&StringLiteral_6472/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/);
    sub_B70694(&StringLiteral_6427/*"FFFFFF"*/);
    sub_B70694(&StringLiteral_9490/*"NP_HIDE_NAME"*/);
    sub_B70694(&StringLiteral_11791/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_B70694(&StringLiteral_13555/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_B70694(&StringLiteral_9491/*"NP_HIDE_NAME_LEVEL"*/);
    sub_B70694(&StringLiteral_6485/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_B70694(&StringLiteral_6470/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/);
    sub_B70694(&StringLiteral_19679/*"icon_support_01"*/);
    sub_B70694(&StringLiteral_9494/*"NP_MAX_COLOR_NAME"*/);
    sub_B70694(&StringLiteral_19787/*"img_frames_mask01"*/);
    sub_B70694(&StringLiteral_12644/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_B70694(&StringLiteral_12645/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/);
    sub_B70694(&StringLiteral_6484/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/);
    sub_B70694(&StringLiteral_6486/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/);
    sub_B70694(&StringLiteral_6469/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/);
    sub_B70694(&StringLiteral_18149/*"datalost_svt_select"*/);
    sub_B70694(&StringLiteral_6426/*"FFFF00"*/);
    sub_B70694(&StringLiteral_9466/*"NO_ENTRY_NAME"*/);
    sub_B70694(&StringLiteral_9488/*"NP_COLOR_NAME"*/);
    sub_B70694(&StringLiteral_16052/*"[{0}]+{1}[-]"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_19645/*"icon_friend"*/);
    sub_B70694(&StringLiteral_6473/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/);
    sub_B70694(&StringLiteral_19644/*"icon_follow"*/);
    sub_B70694(&StringLiteral_19825/*"img_listbg_02"*/);
    byte_4355367 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v331 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v329.fields.r = 0LL;
  *(_QWORD *)&v329.fields.b = 0LL;
  switchSkillUIList = (__int64)this->fields.switchSkillUIList;
  this->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_569;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
    v13 = ServantLeader;
    p_followerInfo = &item->fields.followerInfo;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_27772296 = Grade__GetKind_27772296(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_27772296, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
    v17 = FollowerBgImage;
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
    if ( !v13 )
      goto LABEL_53;
    v19 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v334.fields.currentCryptoKey = v19;
    *(_QWORD *)&v334.fields.fakeValue = v20;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v334, 0LL);
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
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3351/*"COMMON_NO_ENTRY"*/, 0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_254;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
      v36 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v36->fields.type )
        {
          case 1:
            v53 = v17;
            playerNameLabel = this->fields.playerNameLabel;
            if ( (byte_4355360 & 1) == 0 )
            {
              switchSkillUIList = sub_B70694(&StringLiteral_18674/*"error"*/);
              byte_4355360 = 1;
              v36 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_254;
            if ( v36 )
              p_userName = &v36->fields.userName;
            else
              p_userName = (System_String_o **)&StringLiteral_18674/*"error"*/;
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
            UIIconLabel__Set_41432452((UIIconLabel_o *)switchSkillUIList, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v79 = LocalizationManager__Get((System_String_o *)StringLiteral_13555/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              UpdatedAt = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              UpdatedAt = 0LL;
            v86 = (Il2CppObject *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v79, v86, 0LL);
            if ( !loginDataLabel )
              goto LABEL_254;
            UILabel__set_text(loginDataLabel, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v85 = &StringLiteral_19645/*"icon_friend"*/;
LABEL_205:
            v17 = v53;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)*v85, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
              switchSkillUIList,
              *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
            goto LABEL_211;
          case 2:
            v60 = v17;
            v61 = this->fields.playerNameLabel;
            if ( (byte_4355360 & 1) == 0 )
            {
              switchSkillUIList = sub_B70694(&StringLiteral_18674/*"error"*/);
              byte_4355360 = 1;
              v36 = *p_followerInfo;
            }
            if ( !v61 )
              goto LABEL_254;
            if ( v36 )
              v62 = &v36->fields.userName;
            else
              v62 = (System_String_o **)&StringLiteral_18674/*"error"*/;
            UILabel__set_text(v61, *v62, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v63 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v63 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41432452((UIIconLabel_o *)switchSkillUIList, 2, v63, 0, 0, 0LL, 0, 0, 0, 0LL);
            v81 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v82 = LocalizationManager__Get((System_String_o *)StringLiteral_13555/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v83 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v83 = 0LL;
            v87 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v83, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v82, v87, 0LL);
            if ( !v81 )
              goto LABEL_254;
            UILabel__set_text(v81, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v17 = v60;
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
            v37 = 1;
LABEL_215:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v37, 0LL);
            break;
          case 3:
          case 4:
            switchSkillUIList = (__int64)this->fields.playerNameLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v17 = (System_String_o *)StringLiteral_19825/*"img_listbg_02"*/;
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
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19679/*"icon_support_01"*/, 0LL);
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
            v37 = 0;
            goto LABEL_215;
          case 5:
            v53 = v17;
            v54 = this->fields.playerNameLabel;
            if ( (byte_4355360 & 1) == 0 )
            {
              switchSkillUIList = sub_B70694(&StringLiteral_18674/*"error"*/);
              byte_4355360 = 1;
              v36 = *p_followerInfo;
            }
            if ( !v54 )
              goto LABEL_254;
            if ( v36 )
              v55 = &v36->fields.userName;
            else
              v55 = (System_String_o **)&StringLiteral_18674/*"error"*/;
            UILabel__set_text(v54, *v55, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v56 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v56 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41432452((UIIconLabel_o *)switchSkillUIList, 2, v56, 0, 0, 0LL, 0, 0, 0, 0LL);
            v75 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_13555/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v77 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v77 = 0LL;
            v84 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v77, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v76, v84, 0LL);
            if ( !v75 )
              goto LABEL_254;
            UILabel__set_text(v75, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v85 = &StringLiteral_19644/*"icon_follow"*/;
            goto LABEL_205;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v35);
      FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v88);
      svtNpRangeLabel = this->fields.svtNpRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9466/*"NO_ENTRY_NAME"*/, 0LL);
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
      v93 = (struct SkillInfo_array *)sub_B706AC(SkillInfo___TypeInfo, skillIconList->max_length);
      this->fields.skillInfoList = v93;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.skillInfoList,
        (System_Int32_array **)v93,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      v100 = this->fields.skillIconList;
      if ( !v100 )
        goto LABEL_254;
      v101 = 0LL;
      while ( (int)v101 < (signed int)v100->max_length )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v101 >= skillBaseList->max_length )
          {
LABEL_796:
            v321 = sub_B70798(switchSkillUIList);
            sub_B70738(v321, 0LL);
          }
          switchSkillUIList = (__int64)skillBaseList->m_Items[v101];
          if ( switchSkillUIList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            v100 = this->fields.skillIconList;
            ++v101;
            if ( v100 )
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
      v104 = (struct SkillInfo_array *)sub_B706AC(SkillInfo___TypeInfo, appendSkillIconList->max_length);
      this->fields.appendSkillInfoList = v104;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.appendSkillInfoList,
        (System_Int32_array **)v104,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110);
      v111 = this->fields.appendSkillIconList;
      if ( !v111 )
        goto LABEL_254;
      v112 = 0LL;
      while ( (int)v112 < (signed int)v111->max_length )
      {
        appendSkillBaseList = this->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_254;
        if ( (unsigned int)v112 >= appendSkillBaseList->max_length )
          goto LABEL_796;
        switchSkillUIList = (__int64)appendSkillBaseList->m_Items[v112];
        if ( switchSkillUIList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
          v111 = this->fields.appendSkillIconList;
          ++v112;
          if ( v111 )
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
        LODWORD(v267) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v268 = v267;
        LODWORD(v269) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                      (UserGradeComponent_o *)switchSkillUIList,
                                      0LL);
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v270 = v269;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v273 = LocalPositionX;
        v274 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        GameObjectExtensions__SetLocalPositionX(v274, (float)(v270 * 0.5) + (float)(v268 + v273), 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        UserGradeComponent__Set((UserGradeComponent_o *)switchSkillUIList, Kind_27772296, 0LL);
        baseSprite = this->fields.baseSprite;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        }
        FollowerRootComponent__SetFollowerBase(baseSprite, v17, 0LL);
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
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6484/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0LL);
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
            v277 = 0;
LABEL_652:
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v13 )
                goto LABEL_684;
              v280 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
              v279 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v340.fields.currentCryptoKey = v280;
              *(_QWORD *)&v340.fields.fakeValue = v279;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v340, 0LL) < 1
                || (v277 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v13, 0LL)
                || item->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_684;
              }
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillUIList, 35, 0LL) )
                goto LABEL_684;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = *(_QWORD *)(switchSkillUIList + 24);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v33 = FollowerRootComponent_TypeInfo;
              v281 = *(&FollowerRootComponent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)switchSkillUIList + 300LL) < (unsigned int)v281
                || *(FollowerRootComponent_c **)(*(_QWORD *)(*(_QWORD *)switchSkillUIList + 200LL) + 8 * v281 - 8) != FollowerRootComponent_TypeInfo )
              {
                sub_B70A60(switchSkillUIList);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v322, v323, v324);
                return;
              }
              v282 = *(_QWORD *)(switchSkillUIList + 136);
              if ( !v282 )
                goto LABEL_684;
              v283 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(switchSkillUIList + 136), 0LL);
              if ( !v283 )
                goto LABEL_684;
              v284 = *(_DWORD *)(v282 + 24);
              if ( !v284 )
                goto LABEL_684;
              v285 = v283;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v286 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillUIList, v285, v284, 0LL);
              if ( v286 )
              {
                v287 = v286;
                switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)switchSkillUIList,
                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
                v290 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
                v289 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
                v291 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v341.fields.currentCryptoKey = v290;
                *(_QWORD *)&v341.fields.fakeValue = v289;
                switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v341, 0LL);
                if ( !v291 )
                  goto LABEL_254;
                switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v291,
                                               switchSkillUIList,
                                               (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                v292 = switchSkillUIList;
                switchSkillUIList = (__int64)this->fields.classCompatibilityIcon;
                if ( !switchSkillUIList )
                  goto LABEL_254;
                ServantClassCompatibilityIconComponent__SetIcon(
                  (ServantClassCompatibilityIconComponent_o *)switchSkillUIList,
                  *(_DWORD *)(v292 + 80),
                  v287->fields.classIds,
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
              v295 = this->fields.recommendedIconText;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6486/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0LL);
              if ( !v295 )
                goto LABEL_254;
              UILabel__set_text(v295, (System_String_o *)switchSkillUIList, 0LL);
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
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
              entity = 0LL;
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                      &entity,
                      questRestrictionInfo->fields.eventId,
                      (const MethodInfo_21C049C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                goto LABEL_718;
              v299 = (EventDetailEntity_o *)entity;
              if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              }
              if ( TitleInfoControl__IsEnableEventShopButton_18661980(v299, 0LL) )
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
            switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !switchSkillUIList )
              goto LABEL_254;
            if ( *(_BYTE *)(switchSkillUIList + 140) )
              goto LABEL_722;
            if ( *p_followerInfo )
            {
              type = (*p_followerInfo)->fields.type;
              if ( type != 3 )
              {
                v33 = 0LL;
                if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
                  goto LABEL_723;
                goto LABEL_754;
              }
            }
            else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
            {
LABEL_754:
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
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
              v312 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v312 = BalanceConfig_TypeInfo;
              }
              MaxFriendChocolateUse = v312->static_fields->MaxFriendChocolateUse;
              v331 = MaxFriendChocolateUse;
              if ( UsedCount )
              {
                if ( (BYTE3(v312->vtable._0_Equals.methodPtr) & 4) != 0 && !v312->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v312);
                  MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                }
                v331 = MaxFriendChocolateUse - UsedCount->fields.count;
              }
              numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6471/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0LL);
              if ( numberOfUsabletimesPrefixLabel )
              {
                UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillUIList, 0LL);
                numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
                switchSkillUIList = (__int64)System_Int32__ToString((int32_t)&v331, 0LL);
                if ( numberOfUsabletimesLabel )
                {
                  UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillUIList, 0LL);
                  numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
                  switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0LL);
                  if ( numberOfUsabletimesSuffixLabel )
                  {
                    UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillUIList, 0LL);
                    if ( v331 )
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v317 = LocalizationManager__Get((System_String_o *)StringLiteral_6469/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v317, &color, 0LL);
                      v318 = LocalizationManager__Get((System_String_o *)StringLiteral_6470/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v318, &v329, 0LL);
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v319 = LocalizationManager__Get((System_String_o *)StringLiteral_6473/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v319, &color, 0LL);
                      switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                      if ( !switchSkillUIList )
                        goto LABEL_254;
                      UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                      v329 = color;
                    }
                    switchSkillUIList = (__int64)this->fields.numberOfUsabletimesSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                    switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, v329, 0LL);
                    v33 = (FollowerRootComponent_c *)(&dword_0 + 1);
                    goto LABEL_723;
                  }
                }
              }
LABEL_254:
              sub_B7076C(switchSkillUIList, v33);
            }
LABEL_722:
            v33 = 0LL;
LABEL_723:
            switchSkillUIList = (__int64)this->fields.numberOfUsabletimes;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, (bool)v33, 0LL);
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
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6485/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
          if ( !warningMessageLabel )
            goto LABEL_254;
          UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          LODWORD(v303) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          v304 = v303;
          switchSkillUIList = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)switchSkillUIList,
                                         0LL);
          v305 = (UnityEngine_Transform_o *)switchSkillUIList;
          warningMessageWidth = (float)this->fields.warningMessageWidth;
          if ( v304 <= warningMessageWidth )
          {
            *(UnityEngine_Vector3_o *)&v308 = UnityEngine_Vector3__get_one(0LL);
            if ( !v305 )
              goto LABEL_254;
          }
          else
          {
            v307 = 1.0;
            v308 = warningMessageWidth / v304;
            v309 = 1.0;
            if ( !switchSkillUIList )
              goto LABEL_254;
          }
          UnityEngine_Transform__set_localScale(v305, *(UnityEngine_Vector3_o *)&v308, 0LL);
        }
        v277 = 1;
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
    v21 = item->fields.followerInfo;
    if ( !v21 )
      goto LABEL_569;
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__Set_31407684(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      v13,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0,
      v21->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v22);
    FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v23);
    FollowerSelectItemListViewItem__GetNpInfo(item, &tdInfo, v24);
    switchSkillUIList = FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, v25);
    v325 = switchSkillUIList;
    if ( !tdInfo )
      goto LABEL_569;
    v326 = (__int64)v17;
    name = tdInfo->fields.name;
    v27 = (System_String_o *)StringLiteral_1/*""*/;
    if ( ServantLeaderInfo__IsNpc(v13, 0LL) )
    {
      dispLimitCount = v13->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v13->fields.npcFlag, 0LL) )
      {
        v29 = tdInfo;
        v30 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v335.fields.currentCryptoKey = v30;
        *(_QWORD *)&v335.fields.fakeValue = v31;
        switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v335, 0LL);
        if ( !v29 )
          goto LABEL_569;
        name = TreasureDvcInfo__GetName(v29, switchSkillUIList, 0LL);
      }
      v32 = !NpcServantFollowerEntity__IsHideRarity(v13->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v13, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !switchSkillUIList )
          goto LABEL_569;
        switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)switchSkillUIList,
                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !switchSkillUIList )
          goto LABEL_569;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           (ServantLimitSpoilerProtectionMaster_o *)switchSkillUIList,
                           v13->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v32 = 1;
    }
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)switchSkillUIList, v32, 0LL);
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      !item->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v13, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v40 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
      v41 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v336.fields.currentCryptoKey = v40;
      *(_QWORD *)&v336.fields.fakeValue = v39;
      switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v336, 0LL);
      if ( !v41 )
        goto LABEL_569;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                         v41,
                         switchSkillUIList,
                         dispLimitCount,
                         0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v42 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v44 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
    v45 = (ServantLimitAddMaster_o *)v42;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v337.fields.currentCryptoKey = v44;
    *(_QWORD *)&v337.fields.fakeValue = v43;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v337, 0LL);
    if ( !tdInfo || !v45 )
      goto LABEL_569;
    switchSkillUIList = (__int64)ServantLimitAddMaster__GetOverwriteTDName(
                                   v45,
                                   switchSkillUIList,
                                   dispLimitCount,
                                   name,
                                   tdInfo->fields.lv,
                                   0LL);
    v46 = *p_followerInfo;
    if ( !*p_followerInfo )
    {
      FollowerPointNotFriend = 0;
LABEL_178:
      v64 = v27;
      goto LABEL_336;
    }
    v47 = (Il2CppObject *)switchSkillUIList;
    switch ( v46->fields.type )
    {
      case 1:
        v69 = this->fields.playerNameLabel;
        if ( (byte_4355360 & 1) == 0 )
        {
          switchSkillUIList = sub_B70694(&StringLiteral_18674/*"error"*/);
          byte_4355360 = 1;
          v46 = *p_followerInfo;
        }
        if ( !v69 )
          goto LABEL_569;
        if ( v46 )
          v70 = &v46->fields.userName;
        else
          v70 = (System_String_o **)&StringLiteral_18674/*"error"*/;
        UILabel__set_text(v69, *v70, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v71 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v71 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41432452((UIIconLabel_o *)switchSkillUIList, 2, v71, 0, 0, 0LL, 0, 0, 0, 0LL);
        v119 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v120 = LocalizationManager__Get((System_String_o *)StringLiteral_13555/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v121 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v121 = 0LL;
        v131 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v121, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v120, v131, 0LL);
        if ( !v119 )
          goto LABEL_569;
        UILabel__set_text(v119, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19645/*"icon_friend"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v132 = item->fields.questRestrictionInfo;
        if ( v132 )
        {
          switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)switchSkillUIList,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                                         v132->fields.questId,
                                         (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          HasFlag_26076348 = QuestEntity__HasFlag_26076348(
                               (QuestEntity_o *)switchSkillUIList,
                               0x8000000LL,
                               v132->fields.questPhase,
                               0LL);
          v134 = BalanceConfig_TypeInfo;
          if ( HasFlag_26076348 )
          {
            if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v134 = BalanceConfig_TypeInfo;
            }
            p_FollowFriendPoint = &v134->static_fields->FollowFriendPoint;
LABEL_326:
            FollowerPointNotFriend = *p_FollowFriendPoint;
            v140 = (System_String_o **)&StringLiteral_9494/*"NP_MAX_COLOR_NAME"*/;
            v130 = LocalizationManager_TypeInfo;
            if ( v325 <= 1 )
              v140 = (System_String_o **)&StringLiteral_9488/*"NP_COLOR_NAME"*/;
            v139 = *v140;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
LABEL_329:
              if ( !v130->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v130);
            }
LABEL_331:
            v141 = LocalizationManager__Get(v139, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v141, v47, 0LL);
            if ( !this->fields.supportInfoButton )
              goto LABEL_569;
            v64 = (System_String_o *)switchSkillUIList;
            switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                           0LL);
            if ( !switchSkillUIList )
              goto LABEL_569;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
            switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
            if ( !switchSkillUIList )
              goto LABEL_569;
            v65 = 1;
LABEL_335:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v65, 0LL);
LABEL_336:
            IsHideSupport = ServantLeaderInfo__IsHideSupport(v13, 0LL);
            v144 = this->fields.svtNameRangeLabel;
            if ( IsHideSupport )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_HIDE_NAME"*/, 0LL);
              if ( !v144 )
                goto LABEL_569;
              UIRangeLabel__Set(v144, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
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
                switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9491/*"NP_HIDE_NAME_LEVEL"*/, 0LL);
                v64 = (System_String_o *)switchSkillUIList;
              }
            }
            else
            {
              switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_SvtNameText(item, v143);
              if ( !v144 )
                goto LABEL_569;
              UIRangeLabel__Set(v144, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
            }
            if ( tdInfo )
            {
              strengthStatus = tdInfo->fields.strengthStatus;
              if ( ServantLeaderInfo__IsHideSupport(v13, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v13, 0LL) )
                strengthStatus = 0;
              v146 = this->fields.svtNpRangeLabel;
              switchSkillUIList = (__int64)StrengthStatus__GetIconName(strengthStatus, 0LL);
              if ( v146 )
              {
                UIRangeLabel__Set(v146, v64, (System_String_o *)switchSkillUIList, 0, 0, 0LL);
                v147 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v147, 0LL, 0LL) )
                {
                  switchSkillUIList = ServantLeaderInfo__IsHideSupport(v13, 0LL);
                  v149 = this->fields.svtNpCommandCard;
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !v149 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__SetHide(this->fields.svtNpCommandCard, 0LL);
                  }
                  else
                  {
                    if ( !v149 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__Set(this->fields.svtNpCommandCard, tdInfo, 0LL);
                  }
                }
                FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, v148);
                friendPointCampaignEntity = item->fields.friendPointCampaignEntity;
                v152 = FriendPointUpVal;
                v153 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
                switchSkillUIList = (__int64)this->fields.friendPointIconLabel;
                if ( switchSkillUIList )
                {
                  UIIconLabel__Set_41432452(
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
                  if ( v152 > 0 || v153 >= 1 )
                  {
                    if ( v153 <= 0 )
                      v155 = 1000;
                    else
                      v155 = v153;
                    v156 = 274877907LL * (v155 * v152 + (v155 - 1000) * FollowerPointNotFriend);
                    friendPointData2Label = this->fields.friendPointData2Label;
                    v158 = (v156 >> 38) + ((unsigned __int64)v156 >> 63);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v159 = LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
                    TimesToRestart_k__BackingField = v158;
                    v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v160);
                    switchSkillUIList = (__int64)System_String__Format(v159, v161, 0LL);
                    if ( !friendPointData2Label )
                      goto LABEL_569;
                    v154 = (System_String_o *)switchSkillUIList;
                    switchSkillUIList = (__int64)friendPointData2Label;
                  }
                  else
                  {
                    switchSkillUIList = (__int64)this->fields.friendPointData2Label;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    v154 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text((UILabel_o *)switchSkillUIList, v154, 0LL);
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
                    v163 = this->fields.campaignLabel;
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__GetFriendPointCampaignName(item, v164);
                    if ( !v163 )
                      goto LABEL_569;
                    v165 = (System_String_o *)switchSkillUIList;
                    v166 = v163;
                  }
                  else
                  {
                    if ( !campaignLabel )
                      goto LABEL_569;
                    v166 = this->fields.campaignLabel;
                    v165 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text(v166, v165, 0LL);
                  v167 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
                  {
                    if ( FollowerSelectItemListViewItem__get_ServantLeader(item, v168) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v170);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v171 = *(_QWORD *)(switchSkillUIList + 48);
                      v172 = *(_QWORD *)(switchSkillUIList + 56);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v338.fields.currentCryptoKey = v171;
                      *(_QWORD *)&v338.fields.fakeValue = v172;
                      v173 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v338, 0LL);
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v174);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)switchSkillUIList, 0LL);
                    }
                    else
                    {
                      Rarity = -1;
                      v173 = -1;
                    }
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v170);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    if ( *(_QWORD *)(switchSkillUIList + 144) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(
                                                     item,
                                                     (const MethodInfo *)item);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v176 = *(_QWORD *)(switchSkillUIList + 144);
                      if ( !v176 )
                        goto LABEL_569;
                      v177 = *(_QWORD *)(v176 + 56);
                      v178 = *(_QWORD *)(v176 + 64);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v339.fields.currentCryptoKey = v177;
                      *(_QWORD *)&v339.fields.fakeValue = v178;
                      v179 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v339, 0LL);
                    }
                    else
                    {
                      v179 = -1;
                    }
                    switchSkillUIList = (__int64)this->fields.eventUpValIcon;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    EventUpValIconComponent__Set(
                      (EventUpValIconComponent_o *)switchSkillUIList,
                      item->fields.eventUpValItemList,
                      v173,
                      Rarity,
                      v179,
                      0LL);
                  }
                  p_skillInfoList = &this->fields.skillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetSkillInfo(
                                        item,
                                        &this->fields.skillInfoList,
                                        v169);
                  v182 = this->fields.skillIconList;
                  if ( !v182 )
                    goto LABEL_569;
                  v183 = *(_QWORD *)&v182->max_length;
                  if ( v183 << 32 >= 1 )
                  {
                    v184 = *p_skillInfoList;
                    v185 = 0;
                    v186 = 0LL;
                    while ( v184 )
                    {
                      max_length = v184->max_length;
                      if ( (__int64)v186 < (int)max_length )
                      {
                        if ( v186 >= max_length )
                        {
LABEL_795:
                          v320 = sub_B70798(switchSkillUIList);
                          sub_B70738(v320, 0LL);
                        }
                        v188 = (*p_skillInfoList)->m_Items[v186];
                        if ( v188 && v188->fields.id >= 1 )
                          v185 = v186 + 1;
                      }
                      if ( (__int64)++v186 >= (int)v183 )
                        goto LABEL_425;
                    }
                    goto LABEL_569;
                  }
                  v185 = 0;
LABEL_425:
                  if ( (int)v183 >= 1 )
                  {
                    v189 = v185;
                    v190 = 4LL;
                    do
                    {
                      v191 = v190 - 4;
                      if ( v190 - 4 >= v189 )
                      {
                        v197 = this->fields.skillBaseList;
                        if ( !v197 )
                          goto LABEL_569;
                        if ( v191 >= v197->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v197->obj.klass + v190);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v192 = *p_skillInfoList;
                        if ( !*p_skillInfoList )
                          goto LABEL_569;
                        if ( v191 >= v192->max_length )
                          goto LABEL_795;
                        v193 = this->fields.skillBaseList;
                        if ( !v193 )
                          goto LABEL_569;
                        if ( v191 >= v193->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v193->obj.klass + v190);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v194 = (int32_t *)*((_QWORD *)&v192->obj.klass + v190);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v13, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v194 )
                            v194[4] = 0;
                          v195 = this->fields.skillIconList;
                          if ( !v195 )
                            goto LABEL_569;
                          if ( v191 >= v195->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v195->obj.klass + v190);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
                          if ( !skillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v191 >= skillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v190);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v198 = this->fields.skillIconList;
                          if ( !v198 )
                            goto LABEL_569;
                          if ( v191 >= v198->max_length )
                            goto LABEL_795;
                          if ( !v194 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v198->obj.klass + v190);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_26484616(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v194[4],
                            v194[5],
                            v194[12],
                            v194[13],
                            0LL);
                          v199 = this->fields.skillLevelIconLabelList;
                          if ( !v199 )
                            goto LABEL_569;
                          if ( v191 >= v199->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v199->obj.klass + v190);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41432452(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v194[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v200 = this->fields.skillIconList;
                      if ( !v200 )
                        goto LABEL_569;
                      v201 = v190 - 3;
                      ++v190;
                    }
                    while ( v201 < (int)v200->max_length );
                  }
                  v202 = this->fields.displaySkill;
                  if ( v202 == 2 )
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
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    if ( v202 == 1 )
                    {
                      switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v203 = 0;
                    }
                    else
                    {
                      if ( v202 )
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
                      v203 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v203, 0LL);
                  }
LABEL_472:
                  p_appendSkillInfoList = &this->fields.appendSkillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                        item,
                                        &this->fields.appendSkillInfoList,
                                        item->fields.isNpc,
                                        v181);
                  v205 = this->fields.appendSkillIconList;
                  if ( !v205 )
                    goto LABEL_569;
                  v206 = *(_QWORD *)&v205->max_length;
                  if ( v206 << 32 < 1 )
                  {
                    v208 = 0;
                  }
                  else
                  {
                    v207 = *p_appendSkillInfoList;
                    v208 = 0;
                    v209 = 0LL;
                    do
                    {
                      if ( v207 )
                      {
                        v210 = v207->max_length;
                        if ( v209 < (int)v210 )
                        {
                          if ( v209 >= v210 )
                            goto LABEL_795;
                          v211 = (*p_appendSkillInfoList)->m_Items[v209];
                          if ( v211 && v211->fields.id >= 1 )
                            v208 = v209 + 1;
                        }
                      }
                      ++v209;
                    }
                    while ( v209 < (int)v206 );
                  }
                  if ( (int)v206 >= 1 )
                  {
                    v212 = v208;
                    v213 = 4LL;
                    do
                    {
                      v214 = v213 - 4;
                      if ( v213 - 4 >= v212 )
                      {
                        v220 = this->fields.appendSkillBaseList;
                        if ( !v220 )
                          goto LABEL_569;
                        if ( v214 >= v220->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v220->obj.klass + v213);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v215 = *p_appendSkillInfoList;
                        if ( !*p_appendSkillInfoList )
                          goto LABEL_569;
                        if ( v214 >= v215->max_length )
                          goto LABEL_795;
                        v216 = this->fields.appendSkillBaseList;
                        if ( !v216 )
                          goto LABEL_569;
                        if ( v214 >= v216->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v216->obj.klass + v213);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v217 = (int32_t *)*((_QWORD *)&v215->obj.klass + v213);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v13, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v217 )
                            v217[4] = 0;
                          v218 = this->fields.appendSkillIconList;
                          if ( !v218 )
                            goto LABEL_569;
                          if ( v214 >= v218->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v218->obj.klass + v213);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                          if ( !appendSkillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v214 >= appendSkillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v213);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v221 = this->fields.appendSkillIconList;
                          if ( !v221 )
                            goto LABEL_569;
                          if ( v214 >= v221->max_length )
                            goto LABEL_795;
                          if ( !v217 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v221->obj.klass + v213);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_26484616(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v217[4],
                            v217[5],
                            v217[12],
                            v217[13],
                            0LL);
                          v222 = this->fields.appendSkillLevelIconLabelList;
                          if ( !v222 )
                            goto LABEL_569;
                          if ( v214 >= v222->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v222->obj.klass + v213);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41432452(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v217[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v223 = this->fields.appendSkillIconList;
                      if ( !v223 )
                        goto LABEL_569;
                      v224 = v213 - 3;
                      ++v213;
                    }
                    while ( v224 < (int)v223->max_length );
                  }
                  v225 = this->fields.displaySkill;
                  if ( v225 == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                    v17 = (System_String_o *)v326;
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
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    v17 = (System_String_o *)v326;
                    if ( v225 == 1 )
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
                      v226 = 1;
                    }
                    else
                    {
                      if ( v225 )
                        goto LABEL_535;
                      switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v226 = 0;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v226, 0LL);
                  }
                  if ( this->fields.displaySkill == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.switchSkillUIList;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillInfo = this->fields.switchSkillInfo;
                    switchSkillUIList = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillUIList,
                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !switchSkillInfo )
                      goto LABEL_569;
                    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)switchSkillUIList, 0LL);
                  }
LABEL_535:
                  v228 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v228, 0LL, 0LL) )
                  {
                    switchSkillUIList = ServantLeaderInfo__IsHideSupport(v13, 0LL);
                    v229 = this->fields.svtCommandCardList;
                    if ( (switchSkillUIList & 1) != 0 )
                    {
                      if ( !v229 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__SetHide(this->fields.svtCommandCardList, 0LL);
                    }
                    else
                    {
                      SvtId = FollowerSelectItemListViewItem__get_SvtId(item, (const MethodInfo *)item);
                      commandCardParam = v13->fields.commandCardParam;
                      v232 = SvtId;
                      switchSkillUIList = (__int64)ServantLeaderInfo__getCommandCodeIdList(v13, 0LL);
                      if ( !v229 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__Set_27464268(
                        v229,
                        v232,
                        commandCardParam,
                        (System_Int32_array *)switchSkillUIList,
                        2,
                        1,
                        0LL);
                      v17 = (System_String_o *)v326;
                    }
                  }
                  v233 = (UnityEngine_Object_o *)this->fields.pushSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  switchSkillUIList = UnityEngine_Object__op_Inequality(v233, 0LL, 0LL);
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !*p_followerInfo )
                      goto LABEL_569;
                    pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
                    v235 = pushUserSvtId && pushUserSvtId == v13->fields.userSvtId;
                    switchSkillUIList = (__int64)this->fields.pushSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillUIList,
                                                   0LL);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v235, 0LL);
                  }
                  v236 = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v236, 0LL, 0LL) )
                  {
                    v237 = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(v237, 0LL, 0LL) )
                    {
                      if ( item->fields._IsDataLost_k__BackingField )
                      {
                        v238 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetPartyOrganizationImage(v238, (System_String_o *)StringLiteral_18149/*"datalost_svt_select"*/, 0LL);
                        v239 = (UIWidget_o *)this->fields.dataLostMaskSprite;
                        *(UnityEngine_Color_o *)&v240 = UnityEngine_Color__get_white(0LL);
                        if ( !v239 )
                          goto LABEL_569;
                        UIWidget__set_color(v239, *(UnityEngine_Color_o *)&v240, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                      }
                      else
                      {
                        if ( item->fields._TimesToRestart_k__BackingField < 1 )
                          goto LABEL_585;
                        v244 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetCommon(v244, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        UISprite__set_spriteName(
                          (UISprite_o *)switchSkillUIList,
                          (System_String_o *)StringLiteral_19787/*"img_frames_mask01"*/,
                          0LL);
                        *(UnityEngine_Color_o *)&v245 = UnityEngine_Color__get_black(0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v248 = 1059037088;
                        UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v245, 0LL);
                        v249 = this->fields.dataLostMaskMessageLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v250 = LocalizationManager__Get((System_String_o *)StringLiteral_11791/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
                        v252 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v251);
                        switchSkillUIList = (__int64)System_String__Format(v250, v252, 0LL);
                        if ( !v249 )
                          goto LABEL_254;
                        UILabel__set_text(v249, (System_String_o *)switchSkillUIList, 0LL);
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
                      v258 = (System_String_o *)StringLiteral_1/*""*/;
                    }
                    else
                    {
                      if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                        v255 = (Il2CppObject **)&StringLiteral_6426/*"FFFF00"*/;
                      else
                        v255 = (Il2CppObject **)&StringLiteral_6427/*"FFFFFF"*/;
                      v256 = *v255;
                      TimesToRestart_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                      v257 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v254);
                      switchSkillUIList = (__int64)System_String__Format_44753704(
                                                     (System_String_o *)StringLiteral_16052/*"[{0}]+{1}[-]"*/,
                                                     v256,
                                                     v257,
                                                     0LL);
                      if ( !this->fields.openClassBoardNumLabel )
                        goto LABEL_254;
                      v258 = (System_String_o *)switchSkillUIList;
                      switchSkillUIList = (__int64)this->fields.openClassBoardNumLabel;
                    }
                    UILabel__set_text((UILabel_o *)switchSkillUIList, v258, 0LL);
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
                      v262 = this->fields.classBoardOpenButtonLabel;
                      if ( (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12645/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                       0LL);
                        if ( !v262 )
                          goto LABEL_254;
                        UILabel__set_text(v262, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v263 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v266 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v266 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v266->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y;
                      }
                      else
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12644/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                       0LL);
                        if ( !v262 )
                          goto LABEL_254;
                        UILabel__set_text(v262, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v263 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v264 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v264 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v264->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y;
                      }
                      GameObjectExtensions__SetLocalPositionY(v263, CLASS_BOARD_NOT_LABEL_POS_Y, 0LL);
                    }
                    goto LABEL_631;
                  }
                  goto LABEL_269;
                }
              }
            }
LABEL_569:
            sub_B7076C(switchSkillUIList, item);
          }
          if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            goto LABEL_323;
        }
        else
        {
          v134 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_323:
            if ( !v134->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v134);
              v134 = BalanceConfig_TypeInfo;
            }
          }
        }
        p_FollowFriendPoint = &v134->static_fields->FollowerPointFriend;
        goto LABEL_326;
      case 2:
        v72 = this->fields.playerNameLabel;
        if ( (byte_4355360 & 1) == 0 )
        {
          switchSkillUIList = sub_B70694(&StringLiteral_18674/*"error"*/);
          byte_4355360 = 1;
          v46 = *p_followerInfo;
        }
        if ( !v72 )
          goto LABEL_569;
        if ( v46 )
          v73 = &v46->fields.userName;
        else
          v73 = (System_String_o **)&StringLiteral_18674/*"error"*/;
        UILabel__set_text(v72, *v73, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v74 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v74 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41432452((UIIconLabel_o *)switchSkillUIList, 2, v74, 0, 0, 0LL, 0, 0, 0, 0LL);
        v122 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_13555/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v124 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v124 = 0LL;
        v136 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v124, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v123, v136, 0LL);
        if ( !v122 )
          goto LABEL_569;
        UILabel__set_text(v122, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
        v137 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v137 = BalanceConfig_TypeInfo;
        }
        static_fields = v137->static_fields;
        v128 = (System_String_o **)&StringLiteral_9494/*"NP_MAX_COLOR_NAME"*/;
        v129 = v325;
        v130 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = static_fields->FollowerPointNotFriend;
LABEL_316:
        if ( v129 <= 1 )
          v128 = (System_String_o **)&StringLiteral_9488/*"NP_COLOR_NAME"*/;
        v139 = *v128;
        if ( (BYTE3(v130->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_331;
        goto LABEL_329;
      case 3:
      case 4:
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v326 = StringLiteral_19825/*"img_listbg_02"*/;
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
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19679/*"icon_support_01"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v48 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v48 = BalanceConfig_TypeInfo;
        }
        FollowerPointNotFriend = v48->static_fields->FollowerPointNpc;
        if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
        {
          v50 = (System_String_o **)&StringLiteral_9494/*"NP_MAX_COLOR_NAME"*/;
          if ( v325 <= 1 )
            v50 = (System_String_o **)&StringLiteral_9488/*"NP_COLOR_NAME"*/;
          v51 = *v50;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v52 = LocalizationManager__Get(v51, 0LL);
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_9489/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
          v47 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9490/*"NP_HIDE_NAME"*/, 0LL);
        }
        switchSkillUIList = (__int64)System_String__Format(v52, v47, 0LL);
        if ( !this->fields.supportInfoButton )
          goto LABEL_569;
        v64 = (System_String_o *)switchSkillUIList;
        switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                       0LL);
        if ( !switchSkillUIList )
          goto LABEL_569;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
        switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v65 = 0;
        goto LABEL_335;
      case 5:
        v66 = this->fields.playerNameLabel;
        if ( (byte_4355360 & 1) == 0 )
        {
          switchSkillUIList = sub_B70694(&StringLiteral_18674/*"error"*/);
          byte_4355360 = 1;
          v46 = *p_followerInfo;
        }
        if ( !v66 )
          goto LABEL_569;
        if ( v46 )
          v67 = &v46->fields.userName;
        else
          v67 = (System_String_o **)&StringLiteral_18674/*"error"*/;
        UILabel__set_text(v66, *v67, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v68 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v68 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41432452((UIIconLabel_o *)switchSkillUIList, 2, v68, 0, 0, 0LL, 0, 0, 0, 0LL);
        v116 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v117 = LocalizationManager__Get((System_String_o *)StringLiteral_13555/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v118 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v118 = 0LL;
        v125 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v118, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v117, v125, 0LL);
        if ( !v116 )
          goto LABEL_569;
        UILabel__set_text(v116, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19644/*"icon_follow"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v126 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v126 = BalanceConfig_TypeInfo;
        }
        v127 = v126->static_fields;
        v128 = (System_String_o **)&StringLiteral_9494/*"NP_MAX_COLOR_NAME"*/;
        v129 = v325;
        v130 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = v127->FollowFriendPoint;
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
  UnityEngine_Object_o *lockMarkSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4355369 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4355369 = 1;
  }
  if ( item )
    LOBYTE(item) = item->fields.isLockUser;
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
      sub_B7076C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)item, 0LL);
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
  if ( (byte_4355368 & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)sub_B70694(&OptionManager_TypeInfo);
    byte_4355368 = 1;
  }
  if ( !item )
LABEL_34:
    sub_B7076C(this, item);
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