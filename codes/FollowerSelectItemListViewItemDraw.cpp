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

  if ( (byte_4217571 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_4217571 = 1;
  }
  v6 = 1065287423;
  v7 = 1064300528;
  v8 = 1058642330;
  v14 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  v15.fields.g = 0.64706;
  v15.fields.b = 0.27059;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = v14;
  v15.fields.r = 0.88235;
  v13 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40757524(v15, v9, v10, v11, (const MethodInfo *)&v13);
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

  if ( (byte_4217570 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B0D8A4(&SkillIconComponent___TypeInfo, v4);
    sub_B0D8A4(&UIIconLabel___TypeInfo, v5);
    byte_4217570 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (struct SkillIconComponent_array *)sub_B0D8BC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct UIIconLabel_array *)sub_B0D8BC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (struct SkillIconComponent_array *)sub_B0D8BC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (struct UIIconLabel_array *)sub_B0D8BC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v42;
  sub_B0D840(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UISprite_o *skillIconSprite; // x20

  if ( (byte_421756A & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_19425/*"icon_skill_mini"*/, v6);
    sub_B0D8A4(&StringLiteral_19557/*"img_friend_skill"*/, v7);
    sub_B0D8A4(&StringLiteral_19336/*"icon_append_mini"*/, v8);
    sub_B0D8A4(&StringLiteral_19556/*"img_friend_appendskill"*/, v9);
    byte_421756A = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19425/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_19557/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19336/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_19556/*"img_friend_appendskill"*/, 0LL);
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
  const MethodInfo *v11; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  _BOOL4 v13; // w8
  __int64 v14; // x20
  __int64 v15; // x21
  int32_t v16; // w9
  SwitchUIWidgetComponent_o *v17; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_421756F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_421756F = 1;
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
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, v11);
  v13 = (int)ServantLeader;
  if ( ServantLeader )
  {
    v15 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v15;
    *(_QWORD *)&v18.fields.fakeValue = v14;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL) > 0;
  }
  v16 = this->fields.displaySkill;
  if ( v16 == 2 )
  {
    if ( v13 )
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
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v17 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillInfo,
                                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v17 )
      {
        SwitchUIWidgetComponent__Set(v17, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B0D97C(switchSkillInfo);
  }
  if ( v16 != 1 )
  {
    if ( v16 )
      return;
    if ( !v13 )
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
  if ( v13 )
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
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v12; // w24
  Il2CppClass **v13; // x8
  UnityEngine_Behaviour_o *v14; // x21
  WebViewObject_o *Component_WebViewObject; // x22
  __int64 v16; // x0

  if ( (byte_421756E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421756E = 1;
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
          v16 = sub_B0D9A8(supportInfoButton);
          sub_B0D948(v16, 0LL);
        }
        v13 = &skillButtonList->obj.klass + (int)v12;
        v14 = (UnityEngine_Behaviour_o *)v13[4];
        if ( !v14 )
          break;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v13[4],
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_B0D97C(supportInfoButton);
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
  const MethodInfo *v71; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  ServantLeaderInfo_o *v74; // x21
  int32_t Kind_26803704; // w22
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x23
  System_String_o *v78; // x25
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x23
  const MethodInfo *v80; // x1
  __int64 v81; // x23
  __int64 v82; // x24
  struct FollowerInfo_o *v83; // x8
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x1
  System_String_o *name; // x27
  System_String_o *v89; // x26
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v91; // x27
  __int64 v92; // x23
  __int64 v93; // x28
  bool v94; // w8
  UIRangeLabel_o *svtNameRangeLabel; // x24
  __int64 v96; // x1
  const MethodInfo *v97; // x2
  FollowerInfo_o *v98; // x8
  bool v99; // w1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v101; // x23
  __int64 v102; // x24
  ServantLimitImageMaster_o *v103; // x28
  WarQuestSelectionMaster_o *v104; // x0
  __int64 v105; // x23
  __int64 v106; // x24
  ServantLimitAddMaster_o *v107; // x28
  __int64 v108; // x1
  FollowerInfo_o *v109; // x8
  Il2CppObject *v110; // x25
  BalanceConfig_c *v111; // x0
  int32_t FollowerPointNotFriend; // w27
  System_String_o **v113; // x8
  System_String_o *v114; // x23
  System_String_o *v115; // x24
  System_String_o *v116; // x26
  UILabel_o *v117; // x24
  System_String_o **v118; // x8
  int32_t v119; // w2
  UILabel_o *playerNameLabel; // x24
  System_String_o **p_userName; // x8
  int32_t userLv; // w2
  System_String_o *v123; // x26
  UILabel_o *v124; // x24
  System_String_o **v125; // x8
  int32_t v126; // w2
  System_String_o *v127; // x25
  bool v128; // w1
  UILabel_o *v129; // x26
  System_String_o **v130; // x8
  int32_t v131; // w2
  UILabel_o *v132; // x26
  System_String_o **v133; // x8
  int32_t v134; // w2
  UILabel_o *v135; // x26
  System_String_o **v136; // x8
  int32_t v137; // w2
  UILabel_o *v138; // x24
  System_String_o *v139; // x25
  int64_t v140; // x0
  UILabel_o *loginDataLabel; // x24
  System_String_o *v142; // x25
  int64_t UpdatedAt; // x0
  UILabel_o *v144; // x24
  System_String_o *v145; // x25
  int64_t v146; // x0
  Il2CppObject *v147; // x0
  __int64 *v148; // x8
  Il2CppObject *v149; // x0
  Il2CppObject *v150; // x0
  const MethodInfo *v151; // x2
  UIRangeLabel_o *svtNpRangeLabel; // x24
  UnityEngine_Object_o *svtNpCommandCard; // x23
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct SkillIconComponent_array *skillIconList; // x8
  struct SkillInfo_array *v156; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  struct SkillIconComponent_array *v163; // x8
  __int64 v164; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillInfo_array *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  struct SkillIconComponent_array *v174; // x8
  __int64 v175; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v179; // x26
  System_String_o *v180; // x27
  int64_t v181; // x0
  UILabel_o *v182; // x26
  System_String_o *v183; // x27
  int64_t v184; // x0
  UILabel_o *v185; // x26
  System_String_o *v186; // x27
  int64_t v187; // x0
  Il2CppObject *v188; // x0
  BalanceConfig_c *v189; // x0
  struct BalanceConfig_StaticFields *v190; // x8
  System_String_o **v191; // x9
  int v192; // w11
  LocalizationManager_c *v193; // x0
  Il2CppObject *v194; // x0
  struct QuestRestrictionInfo_o *v195; // x24
  bool HasFlag_23244236; // w0
  BalanceConfig_c *v197; // x8
  int32_t *p_FollowFriendPoint; // x8
  Il2CppObject *v199; // x0
  BalanceConfig_c *v200; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v202; // x23
  System_String_o **v203; // x8
  System_String_o *v204; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v206; // x1
  UIRangeLabel_o *v207; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v209; // x23
  UnityEngine_Object_o *v210; // x23
  const MethodInfo *v211; // x1
  struct ServantNpCommandCardComponent_o *v212; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v215; // w24
  int v216; // w23
  System_String_o *v217; // x1
  int v218; // w8
  __int64 v219; // x8
  struct UILabel_o *friendPointData2Label; // x24
  int32_t v221; // w25
  System_String_o *v222; // x23
  Il2CppObject *v223; // x0
  UILabel_o *campaignLabel; // x24
  struct UILabel_o *v225; // x23
  const MethodInfo *v226; // x1
  System_String_o *v227; // x1
  UILabel_o *v228; // x0
  UnityEngine_Object_o *v229; // x23
  const MethodInfo *v230; // x1
  const MethodInfo *v231; // x2
  const MethodInfo *v232; // x1
  __int64 v233; // x23
  __int64 v234; // x24
  int32_t v235; // w24
  const MethodInfo *v236; // x1
  int32_t Rarity; // w25
  const MethodInfo *v238; // x1
  __int64 v239; // x8
  __int64 v240; // x23
  __int64 v241; // x26
  int32_t v242; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  const MethodInfo *v244; // x3
  struct SkillIconComponent_array *v245; // x8
  __int64 v246; // x8
  struct SkillInfo_array *v247; // x11
  int v248; // w9
  unsigned __int64 v249; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v251; // x14
  __int64 v252; // x23
  __int64 v253; // x25
  unsigned __int64 v254; // x26
  struct SkillInfo_array *v255; // x8
  struct UnityEngine_GameObject_array *v256; // x9
  int32_t *v257; // x27
  struct SkillIconComponent_array *v258; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v260; // x8
  struct SkillIconComponent_array *v261; // x8
  struct UIIconLabel_array *v262; // x8
  struct SkillIconComponent_array *v263; // x8
  __int64 v264; // x9
  int32_t v265; // w8
  bool v266; // w1
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v268; // x8
  __int64 v269; // x8
  struct SkillInfo_array *v270; // x11
  int v271; // w9
  signed __int64 v272; // x10
  unsigned __int64 v273; // x14
  SkillInfo_o *v274; // x14
  __int64 v275; // x23
  __int64 v276; // x25
  unsigned __int64 v277; // x26
  struct SkillInfo_array *v278; // x8
  struct UnityEngine_GameObject_array *v279; // x9
  int32_t *v280; // x27
  struct SkillIconComponent_array *v281; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v283; // x8
  struct SkillIconComponent_array *v284; // x8
  struct UIIconLabel_array *v285; // x8
  struct SkillIconComponent_array *v286; // x8
  __int64 v287; // x9
  int32_t v288; // w8
  bool v289; // w1
  SwitchUIWidgetComponent_o *switchSkillInfo; // x23
  UnityEngine_Object_o *v291; // x23
  const MethodInfo *v292; // x1
  ServantCommandCardListComponent_o *v293; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v296; // w26
  UnityEngine_Object_o *v297; // x23
  int64_t pushUserSvtId; // x8
  bool v299; // w24
  UnityEngine_Object_o *v300; // x23
  UnityEngine_Object_o *v301; // x23
  UISprite_o *v302; // x24
  UIWidget_o *v303; // x24
  int v304; // s0
  UISprite_o *v308; // x23
  int v309; // s0
  int v312; // s3
  UILabel_o *v313; // x24
  System_String_o *v314; // x23
  Il2CppObject *v315; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  Il2CppObject **v317; // x9
  Il2CppObject *v318; // x23
  Il2CppObject *v319; // x0
  System_String_o *v320; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  UILabel_o *v324; // x24
  UnityEngine_GameObject_o *v325; // x24
  FollowerSelectItemListViewItemDraw_c *v326; // x8
  float CLASS_BOARD_NOT_LABEL_POS_Y; // s0
  FollowerSelectItemListViewItemDraw_c *v328; // x8
  float v329; // s0
  float v330; // s8
  float v331; // s0
  float v332; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v335; // s10
  UnityEngine_GameObject_o *v336; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v339; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v341; // x22
  __int64 v342; // x23
  __int64 v343; // x9
  __int64 v344; // x23
  int32_t v345; // w0
  int32_t v346; // w23
  int32_t v347; // w22
  QuestPhaseEntity_o *v348; // x0
  QuestPhaseEntity_o *v349; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v351; // x23
  __int64 v352; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v353; // x21
  __int64 v354; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v357; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  EventDetailEntity_o *v361; // x22
  bool v362; // w1
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v366; // s0
  float v367; // s8
  UnityEngine_Transform_o *v368; // x22
  float warningMessageWidth; // s0
  float v370; // s1
  float v371; // s0
  float v372; // s2
  int64_t userId; // x2
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v375; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  System_String_o *v380; // x0
  System_String_o *v381; // x0
  System_String_o *v382; // x0
  __int64 v383; // x0
  __int64 v384; // x0
  FollowerSelectItemListViewItemDraw_o *v385; // x0
  FollowerSelectItemListViewItem_o *v386; // x1
  const MethodInfo *v387; // x2
  int v388; // [xsp+1Ch] [xbp-C4h]
  __int64 v389; // [xsp+28h] [xbp-B8h]
  FollowerInfo_o **p_followerInfo; // [xsp+30h] [xbp-B0h]
  int32_t TimesToRestart_k__BackingField; // [xsp+3Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v392; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-90h] BYREF
  int32_t v394; // [xsp+64h] [xbp-7Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v404; // 0:x0.16

  if ( (byte_421756B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_B0D8A4(&DataManager_TypeInfo, v18);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v22);
    sub_B0D8A4(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_B0D8A4(&Grade_TypeInfo, v24);
    sub_B0D8A4(&int_TypeInfo, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v29);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v30);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B0D8A4(&OptionManager_TypeInfo, v32);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B0D8A4(&SkillInfo___TypeInfo, v36);
    sub_B0D8A4(&TitleInfoControl_TypeInfo, v37);
    sub_B0D8A4(&StringLiteral_3289/*"COMMON_NO_ENTRY"*/, v38);
    sub_B0D8A4(&StringLiteral_6417/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_B0D8A4(&StringLiteral_6396/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_B0D8A4(&StringLiteral_11761/*"SERVANT_HIDE_NAME"*/, v41);
    sub_B0D8A4(&StringLiteral_9400/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_B0D8A4(&StringLiteral_6397/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_B0D8A4(&StringLiteral_6352/*"FFFFFF"*/, v44);
    sub_B0D8A4(&StringLiteral_9401/*"NP_HIDE_NAME"*/, v45);
    sub_B0D8A4(&StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_B0D8A4(&StringLiteral_13415/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_B0D8A4(&StringLiteral_9402/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_B0D8A4(&StringLiteral_6410/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_B0D8A4(&StringLiteral_6395/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_B0D8A4(&StringLiteral_19437/*"icon_support_01"*/, v51);
    sub_B0D8A4(&StringLiteral_9405/*"NP_MAX_COLOR_NAME"*/, v52);
    sub_B0D8A4(&StringLiteral_19545/*"img_frames_mask01"*/, v53);
    sub_B0D8A4(&StringLiteral_12513/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v54);
    sub_B0D8A4(&StringLiteral_12514/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v55);
    sub_B0D8A4(&StringLiteral_6409/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v56);
    sub_B0D8A4(&StringLiteral_6411/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v57);
    sub_B0D8A4(&StringLiteral_6394/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v58);
    sub_B0D8A4(&StringLiteral_17939/*"datalost_svt_select"*/, v59);
    sub_B0D8A4(&StringLiteral_6351/*"FFFF00"*/, v60);
    sub_B0D8A4(&StringLiteral_9377/*"NO_ENTRY_NAME"*/, v61);
    sub_B0D8A4(&StringLiteral_9399/*"NP_COLOR_NAME"*/, v62);
    sub_B0D8A4(&StringLiteral_15877/*"[{0}]+{1}[-]"*/, v63);
    sub_B0D8A4(&StringLiteral_1/*""*/, v64);
    sub_B0D8A4(&StringLiteral_19404/*"icon_friend"*/, v65);
    sub_B0D8A4(&StringLiteral_6398/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v66);
    sub_B0D8A4(&StringLiteral_19403/*"icon_follow"*/, v67);
    sub_B0D8A4(&StringLiteral_19581/*"img_listbg_02"*/, v68);
    byte_421756B = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v394 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v392.fields.r = 0LL;
  *(_QWORD *)&v392.fields.b = 0LL;
  switchSkillUIList = (__int64)this->fields.switchSkillUIList;
  this->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_569;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, v71);
    followerInfo = item->fields.followerInfo;
    v74 = ServantLeader;
    p_followerInfo = &item->fields.followerInfo;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_26803704 = Grade__GetKind_26803704(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_26803704, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
    v78 = FollowerBgImage;
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
    if ( !v74 )
      goto LABEL_53;
    v81 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
    v82 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v397.fields.currentCryptoKey = v81;
    *(_QWORD *)&v397.fields.fakeValue = v82;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v397, 0LL);
    if ( (int)switchSkillUIList < 1 )
    {
LABEL_53:
      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_EquipInfo(item, v80);
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
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3289/*"COMMON_NO_ENTRY"*/, 0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_254;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
      v98 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v98->fields.type )
        {
          case 1:
            v116 = v78;
            playerNameLabel = this->fields.playerNameLabel;
            if ( (byte_4217564 & 1) == 0 )
            {
              switchSkillUIList = sub_B0D8A4(&StringLiteral_18452/*"error"*/, v96);
              byte_4217564 = 1;
              v98 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_254;
            if ( v98 )
              p_userName = &v98->fields.userName;
            else
              p_userName = (System_String_o **)&StringLiteral_18452/*"error"*/;
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
            UIIconLabel__Set_41076120((UIIconLabel_o *)switchSkillUIList, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v142 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              UpdatedAt = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              UpdatedAt = 0LL;
            v149 = (Il2CppObject *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v142, v149, 0LL);
            if ( !loginDataLabel )
              goto LABEL_254;
            UILabel__set_text(loginDataLabel, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v148 = &StringLiteral_19404/*"icon_friend"*/;
LABEL_205:
            v78 = v116;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)*v148, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
              switchSkillUIList,
              *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
            goto LABEL_211;
          case 2:
            v123 = v78;
            v124 = this->fields.playerNameLabel;
            if ( (byte_4217564 & 1) == 0 )
            {
              switchSkillUIList = sub_B0D8A4(&StringLiteral_18452/*"error"*/, v96);
              byte_4217564 = 1;
              v98 = *p_followerInfo;
            }
            if ( !v124 )
              goto LABEL_254;
            if ( v98 )
              v125 = &v98->fields.userName;
            else
              v125 = (System_String_o **)&StringLiteral_18452/*"error"*/;
            UILabel__set_text(v124, *v125, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v126 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v126 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41076120((UIIconLabel_o *)switchSkillUIList, 2, v126, 0, 0, 0LL, 0, 0, 0, 0LL);
            v144 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v145 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v146 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v146 = 0LL;
            v150 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v146, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v145, v150, 0LL);
            if ( !v144 )
              goto LABEL_254;
            UILabel__set_text(v144, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v78 = v123;
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
            v99 = 1;
LABEL_215:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v99, 0LL);
            break;
          case 3:
          case 4:
            switchSkillUIList = (__int64)this->fields.playerNameLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v78 = (System_String_o *)StringLiteral_19581/*"img_listbg_02"*/;
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
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19437/*"icon_support_01"*/, 0LL);
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
            v99 = 0;
            goto LABEL_215;
          case 5:
            v116 = v78;
            v117 = this->fields.playerNameLabel;
            if ( (byte_4217564 & 1) == 0 )
            {
              switchSkillUIList = sub_B0D8A4(&StringLiteral_18452/*"error"*/, v96);
              byte_4217564 = 1;
              v98 = *p_followerInfo;
            }
            if ( !v117 )
              goto LABEL_254;
            if ( v98 )
              v118 = &v98->fields.userName;
            else
              v118 = (System_String_o **)&StringLiteral_18452/*"error"*/;
            UILabel__set_text(v117, *v118, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v119 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v119 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41076120((UIIconLabel_o *)switchSkillUIList, 2, v119, 0, 0, 0LL, 0, 0, 0, 0LL);
            v138 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v139 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v140 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v140 = 0LL;
            v147 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v140, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v139, v147, 0LL);
            if ( !v138 )
              goto LABEL_254;
            UILabel__set_text(v138, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v148 = &StringLiteral_19403/*"icon_follow"*/;
            goto LABEL_205;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v97);
      FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v151);
      svtNpRangeLabel = this->fields.svtNpRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9377/*"NO_ENTRY_NAME"*/, 0LL);
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
      v156 = (struct SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, skillIconList->max_length);
      this->fields.skillInfoList = v156;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.skillInfoList,
        (System_Int32_array **)v156,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
      v163 = this->fields.skillIconList;
      if ( !v163 )
        goto LABEL_254;
      v164 = 0LL;
      while ( (int)v164 < (signed int)v163->max_length )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v164 >= skillBaseList->max_length )
          {
LABEL_796:
            v384 = sub_B0D9A8(switchSkillUIList);
            sub_B0D948(v384, 0LL);
          }
          switchSkillUIList = (__int64)skillBaseList->m_Items[v164];
          if ( switchSkillUIList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            v163 = this->fields.skillIconList;
            ++v164;
            if ( v163 )
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
      v167 = (struct SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, appendSkillIconList->max_length);
      this->fields.appendSkillInfoList = v167;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.appendSkillInfoList,
        (System_Int32_array **)v167,
        v168,
        v169,
        v170,
        v171,
        v172,
        v173);
      v174 = this->fields.appendSkillIconList;
      if ( !v174 )
        goto LABEL_254;
      v175 = 0LL;
      while ( (int)v175 < (signed int)v174->max_length )
      {
        appendSkillBaseList = this->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_254;
        if ( (unsigned int)v175 >= appendSkillBaseList->max_length )
          goto LABEL_796;
        switchSkillUIList = (__int64)appendSkillBaseList->m_Items[v175];
        if ( switchSkillUIList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
          v174 = this->fields.appendSkillIconList;
          ++v175;
          if ( v174 )
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
        LODWORD(v329) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v330 = v329;
        LODWORD(v331) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                      (UserGradeComponent_o *)switchSkillUIList,
                                      0LL);
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v332 = v331;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v335 = LocalPositionX;
        v336 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        GameObjectExtensions__SetLocalPositionX(v336, (float)(v332 * 0.5) + (float)(v330 + v335), 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        UserGradeComponent__Set((UserGradeComponent_o *)switchSkillUIList, Kind_26803704, 0LL);
        baseSprite = this->fields.baseSprite;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        }
        FollowerRootComponent__SetFollowerBase(baseSprite, v78, 0LL);
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
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6409/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0LL);
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
            v339 = 0;
LABEL_652:
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v74 )
                goto LABEL_684;
              v342 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
              v341 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v403.fields.currentCryptoKey = v342;
              *(_QWORD *)&v403.fields.fakeValue = v341;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v403, 0LL) < 1
                || (v339 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v74, 0LL)
                || item->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_684;
              }
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillUIList, 35, 0LL) )
                goto LABEL_684;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = *(_QWORD *)(switchSkillUIList + 24);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v343 = *(&FollowerRootComponent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)switchSkillUIList + 300LL) < (unsigned int)v343
                || *(FollowerRootComponent_c **)(*(_QWORD *)(*(_QWORD *)switchSkillUIList + 200LL) + 8 * v343 - 8) != FollowerRootComponent_TypeInfo )
              {
                sub_B0DC70(switchSkillUIList);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v385, v386, v387);
                return;
              }
              v344 = *(_QWORD *)(switchSkillUIList + 136);
              if ( !v344 )
                goto LABEL_684;
              v345 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(switchSkillUIList + 136), 0LL);
              if ( !v345 )
                goto LABEL_684;
              v346 = *(_DWORD *)(v344 + 24);
              if ( !v346 )
                goto LABEL_684;
              v347 = v345;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v348 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillUIList, v347, v346, 0LL);
              if ( v348 )
              {
                v349 = v348;
                switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)switchSkillUIList,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
                v352 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
                v351 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
                v353 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v404.fields.currentCryptoKey = v352;
                *(_QWORD *)&v404.fields.fakeValue = v351;
                switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v404, 0LL);
                if ( !v353 )
                  goto LABEL_254;
                switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v353,
                                               switchSkillUIList,
                                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                v354 = switchSkillUIList;
                switchSkillUIList = (__int64)this->fields.classCompatibilityIcon;
                if ( !switchSkillUIList )
                  goto LABEL_254;
                ServantClassCompatibilityIconComponent__SetIcon(
                  (ServantClassCompatibilityIconComponent_o *)switchSkillUIList,
                  *(_DWORD *)(v354 + 80),
                  v349->fields.classIds,
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
              v357 = this->fields.recommendedIconText;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6411/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0LL);
              if ( !v357 )
                goto LABEL_254;
              UILabel__set_text(v357, (System_String_o *)switchSkillUIList, 0LL);
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
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
              entity = 0LL;
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                      &entity,
                      questRestrictionInfo->fields.eventId,
                      (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                goto LABEL_718;
              v361 = (EventDetailEntity_o *)entity;
              if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              }
              if ( TitleInfoControl__IsEnableEventShopButton_17568528(v361, 0LL) )
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
            switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !switchSkillUIList )
              goto LABEL_254;
            if ( *(_BYTE *)(switchSkillUIList + 140) )
              goto LABEL_722;
            if ( *p_followerInfo )
            {
              type = (*p_followerInfo)->fields.type;
              if ( type != 3 )
              {
                v362 = 0;
                if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
                  goto LABEL_723;
                goto LABEL_754;
              }
            }
            else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
            {
LABEL_754:
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
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
              v375 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v375 = BalanceConfig_TypeInfo;
              }
              MaxFriendChocolateUse = v375->static_fields->MaxFriendChocolateUse;
              v394 = MaxFriendChocolateUse;
              if ( UsedCount )
              {
                if ( (BYTE3(v375->vtable._0_Equals.methodPtr) & 4) != 0 && !v375->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v375);
                  MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                }
                v394 = MaxFriendChocolateUse - UsedCount->fields.count;
              }
              numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0LL);
              if ( numberOfUsabletimesPrefixLabel )
              {
                UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillUIList, 0LL);
                numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
                switchSkillUIList = (__int64)System_Int32__ToString((int32_t)&v394, 0LL);
                if ( numberOfUsabletimesLabel )
                {
                  UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillUIList, 0LL);
                  numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
                  switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6397/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0LL);
                  if ( numberOfUsabletimesSuffixLabel )
                  {
                    UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillUIList, 0LL);
                    if ( v394 )
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v380 = LocalizationManager__Get((System_String_o *)StringLiteral_6394/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v380, &color, 0LL);
                      v381 = LocalizationManager__Get((System_String_o *)StringLiteral_6395/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v381, &v392, 0LL);
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v382 = LocalizationManager__Get((System_String_o *)StringLiteral_6398/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v382, &color, 0LL);
                      switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                      if ( !switchSkillUIList )
                        goto LABEL_254;
                      UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                      v392 = color;
                    }
                    switchSkillUIList = (__int64)this->fields.numberOfUsabletimesSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                    switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, v392, 0LL);
                    v362 = 1;
                    goto LABEL_723;
                  }
                }
              }
