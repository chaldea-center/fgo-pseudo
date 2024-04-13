// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v8; // s0
  int v9; // s1
  int v10; // s2
  float v11; // s4
  float v12; // s5
  float v13; // s6
  FollowerSelectItemListViewItemDraw_c *v14; // x8
  struct UnityEngine_Color_o v15; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v16; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EBBD6 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42EBBD6 = 1;
  }
  v8 = 1065287423;
  v9 = 1064300528;
  v10 = 1058642330;
  v16 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v16);
  v17.fields.g = 0.64706;
  v17.fields.b = 0.27059;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = v16;
  v17.fields.r = 0.88235;
  v15 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(v17, v11, v12, v13, (const MethodInfo *)&v15);
  v14 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = v15;
  v14->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 12.0;
  v14->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y = 11.0;
}


void __fastcall FollowerSelectItemListViewItemDraw___ctor(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BalanceConfig_c *v14; // x0
  struct UnityEngine_GameObject_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct SkillIconComponent_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UIIconLabel_array *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_GameObject_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct SkillIconComponent_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct UIIconLabel_array *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42EBBD5 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillIconComponent___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UIIconLabel___TypeInfo, v11, v12, v13);
    byte_42EBBD5 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v14->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillBaseList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIconList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UIIconLabel_array *)sub_B5D5DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillLevelIconLabelList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillBaseList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (struct SkillIconComponent_array *)sub_B5D5DC(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillIconList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (struct UIIconLabel_array *)sub_B5D5DC(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.appendSkillLevelIconLabelList,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__Awake(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UISprite_o *skillIconSprite; // x20

  if ( (byte_42EBBCF & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19608/*"icon_skill_mini"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19742/*"img_friend_skill"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19519/*"icon_append_mini"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19741/*"img_friend_appendskill"*/, v20, v21, v22);
    byte_42EBBCF = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.switchSkillUIList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19608/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_19742/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19519/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_19741/*"img_friend_appendskill"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t displaySkill,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  _BOOL4 v18; // w8
  __int64 v19; // x20
  __int64 v20; // x21
  int32_t v21; // w9
  SwitchUIWidgetComponent_o *v22; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42EBBD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, displaySkill, (_DWORD)item, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    byte_42EBBD4 = 1;
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
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
  v18 = (int)ServantLeader;
  if ( ServantLeader )
  {
    v20 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v23.fields.currentCryptoKey = v20;
    *(_QWORD *)&v23.fields.fakeValue = v19;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL) > 0;
  }
  v21 = this->fields.displaySkill;
  if ( v21 == 2 )
  {
    if ( v18 )
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v22 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillInfo,
                                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v22 )
      {
        SwitchUIWidgetComponent__Set(v22, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_43:
    sub_B5D69C(switchSkillInfo, *(_QWORD *)&displaySkill);
  }
  if ( v21 != 1 )
  {
    if ( v21 )
      return;
    if ( !v18 )
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
  if ( v18 )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__SetInput(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        bool isInput,
        bool isTutorial,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Behaviour_o *supportInfoButton; // x0
  __int64 v12; // x1
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v15; // w24
  Il2CppClass **v16; // x8
  UnityEngine_Behaviour_o *v17; // x21
  WebViewObject_o *Component_WebViewObject; // x22
  __int64 v19; // x0

  if ( (byte_42EBBD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITouchPress___, (_DWORD)item, isInput, isTutorial);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EBBD3 = 1;
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
      v15 = 0;
      do
      {
        if ( v15 >= skillButtonList->max_length )
        {
          v19 = sub_B5D6C8(supportInfoButton);
          sub_B5D668(v19, 0LL);
        }
        v16 = &skillButtonList->obj.klass + (int)v15;
        v17 = (UnityEngine_Behaviour_o *)v16[4];
        if ( !v17 )
          break;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)v16[4],
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))v17->klass[1]._1.namespaze)(
          v17,
          1LL,
          v17->klass[1]._1.byval_arg.data);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v17->klass[1]._1.implementedInterfaces)(
          v17,
          0LL,
          0LL,
          v17->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v17, isInput, 0LL);
        if ( !Component_WebViewObject )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_WebViewObject, 1, 0LL);
        if ( (int)++v15 >= max_length )
          goto LABEL_20;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_19:
      sub_B5D69C(supportInfoButton, v12);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  int v165; // w1
  int v166; // w2
  __int64 v167; // x3
  int v168; // w1
  int v169; // w2
  __int64 v170; // x3
  int v171; // w1
  int v172; // w2
  __int64 v173; // x3
  int v174; // w1
  int v175; // w2
  __int64 v176; // x3
  int v177; // w1
  int v178; // w2
  __int64 v179; // x3
  int v180; // w1
  int v181; // w2
  __int64 v182; // x3
  int v183; // w1
  int v184; // w2
  __int64 v185; // x3
  int v186; // w1
  int v187; // w2
  __int64 v188; // x3
  __int64 switchSkillUIList; // x0
  UnityEngine_Object_o *rangeSprite; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  ServantLeaderInfo_o *v193; // x21
  int32_t Kind_28445460; // w22
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x23
  System_String_o *v197; // x25
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x23
  __int64 v199; // x23
  __int64 v200; // x24
  struct FollowerInfo_o *v201; // x8
  const MethodInfo *v202; // x2
  const MethodInfo *v203; // x2
  const MethodInfo *v204; // x2
  const MethodInfo *v205; // x1
  System_String_o *name; // x27
  System_String_o *v207; // x26
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v209; // x27
  __int64 v210; // x23
  __int64 v211; // x28
  bool v212; // w8
  FollowerRootComponent_c *v213; // x1
  UIRangeLabel_o *svtNameRangeLabel; // x24
  const MethodInfo *v215; // x2
  __int64 v216; // x3
  FollowerInfo_o *v217; // x8
  bool v218; // w1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v220; // x23
  __int64 v221; // x24
  ServantLimitImageMaster_o *v222; // x28
  WarQuestSelectionMaster_o *v223; // x0
  __int64 v224; // x23
  __int64 v225; // x24
  ServantLimitAddMaster_o *v226; // x28
  int v227; // w2
  __int64 v228; // x3
  FollowerInfo_o *v229; // x8
  Il2CppObject *v230; // x25
  BalanceConfig_c *v231; // x0
  int32_t FollowerPointNotFriend; // w27
  System_String_o **v233; // x8
  System_String_o *v234; // x23
  System_String_o *v235; // x24
  System_String_o *v236; // x26
  UILabel_o *v237; // x24
  System_String_o **v238; // x8
  int32_t v239; // w2
  UILabel_o *playerNameLabel; // x24
  System_String_o **p_userName; // x8
  int32_t userLv; // w2
  System_String_o *v243; // x26
  UILabel_o *v244; // x24
  System_String_o **v245; // x8
  int32_t v246; // w2
  System_String_o *v247; // x25
  bool v248; // w1
  UILabel_o *v249; // x26
  System_String_o **v250; // x8
  int32_t v251; // w2
  UILabel_o *v252; // x26
  System_String_o **v253; // x8
  int32_t v254; // w2
  UILabel_o *v255; // x26
  System_String_o **v256; // x8
  int32_t v257; // w2
  UILabel_o *v258; // x24
  System_String_o *v259; // x25
  int64_t v260; // x0
  UILabel_o *loginDataLabel; // x24
  System_String_o *v262; // x25
  int64_t UpdatedAt; // x0
  UILabel_o *v264; // x24
  System_String_o *v265; // x25
  int64_t v266; // x0
  Il2CppObject *v267; // x0
  __int64 *v268; // x8
  Il2CppObject *v269; // x0
  Il2CppObject *v270; // x0
  const MethodInfo *v271; // x2
  UIRangeLabel_o *svtNpRangeLabel; // x24
  UnityEngine_Object_o *svtNpCommandCard; // x23
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct SkillIconComponent_array *skillIconList; // x8
  struct SkillInfo_array *v276; // x0
  System_String_array **v277; // x2
  System_String_array **v278; // x3
  System_Boolean_array **v279; // x4
  System_Int32_array **v280; // x5
  System_Int32_array *v281; // x6
  System_Int32_array *v282; // x7
  struct SkillIconComponent_array *v283; // x8
  __int64 v284; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillInfo_array *v287; // x0
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  struct SkillIconComponent_array *v294; // x8
  __int64 v295; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v299; // x26
  System_String_o *v300; // x27
  int64_t v301; // x0
  UILabel_o *v302; // x26
  System_String_o *v303; // x27
  int64_t v304; // x0
  UILabel_o *v305; // x26
  System_String_o *v306; // x27
  int64_t v307; // x0
  Il2CppObject *v308; // x0
  BalanceConfig_c *v309; // x0
  struct BalanceConfig_StaticFields *v310; // x8
  System_String_o **v311; // x9
  int v312; // w11
  LocalizationManager_c *v313; // x0
  Il2CppObject *v314; // x0
  struct QuestRestrictionInfo_o *v315; // x24
  bool HasFlag_25406292; // w0
  BalanceConfig_c *v317; // x8
  int32_t *p_FollowFriendPoint; // x8
  Il2CppObject *v319; // x0
  BalanceConfig_c *v320; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o *v322; // x23
  System_String_o **v323; // x8
  System_String_o *v324; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v326; // x1
  UIRangeLabel_o *v327; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v329; // x23
  UnityEngine_Object_o *v330; // x23
  const MethodInfo *v331; // x1
  struct ServantNpCommandCardComponent_o *v332; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v335; // w24
  int v336; // w23
  System_String_o *v337; // x1
  int v338; // w8
  __int64 v339; // x8
  struct UILabel_o *friendPointData2Label; // x24
  int32_t v341; // w25
  System_String_o *v342; // x23
  Il2CppObject *v343; // x0
  UILabel_o *campaignLabel; // x24
  struct UILabel_o *v345; // x23
  const MethodInfo *v346; // x1
  System_String_o *v347; // x1
  UILabel_o *v348; // x0
  UnityEngine_Object_o *v349; // x23
  const MethodInfo *v350; // x1
  const MethodInfo *v351; // x2
  const MethodInfo *v352; // x1
  __int64 v353; // x23
  __int64 v354; // x24
  int32_t v355; // w24
  const MethodInfo *v356; // x1
  int32_t Rarity; // w25
  __int64 v358; // x8
  __int64 v359; // x23
  __int64 v360; // x26
  int32_t v361; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  const MethodInfo *v363; // x3
  struct SkillIconComponent_array *v364; // x8
  __int64 v365; // x8
  struct SkillInfo_array *v366; // x11
  int v367; // w9
  unsigned __int64 v368; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v370; // x14
  __int64 v371; // x23
  __int64 v372; // x25
  unsigned __int64 v373; // x26
  struct SkillInfo_array *v374; // x8
  struct UnityEngine_GameObject_array *v375; // x9
  int32_t *v376; // x27
  struct SkillIconComponent_array *v377; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v379; // x8
  struct SkillIconComponent_array *v380; // x8
  struct UIIconLabel_array *v381; // x8
  struct SkillIconComponent_array *v382; // x8
  __int64 v383; // x9
  int32_t v384; // w8
  bool v385; // w1
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v387; // x8
  __int64 v388; // x8
  struct SkillInfo_array *v389; // x11
  int v390; // w9
  signed __int64 v391; // x10
  unsigned __int64 v392; // x14
  SkillInfo_o *v393; // x14
  __int64 v394; // x23
  __int64 v395; // x25
  unsigned __int64 v396; // x26
  struct SkillInfo_array *v397; // x8
  struct UnityEngine_GameObject_array *v398; // x9
  int32_t *v399; // x27
  struct SkillIconComponent_array *v400; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v402; // x8
  struct SkillIconComponent_array *v403; // x8
  struct UIIconLabel_array *v404; // x8
  struct SkillIconComponent_array *v405; // x8
  __int64 v406; // x9
  int32_t v407; // w8
  bool v408; // w1
  SwitchUIWidgetComponent_o *switchSkillInfo; // x23
  UnityEngine_Object_o *v410; // x23
  ServantCommandCardListComponent_o *v411; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v414; // w26
  UnityEngine_Object_o *v415; // x23
  int64_t pushUserSvtId; // x8
  bool v417; // w24
  UnityEngine_Object_o *v418; // x23
  UnityEngine_Object_o *v419; // x23
  UISprite_o *v420; // x24
  UIWidget_o *v421; // x24
  int v422; // s0
  UISprite_o *v426; // x23
  int v427; // s0
  int v430; // s3
  UILabel_o *v431; // x24
  System_String_o *v432; // x23
  Il2CppObject *v433; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  Il2CppObject **v435; // x9
  Il2CppObject *v436; // x23
  Il2CppObject *v437; // x0
  System_String_o *v438; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  UILabel_o *v442; // x24
  UnityEngine_GameObject_o *v443; // x24
  FollowerSelectItemListViewItemDraw_c *v444; // x8
  float CLASS_BOARD_NOT_LABEL_POS_Y; // s0
  FollowerSelectItemListViewItemDraw_c *v446; // x8
  float v447; // s0
  float v448; // s8
  float v449; // s0
  float v450; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v453; // s10
  UnityEngine_GameObject_o *v454; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v457; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v459; // x22
  __int64 v460; // x23
  __int64 v461; // x9
  __int64 v462; // x23
  int32_t v463; // w0
  int32_t v464; // w23
  int32_t v465; // w22
  QuestPhaseEntity_o *v466; // x0
  QuestPhaseEntity_o *v467; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v469; // x23
  __int64 v470; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v471; // x21
  __int64 v472; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v475; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  EventDetailEntity_o *v479; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v483; // s0
  float v484; // s8
  UnityEngine_Transform_o *v485; // x22
  float warningMessageWidth; // s0
  float v487; // s1
  float v488; // s0
  float v489; // s2
  int64_t userId; // x2
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v492; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  System_String_o *v497; // x0
  System_String_o *v498; // x0
  System_String_o *v499; // x0
  __int64 v500; // x0
  __int64 v501; // x0
  FollowerSelectItemListViewItemDraw_o *v502; // x0
  FollowerSelectItemListViewItem_o *v503; // x1
  const MethodInfo *v504; // x2
  int v505; // [xsp+1Ch] [xbp-C4h]
  __int64 v506; // [xsp+28h] [xbp-B8h]
  FollowerInfo_o **p_followerInfo; // [xsp+30h] [xbp-B0h]
  int32_t TimesToRestart_k__BackingField; // [xsp+3Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v509; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-90h] BYREF
  int32_t v511; // [xsp+64h] [xbp-7Ch] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v514; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v515; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v516; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v517; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v518; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v519; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v520; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v521; // 0:x0.16

  if ( (byte_42EBBD0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, *(_QWORD *)&displaySkill);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v33, v34, v35);
    sub_B5D5C4(&DataManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v39, v40, v41);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v42, v43, v44);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v45, v46, v47);
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&FollowerSelectItemListViewItemDraw_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Grade_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&int_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v66, v67, v68);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&OptionManager_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v81, v82, v83);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v84, v85, v86);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v87, v88, v89);
    sub_B5D5C4(&SkillInfo___TypeInfo, v90, v91, v92);
    sub_B5D5C4(&TitleInfoControl_TypeInfo, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_3342/*"COMMON_NO_ENTRY"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_6479/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_6458/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_11872/*"SERVANT_HIDE_NAME"*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_9473/*"NP_DISABLE_COLOR_NAME"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_6459/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_6414/*"FFFFFF"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_9474/*"NP_HIDE_NAME"*/, v117, v118, v119);
    sub_B5D5C4(&StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v120, v121, v122);
    sub_B5D5C4(&StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, v123, v124, v125);
    sub_B5D5C4(&StringLiteral_9475/*"NP_HIDE_NAME_LEVEL"*/, v126, v127, v128);
    sub_B5D5C4(&StringLiteral_6472/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v129, v130, v131);
    sub_B5D5C4(&StringLiteral_6457/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v132, v133, v134);
    sub_B5D5C4(&StringLiteral_19620/*"icon_support_01"*/, v135, v136, v137);
    sub_B5D5C4(&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/, v138, v139, v140);
    sub_B5D5C4(&StringLiteral_19728/*"img_frames_mask01"*/, v141, v142, v143);
    sub_B5D5C4(&StringLiteral_12623/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v144, v145, v146);
    sub_B5D5C4(&StringLiteral_12624/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v147, v148, v149);
    sub_B5D5C4(&StringLiteral_6471/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v150, v151, v152);
    sub_B5D5C4(&StringLiteral_6473/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v153, v154, v155);
    sub_B5D5C4(&StringLiteral_6456/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v156, v157, v158);
    sub_B5D5C4(&StringLiteral_18102/*"datalost_svt_select"*/, v159, v160, v161);
    sub_B5D5C4(&StringLiteral_6413/*"FFFF00"*/, v162, v163, v164);
    sub_B5D5C4(&StringLiteral_9450/*"NO_ENTRY_NAME"*/, v165, v166, v167);
    sub_B5D5C4(&StringLiteral_9472/*"NP_COLOR_NAME"*/, v168, v169, v170);
    sub_B5D5C4(&StringLiteral_16021/*"[{0}]+{1}[-]"*/, v171, v172, v173);
    sub_B5D5C4(&StringLiteral_1/*""*/, v174, v175, v176);
    sub_B5D5C4(&StringLiteral_19587/*"icon_friend"*/, v177, v178, v179);
    sub_B5D5C4(&StringLiteral_6460/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v180, v181, v182);
    sub_B5D5C4(&StringLiteral_19586/*"icon_follow"*/, v183, v184, v185);
    sub_B5D5C4(&StringLiteral_19766/*"img_listbg_02"*/, v186, v187, v188);
    byte_42EBBD0 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v511 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v509.fields.r = 0LL;
  *(_QWORD *)&v509.fields.b = 0LL;
  switchSkillUIList = (__int64)this->fields.switchSkillUIList;
  this->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_569;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchSkillUIList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
    v193 = ServantLeader;
    p_followerInfo = &item->fields.followerInfo;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_28445460 = Grade__GetKind_28445460(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_28445460, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
    v197 = FollowerBgImage;
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
    if ( !v193 )
      goto LABEL_53;
    v199 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
    v200 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v514.fields.currentCryptoKey = v199;
    *(_QWORD *)&v514.fields.fakeValue = v200;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v514, 0LL);
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
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"COMMON_NO_ENTRY"*/, 0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_254;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
      v217 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v217->fields.type )
        {
          case 1:
            v236 = v197;
            playerNameLabel = this->fields.playerNameLabel;
            if ( (byte_42EBBC9 & 1) == 0 )
            {
              switchSkillUIList = sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)v213, (_DWORD)v215, v216);
              byte_42EBBC9 = 1;
              v217 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_254;
            if ( v217 )
              p_userName = &v217->fields.userName;
            else
              p_userName = (System_String_o **)&StringLiteral_18624/*"error"*/;
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
            UIIconLabel__Set_41886452((UIIconLabel_o *)switchSkillUIList, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v262 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              UpdatedAt = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              UpdatedAt = 0LL;
            v269 = (Il2CppObject *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v262, v269, 0LL);
            if ( !loginDataLabel )
              goto LABEL_254;
            UILabel__set_text(loginDataLabel, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v268 = &StringLiteral_19587/*"icon_friend"*/;
LABEL_205:
            v197 = v236;
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)*v268, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
              switchSkillUIList,
              *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
            goto LABEL_211;
          case 2:
            v243 = v197;
            v244 = this->fields.playerNameLabel;
            if ( (byte_42EBBC9 & 1) == 0 )
            {
              switchSkillUIList = sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)v213, (_DWORD)v215, v216);
              byte_42EBBC9 = 1;
              v217 = *p_followerInfo;
            }
            if ( !v244 )
              goto LABEL_254;
            if ( v217 )
              v245 = &v217->fields.userName;
            else
              v245 = (System_String_o **)&StringLiteral_18624/*"error"*/;
            UILabel__set_text(v244, *v245, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v246 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v246 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41886452((UIIconLabel_o *)switchSkillUIList, 2, v246, 0, 0, 0LL, 0, 0, 0, 0LL);
            v264 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v265 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v266 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v266 = 0LL;
            v270 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v266, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v265, v270, 0LL);
            if ( !v264 )
              goto LABEL_254;
            UILabel__set_text(v264, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v197 = v243;
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
            v218 = 1;
LABEL_215:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v218, 0LL);
            break;
          case 3:
          case 4:
            switchSkillUIList = (__int64)this->fields.playerNameLabel;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v197 = (System_String_o *)StringLiteral_19766/*"img_listbg_02"*/;
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
            UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19620/*"icon_support_01"*/, 0LL);
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
            v218 = 0;
            goto LABEL_215;
          case 5:
            v236 = v197;
            v237 = this->fields.playerNameLabel;
            if ( (byte_42EBBC9 & 1) == 0 )
            {
              switchSkillUIList = sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)v213, (_DWORD)v215, v216);
              byte_42EBBC9 = 1;
              v217 = *p_followerInfo;
            }
            if ( !v237 )
              goto LABEL_254;
            if ( v217 )
              v238 = &v217->fields.userName;
            else
              v238 = (System_String_o **)&StringLiteral_18624/*"error"*/;
            UILabel__set_text(v237, *v238, 0LL);
            switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
            if ( *p_followerInfo )
            {
              v239 = (*p_followerInfo)->fields.userLv;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            else
            {
              v239 = 1;
              if ( !switchSkillUIList )
                goto LABEL_254;
            }
            UIIconLabel__Set_41886452((UIIconLabel_o *)switchSkillUIList, 2, v239, 0, 0, 0LL, 0, 0, 0, 0LL);
            v258 = this->fields.loginDataLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v259 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            if ( *p_followerInfo )
              v260 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
            else
              v260 = 0LL;
            v267 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v260, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v259, v267, 0LL);
            if ( !v258 )
              goto LABEL_254;
            UILabel__set_text(v258, (System_String_o *)switchSkillUIList, 0LL);
            switchSkillUIList = (__int64)this->fields.typeTextSprite;
            if ( !switchSkillUIList )
              goto LABEL_254;
            v268 = &StringLiteral_19586/*"icon_follow"*/;
            goto LABEL_205;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v215);
      FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v271);
      svtNpRangeLabel = this->fields.svtNpRangeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9450/*"NO_ENTRY_NAME"*/, 0LL);
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
      v276 = (struct SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, skillIconList->max_length);
      this->fields.skillInfoList = v276;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.skillInfoList,
        (System_Int32_array **)v276,
        v277,
        v278,
        v279,
        v280,
        v281,
        v282);
      v283 = this->fields.skillIconList;
      if ( !v283 )
        goto LABEL_254;
      v284 = 0LL;
      while ( (int)v284 < (signed int)v283->max_length )
      {
        skillBaseList = this->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v284 >= skillBaseList->max_length )
          {
LABEL_796:
            v501 = sub_B5D6C8(switchSkillUIList);
            sub_B5D668(v501, 0LL);
          }
          switchSkillUIList = (__int64)skillBaseList->m_Items[v284];
          if ( switchSkillUIList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
            v283 = this->fields.skillIconList;
            ++v284;
            if ( v283 )
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
      v287 = (struct SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, appendSkillIconList->max_length);
      this->fields.appendSkillInfoList = v287;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.appendSkillInfoList,
        (System_Int32_array **)v287,
        v288,
        v289,
        v290,
        v291,
        v292,
        v293);
      v294 = this->fields.appendSkillIconList;
      if ( !v294 )
        goto LABEL_254;
      v295 = 0LL;
      while ( (int)v295 < (signed int)v294->max_length )
      {
        appendSkillBaseList = this->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_254;
        if ( (unsigned int)v295 >= appendSkillBaseList->max_length )
          goto LABEL_796;
        switchSkillUIList = (__int64)appendSkillBaseList->m_Items[v295];
        if ( switchSkillUIList )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
          v294 = this->fields.appendSkillIconList;
          ++v295;
          if ( v294 )
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
        LODWORD(v447) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v448 = v447;
        LODWORD(v449) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(
                                      (UserGradeComponent_o *)switchSkillUIList,
                                      0LL);
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v450 = v449;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        v453 = LocalPositionX;
        v454 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
        GameObjectExtensions__SetLocalPositionX(v454, (float)(v450 * 0.5) + (float)(v448 + v453), 0LL);
        switchSkillUIList = (__int64)this->fields.gradeIcon;
        if ( !switchSkillUIList )
          goto LABEL_254;
        UserGradeComponent__Set((UserGradeComponent_o *)switchSkillUIList, Kind_28445460, 0LL);
        baseSprite = this->fields.baseSprite;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        }
        FollowerRootComponent__SetFollowerBase(baseSprite, v197, 0LL);
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
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6471/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0LL);
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
            v457 = 0;
