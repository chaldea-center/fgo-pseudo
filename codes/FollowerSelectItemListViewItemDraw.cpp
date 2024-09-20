void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_c *v1; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A56463 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewItemDraw_TypeInfo);
    byte_4A56463 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BB4130;
  v1 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BB4430;
  static_fields = v1->static_fields;
  *(_QWORD *)&static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 0x4130000041400000LL;
  static_fields->CLASS_BOARD_LABEL_POS = (struct UnityEngine_Vector2_o)0x41300000BF800000LL;
}


void __fastcall FollowerSelectItemListViewItemDraw___ctor(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  struct SkillIconComponent_array *v5; // x0
  struct UIIconLabel_array *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  struct UIIconLabel_array *v9; // x0

  if ( (byte_4A56462 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&SkillIconComponent___TypeInfo);
    sub_1B885B0(&UIIconLabel___TypeInfo);
    byte_4A56462 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1B88554(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1B88658(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1B88554(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1B88658(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1B88554(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1B88554(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1B88658(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1B88554(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1B88658(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1B88554(&this->fields.appendSkillLevelIconLabelList, v9);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__Awake(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UISprite_o *skillIconSprite; // x20

  if ( (byte_4A5645C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&StringLiteral_20178/*"icon_skill_mini"*/);
    sub_1B885B0(&StringLiteral_20320/*"img_friend_skill"*/);
    sub_1B885B0(&StringLiteral_20083/*"icon_append_mini"*/);
    sub_1B885B0(&StringLiteral_20319/*"img_friend_appendskill"*/);
    byte_4A5645C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1B88554(&this->fields.switchSkillUIList, v3);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20178/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20320/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20083/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20319/*"img_friend_appendskill"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t displaySkill,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w21
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v10; // w9
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  _BOOL4 v14; // w8
  int32_t v15; // w9
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v19; // x8
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  SwitchUIWidgetComponent_o *v24; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v5 = displaySkill;
  if ( (byte_4A56461 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56461 = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  this->fields.displaySkill = v5;
  if ( !switchSkillInfo )
    goto LABEL_52;
  SwitchUIWidgetComponent__Clear(switchSkillInfo, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_52;
  size = switchSkillUIList->fields._size;
  v10 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_52;
  (*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
    switchSkillInfo,
    switchSkillInfo->klass[1]._1.this_arg.data,
    0.0);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_52;
  switchSkillInfo = (SwitchUIWidgetComponent_o *)(*(__int64 (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
                                                   switchSkillInfo,
                                                   switchSkillInfo->klass[1]._1.this_arg.data,
                                                   0.0);
  if ( !item )
    goto LABEL_52;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, *(const MethodInfo **)&displaySkill);
  if ( ServantLeader )
  {
    v13 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v13;
    *(_QWORD *)&v25.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL) > 0;
  }
  else
  {
    v14 = 0;
  }
  v15 = this->fields.displaySkill;
  if ( v15 == 2 )
  {
    if ( v14 )
    {
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !switchSkillInfo )
        goto LABEL_52;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)switchSkillInfo,
                                                       0LL);
      if ( !switchSkillInfo )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !switchSkillInfo )
        goto LABEL_52;
      *(_QWORD *)&displaySkill = this->fields.skillInfoUiWidget;
      v16 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v16 )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v16 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = v16 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = *(_QWORD *)&displaySkill;
        sub_1B88554(v19 + 32, *(_QWORD *)&displaySkill);
      }
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
      if ( !switchSkillInfo )
        goto LABEL_52;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)switchSkillInfo,
                                                       0LL);
      if ( !switchSkillInfo )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !switchSkillInfo )
        goto LABEL_52;
      *(_QWORD *)&displaySkill = this->fields.appendSkillInfoUiWidget;
      v20 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v21 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v20 )
        goto LABEL_52;
      v22 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * v22;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v22 + 1;
        *(_QWORD *)(v23 + 32) = *(_QWORD *)&displaySkill;
        sub_1B88554(v23 + 32, *(_QWORD *)&displaySkill);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v24 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v24 )
      {
        SwitchUIWidgetComponent__Set(v24, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1B8880C(switchSkillInfo, *(_QWORD *)&displaySkill);
  }
  if ( v15 != 1 )
  {
    if ( v15 )
      return;
    if ( !v14 )
      goto LABEL_23;
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
LABEL_23:
          switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
          if ( !switchSkillInfo )
            goto LABEL_52;
          goto LABEL_38;
        }
      }
    }
    goto LABEL_52;
  }
  if ( v14 )
  {
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
    if ( !switchSkillInfo )
      goto LABEL_52;
    (*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
      switchSkillInfo,
      switchSkillInfo->klass[1]._1.this_arg.data,
      1.0);
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
    if ( !switchSkillInfo )
      goto LABEL_52;
    switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillInfo,
                                                     0LL);
    if ( !switchSkillInfo )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
  }
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_52;
LABEL_38:
  switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillInfo,
                                                   0LL);
  if ( !switchSkillInfo )
    goto LABEL_52;
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
  Il2CppObject *Component_object; // x22

  if ( (byte_4A56460 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56460 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)supportInfoButton & 1) != 0 )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))supportInfoButton->klass[1]._1.namespaze)(
      supportInfoButton,
      1LL,
      supportInfoButton->klass[1]._1.byval_arg.data);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))supportInfoButton->klass[1]._1.implementedInterfaces)(
      supportInfoButton,
      0LL,
      0LL,
      supportInfoButton->klass[1]._1.interfaceOffsets);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_18;
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
          sub_1B88814(supportInfoButton, v9);
        v13 = &skillButtonList->obj.klass + (int)v12;
        v14 = (UnityEngine_Behaviour_o *)v13[4];
        if ( !v14 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v13[4],
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
        if ( !Component_object )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, 1, 0LL);
        if ( max_length == ++v12 )
          goto LABEL_19;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_18:
      sub_1B8880C(supportInfoButton, v9);
    }
  }
LABEL_19:
  supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
  if ( !supportInfoButton )
    goto LABEL_18;
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)supportInfoButton,
                                                   0LL);
  if ( !supportInfoButton )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)supportInfoButton, 0LL) )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))supportInfoButton->klass[1]._1.namespaze)(
      supportInfoButton,
      1LL,
      supportInfoButton->klass[1]._1.byval_arg.data);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))supportInfoButton->klass[1]._1.implementedInterfaces)(
      supportInfoButton,
      0LL,
      0LL,
      supportInfoButton->klass[1]._1.interfaceOffsets);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_18;
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
  FollowerSelectItemListViewItem_o *v7; // x19
  FollowerSelectItemListViewItemDraw_o *v8; // x20
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v11; // w9
  UnityEngine_Object_o *rangeSprite; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  FollowerInfo_o **p_followerInfo; // x29
  ServantLeaderInfo_o *v16; // x21
  int32_t Kind_37688860; // w22
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  System_String_o *v20; // x26
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v22; // x24
  __int64 v23; // x25
  struct FollowerInfo_o *v24; // x8
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  System_String_o *name; // x27
  FollowerSelectItemListViewItemDraw_o *v30; // x26
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v32; // x27
  __int64 v33; // x28
  __int64 v34; // x29
  bool v35; // w8
  UIRangeLabel_o *svtNameRangeLabel; // x24
  const MethodInfo *v37; // x2
  FollowerInfo_o *v38; // x8
  bool v39; // w1
  Il2CppObject *Master_object; // x0
  __int64 v41; // x23
  __int64 v42; // x29
  ServantLimitImageMaster_o *v43; // x28
  Il2CppObject *v44; // x0
  __int64 v45; // x23
  __int64 v46; // x29
  ServantLimitAddMaster_o *v47; // x28
  FollowerInfo_o *v48; // x8
  Il2CppObject *v49; // x25
  __int64 v50; // x24
  BalanceConfig_c *v51; // x0
  int32_t FollowerPointNpc; // w27
  System_String_o **v53; // x8
  System_String_o *v54; // x23
  System_String_o *v55; // x24
  UILabel_o *playerNameLabel; // x24
  System_String_o **v57; // x8
  int32_t v58; // w2
  UILabel_o *v59; // x24
  System_String_o **v60; // x8
  int32_t v61; // w2
  UILabel_o *v62; // x24
  System_String_o **v63; // x8
  int32_t v64; // w2
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
  UILabel_o *loginDataLabel; // x24
  System_String_o *v76; // x25
  int64_t v77; // x0
  UILabel_o *v78; // x24
  System_String_o *v79; // x25
  int64_t v80; // x0
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
  __int64 v93; // x0
  struct SkillIconComponent_array *v94; // x8
  __int64 v95; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v98; // x0
  struct SkillIconComponent_array *v99; // x8
  __int64 v100; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v104; // x26
  System_String_o *v105; // x27
  int64_t v106; // x0
  UILabel_o *v107; // x26
  System_String_o *v108; // x27
  int64_t v109; // x0
  UILabel_o *v110; // x26
  System_String_o *v111; // x27
  int64_t v112; // x0
  Il2CppObject *v113; // x0
  struct QuestRestrictionInfo_o *v114; // x26
  _BOOL4 IsRecommendFollower_k__BackingField; // w27
  BalanceConfig_c *v116; // x0
  __int64 v117; // x9
  struct BalanceConfig_StaticFields *v118; // x8
  System_String_o **v119; // x10
  LocalizationManager_c *v120; // x0
  Il2CppObject *v121; // x0
  _BOOL4 v122; // w26
  BalanceConfig_c *v123; // x0
  bool v124; // zf
  __int64 v125; // x10
  Il2CppObject *v126; // x0
  _BOOL4 v127; // w26
  BalanceConfig_c *v128; // x0
  System_String_o *v129; // x23
  System_String_o *v130; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v132; // x1
  UIRangeLabel_o *v133; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v135; // x25
  UnityEngine_Object_o *v136; // x23
  const MethodInfo *v137; // x1
  struct ServantNpCommandCardComponent_o *v138; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v141; // w24
  int v142; // w23
  FollowerSelectItemListViewItemDraw_o *v143; // x1
  int v144; // w8
  __int64 v145; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v147; // w25
  System_String_o *v148; // x23
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  Il2CppObject *v152; // x0
  UILabel_o *campaignLabel; // x24
  const MethodInfo *v154; // x1
  FollowerSelectItemListViewItemDraw_o *v155; // x1
  bool activeSelf; // w8
  float v157; // s8
  bool v158; // w8
  float v159; // s9
  UnityEngine_GameObject_o *v160; // x0
  UnityEngine_GameObject_o *v161; // x0
  UnityEngine_Object_o *v162; // x23
  const MethodInfo *v163; // x1
  const MethodInfo *v164; // x2
  const MethodInfo *v165; // x1
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v168; // w24
  const MethodInfo *v169; // x1
  int32_t Rarity; // w25
  struct UISprite_o *v171; // x8
  __int64 v172; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v174; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  const MethodInfo *v176; // x3
  struct SkillIconComponent_array *v177; // x8
  __int64 v178; // x8
  struct SkillInfo_array *v179; // x11
  int v180; // w9
  unsigned __int64 v181; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v183; // x14
  __int64 v184; // x23
  __int64 v185; // x25
  unsigned __int64 v186; // x26
  struct SkillInfo_array *v187; // x8
  struct UnityEngine_GameObject_array *v188; // x9
  int32_t *v189; // x27
  struct SkillIconComponent_array *v190; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v192; // x8
  struct SkillIconComponent_array *v193; // x8
  struct UIIconLabel_array *v194; // x8
  struct SkillIconComponent_array *v195; // x8
  __int64 v196; // x9
  int32_t v197; // w8
  bool v198; // w1
  __int64 v199; // x8
  _QWORD *v200; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v202; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v204; // x8
  __int64 v205; // x8
  struct SkillInfo_array *v206; // x11
  int v207; // w9
  signed __int64 v208; // x10
  unsigned __int64 v209; // x14
  SkillInfo_o *v210; // x14
  unsigned __int64 v211; // x23
  signed __int64 v212; // x25
  struct SkillInfo_array *v213; // x8
  struct UnityEngine_GameObject_array *v214; // x9
  int32_t *v215; // x27
  struct UICommonButton_array *skillButtonList; // x9
  int v217; // w8
  struct UnityEngine_GameObject_array *v218; // x9
  struct SkillIconComponent_array *v219; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v221; // x8
  struct SkillIconComponent_array *v222; // x8
  struct UIIconLabel_array *v223; // x8
  struct SkillIconComponent_array *v224; // x8
  int32_t v225; // w8
  bool v226; // w1
  __int64 v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  __int64 v230; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *v232; // x23
  ServantCommandCardListComponent_o *v233; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v236; // w26
  UnityEngine_Object_o *v237; // x23
  int64_t pushUserSvtId; // x8
  bool v239; // w24
  UnityEngine_Object_o *v240; // x23
  UnityEngine_Object_o *v241; // x23
  UISprite_o *v242; // x24
  UISprite_o *v243; // x23
  UILabel_o *v244; // x24
  System_String_o *v245; // x23
  __int64 v246; // x2
  __int64 v247; // x3
  __int64 v248; // x4
  Il2CppObject *v249; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v251; // x2
  __int64 v252; // x3
  __int64 v253; // x4
  Il2CppObject **v254; // x9
  Il2CppObject *v255; // x23
  Il2CppObject *v256; // x0
  FollowerSelectItemListViewItemDraw_o *v257; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w23
  UILabel_o *v262; // x24
  UnityEngine_GameObject_o *v263; // x24
  FollowerSelectItemListViewItemDraw_c *v264; // x8
  __int64 v265; // x9
  UnityEngine_GameObject_o *v266; // x24
  BalanceConfig_c *v267; // x8
  UISprite_o *classBoardBackSprite; // x24
  UnityEngine_GameObject_o *v269; // x24
  FollowerSelectItemListViewItemDraw_c *v270; // x8
  UnityEngine_GameObject_o *v271; // x0
  UnityEngine_GameObject_o *v272; // x0
  float v273; // s0
  float v274; // s8
  float v275; // s0
  float v276; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v279; // s10
  UnityEngine_GameObject_o *v280; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v283; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v285; // x22
  __int64 v286; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *typeTextSprite; // x23
  int32_t v289; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v291; // w22
  QuestPhaseEntity_o *v292; // x0
  QuestPhaseEntity_o *v293; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v295; // x23
  __int64 v296; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v297; // x21
  FollowerSelectItemListViewItemDraw_o *v298; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v301; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  Il2CppObject *v305; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v309; // s0
  float v310; // s8
  FollowerSelectItemListViewItemDraw_o *v311; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int64_t v316; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v319; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v324; // w21
  System_String_o *v325; // x0
  System_String_o *v326; // x0
  System_String_o *v327; // x0
  FollowerSelectItemListViewItemDraw_o *v328; // x0
  FollowerSelectItemListViewItem_o *v329; // x1
  const MethodInfo *v330; // x2
  int v331; // [xsp+18h] [xbp-C8h]
  System_String_o *v332; // [xsp+20h] [xbp-C0h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v334; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v336; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v339; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v340; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v341; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v342; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v343; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v344; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v346; // 0:x0.16
  UnityEngine_Color_o v347; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v348; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4A5645D & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&Grade_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&SkillInfo___TypeInfo);
    sub_1B885B0(&TitleInfoControl_TypeInfo);
    sub_1B885B0(&StringLiteral_3772/*"COMMON_NO_ENTRY"*/);
    sub_1B885B0(&StringLiteral_6433/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/);
    sub_1B885B0(&StringLiteral_6412/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/);
    sub_1B885B0(&StringLiteral_11618/*"SERVANT_HIDE_NAME"*/);
    sub_1B885B0(&StringLiteral_9323/*"NP_DISABLE_COLOR_NAME"*/);
    sub_1B885B0(&StringLiteral_6413/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/);
    sub_1B885B0(&StringLiteral_6366/*"FFFFFF"*/);
    sub_1B885B0(&StringLiteral_9324/*"NP_HIDE_NAME"*/);
    sub_1B885B0(&StringLiteral_11514/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1B885B0(&StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1B885B0(&StringLiteral_9325/*"NP_HIDE_NAME_LEVEL"*/);
    sub_1B885B0(&StringLiteral_6426/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1B885B0(&StringLiteral_6411/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/);
    sub_1B885B0(&StringLiteral_17485/*"btn_bg_29_2"*/);
    sub_1B885B0(&StringLiteral_20190/*"icon_support_01"*/);
    sub_1B885B0(&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/);
    sub_1B885B0(&StringLiteral_20306/*"img_frames_mask01"*/);
    sub_1B885B0(&StringLiteral_12382/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_1B885B0(&StringLiteral_12383/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/);
    sub_1B885B0(&StringLiteral_6425/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/);
    sub_1B885B0(&StringLiteral_6427/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/);
    sub_1B885B0(&StringLiteral_6410/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/);
    sub_1B885B0(&StringLiteral_18477/*"datalost_svt_select"*/);
    sub_1B885B0(&StringLiteral_6365/*"FFFF00"*/);
    sub_1B885B0(&StringLiteral_9298/*"NO_ENTRY_NAME"*/);
    sub_1B885B0(&StringLiteral_9322/*"NP_COLOR_NAME"*/);
    sub_1B885B0(&StringLiteral_16027/*"[{0}]+{1}[-]"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_20153/*"icon_friend"*/);
    sub_1B885B0(&StringLiteral_6414/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/);
    sub_1B885B0(&StringLiteral_20152/*"icon_follow"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_20348/*"img_listbg_02"*/);
    byte_4A5645D = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v336 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v334.fields.r = 0LL;
  *(_QWORD *)&v334.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_230;
  size = switchSkillUIList->fields._size;
  v11 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_230;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_230;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  if ( (v8->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
    if ( !this )
      goto LABEL_230;
    v8->fields.warningMessageWidth = (int32_t)this->fields.skillIconList;
    UIWidget__set_width((UIWidget_o *)this, 1000, 0LL);
    if ( !v7 )
      return;
  }
  else if ( !v7 )
  {
    return;
  }
  rangeSprite = (UnityEngine_Object_o *)v8->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.rangeSprite;
    if ( !this )
      goto LABEL_230;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_230;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, mode == 0, 0LL);
  }
  if ( mode )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
    p_followerInfo = &v7->fields.followerInfo;
    followerInfo = v7->fields.followerInfo;
    v16 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_37688860 = Grade__GetKind_37688860(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_37688860, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    v20 = FollowerBgImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    dataLostMaskMessageLabel = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_230;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    if ( !v16 )
      goto LABEL_49;
    v23 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v339.fields.currentCryptoKey = v23;
    *(_QWORD *)&v339.fields.fakeValue = v22;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                     v339,
                                                     0LL);
    if ( (int)this < 1 )
    {
LABEL_49:
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                       v7,
                                                       (const MethodInfo *)item);
      if ( !v8->fields.servantFaceIcon )
        goto LABEL_230;
      ServantFaceIconComponent__SetEquipDangling(v8->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0LL);
      svtNameRangeLabel = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3772/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_230;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
      v38 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v38->fields.type )
        {
          case 1:
            playerNameLabel = v8->fields.playerNameLabel;
            if ( (byte_4A56455 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_19052/*"error"*/);
              byte_4A56455 = 1;
              v38 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_230;
            v57 = v38 ? &v38->fields.userName : (System_String_o **)&StringLiteral_19052/*"error"*/;
            UILabel__set_text(playerNameLabel, *v57, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v58 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38235604((UIIconLabel_o *)this, 2, v58, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v77 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v84 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v77, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v76, v84, 0LL);
            if ( !loginDataLabel )
              goto LABEL_230;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            v85 = &StringLiteral_20153/*"icon_friend"*/;
            goto LABEL_188;
          case 2:
            v59 = v8->fields.playerNameLabel;
            if ( (byte_4A56455 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_19052/*"error"*/);
              byte_4A56455 = 1;
              v38 = *p_followerInfo;
            }
            if ( !v59 )
              goto LABEL_230;
            v60 = v38 ? &v38->fields.userName : (System_String_o **)&StringLiteral_19052/*"error"*/;
            UILabel__set_text(v59, *v60, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v61 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38235604((UIIconLabel_o *)this, 2, v61, 0, 0, 0LL, 0, 0, 0, 0LL);
            v78 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v79 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v80 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v86 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v80, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v79, v86, 0LL);
            if ( !v78 )
              goto LABEL_230;
            UILabel__set_text(v78, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
            goto LABEL_190;
          case 3:
          case 4:
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
            if ( !this )
              goto LABEL_230;
            v20 = (System_String_o *)StringLiteral_20348/*"img_listbg_02"*/;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
            if ( !this )
              goto LABEL_230;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20190/*"icon_support_01"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
            if ( !this )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_230;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
            if ( !this )
              goto LABEL_230;
            v39 = 0;
            goto LABEL_194;
          case 5:
            v62 = v8->fields.playerNameLabel;
            if ( (byte_4A56455 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_19052/*"error"*/);
              byte_4A56455 = 1;
              v38 = *p_followerInfo;
            }
            if ( !v62 )
              goto LABEL_230;
            v63 = v38 ? &v38->fields.userName : (System_String_o **)&StringLiteral_19052/*"error"*/;
            UILabel__set_text(v62, *v63, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v64 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38235604((UIIconLabel_o *)this, 2, v64, 0, 0, 0LL, 0, 0, 0, 0LL);
            v81 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v82 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v83 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v87 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v83, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v82, v87, 0LL);
            if ( !v81 )
              goto LABEL_230;
            UILabel__set_text(v81, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            v85 = &StringLiteral_20152/*"icon_follow"*/;
LABEL_188:
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v85, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
LABEL_190:
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
            if ( !this )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_230;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)this,
              !v7->fields._IsRecommendFollower_k__BackingField,
              0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
            if ( !this )
              goto LABEL_230;
            v39 = 1;
LABEL_194:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v39, 0LL);
            break;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v37);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v88);
      svtNpRangeLabel = v8->fields.svtNpRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_9298/*"NO_ENTRY_NAME"*/,
                                                       0LL);
      if ( !svtNpRangeLabel )
        goto LABEL_230;
      UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
      svtNpCommandCard = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtNpCommandCard;
        if ( !this )
          goto LABEL_230;
        ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
      if ( !this )
        goto LABEL_230;
      UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_230;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
      if ( !this )
        goto LABEL_230;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      eventUpValIcon = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
        if ( !this )
          goto LABEL_230;
        EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
      }
      skillIconList = v8->fields.skillIconList;
      if ( !skillIconList )
        goto LABEL_230;
      v93 = sub_1B88658(SkillInfo___TypeInfo, skillIconList->max_length);
      v8->fields.skillInfoList = (struct SkillInfo_array *)v93;
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1B88554(&v8->fields.skillInfoList, v93);
      v94 = v8->fields.skillIconList;
      if ( !v94 )
        goto LABEL_230;
      v95 = 0LL;
      while ( (int)v95 < (signed int)v94->max_length )
      {
        skillBaseList = v8->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v95 >= skillBaseList->max_length )
LABEL_762:
            sub_1B88814(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v95];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v94 = v8->fields.skillIconList;
            ++v95;
            if ( v94 )
              continue;
          }
        }
        goto LABEL_230;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      appendSkillIconList = v8->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_230;
      v98 = sub_1B88658(SkillInfo___TypeInfo, appendSkillIconList->max_length);
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)v98;
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1B88554(&v8->fields.appendSkillInfoList, v98);
      v99 = v8->fields.appendSkillIconList;
      if ( !v99 )
        goto LABEL_230;
      v100 = 0LL;
      while ( (int)v100 < (signed int)v99->max_length )
      {
        appendSkillBaseList = v8->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_230;
        if ( (unsigned int)v100 >= appendSkillBaseList->max_length )
          goto LABEL_762;
        this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v100];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v99 = v8->fields.appendSkillIconList;
          ++v100;
          if ( v99 )
            continue;
        }
        goto LABEL_230;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      svtCommandCardList = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_230;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      pushSprite = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
      {
LABEL_615:
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
        if ( !this )
          goto LABEL_230;
        LODWORD(v273) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        v274 = v273;
        LODWORD(v275) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
        if ( !this )
          goto LABEL_230;
        v276 = v275;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        v279 = LocalPositionX;
        v280 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v280, (float)(v276 * 0.5) + (float)(v274 + v279), 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_37688860, 0LL);
        baseSprite = v8->fields.baseSprite;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        FollowerRootComponent__SetFollowerBase(baseSprite, v20, 0LL);
        if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          maskMessageLabel = v8->fields.maskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6425/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
                                                           0LL);
          if ( !maskMessageLabel )
            goto LABEL_230;
          UILabel__set_text(maskMessageLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
          if ( !this )
            goto LABEL_230;
          FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_230;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        else
        {
          if ( !v7->fields.isUniqueSvtRestriction && !v7->fields.isUniqueIndividualityRestriction )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
            if ( !this )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_230;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
            if ( !this )
              goto LABEL_230;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
            if ( !this )
              goto LABEL_230;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
            if ( !this )
              goto LABEL_230;
            FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
            if ( !this )
              goto LABEL_230;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            v283 = 0;
LABEL_634:
            classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v16 )
                goto LABEL_663;
              v286 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
              v285 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v345.fields.currentCryptoKey = v286;
              *(_QWORD *)&v345.fields.fakeValue = v285;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v345, 0LL) < 1
                || (v283 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v16, 0LL)
                || v7->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_663;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
                goto LABEL_663;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)this->fields.rangeSprite;
              if ( !this )
                goto LABEL_230;
              item = (FollowerSelectItemListViewItem_o *)FollowerRootComponent_TypeInfo;
              methodPtr_low = LOBYTE(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
                || (FollowerRootComponent_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerRootComponent_TypeInfo )
              {
                v328 = (FollowerSelectItemListViewItemDraw_o *)sub_1B88ACC(this);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v328, v329, v330);
                return;
              }
              typeTextSprite = this->fields.typeTextSprite;
              if ( !typeTextSprite )
                goto LABEL_663;
              v289 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
              if ( !v289 )
                goto LABEL_663;
              m_CancellationTokenSource = (int32_t)typeTextSprite->fields.m_CancellationTokenSource;
              if ( !m_CancellationTokenSource )
                goto LABEL_663;
              v291 = v289;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !this )
                goto LABEL_230;
              v292 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v291, m_CancellationTokenSource, 0LL);
              if ( v292 )
              {
                v293 = v292;
                this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !this )
                  goto LABEL_230;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
                v296 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
                v295 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
                v297 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v346.fields.currentCryptoKey = v296;
                *(_QWORD *)&v346.fields.fakeValue = v295;
                this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v346,
                                                                 0LL);
                if ( !v297 )
                  goto LABEL_230;
                this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 v297,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_230;
                v298 = this;
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
                if ( !this )
                  goto LABEL_230;
                ServantClassCompatibilityIconComponent__SetIcon(
                  (ServantClassCompatibilityIconComponent_o *)this,
                  (int32_t)v298->fields.svtNameRangeLabel,
                  v293->fields.classIds,
                  2,
                  0LL);
              }
              else
              {
LABEL_663:
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
                if ( !this )
                  goto LABEL_230;
                ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)this, 0LL);
              }
            }
            recommendedIcon = (UnityEngine_Object_o *)v8->fields.recommendedIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(recommendedIcon, 0LL, 0LL) )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedIcon;
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_230;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
            }
            recommendedIconText = (UnityEngine_Object_o *)v8->fields.recommendedIconText;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
            {
              v301 = v8->fields.recommendedIconText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_6427/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                               0LL);
              if ( !v301 )
                goto LABEL_230;
              UILabel__set_text(v301, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedIconText;
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_230;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
            }
            numberOfUsabletimes = (UnityEngine_Object_o *)v8->fields.numberOfUsabletimes;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
              goto LABEL_699;
            questRestrictionInfo = v7->fields.questRestrictionInfo;
            if ( questRestrictionInfo )
            {
              eventId = questRestrictionInfo->fields.eventId;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
              entity = 0LL;
              if ( !this )
                goto LABEL_230;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                      &entity,
                      questRestrictionInfo->fields.eventId,
                      (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                goto LABEL_692;
              v305 = entity;
              if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              if ( TitleInfoControl__IsEnableEventShopButton_37252256((EventDetailEntity_o *)v305, 0LL) )
              {
                this = (FollowerSelectItemListViewItemDraw_o *)entity;
                if ( !entity )
                  goto LABEL_230;
                LODWORD(questRestrictionInfo) = EventDetailEntity__HasFlag(
                                                  (EventDetailEntity_o *)entity,
                                                  0x1000000000LL,
                                                  0LL);
              }
              else
              {
LABEL_692:
                LODWORD(questRestrictionInfo) = 0;
              }
            }
            else
            {
              eventId = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
            if ( !this )
              goto LABEL_230;
            if ( BYTE4(this->fields.typeTextSprite) )
              goto LABEL_696;
            if ( *p_followerInfo )
            {
              type = (*p_followerInfo)->fields.type;
              if ( type != 3 )
              {
                item = 0LL;
                if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
                  goto LABEL_697;
LABEL_725:
                this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
                  v316 = *p_followerInfo ? (*p_followerInfo)->fields.userId : 0LL;
                  if ( this )
                  {
                    UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                                  (EventBoostItemUsedMaster_o *)this,
                                  eventId,
                                  v316,
                                  0LL);
                    v319 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v319 = BalanceConfig_TypeInfo;
                    }
                    MaxFriendChocolateUse = v319->static_fields->MaxFriendChocolateUse;
                    v336 = MaxFriendChocolateUse;
                    if ( UsedCount )
                    {
                      if ( !v319->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v319);
                        MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                      }
                      v336 = MaxFriendChocolateUse - UsedCount->fields.count;
                    }
                    numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_6412/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                                     0LL);
                    if ( numberOfUsabletimesPrefixLabel )
                    {
                      UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
                      numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
                      this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v336, 0LL);
                      if ( numberOfUsabletimesLabel )
                      {
                        UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
                        numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
                        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_6413/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                                         0LL);
                        if ( numberOfUsabletimesSuffixLabel )
                        {
                          UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
                          v324 = v336;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          if ( v324 )
                          {
                            v325 = LocalizationManager__Get((System_String_o *)StringLiteral_6410/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v325, &color, 0LL);
                            v326 = LocalizationManager__Get((System_String_o *)StringLiteral_6411/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v326, &v334, 0LL);
                          }
                          else
                          {
                            v327 = LocalizationManager__Get((System_String_o *)StringLiteral_6414/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v327, &color, 0LL);
                            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                            if ( !this )
                              goto LABEL_230;
                            UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                            v334 = color;
                          }
                          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
                          if ( this )
                          {
                            UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                            if ( this )
                            {
                              UIWidget__set_color((UIWidget_o *)this, v334, 0LL);
                              item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
                              goto LABEL_697;
                            }
                          }
                        }
                      }
                    }
                  }
                }