LABEL_254:
              sub_B0D97C(switchSkillUIList);
            }
LABEL_722:
            v362 = 0;
LABEL_723:
            switchSkillUIList = (__int64)this->fields.numberOfUsabletimes;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v362, 0LL);
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
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6410/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
          if ( !warningMessageLabel )
            goto LABEL_254;
          UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          LODWORD(v366) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          v367 = v366;
          switchSkillUIList = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)switchSkillUIList,
                                         0LL);
          v368 = (UnityEngine_Transform_o *)switchSkillUIList;
          warningMessageWidth = (float)this->fields.warningMessageWidth;
          if ( v367 <= warningMessageWidth )
          {
            *(UnityEngine_Vector3_o *)&v371 = UnityEngine_Vector3__get_one(0LL);
            if ( !v368 )
              goto LABEL_254;
          }
          else
          {
            v370 = 1.0;
            v371 = warningMessageWidth / v367;
            v372 = 1.0;
            if ( !switchSkillUIList )
              goto LABEL_254;
          }
          UnityEngine_Transform__set_localScale(v368, *(UnityEngine_Vector3_o *)&v371, 0LL);
        }
        v339 = 1;
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
    v83 = item->fields.followerInfo;
    if ( !v83 )
      goto LABEL_569;
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__Set_29553232(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      v74,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0,
      v83->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v84);
    FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v85);
    FollowerSelectItemListViewItem__GetNpInfo(item, &tdInfo, v86);
    switchSkillUIList = FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, v87);
    v388 = switchSkillUIList;
    if ( !tdInfo )
      goto LABEL_569;
    v389 = (__int64)v78;
    name = tdInfo->fields.name;
    v89 = (System_String_o *)StringLiteral_1/*""*/;
    if ( ServantLeaderInfo__IsNpc(v74, 0LL) )
    {
      dispLimitCount = v74->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v74->fields.npcFlag, 0LL) )
      {
        v91 = tdInfo;
        v92 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
        v93 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v398.fields.currentCryptoKey = v92;
        *(_QWORD *)&v398.fields.fakeValue = v93;
        switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v398, 0LL);
        if ( !v91 )
          goto LABEL_569;
        name = TreasureDvcInfo__GetName(v91, switchSkillUIList, 0LL);
      }
      v94 = !NpcServantFollowerEntity__IsHideRarity(v74->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v74, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !switchSkillUIList )
          goto LABEL_569;
        switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)switchSkillUIList,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !switchSkillUIList )
          goto LABEL_569;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           (ServantLimitSpoilerProtectionMaster_o *)switchSkillUIList,
                           v74->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v94 = 1;
    }
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)switchSkillUIList, v94, 0LL);
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      !item->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v74, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v102 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
      v101 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
      v103 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v399.fields.currentCryptoKey = v102;
      *(_QWORD *)&v399.fields.fakeValue = v101;
      switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v399, 0LL);
      if ( !v103 )
        goto LABEL_569;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                         v103,
                         switchSkillUIList,
                         dispLimitCount,
                         0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v104 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v106 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
    v105 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
    v107 = (ServantLimitAddMaster_o *)v104;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v400.fields.currentCryptoKey = v106;
    *(_QWORD *)&v400.fields.fakeValue = v105;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v400, 0LL);
    if ( !tdInfo || !v107 )
      goto LABEL_569;
    switchSkillUIList = (__int64)ServantLimitAddMaster__GetOverwriteTDName(
                                   v107,
                                   switchSkillUIList,
                                   dispLimitCount,
                                   name,
                                   tdInfo->fields.lv,
                                   0LL);
    v109 = *p_followerInfo;
    if ( !*p_followerInfo )
    {
      FollowerPointNotFriend = 0;
LABEL_178:
      v127 = v89;
      goto LABEL_336;
    }
    v110 = (Il2CppObject *)switchSkillUIList;
    switch ( v109->fields.type )
    {
      case 1:
        v132 = this->fields.playerNameLabel;
        if ( (byte_4217564 & 1) == 0 )
        {
          switchSkillUIList = sub_B0D8A4(&StringLiteral_18452/*"error"*/, v108);
          byte_4217564 = 1;
          v109 = *p_followerInfo;
        }
        if ( !v132 )
          goto LABEL_569;
        if ( v109 )
          v133 = &v109->fields.userName;
        else
          v133 = (System_String_o **)&StringLiteral_18452/*"error"*/;
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
        UIIconLabel__Set_41076120((UIIconLabel_o *)switchSkillUIList, 2, v134, 0, 0, 0LL, 0, 0, 0, 0LL);
        v182 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v183 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v184 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v184 = 0LL;
        v194 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v184, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v183, v194, 0LL);
        if ( !v182 )
          goto LABEL_569;
        UILabel__set_text(v182, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19404/*"icon_friend"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v195 = item->fields.questRestrictionInfo;
        if ( v195 )
        {
          switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)switchSkillUIList,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                                         v195->fields.questId,
                                         (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          HasFlag_23244236 = QuestEntity__HasFlag_23244236(
                               (QuestEntity_o *)switchSkillUIList,
                               0x8000000LL,
                               v195->fields.questPhase,
                               0LL);
          v197 = BalanceConfig_TypeInfo;
          if ( HasFlag_23244236 )
          {
            if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v197 = BalanceConfig_TypeInfo;
            }
            p_FollowFriendPoint = &v197->static_fields->FollowFriendPoint;
LABEL_326:
            FollowerPointNotFriend = *p_FollowFriendPoint;
            v203 = (System_String_o **)&StringLiteral_9405/*"NP_MAX_COLOR_NAME"*/;
            v193 = LocalizationManager_TypeInfo;
            if ( v388 <= 1 )
              v203 = (System_String_o **)&StringLiteral_9399/*"NP_COLOR_NAME"*/;
            v202 = *v203;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
LABEL_329:
              if ( !v193->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v193);
            }
