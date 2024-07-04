void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8

  if ( (byte_48E6A91 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_48E6A91 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_B70590;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_B70850;
  *(_QWORD *)&v2->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 0x4130000041400000LL;
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct SkillIconComponent_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UIIconLabel_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_GameObject_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct SkillIconComponent_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct UIIconLabel_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_48E6A90 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B00CCC(&SkillIconComponent___TypeInfo, v4);
    sub_1B00CCC(&UIIconLabel___TypeInfo, v5);
    byte_48E6A90 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1B00D74(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1B00D74(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v10, v11, v12);
  v13 = (struct UIIconLabel_array *)sub_1B00D74(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1B00D74(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillBaseList, (int32_t)v16, v17, v18);
  v19 = (struct SkillIconComponent_array *)sub_1B00D74(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v19;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillIconList, (int32_t)v19, v20, v21);
  v22 = (struct UIIconLabel_array *)sub_1B00D74(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v22;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v22, v23, v24);
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
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  UISprite_o *skillIconSprite; // x20

  if ( (byte_48E6A8A & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_19906/*"icon_skill_mini"*/, v5);
    sub_1B00CCC(&StringLiteral_20045/*"img_friend_skill"*/, v6);
    sub_1B00CCC(&StringLiteral_19812/*"icon_append_mini"*/, v7);
    sub_1B00CCC(&StringLiteral_20044/*"img_friend_appendskill"*/, v8);
    byte_48E6A8A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v9, v10, v11);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19906/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20045/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19812/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20044/*"img_friend_appendskill"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t displaySkill,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v13; // w9
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v15; // x20
  __int64 v16; // x21
  _BOOL4 v17; // w8
  int32_t v18; // w9
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  SwitchUIWidgetComponent_o *v31; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v5 = displaySkill;
  if ( (byte_48E6A8F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_48E6A8F = 1;
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
  v13 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v13;
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
    v16 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v16;
    *(_QWORD *)&v32.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v32, 0LL) > 0;
  }
  else
  {
    v17 = 0;
  }
  v18 = this->fields.displaySkill;
  if ( v18 == 2 )
  {
    if ( v17 )
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
      v21 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v22 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v21 )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = v21 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v24 + 32) = *(_QWORD *)&displaySkill;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v24 + 32), displaySkill, v19, v20);
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
      v27 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v27 )
        goto LABEL_52;
      v29 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * v29;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v29 + 1;
        *(_QWORD *)(v30 + 32) = *(_QWORD *)&displaySkill;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 32), displaySkill, v25, v26);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v31 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v31 )
      {
        SwitchUIWidgetComponent__Set(v31, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1B00F28(switchSkillInfo, *(_QWORD *)&displaySkill);
  }
  if ( v18 != 1 )
  {
    if ( v18 )
      return;
    if ( !v17 )
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
  if ( v17 )
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
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Behaviour_o *supportInfoButton; // x0
  __int64 v10; // x1
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v13; // w24
  Il2CppClass **v14; // x8
  UnityEngine_Behaviour_o *v15; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_48E6A8E & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E6A8E = 1;
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
      v13 = 0;
      do
      {
        if ( v13 >= skillButtonList->max_length )
          sub_1B00F30(supportInfoButton, v10);
        v14 = &skillButtonList->obj.klass + (int)v13;
        v15 = (UnityEngine_Behaviour_o *)v14[4];
        if ( !v15 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v14[4],
                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
        if ( !Component_object )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, 1, 0LL);
        if ( max_length == ++v13 )
          goto LABEL_19;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_18:
      sub_1B00F28(supportInfoButton, v10);
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
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v71; // w9
  UnityEngine_Object_o *rangeSprite; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  FollowerInfo_o **p_followerInfo; // x29
  ServantLeaderInfo_o *v76; // x21
  int32_t Kind_36489956; // w22
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v81; // x24
  __int64 v82; // x25
  struct FollowerInfo_o *v83; // x8
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x1
  System_String_o *name; // x27
  int v89; // w24
  FollowerSelectItemListViewItemDraw_o *v90; // x26
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v92; // x27
  __int64 v93; // x28
  __int64 v94; // x29
  bool v95; // w8
  UIRangeLabel_o *svtNameRangeLabel; // x24
  const MethodInfo *v97; // x2
  FollowerInfo_o *v98; // x8
  bool v99; // w1
  Il2CppObject *Master_object; // x0
  __int64 v101; // x23
  __int64 v102; // x29
  ServantLimitImageMaster_o *v103; // x28
  Il2CppObject *v104; // x0
  __int64 v105; // x23
  __int64 v106; // x29
  ServantLimitAddMaster_o *v107; // x28
  FollowerInfo_o *v108; // x8
  Il2CppObject *v109; // x25
  __int64 v110; // x24
  BalanceConfig_c *v111; // x0
  int32_t FollowerPointNotFriend; // w27
  System_String_o **v113; // x8
  System_String_o *v114; // x23
  System_String_o *v115; // x24
  UILabel_o *playerNameLabel; // x24
  System_String_o **v117; // x8
  int32_t v118; // w2
  UILabel_o *v119; // x24
  System_String_o **v120; // x8
  int32_t v121; // w2
  UILabel_o *v122; // x24
  System_String_o **v123; // x8
  int32_t v124; // w2
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
  UILabel_o *loginDataLabel; // x24
  System_String_o *v136; // x25
  int64_t v137; // x0
  UILabel_o *v138; // x24
  System_String_o *v139; // x25
  int64_t v140; // x0
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
  __int64 v153; // x0
  int32_t v154; // w2
  int32_t v155; // w3
  struct SkillIconComponent_array *v156; // x8
  __int64 v157; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  struct SkillIconComponent_array *v163; // x8
  __int64 v164; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v168; // x26
  System_String_o *v169; // x27
  int64_t v170; // x0
  UILabel_o *v171; // x26
  System_String_o *v172; // x27
  int64_t v173; // x0
  UILabel_o *v174; // x26
  System_String_o *v175; // x27
  int64_t v176; // x0
  Il2CppObject *v177; // x0
  struct QuestRestrictionInfo_o *v178; // x26
  BalanceConfig_c *v179; // x0
  struct BalanceConfig_StaticFields *v180; // x8
  LocalizationManager_c *v181; // x0
  __int64 v182; // x9
  System_String_o **v183; // x10
  System_String_o *v184; // x23
  Il2CppObject *v185; // x0
  BalanceConfig_c *v186; // x0
  struct BalanceConfig_StaticFields *v187; // x8
  System_String_o **v188; // x9
  Il2CppObject *v189; // x0
  BalanceConfig_c *v190; // x0
  struct BalanceConfig_StaticFields *v191; // x8
  System_String_o *v192; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v194; // x1
  UIRangeLabel_o *v195; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v197; // x25
  UnityEngine_Object_o *v198; // x23
  const MethodInfo *v199; // x1
  struct ServantNpCommandCardComponent_o *v200; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v203; // w24
  int v204; // w23
  FollowerSelectItemListViewItemDraw_o *v205; // x1
  int v206; // w8
  __int64 v207; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v209; // w25
  System_String_o *v210; // x23
  __int64 v211; // x2
  __int64 v212; // x3
  __int64 v213; // x4
  Il2CppObject *v214; // x0
  UILabel_o *campaignLabel; // x24
  const MethodInfo *v216; // x1
  FollowerSelectItemListViewItemDraw_o *v217; // x1
  UnityEngine_Object_o *v218; // x23
  const MethodInfo *v219; // x1
  const MethodInfo *v220; // x2
  const MethodInfo *v221; // x1
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v224; // w24
  const MethodInfo *v225; // x1
  int32_t Rarity; // w25
  struct UISprite_o *v227; // x8
  __int64 v228; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v230; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  const MethodInfo *v232; // x3
  struct SkillIconComponent_array *v233; // x8
  __int64 v234; // x8
  struct SkillInfo_array *v235; // x11
  int v236; // w9
  unsigned __int64 v237; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v239; // x14
  __int64 v240; // x23
  __int64 v241; // x25
  unsigned __int64 v242; // x26
  struct SkillInfo_array *v243; // x8
  struct UnityEngine_GameObject_array *v244; // x9
  int32_t *v245; // x27
  struct SkillIconComponent_array *v246; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v248; // x8
  struct SkillIconComponent_array *v249; // x8
  struct UIIconLabel_array *v250; // x8
  struct SkillIconComponent_array *v251; // x8
  __int64 v252; // x9
  int32_t v253; // w8
  bool v254; // w1
  int32_t v255; // w2
  int32_t v256; // w3
  __int64 v257; // x8
  _QWORD *v258; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v260; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v262; // x8
  __int64 v263; // x8
  struct SkillInfo_array *v264; // x11
  int v265; // w9
  signed __int64 v266; // x10
  unsigned __int64 v267; // x14
  SkillInfo_o *v268; // x14
  __int64 v269; // x23
  __int64 v270; // x25
  unsigned __int64 v271; // x26
  struct SkillInfo_array *v272; // x8
  struct UnityEngine_GameObject_array *v273; // x9
  int32_t *v274; // x27
  struct SkillIconComponent_array *v275; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v277; // x8
  struct SkillIconComponent_array *v278; // x8
  struct UIIconLabel_array *v279; // x8
  struct SkillIconComponent_array *v280; // x8
  __int64 v281; // x9
  int32_t v282; // w8
  bool v283; // w1
  int32_t v284; // w2
  int32_t v285; // w3
  __int64 v286; // x8
  _QWORD *v287; // x9
  __int64 v288; // x10
  __int64 v289; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *v291; // x23
  ServantCommandCardListComponent_o *v292; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v295; // w26
  UnityEngine_Object_o *v296; // x23
  int64_t pushUserSvtId; // x8
  bool v298; // w24
  UnityEngine_Object_o *v299; // x23
  UnityEngine_Object_o *v300; // x23
  UISprite_o *v301; // x24
  UISprite_o *v302; // x23
  UILabel_o *v303; // x24
  System_String_o *v304; // x23
  __int64 v305; // x2
  __int64 v306; // x3
  __int64 v307; // x4
  Il2CppObject *v308; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v310; // x2
  __int64 v311; // x3
  __int64 v312; // x4
  Il2CppObject **v313; // x9
  Il2CppObject *v314; // x23
  Il2CppObject *v315; // x0
  FollowerSelectItemListViewItemDraw_o *v316; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w23
  UILabel_o *v321; // x24
  UnityEngine_GameObject_o *v322; // x24
  FollowerSelectItemListViewItemDraw_c *v323; // x8
  float CLASS_BOARD_NOT_LABEL_POS_Y; // s0
  FollowerSelectItemListViewItemDraw_c *v325; // x8
  float v326; // s0
  float v327; // s8
  float v328; // s0
  float v329; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v332; // s10
  UnityEngine_GameObject_o *v333; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v336; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v338; // x22
  __int64 v339; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *typeTextSprite; // x23
  int32_t v342; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v344; // w22
  QuestPhaseEntity_o *v345; // x0
  QuestPhaseEntity_o *v346; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v348; // x23
  __int64 v349; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v350; // x21
  FollowerSelectItemListViewItemDraw_o *v351; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v354; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  Il2CppObject *v358; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v362; // s0
  float v363; // s8
  FollowerSelectItemListViewItemDraw_o *v364; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int64_t v369; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v372; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v377; // w21
  System_String_o *v378; // x0
  System_String_o *v379; // x0
  System_String_o *v380; // x0
  FollowerSelectItemListViewItemDraw_o *v381; // x0
  FollowerSelectItemListViewItem_o *v382; // x1
  const MethodInfo *v383; // x2
  int v384; // [xsp+18h] [xbp-C8h]
  System_String_o *spriteName; // [xsp+20h] [xbp-C0h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v387; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v389; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  UnityEngine_Color_o v400; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v401; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_48E6A8B & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, item);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_1B00CCC(&DataManager_TypeInfo, v18);
    sub_1B00CCC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1B00CCC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v22);
    sub_1B00CCC(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_1B00CCC(&Grade_TypeInfo, v24);
    sub_1B00CCC(&int_TypeInfo, v25);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v29);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v30);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B00CCC(&OptionManager_TypeInfo, v32);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_1B00CCC(&SkillInfo___TypeInfo, v36);
    sub_1B00CCC(&TitleInfoControl_TypeInfo, v37);
    sub_1B00CCC(&StringLiteral_3730/*"COMMON_NO_ENTRY"*/, v38);
    sub_1B00CCC(&StringLiteral_6368/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_1B00CCC(&StringLiteral_6347/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_1B00CCC(&StringLiteral_11428/*"SERVANT_HIDE_NAME"*/, v41);
    sub_1B00CCC(&StringLiteral_9220/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_1B00CCC(&StringLiteral_6348/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_1B00CCC(&StringLiteral_6301/*"FFFFFF"*/, v44);
    sub_1B00CCC(&StringLiteral_9221/*"NP_HIDE_NAME"*/, v45);
    sub_1B00CCC(&StringLiteral_11324/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1B00CCC(&StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_1B00CCC(&StringLiteral_9222/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_1B00CCC(&StringLiteral_6361/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_1B00CCC(&StringLiteral_6346/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_1B00CCC(&StringLiteral_19917/*"icon_support_01"*/, v51);
    sub_1B00CCC(&StringLiteral_9225/*"NP_MAX_COLOR_NAME"*/, v52);
    sub_1B00CCC(&StringLiteral_20031/*"img_frames_mask01"*/, v53);
    sub_1B00CCC(&StringLiteral_12178/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v54);
    sub_1B00CCC(&StringLiteral_12179/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v55);
    sub_1B00CCC(&StringLiteral_6360/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v56);
    sub_1B00CCC(&StringLiteral_6362/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v57);
    sub_1B00CCC(&StringLiteral_6345/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v58);
    sub_1B00CCC(&StringLiteral_18227/*"datalost_svt_select"*/, v59);
    sub_1B00CCC(&StringLiteral_6300/*"FFFF00"*/, v60);
    sub_1B00CCC(&StringLiteral_9195/*"NO_ENTRY_NAME"*/, v61);
    sub_1B00CCC(&StringLiteral_9219/*"NP_COLOR_NAME"*/, v62);
    sub_1B00CCC(&StringLiteral_15796/*"[{0}]+{1}[-]"*/, v63);
    sub_1B00CCC(&StringLiteral_1/*""*/, v64);
    sub_1B00CCC(&StringLiteral_19881/*"icon_friend"*/, v65);
    sub_1B00CCC(&StringLiteral_6349/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v66);
    sub_1B00CCC(&StringLiteral_19880/*"icon_follow"*/, v67);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_20071/*"img_listbg_02"*/, v68);
    byte_48E6A8B = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v389 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v387.fields.r = 0LL;
  *(_QWORD *)&v387.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_231;
  size = switchSkillUIList->fields._size;
  v71 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v71;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_231;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_231;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  if ( (v8->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
    if ( !this )
      goto LABEL_231;
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
      goto LABEL_231;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_231;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, mode == 0, 0LL);
  }
  if ( mode )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v7, (const MethodInfo *)item);
    p_followerInfo = &v7->fields.followerInfo;
    followerInfo = v7->fields.followerInfo;
    v76 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_36489956 = Grade__GetKind_36489956(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_36489956, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    spriteName = FollowerBgImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
      if ( !this )
        goto LABEL_231;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    dataLostMaskMessageLabel = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_231;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_231;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    if ( !v76 )
      goto LABEL_49;
    v82 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v81 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v392.fields.currentCryptoKey = v82;
    *(_QWORD *)&v392.fields.fakeValue = v81;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                     v392,
                                                     0LL);
    if ( (int)this < 1 )
    {
LABEL_49:
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                       v7,
                                                       (const MethodInfo *)item);
      if ( !v8->fields.servantFaceIcon )
        goto LABEL_231;
      ServantFaceIconComponent__SetEquipDangling(v8->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0LL);
      svtNameRangeLabel = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3730/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_231;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
      v98 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v98->fields.type )
        {
          case 1:
            playerNameLabel = v8->fields.playerNameLabel;
            if ( (byte_48E6A83 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_18800/*"error"*/, item);
              byte_48E6A83 = 1;
              v98 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_231;
            v117 = v98 ? &v98->fields.userName : (System_String_o **)&StringLiteral_18800/*"error"*/;
            UILabel__set_text(playerNameLabel, *v117, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v118 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Set_37024000((UIIconLabel_o *)this, 2, v118, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v136 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v137 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v144 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v137, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v136, v144, 0LL);
            if ( !loginDataLabel )
              goto LABEL_231;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_231;
            v145 = &StringLiteral_19881/*"icon_friend"*/;
            goto LABEL_189;
          case 2:
            v119 = v8->fields.playerNameLabel;
            if ( (byte_48E6A83 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_18800/*"error"*/, item);
              byte_48E6A83 = 1;
              v98 = *p_followerInfo;
            }
            if ( !v119 )
              goto LABEL_231;
            v120 = v98 ? &v98->fields.userName : (System_String_o **)&StringLiteral_18800/*"error"*/;
            UILabel__set_text(v119, *v120, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v121 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Set_37024000((UIIconLabel_o *)this, 2, v121, 0, 0, 0LL, 0, 0, 0, 0LL);
            v138 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v139 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v140 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v146 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v140, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v139, v146, 0LL);
            if ( !v138 )
              goto LABEL_231;
            UILabel__set_text(v138, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_231;
            UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
            goto LABEL_191;
          case 3:
          case 4:
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
            if ( !this )
              goto LABEL_231;
            spriteName = (System_String_o *)StringLiteral_20071/*"img_listbg_02"*/;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
            if ( !this )
              goto LABEL_231;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_231;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19917/*"icon_support_01"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_231;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
            if ( !this )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_231;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
            if ( !this )
              goto LABEL_231;
            v99 = 0;
            goto LABEL_195;
          case 5:
            v122 = v8->fields.playerNameLabel;
            if ( (byte_48E6A83 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_18800/*"error"*/, item);
              byte_48E6A83 = 1;
              v98 = *p_followerInfo;
            }
            if ( !v122 )
              goto LABEL_231;
            v123 = v98 ? &v98->fields.userName : (System_String_o **)&StringLiteral_18800/*"error"*/;
            UILabel__set_text(v122, *v123, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v124 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Set_37024000((UIIconLabel_o *)this, 2, v124, 0, 0, 0LL, 0, 0, 0, 0LL);
            v141 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v142 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v143 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v147 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v143, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v142, v147, 0LL);
            if ( !v141 )
              goto LABEL_231;
            UILabel__set_text(v141, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_231;
            v145 = &StringLiteral_19880/*"icon_follow"*/;
LABEL_189:
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v145, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_231;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
LABEL_191:
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
            if ( !this )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_231;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
            if ( !this )
              goto LABEL_231;
            v99 = 1;
LABEL_195:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v99, 0LL);
            break;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v97);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v148);
      svtNpRangeLabel = v8->fields.svtNpRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_9195/*"NO_ENTRY_NAME"*/,
                                                       0LL);
      if ( !svtNpRangeLabel )
        goto LABEL_231;
      UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
      svtNpCommandCard = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtNpCommandCard;
        if ( !this )
          goto LABEL_231;
        ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
      if ( !this )
        goto LABEL_231;
      UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_231;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
      if ( !this )
        goto LABEL_231;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      eventUpValIcon = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
        if ( !this )
          goto LABEL_231;
        EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
      }
      skillIconList = v8->fields.skillIconList;
      if ( !skillIconList )
        goto LABEL_231;
      v153 = sub_1B00D74(SkillInfo___TypeInfo, skillIconList->max_length);
      v8->fields.skillInfoList = (struct SkillInfo_array *)v153;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.skillInfoList, v153, v154, v155);
      v156 = v8->fields.skillIconList;
      if ( !v156 )
        goto LABEL_231;
      v157 = 0LL;
      while ( (int)v157 < (signed int)v156->max_length )
      {
        skillBaseList = v8->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v157 >= skillBaseList->max_length )
LABEL_727:
            sub_1B00F30(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v157];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v156 = v8->fields.skillIconList;
            ++v157;
            if ( v156 )
              continue;
          }
        }
        goto LABEL_231;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_231;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      appendSkillIconList = v8->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_231;
      v160 = sub_1B00D74(SkillInfo___TypeInfo, appendSkillIconList->max_length);
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)v160;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.appendSkillInfoList, v160, v161, v162);
      v163 = v8->fields.appendSkillIconList;
      if ( !v163 )
        goto LABEL_231;
      v164 = 0LL;
      while ( (int)v164 < (signed int)v163->max_length )
      {
        appendSkillBaseList = v8->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_231;
        if ( (unsigned int)v164 >= appendSkillBaseList->max_length )
          goto LABEL_727;
        this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v164];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v163 = v8->fields.appendSkillIconList;
          ++v164;
          if ( v163 )
            continue;
        }
        goto LABEL_231;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      if ( !this )
        goto LABEL_231;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      svtCommandCardList = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_231;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      pushSprite = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        goto LABEL_244;
      }