LABEL_230:
                sub_1B8880C(this, item);
              }
            }
            else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
            {
              goto LABEL_725;
            }
LABEL_696:
            item = 0LL;
LABEL_697:
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimes;
            if ( !this )
              goto LABEL_230;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
LABEL_699:
            recommendedUser = (UnityEngine_Object_o *)v8->fields.recommendedUser;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedUser;
              if ( !this )
                goto LABEL_230;
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)this,
                v7->fields._isRecommendedUser_k__BackingField,
                0LL);
            }
            return;
          }
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
          if ( !this )
            goto LABEL_230;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
          if ( !this )
            goto LABEL_230;
          FlashingIconComponent__SetFast((FlashingIconComponent_o *)this, 0LL);
          warningMessageLabel = v8->fields.warningMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_6426/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                           0LL);
          if ( !warningMessageLabel )
            goto LABEL_230;
          UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_230;
          LODWORD(v309) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_230;
          v310 = v309;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v311 = this;
          warningMessageWidth = (float)v8->fields.warningMessageWidth;
          if ( v310 <= warningMessageWidth )
          {
            if ( !byte_4A55CE6 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE6 = 1;
            }
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            x = static_fields->oneVector.fields.x;
            y = static_fields->oneVector.fields.y;
            z = static_fields->oneVector.fields.z;
          }
          else
          {
            x = warningMessageWidth / v310;
            z = 1.0;
            y = 1.0;
          }
          if ( !v311 )
            goto LABEL_230;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v311, *(UnityEngine_Vector3_o *)&x, 0LL);
        }
        v283 = 1;
        goto LABEL_634;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