LABEL_331:
            v204 = LocalizationManager__Get(v202, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v204, v110, 0LL);
            if ( !this->fields.supportInfoButton )
              goto LABEL_569;
            v127 = (System_String_o *)switchSkillUIList;
            switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                           0LL);
            if ( !switchSkillUIList )
              goto LABEL_569;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
            switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
            if ( !switchSkillUIList )
              goto LABEL_569;
            v128 = 1;
LABEL_335:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v128, 0LL);
LABEL_336:
            IsHideSupport = ServantLeaderInfo__IsHideSupport(v74, 0LL);
            v207 = this->fields.svtNameRangeLabel;
            if ( IsHideSupport )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11761/*"SERVANT_HIDE_NAME"*/, 0LL);
              if ( !v207 )
                goto LABEL_569;
              UIRangeLabel__Set(v207, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
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
                switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9402/*"NP_HIDE_NAME_LEVEL"*/, 0LL);
                v127 = (System_String_o *)switchSkillUIList;
              }
            }
            else
            {
              switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_SvtNameText(item, v206);
              if ( !v207 )
                goto LABEL_569;
              UIRangeLabel__Set(v207, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
            }
            if ( tdInfo )
            {
              strengthStatus = tdInfo->fields.strengthStatus;
              if ( ServantLeaderInfo__IsHideSupport(v74, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v74, 0LL) )
                strengthStatus = 0;
              v209 = this->fields.svtNpRangeLabel;
              switchSkillUIList = (__int64)StrengthStatus__GetIconName(strengthStatus, 0LL);
              if ( v209 )
              {
                UIRangeLabel__Set(v209, v127, (System_String_o *)switchSkillUIList, 0, 0, 0LL);
                v210 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v210, 0LL, 0LL) )
                {
                  switchSkillUIList = ServantLeaderInfo__IsHideSupport(v74, 0LL);
                  v212 = this->fields.svtNpCommandCard;
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !v212 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__SetHide(this->fields.svtNpCommandCard, 0LL);
                  }
                  else
                  {
                    if ( !v212 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__Set(this->fields.svtNpCommandCard, tdInfo, 0LL);
                  }
                }
                FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, v211);
                friendPointCampaignEntity = item->fields.friendPointCampaignEntity;
                v215 = FriendPointUpVal;
                v216 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
                switchSkillUIList = (__int64)this->fields.friendPointIconLabel;
                if ( switchSkillUIList )
                {
                  UIIconLabel__Set_41076120(
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
                  if ( v215 > 0 || v216 >= 1 )
                  {
                    if ( v216 <= 0 )
                      v218 = 1000;
                    else
                      v218 = v216;
                    v219 = 274877907LL * (v218 * v215 + (v218 - 1000) * FollowerPointNotFriend);
                    friendPointData2Label = this->fields.friendPointData2Label;
                    v221 = (v219 >> 38) + ((unsigned __int64)v219 >> 63);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v222 = LocalizationManager__Get((System_String_o *)StringLiteral_6417/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
                    TimesToRestart_k__BackingField = v221;
                    v223 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                    switchSkillUIList = (__int64)System_String__Format(v222, v223, 0LL);
                    if ( !friendPointData2Label )
                      goto LABEL_569;
                    v217 = (System_String_o *)switchSkillUIList;
                    switchSkillUIList = (__int64)friendPointData2Label;
                  }
                  else
                  {
                    switchSkillUIList = (__int64)this->fields.friendPointData2Label;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    v217 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text((UILabel_o *)switchSkillUIList, v217, 0LL);
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
                    v225 = this->fields.campaignLabel;
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__GetFriendPointCampaignName(item, v226);
                    if ( !v225 )
                      goto LABEL_569;
                    v227 = (System_String_o *)switchSkillUIList;
                    v228 = v225;
                  }
                  else
                  {
                    if ( !campaignLabel )
                      goto LABEL_569;
                    v228 = this->fields.campaignLabel;
                    v227 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text(v228, v227, 0LL);
                  v229 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v229, 0LL, 0LL) )
                  {
                    if ( FollowerSelectItemListViewItem__get_ServantLeader(item, v230) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v232);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v233 = *(_QWORD *)(switchSkillUIList + 48);
                      v234 = *(_QWORD *)(switchSkillUIList + 56);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v401.fields.currentCryptoKey = v233;
                      *(_QWORD *)&v401.fields.fakeValue = v234;
                      v235 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v401, 0LL);
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v236);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)switchSkillUIList, 0LL);
                    }
                    else
                    {
                      Rarity = -1;
                      v235 = -1;
                    }
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v232);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    if ( *(_QWORD *)(switchSkillUIList + 144) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v238);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v239 = *(_QWORD *)(switchSkillUIList + 144);
                      if ( !v239 )
                        goto LABEL_569;
                      v240 = *(_QWORD *)(v239 + 56);
                      v241 = *(_QWORD *)(v239 + 64);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v402.fields.currentCryptoKey = v240;
                      *(_QWORD *)&v402.fields.fakeValue = v241;
                      v242 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v402, 0LL);
                    }
                    else
                    {
                      v242 = -1;
                    }
                    switchSkillUIList = (__int64)this->fields.eventUpValIcon;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    EventUpValIconComponent__Set(
                      (EventUpValIconComponent_o *)switchSkillUIList,
                      item->fields.eventUpValItemList,
                      v235,
                      Rarity,
                      v242,
                      0LL);
                  }
                  p_skillInfoList = &this->fields.skillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetSkillInfo(
                                        item,
                                        &this->fields.skillInfoList,
                                        v231);
                  v245 = this->fields.skillIconList;
                  if ( !v245 )
                    goto LABEL_569;
                  v246 = *(_QWORD *)&v245->max_length;
                  if ( v246 << 32 >= 1 )
                  {
                    v247 = *p_skillInfoList;
                    v248 = 0;
                    v249 = 0LL;
                    while ( v247 )
                    {
                      max_length = v247->max_length;
                      if ( (__int64)v249 < (int)max_length )
                      {
                        if ( v249 >= max_length )
                        {
LABEL_795:
                          v383 = sub_B0D9A8(switchSkillUIList);
                          sub_B0D948(v383, 0LL);
                        }
                        v251 = (*p_skillInfoList)->m_Items[v249];
                        if ( v251 && v251->fields.id >= 1 )
                          v248 = v249 + 1;
                      }
                      if ( (__int64)++v249 >= (int)v246 )
                        goto LABEL_425;
                    }
                    goto LABEL_569;
                  }
                  v248 = 0;
