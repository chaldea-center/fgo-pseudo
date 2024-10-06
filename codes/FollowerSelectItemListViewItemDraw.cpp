void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A6B143 & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_4A6B143 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BB6FB0;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BB72B0;
  static_fields = v2->static_fields;
  *(_QWORD *)&static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 0x4130000041400000LL;
  static_fields->CLASS_BOARD_LABEL_POS = (struct UnityEngine_Vector2_o)0x41300000BF800000LL;
}


void __fastcall FollowerSelectItemListViewItemDraw___ctor(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0

  if ( (byte_4A6B142 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B90010(&SkillIconComponent___TypeInfo, v4);
    sub_1B90010(&UIIconLabel___TypeInfo, v5);
    byte_4A6B142 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1B900B8(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1B8FFB4(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1B900B8(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B8FFB4(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B900B8(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B8FFB4(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1B900B8(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B8FFB4(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1B900B8(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B8FFB4(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B900B8(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B8FFB4(&this->fields.appendSkillLevelIconLabelList);
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
  UISprite_o *skillIconSprite; // x20

  if ( (byte_4A6B13C & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1B90010(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1B90010(&StringLiteral_20205/*"icon_skill_mini"*/, v5);
    sub_1B90010(&StringLiteral_20348/*"img_friend_skill"*/, v6);
    sub_1B90010(&StringLiteral_20110/*"icon_append_mini"*/, v7);
    sub_1B90010(&StringLiteral_20347/*"img_friend_appendskill"*/, v8);
    byte_4A6B13C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1B8FFB4(&this->fields.switchSkillUIList);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20205/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20348/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20110/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20347/*"img_friend_appendskill"*/, 0LL);
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
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  SwitchUIWidgetComponent_o *v27; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v5 = displaySkill;
  if ( (byte_4A6B141 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4A6B141 = 1;
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
    *(_QWORD *)&v28.fields.currentCryptoKey = v16;
    *(_QWORD *)&v28.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v28, 0LL) > 0;
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
      v19 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v20 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v19 )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = *(_QWORD *)&displaySkill;
        sub_1B8FFB4(v22 + 32);
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
      v23 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v23 )
        goto LABEL_52;
      v25 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v25 + 1;
        *(_QWORD *)(v26 + 32) = *(_QWORD *)&displaySkill;
        sub_1B8FFB4(v26 + 32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v27 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v27 )
      {
        SwitchUIWidgetComponent__Set(v27, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1B9026C(switchSkillInfo, *(_QWORD *)&displaySkill);
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
  __int64 v11; // x2
  __int64 v12; // x3
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v15; // w24
  Il2CppClass **v16; // x8
  UnityEngine_Behaviour_o *v17; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4A6B140 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    byte_4A6B140 = 1;
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
      v15 = 0;
      do
      {
        if ( v15 >= skillButtonList->max_length )
          sub_1B90274(supportInfoButton, v10, v11, v12);
        v16 = &skillButtonList->obj.klass + (int)v15;
        v17 = (UnityEngine_Behaviour_o *)v16[4];
        if ( !v17 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v16[4],
                             (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
        if ( !Component_object )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, 1, 0LL);
        if ( max_length == ++v15 )
          goto LABEL_19;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_18:
      sub_1B9026C(supportInfoButton, v10);
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
  __int64 v69; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v72; // w9
  UnityEngine_Object_o *rangeSprite; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  FollowerInfo_o *followerInfo; // x22
  FollowerInfo_o **p_followerInfo; // x29
  ServantLeaderInfo_o *v77; // x21
  int32_t Kind_37740940; // w22
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  System_String_o *v81; // x26
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v83; // x24
  __int64 v84; // x25
  struct FollowerInfo_o *v85; // x8
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x2
  const MethodInfo *v89; // x1
  System_String_o *name; // x27
  FollowerSelectItemListViewItemDraw_o *v91; // x26
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v93; // x27
  __int64 v94; // x28
  __int64 v95; // x29
  bool v96; // w8
  UIRangeLabel_o *svtNameRangeLabel; // x24
  const MethodInfo *v98; // x2
  FollowerInfo_o *v99; // x8
  bool v100; // w1
  Il2CppObject *Master_object; // x0
  __int64 v102; // x23
  __int64 v103; // x29
  ServantLimitImageMaster_o *v104; // x28
  Il2CppObject *v105; // x0
  __int64 v106; // x23
  __int64 v107; // x29
  ServantLimitAddMaster_o *v108; // x28
  FollowerInfo_o *v109; // x8
  Il2CppObject *v110; // x25
  __int64 v111; // x24
  BalanceConfig_c *v112; // x0
  int32_t FollowerPointNpc; // w27
  System_String_o **v114; // x8
  System_String_o *v115; // x23
  System_String_o *v116; // x24
  UILabel_o *playerNameLabel; // x24
  System_String_o **v118; // x8
  int32_t v119; // w2
  UILabel_o *v120; // x24
  System_String_o **v121; // x8
  int32_t v122; // w2
  UILabel_o *v123; // x24
  System_String_o **v124; // x8
  int32_t v125; // w2
  bool v126; // w1
  UILabel_o *v127; // x26
  System_String_o **v128; // x8
  int32_t v129; // w2
  UILabel_o *v130; // x26
  System_String_o **v131; // x8
  int32_t v132; // w2
  UILabel_o *v133; // x26
  System_String_o **v134; // x8
  int32_t v135; // w2
  UILabel_o *loginDataLabel; // x24
  System_String_o *v137; // x25
  int64_t v138; // x0
  UILabel_o *v139; // x24
  System_String_o *v140; // x25
  int64_t v141; // x0
  UILabel_o *v142; // x24
  System_String_o *v143; // x25
  int64_t v144; // x0
  Il2CppObject *v145; // x0
  __int64 *v146; // x8
  Il2CppObject *v147; // x0
  Il2CppObject *v148; // x0
  const MethodInfo *v149; // x2
  UIRangeLabel_o *svtNpRangeLabel; // x24
  UnityEngine_Object_o *svtNpCommandCard; // x23
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v154; // x2
  const MethodInfo *v155; // x3
  struct SkillIconComponent_array *v156; // x8
  __int64 v157; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillIconComponent_array *v160; // x8
  __int64 v161; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v165; // x26
  System_String_o *v166; // x27
  int64_t v167; // x0
  UILabel_o *v168; // x26
  System_String_o *v169; // x27
  int64_t v170; // x0
  UILabel_o *v171; // x26
  System_String_o *v172; // x27
  int64_t v173; // x0
  Il2CppObject *v174; // x0
  struct QuestRestrictionInfo_o *v175; // x26
  _BOOL4 IsRecommendFollower_k__BackingField; // w27
  BalanceConfig_c *v177; // x0
  __int64 v178; // x9
  struct BalanceConfig_StaticFields *v179; // x8
  System_String_o **v180; // x10
  LocalizationManager_c *v181; // x0
  Il2CppObject *v182; // x0
  _BOOL4 v183; // w26
  BalanceConfig_c *v184; // x0
  bool v185; // zf
  __int64 v186; // x10
  Il2CppObject *v187; // x0
  _BOOL4 v188; // w26
  BalanceConfig_c *v189; // x0
  System_String_o *v190; // x23
  System_String_o *v191; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v193; // x1
  UIRangeLabel_o *v194; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v196; // x25
  UnityEngine_Object_o *v197; // x23
  const MethodInfo *v198; // x1
  struct ServantNpCommandCardComponent_o *v199; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v202; // w24
  int v203; // w23
  FollowerSelectItemListViewItemDraw_o *v204; // x1
  int v205; // w8
  __int64 v206; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v208; // w25
  System_String_o *v209; // x23
  __int64 v210; // x2
  __int64 v211; // x3
  __int64 v212; // x4
  Il2CppObject *v213; // x0
  UILabel_o *campaignLabel; // x24
  const MethodInfo *v215; // x1
  FollowerSelectItemListViewItemDraw_o *v216; // x1
  bool activeSelf; // w8
  float v218; // s8
  bool v219; // w8
  float v220; // s9
  UnityEngine_GameObject_o *v221; // x0
  UnityEngine_GameObject_o *v222; // x0
  UnityEngine_Object_o *v223; // x23
  const MethodInfo *v224; // x1
  const MethodInfo *v225; // x2
  const MethodInfo *v226; // x1
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v229; // w24
  const MethodInfo *v230; // x1
  int32_t Rarity; // w25
  struct UISprite_o *v232; // x8
  __int64 v233; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v235; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  struct SkillIconComponent_array *v237; // x8
  __int64 v238; // x8
  struct SkillInfo_array *v239; // x11
  int v240; // w9
  unsigned __int64 v241; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v243; // x14
  __int64 v244; // x23
  __int64 v245; // x25
  unsigned __int64 v246; // x26
  struct SkillInfo_array *v247; // x8
  struct UnityEngine_GameObject_array *v248; // x9
  int32_t *v249; // x27
  struct SkillIconComponent_array *v250; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v252; // x8
  struct SkillIconComponent_array *v253; // x8
  struct UIIconLabel_array *v254; // x8
  struct SkillIconComponent_array *v255; // x8
  __int64 v256; // x9
  int32_t v257; // w8
  bool v258; // w1
  __int64 v259; // x8
  _QWORD *v260; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v262; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v264; // x8
  __int64 v265; // x8
  struct SkillInfo_array *v266; // x11
  int v267; // w9
  signed __int64 v268; // x10
  unsigned __int64 v269; // x14
  SkillInfo_o *v270; // x14
  unsigned __int64 v271; // x23
  signed __int64 v272; // x25
  struct SkillInfo_array *v273; // x8
  struct UnityEngine_GameObject_array *v274; // x9
  int32_t *v275; // x27
  struct UICommonButton_array *skillButtonList; // x9
  int v277; // w8
  struct UnityEngine_GameObject_array *v278; // x9
  struct SkillIconComponent_array *v279; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v281; // x8
  struct SkillIconComponent_array *v282; // x8
  struct UIIconLabel_array *v283; // x8
  struct SkillIconComponent_array *v284; // x8
  int32_t v285; // w8
  bool v286; // w1
  __int64 v287; // x8
  _QWORD *v288; // x9
  __int64 v289; // x10
  __int64 v290; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *v292; // x23
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
  UISprite_o *v303; // x23
  UILabel_o *v304; // x24
  System_String_o *v305; // x23
  __int64 v306; // x2
  __int64 v307; // x3
  __int64 v308; // x4
  Il2CppObject *v309; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v311; // x2
  __int64 v312; // x3
  __int64 v313; // x4
  Il2CppObject **v314; // x9
  Il2CppObject *v315; // x23
  Il2CppObject *v316; // x0
  FollowerSelectItemListViewItemDraw_o *v317; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w23
  UILabel_o *v322; // x24
  UnityEngine_GameObject_o *v323; // x24
  FollowerSelectItemListViewItemDraw_c *v324; // x8
  __int64 v325; // x9
  UnityEngine_GameObject_o *v326; // x24
  BalanceConfig_c *v327; // x8
  UISprite_o *classBoardBackSprite; // x24
  UnityEngine_GameObject_o *v329; // x24
  FollowerSelectItemListViewItemDraw_c *v330; // x8
  UnityEngine_GameObject_o *v331; // x0
  UnityEngine_GameObject_o *v332; // x0
  float v333; // s0
  float v334; // s8
  float v335; // s0
  float v336; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v339; // s10
  UnityEngine_GameObject_o *v340; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v343; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v345; // x22
  __int64 v346; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *typeTextSprite; // x23
  int32_t v349; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v351; // w22
  QuestPhaseEntity_o *v352; // x0
  QuestPhaseEntity_o *v353; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v355; // x23
  __int64 v356; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v357; // x21
  FollowerSelectItemListViewItemDraw_o *v358; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v361; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  Il2CppObject *v365; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v369; // s0
  float v370; // s8
  FollowerSelectItemListViewItemDraw_o *v371; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int64_t v376; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v379; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v384; // w21
  System_String_o *v385; // x0
  System_String_o *v386; // x0
  System_String_o *v387; // x0
  FollowerSelectItemListViewItemDraw_o *v388; // x0
  FollowerSelectItemListViewItem_o *v389; // x1
  const MethodInfo *v390; // x2
  int v391; // [xsp+18h] [xbp-C8h]
  System_String_o *v392; // [xsp+20h] [xbp-C0h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v394; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v396; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v404; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v405; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v406; // 0:x0.16
  UnityEngine_Color_o v407; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v408; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4A6B13D & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, item);
    sub_1B90010(&BalanceConfig_TypeInfo, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_1B90010(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1B90010(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_1B90010(&DataManager_TypeInfo, v18);
    sub_1B90010(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1B90010(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1B90010(&FollowerRootComponent_TypeInfo, v22);
    sub_1B90010(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_1B90010(&Grade_TypeInfo, v24);
    sub_1B90010(&int_TypeInfo, v25);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_1B90010(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_1B90010(&LocalizationManager_TypeInfo, v29);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v30);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B90010(&OptionManager_TypeInfo, v32);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_1B90010(&SkillInfo___TypeInfo, v36);
    sub_1B90010(&TitleInfoControl_TypeInfo, v37);
    sub_1B90010(&StringLiteral_3773/*"COMMON_NO_ENTRY"*/, v38);
    sub_1B90010(&StringLiteral_6435/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_1B90010(&StringLiteral_6414/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_1B90010(&StringLiteral_11625/*"SERVANT_HIDE_NAME"*/, v41);
    sub_1B90010(&StringLiteral_9327/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_1B90010(&StringLiteral_6415/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_1B90010(&StringLiteral_6367/*"FFFFFF"*/, v44);
    sub_1B90010(&StringLiteral_9328/*"NP_HIDE_NAME"*/, v45);
    sub_1B90010(&StringLiteral_11521/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1B90010(&StringLiteral_13329/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_1B90010(&StringLiteral_9329/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_1B90010(&StringLiteral_6428/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_1B90010(&StringLiteral_6413/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_1B90010(&StringLiteral_17510/*"btn_bg_29_2"*/, v51);
    sub_1B90010(&StringLiteral_20217/*"icon_support_01"*/, v52);
    sub_1B90010(&StringLiteral_9332/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1B90010(&StringLiteral_20334/*"img_frames_mask01"*/, v54);
    sub_1B90010(&StringLiteral_12407/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v55);
    sub_1B90010(&StringLiteral_12408/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v56);
    sub_1B90010(&StringLiteral_6427/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v57);
    sub_1B90010(&StringLiteral_6429/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v58);
    sub_1B90010(&StringLiteral_6412/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v59);
    sub_1B90010(&StringLiteral_18502/*"datalost_svt_select"*/, v60);
    sub_1B90010(&StringLiteral_6366/*"FFFF00"*/, v61);
    sub_1B90010(&StringLiteral_9302/*"NO_ENTRY_NAME"*/, v62);
    sub_1B90010(&StringLiteral_9326/*"NP_COLOR_NAME"*/, v63);
    sub_1B90010(&StringLiteral_16052/*"[{0}]+{1}[-]"*/, v64);
    sub_1B90010(&StringLiteral_1/*""*/, v65);
    sub_1B90010(&StringLiteral_20180/*"icon_friend"*/, v66);
    sub_1B90010(&StringLiteral_6416/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v67);
    sub_1B90010(&StringLiteral_20179/*"icon_follow"*/, v68);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_20376/*"img_listbg_02"*/, v69);
    byte_4A6B13D = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v396 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v394.fields.r = 0LL;
  *(_QWORD *)&v394.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_230;
  size = switchSkillUIList->fields._size;
  v72 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v72;
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
    v77 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_37740940 = Grade__GetKind_37740940(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_37740940, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    v81 = FollowerBgImage;
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
    if ( !v77 )
      goto LABEL_49;
    v84 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
    v83 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v399.fields.currentCryptoKey = v84;
    *(_QWORD *)&v399.fields.fakeValue = v83;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                     v399,
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
                                                       (System_String_o *)StringLiteral_3773/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_230;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
      v99 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v99->fields.type )
        {
          case 1:
            playerNameLabel = v8->fields.playerNameLabel;
            if ( (byte_4A6B135 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_19079/*"error"*/, item);
              byte_4A6B135 = 1;
              v99 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_230;
            v118 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_19079/*"error"*/;
            UILabel__set_text(playerNameLabel, *v118, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v119 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38287724((UIIconLabel_o *)this, 2, v119, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v137 = LocalizationManager__Get((System_String_o *)StringLiteral_13329/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v138 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v145 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v138, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v137, v145, 0LL);
            if ( !loginDataLabel )
              goto LABEL_230;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            v146 = &StringLiteral_20180/*"icon_friend"*/;
            goto LABEL_188;
          case 2:
            v120 = v8->fields.playerNameLabel;
            if ( (byte_4A6B135 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_19079/*"error"*/, item);
              byte_4A6B135 = 1;
              v99 = *p_followerInfo;
            }
            if ( !v120 )
              goto LABEL_230;
            v121 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_19079/*"error"*/;
            UILabel__set_text(v120, *v121, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v122 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38287724((UIIconLabel_o *)this, 2, v122, 0, 0, 0LL, 0, 0, 0, 0LL);
            v139 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v140 = LocalizationManager__Get((System_String_o *)StringLiteral_13329/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v141 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v147 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v141, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v140, v147, 0LL);
            if ( !v139 )
              goto LABEL_230;
            UILabel__set_text(v139, (System_String_o *)this, 0LL);
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
            v81 = (System_String_o *)StringLiteral_20376/*"img_listbg_02"*/;
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
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20217/*"icon_support_01"*/, 0LL);
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
            v100 = 0;
            goto LABEL_194;
          case 5:
            v123 = v8->fields.playerNameLabel;
            if ( (byte_4A6B135 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_19079/*"error"*/, item);
              byte_4A6B135 = 1;
              v99 = *p_followerInfo;
            }
            if ( !v123 )
              goto LABEL_230;
            v124 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_19079/*"error"*/;
            UILabel__set_text(v123, *v124, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v125 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38287724((UIIconLabel_o *)this, 2, v125, 0, 0, 0LL, 0, 0, 0, 0LL);
            v142 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v143 = LocalizationManager__Get((System_String_o *)StringLiteral_13329/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v144 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v148 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v144, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v143, v148, 0LL);
            if ( !v142 )
              goto LABEL_230;
            UILabel__set_text(v142, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            v146 = &StringLiteral_20179/*"icon_follow"*/;
LABEL_188:
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v146, 0LL);
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
            v100 = 1;
LABEL_194:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v100, 0LL);
            break;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v98);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v149);
      svtNpRangeLabel = v8->fields.svtNpRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_9302/*"NO_ENTRY_NAME"*/,
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
      v8->fields.skillInfoList = (struct SkillInfo_array *)sub_1B900B8(SkillInfo___TypeInfo, skillIconList->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1B8FFB4(&v8->fields.skillInfoList);
      v156 = v8->fields.skillIconList;
      if ( !v156 )
        goto LABEL_230;
      v157 = 0LL;
      while ( (int)v157 < (signed int)v156->max_length )
      {
        skillBaseList = v8->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v157 >= skillBaseList->max_length )
LABEL_762:
            sub_1B90274(this, item, v154, v155);
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
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)sub_1B900B8(
                                                                   SkillInfo___TypeInfo,
                                                                   appendSkillIconList->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1B8FFB4(&v8->fields.appendSkillInfoList);
      v160 = v8->fields.appendSkillIconList;
      if ( !v160 )
        goto LABEL_230;
      v161 = 0LL;
      while ( (int)v161 < (signed int)v160->max_length )
      {
        appendSkillBaseList = v8->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_230;
        if ( (unsigned int)v161 >= appendSkillBaseList->max_length )
          goto LABEL_762;
        this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v161];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v160 = v8->fields.appendSkillIconList;
          ++v161;
          if ( v160 )
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
        LODWORD(v333) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        v334 = v333;
        LODWORD(v335) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
        if ( !this )
          goto LABEL_230;
        v336 = v335;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        v339 = LocalPositionX;
        v340 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v340, (float)(v336 * 0.5) + (float)(v334 + v339), 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_37740940, 0LL);
        baseSprite = v8->fields.baseSprite;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        FollowerRootComponent__SetFollowerBase(baseSprite, v81, 0LL);
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
                                                           (System_String_o *)StringLiteral_6427/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
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
            v343 = 0;
LABEL_634:
            classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v77 )
                goto LABEL_663;
              v346 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
              v345 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v405.fields.currentCryptoKey = v346;
              *(_QWORD *)&v405.fields.fakeValue = v345;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v405, 0LL) < 1
                || (v343 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v77, 0LL)
                || v7->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_663;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
                goto LABEL_663;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
                v388 = (FollowerSelectItemListViewItemDraw_o *)sub_1B9052C(this);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v388, v389, v390);
                return;
              }
              typeTextSprite = this->fields.typeTextSprite;
              if ( !typeTextSprite )
                goto LABEL_663;
              v349 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
              if ( !v349 )
                goto LABEL_663;
              m_CancellationTokenSource = (int32_t)typeTextSprite->fields.m_CancellationTokenSource;
              if ( !m_CancellationTokenSource )
                goto LABEL_663;
              v351 = v349;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !this )
                goto LABEL_230;
              v352 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v351, m_CancellationTokenSource, 0LL);
              if ( v352 )
              {
                v353 = v352;
                this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !this )
                  goto LABEL_230;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
                v356 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
                v355 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
                v357 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v406.fields.currentCryptoKey = v356;
                *(_QWORD *)&v406.fields.fakeValue = v355;
                this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                                 v406,
                                                                 0LL);
                if ( !v357 )
                  goto LABEL_230;
                this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 v357,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_230;
                v358 = this;
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
                if ( !this )
                  goto LABEL_230;
                ServantClassCompatibilityIconComponent__SetIcon(
                  (ServantClassCompatibilityIconComponent_o *)this,
                  (int32_t)v358->fields.svtNameRangeLabel,
                  v353->fields.classIds,
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
              v361 = v8->fields.recommendedIconText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_6429/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                               0LL);
              if ( !v361 )
                goto LABEL_230;
              UILabel__set_text(v361, (System_String_o *)this, 0LL);
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
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventDetailMaster___);
              entity = 0LL;
              if ( !this )
                goto LABEL_230;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                      &entity,
                      questRestrictionInfo->fields.eventId,
                      (const MethodInfo_312C5FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                goto LABEL_692;
              v365 = entity;
              if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              if ( TitleInfoControl__IsEnableEventShopButton_37304296((EventDetailEntity_o *)v365, 0LL) )
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
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
                this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
                  v376 = *p_followerInfo ? (*p_followerInfo)->fields.userId : 0LL;
                  if ( this )
                  {
                    UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                                  (EventBoostItemUsedMaster_o *)this,
                                  eventId,
                                  v376,
                                  0LL);
                    v379 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v379 = BalanceConfig_TypeInfo;
                    }
                    MaxFriendChocolateUse = v379->static_fields->MaxFriendChocolateUse;
                    v396 = MaxFriendChocolateUse;
                    if ( UsedCount )
                    {
                      if ( !v379->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v379);
                        MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                      }
                      v396 = MaxFriendChocolateUse - UsedCount->fields.count;
                    }
                    numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_6414/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                                     0LL);
                    if ( numberOfUsabletimesPrefixLabel )
                    {
                      UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
                      numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
                      this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v396, 0LL);
                      if ( numberOfUsabletimesLabel )
                      {
                        UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
                        numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
                        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_6415/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                                         0LL);
                        if ( numberOfUsabletimesSuffixLabel )
                        {
                          UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
                          v384 = v396;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          if ( v384 )
                          {
                            v385 = LocalizationManager__Get((System_String_o *)StringLiteral_6412/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v385, &color, 0LL);
                            v386 = LocalizationManager__Get((System_String_o *)StringLiteral_6413/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v386, &v394, 0LL);
                          }
                          else
                          {
                            v387 = LocalizationManager__Get((System_String_o *)StringLiteral_6416/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v387, &color, 0LL);
                            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                            if ( !this )
                              goto LABEL_230;
                            UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                            v394 = color;
                          }
                          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
                          if ( this )
                          {
                            UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                            if ( this )
                            {
                              UIWidget__set_color((UIWidget_o *)this, v394, 0LL);
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
                sub_1B9026C(this, item);
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
                                                           (System_String_o *)StringLiteral_6428/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                           0LL);
          if ( !warningMessageLabel )
            goto LABEL_230;
          UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_230;
          LODWORD(v369) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_230;
          v370 = v369;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v371 = this;
          warningMessageWidth = (float)v8->fields.warningMessageWidth;
          if ( v370 <= warningMessageWidth )
          {
            if ( !byte_4A6A9C6 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, item);
              byte_4A6A9C6 = 1;
            }
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            x = static_fields->oneVector.fields.x;
            y = static_fields->oneVector.fields.y;
            z = static_fields->oneVector.fields.z;
          }
          else
          {
            x = warningMessageWidth / v370;
            z = 1.0;
            y = 1.0;
          }
          if ( !v371 )
            goto LABEL_230;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v371, *(UnityEngine_Vector3_o *)&x, 0LL);
        }
        v343 = 1;
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
    v85 = v7->fields.followerInfo;
    if ( !v85 )
      goto LABEL_230;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_230;
    v392 = v81;
    ServantFaceIconComponent__Set_38185376(
      (ServantFaceIconComponent_o *)this,
      v77,
      v7->fields.iconLabelInfo1,
      v7->fields.iconLabelInfo2,
      0,
      v85->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v86);
    FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v87);
    FollowerSelectItemListViewItem__GetNpInfo(v7, &tdInfo, v88);
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(v7, v89);
    if ( !tdInfo )
      goto LABEL_230;
    v391 = (int)this;
    name = tdInfo->fields.name;
    v91 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    if ( ServantLeaderInfo__IsNpc(v77, 0LL) )
    {
      dispLimitCount = v77->fields.dispLimitCount;
      if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v77->fields.npcFlag, 0LL) )
      {
        v93 = tdInfo;
        v95 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
        v94 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v400.fields.currentCryptoKey = v95;
        *(_QWORD *)&v400.fields.fakeValue = v94;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                         v400,
                                                         0LL);
        if ( !v93 )
          goto LABEL_230;
        name = TreasureDvcInfo__GetName(v93, (int32_t)this, 0LL);
      }
      v96 = !NpcServantFollowerEntity__IsHideRarity(v77->fields.npcFlag, 0LL);
    }
    else
    {
      dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v77, 0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_230;
        dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                           (ServantLimitSpoilerProtectionMaster_o *)this,
                           v77->fields.svtId,
                           dispLimitCount,
                           0LL);
      }
      v96 = 1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_230;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v96, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_230;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)this,
      !v7->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v77, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v102 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
      v103 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
      v104 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v401.fields.currentCryptoKey = v102;
      *(_QWORD *)&v401.fields.fakeValue = v103;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                       v401,
                                                       0LL);
      if ( !v104 )
        goto LABEL_230;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v104, (int32_t)this, dispLimitCount, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v105 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v106 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
    v107 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
    v108 = (ServantLimitAddMaster_o *)v105;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v402.fields.currentCryptoKey = v106;
    *(_QWORD *)&v402.fields.fakeValue = v107;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                                     v402,
                                                     0LL);
    if ( !tdInfo || !v108 )
      goto LABEL_230;
    p_followerInfo = &v7->fields.followerInfo;
    this = (FollowerSelectItemListViewItemDraw_o *)ServantLimitAddMaster__GetOverwriteTDName(
                                                     v108,
                                                     (int32_t)this,
                                                     dispLimitCount,
                                                     name,
                                                     tdInfo->fields.lv,
                                                     0LL);
    v109 = v7->fields.followerInfo;
    if ( v109 )
    {
      v110 = (Il2CppObject *)this;
      switch ( v109->fields.type )
      {
        case 1:
          v127 = v8->fields.playerNameLabel;
          if ( (byte_4A6B135 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_19079/*"error"*/, item);
            byte_4A6B135 = 1;
            v109 = *p_followerInfo;
          }
          if ( !v127 )
            goto LABEL_230;
          v128 = v109 ? &v109->fields.userName : (System_String_o **)&StringLiteral_19079/*"error"*/;
          UILabel__set_text(v127, *v128, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v129 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38287724((UIIconLabel_o *)this, 2, v129, 0, 0, 0LL, 0, 0, 0, 0LL);
          v165 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v166 = LocalizationManager__Get((System_String_o *)StringLiteral_13329/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v167 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v174 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v167, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v166, v174, 0LL);
          if ( !v165 )
            goto LABEL_230;
          UILabel__set_text(v165, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20180/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v175 = v7->fields.questRestrictionInfo;
          if ( !v175 )
            goto LABEL_271;
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           v175->fields.questId,
                                                           (const MethodInfo_312C5A8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_230;
          LOBYTE(v175) = QuestEntity__HasFlag_39526488((QuestEntity_o *)this, 0x8000000LL, v175->fields.questPhase, 0LL);
LABEL_271:
          IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
          v177 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v177 = BalanceConfig_TypeInfo;
          }
          v178 = 212LL;
          if ( ((unsigned __int8)v175 & 1) != 0 )
            v178 = 664LL;
          if ( IsRecommendFollower_k__BackingField )
            v178 = 224LL;
          v179 = v177->static_fields;
          v180 = (System_String_o **)&StringLiteral_9326/*"NP_COLOR_NAME"*/;
          v181 = LocalizationManager_TypeInfo;
          if ( v391 > 1 )
            v180 = (System_String_o **)&StringLiteral_9332/*"NP_MAX_COLOR_NAME"*/;
LABEL_298:
          FollowerPointNpc = *(int32_t *)((char *)&v179->CriticalRateToAddByQuickFirstBonus + v178);
          v190 = *v180;
          if ( !v181->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v181);
          v191 = LocalizationManager__Get(v190, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v191, v110, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_230;
          v91 = this;
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
          v126 = 1;
LABEL_304:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v126, 0LL);
          break;
        case 2:
          v130 = v8->fields.playerNameLabel;
          if ( (byte_4A6B135 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_19079/*"error"*/, item);
            byte_4A6B135 = 1;
            v109 = *p_followerInfo;
          }
          if ( !v130 )
            goto LABEL_230;
          v131 = v109 ? &v109->fields.userName : (System_String_o **)&StringLiteral_19079/*"error"*/;
          UILabel__set_text(v130, *v131, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v132 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38287724((UIIconLabel_o *)this, 2, v132, 0, 0, 0LL, 0, 0, 0, 0LL);
          v168 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v169 = LocalizationManager__Get((System_String_o *)StringLiteral_13329/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v170 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v182 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v170, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v169, v182, 0LL);
          if ( !v168 )
            goto LABEL_230;
          UILabel__set_text(v168, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          v183 = v7->fields._IsRecommendFollower_k__BackingField;
          v184 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v184 = BalanceConfig_TypeInfo;
          }
          v179 = v184->static_fields;
          v185 = !v183;
          v178 = 224LL;
          v186 = 216LL;
          goto LABEL_293;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_230;
          v111 = StringLiteral_20376/*"img_listbg_02"*/;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20217/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v112 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v112 = BalanceConfig_TypeInfo;
          }
          v392 = (System_String_o *)v111;
          FollowerPointNpc = v112->static_fields->FollowerPointNpc;
          if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
          {
            v114 = (System_String_o **)&StringLiteral_9332/*"NP_MAX_COLOR_NAME"*/;
            if ( v391 <= 1 )
              v114 = (System_String_o **)&StringLiteral_9326/*"NP_COLOR_NAME"*/;
            v115 = *v114;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = LocalizationManager__Get(v115, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = LocalizationManager__Get((System_String_o *)StringLiteral_9327/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            v110 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9328/*"NP_HIDE_NAME"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v116, v110, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_230;
          v91 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_230;
          v126 = 0;
          goto LABEL_304;
        case 5:
          v133 = v8->fields.playerNameLabel;
          if ( (byte_4A6B135 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_19079/*"error"*/, item);
            byte_4A6B135 = 1;
            v109 = *p_followerInfo;
          }
          if ( !v133 )
            goto LABEL_230;
          v134 = v109 ? &v109->fields.userName : (System_String_o **)&StringLiteral_19079/*"error"*/;
          UILabel__set_text(v133, *v134, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v135 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38287724((UIIconLabel_o *)this, 2, v135, 0, 0, 0LL, 0, 0, 0, 0LL);
          v171 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v172 = LocalizationManager__Get((System_String_o *)StringLiteral_13329/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v173 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v187 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v173, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v172, v187, 0LL);
          if ( !v171 )
            goto LABEL_230;
          UILabel__set_text(v171, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20179/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v188 = v7->fields._IsRecommendFollower_k__BackingField;
          v189 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v189 = BalanceConfig_TypeInfo;
          }
          v179 = v189->static_fields;
          v185 = !v188;
          v178 = 224LL;
          v186 = 664LL;
LABEL_293:
          if ( v185 )
            v178 = v186;
          v181 = LocalizationManager_TypeInfo;
          if ( v391 <= 1 )
            v180 = (System_String_o **)&StringLiteral_9326/*"NP_COLOR_NAME"*/;
          else
            v180 = (System_String_o **)&StringLiteral_9332/*"NP_MAX_COLOR_NAME"*/;
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
    IsHideSupport = ServantLeaderInfo__IsHideSupport(v77, 0LL);
    v194 = v8->fields.svtNameRangeLabel;
    if ( IsHideSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11625/*"SERVANT_HIDE_NAME"*/,
                                                       0LL);
      if ( !v194 )
        goto LABEL_230;
      UIRangeLabel__Set(v194, (System_String_o *)this, 0LL, 1, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_230;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !*p_followerInfo || (*p_followerInfo)->fields.type != 4 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9329/*"NP_HIDE_NAME_LEVEL"*/,
                                                         0LL);
        v91 = this;
      }
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v7, v193);
      if ( !v194 )
        goto LABEL_230;
      UIRangeLabel__Set(v194, (System_String_o *)this, 0LL, 1, 0, 0LL);
    }
    if ( !tdInfo )
      goto LABEL_230;
    strengthStatus = tdInfo->fields.strengthStatus;
    if ( ServantLeaderInfo__IsHideSupport(v77, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v77, 0LL) )
      strengthStatus = 0;
    v196 = v8->fields.svtNpRangeLabel;
    this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
    if ( !v196 )
      goto LABEL_230;
    UIRangeLabel__Set(v196, (System_String_o *)v91, (System_String_o *)this, 0, 0, 0LL);
    v197 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v197, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
      v199 = v8->fields.svtNpCommandCard;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v199 )
          goto LABEL_230;
        ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
      }
      else
      {
        if ( !v199 )
          goto LABEL_230;
        ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
      }
    }
    FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(v7, v198);
    friendPointCampaignEntity = v7->fields.friendPointCampaignEntity;
    v202 = FriendPointUpVal;
    v203 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
    if ( !this )
      goto LABEL_230;
    UIIconLabel__Set_38287724((UIIconLabel_o *)this, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
    if ( v202 > 0 || v203 >= 1 )
    {
      if ( v203 <= 0 )
        v205 = 1000;
      else
        v205 = v203;
      v206 = 274877907LL * (v205 * v202 + (v205 - 1000) * FollowerPointNpc);
      friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      v208 = (v206 >> 38) + ((unsigned __int64)v206 >> 63);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v209 = LocalizationManager__Get((System_String_o *)StringLiteral_6435/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
      TimesToRestart_k__BackingField = v208;
      v213 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v210, v211, v212);
      this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v209, v213, 0LL);
      if ( !friendPointData2Label )
        goto LABEL_230;
      v204 = this;
      this = friendPointData2Label;
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_230;
      v204 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v204, 0LL);
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
                                                       v215);
      if ( !campaignLabel )
        goto LABEL_230;
      v216 = this;
    }
    else
    {
      if ( !campaignLabel )
        goto LABEL_230;
      v216 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(campaignLabel, (System_String_o *)v216, 0LL);
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
    v218 = activeSelf ? -3.0 : 39.0;
    if ( !this )
      goto LABEL_230;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_230;
    v219 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
    v220 = v219 ? -22.0 : 20.0;
    if ( !this )
      goto LABEL_230;
    v221 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v221, v218, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
    if ( !this )
      goto LABEL_230;
    v222 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v222, v220, 0LL);
    v223 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v223, 0LL, 0LL) )
    {
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v7, v224) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v226);
        if ( !this )
          goto LABEL_230;
        baseButton = this->fields.baseButton;
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v403.fields.currentCryptoKey = baseButton;
        *(_QWORD *)&v403.fields.fakeValue = servantFaceIcon;
        v229 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v403, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v230);
        if ( !this )
          goto LABEL_230;
        Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
      }
      else
      {
        Rarity = -1;
        v229 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v226);
      if ( !this )
        goto LABEL_230;
      if ( this->fields.typeTextSprite )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                         v7,
                                                         (const MethodInfo *)item);
        if ( !this )
          goto LABEL_230;
        v232 = this->fields.typeTextSprite;
        if ( !v232 )
          goto LABEL_230;
        topAnchor = v232->fields.topAnchor;
        v233 = *(_QWORD *)&v232->fields.updateAnchors;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v404.fields.currentCryptoKey = topAnchor;
        *(_QWORD *)&v404.fields.fakeValue = v233;
        v235 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v404, 0LL);
      }
      else
      {
        v235 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
      if ( !this )
        goto LABEL_230;
      EventUpValIconComponent__Set(
        (EventUpValIconComponent_o *)this,
        v7->fields.eventUpValItemList,
        v229,
        Rarity,
        v235,
        0LL);
    }
    p_skillInfoList = &v8->fields.skillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                     v7,
                                                     &v8->fields.skillInfoList,
                                                     v225);
    v237 = v8->fields.skillIconList;
    if ( !v237 )
      goto LABEL_230;
    v238 = *(_QWORD *)&v237->max_length;
    if ( v238 << 32 >= 1 )
    {
      v239 = *p_skillInfoList;
      v240 = 0;
      v241 = 0LL;
      while ( v239 )
      {
        max_length = v239->max_length;
        if ( (__int64)v241 < (int)max_length )
        {
          if ( v241 >= max_length )
            goto LABEL_762;
          v243 = (*p_skillInfoList)->m_Items[v241];
          if ( v243 && v243->fields.id >= 1 )
            v240 = v241 + 1;
        }
        if ( (__int64)++v241 >= (int)v238 )
          goto LABEL_398;
      }
      goto LABEL_230;
    }
    v240 = 0;
LABEL_398:
    if ( (int)v238 >= 1 )
    {
      v244 = v240;
      v245 = 4LL;
      do
      {
        v246 = v245 - 4;
        if ( v245 - 4 >= v244 )
        {
          v252 = v8->fields.skillBaseList;
          if ( !v252 )
            goto LABEL_230;
          if ( v246 >= v252->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v252->obj.klass + v245);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v247 = *p_skillInfoList;
          if ( !*p_skillInfoList )
            goto LABEL_230;
          if ( v246 >= v247->max_length )
            goto LABEL_762;
          v248 = v8->fields.skillBaseList;
          if ( !v248 )
            goto LABEL_230;
          if ( v246 >= v248->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v248->obj.klass + v245);
          if ( !this )
            goto LABEL_230;
          v249 = (int32_t *)*((_QWORD *)&v247->obj.klass + v245);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v249 )
              v249[4] = 0;
            v250 = v8->fields.skillIconList;
            if ( !v250 )
              goto LABEL_230;
            if ( v246 >= v250->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v250->obj.klass + v245);
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_230;
            if ( v246 >= skillLevelIconLabelList->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v245);
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v253 = v8->fields.skillIconList;
            if ( !v253 )
              goto LABEL_230;
            if ( v246 >= v253->max_length )
              goto LABEL_762;
            if ( !v249 )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v253->obj.klass + v245);
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__Set_38286920((SkillIconComponent_o *)this, v249[4], v249[5], v249[12], v249[13], 0LL);
            v254 = v8->fields.skillLevelIconLabelList;
            if ( !v254 )
              goto LABEL_230;
            if ( v246 >= v254->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v254->obj.klass + v245);
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38287724((UIIconLabel_o *)this, 48, v249[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v255 = v8->fields.skillIconList;
        if ( !v255 )
          goto LABEL_230;
        v256 = v245 - 3;
        ++v245;
      }
      while ( v256 < (int)v255->max_length );
    }
    v257 = v8->fields.displaySkill;
    if ( v257 == 2 )
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
      v259 = *(_QWORD *)&this->fields.m_CachedPtr;
      v260 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v259 )
        goto LABEL_230;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v259 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
      }
      else
      {
        v262 = v259 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v262 + 32) = item;
        sub_1B8FFB4(v262 + 32);
      }
    }
    else
    {
      if ( v257 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v258 = 0;
      }
      else
      {
        if ( v257 )
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
        v258 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v258, 0LL);
    }
LABEL_447:
    p_appendSkillInfoList = &v8->fields.appendSkillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                     v7,
                                                     &v8->fields.appendSkillInfoList,
                                                     v7->fields.isNpc,
                                                     v155);
    v264 = v8->fields.appendSkillIconList;
    if ( !v264 )
      goto LABEL_230;
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
              goto LABEL_762;
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
      v271 = 0LL;
      v272 = v267;
      do
      {
        if ( (__int64)v271 >= v272 )
        {
          v281 = v8->fields.appendSkillBaseList;
          if ( !v281 )
            goto LABEL_230;
          if ( v271 >= v281->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)v281->m_Items[v271];
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v273 = *p_appendSkillInfoList;
          if ( !*p_appendSkillInfoList )
            goto LABEL_230;
          if ( v271 >= v273->max_length )
            goto LABEL_762;
          v274 = v8->fields.appendSkillBaseList;
          if ( !v274 )
            goto LABEL_230;
          if ( v271 >= v274->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)v274->m_Items[v271];
          if ( !this )
            goto LABEL_230;
          v275 = (int32_t *)v273->m_Items[v271];
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
            v277 = HIDWORD(skillButtonList->m_Items[143]);
            if ( v271 )
              v277 += LODWORD(skillButtonList->m_Items[144]) * v271;
            v278 = v8->fields.appendSkillBaseList;
            if ( !v278 )
              goto LABEL_230;
            if ( v271 >= v278->max_length )
              goto LABEL_762;
            GameObjectExtensions__SetLocalPositionX(v278->m_Items[v271], (float)v277, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v275 )
              v275[4] = 0;
            v279 = v8->fields.appendSkillIconList;
            if ( !v279 )
              goto LABEL_230;
            if ( v271 >= v279->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)v279->m_Items[v271];
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
            if ( !appendSkillLevelIconLabelList )
              goto LABEL_230;
            if ( v271 >= appendSkillLevelIconLabelList->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v271];
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v282 = v8->fields.appendSkillIconList;
            if ( !v282 )
              goto LABEL_230;
            if ( v271 >= v282->max_length )
              goto LABEL_762;
            if ( !v275 )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)v282->m_Items[v271];
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__Set_38286920((SkillIconComponent_o *)this, v275[4], v275[5], v275[12], v275[13], 0LL);
            v283 = v8->fields.appendSkillLevelIconLabelList;
            if ( !v283 )
              goto LABEL_230;
            if ( v271 >= v283->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)v283->m_Items[v271];
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38287724((UIIconLabel_o *)this, 48, v275[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v284 = v8->fields.appendSkillIconList;
        if ( !v284 )
          goto LABEL_230;
        ++v271;
      }
      while ( (__int64)v271 < (int)v284->max_length );
    }
    v285 = v8->fields.displaySkill;
    if ( v285 == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      v81 = v392;
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
      v287 = *(_QWORD *)&this->fields.m_CachedPtr;
      v288 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v287 )
        goto LABEL_230;
      v289 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v289 >= *(_DWORD *)(v287 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
      }
      else
      {
        v290 = v287 + 8 * v289;
        LODWORD(this->fields.m_CancellationTokenSource) = v289 + 1;
        *(_QWORD *)(v290 + 32) = item;
        sub_1B8FFB4(v290 + 32);
      }
    }
    else
    {
      v81 = v392;
      if ( v285 == 1 )
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
        v286 = 1;
      }
      else
      {
        if ( v285 )
          goto LABEL_520;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v286 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v286, 0LL);
    }
    if ( v8->fields.displaySkill == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_230;
      switchSkillInfo = v8->fields.switchSkillInfo;
      this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)this,
                                                       (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !switchSkillInfo )
        goto LABEL_230;
      SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
    }