LABEL_580:
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_231;
      LODWORD(v326) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
      if ( !this )
        goto LABEL_231;
      v327 = v326;
      LODWORD(v328) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_231;
      v329 = v328;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
      if ( !this )
        goto LABEL_231;
      v332 = LocalPositionX;
      v333 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(v333, (float)(v329 * 0.5) + (float)(v327 + v332), 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
      if ( !this )
        goto LABEL_231;
      UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_36489956, 0LL);
      baseSprite = v8->fields.baseSprite;
      if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
      FollowerRootComponent__SetFollowerBase(baseSprite, spriteName, 0LL);
      if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        maskMessageLabel = v8->fields.maskMessageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6360/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
                                                         0LL);
        if ( !maskMessageLabel )
          goto LABEL_231;
        UILabel__set_text(maskMessageLabel, (System_String_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
        if ( !this )
          goto LABEL_231;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
        if ( !this )
          goto LABEL_231;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_231;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      else
      {
        if ( !v7->fields.isUniqueSvtRestriction && !v7->fields.isUniqueIndividualityRestriction )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_231;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
          if ( !this )
            goto LABEL_231;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
          if ( !this )
            goto LABEL_231;
          FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_231;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v336 = 0;
LABEL_599:
          classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
          {
            if ( !v76 )
              goto LABEL_628;
            v339 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
            v338 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v398.fields.currentCryptoKey = v339;
            *(_QWORD *)&v398.fields.fakeValue = v338;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v398, 0LL) < 1
              || (v336 & 1) != 0
              || ServantLeaderInfo__IsHideSupport(v76, 0LL)
              || v7->fields._IsDataLost_k__BackingField )
            {
              goto LABEL_628;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !this )
              goto LABEL_231;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
              goto LABEL_628;
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !this )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)this->fields.rangeSprite;
            if ( !this )
              goto LABEL_231;
            item = (FollowerSelectItemListViewItem_o *)FollowerRootComponent_TypeInfo;
            methodPtr_low = LOBYTE(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
              || (FollowerRootComponent_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerRootComponent_TypeInfo )
            {
              sub_1B011E8(this);
              FollowerSelectItemListViewItemDraw__setupMessageUI(v381, v382, v383);
              return;
            }
            typeTextSprite = this->fields.typeTextSprite;
            if ( !typeTextSprite )
              goto LABEL_628;
            v342 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
            if ( !v342 )
              goto LABEL_628;
            m_CancellationTokenSource = (int32_t)typeTextSprite->fields.m_CancellationTokenSource;
            if ( !m_CancellationTokenSource )
              goto LABEL_628;
            v344 = v342;
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !this )
              goto LABEL_231;
            v345 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v344, m_CancellationTokenSource, 0LL);
            if ( v345 )
            {
              v346 = v345;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_231;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantMaster___);
              v349 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
              v348 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
              v350 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v399.fields.currentCryptoKey = v349;
              *(_QWORD *)&v399.fields.fakeValue = v348;
              this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               v399,
                                                               0LL);
              if ( !v350 )
                goto LABEL_231;
              this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                               v350,
                                                               (int32_t)this,
                                                               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !this )
                goto LABEL_231;
              v351 = this;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
              if ( !this )
                goto LABEL_231;
              ServantClassCompatibilityIconComponent__SetIcon(
                (ServantClassCompatibilityIconComponent_o *)this,
                (int32_t)v351->fields.svtNameRangeLabel,
                v346->fields.classIds,
                2,
                0LL);
            }
            else
            {
LABEL_628:
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
              if ( !this )
                goto LABEL_231;
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
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_231;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
          }
          recommendedIconText = (UnityEngine_Object_o *)v8->fields.recommendedIconText;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
          {
            v354 = v8->fields.recommendedIconText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6362/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                             0LL);
            if ( !v354 )
              goto LABEL_231;
            UILabel__set_text(v354, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedIconText;
            if ( !this )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_231;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
          }
          numberOfUsabletimes = (UnityEngine_Object_o *)v8->fields.numberOfUsabletimes;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
            goto LABEL_664;
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( questRestrictionInfo )
          {
            eventId = questRestrictionInfo->fields.eventId;
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventDetailMaster___);
            entity = 0LL;
            if ( !this )
              goto LABEL_231;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    questRestrictionInfo->fields.eventId,
                    (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
              goto LABEL_657;
            v358 = entity;
            if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
            if ( TitleInfoControl__IsEnableEventShopButton_36057188((EventDetailEntity_o *)v358, 0LL) )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)entity;
              if ( !entity )
                goto LABEL_231;
              LODWORD(questRestrictionInfo) = EventDetailEntity__HasFlag(
                                                (EventDetailEntity_o *)entity,
                                                0x1000000000LL,
                                                0LL);
            }
            else
            {
LABEL_657:
              LODWORD(questRestrictionInfo) = 0;
            }
          }
          else
          {
            eventId = -1;
          }
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !this )
            goto LABEL_231;
          if ( BYTE4(this->fields.typeTextSprite) )
            goto LABEL_661;
          if ( *p_followerInfo )
          {
            type = (*p_followerInfo)->fields.type;
            if ( type != 3 )
            {
              item = 0LL;
              if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
                goto LABEL_662;
LABEL_690:
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
                v369 = *p_followerInfo ? (*p_followerInfo)->fields.userId : 0LL;
                if ( this )
                {
                  UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                                (EventBoostItemUsedMaster_o *)this,
                                eventId,
                                v369,
                                0LL);
                  v372 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v372 = BalanceConfig_TypeInfo;
                  }
                  MaxFriendChocolateUse = v372->static_fields->MaxFriendChocolateUse;
                  v389 = MaxFriendChocolateUse;
                  if ( UsedCount )
                  {
                    if ( !v372->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v372);
                      MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                    }
                    v389 = MaxFriendChocolateUse - UsedCount->fields.count;
                  }
                  numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_6347/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                                   0LL);
                  if ( numberOfUsabletimesPrefixLabel )
                  {
                    UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
                    numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
                    this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v389, 0LL);
                    if ( numberOfUsabletimesLabel )
                    {
                      UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
                      numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
                      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_6348/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                                       0LL);
                      if ( numberOfUsabletimesSuffixLabel )
                      {
                        UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
                        v377 = v389;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        if ( v377 )
                        {
                          v378 = LocalizationManager__Get((System_String_o *)StringLiteral_6345/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                          UnityEngine_ColorUtility__TryParseHtmlString(v378, &color, 0LL);
                          v379 = LocalizationManager__Get((System_String_o *)StringLiteral_6346/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                          UnityEngine_ColorUtility__TryParseHtmlString(v379, &v387, 0LL);
                        }
                        else
                        {
                          v380 = LocalizationManager__Get((System_String_o *)StringLiteral_6349/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                          UnityEngine_ColorUtility__TryParseHtmlString(v380, &color, 0LL);
                          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                          if ( !this )
                            goto LABEL_231;
                          UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                          v387 = color;
                        }
                        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
                        if ( this )
                        {
                          UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                          if ( this )
                          {
                            UIWidget__set_color((UIWidget_o *)this, v387, 0LL);
                            item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
                            goto LABEL_662;
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_231:
              sub_1B00F28(this, item);
            }
          }
          else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            goto LABEL_690;
          }
LABEL_661:
          item = 0LL;
LABEL_662:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimes;
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
LABEL_664:
          recommendedUser = (UnityEngine_Object_o *)v8->fields.recommendedUser;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedUser;
            if ( !this )
              goto LABEL_231;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)this,
              v7->fields._isRecommendedUser_k__BackingField,
              0LL);
          }
          return;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
        if ( !this )
          goto LABEL_231;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
        if ( !this )
          goto LABEL_231;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
        if ( !this )
          goto LABEL_231;
        FlashingIconComponent__SetFast((FlashingIconComponent_o *)this, 0LL);
        warningMessageLabel = v8->fields.warningMessageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6361/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                         0LL);
        if ( !warningMessageLabel )
          goto LABEL_231;
        UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_231;
        LODWORD(v362) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_231;
        v363 = v362;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        v364 = this;
        warningMessageWidth = (float)v8->fields.warningMessageWidth;
        if ( v363 <= warningMessageWidth )
        {
          if ( !byte_48DD9F6 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, item);
            byte_48DD9F6 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          x = static_fields->oneVector.fields.x;
          y = static_fields->oneVector.fields.y;
          z = static_fields->oneVector.fields.z;
        }
        else
        {
          x = warningMessageWidth / v363;
          z = 1.0;
          y = 1.0;
        }
        if ( !v364 )
          goto LABEL_231;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v364, *(UnityEngine_Vector3_o *)&x, 0LL);
      }
      v336 = 1;
      goto LABEL_599;
    }
    v83 = v7->fields.followerInfo;
    if ( !v83 )
      goto LABEL_231;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_231;
    ServantFaceIconComponent__Set_37012136(
      (ServantFaceIconComponent_o *)this,
      v76,
      v7->fields.iconLabelInfo1,
      v7->fields.iconLabelInfo2,
      0,
      v83->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v84);
    FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v85);
    FollowerSelectItemListViewItem__GetNpInfo(v7, &tdInfo, v86);
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(v7, v87);
    if ( !tdInfo )
      goto LABEL_231;
    name = tdInfo->fields.name;
    v89 = (int)this;
    v90 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    if ( ServantLeaderInfo__IsNpc(v76, 0LL) )
    {
      dispLimitCount = v76->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v76->fields.npcFlag, 0LL) )
      {
        v92 = tdInfo;
        v94 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v93 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v393.fields.currentCryptoKey = v94;
        *(_QWORD *)&v393.fields.fakeValue = v93;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                         v393,
                                                         0LL);
        if ( !v92 )
          goto LABEL_231;
        name = TreasureDvcInfo__GetName(v92, (int32_t)this, 0LL);
      }
      v95 = !NpcServantFollowerEntity__IsHideRarity(v76->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v76, 0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_231;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           (ServantLimitSpoilerProtectionMaster_o *)this,
                           v76->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v95 = 1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_231;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v95, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_231;
    v384 = v89;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)this,
      !v7->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v76, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v101 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
      v102 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
      v103 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v394.fields.currentCryptoKey = v101;
      *(_QWORD *)&v394.fields.fakeValue = v102;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                       v394,
                                                       0LL);
      if ( !v103 )
        goto LABEL_231;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v103, (int32_t)this, dispLimitCount, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v104 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v105 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v106 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    v107 = (ServantLimitAddMaster_o *)v104;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v395.fields.currentCryptoKey = v105;
    *(_QWORD *)&v395.fields.fakeValue = v106;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                     v395,
                                                     0LL);
    if ( !tdInfo || !v107 )
      goto LABEL_231;
    p_followerInfo = &v7->fields.followerInfo;
    this = (FollowerSelectItemListViewItemDraw_o *)ServantLimitAddMaster__GetOverwriteTDName(
                                                     v107,
                                                     (int32_t)this,
                                                     dispLimitCount,
                                                     name,
                                                     tdInfo->fields.lv,
                                                     0LL);
    v108 = v7->fields.followerInfo;
    if ( v108 )
    {
      v109 = (Il2CppObject *)this;
      switch ( v108->fields.type )
      {
        case 1:
          v126 = v8->fields.playerNameLabel;
          if ( (byte_48E6A83 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_18800/*"error"*/, item);
            byte_48E6A83 = 1;
            v108 = *p_followerInfo;
          }
          if ( !v126 )
            goto LABEL_231;
          v127 = v108 ? &v108->fields.userName : (System_String_o **)&StringLiteral_18800/*"error"*/;
          UILabel__set_text(v126, *v127, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v128 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_231;
          UIIconLabel__Set_37024000((UIIconLabel_o *)this, 2, v128, 0, 0, 0LL, 0, 0, 0, 0LL);
          v168 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v169 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v170 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v177 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v170, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v169, v177, 0LL);
          if ( !v168 )
            goto LABEL_231;
          UILabel__set_text(v168, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_231;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19881/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_231;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v178 = v7->fields.questRestrictionInfo;
          if ( !v178 )
            goto LABEL_272;
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_231;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !this )
            goto LABEL_231;
          this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           v178->fields.questId,
                                                           (const MethodInfo_2FE6A4C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_231;
          LOBYTE(v178) = QuestEntity__HasFlag_38221784((QuestEntity_o *)this, 0x8000000LL, v178->fields.questPhase, 0LL);
LABEL_272:
          v179 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v179 = BalanceConfig_TypeInfo;
          }
          v180 = v179->static_fields;
          v181 = LocalizationManager_TypeInfo;
          v182 = 204LL;
          if ( ((unsigned __int8)v178 & 1) != 0 )
            v182 = 648LL;
          if ( v89 <= 1 )
            v183 = (System_String_o **)&StringLiteral_9219/*"NP_COLOR_NAME"*/;
          else
            v183 = (System_String_o **)&StringLiteral_9225/*"NP_MAX_COLOR_NAME"*/;
          FollowerPointNotFriend = *(int32_t *)((char *)&v180->CriticalRateToAddByQuickFirstBonus + v182);
          v184 = *v183;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
LABEL_297:
            j_il2cpp_runtime_class_init_0(v181);
LABEL_298:
          v192 = LocalizationManager__Get(v184, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v192, v109, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_231;
          v90 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_231;
          v125 = 1;
LABEL_302:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v125, 0LL);
          break;
        case 2:
          v129 = v8->fields.playerNameLabel;
          if ( (byte_48E6A83 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_18800/*"error"*/, item);
            byte_48E6A83 = 1;
            v108 = *p_followerInfo;
          }
          if ( !v129 )
            goto LABEL_231;
          v130 = v108 ? &v108->fields.userName : (System_String_o **)&StringLiteral_18800/*"error"*/;
          UILabel__set_text(v129, *v130, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v131 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_231;
          UIIconLabel__Set_37024000((UIIconLabel_o *)this, 2, v131, 0, 0, 0LL, 0, 0, 0, 0LL);
          v171 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v172 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v173 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v185 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v173, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v172, v185, 0LL);
          if ( !v171 )
            goto LABEL_231;
          UILabel__set_text(v171, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_231;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          v186 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v186 = BalanceConfig_TypeInfo;
          }
          v187 = v186->static_fields;
          v188 = (System_String_o **)&StringLiteral_9225/*"NP_MAX_COLOR_NAME"*/;
          v181 = LocalizationManager_TypeInfo;
          FollowerPointNotFriend = v187->FollowerPointNotFriend;
          goto LABEL_294;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_231;
          v110 = StringLiteral_20071/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          if ( !this )
            goto LABEL_231;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
          if ( !this )
            goto LABEL_231;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_231;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19917/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_231;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v111 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v111 = BalanceConfig_TypeInfo;
          }
          spriteName = (System_String_o *)v110;
          FollowerPointNotFriend = v111->static_fields->FollowerPointNpc;
          if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
          {
            v113 = (System_String_o **)&StringLiteral_9225/*"NP_MAX_COLOR_NAME"*/;
            if ( v384 <= 1 )
              v113 = (System_String_o **)&StringLiteral_9219/*"NP_COLOR_NAME"*/;
            v114 = *v113;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v115 = LocalizationManager__Get(v114, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v115 = LocalizationManager__Get((System_String_o *)StringLiteral_9220/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            v109 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9221/*"NP_HIDE_NAME"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v115, v109, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_231;
          v90 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_231;
          v125 = 0;
          goto LABEL_302;
        case 5:
          v132 = v8->fields.playerNameLabel;
          if ( (byte_48E6A83 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_18800/*"error"*/, item);
            byte_48E6A83 = 1;
            v108 = *p_followerInfo;
          }
          if ( !v132 )
            goto LABEL_231;
          v133 = v108 ? &v108->fields.userName : (System_String_o **)&StringLiteral_18800/*"error"*/;
          UILabel__set_text(v132, *v133, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v134 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_231;
          UIIconLabel__Set_37024000((UIIconLabel_o *)this, 2, v134, 0, 0, 0LL, 0, 0, 0, 0LL);
          v174 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v175 = LocalizationManager__Get((System_String_o *)StringLiteral_13087/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v176 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v189 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v176, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v175, v189, 0LL);
          if ( !v174 )
            goto LABEL_231;
          UILabel__set_text(v174, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_231;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19880/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_231;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v190 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v190 = BalanceConfig_TypeInfo;
          }
          v191 = v190->static_fields;
          v188 = (System_String_o **)&StringLiteral_9225/*"NP_MAX_COLOR_NAME"*/;
          v181 = LocalizationManager_TypeInfo;
          FollowerPointNotFriend = v191->FollowFriendPoint;
LABEL_294:
          if ( v89 <= 1 )
            v188 = (System_String_o **)&StringLiteral_9219/*"NP_COLOR_NAME"*/;
          v184 = *v188;
          if ( !v181->_2.cctor_finished )
            goto LABEL_297;
          goto LABEL_298;
        default:
          FollowerPointNotFriend = 0;
          break;
      }
    }
    else
    {
      FollowerPointNotFriend = 0;
    }
    IsHideSupport = ServantLeaderInfo__IsHideSupport(v76, 0LL);
    v195 = v8->fields.svtNameRangeLabel;
    if ( IsHideSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11428/*"SERVANT_HIDE_NAME"*/,
                                                       0LL);
      if ( !v195 )
        goto LABEL_231;
      UIRangeLabel__Set(v195, (System_String_o *)this, 0LL, 1, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_231;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !*p_followerInfo || (*p_followerInfo)->fields.type != 4 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9222/*"NP_HIDE_NAME_LEVEL"*/,
                                                         0LL);
        v90 = this;
      }
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v7, v194);
      if ( !v195 )
        goto LABEL_231;
      UIRangeLabel__Set(v195, (System_String_o *)this, 0LL, 1, 0, 0LL);
    }
    if ( !tdInfo )
      goto LABEL_231;
    strengthStatus = tdInfo->fields.strengthStatus;
    if ( ServantLeaderInfo__IsHideSupport(v76, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v76, 0LL) )
      strengthStatus = 0;
    v197 = v8->fields.svtNpRangeLabel;
    this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
    if ( !v197 )
      goto LABEL_231;
    UIRangeLabel__Set(v197, (System_String_o *)v90, (System_String_o *)this, 0, 0, 0LL);
    v198 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v198, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
      v200 = v8->fields.svtNpCommandCard;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v200 )
          goto LABEL_231;
        ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
      }
      else
      {
        if ( !v200 )
          goto LABEL_231;
        ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
      }
    }
    FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(v7, v199);
    friendPointCampaignEntity = v7->fields.friendPointCampaignEntity;
    v203 = FriendPointUpVal;
    v204 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
    if ( !this )
      goto LABEL_231;
    UIIconLabel__Set_37024000((UIIconLabel_o *)this, 55, FollowerPointNotFriend, 0, 0, 0LL, 0, 0, 0, 0LL);
    if ( v203 > 0 || v204 >= 1 )
    {
      if ( v204 <= 0 )
        v206 = 1000;
      else
        v206 = v204;
      v207 = 274877907LL * (v206 * v203 + (v206 - 1000) * FollowerPointNotFriend);
      friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      v209 = (v207 >> 38) + ((unsigned __int64)v207 >> 63);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v210 = LocalizationManager__Get((System_String_o *)StringLiteral_6368/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
      TimesToRestart_k__BackingField = v209;
      v214 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v211, v212, v213);
      this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v210, v214, 0LL);
      if ( !friendPointData2Label )
        goto LABEL_231;
      v205 = this;
      this = friendPointData2Label;
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_231;
      v205 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v205, 0LL);
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
        goto LABEL_231;
      UILabel__set_gradientTop(campaignLabel, (UnityEngine_Color_o)this->fields.skillButtonList->obj, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
      if ( !this )
        goto LABEL_231;
      UILabel__set_gradientBottom(
        (UILabel_o *)this,
        FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
        0LL);
      campaignLabel = v8->fields.campaignLabel;
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignName(
                                                       v7,
                                                       v216);
      if ( !campaignLabel )
        goto LABEL_231;
      v217 = this;
    }
    else
    {
      if ( !campaignLabel )
        goto LABEL_231;
      v217 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(campaignLabel, (System_String_o *)v217, 0LL);
    v218 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v218, 0LL, 0LL) )
    {
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v7, v219) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v221);
        if ( !this )
          goto LABEL_231;
        baseButton = this->fields.baseButton;
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v396.fields.currentCryptoKey = baseButton;
        *(_QWORD *)&v396.fields.fakeValue = servantFaceIcon;
        v224 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v396, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v225);
        if ( !this )
          goto LABEL_231;
        Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
      }
      else
      {
        Rarity = -1;
        v224 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v221);
      if ( !this )
        goto LABEL_231;
      if ( this->fields.typeTextSprite )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                         v7,
                                                         (const MethodInfo *)item);
        if ( !this )
          goto LABEL_231;
        v227 = this->fields.typeTextSprite;
        if ( !v227 )
          goto LABEL_231;
        topAnchor = v227->fields.topAnchor;
        v228 = *(_QWORD *)&v227->fields.updateAnchors;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v397.fields.currentCryptoKey = topAnchor;
        *(_QWORD *)&v397.fields.fakeValue = v228;
        v230 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v397, 0LL);
      }
      else
      {
        v230 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
      if ( !this )
        goto LABEL_231;
      EventUpValIconComponent__Set(
        (EventUpValIconComponent_o *)this,
        v7->fields.eventUpValItemList,
        v224,
        Rarity,
        v230,
        0LL);
    }
    p_skillInfoList = &v8->fields.skillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                     v7,
                                                     &v8->fields.skillInfoList,
                                                     v220);
    v233 = v8->fields.skillIconList;
    if ( !v233 )
      goto LABEL_231;
    v234 = *(_QWORD *)&v233->max_length;
    if ( v234 << 32 >= 1 )
    {
      v235 = *p_skillInfoList;
      v236 = 0;
      v237 = 0LL;
      while ( v235 )
      {
        max_length = v235->max_length;
        if ( (__int64)v237 < (int)max_length )
        {
          if ( v237 >= max_length )
            goto LABEL_727;
          v239 = (*p_skillInfoList)->m_Items[v237];
          if ( v239 && v239->fields.id >= 1 )
            v236 = v237 + 1;
        }
        if ( (__int64)++v237 >= (int)v234 )
          goto LABEL_384;
      }
      goto LABEL_231;
    }
    v236 = 0;