LABEL_425:
                  if ( (int)v246 >= 1 )
                  {
                    v252 = v248;
                    v253 = 4LL;
                    do
                    {
                      v254 = v253 - 4;
                      if ( v253 - 4 >= v252 )
                      {
                        v260 = this->fields.skillBaseList;
                        if ( !v260 )
                          goto LABEL_569;
                        if ( v254 >= v260->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v260->obj.klass + v253);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v255 = *p_skillInfoList;
                        if ( !*p_skillInfoList )
                          goto LABEL_569;
                        if ( v254 >= v255->max_length )
                          goto LABEL_795;
                        v256 = this->fields.skillBaseList;
                        if ( !v256 )
                          goto LABEL_569;
                        if ( v254 >= v256->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v256->obj.klass + v253);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v257 = (int32_t *)*((_QWORD *)&v255->obj.klass + v253);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v74, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v257 )
                            v257[4] = 0;
                          v258 = this->fields.skillIconList;
                          if ( !v258 )
                            goto LABEL_569;
                          if ( v254 >= v258->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v258->obj.klass + v253);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
                          if ( !skillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v254 >= skillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v253);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v261 = this->fields.skillIconList;
                          if ( !v261 )
                            goto LABEL_569;
                          if ( v254 >= v261->max_length )
                            goto LABEL_795;
                          if ( !v257 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v261->obj.klass + v253);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_26128472(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v257[4],
                            v257[5],
                            v257[12],
                            v257[13],
                            0LL);
                          v262 = this->fields.skillLevelIconLabelList;
                          if ( !v262 )
                            goto LABEL_569;
                          if ( v254 >= v262->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v262->obj.klass + v253);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41076120(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v257[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v263 = this->fields.skillIconList;
                      if ( !v263 )
                        goto LABEL_569;
                      v264 = v253 - 3;
                      ++v253;
                    }
                    while ( v264 < (int)v263->max_length );
                  }
                  v265 = this->fields.displaySkill;
                  if ( v265 == 2 )
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
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    if ( v265 == 1 )
                    {
                      switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v266 = 0;
                    }
                    else
                    {
                      if ( v265 )
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
                      v266 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v266, 0LL);
                  }
LABEL_472:
                  p_appendSkillInfoList = &this->fields.appendSkillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                        item,
                                        &this->fields.appendSkillInfoList,
                                        item->fields.isNpc,
                                        v244);
                  v268 = this->fields.appendSkillIconList;
                  if ( !v268 )
                    goto LABEL_569;
                  v269 = *(_QWORD *)&v268->max_length;
                  if ( v269 << 32 < 1 )
                  {
                    v271 = 0;
                  }
                  else
                  {
                    v270 = *p_appendSkillInfoList;
                    v271 = 0;
                    v272 = 0LL;
                    do
                    {
                      if ( v270 )
                      {
                        v273 = v270->max_length;
                        if ( v272 < (int)v273 )
                        {
                          if ( v272 >= v273 )
                            goto LABEL_795;
                          v274 = (*p_appendSkillInfoList)->m_Items[v272];
                          if ( v274 && v274->fields.id >= 1 )
                            v271 = v272 + 1;
                        }
                      }
                      ++v272;
                    }
                    while ( v272 < (int)v269 );
                  }
                  if ( (int)v269 >= 1 )
                  {
                    v275 = v271;
                    v276 = 4LL;
                    do
                    {
                      v277 = v276 - 4;
                      if ( v276 - 4 >= v275 )
                      {
                        v283 = this->fields.appendSkillBaseList;
                        if ( !v283 )
                          goto LABEL_569;
                        if ( v277 >= v283->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v283->obj.klass + v276);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v278 = *p_appendSkillInfoList;
                        if ( !*p_appendSkillInfoList )
                          goto LABEL_569;
                        if ( v277 >= v278->max_length )
                          goto LABEL_795;
                        v279 = this->fields.appendSkillBaseList;
                        if ( !v279 )
                          goto LABEL_569;
                        if ( v277 >= v279->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v279->obj.klass + v276);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v280 = (int32_t *)*((_QWORD *)&v278->obj.klass + v276);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v74, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v280 )
                            v280[4] = 0;
                          v281 = this->fields.appendSkillIconList;
                          if ( !v281 )
                            goto LABEL_569;
                          if ( v277 >= v281->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v281->obj.klass + v276);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                          if ( !appendSkillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v277 >= appendSkillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v276);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v284 = this->fields.appendSkillIconList;
                          if ( !v284 )
                            goto LABEL_569;
                          if ( v277 >= v284->max_length )
                            goto LABEL_795;
                          if ( !v280 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v284->obj.klass + v276);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_26128472(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v280[4],
                            v280[5],
                            v280[12],
                            v280[13],
                            0LL);
                          v285 = this->fields.appendSkillLevelIconLabelList;
                          if ( !v285 )
                            goto LABEL_569;
                          if ( v277 >= v285->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v285->obj.klass + v276);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41076120(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v280[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v286 = this->fields.appendSkillIconList;
                      if ( !v286 )
                        goto LABEL_569;
                      v287 = v276 - 3;
                      ++v276;
                    }
                    while ( v287 < (int)v286->max_length );
                  }
                  v288 = this->fields.displaySkill;
                  if ( v288 == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                    v78 = (System_String_o *)v389;
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
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    v78 = (System_String_o *)v389;
                    if ( v288 == 1 )
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
                      v289 = 1;
                    }
                    else
                    {
                      if ( v288 )
                        goto LABEL_535;
                      switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v289 = 0;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v289, 0LL);
                  }
                  if ( this->fields.displaySkill == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.switchSkillUIList;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillInfo = this->fields.switchSkillInfo;
                    switchSkillUIList = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillUIList,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !switchSkillInfo )
                      goto LABEL_569;
                    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)switchSkillUIList, 0LL);
                  }