LABEL_652:
            classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v193 )
                goto LABEL_684;
              v460 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
              v459 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v520.fields.currentCryptoKey = v460;
              *(_QWORD *)&v520.fields.fakeValue = v459;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v520, 0LL) < 1
                || (v457 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v193, 0LL)
                || item->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_684;
              }
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillUIList, 35, 0LL) )
                goto LABEL_684;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = *(_QWORD *)(switchSkillUIList + 24);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v213 = FollowerRootComponent_TypeInfo;
              v461 = *(&FollowerRootComponent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)switchSkillUIList + 300LL) < (unsigned int)v461
                || *(FollowerRootComponent_c **)(*(_QWORD *)(*(_QWORD *)switchSkillUIList + 200LL) + 8 * v461 - 8) != FollowerRootComponent_TypeInfo )
              {
                sub_B5D990(switchSkillUIList);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v502, v503, v504);
                return;
              }
              v462 = *(_QWORD *)(switchSkillUIList + 136);
              if ( !v462 )
                goto LABEL_684;
              v463 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(switchSkillUIList + 136), 0LL);
              if ( !v463 )
                goto LABEL_684;
              v464 = *(_DWORD *)(v462 + 24);
              if ( !v464 )
                goto LABEL_684;
              v465 = v463;
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !switchSkillUIList )
                goto LABEL_254;
              v466 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillUIList, v465, v464, 0LL);
              if ( v466 )
              {
                v467 = v466;
                switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)switchSkillUIList,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
                v470 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
                v469 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
                v471 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v521.fields.currentCryptoKey = v470;
                *(_QWORD *)&v521.fields.fakeValue = v469;
                switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v521, 0LL);
                if ( !v471 )
                  goto LABEL_254;
                switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v471,
                                               switchSkillUIList,
                                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !switchSkillUIList )
                  goto LABEL_254;
                v472 = switchSkillUIList;
                switchSkillUIList = (__int64)this->fields.classCompatibilityIcon;
                if ( !switchSkillUIList )
                  goto LABEL_254;
                ServantClassCompatibilityIconComponent__SetIcon(
                  (ServantClassCompatibilityIconComponent_o *)switchSkillUIList,
                  *(_DWORD *)(v472 + 80),
                  v467->fields.classIds,
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
              v475 = this->fields.recommendedIconText;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6473/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0LL);
              if ( !v475 )
                goto LABEL_254;
              UILabel__set_text(v475, (System_String_o *)switchSkillUIList, 0LL);
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
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
              entity = 0LL;
              if ( !switchSkillUIList )
                goto LABEL_254;
              if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                      (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                      &entity,
                      questRestrictionInfo->fields.eventId,
                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                goto LABEL_718;
              v479 = (EventDetailEntity_o *)entity;
              if ( (BYTE3(TitleInfoControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoControl_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              }
              if ( TitleInfoControl__IsEnableEventShopButton_18442432(v479, 0LL) )
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
            switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !switchSkillUIList )
              goto LABEL_254;
            if ( *(_BYTE *)(switchSkillUIList + 140) )
              goto LABEL_722;
            if ( *p_followerInfo )
            {
              type = (*p_followerInfo)->fields.type;
              if ( type != 3 )
              {
                v213 = 0LL;
                if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
                  goto LABEL_723;
                goto LABEL_754;
              }
            }
            else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
            {
LABEL_754:
              switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !switchSkillUIList )
                goto LABEL_254;
              switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)switchSkillUIList,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
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
              v492 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v492 = BalanceConfig_TypeInfo;
              }
              MaxFriendChocolateUse = v492->static_fields->MaxFriendChocolateUse;
              v511 = MaxFriendChocolateUse;
              if ( UsedCount )
              {
                if ( (BYTE3(v492->vtable._0_Equals.methodPtr) & 4) != 0 && !v492->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v492);
                  MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                }
                v511 = MaxFriendChocolateUse - UsedCount->fields.count;
              }
              numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6458/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0LL);
              if ( numberOfUsabletimesPrefixLabel )
              {
                UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillUIList, 0LL);
                numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
                switchSkillUIList = (__int64)System_Int32__ToString((int32_t)&v511, 0LL);
                if ( numberOfUsabletimesLabel )
                {
                  UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillUIList, 0LL);
                  numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
                  switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6459/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0LL);
                  if ( numberOfUsabletimesSuffixLabel )
                  {
                    UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillUIList, 0LL);
                    if ( v511 )
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v497 = LocalizationManager__Get((System_String_o *)StringLiteral_6456/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v497, &color, 0LL);
                      v498 = LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v498, &v509, 0LL);
                    }
                    else
                    {
                      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v499 = LocalizationManager__Get((System_String_o *)StringLiteral_6460/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                      UnityEngine_ColorUtility__TryParseHtmlString(v499, &color, 0LL);
                      switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                      if ( !switchSkillUIList )
                        goto LABEL_254;
                      UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                      v509 = color;
                    }
                    switchSkillUIList = (__int64)this->fields.numberOfUsabletimesSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, color, 0LL);
                    switchSkillUIList = (__int64)this->fields.friendChocolateSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_254;
                    UIWidget__set_color((UIWidget_o *)switchSkillUIList, v509, 0LL);
                    v213 = (FollowerRootComponent_c *)(&dword_0 + 1);
                    goto LABEL_723;
                  }
                }
              }
