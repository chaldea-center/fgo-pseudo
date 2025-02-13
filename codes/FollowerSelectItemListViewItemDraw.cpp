void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_c *v1; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4BD75C0 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewItemDraw_TypeInfo);
    byte_4BD75C0 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BFDC90;
  v1 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BFDF90;
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

  if ( (byte_4BD75BF & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&UnityEngine_GameObject___TypeInfo);
    sub_1C21E38(&SkillIconComponent___TypeInfo);
    sub_1C21E38(&UIIconLabel___TypeInfo);
    byte_4BD75BF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C21DDC(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1C21DDC(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1C21EE0(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1C21DDC(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1C21EE0(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1C21DDC(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1C21EE0(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1C21DDC(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1C21EE0(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1C21DDC(&this->fields.appendSkillLevelIconLabelList, v9);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__Awake(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UISprite_o *skillIconSprite; // x20

  if ( (byte_4BD75B9 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C21E38(&StringLiteral_20533/*"icon_skill_mini"*/);
    sub_1C21E38(&StringLiteral_20684/*"img_friend_skill"*/);
    sub_1C21E38(&StringLiteral_20432/*"icon_append_mini"*/);
    sub_1C21E38(&StringLiteral_20683/*"img_friend_appendskill"*/);
    byte_4BD75B9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C21DDC(&this->fields.switchSkillUIList, v3);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20533/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20684/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20432/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20683/*"img_friend_appendskill"*/, 0LL);
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
  if ( (byte_4BD75BE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD75BE = 1;
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
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
  if ( ServantLeader )
  {
    v13 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v13;
    *(_QWORD *)&v25.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v25, 0LL) > 0;
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
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = v16 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = *(_QWORD *)&displaySkill;
        sub_1C21DDC(v19 + 32, *(_QWORD *)&displaySkill);
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
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * v22;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v22 + 1;
        *(_QWORD *)(v23 + 32) = *(_QWORD *)&displaySkill;
        sub_1C21DDC(v23 + 32, *(_QWORD *)&displaySkill);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v24 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v24 )
      {
        SwitchUIWidgetComponent__Set(v24, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1C22094(switchSkillInfo, *(_QWORD *)&displaySkill);
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

  if ( (byte_4BD75BD & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD75BD = 1;
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
          sub_1C2209C(supportInfoButton, v9);
        v13 = &skillButtonList->obj.klass + (int)v12;
        v14 = (UnityEngine_Behaviour_o *)v13[4];
        if ( !v14 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v13[4],
                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_1C22094(supportInfoButton, v9);
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
  ServantLeaderInfo_o *v15; // x21
  int32_t Kind_38931480; // w28
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  System_String_o *v19; // x29
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v21; // x24
  __int64 v22; // x25
  struct FollowerInfo_o *v23; // x8
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  int v26; // w24
  System_String_o *name; // x26
  FollowerSelectItemListViewItemDraw_o *v28; // x27
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v30; // x26
  __int64 v31; // x28
  __int64 v32; // x29
  bool v33; // w8
  UIRangeLabel_o *v34; // x24
  const MethodInfo *v35; // x2
  bool v36; // w1
  Il2CppObject *Master_object; // x0
  __int64 v38; // x23
  __int64 v39; // x29
  ServantLimitImageMaster_o *v40; // x28
  Il2CppObject *v41; // x0
  __int64 v42; // x23
  __int64 v43; // x29
  ServantLimitAddMaster_o *v44; // x28
  Il2CppObject *OverwriteTDName; // x25
  int32_t FollowerPointNpc; // w26
  UILabel_o *v47; // x24
  UIIconLabel_o *v48; // x24
  UILabel_o *v49; // x24
  System_String_o *v50; // x23
  int64_t v51; // x0
  Il2CppObject *v52; // x0
  __int64 *v53; // x8
  UILabel_o *v54; // x24
  UIIconLabel_o *v55; // x24
  UILabel_o *v56; // x24
  System_String_o *v57; // x23
  int64_t v58; // x0
  Il2CppObject *v59; // x0
  UILabel_o *v60; // x24
  UIIconLabel_o *v61; // x24
  UILabel_o *v62; // x24
  System_String_o *v63; // x23
  int64_t v64; // x0
  Il2CppObject *v65; // x0
  const MethodInfo *v66; // x2
  UIRangeLabel_o *v67; // x24
  UnityEngine_Object_o *v68; // x23
  UnityEngine_Object_o *v69; // x23
  struct SkillIconComponent_array *v70; // x8
  __int64 v71; // x0
  struct SkillIconComponent_array *v72; // x8
  __int64 v73; // x23
  struct UnityEngine_GameObject_array *v74; // x8
  struct SkillIconComponent_array *v75; // x8
  __int64 v76; // x0
  struct SkillIconComponent_array *v77; // x8
  __int64 v78; // x22
  struct UnityEngine_GameObject_array *v79; // x8
  UnityEngine_Object_o *v80; // x23
  UnityEngine_Object_o *v81; // x23
  UILabel_o *playerNameLabel; // x26
  UIIconLabel_o *playerLevelIconLabel; // x26
  UILabel_o *loginDataLabel; // x26
  System_String_o *v85; // x23
  int64_t LoginTime; // x0
  Il2CppObject *v87; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  bool HasFlag_40740584; // w26
  UILabel_o *v90; // x26
  UIIconLabel_o *v91; // x26
  UILabel_o *v92; // x26
  System_String_o *v93; // x23
  int64_t v94; // x0
  Il2CppObject *v95; // x0
  _BOOL4 v96; // w23
  BalanceConfig_c *v97; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  bool v99; // zf
  __int64 v100; // x9
  __int64 v101; // x10
  UILabel_o *v102; // x26
  UIIconLabel_o *v103; // x26
  UILabel_o *v104; // x26
  System_String_o *v105; // x23
  int64_t v106; // x0
  Il2CppObject *v107; // x0
  _BOOL4 v108; // w23
  BalanceConfig_c *v109; // x0
  BalanceConfig_c *v110; // x0
  System_String_o **v111; // x8
  System_String_o *v112; // x23
  System_String_o *v113; // x24
  bool v114; // w1
  _BOOL4 IsRecommendFollower_k__BackingField; // w23
  BalanceConfig_c *v116; // x0
  System_String_o **v117; // x8
  System_String_o *v118; // x23
  System_String_o *v119; // x0
  bool IsHideSupport; // w0
  UIRangeLabel_o *svtNameRangeLabel; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *svtNpRangeLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x23
  struct ServantNpCommandCardComponent_o *v125; // x8
  int32_t FriendPointUpVal; // w24
  int v127; // w25
  FollowerSelectItemListViewItemDraw_o *v128; // x1
  int v129; // w8
  __int64 v130; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v132; // w22
  System_String_o *v133; // x23
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  Il2CppObject *v137; // x0
  UILabel_o *campaignLabel; // x24
  FollowerSelectItemListViewItemDraw_o *v139; // x1
  bool activeSelf; // w8
  float v141; // s8
  bool v142; // w8
  float v143; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v145; // x0
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v149; // w24
  int32_t Rarity; // w25
  struct UISprite_o *typeTextSprite; // x8
  __int64 v152; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v154; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v157; // x8
  struct SkillInfo_array *v158; // x11
  int v159; // w9
  unsigned __int64 v160; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v162; // x14
  __int64 v163; // x22
  __int64 v164; // x23
  unsigned __int64 v165; // x25
  struct SkillInfo_array *v166; // x8
  struct UnityEngine_GameObject_array *v167; // x9
  int32_t *v168; // x26
  struct SkillIconComponent_array *v169; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v172; // x8
  struct UIIconLabel_array *v173; // x8
  struct SkillIconComponent_array *v174; // x8
  __int64 v175; // x9
  int32_t v176; // w8
  bool v177; // w1
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v181; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v184; // x8
  struct SkillInfo_array *v185; // x11
  int v186; // w9
  signed __int64 v187; // x10
  unsigned __int64 v188; // x14
  SkillInfo_o *v189; // x14
  unsigned __int64 v190; // x22
  signed __int64 v191; // x23
  struct SkillInfo_array *v192; // x8
  struct UnityEngine_GameObject_array *v193; // x9
  int32_t *v194; // x26
  struct UICommonButton_array *skillButtonList; // x9
  int v196; // w8
  struct UnityEngine_GameObject_array *v197; // x9
  struct SkillIconComponent_array *v198; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v201; // x8
  struct UIIconLabel_array *v202; // x8
  struct SkillIconComponent_array *v203; // x8
  int32_t v204; // w8
  bool v205; // w1
  __int64 v206; // x8
  _QWORD *v207; // x9
  __int64 v208; // x10
  __int64 v209; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantCommandCardListComponent_o *v212; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v215; // w26
  UnityEngine_Object_o *pushSprite; // x23
  struct FollowerInfo_o *v217; // x8
  int64_t pushUserSvtId; // x8
  bool v219; // w24
  UnityEngine_Object_o *v220; // x23
  UnityEngine_Object_o *v221; // x23
  UISprite_o *v222; // x24
  UISprite_o *v223; // x23
  UILabel_o *v224; // x24
  System_String_o *v225; // x23
  __int64 v226; // x2
  __int64 v227; // x3
  __int64 v228; // x4
  Il2CppObject *v229; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v231; // x2
  __int64 v232; // x3
  __int64 v233; // x4
  Il2CppObject **v234; // x9
  Il2CppObject *v235; // x23
  Il2CppObject *v236; // x0
  FollowerSelectItemListViewItemDraw_o *v237; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w22
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w22
  UILabel_o *v242; // x24
  UnityEngine_GameObject_o *v243; // x24
  FollowerSelectItemListViewItemDraw_c *v244; // x8
  __int64 v245; // x9
  UnityEngine_GameObject_o *v246; // x24
  BalanceConfig_c *v247; // x8
  UISprite_o *classBoardBackSprite; // x24
  UnityEngine_GameObject_o *v249; // x24
  FollowerSelectItemListViewItemDraw_c *v250; // x8
  UnityEngine_GameObject_o *v251; // x0
  UnityEngine_GameObject_o *v252; // x0
  float v253; // s0
  float v254; // s8
  float v255; // s0
  float v256; // s9
  UnityEngine_GameObject_o *v257; // x0
  float LocalPositionX; // s0
  float v259; // s10
  UnityEngine_GameObject_o *v260; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v263; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v265; // x22
  __int64 v266; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *v268; // x23
  int32_t v269; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v271; // w22
  QuestPhaseEntity_o *v272; // x0
  QuestPhaseEntity_o *v273; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v275; // x23
  __int64 v276; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v277; // x21
  FollowerSelectItemListViewItemDraw_o *v278; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v281; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *v283; // x22
  int32_t eventId; // w21
  Il2CppObject *v285; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  UILabel_o *warningMessageLabel; // x22
  float v288; // s0
  float v289; // s8
  FollowerSelectItemListViewItemDraw_o *v290; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int32_t FollowerType; // w0
  Il2CppObject *v296; // x22
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v298; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v303; // w21
  System_String_o *v304; // x0
  System_String_o *v305; // x0
  struct UnityEngine_Vector3_StaticFields *v306; // x8
  System_String_o *v307; // x0
  FollowerSelectItemListViewItemDraw_o *v308; // x0
  FollowerSelectItemListViewItem_o *v309; // x1
  const MethodInfo *v310; // x2
  _BOOL4 IsNoneSupportFriendPoint_k__BackingField; // [xsp+1Ch] [xbp-C4h]
  System_String_o *v312; // [xsp+20h] [xbp-C0h]
  int32_t v313; // [xsp+28h] [xbp-B8h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v315; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v317; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v320; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v321; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v322; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v323; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v324; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v325; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v326; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v327; // 0:x0.16
  UnityEngine_Color_o v328; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v329; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4BD75BA & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1C21E38(&Grade_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&SkillInfo___TypeInfo);
    sub_1C21E38(&TitleInfoControl_TypeInfo);
    sub_1C21E38(&StringLiteral_3828/*"COMMON_NO_ENTRY"*/);
    sub_1C21E38(&StringLiteral_6600/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/);
    sub_1C21E38(&StringLiteral_6579/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/);
    sub_1C21E38(&StringLiteral_11836/*"SERVANT_HIDE_NAME"*/);
    sub_1C21E38(&StringLiteral_9517/*"NP_DISABLE_COLOR_NAME"*/);
    sub_1C21E38(&StringLiteral_6580/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/);
    sub_1C21E38(&StringLiteral_6537/*"FFFFFF"*/);
    sub_1C21E38(&StringLiteral_9518/*"NP_HIDE_NAME"*/);
    sub_1C21E38(&StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C21E38(&StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1C21E38(&StringLiteral_9519/*"NP_HIDE_NAME_LEVEL"*/);
    sub_1C21E38(&StringLiteral_6593/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C21E38(&StringLiteral_6578/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/);
    sub_1C21E38(&StringLiteral_17774/*"btn_bg_29_2"*/);
    sub_1C21E38(&StringLiteral_20545/*"icon_support_01"*/);
    sub_1C21E38(&StringLiteral_9522/*"NP_MAX_COLOR_NAME"*/);
    sub_1C21E38(&StringLiteral_20670/*"img_frames_mask01"*/);
    sub_1C21E38(&StringLiteral_12626/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_1C21E38(&StringLiteral_12627/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/);
    sub_1C21E38(&StringLiteral_6592/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/);
    sub_1C21E38(&StringLiteral_6594/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/);
    sub_1C21E38(&StringLiteral_6577/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/);
    sub_1C21E38(&StringLiteral_18788/*"datalost_svt_select"*/);
    sub_1C21E38(&StringLiteral_6536/*"FFFF00"*/);
    sub_1C21E38(&StringLiteral_9492/*"NO_ENTRY_NAME"*/);
    sub_1C21E38(&StringLiteral_9516/*"NP_COLOR_NAME"*/);
    sub_1C21E38(&StringLiteral_16302/*"[{0}]+{1}[-]"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_20507/*"icon_friend"*/);
    sub_1C21E38(&StringLiteral_6581/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/);
    sub_1C21E38(&StringLiteral_20506/*"icon_follow"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C21E38(&StringLiteral_20713/*"img_listbg_02"*/);
    byte_4BD75BA = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v317 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v315.fields.r = 0LL;
  *(_QWORD *)&v315.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_156;
  size = switchSkillUIList->fields._size;
  v11 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_156;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_156;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  if ( (v8->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
    if ( !this )
      goto LABEL_156;
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
      goto LABEL_156;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_156;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, mode == 0, 0LL);
  }
  if ( mode )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
    followerInfo = v7->fields.followerInfo;
    v15 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_38931480 = Grade__GetKind_38931480(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_38931480, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    v19 = FollowerBgImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    dataLostMaskMessageLabel = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_156;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    if ( !v15 )
      goto LABEL_49;
    v22 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v320.fields.currentCryptoKey = v22;
    *(_QWORD *)&v320.fields.fakeValue = v21;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                     v320,
                                                     0LL);
    if ( (int)this >= 1 )
    {
      v23 = v7->fields.followerInfo;
      if ( !v23 )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_156;
      ServantFaceIconComponent__Set_39468548(
        (ServantFaceIconComponent_o *)this,
        v15,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        0,
        v23->fields.imageSvtId,
        0LL);
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v24);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v25);
      FollowerSelectItemListViewItem__GetNpInfo(v7, &tdInfo, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(v7, 0LL);
      if ( !tdInfo )
        goto LABEL_156;
      v26 = (int)this;
      IsNoneSupportFriendPoint_k__BackingField = v7->fields._IsNoneSupportFriendPoint_k__BackingField;
      name = tdInfo->fields.name;
      v28 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      v313 = Kind_38931480;
      v312 = v19;
      if ( ServantLeaderInfo__IsNpc(v15, 0LL) )
      {
        dispLimitCount = v15->fields.dispLimitCount;
        if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v15->fields.npcFlag, 0LL) )
        {
          v30 = tdInfo;
          v32 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
          v31 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v321.fields.currentCryptoKey = v32;
          *(_QWORD *)&v321.fields.fakeValue = v31;
          this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                           v321,
                                                           0LL);
          if ( !v30 )
            goto LABEL_156;
          name = TreasureDvcInfo__GetName(v30, (int32_t)this, 0LL);
        }
        v33 = !NpcServantFollowerEntity__IsHideRarity(v15->fields.npcFlag, 0LL);
      }
      else
      {
        dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v15, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetSpoilerSetting(0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_156;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
          if ( !this )
            goto LABEL_156;
          dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                             (ServantLimitSpoilerProtectionMaster_o *)this,
                             v15->fields.svtId,
                             dispLimitCount,
                             0LL);
        }
        v33 = 1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_156;
      ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v33, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_156;
      ServantFaceIconComponent__SetDispClassSprite(
        (ServantFaceIconComponent_o *)this,
        !v7->fields._IsDataLost_k__BackingField,
        0LL);
      if ( !ServantLeaderInfo__IsNpc(v15, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v38 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
        v40 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v322.fields.currentCryptoKey = v38;
        *(_QWORD *)&v322.fields.fakeValue = v39;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                         v322,
                                                         0LL);
        if ( !v40 )
          goto LABEL_156;
        dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v40, (int32_t)this, dispLimitCount, 0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v41 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v42 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v43 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v44 = (ServantLimitAddMaster_o *)v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v323.fields.currentCryptoKey = v42;
      *(_QWORD *)&v323.fields.fakeValue = v43;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                       v323,
                                                       0LL);
      if ( !tdInfo )
        goto LABEL_156;
      v19 = v312;
      if ( !v44 )
        goto LABEL_156;
      OverwriteTDName = (Il2CppObject *)ServantLimitAddMaster__GetOverwriteTDName(
                                          v44,
                                          (int32_t)this,
                                          dispLimitCount,
                                          name,
                                          tdInfo->fields.lv,
                                          0LL);
      Kind_38931480 = v313;
      switch ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) )
      {
        case 1:
          playerNameLabel = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !playerNameLabel )
            goto LABEL_156;
          UILabel__set_text(playerNameLabel, (System_String_o *)this, 0LL);
          playerLevelIconLabel = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !playerLevelIconLabel )
            goto LABEL_156;
          UIIconLabel__Set_39480396(playerLevelIconLabel, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          loginDataLabel = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          LoginTime = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v87 = (Il2CppObject *)LocalizationManager__GetBeforeTime(LoginTime, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v85, v87, 0LL);
          if ( !loginDataLabel )
            goto LABEL_156;
          UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20507/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( questRestrictionInfo )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                             questRestrictionInfo->fields.questId,
                                                             (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_156;
            HasFlag_40740584 = QuestEntity__HasFlag_40740584(
                                 (QuestEntity_o *)this,
                                 0x8000000LL,
                                 questRestrictionInfo->fields.questPhase,
                                 0LL);
          }
          else
          {
            HasFlag_40740584 = 0;
          }
          if ( IsNoneSupportFriendPoint_k__BackingField )
          {
LABEL_225:
            FollowerPointNpc = 0;
          }
          else
          {
            IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
            v116 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v116 = BalanceConfig_TypeInfo;
            }
            Kind_38931480 = v313;
            static_fields = v116->static_fields;
            v100 = 212LL;
            if ( HasFlag_40740584 )
              v100 = 680LL;
            if ( IsRecommendFollower_k__BackingField )
              v100 = 224LL;
LABEL_232:
            FollowerPointNpc = *(int32_t *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v100);
          }
          v117 = (System_String_o **)&StringLiteral_9522/*"NP_MAX_COLOR_NAME"*/;
          if ( v26 <= 1 )
            v117 = (System_String_o **)&StringLiteral_9516/*"NP_COLOR_NAME"*/;
          v118 = *v117;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v119 = LocalizationManager__Get(v118, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v119, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_156;
          v28 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)this,
            !v7->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_156;
          v114 = 1;
LABEL_241:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v114, 0LL);
LABEL_242:
          IsHideSupport = ServantLeaderInfo__IsHideSupport(v15, 0LL);
          svtNameRangeLabel = v8->fields.svtNameRangeLabel;
          if ( IsHideSupport )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11836/*"SERVANT_HIDE_NAME"*/,
                                                             0LL);
            if ( !svtNameRangeLabel )
              goto LABEL_156;
            UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
            if ( !this )
              goto LABEL_156;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL);
            if ( (_DWORD)this != 4 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_9519/*"NP_HIDE_NAME_LEVEL"*/,
                                                               0LL);
              v28 = this;
            }
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v7, 0LL);
            if ( !svtNameRangeLabel )
              goto LABEL_156;
            UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
          }
          if ( !tdInfo )
            goto LABEL_156;
          strengthStatus = tdInfo->fields.strengthStatus;
          if ( ServantLeaderInfo__IsHideSupport(v15, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v15, 0LL) )
            strengthStatus = 0;
          svtNpRangeLabel = v8->fields.svtNpRangeLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
          if ( !svtNpRangeLabel )
            goto LABEL_156;
          UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)v28, (System_String_o *)this, 0, 0, 0LL);
          svtNpCommandCard = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
            goto LABEL_264;
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v15, 0LL);
          v125 = v8->fields.svtNpCommandCard;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v125 )
              goto LABEL_156;
            ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
LABEL_264:
            if ( IsNoneSupportFriendPoint_k__BackingField )
              goto LABEL_265;
          }
          else
          {
            if ( !v125 )
              goto LABEL_156;
            ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
            if ( IsNoneSupportFriendPoint_k__BackingField )
            {
LABEL_265:
              BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v8->fields.friendPointIconLabel, 0, 0LL);
              BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v8->fields.friendPointData2Label, 0, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
              if ( !this )
                goto LABEL_156;
              UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              goto LABEL_303;
            }
          }
          FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(v7, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignValue(
                                                           v7,
                                                           0LL);
          if ( !v8->fields.friendPointIconLabel )
            goto LABEL_156;
          v127 = (int)this;
          UIIconLabel__Set_39480396(v8->fields.friendPointIconLabel, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
          if ( FriendPointUpVal > 0 || v127 >= 1 )
          {
            if ( v127 <= 0 )
              v129 = 1000;
            else
              v129 = v127;
            v130 = 274877907LL * (v129 * FriendPointUpVal + (v129 - 1000) * FollowerPointNpc);
            friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            v132 = (v130 >> 38) + ((unsigned __int64)v130 >> 63);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v133 = LocalizationManager__Get((System_String_o *)StringLiteral_6600/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
            TimesToRestart_k__BackingField = v132;
            v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v134, v135, v136);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v133, v137, 0LL);
            if ( !friendPointData2Label )
              goto LABEL_156;
            v128 = this;
            this = friendPointData2Label;
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            if ( !this )
              goto LABEL_156;
            v128 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v128, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__IsFriendPointCampaign(v7, 0LL);
          campaignLabel = v8->fields.campaignLabel;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            if ( !campaignLabel )
              goto LABEL_156;
            UILabel__set_gradientTop(campaignLabel, (UnityEngine_Color_o)this->fields.skillButtonList->obj, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
            if ( !this )
              goto LABEL_156;
            UILabel__set_gradientBottom(
              (UILabel_o *)this,
              FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
              0LL);
            campaignLabel = v8->fields.campaignLabel;
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignName(
                                                             v7,
                                                             0LL);
            if ( !campaignLabel )
              goto LABEL_156;
            v139 = this;
          }
          else
          {
            if ( !campaignLabel )
              goto LABEL_156;
            v139 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text(campaignLabel, (System_String_o *)v139, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          if ( !this )
            goto LABEL_156;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          v141 = activeSelf ? -3.0 : 39.0;
          if ( !this )
            goto LABEL_156;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          v142 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
          v143 = v142 ? -22.0 : 20.0;
          if ( !this )
            goto LABEL_156;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, v141, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
          if ( !this )
            goto LABEL_156;
          v145 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v145, v143, 0LL);
LABEL_303:
          eventUpValIcon = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
          {
            if ( FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL) )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_156;
              baseButton = this->fields.baseButton;
              servantFaceIcon = this->fields.servantFaceIcon;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v324.fields.currentCryptoKey = baseButton;
              *(_QWORD *)&v324.fields.fakeValue = servantFaceIcon;
              v149 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v324, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_156;
              Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
            }
            else
            {
              Rarity = -1;
              v149 = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
            if ( !this )
              goto LABEL_156;
            if ( this->fields.typeTextSprite )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_156;
              typeTextSprite = this->fields.typeTextSprite;
              if ( !typeTextSprite )
                goto LABEL_156;
              topAnchor = typeTextSprite->fields.topAnchor;
              v152 = *(_QWORD *)&typeTextSprite->fields.updateAnchors;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v325.fields.currentCryptoKey = topAnchor;
              *(_QWORD *)&v325.fields.fakeValue = v152;
              v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v325, 0LL);
            }
            else
            {
              v154 = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
            if ( !this )
              goto LABEL_156;
            EventUpValIconComponent__Set(
              (EventUpValIconComponent_o *)this,
              v7->fields.eventUpValItemList,
              v149,
              Rarity,
              v154,
              0LL);
          }
          p_skillInfoList = &v8->fields.skillInfoList;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                           v7,
                                                           &v8->fields.skillInfoList,
                                                           0LL);
          skillIconList = v8->fields.skillIconList;
          if ( !skillIconList )
            goto LABEL_156;
          v157 = *(_QWORD *)&skillIconList->max_length;
          if ( v157 << 32 >= 1 )
          {
            v158 = *p_skillInfoList;
            v159 = 0;
            v160 = 0LL;
            while ( v158 )
            {
              max_length = v158->max_length;
              if ( (__int64)v160 < (int)max_length )
              {
                if ( v160 >= max_length )
                  goto LABEL_693;
                v162 = (*p_skillInfoList)->m_Items[v160];
                if ( v162 && v162->fields.id >= 1 )
                  v159 = v160 + 1;
              }
              if ( (__int64)++v160 >= (int)v157 )
                goto LABEL_335;
            }
            goto LABEL_156;
          }
          v159 = 0;
LABEL_335:
          if ( (int)v157 >= 1 )
          {
            v163 = v159;
            v164 = 4LL;
            do
            {
              v165 = v164 - 4;
              if ( v164 - 4 >= v163 )
              {
                skillBaseList = v8->fields.skillBaseList;
                if ( !skillBaseList )
                  goto LABEL_156;
                if ( v165 >= skillBaseList->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillBaseList->obj.klass + v164);
                if ( !this )
                  goto LABEL_156;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v166 = *p_skillInfoList;
                if ( !*p_skillInfoList )
                  goto LABEL_156;
                if ( v165 >= v166->max_length )
                  goto LABEL_693;
                v167 = v8->fields.skillBaseList;
                if ( !v167 )
                  goto LABEL_156;
                if ( v165 >= v167->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v167->obj.klass + v164);
                if ( !this )
                  goto LABEL_156;
                v168 = (int32_t *)*((_QWORD *)&v166->obj.klass + v164);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v15, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v168 )
                    v168[4] = 0;
                  v169 = v8->fields.skillIconList;
                  if ( !v169 )
                    goto LABEL_156;
                  if ( v165 >= v169->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v169->obj.klass + v164);
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
                  if ( !skillLevelIconLabelList )
                    goto LABEL_156;
                  if ( v165 >= skillLevelIconLabelList->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v164);
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v172 = v8->fields.skillIconList;
                  if ( !v172 )
                    goto LABEL_156;
                  if ( v165 >= v172->max_length )
                    goto LABEL_693;
                  if ( !v168 )
                    goto LABEL_156;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v172->obj.klass + v164);
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__Set_39479592(
                    (SkillIconComponent_o *)this,
                    v168[4],
                    v168[5],
                    v168[12],
                    v168[13],
                    0LL);
                  v173 = v8->fields.skillLevelIconLabelList;
                  if ( !v173 )
                    goto LABEL_156;
                  if ( v165 >= v173->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v173->obj.klass + v164);
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Set_39480396((UIIconLabel_o *)this, 48, v168[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v174 = v8->fields.skillIconList;
              if ( !v174 )
                goto LABEL_156;
              v175 = v164 - 3;
              ++v164;
            }
            while ( v175 < (int)v174->max_length );
          }
          v176 = v8->fields.displaySkill;
          if ( v176 == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_156;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_156;
            item = (FollowerSelectItemListViewItem_o *)v8->fields.skillInfoUiWidget;
            v178 = *(_QWORD *)&this->fields.m_CachedPtr;
            v179 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v178 )
              goto LABEL_156;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v178 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
            }
            else
            {
              v181 = v178 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v181 + 32) = item;
              sub_1C21DDC(v181 + 32, item);
            }
          }
          else
          {
            if ( v176 == 1 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_156;
              v177 = 0;
            }
            else
            {
              if ( v176 )
                goto LABEL_384;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                this,
                this->klass[1]._1.declaringType,
                1.0);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_156;
              v177 = 1;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v177, 0LL);
          }
LABEL_384:
          p_appendSkillInfoList = &v8->fields.appendSkillInfoList;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                           v7,
                                                           &v8->fields.appendSkillInfoList,
                                                           v7->fields.isNpc,
                                                           0LL);
          appendSkillIconList = v8->fields.appendSkillIconList;
          if ( !appendSkillIconList )
            goto LABEL_156;
          v184 = *(_QWORD *)&appendSkillIconList->max_length;
          if ( v184 << 32 < 1 )
          {
            v186 = 0;
          }
          else
          {
            v185 = *p_appendSkillInfoList;
            v186 = 0;
            v187 = 0LL;
            do
            {
              if ( v185 )
              {
                v188 = v185->max_length;
                if ( v187 < (int)v188 )
                {
                  if ( v187 >= v188 )
                    goto LABEL_693;
                  v189 = (*p_appendSkillInfoList)->m_Items[v187];
                  if ( v189 && v189->fields.id >= 1 )
                    v186 = v187 + 1;
                }
              }
              ++v187;
            }
            while ( v187 < (int)v184 );
          }
          if ( (int)v184 >= 1 )
          {
            v190 = 0LL;
            v191 = v186;
            do
            {
              if ( (__int64)v190 >= v191 )
              {
                appendSkillBaseList = v8->fields.appendSkillBaseList;
                if ( !appendSkillBaseList )
                  goto LABEL_156;
                if ( v190 >= appendSkillBaseList->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v190];
                if ( !this )
                  goto LABEL_156;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v192 = *p_appendSkillInfoList;
                if ( !*p_appendSkillInfoList )
                  goto LABEL_156;
                if ( v190 >= v192->max_length )
                  goto LABEL_693;
                v193 = v8->fields.appendSkillBaseList;
                if ( !v193 )
                  goto LABEL_156;
                if ( v190 >= v193->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)v193->m_Items[v190];
                if ( !this )
                  goto LABEL_156;
                v194 = (int32_t *)v192->m_Items[v190];
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
                  v196 = HIDWORD(skillButtonList->m_Items[145]);
                  if ( v190 )
                    v196 += LODWORD(skillButtonList->m_Items[146]) * v190;
                  v197 = v8->fields.appendSkillBaseList;
                  if ( !v197 )
                    goto LABEL_156;
                  if ( v190 >= v197->max_length )
                    goto LABEL_693;
                  GameObjectExtensions__SetLocalPositionX(v197->m_Items[v190], (float)v196, 0LL);
                }
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v15, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v194 )
                    v194[4] = 0;
                  v198 = v8->fields.appendSkillIconList;
                  if ( !v198 )
                    goto LABEL_156;
                  if ( v190 >= v198->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)v198->m_Items[v190];
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
                  if ( !appendSkillLevelIconLabelList )
                    goto LABEL_156;
                  if ( v190 >= appendSkillLevelIconLabelList->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v190];
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v201 = v8->fields.appendSkillIconList;
                  if ( !v201 )
                    goto LABEL_156;
                  if ( v190 >= v201->max_length )
                    goto LABEL_693;
                  if ( !v194 )
                    goto LABEL_156;
                  this = (FollowerSelectItemListViewItemDraw_o *)v201->m_Items[v190];
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__Set_39479592(
                    (SkillIconComponent_o *)this,
                    v194[4],
                    v194[5],
                    v194[12],
                    v194[13],
                    0LL);
                  v202 = v8->fields.appendSkillLevelIconLabelList;
                  if ( !v202 )
                    goto LABEL_156;
                  if ( v190 >= v202->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)v202->m_Items[v190];
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Set_39480396((UIIconLabel_o *)this, 48, v194[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v203 = v8->fields.appendSkillIconList;
              if ( !v203 )
                goto LABEL_156;
              ++v190;
            }
            while ( (__int64)v190 < (int)v203->max_length );
          }
          v204 = v8->fields.displaySkill;
          if ( v204 == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_156;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_156;
            item = (FollowerSelectItemListViewItem_o *)v8->fields.appendSkillInfoUiWidget;
            v206 = *(_QWORD *)&this->fields.m_CachedPtr;
            v207 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v206 )
              goto LABEL_156;
            v208 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v208 >= *(_DWORD *)(v206 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
            }
            else
            {
              v209 = v206 + 8 * v208;
              LODWORD(this->fields.m_CancellationTokenSource) = v208 + 1;
              *(_QWORD *)(v209 + 32) = item;
              sub_1C21DDC(v209 + 32, item);
            }
          }
          else
          {
            if ( v204 == 1 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                this,
                this->klass[1]._1.declaringType,
                1.0);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_156;
              v205 = 1;
            }
            else
            {
              if ( v204 )
                goto LABEL_457;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_156;
              v205 = 0;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v205, 0LL);
          }
          if ( v8->fields.displaySkill == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_156;
            switchSkillInfo = v8->fields.switchSkillInfo;
            this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
            if ( !switchSkillInfo )
              goto LABEL_156;
            SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
          }