LABEL_535:
                  v291 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v291, 0LL, 0LL) )
                  {
                    switchSkillUIList = ServantLeaderInfo__IsHideSupport(v74, 0LL);
                    v293 = this->fields.svtCommandCardList;
                    if ( (switchSkillUIList & 1) != 0 )
                    {
                      if ( !v293 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__SetHide(this->fields.svtCommandCardList, 0LL);
                    }
                    else
                    {
                      SvtId = FollowerSelectItemListViewItem__get_SvtId(item, v292);
                      commandCardParam = v74->fields.commandCardParam;
                      v296 = SvtId;
                      switchSkillUIList = (__int64)ServantLeaderInfo__getCommandCodeIdList(v74, 0LL);
                      if ( !v293 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__Set_27048524(
                        v293,
                        v296,
                        commandCardParam,
                        (System_Int32_array *)switchSkillUIList,
                        2,
                        1,
                        0LL);
                      v78 = (System_String_o *)v389;
                    }
                  }
                  v297 = (UnityEngine_Object_o *)this->fields.pushSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  switchSkillUIList = UnityEngine_Object__op_Inequality(v297, 0LL, 0LL);
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !*p_followerInfo )
                      goto LABEL_569;
                    pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
                    v299 = pushUserSvtId && pushUserSvtId == v74->fields.userSvtId;
                    switchSkillUIList = (__int64)this->fields.pushSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillUIList,
                                                   0LL);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v299, 0LL);
                  }
                  v300 = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v300, 0LL, 0LL) )
                  {
                    v301 = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(v301, 0LL, 0LL) )
                    {
                      if ( item->fields._IsDataLost_k__BackingField )
                      {
                        v302 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetPartyOrganizationImage(v302, (System_String_o *)StringLiteral_17939/*"datalost_svt_select"*/, 0LL);
                        v303 = (UIWidget_o *)this->fields.dataLostMaskSprite;
                        *(UnityEngine_Color_o *)&v304 = UnityEngine_Color__get_white(0LL);
                        if ( !v303 )
                          goto LABEL_569;
                        UIWidget__set_color(v303, *(UnityEngine_Color_o *)&v304, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                      }
                      else
                      {
                        if ( item->fields._TimesToRestart_k__BackingField < 1 )
                          goto LABEL_585;
                        v308 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetCommon(v308, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        UISprite__set_spriteName(
                          (UISprite_o *)switchSkillUIList,
                          (System_String_o *)StringLiteral_19545/*"img_frames_mask01"*/,
                          0LL);
                        *(UnityEngine_Color_o *)&v309 = UnityEngine_Color__get_black(0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v312 = 1059037088;
                        UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v309, 0LL);
                        v313 = this->fields.dataLostMaskMessageLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v314 = LocalizationManager__Get((System_String_o *)StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
                        v315 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                        switchSkillUIList = (__int64)System_String__Format(v314, v315, 0LL);
                        if ( !v313 )
                          goto LABEL_254;
                        UILabel__set_text(v313, (System_String_o *)switchSkillUIList, 0LL);
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
                      v320 = (System_String_o *)StringLiteral_1/*""*/;
                    }
                    else
                    {
                      if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                        v317 = (Il2CppObject **)&StringLiteral_6351/*"FFFF00"*/;
                      else
                        v317 = (Il2CppObject **)&StringLiteral_6352/*"FFFFFF"*/;
                      v318 = *v317;
                      TimesToRestart_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                      v319 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                      switchSkillUIList = (__int64)System_String__Format_43845440(
                                                     (System_String_o *)StringLiteral_15877/*"[{0}]+{1}[-]"*/,
                                                     v318,
                                                     v319,
                                                     0LL);
                      if ( !this->fields.openClassBoardNumLabel )
                        goto LABEL_254;
                      v320 = (System_String_o *)switchSkillUIList;
                      switchSkillUIList = (__int64)this->fields.openClassBoardNumLabel;
                    }
                    UILabel__set_text((UILabel_o *)switchSkillUIList, v320, 0LL);
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
                      v324 = this->fields.classBoardOpenButtonLabel;
                      if ( (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12514/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                       0LL);
                        if ( !v324 )
                          goto LABEL_254;
                        UILabel__set_text(v324, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v325 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v328 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v328 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v328->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y;
                      }
                      else
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12513/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                       0LL);
                        if ( !v324 )
                          goto LABEL_254;
                        UILabel__set_text(v324, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v325 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v326 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v326 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v326->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y;
                      }
                      GameObjectExtensions__SetLocalPositionY(v325, CLASS_BOARD_NOT_LABEL_POS_Y, 0LL);
                    }
                    goto LABEL_631;
                  }
                  goto LABEL_269;
                }
              }
            }