LABEL_384:
    if ( (int)v234 >= 1 )
    {
      v240 = v236;
      v241 = 4LL;
      do
      {
        v242 = v241 - 4;
        if ( v241 - 4 >= v240 )
        {
          v248 = v8->fields.skillBaseList;
          if ( !v248 )
            goto LABEL_231;
          if ( v242 >= v248->max_length )
            goto LABEL_727;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v248->obj.klass + v241);
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v243 = *p_skillInfoList;
          if ( !*p_skillInfoList )
            goto LABEL_231;
          if ( v242 >= v243->max_length )
            goto LABEL_727;
          v244 = v8->fields.skillBaseList;
          if ( !v244 )
            goto LABEL_231;
          if ( v242 >= v244->max_length )
            goto LABEL_727;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v244->obj.klass + v241);
          if ( !this )
            goto LABEL_231;
          v245 = (int32_t *)*((_QWORD *)&v243->obj.klass + v241);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v245 )
              v245[4] = 0;
            v246 = v8->fields.skillIconList;
            if ( !v246 )
              goto LABEL_231;
            if ( v242 >= v246->max_length )
              goto LABEL_727;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v246->obj.klass + v241);
            if ( !this )
              goto LABEL_231;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_231;
            if ( v242 >= skillLevelIconLabelList->max_length )
              goto LABEL_727;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v241);
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v249 = v8->fields.skillIconList;
            if ( !v249 )
              goto LABEL_231;
            if ( v242 >= v249->max_length )
              goto LABEL_727;
            if ( !v245 )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v249->obj.klass + v241);
            if ( !this )
              goto LABEL_231;
            SkillIconComponent__Set_37023188((SkillIconComponent_o *)this, v245[4], v245[5], v245[12], v245[13], 0LL);
            v250 = v8->fields.skillLevelIconLabelList;
            if ( !v250 )
              goto LABEL_231;
            if ( v242 >= v250->max_length )
              goto LABEL_727;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v250->obj.klass + v241);
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Set_37024000((UIIconLabel_o *)this, 48, v245[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v251 = v8->fields.skillIconList;
        if ( !v251 )
          goto LABEL_231;
        v252 = v241 - 3;
        ++v241;
      }
      while ( v252 < (int)v251->max_length );
    }
    v253 = v8->fields.displaySkill;
    if ( v253 == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_231;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_231;
      item = (FollowerSelectItemListViewItem_o *)v8->fields.skillInfoUiWidget;
      v257 = *(_QWORD *)&this->fields.m_CachedPtr;
      v258 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v257 )
        goto LABEL_231;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v257 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
      }
      else
      {
        v260 = v257 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v260 + 32) = item;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v260 + 32), (int32_t)item, v255, v256);
      }
    }
    else
    {
      if ( v253 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        v254 = 0;
      }
      else
      {
        if ( v253 )
          goto LABEL_433;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_231;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          1.0);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        v254 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v254, 0LL);
    }