LABEL_254:
              sub_B5D69C(switchSkillUIList, v213);
            }
LABEL_722:
            v213 = 0LL;
LABEL_723:
            switchSkillUIList = (__int64)this->fields.numberOfUsabletimes;
            if ( !switchSkillUIList )
              goto LABEL_254;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, (bool)v213, 0LL);
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
          switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
          if ( !warningMessageLabel )
            goto LABEL_254;
          UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          LODWORD(v483) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillUIList, 0LL);
          switchSkillUIList = (__int64)this->fields.warningMessageLabel;
          if ( !switchSkillUIList )
            goto LABEL_254;
          v484 = v483;
          switchSkillUIList = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)switchSkillUIList,
                                         0LL);
          v485 = (UnityEngine_Transform_o *)switchSkillUIList;
          warningMessageWidth = (float)this->fields.warningMessageWidth;
          if ( v484 <= warningMessageWidth )
          {
            *(UnityEngine_Vector3_o *)&v488 = UnityEngine_Vector3__get_one(0LL);
            if ( !v485 )
              goto LABEL_254;
          }
          else
          {
            v487 = 1.0;
            v488 = warningMessageWidth / v484;
            v489 = 1.0;
            if ( !switchSkillUIList )
              goto LABEL_254;
          }
          UnityEngine_Transform__set_localScale(v485, *(UnityEngine_Vector3_o *)&v488, 0LL);
        }
        v457 = 1;
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
    v201 = item->fields.followerInfo;
    if ( !v201 )
      goto LABEL_569;
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__Set_30776084(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      v193,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0,
      v201->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(this, item, v202);
    FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v203);
    FollowerSelectItemListViewItem__GetNpInfo(item, &tdInfo, v204);
    switchSkillUIList = FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, v205);
    v505 = switchSkillUIList;
    if ( !tdInfo )
      goto LABEL_569;
    v506 = (__int64)v197;
    name = tdInfo->fields.name;
    v207 = (System_String_o *)StringLiteral_1/*""*/;
    if ( ServantLeaderInfo__IsNpc(v193, 0LL) )
    {
      dispLimitCount = v193->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v193->fields.npcFlag, 0LL) )
      {
        v209 = tdInfo;
        v210 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
        v211 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v515.fields.currentCryptoKey = v210;
        *(_QWORD *)&v515.fields.fakeValue = v211;
        switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v515, 0LL);
        if ( !v209 )
          goto LABEL_569;
        name = TreasureDvcInfo__GetName(v209, switchSkillUIList, 0LL);
      }
      v212 = !NpcServantFollowerEntity__IsHideRarity(v193->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v193, 0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !switchSkillUIList )
          goto LABEL_569;
        switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)switchSkillUIList,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !switchSkillUIList )
          goto LABEL_569;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           (ServantLimitSpoilerProtectionMaster_o *)switchSkillUIList,
                           v193->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v212 = 1;
    }
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)switchSkillUIList, v212, 0LL);
    switchSkillUIList = (__int64)this->fields.servantFaceIcon;
    if ( !switchSkillUIList )
      goto LABEL_569;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)switchSkillUIList,
      !item->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v193, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v221 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
      v220 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
      v222 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v516.fields.currentCryptoKey = v221;
      *(_QWORD *)&v516.fields.fakeValue = v220;
      switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v516, 0LL);
      if ( !v222 )
        goto LABEL_569;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                         v222,
                         switchSkillUIList,
                         dispLimitCount,
                         0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v223 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v225 = *(_QWORD *)&v193->fields.svtId.fields.currentCryptoKey;
    v224 = *(_QWORD *)&v193->fields.svtId.fields.fakeValue;
    v226 = (ServantLimitAddMaster_o *)v223;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v517.fields.currentCryptoKey = v225;
    *(_QWORD *)&v517.fields.fakeValue = v224;
    switchSkillUIList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v517, 0LL);
    if ( !tdInfo || !v226 )
      goto LABEL_569;
    switchSkillUIList = (__int64)ServantLimitAddMaster__GetOverwriteTDName(
                                   v226,
                                   switchSkillUIList,
                                   dispLimitCount,
                                   name,
                                   tdInfo->fields.lv,
                                   0LL);
    v229 = *p_followerInfo;
    if ( !*p_followerInfo )
    {
      FollowerPointNotFriend = 0;
LABEL_178:
      v247 = v207;
      goto LABEL_336;
    }
    v230 = (Il2CppObject *)switchSkillUIList;
    switch ( v229->fields.type )
    {
      case 1:
        v252 = this->fields.playerNameLabel;
        if ( (byte_42EBBC9 & 1) == 0 )
        {
          switchSkillUIList = sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)item, v227, v228);
          byte_42EBBC9 = 1;
          v229 = *p_followerInfo;
        }
        if ( !v252 )
          goto LABEL_569;
        if ( v229 )
          v253 = &v229->fields.userName;
        else
          v253 = (System_String_o **)&StringLiteral_18624/*"error"*/;
        UILabel__set_text(v252, *v253, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v254 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v254 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41886452((UIIconLabel_o *)switchSkillUIList, 2, v254, 0, 0, 0LL, 0, 0, 0, 0LL);
        v302 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v303 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v304 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v304 = 0LL;
        v314 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v304, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v303, v314, 0LL);
        if ( !v302 )
          goto LABEL_569;
        UILabel__set_text(v302, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19587/*"icon_friend"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v315 = item->fields.questRestrictionInfo;
        if ( v315 )
        {
          switchSkillUIList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)switchSkillUIList,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !switchSkillUIList )
            goto LABEL_569;
          switchSkillUIList = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)switchSkillUIList,
                                         v315->fields.questId,
                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !switchSkillUIList )
            goto LABEL_569;
          HasFlag_25406292 = QuestEntity__HasFlag_25406292(
                               (QuestEntity_o *)switchSkillUIList,
                               0x8000000LL,
                               v315->fields.questPhase,
                               0LL);
          v317 = BalanceConfig_TypeInfo;
          if ( HasFlag_25406292 )
          {
            if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v317 = BalanceConfig_TypeInfo;
            }
            p_FollowFriendPoint = &v317->static_fields->FollowFriendPoint;
LABEL_326:
            FollowerPointNotFriend = *p_FollowFriendPoint;
            v323 = (System_String_o **)&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/;
            v313 = LocalizationManager_TypeInfo;
            if ( v505 <= 1 )
              v323 = (System_String_o **)&StringLiteral_9472/*"NP_COLOR_NAME"*/;
            v322 = *v323;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
            {
LABEL_329:
              if ( !v313->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v313);
            }
LABEL_331:
            v324 = LocalizationManager__Get(v322, 0LL);
            switchSkillUIList = (__int64)System_String__Format(v324, v230, 0LL);
            if ( !this->fields.supportInfoButton )
              goto LABEL_569;
            v247 = (System_String_o *)switchSkillUIList;
            switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                           0LL);
            if ( !switchSkillUIList )
              goto LABEL_569;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
            switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
            if ( !switchSkillUIList )
              goto LABEL_569;
            v248 = 1;