LABEL_243:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      goto LABEL_615;
    }
    v24 = v7->fields.followerInfo;
    if ( !v24 )
      goto LABEL_230;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_230;
    v332 = v20;
    ServantFaceIconComponent__Set_38133256(
      (ServantFaceIconComponent_o *)this,
      v16,
      v7->fields.iconLabelInfo1,
      v7->fields.iconLabelInfo2,
      0,
      v24->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v25);
    FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v26);
    FollowerSelectItemListViewItem__GetNpInfo(v7, &tdInfo, v27);
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(v7, v28);
    if ( !tdInfo )
      goto LABEL_230;
    v331 = (int)this;
    name = tdInfo->fields.name;
    v30 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    if ( ServantLeaderInfo__IsNpc(v16, 0LL) )
    {
      dispLimitCount = v16->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v16->fields.npcFlag, 0LL) )
      {
        v32 = tdInfo;
        v34 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v340.fields.currentCryptoKey = v34;
        *(_QWORD *)&v340.fields.fakeValue = v33;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                         v340,
                                                         0LL);
        if ( !v32 )
          goto LABEL_230;
        name = TreasureDvcInfo__GetName(v32, (int32_t)this, 0LL);
      }
      v35 = !NpcServantFollowerEntity__IsHideRarity(v16->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v16, 0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_230;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           (ServantLimitSpoilerProtectionMaster_o *)this,
                           v16->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v35 = 1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_230;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v35, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_230;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)this,
      !v7->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v16, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v41 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
      v43 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v341.fields.currentCryptoKey = v41;
      *(_QWORD *)&v341.fields.fakeValue = v42;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                       v341,
                                                       0LL);
      if ( !v43 )
        goto LABEL_230;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v43, (int32_t)this, dispLimitCount, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v44 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v45 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
    v46 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
    v47 = (ServantLimitAddMaster_o *)v44;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v342.fields.currentCryptoKey = v45;
    *(_QWORD *)&v342.fields.fakeValue = v46;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                     v342,
                                                     0LL);
    if ( !tdInfo || !v47 )
      goto LABEL_230;
    p_followerInfo = &v7->fields.followerInfo;
    this = (FollowerSelectItemListViewItemDraw_o *)ServantLimitAddMaster__GetOverwriteTDName(
                                                     v47,
                                                     (int32_t)this,
                                                     dispLimitCount,
                                                     name,
                                                     tdInfo->fields.lv,
                                                     0LL);
    v48 = v7->fields.followerInfo;
    if ( v48 )
    {
      v49 = (Il2CppObject *)this;
      switch ( v48->fields.type )
      {
        case 1:
          v66 = v8->fields.playerNameLabel;
          if ( (byte_4A56455 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_19052/*"error"*/);
            byte_4A56455 = 1;
            v48 = *p_followerInfo;
          }
          if ( !v66 )
            goto LABEL_230;
          v67 = v48 ? &v48->fields.userName : (System_String_o **)&StringLiteral_19052/*"error"*/;
          UILabel__set_text(v66, *v67, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v68 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38235604((UIIconLabel_o *)this, 2, v68, 0, 0, 0LL, 0, 0, 0, 0LL);
          v104 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v105 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v106 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v113 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v106, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v105, v113, 0LL);
          if ( !v104 )
            goto LABEL_230;
          UILabel__set_text(v104, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20153/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v114 = v7->fields.questRestrictionInfo;
          if ( !v114 )
            goto LABEL_271;
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           v114->fields.questId,
                                                           (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_230;
          LOBYTE(v114) = QuestEntity__HasFlag_39473080((QuestEntity_o *)this, 0x8000000LL, v114->fields.questPhase, 0LL);
LABEL_271:
          IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
          v116 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v116 = BalanceConfig_TypeInfo;
          }
          v117 = 212LL;
          if ( ((unsigned __int8)v114 & 1) != 0 )
            v117 = 664LL;
          if ( IsRecommendFollower_k__BackingField )
            v117 = 224LL;
          v118 = v116->static_fields;
          v119 = (System_String_o **)&StringLiteral_9322/*"NP_COLOR_NAME"*/;
          v120 = LocalizationManager_TypeInfo;
          if ( v331 > 1 )
            v119 = (System_String_o **)&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/;
LABEL_298:
          FollowerPointNpc = *(int32_t *)((char *)&v118->CriticalRateToAddByQuickFirstBonus + v117);
          v129 = *v119;
          if ( !v120->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v120);
          v130 = LocalizationManager__Get(v129, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v130, v49, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_230;
          v30 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)this,
            !v7->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_230;
          v65 = 1;
LABEL_304:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v65, 0LL);
          break;
        case 2:
          v69 = v8->fields.playerNameLabel;
          if ( (byte_4A56455 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_19052/*"error"*/);
            byte_4A56455 = 1;
            v48 = *p_followerInfo;
          }
          if ( !v69 )
            goto LABEL_230;
          v70 = v48 ? &v48->fields.userName : (System_String_o **)&StringLiteral_19052/*"error"*/;
          UILabel__set_text(v69, *v70, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v71 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38235604((UIIconLabel_o *)this, 2, v71, 0, 0, 0LL, 0, 0, 0, 0LL);
          v107 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v108 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v109 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v121 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v109, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v108, v121, 0LL);
          if ( !v107 )
            goto LABEL_230;
          UILabel__set_text(v107, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          v122 = v7->fields._IsRecommendFollower_k__BackingField;
          v123 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v123 = BalanceConfig_TypeInfo;
          }
          v118 = v123->static_fields;
          v124 = !v122;
          v117 = 224LL;
          v125 = 216LL;
          goto LABEL_293;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_230;
          v50 = StringLiteral_20348/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
          if ( !this )
            goto LABEL_230;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20190/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v51 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v51 = BalanceConfig_TypeInfo;
          }
          v332 = (System_String_o *)v50;
          FollowerPointNpc = v51->static_fields->FollowerPointNpc;
          if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
          {
            v53 = (System_String_o **)&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/;
            if ( v331 <= 1 )
              v53 = (System_String_o **)&StringLiteral_9322/*"NP_COLOR_NAME"*/;
            v54 = *v53;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v55 = LocalizationManager__Get(v54, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9323/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            v49 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NP_HIDE_NAME"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v55, v49, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_230;
          v30 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_230;
          v65 = 0;
          goto LABEL_304;
        case 5:
          v72 = v8->fields.playerNameLabel;
          if ( (byte_4A56455 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_19052/*"error"*/);
            byte_4A56455 = 1;
            v48 = *p_followerInfo;
          }
          if ( !v72 )
            goto LABEL_230;
          v73 = v48 ? &v48->fields.userName : (System_String_o **)&StringLiteral_19052/*"error"*/;
          UILabel__set_text(v72, *v73, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v74 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38235604((UIIconLabel_o *)this, 2, v74, 0, 0, 0LL, 0, 0, 0, 0LL);
          v110 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v112 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v126 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v112, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v111, v126, 0LL);
          if ( !v110 )
            goto LABEL_230;
          UILabel__set_text(v110, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20152/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v127 = v7->fields._IsRecommendFollower_k__BackingField;
          v128 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v128 = BalanceConfig_TypeInfo;
          }
          v118 = v128->static_fields;
          v124 = !v127;
          v117 = 224LL;
          v125 = 664LL;
LABEL_293:
          if ( v124 )
            v117 = v125;
          v120 = LocalizationManager_TypeInfo;
          if ( v331 <= 1 )
            v119 = (System_String_o **)&StringLiteral_9322/*"NP_COLOR_NAME"*/;
          else
            v119 = (System_String_o **)&StringLiteral_9328/*"NP_MAX_COLOR_NAME"*/;
          goto LABEL_298;
        default:
          goto LABEL_102;
      }
    }
    else
    {
LABEL_102:
      FollowerPointNpc = 0;
    }
    IsHideSupport = ServantLeaderInfo__IsHideSupport(v16, 0LL);
    v133 = v8->fields.svtNameRangeLabel;
    if ( IsHideSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11618/*"SERVANT_HIDE_NAME"*/,
                                                       0LL);
      if ( !v133 )
        goto LABEL_230;
      UIRangeLabel__Set(v133, (System_String_o *)this, 0LL, 1, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_230;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !*p_followerInfo || (*p_followerInfo)->fields.type != 4 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9325/*"NP_HIDE_NAME_LEVEL"*/,
                                                         0LL);
        v30 = this;
      }
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v7, v132);
      if ( !v133 )
        goto LABEL_230;
      UIRangeLabel__Set(v133, (System_String_o *)this, 0LL, 1, 0, 0LL);
    }
    if ( !tdInfo )
      goto LABEL_230;
    strengthStatus = tdInfo->fields.strengthStatus;
    if ( ServantLeaderInfo__IsHideSupport(v16, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v16, 0LL) )
      strengthStatus = 0;
    v135 = v8->fields.svtNpRangeLabel;
    this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
    if ( !v135 )
      goto LABEL_230;
    UIRangeLabel__Set(v135, (System_String_o *)v30, (System_String_o *)this, 0, 0, 0LL);
    v136 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v136, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v16, 0LL);
      v138 = v8->fields.svtNpCommandCard;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v138 )
          goto LABEL_230;
        ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
      }
      else
      {
        if ( !v138 )
          goto LABEL_230;
        ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
      }
    }
    FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(v7, v137);
    friendPointCampaignEntity = v7->fields.friendPointCampaignEntity;
    v141 = FriendPointUpVal;
    v142 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
    if ( !this )
      goto LABEL_230;
    UIIconLabel__Set_38235604((UIIconLabel_o *)this, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
    if ( v141 > 0 || v142 >= 1 )
    {
      if ( v142 <= 0 )
        v144 = 1000;
      else
        v144 = v142;
      v145 = 274877907LL * (v144 * v141 + (v144 - 1000) * FollowerPointNpc);
      friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      v147 = (v145 >> 38) + ((unsigned __int64)v145 >> 63);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v148 = LocalizationManager__Get((System_String_o *)StringLiteral_6433/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
      TimesToRestart_k__BackingField = v147;
      v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v149, v150, v151);
      this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v148, v152, 0LL);
      if ( !friendPointData2Label )
        goto LABEL_230;
      v143 = this;
      this = friendPointData2Label;
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_230;
      v143 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v143, 0LL);
    campaignLabel = v8->fields.campaignLabel;
    if ( v7->fields.friendPointCampaignEntity )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
      if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
      }
      if ( !campaignLabel )
        goto LABEL_230;
      UILabel__set_gradientTop(campaignLabel, (UnityEngine_Color_o)this->fields.skillButtonList->obj, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
      if ( !this )
        goto LABEL_230;
      UILabel__set_gradientBottom(
        (UILabel_o *)this,
        FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
        0LL);
      campaignLabel = v8->fields.campaignLabel;
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignName(
                                                       v7,
                                                       v154);
      if ( !campaignLabel )
        goto LABEL_230;
      v155 = this;
    }
    else
    {
      if ( !campaignLabel )
        goto LABEL_230;
      v155 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(campaignLabel, (System_String_o *)v155, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
    if ( !this )
      goto LABEL_230;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_230;
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
    v157 = activeSelf ? -3.0 : 39.0;
    if ( !this )
      goto LABEL_230;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_230;
    v158 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
    v159 = v158 ? -22.0 : 20.0;
    if ( !this )
      goto LABEL_230;
    v160 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v160, v157, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
    if ( !this )
      goto LABEL_230;
    v161 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v161, v159, 0LL);
    v162 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v162, 0LL, 0LL) )
    {
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v7, v163) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v165);
        if ( !this )
          goto LABEL_230;
        baseButton = this->fields.baseButton;
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v343.fields.currentCryptoKey = baseButton;
        *(_QWORD *)&v343.fields.fakeValue = servantFaceIcon;
        v168 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v343, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v169);
        if ( !this )
          goto LABEL_230;
        Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
      }
      else
      {
        Rarity = -1;
        v168 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v165);
      if ( !this )
        goto LABEL_230;
      if ( this->fields.typeTextSprite )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                         v7,
                                                         (const MethodInfo *)item);
        if ( !this )
          goto LABEL_230;
        v171 = this->fields.typeTextSprite;
        if ( !v171 )
          goto LABEL_230;
        topAnchor = v171->fields.topAnchor;
        v172 = *(_QWORD *)&v171->fields.updateAnchors;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v344.fields.currentCryptoKey = topAnchor;
        *(_QWORD *)&v344.fields.fakeValue = v172;
        v174 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v344, 0LL);
      }
      else
      {
        v174 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
      if ( !this )
        goto LABEL_230;
      EventUpValIconComponent__Set(
        (EventUpValIconComponent_o *)this,
        v7->fields.eventUpValItemList,
        v168,
        Rarity,
        v174,
        0LL);
    }
    p_skillInfoList = &v8->fields.skillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                     v7,
                                                     &v8->fields.skillInfoList,
                                                     v164);
    v177 = v8->fields.skillIconList;
    if ( !v177 )
      goto LABEL_230;
    v178 = *(_QWORD *)&v177->max_length;
    if ( v178 << 32 >= 1 )
    {
      v179 = *p_skillInfoList;
      v180 = 0;
      v181 = 0LL;
      while ( v179 )
      {
        max_length = v179->max_length;
        if ( (__int64)v181 < (int)max_length )
        {
          if ( v181 >= max_length )
            goto LABEL_762;
          v183 = (*p_skillInfoList)->m_Items[v181];
          if ( v183 && v183->fields.id >= 1 )
            v180 = v181 + 1;
        }
        if ( (__int64)++v181 >= (int)v178 )
          goto LABEL_398;
      }
      goto LABEL_230;
    }
    v180 = 0;
