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

  if ( (byte_40FA6F5 & 1) == 0 )
  {
    sub_B16FFC(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_40FA6F5 = 1;
  }
  v6 = 1065287423;
  v7 = 1064300528;
  v8 = 1058642330;
  v14 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  v15.fields.g = 0.64706;
  v15.fields.b = 0.27059;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = v14;
  v15.fields.r = 0.88235;
  v13 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(v15, v9, v10, v11, (const MethodInfo *)&v13);
  v12 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = v13;
  v12->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 12.0;
  v12->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y = 11.0;
}


void __fastcall FollowerSelectItemListViewItemDraw___ctor(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  struct SkillIconComponent_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  struct UIIconLabel_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x2
  struct UnityEngine_GameObject_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x2
  struct SkillIconComponent_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  struct UIIconLabel_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40FA6F4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B16FFC(&SkillIconComponent___TypeInfo, v5);
    sub_B16FFC(&UIIconLabel___TypeInfo, v6);
    byte_40FA6F4 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtSkillListMax,
                                                v2);
  this->fields.skillBaseList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v16 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                             v15);
  this->fields.skillIconList = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = (struct UIIconLabel_array *)sub_B17014(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax,
                                      v23);
  this->fields.skillLevelIconLabelList = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v32 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                                 v31);
  this->fields.appendSkillBaseList = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v40 = (struct SkillIconComponent_array *)sub_B17014(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                             v39);
  this->fields.appendSkillIconList = v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v48 = (struct UIIconLabel_array *)sub_B17014(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax,
                                      v47);
  this->fields.appendSkillLevelIconLabelList = v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__Awake(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UISprite_o *skillIconSprite; // x20

  if ( (byte_40FA6EE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19290, v8);
    sub_B16FFC(&StringLiteral_19421, v9);
    sub_B16FFC(&StringLiteral_19201, v10);
    sub_B16FFC(&StringLiteral_19420, v11);
    byte_40FA6EE = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19290, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_19421, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19201, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_19420, 0LL);
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
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  struct UIWidget_o *skillInfoUiWidget; // x0
  struct UIWidget_o *appendSkillInfoUiWidget; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  _BOOL4 v15; // w8
  __int64 v16; // x20
  __int64 v17; // x21
  int32_t v18; // w9
  struct UIWidget_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UIWidget__o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  struct System_Collections_Generic_List_UIWidget__o *v28; // x0
  struct System_Collections_Generic_List_UIWidget__o *v29; // x0
  SwitchUIWidgetComponent_o *v30; // x19
  UIWidget_array *v31; // x0
  struct UIWidget_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_40FA6F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_40FA6F3 = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  this->fields.displaySkill = displaySkill;
  if ( !switchSkillInfo )
    goto LABEL_43;
  SwitchUIWidgetComponent__Clear(switchSkillInfo, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  skillInfoUiWidget = this->fields.skillInfoUiWidget;
  if ( !skillInfoUiWidget )
    goto LABEL_43;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))skillInfoUiWidget->klass->vtable._8_set_alpha.method)(
    skillInfoUiWidget,
    skillInfoUiWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  appendSkillInfoUiWidget = this->fields.appendSkillInfoUiWidget;
  if ( !appendSkillInfoUiWidget )
    goto LABEL_43;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))appendSkillInfoUiWidget->klass->vtable._8_set_alpha.method)(
    appendSkillInfoUiWidget,
    appendSkillInfoUiWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  if ( !item )
    goto LABEL_43;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
  v15 = (int)ServantLeader;
  if ( ServantLeader )
  {
    v17 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v17;
    *(_QWORD *)&v36.fields.fakeValue = v16;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36, 0LL) > 0;
  }
  v18 = this->fields.displaySkill;
  if ( v18 == 2 )
  {
    if ( v15 )
    {
      v23 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
      if ( !v23 )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !gameObject )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v25 = this->fields.switchSkillUIList;
      if ( !v25 )
        goto LABEL_43;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v25,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      v26 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
      if ( !v26 )
        goto LABEL_43;
      v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
      if ( !v27 )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive(v27, 1, 0LL);
      v28 = this->fields.switchSkillUIList;
      if ( !v28 )
        goto LABEL_43;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    v29 = this->fields.switchSkillUIList;
    if ( v29 )
    {
      v30 = this->fields.switchSkillInfo;
      v31 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v30 )
      {
        SwitchUIWidgetComponent__Set(v30, v31, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B170D4();
  }
  if ( v18 != 1 )
  {
    if ( v18 )
      return;
    if ( !v15 )
      goto LABEL_21;
    v19 = this->fields.skillInfoUiWidget;
    if ( v19 )
    {
      ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v19->klass->vtable._8_set_alpha.method)(
        v19,
        v19->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      v20 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
      if ( v20 )
      {
        v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
        if ( v21 )
        {
          UnityEngine_GameObject__SetActive(v21, 1, 0LL);
LABEL_21:
          v22 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
          if ( !v22 )
            goto LABEL_43;
          goto LABEL_40;
        }
      }
    }
    goto LABEL_43;
  }
  if ( v15 )
  {
    v32 = this->fields.appendSkillInfoUiWidget;
    if ( !v32 )
      goto LABEL_43;
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v32->klass->vtable._8_set_alpha.method)(
      v32,
      v32->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
    v33 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
    if ( !v33 )
      goto LABEL_43;
    v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
    if ( !v34 )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(v34, 1, 0LL);
  }
  v22 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
  if ( !v22 )
    goto LABEL_43;
LABEL_40:
  v35 = UnityEngine_Component__get_gameObject(v22, 0LL);
  if ( !v35 )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive(v35, 0, 0LL);
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
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UICommonButton_o *v12; // x0
  struct UICommonButton_o *v13; // x0
  UnityEngine_Behaviour_o *v14; // x0
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v17; // w24
  Il2CppClass **v18; // x8
  UnityEngine_Behaviour_o *v19; // x21
  WebViewObject_o *Component_WebViewObject; // x22
  UnityEngine_Component_o *supportInfoButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *v23; // x0
  struct UICommonButton_o *v24; // x0
  UnityEngine_Behaviour_o *v25; // x0

  if ( (byte_40FA6F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FA6F2 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( v9 )
  {
    v12 = this->fields.baseButton;
    if ( !v12 )
      goto LABEL_19;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._5_set_isEnabled.method)(
      v12,
      1LL,
      v12->klass->vtable._6_OnInit.methodPtr);
    v13 = this->fields.baseButton;
    if ( !v13 )
      goto LABEL_19;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v13->klass->vtable._14_SetState.method)(
      v13,
      0LL,
      0LL,
      v13->klass->vtable._15_OnPress.methodPtr);
    v14 = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !v14 )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(v14, isInput, 0LL);
  }
  skillButtonList = this->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0;
      do
      {
        if ( v17 >= skillButtonList->max_length )
        {
          sub_B17100(v9, v10, v11);
          sub_B170A0();
        }
        v18 = &skillButtonList->obj.klass + (int)v17;
        v19 = (UnityEngine_Behaviour_o *)v18[4];
        if ( !v19 )
          break;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v18[4],
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))v19->klass[1]._1.namespaze)(
          v19,
          1LL,
          v19->klass[1]._1.byval_arg.data);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v19->klass[1]._1.implementedInterfaces)(
          v19,
          0LL,
          0LL,
          v19->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v19, isInput, 0LL);
        if ( !Component_WebViewObject )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_WebViewObject, 1, 0LL);
        if ( (int)++v17 >= max_length )
          goto LABEL_20;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_19:
      sub_B170D4();
    }
  }