LABEL_335:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)switchSkillUIList, v248, 0LL);
LABEL_336:
            IsHideSupport = ServantLeaderInfo__IsHideSupport(v193, 0LL);
            v327 = this->fields.svtNameRangeLabel;
            if ( IsHideSupport )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11872/*"SERVANT_HIDE_NAME"*/, 0LL);
              if ( !v327 )
                goto LABEL_569;
              UIRangeLabel__Set(v327, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
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
                switchSkillUIList = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9475/*"NP_HIDE_NAME_LEVEL"*/, 0LL);
                v247 = (System_String_o *)switchSkillUIList;
              }
            }
            else
            {
              switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_SvtNameText(item, v326);
              if ( !v327 )
                goto LABEL_569;
              UIRangeLabel__Set(v327, (System_String_o *)switchSkillUIList, 0LL, 1, 0, 0LL);
            }
            if ( tdInfo )
            {
              strengthStatus = tdInfo->fields.strengthStatus;
              if ( ServantLeaderInfo__IsHideSupport(v193, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v193, 0LL) )
                strengthStatus = 0;
              v329 = this->fields.svtNpRangeLabel;
              switchSkillUIList = (__int64)StrengthStatus__GetIconName(strengthStatus, 0LL);
              if ( v329 )
              {
                UIRangeLabel__Set(v329, v247, (System_String_o *)switchSkillUIList, 0, 0, 0LL);
                v330 = (UnityEngine_Object_o *)this->fields.svtNpCommandCard;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v330, 0LL, 0LL) )
                {
                  switchSkillUIList = ServantLeaderInfo__IsHideSupport(v193, 0LL);
                  v332 = this->fields.svtNpCommandCard;
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !v332 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__SetHide(this->fields.svtNpCommandCard, 0LL);
                  }
                  else
                  {
                    if ( !v332 )
                      goto LABEL_569;
                    ServantNpCommandCardComponent__Set(this->fields.svtNpCommandCard, tdInfo, 0LL);
                  }
                }
                FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, v331);
                friendPointCampaignEntity = item->fields.friendPointCampaignEntity;
                v335 = FriendPointUpVal;
                v336 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
                switchSkillUIList = (__int64)this->fields.friendPointIconLabel;
                if ( switchSkillUIList )
                {
                  UIIconLabel__Set_41886452(
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
                  if ( v335 > 0 || v336 >= 1 )
                  {
                    if ( v336 <= 0 )
                      v338 = 1000;
                    else
                      v338 = v336;
                    v339 = 274877907LL * (v338 * v335 + (v338 - 1000) * FollowerPointNotFriend);
                    friendPointData2Label = this->fields.friendPointData2Label;
                    v341 = (v339 >> 38) + ((unsigned __int64)v339 >> 63);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v342 = LocalizationManager__Get((System_String_o *)StringLiteral_6479/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
                    TimesToRestart_k__BackingField = v341;
                    v343 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                    switchSkillUIList = (__int64)System_String__Format(v342, v343, 0LL);
                    if ( !friendPointData2Label )
                      goto LABEL_569;
                    v337 = (System_String_o *)switchSkillUIList;
                    switchSkillUIList = (__int64)friendPointData2Label;
                  }
                  else
                  {
                    switchSkillUIList = (__int64)this->fields.friendPointData2Label;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    v337 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text((UILabel_o *)switchSkillUIList, v337, 0LL);
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
                    v345 = this->fields.campaignLabel;
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__GetFriendPointCampaignName(item, v346);
                    if ( !v345 )
                      goto LABEL_569;
                    v347 = (System_String_o *)switchSkillUIList;
                    v348 = v345;
                  }
                  else
                  {
                    if ( !campaignLabel )
                      goto LABEL_569;
                    v348 = this->fields.campaignLabel;
                    v347 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  UILabel__set_text(v348, v347, 0LL);
                  v349 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v349, 0LL, 0LL) )
                  {
                    if ( FollowerSelectItemListViewItem__get_ServantLeader(item, v350) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v352);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v353 = *(_QWORD *)(switchSkillUIList + 48);
                      v354 = *(_QWORD *)(switchSkillUIList + 56);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v518.fields.currentCryptoKey = v353;
                      *(_QWORD *)&v518.fields.fakeValue = v354;
                      v355 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v518, 0LL);
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v356);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)switchSkillUIList, 0LL);
                    }
                    else
                    {
                      Rarity = -1;
                      v355 = -1;
                    }
                    switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(item, v352);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    if ( *(_QWORD *)(switchSkillUIList + 144) )
                    {
                      switchSkillUIList = (__int64)FollowerSelectItemListViewItem__get_ServantLeader(
                                                     item,
                                                     (const MethodInfo *)item);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v358 = *(_QWORD *)(switchSkillUIList + 144);
                      if ( !v358 )
                        goto LABEL_569;
                      v359 = *(_QWORD *)(v358 + 56);
                      v360 = *(_QWORD *)(v358 + 64);
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      }
                      *(_QWORD *)&v519.fields.currentCryptoKey = v359;
                      *(_QWORD *)&v519.fields.fakeValue = v360;
                      v361 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v519, 0LL);
                    }
                    else
                    {
                      v361 = -1;
                    }
                    switchSkillUIList = (__int64)this->fields.eventUpValIcon;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    EventUpValIconComponent__Set(
                      (EventUpValIconComponent_o *)switchSkillUIList,
                      item->fields.eventUpValItemList,
                      v355,
                      Rarity,
                      v361,
                      0LL);
                  }
                  p_skillInfoList = &this->fields.skillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetSkillInfo(
                                        item,
                                        &this->fields.skillInfoList,
                                        v351);
                  v364 = this->fields.skillIconList;
                  if ( !v364 )
                    goto LABEL_569;
                  v365 = *(_QWORD *)&v364->max_length;
                  if ( v365 << 32 >= 1 )
                  {
                    v366 = *p_skillInfoList;
                    v367 = 0;
                    v368 = 0LL;
                    while ( v366 )
                    {
                      max_length = v366->max_length;
                      if ( (__int64)v368 < (int)max_length )
                      {
                        if ( v368 >= max_length )
                        {
LABEL_795:
                          v500 = sub_B5D6C8(switchSkillUIList);
                          sub_B5D668(v500, 0LL);
                        }
                        v370 = (*p_skillInfoList)->m_Items[v368];
                        if ( v370 && v370->fields.id >= 1 )
                          v367 = v368 + 1;
                      }
                      if ( (__int64)++v368 >= (int)v365 )
                        goto LABEL_425;
                    }
                    goto LABEL_569;
                  }
                  v367 = 0;