LABEL_520:
    v292 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v292, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
      v293 = v8->fields.svtCommandCardList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v293 )
          goto LABEL_230;
        ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
      }
      else
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, (const MethodInfo *)item);
        commandCardParam = v77->fields.commandCardParam;
        v296 = SvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v77, 0LL);
        if ( !v293 )
          goto LABEL_230;
        ServantCommandCardListComponent__Set_38187256(
          v293,
          v296,
          commandCardParam,
          (System_Int32_array *)this,
          2,
          1,
          0LL);
        v81 = v392;
      }
    }
    v297 = (UnityEngine_Object_o *)v8->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v297, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*p_followerInfo )
        goto LABEL_230;
      pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
      v299 = pushUserSvtId && pushUserSvtId == v77->fields.userSvtId;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v299, 0LL);
    }
    v300 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v300, 0LL, 0LL) )
    {
      v301 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v301, 0LL, 0LL) )
      {
        if ( v7->fields._IsDataLost_k__BackingField )
        {
          v302 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(v302, (System_String_o *)StringLiteral_18502/*"datalost_svt_select"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          v407.fields.r = 1.0;
          v407.fields.g = 1.0;
          v407.fields.b = 1.0;
          v407.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v407, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
        }
        else
        {
          if ( v7->fields._TimesToRestart_k__BackingField < 1 )
            goto LABEL_565;
          v303 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v303, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20334/*"img_frames_mask01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          v408.fields.a = 0.62353;
          v408.fields.r = 0.0;
          v408.fields.g = 0.0;
          v408.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v408, 0LL);
          v304 = v8->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v305 = LocalizationManager__Get((System_String_o *)StringLiteral_11521/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
          v309 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v306, v307, v308);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v305, v309, 0LL);
          if ( !v304 )
            goto LABEL_230;
          UILabel__set_text(v304, (System_String_o *)this, 0LL);
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
        v317 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
          v314 = (Il2CppObject **)&StringLiteral_6366/*"FFFF00"*/;
        else
          v314 = (Il2CppObject **)&StringLiteral_6367/*"FFFFFF"*/;
        v315 = *v314;
        TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
        v316 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v311, v312, v313);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_61801464(
                                                         (System_String_o *)StringLiteral_16052/*"[{0}]+{1}[-]"*/,
                                                         v315,
                                                         v316,
                                                         0LL);
        if ( !v8->fields.openClassBoardNumLabel )
          goto LABEL_230;
        v317 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
      }
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v317, 0LL);
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
        v322 = v8->fields.classBoardOpenButtonLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12408/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                           0LL);
          if ( !v322 )
            goto LABEL_230;
          UILabel__set_text(v322, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_230;
          v323 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v324 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v324 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v325 = 36LL;
        }
        else
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12407/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                           0LL);
          if ( !v322 )
            goto LABEL_230;
          UILabel__set_text(v322, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_230;
          v323 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v324 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v324 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v325 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v323,
          *(float *)((char *)&v324->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v325),
          0LL);
      }
      if ( ConstantMaster__IsFLAG20240804(0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
        if ( !this )
          goto LABEL_230;
        v326 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v327 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v327 = BalanceConfig_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition_33770636(v326, v327->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
        classBoardBackSprite = v8->fields.classBoardBackSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17510/*"btn_bg_29_2"*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
        if ( !this )
          goto LABEL_230;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
        if ( !this )
          goto LABEL_230;
        v329 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v330 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
          v330 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition_33770636(v329, v330->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
        if ( !this )
          goto LABEL_230;
        v331 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(
          v331,
          BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
          0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
        if ( !this )
          goto LABEL_230;
        v332 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v332,
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
  FollowerSelectItemListViewItem_o *v3; // x20
  UnityEngine_Object_o *lockMarkSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  v3 = item;
  if ( (byte_4A6B13F & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, item);
    byte_4A6B13F = 1;
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
      sub_1B9026C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v3, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__setupMessageUI(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FollowerSelectItemListViewItemDraw_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct FollowerInfo_o *followerInfo; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v11; // x8
  struct System_Int32_array *adviceMessageIds; // x8
  struct FollowerInfo_o *v13; // x8
  struct UserRecommendSupportInfo_array *v14; // x8
  UserRecommendSupportInfo_o *v15; // x8
  System_String_array *ConvertMessageToId; // x0
  System_String_o *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *message; // x1
  UnityEngine_GameObject_o *v20; // x0
  int v21; // w8
  UnityEngine_GameObject_o *v22; // x0
  bool v23; // w1
  UnityEngine_GameObject_o *v24; // x0
  struct FollowerInfo_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x0

  v5 = this;
  if ( (byte_4A6B13E & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item);
    sub_1B90010(&DataManager_TypeInfo, v6);
    sub_1B90010(&OptionManager_TypeInfo, v7);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B90010(&StringLiteral_117/*" "*/, v8);
    byte_4A6B13E = 1;
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
      v11 = userRecommendSupportHash->m_Items[0];
      if ( !v11 )
        goto LABEL_52;
      adviceMessageIds = v11->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_52;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_44;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v13 = item->fields.followerInfo;
      if ( !v13 )
        goto LABEL_52;
      v14 = v13->fields.userRecommendSupportHash;
      if ( !v14 )
        goto LABEL_52;
      if ( v14->max_length )
      {
        v15 = v14->m_Items[0];
        if ( !v15 || !this )
          goto LABEL_52;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v15->fields.adviceMessageIds,
                               0LL);
        v17 = System_String__Join((System_String_o *)StringLiteral_117/*" "*/, ConvertMessageToId, 0LL);
        if ( !System_String__IsNullOrEmpty(v17, 0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
          if ( !this )
            goto LABEL_52;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
          if ( !this )
            goto LABEL_52;
          message = v17;
          goto LABEL_22;
        }
LABEL_44:
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
        if ( this )
        {
          v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v26, -19.0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
          if ( this )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
              if ( this )
              {
                v23 = 1;
LABEL_49:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v23, 0LL);
                GameObjectExtensions__SetLocalPositionY(v5->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v5->fields.svtProfileObj, 10.0, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.gradeIcon;
                if ( this )
                {
                  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  v21 = 1113849856;
                  goto LABEL_51;
                }
              }
            }
          }
        }
LABEL_52:
        sub_1B9026C(this, item);
      }
    }
    sub_1B90274(this, item, method, v3);
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
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_52;
        v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v24, -19.0, 0LL);
        v25 = item->fields.followerInfo;
        if ( !v25 )
          goto LABEL_52;
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
        if ( !this )
          goto LABEL_52;
        message = v25->fields.message;
        break;
      case 2:
      case 5:
        goto LABEL_44;
      case 3:
      case 4:
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_52;
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v22, -16.0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
        if ( !this )
          goto LABEL_52;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_52;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
        if ( !this )
          goto LABEL_52;
        v23 = 0;
        goto LABEL_49;
      default:
        return;
    }
LABEL_22:
    UILabel__set_text((UILabel_o *)this, message, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
    if ( this )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          GameObjectExtensions__SetLocalPositionY(v5->fields.playerProfileObj, -1.0, 0LL);
          GameObjectExtensions__SetLocalPositionY(v5->fields.svtProfileObj, -1.0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.gradeIcon;
          if ( this )
          {
            v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v21 = 1112801280;
LABEL_51:
            GameObjectExtensions__SetLocalPositionY(v20, *(float *)&v21, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
}