LABEL_20:
  supportInfoButton = (UnityEngine_Component_o *)this->fields.supportInfoButton;
  if ( !supportInfoButton )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(supportInfoButton, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  if ( UnityEngine_GameObject__get_active(gameObject, 0LL) )
  {
    v23 = this->fields.supportInfoButton;
    if ( !v23 )
      goto LABEL_19;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v23->klass->vtable._5_set_isEnabled.method)(
      v23,
      1LL,
      v23->klass->vtable._6_OnInit.methodPtr);
    v24 = this->fields.supportInfoButton;
    if ( !v24 )
      goto LABEL_19;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v24->klass->vtable._14_SetState.method)(
      v24,
      0LL,
      0LL,
      v24->klass->vtable._15_OnPress.methodPtr);
    v25 = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !v25 )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(v25, isInput, 0LL);
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
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x0
  struct UIWidget_o *skillInfoUiWidget; // x0
  struct UIWidget_o *appendSkillInfoUiWidget; // x0
  UIWidget_o *warningMessageLabel; // x0
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  ServantLeaderInfo_o *v78; // x21
  int32_t Kind_28870592; // w28
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x23
  UnityEngine_Component_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x23
  UILabel_o *v85; // x0
  UnityEngine_Component_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  __int64 v88; // x23
  __int64 v89; // x24
  struct FollowerInfo_o *v90; // x8
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  const MethodInfo *v92; // x2
  const MethodInfo *v93; // x2
  int32_t TreasureDeviceLevelIcon; // w0
  System_String_o *name; // x25
  int v96; // w27
  int32_t dispLimitCount; // w26
  bool v98; // w8
  EquipTargetInfo_o *EquipInfo; // x0
  UIRangeLabel_o *svtNameRangeLabel; // x24
  System_String_o *v101; // x0
  const MethodInfo *v102; // x2
  UILabel_o *v103; // x0
  UIIconLabel_o *v104; // x0
  UILabel_o *v105; // x0
  UISprite_o *v106; // x0
  struct UISprite_o *v107; // x0
  UnityEngine_Component_o *supportInfoButton; // x0
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_Behaviour_o *svtProfileBackSpr; // x0
  bool v111; // w1
  WebViewManager_o *v112; // x0
  ServantLimitSpoilerProtectionMaster_o *v113; // x0
  ServantFaceIconComponent_o *v114; // x0
  ServantFaceIconComponent_o *v115; // x0
  int32_t v116; // w24
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v118; // x22
  __int64 v119; // x23
  ServantLimitImageMaster_o *v120; // x28
  int32_t v121; // w0
  WarQuestSelectionMaster_o *v122; // x0
  __int64 v123; // x22
  __int64 v124; // x23
  ServantLimitAddMaster_o *v125; // x28
  int32_t v126; // w0
  Il2CppObject *OverwriteTDName; // x25
  UILabel_o *v128; // x0
  __int64 v129; // x23
  UIIconLabel_o *v130; // x0
  UILabel_o *v131; // x0
  UISprite_o *v132; // x0
  struct UISprite_o *v133; // x0
  BalanceConfig_c *v134; // x0
  int32_t FollowerPointNotFriend; // w26
  System_String_o **v136; // x8
  System_String_o *v137; // x22
  System_String_o *v138; // x24
  UILabel_o *v139; // x22
  System_String_o *v140; // x0
  UIIconLabel_o *v141; // x24
  int32_t v142; // w0
  UILabel_o *v143; // x24
  System_String_o *v144; // x22
  int64_t v145; // x0
  Il2CppObject *v146; // x0
  System_String_o *v147; // x0
  UISprite_o *typeTextSprite; // x0
  __int64 *v149; // x8
  UILabel_o *playerNameLabel; // x22
  System_String_o *PlayerNameText; // x0
  UIIconLabel_o *playerLevelIconLabel; // x24
  int32_t PlayerLevel; // w0
  UILabel_o *loginDataLabel; // x24
  System_String_o *v155; // x22
  int64_t LoginTime; // x0
  Il2CppObject *v157; // x0
  System_String_o *v158; // x0
  struct UISprite_o *v159; // x0
  UILabel_o *v160; // x22
  System_String_o *v161; // x0
  UIIconLabel_o *v162; // x24
  int32_t v163; // w0
  UILabel_o *v164; // x24
  System_String_o *v165; // x22
  int64_t v166; // x0
  Il2CppObject *v167; // x0
  System_String_o *v168; // x0
  UISprite_o *v169; // x0
  UnityEngine_Component_o *v170; // x0
  UnityEngine_GameObject_o *v171; // x0
  const MethodInfo *v172; // x2
  UIRangeLabel_o *svtNpRangeLabel; // x24
  System_String_o *v174; // x0
  UnityEngine_Object_o *svtNpCommandCard; // x22
  ServantNpCommandCardComponent_o *v176; // x0
  UIIconLabel_o *friendPointIconLabel; // x0
  UILabel_o *friendPointData2Label; // x0
  UILabel_o *campaignLabel; // x0
  UnityEngine_Object_o *eventUpValIcon; // x22
  __int64 v181; // x2
  EventUpValIconComponent_o *v182; // x0
  struct SkillIconComponent_array *skillIconList; // x8
  struct SkillInfo_array *v184; // x0
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  __int64 v191; // x0
  __int64 v192; // x1
  __int64 v193; // x2
  struct SkillIconComponent_array *v194; // x8
  __int64 v195; // x23
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  UnityEngine_GameObject_o *v197; // x0
  UnityEngine_Component_o *v198; // x0
  UnityEngine_GameObject_o *v199; // x0
  __int64 v200; // x2
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillInfo_array *v202; // x0
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  struct SkillIconComponent_array *v209; // x8
  __int64 v210; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_GameObject_o *v212; // x0
  UnityEngine_Component_o *v213; // x0
  UnityEngine_GameObject_o *v214; // x0
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantCommandCardListComponent_o *v216; // x0
  UnityEngine_Object_o *pushSprite; // x22
  UnityEngine_Component_o *v218; // x0
  UnityEngine_GameObject_o *v219; // x0
  UILabel_o *v220; // x22
  System_String_o *v221; // x0
  UIIconLabel_o *v222; // x26
  int32_t v223; // w0
  UILabel_o *v224; // x26
  System_String_o *v225; // x22
  int64_t v226; // x0
  Il2CppObject *v227; // x0
  System_String_o *v228; // x0
  UISprite_o *v229; // x0
  struct UISprite_o *v230; // x0
  BalanceConfig_c *v231; // x0
  struct BalanceConfig_StaticFields *v232; // x8
  System_String_o **v233; // x9
  LocalizationManager_c *v234; // x0
  UILabel_o *v235; // x22
  System_String_o *v236; // x0
  UIIconLabel_o *v237; // x26
  int32_t v238; // w0
  UILabel_o *v239; // x26
  System_String_o *v240; // x22
  int64_t v241; // x0
  Il2CppObject *v242; // x0
  System_String_o *v243; // x0
  UISprite_o *v244; // x0
  struct UISprite_o *v245; // x0
  struct QuestRestrictionInfo_o *v246; // x22
  WebViewManager_o *v247; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v248; // x0
  QuestEntity_o *v249; // x0
  bool HasFlag_23922108; // w0
  BalanceConfig_c *v251; // x8
  int32_t *p_FollowFriendPoint; // x8
  UILabel_o *v253; // x22
  System_String_o *v254; // x0
  UIIconLabel_o *v255; // x26
  int32_t v256; // w0
  UILabel_o *v257; // x26
  System_String_o *v258; // x22
  int64_t v259; // x0
  Il2CppObject *v260; // x0
  System_String_o *v261; // x0
  UISprite_o *v262; // x0
  BalanceConfig_c *v263; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v265; // x22
  System_String_o *v266; // x25
  System_String_o *v267; // x0
  UnityEngine_GameObject_o *v268; // x0
  UnityEngine_Behaviour_o *v269; // x0
  bool v270; // w1
  System_String_o **v271; // x8
  System_String_o *v272; // x0
  System_String_o *v273; // x0
  UnityEngine_GameObject_o *v274; // x0
  bool IsHideSupport; // w0
  UIRangeLabel_o *v276; // x24
  System_String_o *v277; // x0
  UILabel_o *v278; // x0
  System_String_o *SvtNameText; // x0
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v281; // x23
  System_String_o *IconName; // x0
  UnityEngine_Object_o *v283; // x22
  bool v284; // w0
  struct ServantNpCommandCardComponent_o *v285; // x8
  int32_t FriendPointUpVal; // w24
  int32_t FriendPointCampaignValue; // w0
  int v288; // w25
  UILabel_o *v289; // x0
  System_String_o *v290; // x1
  int v291; // w8
  __int64 v292; // x8
  struct UILabel_o *v293; // x24
  int32_t v294; // w23
  System_String_o *v295; // x22
  Il2CppObject *v296; // x0
  System_String_o *v297; // x0
  bool IsFriendPointCampaign; // w0
  UILabel_o *v299; // x24
  FollowerSelectItemListViewItemDraw_c *v300; // x0
  UILabel_o *v301; // x0
  struct UILabel_o *v302; // x22
  System_String_o *FriendPointCampaignName; // x0
  System_String_o *v304; // x1
  UILabel_o *v305; // x0
  UnityEngine_Object_o *v306; // x22
  ServantLeaderInfo_o *v307; // x0
  __int64 v308; // x23
  __int64 v309; // x24
  int32_t v310; // w24
  ServantLeaderInfo_o *v311; // x0
  int32_t Rarity; // w25
  ServantLeaderInfo_o *v313; // x0
  ServantLeaderInfo_o *v314; // x0
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v316; // x23
  __int64 v317; // x26
  int32_t v318; // w4
  EventUpValIconComponent_o *v319; // x0
  struct SkillInfo_array **p_skillInfoList; // x24
  _BOOL8 SkillInfo; // x0
  __int64 v322; // x1
  __int64 v323; // x2
  struct SkillIconComponent_array *v324; // x8
  __int64 v325; // x8
  struct SkillInfo_array *v326; // x11
  int v327; // w9
  unsigned __int64 v328; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v330; // x14
  __int64 v331; // x22
  __int64 v332; // x23
  unsigned __int64 v333; // x25
  struct SkillInfo_array *v334; // x8
  struct UnityEngine_GameObject_array *v335; // x9
  UnityEngine_GameObject_o *v336; // x0
  int32_t *v337; // x26
  struct SkillIconComponent_array *v338; // x8
  SkillIconComponent_o *v339; // x0
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  UIIconLabel_o *v341; // x0
  struct UnityEngine_GameObject_array *v342; // x8
  UnityEngine_GameObject_o *v343; // x0
  struct SkillIconComponent_array *v344; // x8
  SkillIconComponent_o *v345; // x0
  struct UIIconLabel_array *v346; // x8
  UIIconLabel_o *v347; // x0
  struct SkillIconComponent_array *v348; // x8
  __int64 v349; // x9
  int32_t v350; // w8
  struct UIWidget_o *v351; // x0
  UnityEngine_Component_o *v352; // x0
  UnityEngine_GameObject_o *v353; // x0
  bool v354; // w1
  UnityEngine_Component_o *v355; // x0
  UnityEngine_Component_o *v356; // x0
  UnityEngine_GameObject_o *v357; // x0
  struct System_Collections_Generic_List_UIWidget__o *v358; // x0
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v360; // x8
  __int64 v361; // x8
  struct SkillInfo_array *v362; // x11
  int v363; // w9
  signed __int64 v364; // x10
  unsigned __int64 v365; // x14
  SkillInfo_o *v366; // x14
  __int64 v367; // x22
  __int64 v368; // x23
  unsigned __int64 v369; // x25
  struct SkillInfo_array *v370; // x8
  struct UnityEngine_GameObject_array *v371; // x9
  UnityEngine_GameObject_o *v372; // x0
  int32_t *v373; // x26
  struct SkillIconComponent_array *v374; // x8
  SkillIconComponent_o *v375; // x0
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  UIIconLabel_o *v377; // x0
  struct UnityEngine_GameObject_array *v378; // x8
  UnityEngine_GameObject_o *v379; // x0
  struct SkillIconComponent_array *v380; // x8
  SkillIconComponent_o *v381; // x0
  struct UIIconLabel_array *v382; // x8
  UIIconLabel_o *v383; // x0
  struct SkillIconComponent_array *v384; // x8
  __int64 v385; // x9
  int32_t v386; // w8
  UnityEngine_Component_o *v387; // x0
  UnityEngine_GameObject_o *v388; // x0
  bool v389; // w1
  struct UIWidget_o *v390; // x0
  UnityEngine_Component_o *v391; // x0
  UnityEngine_Component_o *v392; // x0
  UnityEngine_GameObject_o *v393; // x0
  struct System_Collections_Generic_List_UIWidget__o *v394; // x0
  struct System_Collections_Generic_List_UIWidget__o *v395; // x0
  SwitchUIWidgetComponent_o *switchSkillInfo; // x23
  UIWidget_array *v397; // x0
  UnityEngine_Object_o *v398; // x22
  bool v399; // w0
  ServantCommandCardListComponent_o *v400; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v403; // w26
  System_Int32_array *CommandCodeIdList; // x0
  UnityEngine_Object_o *v405; // x22
  struct FollowerInfo_o *v406; // x8
  int64_t pushUserSvtId; // x8
  bool v408; // w24
  UnityEngine_Component_o *v409; // x0
  UnityEngine_GameObject_o *v410; // x0
  UnityEngine_Object_o *v411; // x22
  UnityEngine_Object_o *v412; // x22
  UISprite_o *v413; // x24
  UIWidget_o *v414; // x24
  int v415; // s0
  UnityEngine_Component_o *v419; // x0
  UISprite_o *v420; // x22
  UISprite_o *v421; // x0
  int v422; // s0
  UIWidget_o *v425; // x0
  int v426; // s3
  UILabel_o *v427; // x24
  System_String_o *v428; // x22
  Il2CppObject *v429; // x0
  System_String_o *v430; // x0
  UnityEngine_Component_o *v431; // x0
  UnityEngine_GameObject_o *v432; // x0
  UnityEngine_GameObject_o *v433; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x22
  Il2CppObject **v435; // x9
  Il2CppObject *v436; // x22
  Il2CppObject *v437; // x0
  System_String_o *v438; // x0
  System_String_o *v439; // x1
  UILabel_o *v440; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x22
  UnityEngine_Component_o *v442; // x0
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w22
  UICommonButton_o *v444; // x0
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x22
  UILabel_o *v446; // x24
  System_String_o *v447; // x0
  UnityEngine_Component_o *v448; // x0
  UnityEngine_GameObject_o *v449; // x24
  FollowerSelectItemListViewItemDraw_c *v450; // x8
  float CLASS_BOARD_NOT_LABEL_POS_Y; // s0
  System_String_o *v452; // x0
  UnityEngine_Component_o *v453; // x0
  FollowerSelectItemListViewItemDraw_c *v454; // x8
  UILabel_o *v455; // x0
  float v456; // s0
  UserGradeComponent_o *gradeIcon; // x0
  float v458; // s8
  float v459; // s0
  UnityEngine_Component_o *v460; // x0
  float v461; // s9
  UnityEngine_GameObject_o *v462; // x0
  float LocalPositionX; // s0
  UnityEngine_Component_o *v464; // x0
  float v465; // s10
  UnityEngine_GameObject_o *v466; // x0
  UserGradeComponent_o *v467; // x0
  UISprite_o *baseSprite; // x22
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v470; // x0
  UILabel_o *maskMessageLabel; // x22
  System_String_o *v472; // x0
  UnityEngine_GameObject_o *warningBase; // x0
  FlashingIconComponent_o *warningIcon; // x0
  UILabel_o *v475; // x0
  char v476; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v478; // x22
  __int64 v479; // x23
  AvalonSceneManager_o *Instance; // x0
  WebViewManager_o *v481; // x0
  BattleSetupInfo_o **basePanel; // x0
  __int64 v483; // x9
  BattleSetupInfo_o *v484; // x23
  int32_t v485; // w0
  int32_t questPhase; // w23
  int32_t v487; // w22
  WebViewManager_o *v488; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *v490; // x0
  QuestPhaseEntity_o *v491; // x22
  WebViewManager_o *v492; // x0
  WarQuestSelectionMaster_o *v493; // x0
  __int64 v494; // x23
  __int64 v495; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v496; // x21
  int32_t v497; // w0
  WarEntity_o *v498; // x0
  WarEntity_o *v499; // x8
  ServantClassCompatibilityIconComponent_o *v500; // x0
  ServantClassCompatibilityIconComponent_o *v501; // x0
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Component_o *v503; // x0
  UnityEngine_GameObject_o *v504; // x0
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v506; // x21
  System_String_o *v507; // x0
  UnityEngine_Component_o *v508; // x0
  UnityEngine_GameObject_o *v509; // x0
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  WebViewManager_o *v513; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v514; // x0
  EventDetailEntity_o *v515; // x22
  WebViewManager_o *v516; // x0
  bool v517; // w1
  UnityEngine_GameObject_o *v518; // x0
  UnityEngine_Object_o *recommendedUser; // x21
  UnityEngine_GameObject_o *v520; // x0
  UnityEngine_Component_o *v521; // x0
  UnityEngine_GameObject_o *v522; // x0
  UILabel_o *v523; // x0
  UnityEngine_GameObject_o *v524; // x0
  FlashingIconComponent_o *v525; // x0
  UILabel_o *v526; // x22
  System_String_o *v527; // x0
  UILabel_o *v528; // x0
  float v529; // s0
  UnityEngine_Component_o *v530; // x0
  float v531; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v533; // x22
  float warningMessageWidth; // s0
  float v535; // s1
  float v536; // s0
  float v537; // s2
  int32_t FollowerType; // w0
  WebViewManager_o *v539; // x0
  EventBoostItemUsedMaster_o *v540; // x22
  int64_t FollowerId; // x0
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v543; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  System_String_o *v546; // x0
  UILabel_o *numberOfUsabletimesLabel; // x21
  System_String_o *v548; // x0
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  System_String_o *v550; // x0
  System_String_o *v551; // x0
  System_String_o *v552; // x0
  UnityEngine_Component_o *v553; // x0
  UnityEngine_GameObject_o *v554; // x0
  UILabel_o *v555; // x0
  UnityEngine_GameObject_o *v556; // x0
  FlashingIconComponent_o *v557; // x0
  UILabel_o *v558; // x0
  System_String_o *v559; // x0
  UIWidget_o *friendChocolateSprite; // x0
  UIWidget_o *numberOfUsabletimesSprite; // x0
  UIWidget_o *v562; // x0
  FollowerSelectItemListViewItemDraw_o *v563; // x0
  FollowerSelectItemListViewItem_o *v564; // x1
  const MethodInfo *v565; // x2
  System_String_o *v566; // [xsp+18h] [xbp-B8h]
  System_String_o *spriteName; // [xsp+20h] [xbp-B0h]
  int32_t TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v569; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-90h] BYREF
  int32_t v571; // [xsp+54h] [xbp-7Ch] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v574; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v575; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v576; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v577; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v578; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v579; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v580; // 0:x0.16

  if ( (byte_40FA6EF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&BalanceConfig_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_B16FFC(&FollowerRootComponent_TypeInfo, v22);
    sub_B16FFC(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_B16FFC(&Grade_TypeInfo, v24);
    sub_B16FFC(&int_TypeInfo, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_B16FFC(&LocalizationManager_TypeInfo, v29);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v30);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_B16FFC(&OptionManager_TypeInfo, v32);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v34);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35);
    sub_B16FFC(&SkillInfo___TypeInfo, v36);
    sub_B16FFC(&TitleInfoControl_TypeInfo, v37);
    sub_B16FFC(&StringLiteral_3267, v38);
    sub_B16FFC(&StringLiteral_6382, v39);
    sub_B16FFC(&StringLiteral_6361, v40);
    sub_B16FFC(&StringLiteral_11694, v41);
    sub_B16FFC(&StringLiteral_9347, v42);
    sub_B16FFC(&StringLiteral_6362, v43);
    sub_B16FFC(&StringLiteral_6317, v44);
    sub_B16FFC(&StringLiteral_9348, v45);
    sub_B16FFC(&StringLiteral_11601, v46);
    sub_B16FFC(&StringLiteral_13315, v47);
    sub_B16FFC(&StringLiteral_9349, v48);
    sub_B16FFC(&StringLiteral_6375, v49);
    sub_B16FFC(&StringLiteral_6360, v50);
    sub_B16FFC(&StringLiteral_19302, v51);
    sub_B16FFC(&StringLiteral_9352, v52);
    sub_B16FFC(&StringLiteral_19409, v53);
    sub_B16FFC(&StringLiteral_12419, v54);
    sub_B16FFC(&StringLiteral_12420, v55);
    sub_B16FFC(&StringLiteral_6374, v56);
    sub_B16FFC(&StringLiteral_6376, v57);
    sub_B16FFC(&StringLiteral_6359, v58);
    sub_B16FFC(&StringLiteral_17815, v59);
    sub_B16FFC(&StringLiteral_6316, v60);
    sub_B16FFC(&StringLiteral_9324, v61);
    sub_B16FFC(&StringLiteral_9346, v62);
    sub_B16FFC(&StringLiteral_15767, v63);
    sub_B16FFC(&StringLiteral_1, v64);
    sub_B16FFC(&StringLiteral_19269, v65);
    sub_B16FFC(&StringLiteral_6363, v66);
    sub_B16FFC(&StringLiteral_19268, v67);
    sub_B16FFC(&StringLiteral_19445, v68);
    byte_40FA6EF = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v571 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v569.fields.r = 0LL;
  *(_QWORD *)&v569.fields.b = 0LL;
  switchSkillUIList = this->fields.switchSkillUIList;
  this->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_491;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  skillInfoUiWidget = this->fields.skillInfoUiWidget;
  if ( !skillInfoUiWidget )
    goto LABEL_491;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))skillInfoUiWidget->klass->vtable._8_set_alpha.method)(
    skillInfoUiWidget,
    skillInfoUiWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  appendSkillInfoUiWidget = this->fields.appendSkillInfoUiWidget;
  if ( !appendSkillInfoUiWidget )
    goto LABEL_491;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))appendSkillInfoUiWidget->klass->vtable._8_set_alpha.method)(
    appendSkillInfoUiWidget,
    appendSkillInfoUiWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  if ( (this->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    warningMessageLabel = (UIWidget_o *)this->fields.warningMessageLabel;
    if ( !warningMessageLabel )
      goto LABEL_491;
    this->fields.warningMessageWidth = warningMessageLabel->fields.mWidth;
    UIWidget__set_width(warningMessageLabel, 1000, 0LL);
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
    v74 = (UnityEngine_Component_o *)this->fields.rangeSprite;
    if ( !v74 )
      goto LABEL_491;
    gameObject = UnityEngine_Component__get_gameObject(v74, 0LL);
    if ( !gameObject )
      goto LABEL_491;
    UnityEngine_GameObject__SetActive(gameObject, mode == 0, 0LL);
  }
  if ( mode )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
    followerInfo = item->fields.followerInfo;
    v78 = ServantLeader;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_28870592 = Grade__GetKind_28870592(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_28870592, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
    spriteName = FollowerBgImage;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
    {
      v82 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
      if ( !v82 )
        goto LABEL_491;
      v83 = UnityEngine_Component__get_gameObject(v82, 0LL);
      if ( !v83 )
        goto LABEL_491;
      UnityEngine_GameObject__SetActive(v83, 0, 0LL);
    }
    dataLostMaskMessageLabel = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
    {
      v85 = this->fields.dataLostMaskMessageLabel;
      if ( !v85 )
        goto LABEL_491;
      UILabel__set_text(v85, (System_String_o *)StringLiteral_1, 0LL);
      v86 = (UnityEngine_Component_o *)this->fields.dataLostMaskMessageLabel;
      if ( !v86 )
        goto LABEL_491;
      v87 = UnityEngine_Component__get_gameObject(v86, 0LL);
      if ( !v87 )
        goto LABEL_491;
      UnityEngine_GameObject__SetActive(v87, 0, 0LL);
    }
    if ( !v78 )
      goto LABEL_50;
    v88 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
    v89 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v574.fields.currentCryptoKey = v88;
    *(_QWORD *)&v574.fields.fakeValue = v89;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v574, 0LL) < 1 )
    {
LABEL_50:
      EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(item, 0LL);
      if ( !this->fields.servantFaceIcon )
        goto LABEL_177;
      ServantFaceIconComponent__SetEquipDangling(this->fields.servantFaceIcon, EquipInfo, 0LL);
      svtNameRangeLabel = this->fields.svtNameRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_3267, 0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_177;
      UIRangeLabel__Set(svtNameRangeLabel, v101, 0LL, 1, 0, 0LL);
      switch ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) )
      {
        case 1:
          playerNameLabel = this->fields.playerNameLabel;
          PlayerNameText = FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !playerNameLabel )
            goto LABEL_177;
          UILabel__set_text(playerNameLabel, PlayerNameText, 0LL);
          playerLevelIconLabel = this->fields.playerLevelIconLabel;
          PlayerLevel = FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          if ( !playerLevelIconLabel )
            goto LABEL_177;
          UIIconLabel__Set_40377052(playerLevelIconLabel, 2, PlayerLevel, 0, 0, 0LL, 0, 0, 0, 0LL);
          loginDataLabel = this->fields.loginDataLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v155 = LocalizationManager__Get((System_String_o *)StringLiteral_13315, 0LL);
          LoginTime = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v157 = (Il2CppObject *)LocalizationManager__GetBeforeTime(LoginTime, 0LL);
          v158 = System_String__Format(v155, v157, 0LL);
          if ( !loginDataLabel )
            goto LABEL_177;
          UILabel__set_text(loginDataLabel, v158, 0LL);
          typeTextSprite = this->fields.typeTextSprite;
          if ( !typeTextSprite )
            goto LABEL_177;
          v149 = &StringLiteral_19269;
          goto LABEL_124;
        case 2:
          v160 = this->fields.playerNameLabel;
          v161 = FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !v160 )
            goto LABEL_177;
          UILabel__set_text(v160, v161, 0LL);
          v162 = this->fields.playerLevelIconLabel;
          v163 = FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          if ( !v162 )
            goto LABEL_177;
          UIIconLabel__Set_40377052(v162, 2, v163, 0, 0, 0LL, 0, 0, 0, 0LL);
          v164 = this->fields.loginDataLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v165 = LocalizationManager__Get((System_String_o *)StringLiteral_13315, 0LL);
          v166 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v167 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v166, 0LL);
          v168 = System_String__Format(v165, v167, 0LL);
          if ( !v164 )
            goto LABEL_177;
          UILabel__set_text(v164, v168, 0LL);
          v169 = this->fields.typeTextSprite;
          if ( !v169 )
            goto LABEL_177;
          UISprite__set_spriteName(v169, 0LL, 0LL);
          goto LABEL_134;
        case 3:
        case 4:
          v103 = this->fields.playerNameLabel;
          if ( !v103 )
            goto LABEL_177;
          spriteName = (System_String_o *)StringLiteral_19445;
          UILabel__set_text(v103, (System_String_o *)StringLiteral_1, 0LL);
          v104 = this->fields.playerLevelIconLabel;
          if ( !v104 )
            goto LABEL_177;
          UIIconLabel__Clear(v104, 0LL);
          v105 = this->fields.loginDataLabel;
          if ( !v105 )
            goto LABEL_177;
          UILabel__set_text(v105, (System_String_o *)StringLiteral_1, 0LL);
          v106 = this->fields.typeTextSprite;
          if ( !v106 )
            goto LABEL_177;
          UISprite__set_spriteName(v106, (System_String_o *)StringLiteral_19302, 0LL);
          v107 = this->fields.typeTextSprite;
          if ( !v107 )
            goto LABEL_177;
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v107->klass->vtable._33_MakePixelPerfect.method)(
            v107,
            v107->klass->vtable._34_get_minWidth.methodPtr);
          supportInfoButton = (UnityEngine_Component_o *)this->fields.supportInfoButton;
          if ( !supportInfoButton )
            goto LABEL_177;
          v109 = UnityEngine_Component__get_gameObject(supportInfoButton, 0LL);
          if ( !v109 )
            goto LABEL_177;
          UnityEngine_GameObject__SetActive(v109, 0, 0LL);
          svtProfileBackSpr = (UnityEngine_Behaviour_o *)this->fields.svtProfileBackSpr;
          if ( !svtProfileBackSpr )
            goto LABEL_177;
          v111 = 0;
          goto LABEL_138;
        case 5:
          v139 = this->fields.playerNameLabel;
          v140 = FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !v139 )
            goto LABEL_177;
          UILabel__set_text(v139, v140, 0LL);
          v141 = this->fields.playerLevelIconLabel;
          v142 = FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          if ( !v141 )
            goto LABEL_177;
          UIIconLabel__Set_40377052(v141, 2, v142, 0, 0, 0LL, 0, 0, 0, 0LL);
          v143 = this->fields.loginDataLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v144 = LocalizationManager__Get((System_String_o *)StringLiteral_13315, 0LL);
          v145 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v146 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v145, 0LL);
          v147 = System_String__Format(v144, v146, 0LL);
          if ( !v143 )
            goto LABEL_177;
          UILabel__set_text(v143, v147, 0LL);
          typeTextSprite = this->fields.typeTextSprite;
          if ( !typeTextSprite )
            goto LABEL_177;
          v149 = &StringLiteral_19268;