LABEL_425:
                  if ( (int)v365 >= 1 )
                  {
                    v371 = v367;
                    v372 = 4LL;
                    do
                    {
                      v373 = v372 - 4;
                      if ( v372 - 4 >= v371 )
                      {
                        v379 = this->fields.skillBaseList;
                        if ( !v379 )
                          goto LABEL_569;
                        if ( v373 >= v379->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v379->obj.klass + v372);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v374 = *p_skillInfoList;
                        if ( !*p_skillInfoList )
                          goto LABEL_569;
                        if ( v373 >= v374->max_length )
                          goto LABEL_795;
                        v375 = this->fields.skillBaseList;
                        if ( !v375 )
                          goto LABEL_569;
                        if ( v373 >= v375->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v375->obj.klass + v372);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v376 = (int32_t *)*((_QWORD *)&v374->obj.klass + v372);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v193, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v376 )
                            v376[4] = 0;
                          v377 = this->fields.skillIconList;
                          if ( !v377 )
                            goto LABEL_569;
                          if ( v373 >= v377->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v377->obj.klass + v372);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          skillLevelIconLabelList = this->fields.skillLevelIconLabelList;
                          if ( !skillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v373 >= skillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&skillLevelIconLabelList->obj.klass + v372);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v380 = this->fields.skillIconList;
                          if ( !v380 )
                            goto LABEL_569;
                          if ( v373 >= v380->max_length )
                            goto LABEL_795;
                          if ( !v376 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v380->obj.klass + v372);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_26821136(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v376[4],
                            v376[5],
                            v376[12],
                            v376[13],
                            0LL);
                          v381 = this->fields.skillLevelIconLabelList;
                          if ( !v381 )
                            goto LABEL_569;
                          if ( v373 >= v381->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v381->obj.klass + v372);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41886452(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v376[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v382 = this->fields.skillIconList;
                      if ( !v382 )
                        goto LABEL_569;
                      v383 = v372 - 3;
                      ++v372;
                    }
                    while ( v383 < (int)v382->max_length );
                  }
                  v384 = this->fields.displaySkill;
                  if ( v384 == 2 )
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
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    if ( v384 == 1 )
                    {
                      switchSkillUIList = (__int64)this->fields.skillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v385 = 0;
                    }
                    else
                    {
                      if ( v384 )
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
                      v385 = 1;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v385, 0LL);
                  }
LABEL_472:
                  p_appendSkillInfoList = &this->fields.appendSkillInfoList;
                  switchSkillUIList = FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                        item,
                                        &this->fields.appendSkillInfoList,
                                        item->fields.isNpc,
                                        v363);
                  v387 = this->fields.appendSkillIconList;
                  if ( !v387 )
                    goto LABEL_569;
                  v388 = *(_QWORD *)&v387->max_length;
                  if ( v388 << 32 < 1 )
                  {
                    v390 = 0;
                  }
                  else
                  {
                    v389 = *p_appendSkillInfoList;
                    v390 = 0;
                    v391 = 0LL;
                    do
                    {
                      if ( v389 )
                      {
                        v392 = v389->max_length;
                        if ( v391 < (int)v392 )
                        {
                          if ( v391 >= v392 )
                            goto LABEL_795;
                          v393 = (*p_appendSkillInfoList)->m_Items[v391];
                          if ( v393 && v393->fields.id >= 1 )
                            v390 = v391 + 1;
                        }
                      }
                      ++v391;
                    }
                    while ( v391 < (int)v388 );
                  }
                  if ( (int)v388 >= 1 )
                  {
                    v394 = v390;
                    v395 = 4LL;
                    do
                    {
                      v396 = v395 - 4;
                      if ( v395 - 4 >= v394 )
                      {
                        v402 = this->fields.appendSkillBaseList;
                        if ( !v402 )
                          goto LABEL_569;
                        if ( v396 >= v402->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v402->obj.klass + v395);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
                      }
                      else
                      {
                        v397 = *p_appendSkillInfoList;
                        if ( !*p_appendSkillInfoList )
                          goto LABEL_569;
                        if ( v396 >= v397->max_length )
                          goto LABEL_795;
                        v398 = this->fields.appendSkillBaseList;
                        if ( !v398 )
                          goto LABEL_569;
                        if ( v396 >= v398->max_length )
                          goto LABEL_795;
                        switchSkillUIList = *((_QWORD *)&v398->obj.klass + v395);
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                        v399 = (int32_t *)*((_QWORD *)&v397->obj.klass + v395);
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 1, 0LL);
                        switchSkillUIList = ServantLeaderInfo__IsHideSupport(v193, 0LL);
                        if ( (switchSkillUIList & 1) != 0 )
                        {
                          if ( v399 )
                            v399[4] = 0;
                          v400 = this->fields.appendSkillIconList;
                          if ( !v400 )
                            goto LABEL_569;
                          if ( v396 >= v400->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v400->obj.klass + v395);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__SetHide((SkillIconComponent_o *)switchSkillUIList, 0LL);
                          appendSkillLevelIconLabelList = this->fields.appendSkillLevelIconLabelList;
                          if ( !appendSkillLevelIconLabelList )
                            goto LABEL_569;
                          if ( v396 >= appendSkillLevelIconLabelList->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v395);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Clear((UIIconLabel_o *)switchSkillUIList, 0LL);
                        }
                        else
                        {
                          v403 = this->fields.appendSkillIconList;
                          if ( !v403 )
                            goto LABEL_569;
                          if ( v396 >= v403->max_length )
                            goto LABEL_795;
                          if ( !v399 )
                            goto LABEL_569;
                          switchSkillUIList = *((_QWORD *)&v403->obj.klass + v395);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          SkillIconComponent__Set_26821136(
                            (SkillIconComponent_o *)switchSkillUIList,
                            v399[4],
                            v399[5],
                            v399[12],
                            v399[13],
                            0LL);
                          v404 = this->fields.appendSkillLevelIconLabelList;
                          if ( !v404 )
                            goto LABEL_569;
                          if ( v396 >= v404->max_length )
                            goto LABEL_795;
                          switchSkillUIList = *((_QWORD *)&v404->obj.klass + v395);
                          if ( !switchSkillUIList )
                            goto LABEL_569;
                          UIIconLabel__Set_41886452(
                            (UIIconLabel_o *)switchSkillUIList,
                            48,
                            v399[5],
                            0,
                            0,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                        }
                      }
                      v405 = this->fields.appendSkillIconList;
                      if ( !v405 )
                        goto LABEL_569;
                      v406 = v395 - 3;
                      ++v395;
                    }
                    while ( v406 < (int)v405->max_length );
                  }
                  v407 = this->fields.displaySkill;
                  if ( v407 == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                    v197 = (System_String_o *)v506;
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
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                  }
                  else
                  {
                    v197 = (System_String_o *)v506;
                    if ( v407 == 1 )
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
                      v408 = 1;
                    }
                    else
                    {
                      if ( v407 )
                        goto LABEL_535;
                      switchSkillUIList = (__int64)this->fields.appendSkillInfoUiWidget;
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillUIList,
                                                     0LL);
                      if ( !switchSkillUIList )
                        goto LABEL_569;
                      v408 = 0;
                    }
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v408, 0LL);
                  }
                  if ( this->fields.displaySkill == 2 )
                  {
                    switchSkillUIList = (__int64)this->fields.switchSkillUIList;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillInfo = this->fields.switchSkillInfo;
                    switchSkillUIList = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)switchSkillUIList,
                                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( !switchSkillInfo )
                      goto LABEL_569;
                    SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)switchSkillUIList, 0LL);
                  }