LABEL_569:
            sub_B0D97C(switchSkillUIList);
          }
          if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            goto LABEL_323;
        }
        else
        {
          v197 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_323:
            if ( !v197->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v197);
              v197 = BalanceConfig_TypeInfo;
            }
          }
        }
        p_FollowFriendPoint = &v197->static_fields->FollowerPointFriend;
        goto LABEL_326;
      case 2:
        v135 = this->fields.playerNameLabel;
        if ( (byte_4217564 & 1) == 0 )
        {
          switchSkillUIList = sub_B0D8A4(&StringLiteral_18452/*"error"*/, v108);
          byte_4217564 = 1;
          v109 = *p_followerInfo;
        }
        if ( !v135 )
          goto LABEL_569;
        if ( v109 )
          v136 = &v109->fields.userName;
        else
          v136 = (System_String_o **)&StringLiteral_18452/*"error"*/;
        UILabel__set_text(v135, *v136, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v137 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v137 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41076120((UIIconLabel_o *)switchSkillUIList, 2, v137, 0, 0, 0LL, 0, 0, 0, 0LL);
        v185 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v186 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v187 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v187 = 0LL;
        v199 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v187, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v186, v199, 0LL);
        if ( !v185 )
          goto LABEL_569;
        UILabel__set_text(v185, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
        v200 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v200 = BalanceConfig_TypeInfo;
        }
        static_fields = v200->static_fields;
        v191 = (System_String_o **)&StringLiteral_9405/*"NP_MAX_COLOR_NAME"*/;
        v192 = v388;
        v193 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = static_fields->FollowerPointNotFriend;