LABEL_124:
          UISprite__set_spriteName(typeTextSprite, (System_String_o *)*v149, 0LL);
          v159 = this->fields.typeTextSprite;
          if ( !v159 )
            goto LABEL_177;
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v159->klass->vtable._33_MakePixelPerfect.method)(
            v159,
            v159->klass->vtable._34_get_minWidth.methodPtr);
LABEL_134:
          v170 = (UnityEngine_Component_o *)this->fields.supportInfoButton;
          if ( !v170 )
            goto LABEL_177;
          v171 = UnityEngine_Component__get_gameObject(v170, 0LL);
          if ( !v171 )
            goto LABEL_177;
          UnityEngine_GameObject__SetActive(v171, 1, 0LL);
          svtProfileBackSpr = (UnityEngine_Behaviour_o *)this->fields.svtProfileBackSpr;
          if ( !svtProfileBackSpr )
            goto LABEL_177;
          v111 = 1;
LABEL_138:
          UnityEngine_Behaviour__set_enabled(svtProfileBackSpr, v111, 0LL);
LABEL_139:
          FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v102);
          FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v172);
          svtNpRangeLabel = this->fields.svtNpRangeLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v174 = LocalizationManager__Get((System_String_o *)StringLiteral_9324, 0LL);
          if ( !svtNpRangeLabel )
            goto LABEL_177;
          UIRangeLabel__Set(svtNpRangeLabel, v174, 0LL, 1, 0, 0LL);
          svtNpCommandCard = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
            goto LABEL_149;
          v176 = this->fields.svtNpCommandCard;
          if ( !v176 )
            goto LABEL_177;
          ServantNpCommandCardComponent__Clear(v176, 0LL);