LABEL_398:
    if ( (int)v178 >= 1 )
    {
      v184 = v180;
      v185 = 4LL;
      do
      {
        v186 = v185 - 4;
        if ( v185 - 4 >= v184 )
        {
          v192 = v8->fields.skillBaseList;
          if ( !v192 )
            goto LABEL_230;
          if ( v186 >= v192->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v192->obj.klass + v185);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v187 = *p_skillInfoList;
          if ( !*p_skillInfoList )
            goto LABEL_230;
          if ( v186 >= v187->max_length )
            goto LABEL_762;
          v188 = v8->fields.skillBaseList;
          if ( !v188 )
            goto LABEL_230;
          if ( v186 >= v188->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v188->obj.klass + v185);
          if ( !this )
            goto LABEL_230;
          v189 = (int32_t *)*((_QWORD *)&v187->obj.klass + v185);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v16, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v189 )
              v189[4] = 0;
            v190 = v8->fields.skillIconList;
            if ( !v190 )
              goto LABEL_230;
            if ( v186 >= v190->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v190->obj.klass + v185);
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_230;
            if ( v186 >= skillLevelIconLabelList->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v185);
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v193 = v8->fields.skillIconList;
            if ( !v193 )
              goto LABEL_230;
            if ( v186 >= v193->max_length )
              goto LABEL_762;
            if ( !v189 )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v193->obj.klass + v185);
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__Set_38234800((SkillIconComponent_o *)this, v189[4], v189[5], v189[12], v189[13], 0LL);
            v194 = v8->fields.skillLevelIconLabelList;
            if ( !v194 )
              goto LABEL_230;
            if ( v186 >= v194->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v194->obj.klass + v185);
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38235604((UIIconLabel_o *)this, 48, v189[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v195 = v8->fields.skillIconList;
        if ( !v195 )
          goto LABEL_230;
        v196 = v185 - 3;
        ++v185;
      }
      while ( v196 < (int)v195->max_length );
    }
    v197 = v8->fields.displaySkill;
    if ( v197 == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_230;
      item = (FollowerSelectItemListViewItem_o *)v8->fields.skillInfoUiWidget;
      v199 = *(_QWORD *)&this->fields.m_CachedPtr;
      v200 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v199 )
        goto LABEL_230;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v199 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
      }
      else
      {
        v202 = v199 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v202 + 32) = item;
        sub_1B88554(v202 + 32, item);
      }
    }
    else
    {
      if ( v197 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v198 = 0;
      }
      else
      {
        if ( v197 )
          goto LABEL_447;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          1.0);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v198 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v198, 0LL);
    }