LABEL_457:
          svtCommandCardList = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v15, 0LL);
            v212 = v8->fields.svtCommandCardList;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v212 )
                goto LABEL_156;
              ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
            }
            else
            {
              SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, 0LL);
              commandCardParam = v15->fields.commandCardParam;
              v215 = SvtId;
              this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v15, 0LL);
              if ( !v212 )
                goto LABEL_156;
              ServantCommandCardListComponent__Set_39457436(
                v212,
                v215,
                commandCardParam,
                (System_Int32_array *)this,
                2,
                1,
                0LL);
            }
          }
          pushSprite = (UnityEngine_Object_o *)v8->fields.pushSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v217 = v7->fields.followerInfo;
            if ( !v217 )
              goto LABEL_156;
            pushUserSvtId = v217->fields.pushUserSvtId;
            v219 = pushUserSvtId && pushUserSvtId == v15->fields.userSvtId;
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_156;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v219, 0LL);
          }
          v220 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v220, 0LL, 0LL) )
            goto LABEL_502;
          v221 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v221, 0LL, 0LL) )
            goto LABEL_502;
          if ( v7->fields._IsDataLost_k__BackingField )
          {
            v222 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetPartyOrganizationImage(v222, (System_String_o *)StringLiteral_18788/*"datalost_svt_select"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
            v328.fields.r = 1.0;
            v328.fields.g = 1.0;
            v328.fields.b = 1.0;
            v328.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)this, v328, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
          }
          else
          {
            if ( v7->fields._TimesToRestart_k__BackingField < 1 )
              goto LABEL_502;
            v223 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetCommon(v223, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20670/*"img_frames_mask01"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
            v329.fields.a = 0.62353;
            v329.fields.r = 0.0;
            v329.fields.g = 0.0;
            v329.fields.b = 0.0;
            UIWidget__set_color((UIWidget_o *)this, v329, 0LL);
            v224 = v8->fields.dataLostMaskMessageLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v225 = LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
            TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
            v229 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v226, v227, v228);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v225, v229, 0LL);
            if ( !v224 )
              goto LABEL_156;
            UILabel__set_text(v224, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_156;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
            if ( !this )
              goto LABEL_156;
          }
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_502:
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
                goto LABEL_156;
              v237 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
                v234 = (Il2CppObject **)&StringLiteral_6536/*"FFFF00"*/;
              else
                v234 = (Il2CppObject **)&StringLiteral_6537/*"FFFFFF"*/;
              v235 = *v234;
              TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
              v236 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v231,
                                       v232,
                                       v233);
              this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_63129848(
                                                               (System_String_o *)StringLiteral_16302/*"[{0}]+{1}[-]"*/,
                                                               v235,
                                                               v236,
                                                               0LL);
              if ( !v8->fields.openClassBoardNumLabel )
                goto LABEL_156;
              v237 = this;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            }
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v237, 0LL);
          }
          classBoardOpenButton = (UnityEngine_Object_o *)v8->fields.classBoardOpenButton;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
            break;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
          if ( !this )
            goto LABEL_156;
          IsReleasedClassBoard_k__BackingField = v7->fields._IsReleasedClassBoard_k__BackingField;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          if ( !IsReleasedClassBoard_k__BackingField )
            goto LABEL_169;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
          if ( !this )
            goto LABEL_156;
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
            v242 = v8->fields.classBoardOpenButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12627/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                               0LL);
              if ( !v242 )
                goto LABEL_156;
              UILabel__set_text(v242, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_156;
              v243 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v244 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v244 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v245 = 36LL;
            }
            else
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12626/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                               0LL);
              if ( !v242 )
                goto LABEL_156;
              UILabel__set_text(v242, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_156;
              v243 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v244 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v244 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v245 = 32LL;
            }
            GameObjectExtensions__SetLocalPositionY(
              v243,
              *(float *)((char *)&v244->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v245),
              0LL);
          }
          if ( ConstantMaster__IsFLAG20240804(0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
            if ( !this )
              goto LABEL_156;
            v246 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v247 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v247 = BalanceConfig_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34797564(v246, v247->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
            classBoardBackSprite = v8->fields.classBoardBackSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17774/*"btn_bg_29_2"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
            if ( !this )
              goto LABEL_156;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_156;
            v249 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v250 = FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
              v250 = FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34797564(v249, v250->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_156;
            v251 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalScaleX(
              v251,
              BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
              0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            if ( !this )
              goto LABEL_156;
            v252 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              v252,
              (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
              0LL);
          }
          break;
        case 2:
          v90 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v90 )
            goto LABEL_156;
          UILabel__set_text(v90, (System_String_o *)this, 0LL);
          v91 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v91 )
            goto LABEL_156;
          UIIconLabel__Set_39480396(v91, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v92 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v94 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v95 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v94, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v93, v95, 0LL);
          if ( !v92 )
            goto LABEL_156;
          UILabel__set_text(v92, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          if ( IsNoneSupportFriendPoint_k__BackingField )
            goto LABEL_225;
          v96 = v7->fields._IsRecommendFollower_k__BackingField;
          v97 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v97 = BalanceConfig_TypeInfo;
          }
          static_fields = v97->static_fields;
          v99 = !v96;
          v100 = 224LL;
          v101 = 216LL;
          goto LABEL_204;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_156;
          v19 = (System_String_o *)StringLiteral_20713/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          if ( !this )
            goto LABEL_156;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
          if ( !this )
            goto LABEL_156;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20545/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          if ( IsNoneSupportFriendPoint_k__BackingField )
          {
            FollowerPointNpc = 0;
          }
          else
          {
            v110 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v110 = BalanceConfig_TypeInfo;
            }
            FollowerPointNpc = v110->static_fields->FollowerPointNpc;
          }
          if ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) == 3 )
          {
            v111 = (System_String_o **)&StringLiteral_9522/*"NP_MAX_COLOR_NAME"*/;
            if ( v26 <= 1 )
              v111 = (System_String_o **)&StringLiteral_9516/*"NP_COLOR_NAME"*/;
            v112 = *v111;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v113 = LocalizationManager__Get(v112, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v113 = LocalizationManager__Get((System_String_o *)StringLiteral_9517/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            OverwriteTDName = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9518/*"NP_HIDE_NAME"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v113, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_156;
          v28 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_156;
          v114 = 0;
          goto LABEL_241;
        case 5:
          v102 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v102 )
            goto LABEL_156;
          UILabel__set_text(v102, (System_String_o *)this, 0LL);
          v103 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v103 )
            goto LABEL_156;
          UIIconLabel__Set_39480396(v103, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v104 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v105 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v106 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v107 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v106, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v105, v107, 0LL);
          if ( !v104 )
            goto LABEL_156;
          UILabel__set_text(v104, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20506/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          if ( IsNoneSupportFriendPoint_k__BackingField )
            goto LABEL_225;
          v108 = v7->fields._IsRecommendFollower_k__BackingField;
          v109 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v109 = BalanceConfig_TypeInfo;
          }
          static_fields = v109->static_fields;
          v99 = !v108;
          v100 = 224LL;
          v101 = 680LL;
LABEL_204:
          if ( v99 )
            v100 = v101;
          goto LABEL_232;
        default:
          Kind_38931480 = v313;
          FollowerPointNpc = 0;
          goto LABEL_242;
      }
    }
    else
    {
LABEL_49:
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(v7, 0LL);
      if ( !v8->fields.servantFaceIcon )
        goto LABEL_156;
      ServantFaceIconComponent__SetEquipDangling(v8->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0LL);
      v34 = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3828/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !v34 )
        goto LABEL_156;
      UIRangeLabel__Set(v34, (System_String_o *)this, 0LL, 1, 0, 0LL);
      switch ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) )
      {
        case 1:
          v47 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v47 )
            goto LABEL_156;
          UILabel__set_text(v47, (System_String_o *)this, 0LL);
          v48 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v48 )
            goto LABEL_156;
          UIIconLabel__Set_39480396(v48, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v49 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v50 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v51 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v52 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v51, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v50, v52, 0LL);
          if ( !v49 )
            goto LABEL_156;
          UILabel__set_text(v49, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          v53 = &StringLiteral_20507/*"icon_friend"*/;
          goto LABEL_114;
        case 2:
          v54 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v54 )
            goto LABEL_156;
          UILabel__set_text(v54, (System_String_o *)this, 0LL);
          v55 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v55 )
            goto LABEL_156;
          UIIconLabel__Set_39480396(v55, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v56 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v58 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v59 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v58, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v57, v59, 0LL);
          if ( !v56 )
            goto LABEL_156;
          UILabel__set_text(v56, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          goto LABEL_116;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_156;
          v19 = (System_String_o *)StringLiteral_20713/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          if ( !this )
            goto LABEL_156;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
          if ( !this )
            goto LABEL_156;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20545/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          if ( !this )
            goto LABEL_156;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_156;
          v36 = 0;
          goto LABEL_120;
        case 5:
          v60 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v60 )
            goto LABEL_156;
          UILabel__set_text(v60, (System_String_o *)this, 0LL);
          v61 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v61 )
            goto LABEL_156;
          UIIconLabel__Set_39480396(v61, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v62 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v64 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v65 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v64, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v63, v65, 0LL);
          if ( !v62 )
            goto LABEL_156;
          UILabel__set_text(v62, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          v53 = &StringLiteral_20506/*"icon_follow"*/;
LABEL_114:
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v53, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
LABEL_116:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          if ( !this )
            goto LABEL_156;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)this,
            !v7->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_156;
          v36 = 1;
LABEL_120:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v36, 0LL);
LABEL_121:
          FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v35);
          FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v66);
          v67 = v8->fields.svtNpRangeLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9492/*"NO_ENTRY_NAME"*/,
                                                           0LL);
          if ( !v67 )
            goto LABEL_156;
          UIRangeLabel__Set(v67, (System_String_o *)this, 0LL, 1, 0, 0LL);
          v68 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v68, 0LL, 0LL) )
            goto LABEL_129;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtNpCommandCard;
          if ( !this )
            goto LABEL_156;
          ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