LABEL_433:
    p_appendSkillInfoList = &v8->fields.appendSkillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                     v7,
                                                     &v8->fields.appendSkillInfoList,
                                                     v7->fields.isNpc,
                                                     v232);
    v262 = v8->fields.appendSkillIconList;
    if ( !v262 )
      goto LABEL_231;
    v263 = *(_QWORD *)&v262->max_length;
    if ( v263 << 32 < 1 )
    {
      v265 = 0;
    }
    else
    {
      v264 = *p_appendSkillInfoList;
      v265 = 0;
      v266 = 0LL;
      do
      {
        if ( v264 )
        {
          v267 = v264->max_length;
          if ( v266 < (int)v267 )
          {
            if ( v266 >= v267 )
              goto LABEL_727;
            v268 = (*p_appendSkillInfoList)->m_Items[v266];
            if ( v268 && v268->fields.id >= 1 )
              v265 = v266 + 1;
          }
        }
        ++v266;
      }
      while ( v266 < (int)v263 );
    }
    if ( (int)v263 >= 1 )
    {
      v269 = v265;
      v270 = 4LL;
      do
      {
        v271 = v270 - 4;
        if ( v270 - 4 >= v269 )
        {
          v277 = v8->fields.appendSkillBaseList;
          if ( !v277 )
            goto LABEL_231;
          if ( v271 >= v277->max_length )
            goto LABEL_727;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v277->obj.klass + v270);
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v272 = *p_appendSkillInfoList;
          if ( !*p_appendSkillInfoList )
            goto LABEL_231;
          if ( v271 >= v272->max_length )
            goto LABEL_727;
          v273 = v8->fields.appendSkillBaseList;
          if ( !v273 )
            goto LABEL_231;
          if ( v271 >= v273->max_length )
            goto LABEL_727;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v273->obj.klass + v270);
          if ( !this )
            goto LABEL_231;
          v274 = (int32_t *)*((_QWORD *)&v272->obj.klass + v270);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v274 )
              v274[4] = 0;
            v275 = v8->fields.appendSkillIconList;
            if ( !v275 )
              goto LABEL_231;
            if ( v271 >= v275->max_length )
              goto LABEL_727;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v275->obj.klass + v270);
            if ( !this )
              goto LABEL_231;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
            if ( !appendSkillLevelIconLabelList )
              goto LABEL_231;
            if ( v271 >= appendSkillLevelIconLabelList->max_length )
              goto LABEL_727;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v270);
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v278 = v8->fields.appendSkillIconList;
            if ( !v278 )
              goto LABEL_231;
            if ( v271 >= v278->max_length )
              goto LABEL_727;
            if ( !v274 )
              goto LABEL_231;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v278->obj.klass + v270);
            if ( !this )
              goto LABEL_231;
            SkillIconComponent__Set_37023188((SkillIconComponent_o *)this, v274[4], v274[5], v274[12], v274[13], 0LL);
            v279 = v8->fields.appendSkillLevelIconLabelList;
            if ( !v279 )
              goto LABEL_231;
            if ( v271 >= v279->max_length )
              goto LABEL_727;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v279->obj.klass + v270);
            if ( !this )
              goto LABEL_231;
            UIIconLabel__Set_37024000((UIIconLabel_o *)this, 48, v274[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v280 = v8->fields.appendSkillIconList;
        if ( !v280 )
          goto LABEL_231;
        v281 = v270 - 3;
        ++v270;
      }
      while ( v281 < (int)v280->max_length );
    }
    v282 = v8->fields.displaySkill;
    if ( v282 == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      if ( !this )
        goto LABEL_231;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_231;
      item = (FollowerSelectItemListViewItem_o *)v8->fields.appendSkillInfoUiWidget;
      v286 = *(_QWORD *)&this->fields.m_CachedPtr;
      v287 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v286 )
        goto LABEL_231;
      v288 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v288 >= *(_DWORD *)(v286 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v287[4] + 192LL) + 112LL));
      }
      else
      {
        v289 = v286 + 8 * v288;
        LODWORD(this->fields.m_CancellationTokenSource) = v288 + 1;
        *(_QWORD *)(v289 + 32) = item;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v289 + 32), (int32_t)item, v284, v285);
      }
    }
    else
    {
      if ( v282 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_231;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          1.0);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        v283 = 1;
      }
      else
      {
        if ( v282 )
          goto LABEL_498;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_231;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        v283 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v283, 0LL);
    }
    if ( v8->fields.displaySkill == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_231;
      switchSkillInfo = v8->fields.switchSkillInfo;
      this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)this,
                                                       (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !switchSkillInfo )
        goto LABEL_231;
      SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
    }