LABEL_149:
          friendPointIconLabel = this->fields.friendPointIconLabel;
          if ( !friendPointIconLabel )
            goto LABEL_177;
          UIIconLabel__Clear(friendPointIconLabel, 0LL);
          friendPointData2Label = this->fields.friendPointData2Label;
          if ( !friendPointData2Label )
            goto LABEL_177;
          UILabel__set_text(friendPointData2Label, (System_String_o *)StringLiteral_1, 0LL);
          campaignLabel = this->fields.campaignLabel;
          if ( !campaignLabel )
            goto LABEL_177;
          UILabel__set_text(campaignLabel, (System_String_o *)StringLiteral_1, 0LL);
          eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
            goto LABEL_158;
          v182 = this->fields.eventUpValIcon;
          if ( !v182 )
            goto LABEL_177;
          EventUpValIconComponent__Clear(v182, 0LL);
LABEL_158:
          skillIconList = this->fields.skillIconList;
          if ( !skillIconList )
            goto LABEL_177;
          v184 = (struct SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, skillIconList->max_length, v181);
          this->fields.skillInfoList = v184;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.skillInfoList,
            (System_Int32_array **)v184,
            v185,
            v186,
            v187,
            v188,
            v189,
            v190);
          v194 = this->fields.skillIconList;
          if ( !v194 )
            goto LABEL_177;
          v195 = 0LL;
          break;
        default:
          goto LABEL_139;
      }
      while ( (int)v195 < (signed int)v194->max_length )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v195 >= skillBaseList->max_length )
          {
LABEL_712:
            sub_B17100(v191, v192, v193);
            sub_B170A0();
          }
          v197 = skillBaseList->m_Items[v195];
          if ( v197 )
          {
            UnityEngine_GameObject__SetActive(v197, 0, 0LL);
            v194 = this->fields.skillIconList;
            ++v195;
            if ( v194 )
              continue;
          }
        }
        goto LABEL_177;
      }
      v198 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
      if ( !v198 )
        goto LABEL_177;
      v199 = UnityEngine_Component__get_gameObject(v198, 0LL);
      if ( !v199 )
        goto LABEL_177;
      UnityEngine_GameObject__SetActive(v199, 0, 0LL);
      appendSkillIconList = this->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_177;
      v202 = (struct SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, appendSkillIconList->max_length, v200);
      this->fields.appendSkillInfoList = v202;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.appendSkillInfoList,
        (System_Int32_array **)v202,
        v203,
        v204,
        v205,
        v206,
        v207,
        v208);
      v209 = this->fields.appendSkillIconList;
      if ( !v209 )
        goto LABEL_177;
      v210 = 0LL;
      while ( (int)v210 < (signed int)v209->max_length )
      {
        appendSkillBaseList = this->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_177;
        if ( (unsigned int)v210 >= appendSkillBaseList->max_length )
          goto LABEL_712;
        v212 = appendSkillBaseList->m_Items[v210];
        if ( v212 )
        {
          UnityEngine_GameObject__SetActive(v212, 0, 0LL);
          v209 = this->fields.appendSkillIconList;
          ++v210;
          if ( v209 )
            continue;
        }
        goto LABEL_177;
      }
      v213 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
      if ( !v213 )
        goto LABEL_177;
      v214 = UnityEngine_Component__get_gameObject(v213, 0LL);
      if ( !v214 )
        goto LABEL_177;
      UnityEngine_GameObject__SetActive(v214, 0, 0LL);
      svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
      {
        v216 = this->fields.svtCommandCardList;
        if ( !v216 )
          goto LABEL_177;
        ServantCommandCardListComponent__Clear(v216, 0LL);
      }
      pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
      {
LABEL_553:
        v455 = this->fields.playerNameLabel;
        if ( !v455 )
          goto LABEL_177;
        LODWORD(v456) = *(_QWORD *)&UILabel__get_printedSize(v455, 0LL);
        gradeIcon = this->fields.gradeIcon;
        if ( !gradeIcon )
          goto LABEL_177;
        v458 = v456;
        LODWORD(v459) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(gradeIcon, 0LL);
        v460 = (UnityEngine_Component_o *)this->fields.playerNameLabel;
        if ( !v460 )
          goto LABEL_177;
        v461 = v459;
        v462 = UnityEngine_Component__get_gameObject(v460, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v462, 0LL);
        v464 = (UnityEngine_Component_o *)this->fields.gradeIcon;
        if ( !v464 )
          goto LABEL_177;
        v465 = LocalPositionX;
        v466 = UnityEngine_Component__get_gameObject(v464, 0LL);
        GameObjectExtensions__SetLocalPositionX(v466, (float)(v461 * 0.5) + (float)(v458 + v465), 0LL);
        v467 = this->fields.gradeIcon;
        if ( !v467 )
          goto LABEL_177;
        UserGradeComponent__Set(v467, Kind_28870592, 0LL);
        baseSprite = this->fields.baseSprite;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        }
        FollowerRootComponent__SetFollowerBase(baseSprite, spriteName, 0LL);
        if ( item->fields.isQuestRestriction || item->fields._IsSlotRestriction_k__BackingField )
        {
          maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !maskSprite )
            goto LABEL_177;
          v470 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
          if ( !v470 )
            goto LABEL_177;
          UnityEngine_GameObject__SetActive(v470, 1, 0LL);
          maskMessageLabel = this->fields.maskMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v472 = LocalizationManager__Get((System_String_o *)StringLiteral_6374, 0LL);
          if ( !maskMessageLabel )
            goto LABEL_177;
          UILabel__set_text(maskMessageLabel, v472, 0LL);
          warningBase = this->fields.warningBase;
          if ( !warningBase )
            goto LABEL_177;
          UnityEngine_GameObject__SetActive(warningBase, 0, 0LL);
          warningIcon = this->fields.warningIcon;
          if ( !warningIcon )
            goto LABEL_177;
          FlashingIconComponent__Clear(warningIcon, 0LL);
          v475 = this->fields.warningMessageLabel;
          if ( !v475 )
            goto LABEL_177;
          UILabel__set_text(v475, (System_String_o *)StringLiteral_1, 0LL);
        }
        else
        {
          if ( !item->fields.isUniqueSvtRestriction && !item->fields.isUniqueIndividualityRestriction )
          {
            v553 = (UnityEngine_Component_o *)this->fields.maskSprite;
            if ( !v553 )
              goto LABEL_177;
            v554 = UnityEngine_Component__get_gameObject(v553, 0LL);
            if ( !v554 )
              goto LABEL_177;
            UnityEngine_GameObject__SetActive(v554, 0, 0LL);
            v555 = this->fields.maskMessageLabel;
            if ( !v555 )
              goto LABEL_177;
            UILabel__set_text(v555, (System_String_o *)StringLiteral_1, 0LL);
            v556 = this->fields.warningBase;
            if ( !v556 )
              goto LABEL_177;
            UnityEngine_GameObject__SetActive(v556, 0, 0LL);
            v557 = this->fields.warningIcon;
            if ( !v557 )
              goto LABEL_177;
            FlashingIconComponent__Clear(v557, 0LL);
            v558 = this->fields.warningMessageLabel;
            if ( !v558 )
              goto LABEL_177;
            UILabel__set_text(v558, (System_String_o *)StringLiteral_1, 0LL);
            v476 = 0;
LABEL_574:
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v78 )
                goto LABEL_606;
              v479 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
              v478 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v579.fields.currentCryptoKey = v479;
              *(_QWORD *)&v579.fields.fakeValue = v478;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v579, 0LL) < 1
                || (v476 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v78, 0LL)
                || item->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_606;
              }
              Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !Instance )
                goto LABEL_177;
              if ( !AvalonSceneManager__checkNowScene(Instance, 35, 0LL) )
                goto LABEL_606;
              v481 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !v481 )
                goto LABEL_177;
              basePanel = (BattleSetupInfo_o **)v481->fields.basePanel;
              if ( !basePanel )
                goto LABEL_177;
              v483 = *(&FollowerRootComponent_TypeInfo->_2.bitflags2 + 1);
              if ( LOBYTE((*basePanel)[1].fields.originQuestId) < (unsigned int)v483
                || *(FollowerRootComponent_c **)((*basePanel)[1].fields.deckId + 8 * v483 - 8) != FollowerRootComponent_TypeInfo )
              {
                v563 = (FollowerSelectItemListViewItemDraw_o *)sub_B173C8(basePanel);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v563, v564, v565);
                return;
              }
              v484 = basePanel[17];
              if ( !v484 )
                goto LABEL_606;
              v485 = BattleSetupInfo__TargetQuestId(basePanel[17], 0LL);
              if ( !v485 )
                goto LABEL_606;
              questPhase = v484->fields.questPhase;
              if ( !questPhase )
                goto LABEL_606;
              v487 = v485;
              v488 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v488 )
                goto LABEL_177;
              MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)v488,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_177;
              v490 = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, v487, questPhase, 0LL);
              if ( v490 )
              {
                v491 = v490;
                v492 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v492 )
                  goto LABEL_177;
                v493 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)v492,
                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
                v495 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
                v494 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
                v496 = (DataMasterBase_WarMaster__WarEntity__int__o *)v493;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v580.fields.currentCryptoKey = v495;
                *(_QWORD *)&v580.fields.fakeValue = v494;
                v497 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v580, 0LL);
                if ( !v496 )
                  goto LABEL_177;
                v498 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v496,
                         v497,
                         (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !v498 )
                  goto LABEL_177;
                v499 = v498;
                v500 = this->fields.classCompatibilityIcon;
                if ( !v500 )
                  goto LABEL_177;
                ServantClassCompatibilityIconComponent__SetIcon(
                  v500,
                  v499->fields.startType,
                  v491->fields.classIds,
                  2,
                  0LL);
              }
              else
              {
LABEL_606:
                v501 = this->fields.classCompatibilityIcon;
                if ( !v501 )
                  goto LABEL_177;
                ServantClassCompatibilityIconComponent__Clear(v501, 0LL);
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
              v503 = (UnityEngine_Component_o *)this->fields.recommendedIcon;
              if ( !v503 )
                goto LABEL_177;
              v504 = UnityEngine_Component__get_gameObject(v503, 0LL);
              if ( !v504 )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive(v504, item->fields.isRecommended, 0LL);
            }
            recommendedIconText = (UnityEngine_Object_o *)this->fields.recommendedIconText;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
            {
              v506 = this->fields.recommendedIconText;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v507 = LocalizationManager__Get((System_String_o *)StringLiteral_6376, 0LL);
              if ( !v506 )
                goto LABEL_177;
              UILabel__set_text(v506, v507, 0LL);
              v508 = (UnityEngine_Component_o *)this->fields.recommendedIconText;
              if ( !v508 )
                goto LABEL_177;
              v509 = UnityEngine_Component__get_gameObject(v508, 0LL);
              if ( !v509 )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive(v509, item->fields.isRecommended, 0LL);
            }
            numberOfUsabletimes = (UnityEngine_Object_o *)this->fields.numberOfUsabletimes;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
            {
              questRestrictionInfo = item->fields.questRestrictionInfo;
              if ( questRestrictionInfo )
              {
                eventId = questRestrictionInfo->fields.eventId;
                v513 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v513 )
                  goto LABEL_177;
                v514 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)v513,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
                entity = 0LL;
                if ( !v514 )
                  goto LABEL_177;
                if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                        v514,
                        &entity,
                        questRestrictionInfo->fields.eventId,
                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                  goto LABEL_640;
                v515 = (EventDetailEntity_o *)entity;
                if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TitleInfoControl_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
                }
                if ( TitleInfoControl__IsEnableEventShopButton_19677132(v515, 0LL) )
                {
                  if ( !entity )
                    goto LABEL_177;
                  LODWORD(questRestrictionInfo) = EventDetailEntity__HasFlag(
                                                    (EventDetailEntity_o *)entity,
                                                    0x1000000000LL,
                                                    0LL);
                }
                else
                {
LABEL_640:
                  LODWORD(questRestrictionInfo) = 0;
                }
              }
              else
              {
                eventId = -1;
              }
              v516 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
              if ( !v516 )
                goto LABEL_177;
              if ( BYTE4(v516[1].fields.baseWindow) || FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) == 3 )
              {
                v517 = 0;
              }
              else
              {
                FollowerType = FollowerSelectItemListViewItem__get_FollowerType(item, 0LL);
                v517 = 0;
                if ( FollowerType != 4 && (((unsigned int)questRestrictionInfo ^ 1) & 1) == 0 )
                {
                  v539 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v539 )
                    goto LABEL_177;
                  v540 = (EventBoostItemUsedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v539,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
                  FollowerId = FollowerSelectItemListViewItem__get_FollowerId(item, 0LL);
                  if ( !v540 )
                    goto LABEL_177;
                  UsedCount = EventBoostItemUsedMaster__GetUsedCount(v540, eventId, FollowerId, 0LL);
                  v543 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v543 = BalanceConfig_TypeInfo;
                  }
                  MaxFriendChocolateUse = v543->static_fields->MaxFriendChocolateUse;
                  v571 = MaxFriendChocolateUse;
                  if ( UsedCount )
                  {
                    if ( (BYTE3(v543->vtable._0_Equals.methodPtr) & 4) != 0 && !v543->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v543);
                      MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                    }
                    v571 = MaxFriendChocolateUse - UsedCount->fields.count;
                  }
                  numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v546 = LocalizationManager__Get((System_String_o *)StringLiteral_6361, 0LL);
                  if ( !numberOfUsabletimesPrefixLabel )
                    goto LABEL_177;
                  UILabel__set_text(numberOfUsabletimesPrefixLabel, v546, 0LL);
                  numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
                  v548 = System_Int32__ToString((int32_t)&v571, 0LL);
                  if ( !numberOfUsabletimesLabel )
                    goto LABEL_177;
                  UILabel__set_text(numberOfUsabletimesLabel, v548, 0LL);
                  numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
                  v550 = LocalizationManager__Get((System_String_o *)StringLiteral_6362, 0LL);
                  if ( !numberOfUsabletimesSuffixLabel )
                    goto LABEL_177;
                  UILabel__set_text(numberOfUsabletimesSuffixLabel, v550, 0LL);
                  if ( v571 )
                  {
                    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v551 = LocalizationManager__Get((System_String_o *)StringLiteral_6359, 0LL);
                    UnityEngine_ColorUtility__TryParseHtmlString(v551, &color, 0LL);
                    v552 = LocalizationManager__Get((System_String_o *)StringLiteral_6360, 0LL);
                    UnityEngine_ColorUtility__TryParseHtmlString(v552, &v569, 0LL);
                  }
                  else
                  {
                    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v559 = LocalizationManager__Get((System_String_o *)StringLiteral_6363, 0LL);
                    UnityEngine_ColorUtility__TryParseHtmlString(v559, &color, 0LL);
                    friendChocolateSprite = (UIWidget_o *)this->fields.friendChocolateSprite;
                    if ( !friendChocolateSprite )
                      goto LABEL_177;
                    UIWidget__set_color(friendChocolateSprite, color, 0LL);
                    v569 = color;
                  }
                  numberOfUsabletimesSprite = (UIWidget_o *)this->fields.numberOfUsabletimesSprite;
                  if ( !numberOfUsabletimesSprite )
                    goto LABEL_177;
                  UIWidget__set_color(numberOfUsabletimesSprite, color, 0LL);
                  v562 = (UIWidget_o *)this->fields.friendChocolateSprite;
                  if ( !v562 )
                    goto LABEL_177;
                  UIWidget__set_color(v562, v569, 0LL);
                  v517 = 1;
                }
              }
              v518 = this->fields.numberOfUsabletimes;
              if ( !v518 )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive(v518, v517, 0LL);
            }
            recommendedUser = (UnityEngine_Object_o *)this->fields.recommendedUser;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
            {
              v520 = this->fields.recommendedUser;
              if ( v520 )
              {
                UnityEngine_GameObject__SetActive(v520, item->fields._isRecommendedUser_k__BackingField, 0LL);
                return;
              }
LABEL_177:
              sub_B170D4();
            }
            return;
          }
          v521 = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( !v521 )
            goto LABEL_177;
          v522 = UnityEngine_Component__get_gameObject(v521, 0LL);
          if ( !v522 )
            goto LABEL_177;
          UnityEngine_GameObject__SetActive(v522, 0, 0LL);
          v523 = this->fields.maskMessageLabel;
          if ( !v523 )
            goto LABEL_177;
          UILabel__set_text(v523, (System_String_o *)StringLiteral_1, 0LL);
          v524 = this->fields.warningBase;
          if ( !v524 )
            goto LABEL_177;
          UnityEngine_GameObject__SetActive(v524, 1, 0LL);
          v525 = this->fields.warningIcon;
          if ( !v525 )
            goto LABEL_177;
          FlashingIconComponent__SetFast(v525, 0LL);
          v526 = this->fields.warningMessageLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v527 = LocalizationManager__Get((System_String_o *)StringLiteral_6375, 0LL);
          if ( !v526 )
            goto LABEL_177;
          UILabel__set_text(v526, v527, 0LL);
          v528 = this->fields.warningMessageLabel;
          if ( !v528 )
            goto LABEL_177;
          LODWORD(v529) = *(_QWORD *)&UILabel__get_printedSize(v528, 0LL);
          v530 = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
          if ( !v530 )
            goto LABEL_177;
          v531 = v529;
          transform = UnityEngine_Component__get_transform(v530, 0LL);
          v533 = transform;
          warningMessageWidth = (float)this->fields.warningMessageWidth;
          if ( v531 <= warningMessageWidth )
          {
            *(UnityEngine_Vector3_o *)&v536 = UnityEngine_Vector3__get_one(0LL);
            if ( !v533 )
              goto LABEL_177;
          }
          else
          {
            v535 = 1.0;
            v536 = warningMessageWidth / v531;
            v537 = 1.0;
            if ( !transform )
              goto LABEL_177;
          }
          UnityEngine_Transform__set_localScale(v533, *(UnityEngine_Vector3_o *)&v536, 0LL);
        }
        v476 = 1;
        goto LABEL_574;
      }
      v218 = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !v218 )
        goto LABEL_177;
      v219 = UnityEngine_Component__get_gameObject(v218, 0LL);
      if ( !v219 )
        goto LABEL_177;