LABEL_447:
    p_appendSkillInfoList = &v8->fields.appendSkillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                     v7,
                                                     &v8->fields.appendSkillInfoList,
                                                     v7->fields.isNpc,
                                                     v176);
    v204 = v8->fields.appendSkillIconList;
    if ( !v204 )
      goto LABEL_230;
    v205 = *(_QWORD *)&v204->max_length;
    if ( v205 << 32 < 1 )
    {
      v207 = 0;
    }
    else
    {
      v206 = *p_appendSkillInfoList;
      v207 = 0;
      v208 = 0LL;
      do
      {
        if ( v206 )
        {
          v209 = v206->max_length;
          if ( v208 < (int)v209 )
          {
            if ( v208 >= v209 )
              goto LABEL_762;
            v210 = (*p_appendSkillInfoList)->m_Items[v208];
            if ( v210 && v210->fields.id >= 1 )
              v207 = v208 + 1;
          }
        }
        ++v208;
      }
      while ( v208 < (int)v205 );
    }
    if ( (int)v205 >= 1 )
    {
      v211 = 0LL;
      v212 = v207;
      do
      {
        if ( (__int64)v211 >= v212 )
        {
          v221 = v8->fields.appendSkillBaseList;
          if ( !v221 )
            goto LABEL_230;
          if ( v211 >= v221->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)v221->m_Items[v211];
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v213 = *p_appendSkillInfoList;
          if ( !*p_appendSkillInfoList )
            goto LABEL_230;
          if ( v211 >= v213->max_length )
            goto LABEL_762;
          v214 = v8->fields.appendSkillBaseList;
          if ( !v214 )
            goto LABEL_230;
          if ( v211 >= v214->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)v214->m_Items[v211];
          if ( !this )
            goto LABEL_230;
          v215 = (int32_t *)v213->m_Items[v211];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          if ( ConstantMaster__IsFLAG20240804(0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
            }
            skillButtonList = this->fields.skillButtonList;
            v217 = HIDWORD(skillButtonList->m_Items[143]);
            if ( v211 )
              v217 += LODWORD(skillButtonList->m_Items[144]) * v211;
            v218 = v8->fields.appendSkillBaseList;
            if ( !v218 )
              goto LABEL_230;
            if ( v211 >= v218->max_length )
              goto LABEL_762;
            GameObjectExtensions__SetLocalPositionX(v218->m_Items[v211], (float)v217, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v16, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v215 )
              v215[4] = 0;
            v219 = v8->fields.appendSkillIconList;
            if ( !v219 )
              goto LABEL_230;
            if ( v211 >= v219->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)v219->m_Items[v211];
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
            if ( !appendSkillLevelIconLabelList )
              goto LABEL_230;
            if ( v211 >= appendSkillLevelIconLabelList->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v211];
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v222 = v8->fields.appendSkillIconList;
            if ( !v222 )
              goto LABEL_230;
            if ( v211 >= v222->max_length )
              goto LABEL_762;
            if ( !v215 )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)v222->m_Items[v211];
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__Set_38234800((SkillIconComponent_o *)this, v215[4], v215[5], v215[12], v215[13], 0LL);
            v223 = v8->fields.appendSkillLevelIconLabelList;
            if ( !v223 )
              goto LABEL_230;
            if ( v211 >= v223->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)v223->m_Items[v211];
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38235604((UIIconLabel_o *)this, 48, v215[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v224 = v8->fields.appendSkillIconList;
        if ( !v224 )
          goto LABEL_230;
        ++v211;
      }
      while ( (__int64)v211 < (int)v224->max_length );
    }
    v225 = v8->fields.displaySkill;
    if ( v225 == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      v20 = v332;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_230;
      item = (FollowerSelectItemListViewItem_o *)v8->fields.appendSkillInfoUiWidget;
      v227 = *(_QWORD *)&this->fields.m_CachedPtr;
      v228 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v227 )
        goto LABEL_230;
      v229 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v229 >= *(_DWORD *)(v227 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
      }
      else
      {
        v230 = v227 + 8 * v229;
        LODWORD(this->fields.m_CancellationTokenSource) = v229 + 1;
        *(_QWORD *)(v230 + 32) = item;
        sub_1B88554(v230 + 32, item);
      }
    }
    else
    {
      v20 = v332;
      if ( v225 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          1.0);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v226 = 1;
      }
      else
      {
        if ( v225 )
          goto LABEL_520;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v226 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v226, 0LL);
    }
    if ( v8->fields.displaySkill == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_230;
      switchSkillInfo = v8->fields.switchSkillInfo;
      this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)this,
                                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !switchSkillInfo )
        goto LABEL_230;
      SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
    }