LABEL_535:
                  v410 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v410, 0LL, 0LL) )
                  {
                    switchSkillUIList = ServantLeaderInfo__IsHideSupport(v193, 0LL);
                    v411 = this->fields.svtCommandCardList;
                    if ( (switchSkillUIList & 1) != 0 )
                    {
                      if ( !v411 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__SetHide(this->fields.svtCommandCardList, 0LL);
                    }
                    else
                    {
                      SvtId = FollowerSelectItemListViewItem__get_SvtId(item, (const MethodInfo *)item);
                      commandCardParam = v193->fields.commandCardParam;
                      v414 = SvtId;
                      switchSkillUIList = (__int64)ServantLeaderInfo__getCommandCodeIdList(v193, 0LL);
                      if ( !v411 )
                        goto LABEL_569;
                      ServantCommandCardListComponent__Set_27528516(
                        v411,
                        v414,
                        commandCardParam,
                        (System_Int32_array *)switchSkillUIList,
                        2,
                        1,
                        0LL);
                      v197 = (System_String_o *)v506;
                    }
                  }
                  v415 = (UnityEngine_Object_o *)this->fields.pushSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  switchSkillUIList = UnityEngine_Object__op_Inequality(v415, 0LL, 0LL);
                  if ( (switchSkillUIList & 1) != 0 )
                  {
                    if ( !*p_followerInfo )
                      goto LABEL_569;
                    pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
                    v417 = pushUserSvtId && pushUserSvtId == v193->fields.userSvtId;
                    switchSkillUIList = (__int64)this->fields.pushSprite;
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillUIList,
                                                   0LL);
                    if ( !switchSkillUIList )
                      goto LABEL_569;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, v417, 0LL);
                  }
                  v418 = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v418, 0LL, 0LL) )
                  {
                    v419 = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( UnityEngine_Object__op_Inequality(v419, 0LL, 0LL) )
                    {
                      if ( item->fields._IsDataLost_k__BackingField )
                      {
                        v420 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetPartyOrganizationImage(v420, (System_String_o *)StringLiteral_18102/*"datalost_svt_select"*/, 0LL);
                        v421 = (UIWidget_o *)this->fields.dataLostMaskSprite;
                        *(UnityEngine_Color_o *)&v422 = UnityEngine_Color__get_white(0LL);
                        if ( !v421 )
                          goto LABEL_569;
                        UIWidget__set_color(v421, *(UnityEngine_Color_o *)&v422, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_569;
                      }
                      else
                      {
                        if ( item->fields._TimesToRestart_k__BackingField < 1 )
                          goto LABEL_585;
                        v426 = this->fields.dataLostMaskSprite;
                        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !AtlasManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                        }
                        AtlasManager__SetCommon(v426, 0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        UISprite__set_spriteName(
                          (UISprite_o *)switchSkillUIList,
                          (System_String_o *)StringLiteral_19728/*"img_frames_mask01"*/,
                          0LL);
                        *(UnityEngine_Color_o *)&v427 = UnityEngine_Color__get_black(0LL);
                        switchSkillUIList = (__int64)this->fields.dataLostMaskSprite;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v430 = 1059037088;
                        UIWidget__set_color((UIWidget_o *)switchSkillUIList, *(UnityEngine_Color_o *)&v427, 0LL);
                        v431 = this->fields.dataLostMaskMessageLabel;
                        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        v432 = LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
                        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
                        v433 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                        switchSkillUIList = (__int64)System_String__Format(v432, v433, 0LL);
                        if ( !v431 )
                          goto LABEL_254;
                        UILabel__set_text(v431, (System_String_o *)switchSkillUIList, 0LL);
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
                      v438 = (System_String_o *)StringLiteral_1/*""*/;
                    }
                    else
                    {
                      if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                        v435 = (Il2CppObject **)&StringLiteral_6413/*"FFFF00"*/;
                      else
                        v435 = (Il2CppObject **)&StringLiteral_6414/*"FFFFFF"*/;
                      v436 = *v435;
                      TimesToRestart_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
                      v437 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
                      switchSkillUIList = (__int64)System_String__Format_44573324(
                                                     (System_String_o *)StringLiteral_16021/*"[{0}]+{1}[-]"*/,
                                                     v436,
                                                     v437,
                                                     0LL);
                      if ( !this->fields.openClassBoardNumLabel )
                        goto LABEL_254;
                      v438 = (System_String_o *)switchSkillUIList;
                      switchSkillUIList = (__int64)this->fields.openClassBoardNumLabel;
                    }
                    UILabel__set_text((UILabel_o *)switchSkillUIList, v438, 0LL);
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
                      v442 = this->fields.classBoardOpenButtonLabel;
                      if ( (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12624/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                       0LL);
                        if ( !v442 )
                          goto LABEL_254;
                        UILabel__set_text(v442, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v443 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v446 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v446 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v446->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y;
                      }
                      else
                      {
                        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                          && !LocalizationManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        }
                        switchSkillUIList = (__int64)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12623/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                       0LL);
                        if ( !v442 )
                          goto LABEL_254;
                        UILabel__set_text(v442, (System_String_o *)switchSkillUIList, 0LL);
                        switchSkillUIList = (__int64)this->fields.classBoardOpenButtonLabel;
                        if ( !switchSkillUIList )
                          goto LABEL_254;
                        v443 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillUIList, 0LL);
                        v444 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        if ( (BYTE3(FollowerSelectItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                          v444 = FollowerSelectItemListViewItemDraw_TypeInfo;
                        }
                        CLASS_BOARD_NOT_LABEL_POS_Y = v444->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y;
                      }
                      GameObjectExtensions__SetLocalPositionY(v443, CLASS_BOARD_NOT_LABEL_POS_Y, 0LL);
                    }
                    goto LABEL_631;
                  }
                  goto LABEL_269;
                }
              }
            }