LABEL_129:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
          if ( !this )
            goto LABEL_156;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
          if ( !this )
            goto LABEL_156;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
          if ( !this )
            goto LABEL_156;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v69 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_137;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
          if ( !this )
            goto LABEL_156;
          EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
LABEL_137:
          v70 = v8->fields.skillIconList;
          if ( !v70 )
            goto LABEL_156;
          v71 = sub_1C21EE0(SkillInfo___TypeInfo, v70->max_length);
          v8->fields.skillInfoList = (struct SkillInfo_array *)v71;
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1C21DDC(&v8->fields.skillInfoList, v71);
          v72 = v8->fields.skillIconList;
          if ( !v72 )
            goto LABEL_156;
          v73 = 0LL;
          break;
        default:
          goto LABEL_121;
      }
      while ( (int)v73 < (signed int)v72->max_length )
      {
        v74 = v8->fields.skillBaseList;
        if ( v74 )
        {
          if ( (unsigned int)v73 >= v74->max_length )
LABEL_693:
            sub_1C2209C(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)v74->m_Items[v73];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v72 = v8->fields.skillIconList;
            ++v73;
            if ( v72 )
              continue;
          }
        }
        goto LABEL_156;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v75 = v8->fields.appendSkillIconList;
      if ( !v75 )
        goto LABEL_156;
      v76 = sub_1C21EE0(SkillInfo___TypeInfo, v75->max_length);
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)v76;
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1C21DDC(&v8->fields.appendSkillInfoList, v76);
      v77 = v8->fields.appendSkillIconList;
      if ( !v77 )
        goto LABEL_156;
      v78 = 0LL;
      while ( (int)v78 < (signed int)v77->max_length )
      {
        v79 = v8->fields.appendSkillBaseList;
        if ( !v79 )
          goto LABEL_156;
        if ( (unsigned int)v78 >= v79->max_length )
          goto LABEL_693;
        this = (FollowerSelectItemListViewItemDraw_o *)v79->m_Items[v78];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v77 = v8->fields.appendSkillIconList;
          ++v78;
          if ( v77 )
            continue;
        }
        goto LABEL_156;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v80 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_156;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      v81 = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
        if ( !this )
          goto LABEL_156;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_156;