LABEL_520:
    v232 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v232, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v16, 0LL);
      v233 = v8->fields.svtCommandCardList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v233 )
          goto LABEL_230;
        ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
      }
      else
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, (const MethodInfo *)item);
        commandCardParam = v16->fields.commandCardParam;
        v236 = SvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v16, 0LL);
        if ( !v233 )
          goto LABEL_230;
        ServantCommandCardListComponent__Set_38135136(
          v233,
          v236,
          commandCardParam,
          (System_Int32_array *)this,
          2,
          1,
          0LL);
        v20 = v332;
      }
    }
    v237 = (UnityEngine_Object_o *)v8->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v237, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*p_followerInfo )
        goto LABEL_230;
      pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
      v239 = pushUserSvtId && pushUserSvtId == v16->fields.userSvtId;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v239, 0LL);
    }
    v240 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v240, 0LL, 0LL) )
    {
      v241 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v241, 0LL, 0LL) )
      {
        if ( v7->fields._IsDataLost_k__BackingField )
        {
          v242 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(v242, (System_String_o *)StringLiteral_18477/*"datalost_svt_select"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          v347.fields.r = 1.0;
          v347.fields.g = 1.0;
          v347.fields.b = 1.0;
          v347.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v347, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
        }
        else
        {
          if ( v7->fields._TimesToRestart_k__BackingField < 1 )
            goto LABEL_565;
          v243 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v243, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20306/*"img_frames_mask01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          v348.fields.a = 0.62353;
          v348.fields.r = 0.0;
          v348.fields.g = 0.0;
          v348.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v348, 0LL);
          v244 = v8->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v245 = LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
          v249 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v246, v247, v248);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v245, v249, 0LL);
          if ( !v244 )
            goto LABEL_230;
          UILabel__set_text(v244, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !this )
            goto LABEL_230;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
    }
LABEL_565:
    openClassBoardNumLabel = (UnityEngine_Object_o *)v8->fields.openClassBoardNumLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
    {
      if ( (v7->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0
        || !v7->fields._IsReleasedClassBoard_k__BackingField )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
        if ( !this )
          goto LABEL_230;
        v257 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
          v254 = (Il2CppObject **)&StringLiteral_6365/*"FFFF00"*/;
        else
          v254 = (Il2CppObject **)&StringLiteral_6366/*"FFFFFF"*/;
        v255 = *v254;
        TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
        v256 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v251, v252, v253);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_61721404(
                                                         (System_String_o *)StringLiteral_16027/*"[{0}]+{1}[-]"*/,
                                                         v255,
                                                         v256,
                                                         0LL);
        if ( !v8->fields.openClassBoardNumLabel )
          goto LABEL_230;
        v257 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
      }
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v257, 0LL);
    }
    classBoardOpenButton = (UnityEngine_Object_o *)v8->fields.classBoardOpenButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
      goto LABEL_615;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
    if ( !this )
      goto LABEL_230;
    IsReleasedClassBoard_k__BackingField = v7->fields._IsReleasedClassBoard_k__BackingField;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_230;
    if ( IsReleasedClassBoard_k__BackingField )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
      if ( !this )
        goto LABEL_230;
      UICommonButton__SetButtonEnable(
        (UICommonButton_o *)this,
        v7->fields._OpenClassBoardNum_k__BackingField >= 0,
        1,
        0LL);
      classBoardOpenButtonLabel = (UnityEngine_Object_o *)v8->fields.classBoardOpenButtonLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(classBoardOpenButtonLabel, 0LL, 0LL) )
      {
        OpenClassBoardNum_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
        v262 = v8->fields.classBoardOpenButtonLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12383/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                           0LL);
          if ( !v262 )
            goto LABEL_230;
          UILabel__set_text(v262, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_230;
          v263 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v264 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v264 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v265 = 36LL;
        }
        else
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12382/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                           0LL);
          if ( !v262 )
            goto LABEL_230;
          UILabel__set_text(v262, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_230;
          v263 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v264 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v264 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v265 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v263,
          *(float *)((char *)&v264->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v265),
          0LL);
      }
      if ( ConstantMaster__IsFLAG20240804(0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
        if ( !this )
          goto LABEL_230;
        v266 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v267 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v267 = BalanceConfig_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition_33724016(v266, v267->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
        classBoardBackSprite = v8->fields.classBoardBackSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17485/*"btn_bg_29_2"*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
        if ( !this )
          goto LABEL_230;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
        if ( !this )
          goto LABEL_230;
        v269 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v270 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
          v270 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition_33724016(v269, v270->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
        if ( !this )
          goto LABEL_230;
        v271 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(
          v271,
          BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
          0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
        if ( !this )
          goto LABEL_230;
        v272 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v272,
          (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
          0LL);
      }
      goto LABEL_615;
    }
    goto LABEL_243;
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

  if ( (byte_4A5645F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5645F = 1;
  }
  if ( item )
    LOBYTE(item) = item->fields.isLockUser;
  lockMarkSprite = (UnityEngine_Object_o *)this->fields.lockMarkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockMarkSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockMarkSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v6);
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
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v7; // x8
  struct System_Int32_array *adviceMessageIds; // x8
  struct FollowerInfo_o *v9; // x8
  struct UserRecommendSupportInfo_array *v10; // x8
  UserRecommendSupportInfo_o *v11; // x8
  System_String_array *ConvertMessageToId; // x0
  System_String_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *message; // x1
  UnityEngine_GameObject_o *v16; // x0
  int v17; // w8
  UnityEngine_GameObject_o *v18; // x0
  bool v19; // w1
  UnityEngine_GameObject_o *v20; // x0
  struct FollowerInfo_o *v21; // x8
  UnityEngine_GameObject_o *v22; // x0

  v4 = this;
  if ( (byte_4A5645E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B885B0(&StringLiteral_117/*" "*/);
    byte_4A5645E = 1;
  }
  if ( !item )
    goto LABEL_52;
  followerInfo = item->fields.followerInfo;
  if ( item->fields._IsRecommendFollower_k__BackingField )
  {
    if ( !followerInfo )
      goto LABEL_52;
    userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
    if ( !userRecommendSupportHash )
      goto LABEL_52;
    if ( userRecommendSupportHash->max_length )
    {
      v7 = userRecommendSupportHash->m_Items[0];
      if ( !v7 )
        goto LABEL_52;
      adviceMessageIds = v7->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_52;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_44;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v9 = item->fields.followerInfo;
      if ( !v9 )
        goto LABEL_52;
      v10 = v9->fields.userRecommendSupportHash;
      if ( !v10 )
        goto LABEL_52;
      if ( v10->max_length )
      {
        v11 = v10->m_Items[0];
        if ( !v11 || !this )
          goto LABEL_52;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v11->fields.adviceMessageIds,
                               0LL);
        v13 = System_String__Join((System_String_o *)StringLiteral_117/*" "*/, ConvertMessageToId, 0LL);
        if ( !System_String__IsNullOrEmpty(v13, 0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
          if ( !this )
            goto LABEL_52;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
          if ( !this )
            goto LABEL_52;
          message = v13;
          goto LABEL_22;
        }
LABEL_44:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( this )
        {
          v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v22, -19.0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
          if ( this )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
              if ( this )
              {
                v19 = 1;
LABEL_49:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, 10.0, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
                if ( this )
                {
                  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  v17 = 1113849856;
                  goto LABEL_51;
                }
              }
            }
          }
        }
LABEL_52:
        sub_1B8880C(this, item);
      }
    }
    sub_1B88814(this, item);
  }
  if ( followerInfo )
  {
    switch ( followerInfo->fields.type )
    {
      case 1:
        if ( System_String__IsNullOrEmpty(followerInfo->fields.message, 0LL) )
          goto LABEL_44;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
          goto LABEL_44;
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_52;
        v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v20, -19.0, 0LL);
        v21 = item->fields.followerInfo;
        if ( !v21 )
          goto LABEL_52;
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_52;
        message = v21->fields.message;
        break;
      case 2:
      case 5:
        goto LABEL_44;
      case 3:
      case 4:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_52;
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v18, -16.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_52;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_52;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( !this )
          goto LABEL_52;
        v19 = 0;
        goto LABEL_49;
      default:
        return;
    }
LABEL_22:
    UILabel__set_text((UILabel_o *)this, message, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
    if ( this )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -1.0, 0LL);
          GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, -1.0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
          if ( this )
          {
            v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v17 = 1112801280;
LABEL_51:
            GameObjectExtensions__SetLocalPositionY(v16, *(float *)&v17, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
}