LABEL_569:
            sub_B5D69C(switchSkillUIList, item);
          }
          if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
            goto LABEL_323;
        }
        else
        {
          v317 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
LABEL_323:
            if ( !v317->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v317);
              v317 = BalanceConfig_TypeInfo;
            }
          }
        }
        p_FollowFriendPoint = &v317->static_fields->FollowerPointFriend;
        goto LABEL_326;
      case 2:
        v255 = this->fields.playerNameLabel;
        if ( (byte_42EBBC9 & 1) == 0 )
        {
          switchSkillUIList = sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)item, v227, v228);
          byte_42EBBC9 = 1;
          v229 = *p_followerInfo;
        }
        if ( !v255 )
          goto LABEL_569;
        if ( v229 )
          v256 = &v229->fields.userName;
        else
          v256 = (System_String_o **)&StringLiteral_18624/*"error"*/;
        UILabel__set_text(v255, *v256, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v257 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v257 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41886452((UIIconLabel_o *)switchSkillUIList, 2, v257, 0, 0, 0LL, 0, 0, 0, 0LL);
        v305 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v306 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v307 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v307 = 0LL;
        v319 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v307, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v306, v319, 0LL);
        if ( !v305 )
          goto LABEL_569;
        UILabel__set_text(v305, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, 0LL, 0LL);
        v320 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v320 = BalanceConfig_TypeInfo;
        }
        static_fields = v320->static_fields;
        v311 = (System_String_o **)&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/;
        v312 = v505;
        v313 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = static_fields->FollowerPointNotFriend;