LABEL_169:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
    }
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
    if ( !this )
      goto LABEL_156;
    LODWORD(v253) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_156;
    v254 = v253;
    LODWORD(v255) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
    if ( !this )
      goto LABEL_156;
    v256 = v255;
    v257 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v257, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_156;
    v259 = LocalPositionX;
    v260 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v260, (float)(v256 * 0.5) + (float)(v254 + v259), 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_156;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38931480, 0LL);
    baseSprite = v8->fields.baseSprite;
    if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    FollowerRootComponent__SetFollowerBase(baseSprite, v19, 0LL);
    if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskMessageLabel = v8->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6592/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
                                                       0LL);
      if ( !maskMessageLabel )
        goto LABEL_156;
      UILabel__set_text(maskMessageLabel, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
      if ( !this )
        goto LABEL_156;
      FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_156;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    else
    {
      if ( !v7->fields.isUniqueSvtRestriction && !v7->fields.isUniqueIndividualityRestriction )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_156;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
        if ( !this )
          goto LABEL_156;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
        if ( !this )
          goto LABEL_156;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_156;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v263 = 0;
        goto LABEL_571;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
      if ( !this )
        goto LABEL_156;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
      if ( !this )
        goto LABEL_156;
      FlashingIconComponent__SetFast((FlashingIconComponent_o *)this, 0LL);
      warningMessageLabel = v8->fields.warningMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6593/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                       0LL);
      if ( !warningMessageLabel )
        goto LABEL_156;
      UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_156;
      LODWORD(v288) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_156;
      v289 = v288;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      v290 = this;
      warningMessageWidth = (float)v8->fields.warningMessageWidth;
      if ( v289 <= warningMessageWidth )
      {
        if ( !byte_4BD6BB6 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        v306 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v306->oneVector.fields.x;
        y = v306->oneVector.fields.y;
        z = v306->oneVector.fields.z;
      }
      else
      {
        x = warningMessageWidth / v289;
        z = 1.0;
        y = 1.0;
      }
      if ( !v290 )
        goto LABEL_156;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v290, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    v263 = 1;
LABEL_571:
    classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    {
      if ( !v15 )
        goto LABEL_600;
      v266 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v265 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v326.fields.currentCryptoKey = v266;
      *(_QWORD *)&v326.fields.fakeValue = v265;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v326, 0LL) < 1
        || (v263 & 1) != 0
        || ServantLeaderInfo__IsHideSupport(v15, 0LL)
        || v7->fields._IsDataLost_k__BackingField )
      {
        goto LABEL_600;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_156;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
        goto LABEL_600;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)this->fields.rangeSprite;
      if ( !this )
        goto LABEL_156;
      item = (FollowerSelectItemListViewItem_o *)FollowerRootComponent_TypeInfo;
      methodPtr_low = LOBYTE(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerRootComponent_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerRootComponent_TypeInfo )
      {
        v308 = (FollowerSelectItemListViewItemDraw_o *)sub_1C22354(this);
        FollowerSelectItemListViewItemDraw__setupMessageUI(v308, v309, v310);
        return;
      }
      v268 = this->fields.typeTextSprite;
      if ( !v268 )
        goto LABEL_600;
      v269 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
      if ( !v269 )
        goto LABEL_600;
      m_CancellationTokenSource = (int32_t)v268->fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
        goto LABEL_600;
      v271 = v269;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !this )
        goto LABEL_156;
      v272 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v271, m_CancellationTokenSource, 0LL);
      if ( v272 )
      {
        v273 = v272;
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_156;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
        v276 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
        v275 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
        v277 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v327.fields.currentCryptoKey = v276;
        *(_QWORD *)&v327.fields.fakeValue = v275;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                         v327,
                                                         0LL);
        if ( !v277 )
          goto LABEL_156;
        this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v277,
                                                         (int32_t)this,
                                                         (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_156;
        v278 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
        if ( !this )
          goto LABEL_156;
        ServantClassCompatibilityIconComponent__SetIcon(
          (ServantClassCompatibilityIconComponent_o *)this,
          (int32_t)v278->fields.svtNameRangeLabel,
          v273->fields.classIds,
          2,
          0LL);
      }
      else
      {
LABEL_600:
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
        if ( !this )
          goto LABEL_156;
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
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
    }
    recommendedIconText = (UnityEngine_Object_o *)v8->fields.recommendedIconText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
    {
      v281 = v8->fields.recommendedIconText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6594/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                       0LL);
      if ( !v281 )
        goto LABEL_156;
      UILabel__set_text(v281, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedIconText;
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
    }
    numberOfUsabletimes = (UnityEngine_Object_o *)v8->fields.numberOfUsabletimes;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
      goto LABEL_637;
    v283 = v7->fields.questRestrictionInfo;
    if ( v283 )
    {
      eventId = v283->fields.eventId;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0LL;
      if ( !this )
        goto LABEL_156;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              v283->fields.eventId,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_629;
      v285 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( TitleInfoControl__IsEnableEventShopButton_38453796((EventDetailEntity_o *)v285, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)entity;
        if ( !entity )
          goto LABEL_156;
        LODWORD(v283) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
      }
      else
      {
LABEL_629:
        LODWORD(v283) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !this )
      goto LABEL_156;
    if ( BYTE4(this->fields.typeTextSprite) || FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) == 3 )
    {
      item = 0LL;
LABEL_635:
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimes;
      if ( !this )
        goto LABEL_156;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
LABEL_637:
      recommendedUser = (UnityEngine_Object_o *)v8->fields.recommendedUser;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedUser;
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)this,
          v7->fields._isRecommendedUser_k__BackingField,
          0LL);
      }
      return;
    }
    FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL);
    item = 0LL;
    if ( FollowerType == 4 || (((unsigned int)v283 ^ 1) & 1) != 0 )
      goto LABEL_635;
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      v296 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerId(v7, 0LL);
      if ( v296 )
      {
        UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                      (EventBoostItemUsedMaster_o *)v296,
                      eventId,
                      (int64_t)this,
                      0LL);
        v298 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v298 = BalanceConfig_TypeInfo;
        }
        MaxFriendChocolateUse = v298->static_fields->MaxFriendChocolateUse;
        v317 = MaxFriendChocolateUse;
        if ( UsedCount )
        {
          if ( !v298->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v298);
            MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
          }
          v317 = MaxFriendChocolateUse - UsedCount->fields.count;
        }
        numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6579/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                         0LL);
        if ( numberOfUsabletimesPrefixLabel )
        {
          UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
          numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v317, 0LL);
          if ( numberOfUsabletimesLabel )
          {
            UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
            numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6580/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                             0LL);
            if ( numberOfUsabletimesSuffixLabel )
            {
              UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
              v303 = v317;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              if ( v303 )
              {
                v304 = LocalizationManager__Get((System_String_o *)StringLiteral_6577/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v304, &color, 0LL);
                v305 = LocalizationManager__Get((System_String_o *)StringLiteral_6578/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v305, &v315, 0LL);
              }
              else
              {
                v307 = LocalizationManager__Get((System_String_o *)StringLiteral_6581/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v307, &color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( !this )
                  goto LABEL_156;
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                v315 = color;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
              if ( this )
              {
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( this )
                {
                  UIWidget__set_color((UIWidget_o *)this, v315, 0LL);
                  item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
                  goto LABEL_635;
                }
              }
            }
          }
        }
      }
    }