LABEL_192:
      UnityEngine_GameObject__SetActive(v219, 0, 0LL);
      goto LABEL_553;
    }
    v90 = item->fields.followerInfo;
    if ( !v90 )
      goto LABEL_491;
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_491;
    ServantFaceIconComponent__Set_30632248(
      servantFaceIcon,
      v78,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0,
      v90->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v92);
    FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v93);
    FollowerSelectItemListViewItem__GetNpInfo(item, &tdInfo, 0LL);
    TreasureDeviceLevelIcon = FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, 0LL);
    if ( !tdInfo )
      goto LABEL_491;
    name = tdInfo->fields.name;
    v96 = TreasureDeviceLevelIcon;
    v566 = (System_String_o *)StringLiteral_1;
    if ( ServantLeaderInfo__IsNpc(v78, 0LL) )
    {
      dispLimitCount = v78->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v78->fields.npcFlag, 0LL) )
      {
        if ( !tdInfo )
          goto LABEL_491;
        name = TreasureDvcInfo__GetName(tdInfo, 0LL);
      }
      v98 = !NpcServantFollowerEntity__IsHideRarity(v78->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v78, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        v112 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v112 )
          goto LABEL_491;
        v113 = (ServantLimitSpoilerProtectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v112,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !v113 )
          goto LABEL_491;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           v113,
                           v78->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v98 = 1;
    }
    v114 = this->fields.servantFaceIcon;
    if ( !v114 )
      goto LABEL_491;
    ServantFaceIconComponent__SetDispRaritySprite(v114, v98, 0LL);
    v115 = this->fields.servantFaceIcon;
    if ( !v115 )
      goto LABEL_491;
    ServantFaceIconComponent__SetDispClassSprite(v115, !item->fields._IsDataLost_k__BackingField, 0LL);
    v116 = Kind_28870592;
    if ( !ServantLeaderInfo__IsNpc(v78, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v118 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
      v119 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
      v120 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v575.fields.currentCryptoKey = v118;
      *(_QWORD *)&v575.fields.fakeValue = v119;
      v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v575, 0LL);
      if ( !v120 )
        goto LABEL_491;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v120, v121, dispLimitCount, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v122 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v123 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
    v124 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
    v125 = (ServantLimitAddMaster_o *)v122;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v576.fields.currentCryptoKey = v123;
    *(_QWORD *)&v576.fields.fakeValue = v124;
    v126 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v576, 0LL);
    if ( !tdInfo || !v125 )
      goto LABEL_491;
    OverwriteTDName = (Il2CppObject *)ServantLimitAddMaster__GetOverwriteTDName(
                                        v125,
                                        v126,
                                        dispLimitCount,
                                        name,
                                        tdInfo->fields.lv,
                                        0LL);
    Kind_28870592 = v116;
    switch ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) )
    {
      case 1:
        v235 = this->fields.playerNameLabel;
        v236 = FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
        if ( !v235 )
          goto LABEL_491;
        UILabel__set_text(v235, v236, 0LL);
        v237 = this->fields.playerLevelIconLabel;
        v238 = FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
        if ( !v237 )
          goto LABEL_491;
        UIIconLabel__Set_40377052(v237, 2, v238, 0, 0, 0LL, 0, 0, 0, 0LL);
        v239 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v240 = LocalizationManager__Get((System_String_o *)StringLiteral_13315, 0LL);
        v241 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
        v242 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v241, 0LL);
        v243 = System_String__Format(v240, v242, 0LL);
        if ( !v239 )
          goto LABEL_491;
        UILabel__set_text(v239, v243, 0LL);
        v244 = this->fields.typeTextSprite;
        if ( !v244 )
          goto LABEL_491;
        UISprite__set_spriteName(v244, (System_String_o *)StringLiteral_19269, 0LL);
        v245 = this->fields.typeTextSprite;
        if ( !v245 )
          goto LABEL_491;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v245->klass->vtable._33_MakePixelPerfect.method)(
          v245,
          v245->klass->vtable._34_get_minWidth.methodPtr);
        v246 = item->fields.questRestrictionInfo;
        if ( v246 )
        {
          v247 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v247 )
            goto LABEL_491;
          v248 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)v247,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !v248 )
            goto LABEL_491;
          v249 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v248,
                                    v246->fields.questId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !v249 )
            goto LABEL_491;
          HasFlag_23922108 = QuestEntity__HasFlag_23922108(v249, 0x8000000LL, v246->fields.questPhase, 0LL);
          v251 = BalanceConfig_TypeInfo;
          if ( HasFlag_23922108 )
          {
            if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v251 = BalanceConfig_TypeInfo;
            }
            p_FollowFriendPoint = &v251->static_fields->FollowFriendPoint;