LABEL_316:
        if ( v312 <= 1 )
          v311 = (System_String_o **)&StringLiteral_9472/*"NP_COLOR_NAME"*/;
        v322 = *v311;
        if ( (BYTE3(v313->vtable._0_Equals.methodPtr) & 4) == 0 )
          goto LABEL_331;
        goto LABEL_329;
      case 3:
      case 4:
        switchSkillUIList = (__int64)this->fields.playerNameLabel;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v506 = StringLiteral_19766/*"img_listbg_02"*/;
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
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19620/*"icon_support_01"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v231 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v231 = BalanceConfig_TypeInfo;
        }
        FollowerPointNotFriend = v231->static_fields->FollowerPointNpc;
        if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
        {
          v233 = (System_String_o **)&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/;
          if ( v505 <= 1 )
            v233 = (System_String_o **)&StringLiteral_9472/*"NP_COLOR_NAME"*/;
          v234 = *v233;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v235 = LocalizationManager__Get(v234, 0LL);
        }
        else
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v235 = LocalizationManager__Get((System_String_o *)StringLiteral_9473/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
          v230 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9474/*"NP_HIDE_NAME"*/, 0LL);
        }
        switchSkillUIList = (__int64)System_String__Format(v235, v230, 0LL);
        if ( !this->fields.supportInfoButton )
          goto LABEL_569;
        v247 = (System_String_o *)switchSkillUIList;
        switchSkillUIList = (__int64)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)this->fields.supportInfoButton,
                                       0LL);
        if ( !switchSkillUIList )
          goto LABEL_569;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillUIList, 0, 0LL);
        switchSkillUIList = (__int64)this->fields.svtProfileBackSpr;
        if ( !switchSkillUIList )
          goto LABEL_569;
        v248 = 0;
        goto LABEL_335;
      case 5:
        v249 = this->fields.playerNameLabel;
        if ( (byte_42EBBC9 & 1) == 0 )
        {
          switchSkillUIList = sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)item, v227, v228);
          byte_42EBBC9 = 1;
          v229 = *p_followerInfo;
        }
        if ( !v249 )
          goto LABEL_569;
        if ( v229 )
          v250 = &v229->fields.userName;
        else
          v250 = (System_String_o **)&StringLiteral_18624/*"error"*/;
        UILabel__set_text(v249, *v250, 0LL);
        switchSkillUIList = (__int64)this->fields.playerLevelIconLabel;
        if ( *p_followerInfo )
        {
          v251 = (*p_followerInfo)->fields.userLv;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        else
        {
          v251 = 1;
          if ( !switchSkillUIList )
            goto LABEL_569;
        }
        UIIconLabel__Set_41886452((UIIconLabel_o *)switchSkillUIList, 2, v251, 0, 0, 0LL, 0, 0, 0, 0LL);
        v299 = this->fields.loginDataLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v300 = LocalizationManager__Get((System_String_o *)StringLiteral_13527/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
        if ( *p_followerInfo )
          v301 = FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL);
        else
          v301 = 0LL;
        v308 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v301, 0LL);
        switchSkillUIList = (__int64)System_String__Format(v300, v308, 0LL);
        if ( !v299 )
          goto LABEL_569;
        UILabel__set_text(v299, (System_String_o *)switchSkillUIList, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        UISprite__set_spriteName((UISprite_o *)switchSkillUIList, (System_String_o *)StringLiteral_19586/*"icon_follow"*/, 0LL);
        switchSkillUIList = (__int64)this->fields.typeTextSprite;
        if ( !switchSkillUIList )
          goto LABEL_569;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)switchSkillUIList + 840LL))(
          switchSkillUIList,
          *(_QWORD *)(*(_QWORD *)switchSkillUIList + 848LL));
        v309 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v309 = BalanceConfig_TypeInfo;
        }
        v310 = v309->static_fields;
        v311 = (System_String_o **)&StringLiteral_9478/*"NP_MAX_COLOR_NAME"*/;
        v312 = v505;
        v313 = LocalizationManager_TypeInfo;
        FollowerPointNotFriend = v310->FollowFriendPoint;
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
  __int64 v3; // x3
  FollowerSelectItemListViewItem_o *v4; // x20
  UnityEngine_Object_o *lockMarkSprite; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  v4 = item;
  if ( (byte_42EBBD2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EBBD2 = 1;
  }
  if ( v4 )
    LOBYTE(v4) = v4->fields.isLockUser;
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
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v4, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__setupMessageUI(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FollowerSelectItemListViewItemDraw_o *v5; // x19
  struct FollowerInfo_o *followerInfo; // x8
  UnityEngine_GameObject_o *v7; // x0
  bool v8; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  struct FollowerInfo_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x0
  int v12; // s0
  UnityEngine_GameObject_o *v13; // x0

  v5 = this;
  if ( (byte_42EBBD1 & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42EBBD1 = 1;
  }
  if ( !item )
LABEL_34:
    sub_B5D69C(this, item);
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
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_34;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
        v10 = item->fields.followerInfo;
        if ( !v10 )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        UILabel__set_text((UILabel_o *)this, v10->fields.message, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        GameObjectExtensions__SetLocalPositionY(v5->fields.playerProfileObj, -1.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(v5->fields.svtProfileObj, -1.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.gradeIcon;
        if ( !this )
          goto LABEL_34;
        v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v12 = 1112801280;
        goto LABEL_33;
      case 2:
      case 5:
LABEL_26:
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_34;
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v13, -19.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
        if ( !this )
          goto LABEL_34;
        v8 = 1;
        goto LABEL_31;
      case 3:
      case 4:
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_34;
        v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v7, -16.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
        if ( !this )
          goto LABEL_34;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_34;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
        if ( !this )
          goto LABEL_34;
        v8 = 0;
LABEL_31:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0LL);
        GameObjectExtensions__SetLocalPositionY(v5->fields.playerProfileObj, -11.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(v5->fields.svtProfileObj, 10.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.gradeIcon;
        if ( !this )
          goto LABEL_34;
        v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v12 = 1113849856;
LABEL_33:
        GameObjectExtensions__SetLocalPositionY(v11, *(float *)&v12, 0LL);
        break;
      default:
        return;
    }
  }
}