LABEL_156:
    sub_1C22094(this, item);
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

  if ( (byte_4BD75BC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD75BC = 1;
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
      sub_1C22094(gameObject, v6);
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
  int v16; // w8
  UnityEngine_GameObject_o *v17; // x0
  bool v18; // w1
  float v19; // s8
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  struct FollowerInfo_o *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  struct FollowerInfo_o *v24; // x8

  v4 = this;
  if ( (byte_4BD75BB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C21E38(&StringLiteral_117/*" "*/);
    byte_4BD75BB = 1;
  }
  if ( !item )
    goto LABEL_51;
  if ( item->fields._IsRecommendFollower_k__BackingField )
  {
    followerInfo = item->fields.followerInfo;
    if ( !followerInfo )
      goto LABEL_51;
    userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
    if ( !userRecommendSupportHash )
      goto LABEL_51;
    if ( userRecommendSupportHash->max_length )
    {
      v7 = userRecommendSupportHash->m_Items[0];
      if ( !v7 )
        goto LABEL_51;
      adviceMessageIds = v7->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_51;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_28;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v9 = item->fields.followerInfo;
      if ( !v9 )
        goto LABEL_51;
      v10 = v9->fields.userRecommendSupportHash;
      if ( !v10 )
        goto LABEL_51;
      if ( v10->max_length )
      {
        v11 = v10->m_Items[0];
        if ( !v11 || !this )
          goto LABEL_51;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v11->fields.adviceMessageIds,
                               0LL);
        v13 = System_String__Join((System_String_o *)StringLiteral_117/*" "*/, ConvertMessageToId, 0LL);
        if ( !System_String__IsNullOrEmpty(v13, 0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
          if ( this )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
            if ( this )
            {
              message = v13;
              goto LABEL_22;
            }
          }
LABEL_51:
          sub_1C22094(this, item);
        }
LABEL_28:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( this )
        {
          v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v17, -19.0, 0LL);
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
                v18 = 1;
LABEL_33:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v18, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, 10.0, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
                if ( this )
                {
                  v16 = 1113849856;
                  goto LABEL_35;
                }
              }
            }
          }
        }
        goto LABEL_51;
      }
    }
    sub_1C2209C(this, item);
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0LL);
  switch ( (int)this )
  {
    case 1:
      v22 = item->fields.followerInfo;
      if ( !v22 )
        goto LABEL_51;
      if ( System_String__IsNullOrEmpty(v22->fields.message, 0LL) )
        goto LABEL_28;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
        goto LABEL_28;
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v23, -19.0, 0LL);
      v24 = item->fields.followerInfo;
      if ( !v24 )
        goto LABEL_51;
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
      if ( !this )
        goto LABEL_51;
      message = v24->fields.message;
      break;
    case 2:
    case 5:
      goto LABEL_28;
    case 3:
    case 4:
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v21, -16.0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
      if ( !this )
        goto LABEL_51;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
      if ( !this )
        goto LABEL_51;
      v18 = 0;
      goto LABEL_33;
    default:
      return;
  }
LABEL_22:
  UILabel__set_text((UILabel_o *)this, message, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
  if ( !this )
    goto LABEL_51;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
  if ( !this )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -1.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, -1.0, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
  if ( !this )
    goto LABEL_51;
  v16 = 1112801280;
LABEL_35:
  v19 = *(float *)&v16;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v20, v19, 0LL);
}