LABEL_252:
            FollowerPointNotFriend = *p_FollowFriendPoint;
            v271 = (System_String_o **)&StringLiteral_9352;
            v234 = LocalizationManager_TypeInfo;
            if ( v96 <= 1 )
              v271 = (System_String_o **)&StringLiteral_9346;
            v265 = *v271;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
LABEL_255:
              if ( !v234->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v234);
            }
LABEL_257:
            v272 = LocalizationManager__Get(v265, 0LL);
            v273 = System_String__Format(v272, OverwriteTDName, 0LL);
            if ( !this->fields.supportInfoButton )
              goto LABEL_491;
            v266 = v273;
            v274 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.supportInfoButton, 0LL);
            if ( !v274 )
              goto LABEL_491;
            UnityEngine_GameObject__SetActive(v274, 1, 0LL);
            v269 = (UnityEngine_Behaviour_o *)this->fields.svtProfileBackSpr;
            if ( !v269 )
              goto LABEL_491;
            v270 = 1;
LABEL_261:
            UnityEngine_Behaviour__set_enabled(v269, v270, 0LL);
LABEL_262:
            IsHideSupport = ServantLeaderInfo__IsHideSupport(v78, 0LL);
            v276 = this->fields.svtNameRangeLabel;
            if ( IsHideSupport )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v277 = LocalizationManager__Get((System_String_o *)StringLiteral_11694, 0LL);
              if ( !v276 )
                goto LABEL_491;
              UIRangeLabel__Set(v276, v277, 0LL, 1, 0, 0LL);
              v278 = this->fields.playerNameLabel;
              if ( !v278 )
                goto LABEL_491;
              UILabel__set_text(v278, (System_String_o *)StringLiteral_1, 0LL);
              if ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) != 4 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v266 = LocalizationManager__Get((System_String_o *)StringLiteral_9349, 0LL);
              }
            }
            else
            {
              SvtNameText = FollowerSelectItemListViewItem__get_SvtNameText(item, 0LL);
              if ( !v276 )
                goto LABEL_491;
              UIRangeLabel__Set(v276, SvtNameText, 0LL, 1, 0, 0LL);
            }
            if ( !tdInfo )
              goto LABEL_491;
            strengthStatus = tdInfo->fields.strengthStatus;
            if ( ServantLeaderInfo__IsHideSupport(v78, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v78, 0LL) )
              strengthStatus = 0;
            v281 = this->fields.svtNpRangeLabel;
            IconName = StrengthStatus__GetIconName(strengthStatus, 0LL);
            if ( !v281 )
              goto LABEL_491;
            UIRangeLabel__Set(v281, v266, IconName, 0, 0, 0LL);
            v283 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v283, 0LL, 0LL) )
            {
              v284 = ServantLeaderInfo__IsHideSupport(v78, 0LL);
              v285 = this->fields.svtNpCommandCard;
              if ( v284 )
              {
                if ( !v285 )
                  goto LABEL_491;
                ServantNpCommandCardComponent__SetHide(this->fields.svtNpCommandCard, 0LL);
              }
              else
              {
                if ( !v285 )
                  goto LABEL_491;
                ServantNpCommandCardComponent__Set(this->fields.svtNpCommandCard, tdInfo, 0LL);
              }
            }
            FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, 0LL);
            FriendPointCampaignValue = FollowerSelectItemListViewItem__GetFriendPointCampaignValue(item, 0LL);
            if ( !this->fields.friendPointIconLabel )
LABEL_491:
              sub_B170D4();
            v288 = FriendPointCampaignValue;
            UIIconLabel__Set_40377052(
              this->fields.friendPointIconLabel,
              55,
              FollowerPointNotFriend,
              0,
              0,
              0LL,
              0,
              0,
              0,
              0LL);
            if ( FriendPointUpVal > 0 || v288 >= 1 )
            {
              if ( v288 <= 0 )
                v291 = 1000;
              else
                v291 = v288;
              v292 = 274877907LL * (v291 * FriendPointUpVal + (v291 - 1000) * FollowerPointNotFriend);
              v293 = this->fields.friendPointData2Label;
              v294 = (v292 >> 38) + ((unsigned __int64)v292 >> 63);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v295 = LocalizationManager__Get((System_String_o *)StringLiteral_6382, 0LL);
              TimesToRestart_k__BackingField = v294;
              v296 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
              v297 = System_String__Format(v295, v296, 0LL);
              if ( !v293 )
                goto LABEL_491;
              v290 = v297;
              v289 = v293;
            }
            else
            {
              v289 = this->fields.friendPointData2Label;
              if ( !v289 )
                goto LABEL_491;
              v290 = (System_String_o *)StringLiteral_1;
            }
            UILabel__set_text(v289, v290, 0LL);
            IsFriendPointCampaign = FollowerSelectItemListViewItem__IsFriendPointCampaign(item, 0LL);
            v299 = this->fields.campaignLabel;
            if ( IsFriendPointCampaign )
            {
              v300 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v300 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              if ( !v299 )
                goto LABEL_491;
              UILabel__set_gradientTop(v299, v300->static_fields->CAMPAIGN_TOP_COLOR, 0LL);
              v301 = this->fields.campaignLabel;
              if ( !v301 )
                goto LABEL_491;
              UILabel__set_gradientBottom(
                v301,
                FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
                0LL);
              v302 = this->fields.campaignLabel;
              FriendPointCampaignName = FollowerSelectItemListViewItem__GetFriendPointCampaignName(item, 0LL);
              if ( !v302 )
                goto LABEL_491;
              v304 = FriendPointCampaignName;
              v305 = v302;
            }
            else
            {
              if ( !v299 )
                goto LABEL_491;
              v305 = this->fields.campaignLabel;
              v304 = (System_String_o *)StringLiteral_1;
            }
            UILabel__set_text(v305, v304, 0LL);
            v306 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v306, 0LL, 0LL) )
            {
              if ( FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL) )
              {
                v307 = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
                if ( !v307 )
                  goto LABEL_491;
                v308 = *(_QWORD *)&v307->fields.svtId.fields.currentCryptoKey;
                v309 = *(_QWORD *)&v307->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v577.fields.currentCryptoKey = v308;
                *(_QWORD *)&v577.fields.fakeValue = v309;
                v310 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v577, 0LL);
                v311 = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
                if ( !v311 )
                  goto LABEL_491;
                Rarity = ServantLeaderInfo__getRarity(v311, 0LL);
              }
              else
              {
                Rarity = -1;
                v310 = -1;
              }
              v313 = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
              if ( !v313 )
                goto LABEL_491;
              if ( v313->fields.equipTarget1 )
              {
                v314 = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
                if ( !v314 )
                  goto LABEL_491;
                equipTarget1 = v314->fields.equipTarget1;
                if ( !equipTarget1 )
                  goto LABEL_491;
                v316 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
                v317 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v578.fields.currentCryptoKey = v316;
                *(_QWORD *)&v578.fields.fakeValue = v317;
                v318 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v578, 0LL);
              }
              else
              {
                v318 = -1;
              }
              v319 = this->fields.eventUpValIcon;
              if ( !v319 )
                goto LABEL_491;
              EventUpValIconComponent__Set(v319, item->fields.eventUpValItemList, v310, Rarity, v318, 0LL);
            }
            p_skillInfoList = &this->fields.skillInfoList;
            SkillInfo = FollowerSelectItemListViewItem__GetSkillInfo(item, &this->fields.skillInfoList, 0LL);
            v324 = this->fields.skillIconList;
            if ( !v324 )
              goto LABEL_491;
            v325 = *(_QWORD *)&v324->max_length;
            if ( v325 << 32 >= 1 )
            {
              v326 = *p_skillInfoList;
              v327 = 0;
              v328 = 0LL;
              while ( v326 )
              {
                max_length = v326->max_length;
                if ( (__int64)v328 < (int)max_length )
                {
                  if ( v328 >= max_length )
                  {
LABEL_711:
                    sub_B17100(SkillInfo, v322, v323);
                    sub_B170A0();
                  }
                  v330 = (*p_skillInfoList)->m_Items[v328];
                  if ( v330 && v330->fields.id >= 1 )
                    v327 = v328 + 1;
                }
                if ( (__int64)++v328 >= (int)v325 )
                  goto LABEL_347;
              }
              goto LABEL_491;
            }
            v327 = 0;