LABEL_316:
        if ( v192 <= 1 )
          v191 = (System_String_o **)&StringLiteral_9399/*"NP_COLOR_NAME"*/;
        v202 = *v191;
        if ( (BYTE3(v193->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_331;
        goto LABEL_329;
      case 3:
      case 4:
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v389 = StringLiteral_19581/*"img_listbg_02"*/;
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
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19437/*"icon_support_01"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v111 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v111 = BalanceConfig_TypeInfo;
        }
        FollowerPointNotFriend = v111->static_fields->FollowerPointNpc;
        if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
        {
          v113 = (System_String_o **)&StringLiteral_9405/*"NP_MAX_COLOR_NAME"*/;
          if ( v388 <= 1 )
            v113 = (System_String_o **)&StringLiteral_9399/*"NP_COLOR_NAME"*/;
          v114 = *v113;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v115 = LocalizationManager__Get(v114, 0LL);
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v115 = LocalizationManager__Get((System_String_o *)StringLiteral_9400/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
          v110 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9401/*"NP_HIDE_NAME"*/, 0LL);
        }
        switchSkillUIList = (__int64)System_String__Format(v115, v110, 0LL);
        if ( !this->fields.supportInfoButton )
          goto LABEL_569;
        v127 = (System_String_o *)switchSkillUIList;
        switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                       0LL);
        if ( !switchSkillUIList )
          goto LABEL_569;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
        switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v128 = 0;
        goto LABEL_335;
      case 5:
        v129 = this->fields.playerNameLabel;
        if ( (byte_4217564 & 1) == 0 )
        {
          switchSkillUIList = sub_B0D8A4(&StringLiteral_18452/*"error"*/, v108);
          byte_4217564 = 1;
          v109 = *p_followerInfo;
        }
        if ( !v129 )
          goto LABEL_569;
        if ( v109 )
          v130 = &v109->fields.userName;
        else
          v130 = (System_String_o **)&StringLiteral_18452/*"error"*/;
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
        UIIconLabel__Set_41076120((UIIconLabel_o *)switchSkillUIList, 2, v131, 0, 0, 0LL, 0, 0, 0, 0LL);
        v179 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v180 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v181 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v181 = 0LL;
        v188 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v181, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v180, v188, 0LL);
        if ( !v179 )
          goto LABEL_569;
        UILabel__set_text(v179, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19403/*"icon_follow"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v189 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v189 = BalanceConfig_TypeInfo;
        }
        v190 = v189->static_fields;
        v191 = (System_String_o **)&StringLiteral_9405/*"NP_MAX_COLOR_NAME"*/;
        v192 = v388;
        v193 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = v190->FollowFriendPoint;
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
  UnityEngine_Component_o *gameObject; // x0

  v3 = item;
  if ( (byte_421756D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    byte_421756D = 1;
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
      sub_B0D97C(gameObject);
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
  if ( (byte_421756C & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)sub_B0D8A4(&OptionManager_TypeInfo, item);
    byte_421756C = 1;
  }
  if ( !item )
LABEL_34:
    sub_B0D97C(this);
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