LABEL_498:
    v291 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v291, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
      v292 = v8->fields.svtCommandCardList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v292 )
          goto LABEL_231;
        ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
      }
      else
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, (const MethodInfo *)item);
        commandCardParam = v76->fields.commandCardParam;
        v295 = SvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v76, 0LL);
        if ( !v292 )
          goto LABEL_231;
        ServantCommandCardListComponent__Set_37001068(
          v292,
          v295,
          commandCardParam,
          (System_Int32_array *)this,
          2,
          1,
          0LL);
      }
    }
    v296 = (UnityEngine_Object_o *)v8->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v296, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*p_followerInfo )
        goto LABEL_231;
      pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
      v298 = pushUserSvtId && pushUserSvtId == v76->fields.userSvtId;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
      if ( !this )
        goto LABEL_231;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v298, 0LL);
    }
    v299 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v299, 0LL, 0LL) )
    {
      v300 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v300, 0LL, 0LL) )
      {
        if ( v7->fields._IsDataLost_k__BackingField )
        {
          v301 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(v301, (System_String_o *)StringLiteral_18227/*"datalost_svt_select"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_231;
          v400.fields.r = 1.0;
          v400.fields.g = 1.0;
          v400.fields.b = 1.0;
          v400.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v400, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_231;
        }
        else
        {
          if ( v7->fields._TimesToRestart_k__BackingField < 1 )
            goto LABEL_543;
          v302 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v302, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_231;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20031/*"img_frames_mask01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_231;
          v401.fields.a = 0.62353;
          v401.fields.r = 0.0;
          v401.fields.g = 0.0;
          v401.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v401, 0LL);
          v303 = v8->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v304 = LocalizationManager__Get((System_String_o *)StringLiteral_11324/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
          v308 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v305, v306, v307);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v304, v308, 0LL);
          if ( !v303 )
            goto LABEL_231;
          UILabel__set_text(v303, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_231;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_231;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !this )
            goto LABEL_231;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_231;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
    }
LABEL_543:
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
          goto LABEL_231;
        v316 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
          v313 = (Il2CppObject **)&StringLiteral_6300/*"FFFF00"*/;
        else
          v313 = (Il2CppObject **)&StringLiteral_6301/*"FFFFFF"*/;
        v314 = *v313;
        TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
        v315 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v310, v311, v312);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_60340120(
                                                         (System_String_o *)StringLiteral_15796/*"[{0}]+{1}[-]"*/,
                                                         v314,
                                                         v315,
                                                         0LL);
        if ( !v8->fields.openClassBoardNumLabel )
          goto LABEL_231;
        v316 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
      }
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v316, 0LL);
    }
    classBoardOpenButton = (UnityEngine_Object_o *)v8->fields.classBoardOpenButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
      if ( !this )
        goto LABEL_231;
      IsReleasedClassBoard_k__BackingField = v7->fields._IsReleasedClassBoard_k__BackingField;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_231;
      if ( IsReleasedClassBoard_k__BackingField )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
        if ( !this )
          goto LABEL_231;
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
          v321 = v8->fields.classBoardOpenButtonLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12179/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                             0LL);
            if ( !v321 )
              goto LABEL_231;
            UILabel__set_text(v321, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_231;
            v322 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v325 = FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
              v325 = FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            CLASS_BOARD_NOT_LABEL_POS_Y = v325->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y;
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12178/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                             0LL);
            if ( !v321 )
              goto LABEL_231;
            UILabel__set_text(v321, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_231;
            v322 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
              v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            CLASS_BOARD_NOT_LABEL_POS_Y = v323->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y;
          }
          GameObjectExtensions__SetLocalPositionY(v322, CLASS_BOARD_NOT_LABEL_POS_Y, 0LL);
        }
        goto LABEL_580;
      }