LABEL_347:
            if ( (int)v325 >= 1 )
            {
              v331 = v327;
              v332 = 4LL;
              do
              {
                v333 = v332 - 4;
                if ( v332 - 4 >= v331 )
                {
                  v342 = this->fields.skillBaseList;
                  if ( !v342 )
                    goto LABEL_491;
                  if ( v333 >= v342->max_length )
                    goto LABEL_711;
                  v343 = (UnityEngine_GameObject_o *)*((_QWORD *)&v342->obj.klass + v332);
                  if ( !v343 )
                    goto LABEL_491;
                  UnityEngine_GameObject__SetActive(v343, 0, 0LL);
                }
                else
                {
                  v334 = *p_skillInfoList;
                  if ( !*p_skillInfoList )
                    goto LABEL_491;
                  if ( v333 >= v334->max_length )
                    goto LABEL_711;
                  v335 = this->fields.skillBaseList;
                  if ( !v335 )
                    goto LABEL_491;
                  if ( v333 >= v335->max_length )
                    goto LABEL_711;
                  v336 = (UnityEngine_GameObject_o *)*((_QWORD *)&v335->obj.klass + v332);
                  if ( !v336 )
                    goto LABEL_491;
                  v337 = (int32_t *)*((_QWORD *)&v334->obj.klass + v332);
                  UnityEngine_GameObject__SetActive(v336, 1, 0LL);
                  SkillInfo = ServantLeaderInfo__IsHideSupport(v78, 0LL);
                  if ( SkillInfo )
                  {
                    if ( v337 )
                      v337[4] = 0;
                    v338 = this->fields.skillIconList;
                    if ( !v338 )
                      goto LABEL_491;
                    if ( v333 >= v338->max_length )
                      goto LABEL_711;
                    v339 = (SkillIconComponent_o *)*((_QWORD *)&v338->obj.klass + v332);
                    if ( !v339 )
                      goto LABEL_491;
                    SkillIconComponent__SetHide(v339, 0LL);
                    skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
                    if ( !skillLevelIconLabelList )
                      goto LABEL_491;
                    if ( v333 >= skillLevelIconLabelList->max_length )
                      goto LABEL_711;
                    v341 = (UIIconLabel_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v332);
                    if ( !v341 )
                      goto LABEL_491;
                    UIIconLabel__Clear(v341, 0LL);
                  }
                  else
                  {
                    v344 = this->fields.skillIconList;
                    if ( !v344 )
                      goto LABEL_491;
                    if ( v333 >= v344->max_length )
                      goto LABEL_711;
                    if ( !v337 )
                      goto LABEL_491;
                    v345 = (SkillIconComponent_o *)*((_QWORD *)&v344->obj.klass + v332);
                    if ( !v345 )
                      goto LABEL_491;
                    SkillIconComponent__Set_23612468(v345, v337[4], v337[5], v337[12], v337[13], 0LL);
                    v346 = this->fields.skillLevelIconLabelList;
                    if ( !v346 )
                      goto LABEL_491;
                    if ( v333 >= v346->max_length )
                      goto LABEL_711;
                    v347 = (UIIconLabel_o *)*((_QWORD *)&v346->obj.klass + v332);
                    if ( !v347 )
                      goto LABEL_491;
                    UIIconLabel__Set_40377052(v347, 48, v337[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                  }
                }
                v348 = this->fields.skillIconList;
                if ( !v348 )
                  goto LABEL_491;
                v349 = v332 - 3;
                ++v332;
              }
              while ( v349 < (int)v348->max_length );
            }
            v350 = this->fields.displaySkill;
            if ( v350 == 2 )
            {
              v356 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
              if ( !v356 )
                goto LABEL_491;
              v357 = UnityEngine_Component__get_gameObject(v356, 0LL);
              if ( !v357 )
                goto LABEL_491;
              UnityEngine_GameObject__SetActive(v357, 1, 0LL);
              v358 = this->fields.switchSkillUIList;
              if ( !v358 )
                goto LABEL_491;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v358,
                (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInfoUiWidget,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            }
            else
            {
              if ( v350 == 1 )
              {
                v355 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
                if ( !v355 )
                  goto LABEL_491;
                v353 = UnityEngine_Component__get_gameObject(v355, 0LL);
                if ( !v353 )
                  goto LABEL_491;
                v354 = 0;
              }
              else
              {
                if ( v350 )
                  goto LABEL_394;
                v351 = this->fields.skillInfoUiWidget;
                if ( !v351 )
                  goto LABEL_491;
                ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v351->klass->vtable._8_set_alpha.method)(
                  v351,
                  v351->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                  1.0);
                v352 = (UnityEngine_Component_o *)this->fields.skillInfoUiWidget;
                if ( !v352 )
                  goto LABEL_491;
                v353 = UnityEngine_Component__get_gameObject(v352, 0LL);
                if ( !v353 )
                  goto LABEL_491;
                v354 = 1;
              }
              UnityEngine_GameObject__SetActive(v353, v354, 0LL);
            }
LABEL_394:
            p_appendSkillInfoList = &this->fields.appendSkillInfoList;
            SkillInfo = FollowerSelectItemListViewItem__GetAppendSkillInfo(
                          item,
                          &this->fields.appendSkillInfoList,
                          item->fields.isNpc,
                          0LL);
            v360 = this->fields.appendSkillIconList;
            if ( !v360 )
              goto LABEL_491;
            v361 = *(_QWORD *)&v360->max_length;
            if ( v361 << 32 < 1 )
            {
              v363 = 0;
            }
            else
            {
              v362 = *p_appendSkillInfoList;
              v363 = 0;
              v364 = 0LL;
              do
              {
                if ( v362 )
                {
                  v365 = v362->max_length;
                  if ( v364 < (int)v365 )
                  {
                    if ( v364 >= v365 )
                      goto LABEL_711;
                    v366 = (*p_appendSkillInfoList)->m_Items[v364];
                    if ( v366 && v366->fields.id >= 1 )
                      v363 = v364 + 1;
                  }
                }
                ++v364;
              }
              while ( v364 < (int)v361 );
            }
            if ( (int)v361 >= 1 )
            {
              v367 = v363;
              v368 = 4LL;
              do
              {
                v369 = v368 - 4;
                if ( v368 - 4 >= v367 )
                {
                  v378 = this->fields.appendSkillBaseList;
                  if ( !v378 )
                    goto LABEL_491;
                  if ( v369 >= v378->max_length )
                    goto LABEL_711;
                  v379 = (UnityEngine_GameObject_o *)*((_QWORD *)&v378->obj.klass + v368);
                  if ( !v379 )
                    goto LABEL_491;
                  UnityEngine_GameObject__SetActive(v379, 0, 0LL);
                }
                else
                {
                  v370 = *p_appendSkillInfoList;
                  if ( !*p_appendSkillInfoList )
                    goto LABEL_491;
                  if ( v369 >= v370->max_length )
                    goto LABEL_711;
                  v371 = this->fields.appendSkillBaseList;
                  if ( !v371 )
                    goto LABEL_491;
                  if ( v369 >= v371->max_length )
                    goto LABEL_711;
                  v372 = (UnityEngine_GameObject_o *)*((_QWORD *)&v371->obj.klass + v368);
                  if ( !v372 )
                    goto LABEL_491;
                  v373 = (int32_t *)*((_QWORD *)&v370->obj.klass + v368);
                  UnityEngine_GameObject__SetActive(v372, 1, 0LL);
                  SkillInfo = ServantLeaderInfo__IsHideSupport(v78, 0LL);
                  if ( SkillInfo )
                  {
                    if ( v373 )
                      v373[4] = 0;
                    v374 = this->fields.appendSkillIconList;
                    if ( !v374 )
                      goto LABEL_491;
                    if ( v369 >= v374->max_length )
                      goto LABEL_711;
                    v375 = (SkillIconComponent_o *)*((_QWORD *)&v374->obj.klass + v368);
                    if ( !v375 )
                      goto LABEL_491;
                    SkillIconComponent__SetHide(v375, 0LL);
                    appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                    if ( !appendSkillLevelIconLabelList )
                      goto LABEL_491;
                    if ( v369 >= appendSkillLevelIconLabelList->max_length )
                      goto LABEL_711;
                    v377 = (UIIconLabel_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v368);
                    if ( !v377 )
                      goto LABEL_491;
                    UIIconLabel__Clear(v377, 0LL);
                  }
                  else
                  {
                    v380 = this->fields.appendSkillIconList;
                    if ( !v380 )
                      goto LABEL_491;
                    if ( v369 >= v380->max_length )
                      goto LABEL_711;
                    if ( !v373 )
                      goto LABEL_491;
                    v381 = (SkillIconComponent_o *)*((_QWORD *)&v380->obj.klass + v368);
                    if ( !v381 )
                      goto LABEL_491;
                    SkillIconComponent__Set_23612468(v381, v373[4], v373[5], v373[12], v373[13], 0LL);
                    v382 = this->fields.appendSkillLevelIconLabelList;
                    if ( !v382 )
                      goto LABEL_491;
                    if ( v369 >= v382->max_length )
                      goto LABEL_711;
                    v383 = (UIIconLabel_o *)*((_QWORD *)&v382->obj.klass + v368);
                    if ( !v383 )
                      goto LABEL_491;
                    UIIconLabel__Set_40377052(v383, 48, v373[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                  }
                }
                v384 = this->fields.appendSkillIconList;
                if ( !v384 )
                  goto LABEL_491;
                v385 = v368 - 3;
                ++v368;
              }
              while ( v385 < (int)v384->max_length );
            }
            v386 = this->fields.displaySkill;
            if ( v386 == 2 )
            {
              v392 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
              if ( !v392 )
                goto LABEL_491;
              v393 = UnityEngine_Component__get_gameObject(v392, 0LL);
              if ( !v393 )
                goto LABEL_491;
              UnityEngine_GameObject__SetActive(v393, 1, 0LL);
              v394 = this->fields.switchSkillUIList;
              if ( !v394 )
                goto LABEL_491;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v394,
                (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.appendSkillInfoUiWidget,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
            }
            else
            {
              if ( v386 == 1 )
              {
                v390 = this->fields.appendSkillInfoUiWidget;
                if ( !v390 )
                  goto LABEL_491;
                ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))v390->klass->vtable._8_set_alpha.method)(
                  v390,
                  v390->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                  1.0);
                v391 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
                if ( !v391 )
                  goto LABEL_491;
                v388 = UnityEngine_Component__get_gameObject(v391, 0LL);
                if ( !v388 )
                  goto LABEL_491;
                v389 = 1;
              }
              else
              {
                if ( v386 )
                  goto LABEL_457;
                v387 = (UnityEngine_Component_o *)this->fields.appendSkillInfoUiWidget;
                if ( !v387 )
                  goto LABEL_491;
                v388 = UnityEngine_Component__get_gameObject(v387, 0LL);
                if ( !v388 )
                  goto LABEL_491;
                v389 = 0;
              }
              UnityEngine_GameObject__SetActive(v388, v389, 0LL);
            }
            if ( this->fields.displaySkill == 2 )
            {
              v395 = this->fields.switchSkillUIList;
              if ( !v395 )
                goto LABEL_491;
              switchSkillInfo = this->fields.switchSkillInfo;
              v397 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v395,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
              if ( !switchSkillInfo )
                goto LABEL_491;
              SwitchUIWidgetComponent__Set(switchSkillInfo, v397, 0LL);
            }
LABEL_457:
            v398 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v398, 0LL, 0LL) )
            {
              v399 = ServantLeaderInfo__IsHideSupport(v78, 0LL);
              v400 = this->fields.svtCommandCardList;
              if ( v399 )
              {
                if ( !v400 )
                  goto LABEL_491;
                ServantCommandCardListComponent__SetHide(this->fields.svtCommandCardList, 0LL);
              }
              else
              {
                SvtId = FollowerSelectItemListViewItem__get_SvtId(item, 0LL);
                commandCardParam = v78->fields.commandCardParam;
                v403 = SvtId;
                CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList(v78, 0LL);
                if ( !v400 )
                  goto LABEL_491;
                ServantCommandCardListComponent__Set_30472172(
                  v400,
                  v403,
                  commandCardParam,
                  CommandCodeIdList,
                  2,
                  1,
                  0LL);
              }
            }
            v405 = (UnityEngine_Object_o *)this->fields.pushSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v405, 0LL, 0LL) )
            {
              v406 = item->fields.followerInfo;
              if ( !v406 )
                goto LABEL_491;
              pushUserSvtId = v406->fields.pushUserSvtId;
              v408 = pushUserSvtId && pushUserSvtId == v78->fields.userSvtId;
              v409 = (UnityEngine_Component_o *)this->fields.pushSprite;
              if ( !v409 )
                goto LABEL_491;
              v410 = UnityEngine_Component__get_gameObject(v409, 0LL);
              if ( !v410 )
                goto LABEL_491;
              UnityEngine_GameObject__SetActive(v410, v408, 0LL);
            }
            v411 = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v411, 0LL, 0LL) )
            {
              v412 = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v412, 0LL, 0LL) )
              {
                if ( item->fields._IsDataLost_k__BackingField )
                {
                  v413 = this->fields.dataLostMaskSprite;
                  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AtlasManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  }
                  AtlasManager__SetPartyOrganizationImage(v413, (System_String_o *)StringLiteral_17815, 0LL);
                  v414 = (UIWidget_o *)this->fields.dataLostMaskSprite;
                  *(UnityEngine_Color_o *)&v415 = UnityEngine_Color__get_white(0LL);
                  if ( !v414 )
                    goto LABEL_491;
                  UIWidget__set_color(v414, *(UnityEngine_Color_o *)&v415, 0LL);
                  v419 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
                  if ( !v419 )
                    goto LABEL_491;
                }
                else
                {
                  if ( item->fields._TimesToRestart_k__BackingField < 1 )
                    goto LABEL_507;
                  v420 = this->fields.dataLostMaskSprite;
                  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !AtlasManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                  }
                  AtlasManager__SetCommon(v420, 0LL);
                  v421 = this->fields.dataLostMaskSprite;
                  if ( !v421 )
                    goto LABEL_177;
                  UISprite__set_spriteName(v421, (System_String_o *)StringLiteral_19409, 0LL);
                  *(UnityEngine_Color_o *)&v422 = UnityEngine_Color__get_black(0LL);
                  v425 = (UIWidget_o *)this->fields.dataLostMaskSprite;
                  if ( !v425 )
                    goto LABEL_177;
                  v426 = 1059037088;
                  UIWidget__set_color(v425, *(UnityEngine_Color_o *)&v422, 0LL);
                  v427 = this->fields.dataLostMaskMessageLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v428 = LocalizationManager__Get((System_String_o *)StringLiteral_11601, 0LL);
                  TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
                  v429 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                  v430 = System_String__Format(v428, v429, 0LL);
                  if ( !v427 )
                    goto LABEL_177;
                  UILabel__set_text(v427, v430, 0LL);
                  v431 = (UnityEngine_Component_o *)this->fields.dataLostMaskSprite;
                  if ( !v431 )
                    goto LABEL_177;
                  v432 = UnityEngine_Component__get_gameObject(v431, 0LL);
                  if ( !v432 )
                    goto LABEL_177;
                  UnityEngine_GameObject__SetActive(v432, 1, 0LL);
                  v419 = (UnityEngine_Component_o *)this->fields.dataLostMaskMessageLabel;
                  if ( !v419 )
                    goto LABEL_177;
                }
                v433 = UnityEngine_Component__get_gameObject(v419, 0LL);
                if ( !v433 )
                  goto LABEL_177;
                UnityEngine_GameObject__SetActive(v433, 1, 0LL);
              }
            }
LABEL_507:
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
                v440 = this->fields.openClassBoardNumLabel;
                if ( !v440 )
                  goto LABEL_177;
                v439 = (System_String_o *)StringLiteral_1;
              }
              else
              {
                if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                  v435 = (Il2CppObject **)&StringLiteral_6316;
                else
                  v435 = (Il2CppObject **)&StringLiteral_6317;
                v436 = *v435;
                TimesToRestart_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                v437 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                v438 = System_String__Format_43739268((System_String_o *)StringLiteral_15767, v436, v437, 0LL);
                if ( !this->fields.openClassBoardNumLabel )
                  goto LABEL_177;
                v439 = v438;
                v440 = this->fields.openClassBoardNumLabel;
              }
              UILabel__set_text(v440, v439, 0LL);
            }
            classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
              goto LABEL_553;
            v442 = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
            if ( !v442 )
              goto LABEL_177;
            IsReleasedClassBoard_k__BackingField = item->fields._IsReleasedClassBoard_k__BackingField;
            v219 = UnityEngine_Component__get_gameObject(v442, 0LL);
            if ( !v219 )
              goto LABEL_177;
            if ( IsReleasedClassBoard_k__BackingField )
            {
              UnityEngine_GameObject__SetActive(v219, 1, 0LL);
              v444 = this->fields.classBoardOpenButton;
              if ( !v444 )
                goto LABEL_177;
              UICommonButton__SetButtonEnable(v444, item->fields._OpenClassBoardNum_k__BackingField >= 0, 1, 0LL);
              classBoardOpenButtonLabel = (UnityEngine_Object_o *)this->fields.classBoardOpenButtonLabel;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(classBoardOpenButtonLabel, 0LL, 0LL) )
              {
                v446 = this->fields.classBoardOpenButtonLabel;
                if ( (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
                {
                  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v452 = LocalizationManager__Get((System_String_o *)StringLiteral_12420, 0LL);
                  if ( !v446 )
                    goto LABEL_177;
                  UILabel__set_text(v446, v452, 0LL);
                  v453 = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
                  if ( !v453 )
                    goto LABEL_177;
                  v449 = UnityEngine_Component__get_gameObject(v453, 0LL);
                  v454 = FollowerSelectItemListViewItemDraw_TypeInfo;
                  if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                    v454 = FollowerSelectItemListViewItemDraw_TypeInfo;
                  }
                  CLASS_BOARD_NOT_LABEL_POS_Y = v454->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y;
                }
                else
                {
                  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v447 = LocalizationManager__Get((System_String_o *)StringLiteral_12419, 0LL);
                  if ( !v446 )
                    goto LABEL_177;
                  UILabel__set_text(v446, v447, 0LL);
                  v448 = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
                  if ( !v448 )
                    goto LABEL_177;
                  v449 = UnityEngine_Component__get_gameObject(v448, 0LL);
                  v450 = FollowerSelectItemListViewItemDraw_TypeInfo;
                  if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                    v450 = FollowerSelectItemListViewItemDraw_TypeInfo;
                  }
                  CLASS_BOARD_NOT_LABEL_POS_Y = v450->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y;
                }
                GameObjectExtensions__SetLocalPositionY(v449, CLASS_BOARD_NOT_LABEL_POS_Y, 0LL);
              }
              goto LABEL_553;
            }
            goto LABEL_192;
          }
          if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            goto LABEL_249;
        }
        else
        {
          v251 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_249:
            if ( !v251->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v251);
              v251 = BalanceConfig_TypeInfo;
            }
          }
        }
        p_FollowFriendPoint = &v251->static_fields->FollowerPointFriend;
        goto LABEL_252;
      case 2:
        v253 = this->fields.playerNameLabel;
        v254 = FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
        if ( !v253 )
          goto LABEL_491;
        UILabel__set_text(v253, v254, 0LL);
        v255 = this->fields.playerLevelIconLabel;
        v256 = FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
        if ( !v255 )
          goto LABEL_491;
        UIIconLabel__Set_40377052(v255, 2, v256, 0, 0, 0LL, 0, 0, 0, 0LL);
        v257 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v258 = LocalizationManager__Get((System_String_o *)StringLiteral_13315, 0LL);
        v259 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
        v260 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v259, 0LL);
        v261 = System_String__Format(v258, v260, 0LL);
        if ( !v257 )
          goto LABEL_491;
        UILabel__set_text(v257, v261, 0LL);
        v262 = this->fields.typeTextSprite;
        if ( !v262 )
          goto LABEL_491;
        UISprite__set_spriteName(v262, 0LL, 0LL);
        v263 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v263 = BalanceConfig_TypeInfo;
        }
        static_fields = v263->static_fields;
        v233 = (System_String_o **)&StringLiteral_9352;
        v234 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = static_fields->FollowerPointNotFriend;
        goto LABEL_233;
      case 3:
      case 4:
        v128 = this->fields.playerNameLabel;
        if ( !v128 )
          goto LABEL_491;
        v129 = StringLiteral_19445;
        UILabel__set_text(v128, (System_String_o *)StringLiteral_1, 0LL);
        v130 = this->fields.playerLevelIconLabel;
        if ( !v130 )
          goto LABEL_491;
        UIIconLabel__Clear(v130, 0LL);
        v131 = this->fields.loginDataLabel;
        if ( !v131 )
          goto LABEL_491;
        UILabel__set_text(v131, (System_String_o *)StringLiteral_1, 0LL);
        v132 = this->fields.typeTextSprite;
        if ( !v132 )
          goto LABEL_491;
        UISprite__set_spriteName(v132, (System_String_o *)StringLiteral_19302, 0LL);
        v133 = this->fields.typeTextSprite;
        if ( !v133 )
          goto LABEL_491;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v133->klass->vtable._33_MakePixelPerfect.method)(
          v133,
          v133->klass->vtable._34_get_minWidth.methodPtr);
        v134 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v134 = BalanceConfig_TypeInfo;
        }
        FollowerPointNotFriend = v134->static_fields->FollowerPointNpc;
        spriteName = (System_String_o *)v129;
        if ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) == 3 )
        {
          v136 = (System_String_o **)&StringLiteral_9352;
          if ( v96 <= 1 )
            v136 = (System_String_o **)&StringLiteral_9346;
          v137 = *v136;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v138 = LocalizationManager__Get(v137, 0LL);
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v138 = LocalizationManager__Get((System_String_o *)StringLiteral_9347, 0LL);
          OverwriteTDName = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9348, 0LL);
        }
        v267 = System_String__Format(v138, OverwriteTDName, 0LL);
        if ( !this->fields.supportInfoButton )
          goto LABEL_491;
        v266 = v267;
        v268 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.supportInfoButton, 0LL);
        if ( !v268 )
          goto LABEL_491;
        UnityEngine_GameObject__SetActive(v268, 0, 0LL);
        v269 = (UnityEngine_Behaviour_o *)this->fields.svtProfileBackSpr;
        if ( !v269 )
          goto LABEL_491;
        v270 = 0;
        goto LABEL_261;
      case 5:
        v220 = this->fields.playerNameLabel;
        v221 = FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
        if ( !v220 )
          goto LABEL_491;
        UILabel__set_text(v220, v221, 0LL);
        v222 = this->fields.playerLevelIconLabel;
        v223 = FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
        if ( !v222 )
          goto LABEL_491;
        UIIconLabel__Set_40377052(v222, 2, v223, 0, 0, 0LL, 0, 0, 0, 0LL);
        v224 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v225 = LocalizationManager__Get((System_String_o *)StringLiteral_13315, 0LL);
        v226 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
        v227 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v226, 0LL);
        v228 = System_String__Format(v225, v227, 0LL);
        if ( !v224 )
          goto LABEL_491;
        UILabel__set_text(v224, v228, 0LL);
        v229 = this->fields.typeTextSprite;
        if ( !v229 )
          goto LABEL_491;
        UISprite__set_spriteName(v229, (System_String_o *)StringLiteral_19268, 0LL);
        v230 = this->fields.typeTextSprite;
        if ( !v230 )
          goto LABEL_491;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v230->klass->vtable._33_MakePixelPerfect.method)(
          v230,
          v230->klass->vtable._34_get_minWidth.methodPtr);
        v231 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v231 = BalanceConfig_TypeInfo;
        }
        v232 = v231->static_fields;
        v233 = (System_String_o **)&StringLiteral_9352;
        v234 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = v232->FollowFriendPoint;
LABEL_233:
        if ( v96 <= 1 )
          v233 = (System_String_o **)&StringLiteral_9346;
        v265 = *v233;
        if ( (BYTE3(v234->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_257;
        goto LABEL_255;
      default:
        v266 = v566;
        FollowerPointNotFriend = 0;
        Kind_28870592 = v116;
        goto LABEL_262;
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
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  v3 = item;
  if ( (byte_40FA6F1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FA6F1 = 1;
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
    v6 = (UnityEngine_Component_o *)this->fields.lockMarkSprite;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, (bool)v3, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__setupMessageUI(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *playerProfileObj; // x0
  bool v10; // w1
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  struct FollowerInfo_o *v14; // x8
  UILabel_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  int v21; // s0
  UnityEngine_Component_o *svtNameRangeLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *gradeIcon; // x0

  if ( (byte_40FA6F0 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, item);
    byte_40FA6F0 = 1;
  }
  if ( !item )
    goto LABEL_33;
  switch ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) )
  {
    case 1:
      followerInfo = item->fields.followerInfo;
      if ( !followerInfo )
        goto LABEL_33;
      if ( System_String__IsNullOrEmpty(followerInfo->fields.message, 0LL) )
        goto LABEL_25;
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
      {
LABEL_25:
        svtNameRangeLabel = (UnityEngine_Component_o *)this->fields.svtNameRangeLabel;
        if ( svtNameRangeLabel )
        {
          gameObject = UnityEngine_Component__get_gameObject(svtNameRangeLabel, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
          messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( messageLabel )
          {
            v25 = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
            if ( v25 )
            {
              UnityEngine_GameObject__SetActive(v25, 0, 0LL);
              playerProfileObj = this->fields.playerProfileObj;
              if ( playerProfileObj )
              {
                v10 = 1;
LABEL_30:
                UnityEngine_GameObject__SetActive(playerProfileObj, v10, 0LL);
                GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, 10.0, 0LL);
                gradeIcon = (UnityEngine_Component_o *)this->fields.gradeIcon;
                if ( gradeIcon )
                {
                  v20 = UnityEngine_Component__get_gameObject(gradeIcon, 0LL);
                  v21 = 1113849856;
                  goto LABEL_32;
                }
              }
            }
          }
        }
LABEL_33:
        sub_B170D4();
      }
      v12 = (UnityEngine_Component_o *)this->fields.svtNameRangeLabel;
      if ( !v12 )
        goto LABEL_33;
      v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
      GameObjectExtensions__SetLocalPositionY(v13, -19.0, 0LL);
      v14 = item->fields.followerInfo;
      if ( !v14 )
        goto LABEL_33;
      v15 = this->fields.messageLabel;
      if ( !v15 )
        goto LABEL_33;
      UILabel__set_text(v15, v14->fields.message, 0LL);
      v16 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v16 )
        goto LABEL_33;
      v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
      if ( !v17 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v17, 1, 0LL);
      v18 = this->fields.playerProfileObj;
      if ( !v18 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v18, 1, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.playerProfileObj, -1.0, 0LL);
      GameObjectExtensions__SetLocalPositionY(this->fields.svtProfileObj, -1.0, 0LL);
      v19 = (UnityEngine_Component_o *)this->fields.gradeIcon;
      if ( !v19 )
        goto LABEL_33;
      v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
      v21 = 1112801280;
LABEL_32:
      GameObjectExtensions__SetLocalPositionY(v20, *(float *)&v21, 0LL);
      return;
    case 2:
    case 5:
      goto LABEL_25;
    case 3:
    case 4:
      v5 = (UnityEngine_Component_o *)this->fields.svtNameRangeLabel;
      if ( !v5 )
        goto LABEL_33;
      v6 = UnityEngine_Component__get_gameObject(v5, 0LL);
      GameObjectExtensions__SetLocalPositionY(v6, -16.0, 0LL);
      v7 = (UnityEngine_Component_o *)this->fields.messageLabel;
      if ( !v7 )
        goto LABEL_33;
      v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !v8 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v8, 0, 0LL);
      playerProfileObj = this->fields.playerProfileObj;
      if ( !playerProfileObj )
        goto LABEL_33;
      v10 = 0;
      goto LABEL_30;
    default:
      return;
  }
}