LABEL_244:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      goto LABEL_580;
    }
    goto LABEL_580;
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
  if ( (byte_48E6A8D & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, item);
    byte_48E6A8D = 1;
  }
  if ( v3 )
    LOBYTE(v3) = v3->fields.isLockUser;
  lockMarkSprite = (UnityEngine_Object_o *)this->fields.lockMarkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockMarkSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockMarkSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B00F28(gameObject, v6);
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
  int v11; // w8
  UnityEngine_GameObject_o *v12; // x0

  v4 = this;
  if ( (byte_48E6A8C & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B00CCC(&OptionManager_TypeInfo, item);
    byte_48E6A8C = 1;
  }
  if ( !item )
LABEL_33:
    sub_1B00F28(this, item);
  followerInfo = item->fields.followerInfo;
  if ( followerInfo )
  {
    switch ( followerInfo->fields.type )
    {
      case 1:
        if ( System_String__IsNullOrEmpty(followerInfo->fields.message, 0LL) )
          goto LABEL_25;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
          goto LABEL_25;
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_33;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
        v9 = item->fields.followerInfo;
        if ( !v9 )
          goto LABEL_33;
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_33;
        UILabel__set_text((UILabel_o *)this, v9->fields.message, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_33;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_33;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( !this )
          goto LABEL_33;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -1.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, -1.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
        if ( !this )
          goto LABEL_33;
        v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v11 = 1112801280;
        goto LABEL_32;
      case 2:
      case 5:
LABEL_25:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_33;
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v12, -19.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_33;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_33;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( !this )
          goto LABEL_33;
        v7 = 1;
        goto LABEL_30;
      case 3:
      case 4:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_33;
        v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v6, -16.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_33;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_33;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.playerProfileObj;
        if ( !this )
          goto LABEL_33;
        v7 = 0;
LABEL_30:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -11.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, 10.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
        if ( !this )
          goto LABEL_33;
        v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v11 = 1113849856;
LABEL_32:
        GameObjectExtensions__SetLocalPositionY(v10, *(float *)&v11, 0LL);
        break;
      default:
        return;
    }
  }
}