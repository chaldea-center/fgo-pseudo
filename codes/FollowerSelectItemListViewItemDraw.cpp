void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_49F77A7 & 1) == 0 )
  {
    sub_1B640C8(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_49F77A7 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BA2920;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BA2C30;
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

  if ( (byte_49F77A6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B640C8(&SkillIconComponent___TypeInfo, v4);
    sub_1B640C8(&UIIconLabel___TypeInfo, v5);
    byte_49F77A6 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1B6406C(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1B64170(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B6406C(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B64170(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B6406C(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B6406C(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1B64170(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B6406C(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B64170(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B6406C(&this->fields.appendSkillLevelIconLabelList);
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
  System_Collections_Generic_List_object__o *v10; // x20
  UISprite_o *skillIconSprite; // x20

  if ( (byte_49F77A0 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_20098/*"icon_skill_mini"*/, v6);
    sub_1B640C8(&StringLiteral_20240/*"img_friend_skill"*/, v7);
    sub_1B640C8(&StringLiteral_20004/*"icon_append_mini"*/, v8);
    sub_1B640C8(&StringLiteral_20239/*"img_friend_appendskill"*/, v9);
    byte_49F77A0 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1B6406C(&this->fields.switchSkillUIList);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20098/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20240/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20004/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20239/*"img_friend_appendskill"*/, 0LL);
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
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v13; // w9
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v15; // x20
  __int64 v16; // x21
  _BOOL4 v17; // w8
  int32_t v18; // w9
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  Il2CppObject *appendSkillInfoUiWidget; // x1
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  SwitchUIWidgetComponent_o *v29; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_49F77A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_49F77A5 = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  this->fields.displaySkill = displaySkill;
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
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
  if ( ServantLeader )
  {
    v16 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v16;
    *(_QWORD *)&v30.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v30, 0LL) > 0;
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
      skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
      v20 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v21 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v20 )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          skillInfoUiWidget,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v23 + 32) = skillInfoUiWidget;
        sub_1B6406C(v23 + 32);
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
      appendSkillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
      v25 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v26 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v25 )
        goto LABEL_52;
      v27 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          appendSkillInfoUiWidget,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = v25 + 8 * v27;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v27 + 1;
        *(_QWORD *)(v28 + 32) = appendSkillInfoUiWidget;
        sub_1B6406C(v28 + 32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v29 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v29 )
      {
        SwitchUIWidgetComponent__Set(v29, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1B64324(switchSkillInfo);
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

  if ( (byte_49F77A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F77A4 = 1;
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
          sub_1B6432C(supportInfoButton, v10, v11, v12);
        v16 = &skillButtonList->obj.klass + (int)v15;
        v17 = (UnityEngine_Behaviour_o *)v16[4];
        if ( !v17 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v16[4],
                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_1B64324(supportInfoButton);
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
  ServantLeaderInfo_o *v76; // x21
  int32_t Kind_37377344; // w29
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  System_String_o *v80; // x26
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v82; // x24
  __int64 v83; // x25
  struct FollowerInfo_o *v84; // x8
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  System_String_o *name; // x27
  int v88; // w24
  FollowerSelectItemListViewItemDraw_o *v89; // x22
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v91; // x27
  __int64 v92; // x28
  __int64 v93; // x29
  bool v94; // w8
  UIRangeLabel_o *v95; // x24
  const MethodInfo *v96; // x2
  bool v97; // w1
  Il2CppObject *Master_object; // x0
  __int64 v99; // x23
  __int64 v100; // x29
  ServantLimitImageMaster_o *v101; // x28
  Il2CppObject *v102; // x0
  __int64 v103; // x23
  __int64 v104; // x29
  ServantLimitAddMaster_o *v105; // x28
  Il2CppObject *OverwriteTDName; // x25
  int v107; // w26
  __int64 v108; // x24
  BalanceConfig_c *v109; // x0
  int32_t FollowerPointNpc; // w27
  System_String_o **v111; // x8
  System_String_o *v112; // x23
  System_String_o *v113; // x24
  UILabel_o *v114; // x24
  UIIconLabel_o *v115; // x24
  UILabel_o *v116; // x24
  System_String_o *v117; // x23
  int64_t v118; // x0
  Il2CppObject *v119; // x0
  __int64 *v120; // x8
  UILabel_o *v121; // x24
  UIIconLabel_o *v122; // x24
  UILabel_o *v123; // x24
  System_String_o *v124; // x23
  int64_t v125; // x0
  Il2CppObject *v126; // x0
  UILabel_o *v127; // x24
  UIIconLabel_o *v128; // x24
  UILabel_o *v129; // x24
  System_String_o *v130; // x23
  int64_t v131; // x0
  Il2CppObject *v132; // x0
  const MethodInfo *v133; // x2
  UIRangeLabel_o *v134; // x24
  UnityEngine_Object_o *v135; // x23
  UnityEngine_Object_o *v136; // x23
  struct SkillIconComponent_array *v137; // x8
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  struct SkillIconComponent_array *v141; // x8
  __int64 v142; // x24
  struct UnityEngine_GameObject_array *v143; // x8
  struct SkillIconComponent_array *v144; // x8
  struct SkillIconComponent_array *v145; // x8
  __int64 v146; // x23
  struct UnityEngine_GameObject_array *v147; // x8
  UnityEngine_Object_o *v148; // x23
  UnityEngine_Object_o *v149; // x23
  UILabel_o *playerNameLabel; // x26
  UIIconLabel_o *playerLevelIconLabel; // x26
  UILabel_o *loginDataLabel; // x26
  System_String_o *v153; // x23
  int64_t LoginTime; // x0
  Il2CppObject *v155; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  bool HasFlag_39149148; // w26
  UILabel_o *v158; // x26
  UIIconLabel_o *v159; // x26
  UILabel_o *v160; // x26
  System_String_o *v161; // x23
  int64_t v162; // x0
  Il2CppObject *v163; // x0
  _BOOL4 v164; // w23
  BalanceConfig_c *v165; // x0
  struct BalanceConfig_StaticFields *v166; // x8
  bool v167; // zf
  __int64 v168; // x9
  __int64 v169; // x10
  UILabel_o *v170; // x26
  UIIconLabel_o *v171; // x26
  UILabel_o *v172; // x26
  System_String_o *v173; // x23
  int64_t v174; // x0
  Il2CppObject *v175; // x0
  _BOOL4 v176; // w23
  BalanceConfig_c *v177; // x0
  LocalizationManager_c *v178; // x0
  System_String_o **v179; // x10
  System_String_o *v180; // x23
  System_String_o *v181; // x0
  bool v182; // w1
  bool IsHideSupport; // w0
  UIRangeLabel_o *svtNameRangeLabel; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *svtNpRangeLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x23
  struct ServantNpCommandCardComponent_o *v188; // x8
  int32_t FriendPointUpVal; // w24
  int v190; // w25
  FollowerSelectItemListViewItemDraw_o *v191; // x1
  int v192; // w8
  __int64 v193; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int32_t v195; // w25
  System_String_o *v196; // x23
  Il2CppObject *v197; // x0
  UILabel_o *campaignLabel; // x24
  FollowerSelectItemListViewItemDraw_o *v199; // x1
  bool activeSelf; // w8
  float v201; // s8
  bool v202; // w8
  float v203; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v205; // x0
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v209; // w24
  int32_t Rarity; // w25
  struct UISprite_o *typeTextSprite; // x8
  __int64 v212; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v214; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v217; // x8
  struct SkillInfo_array *v218; // x11
  int v219; // w9
  unsigned __int64 v220; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v222; // x14
  __int64 v223; // x23
  __int64 v224; // x25
  unsigned __int64 v225; // x26
  struct SkillInfo_array *v226; // x8
  struct UnityEngine_GameObject_array *v227; // x9
  int32_t *v228; // x27
  struct SkillIconComponent_array *v229; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v232; // x8
  struct UIIconLabel_array *v233; // x8
  struct SkillIconComponent_array *v234; // x8
  __int64 v235; // x9
  int32_t v236; // w8
  bool v237; // w1
  Il2CppObject *skillInfoUiWidget; // x1
  __int64 v239; // x8
  _QWORD *v240; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v242; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v245; // x8
  struct SkillInfo_array *v246; // x11
  int v247; // w9
  signed __int64 v248; // x10
  unsigned __int64 v249; // x14
  SkillInfo_o *v250; // x14
  unsigned __int64 v251; // x23
  signed __int64 v252; // x25
  struct SkillInfo_array *v253; // x8
  struct UnityEngine_GameObject_array *v254; // x9
  int32_t *v255; // x27
  struct UICommonButton_array *skillButtonList; // x9
  int v257; // w8
  struct UnityEngine_GameObject_array *v258; // x9
  struct SkillIconComponent_array *v259; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v262; // x8
  struct UIIconLabel_array *v263; // x8
  struct SkillIconComponent_array *v264; // x8
  int32_t v265; // w8
  bool v266; // w1
  Il2CppObject *appendSkillInfoUiWidget; // x1
  __int64 v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  __int64 v271; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantCommandCardListComponent_o *v274; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v277; // w26
  UnityEngine_Object_o *pushSprite; // x23
  struct FollowerInfo_o *v279; // x8
  int64_t pushUserSvtId; // x8
  bool v281; // w24
  UnityEngine_Object_o *v282; // x23
  UnityEngine_Object_o *v283; // x23
  UISprite_o *v284; // x24
  UISprite_o *v285; // x23
  UILabel_o *v286; // x24
  System_String_o *v287; // x23
  Il2CppObject *v288; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  Il2CppObject **v290; // x9
  Il2CppObject *v291; // x23
  Il2CppObject *v292; // x0
  FollowerSelectItemListViewItemDraw_o *v293; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w23
  UILabel_o *v298; // x24
  UnityEngine_GameObject_o *v299; // x24
  FollowerSelectItemListViewItemDraw_c *v300; // x8
  __int64 v301; // x9
  _BOOL4 IsRecommendFollower_k__BackingField; // w23
  BalanceConfig_c *v303; // x0
  __int64 v304; // x9
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o **v306; // x10
  UnityEngine_GameObject_o *v307; // x24
  BalanceConfig_c *v308; // x8
  UISprite_o *classBoardBackSprite; // x24
  UnityEngine_GameObject_o *v310; // x24
  FollowerSelectItemListViewItemDraw_c *v311; // x8
  UnityEngine_GameObject_o *v312; // x0
  UnityEngine_GameObject_o *v313; // x0
  float v314; // s0
  float v315; // s8
  float v316; // s0
  float v317; // s9
  UnityEngine_GameObject_o *v318; // x0
  float LocalPositionX; // s0
  float v320; // s10
  UnityEngine_GameObject_o *v321; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v324; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v326; // x22
  __int64 v327; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *v329; // x23
  int32_t v330; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v332; // w22
  QuestPhaseEntity_o *v333; // x0
  QuestPhaseEntity_o *v334; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v336; // x23
  __int64 v337; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v338; // x21
  FollowerSelectItemListViewItemDraw_o *v339; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v342; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *v344; // x22
  int32_t eventId; // w21
  Il2CppObject *v346; // x22
  bool v347; // w1
  UnityEngine_Object_o *recommendedUser; // x21
  UILabel_o *warningMessageLabel; // x22
  float v350; // s0
  float v351; // s8
  __int64 v352; // x1
  FollowerSelectItemListViewItemDraw_o *v353; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int32_t FollowerType; // w0
  Il2CppObject *v359; // x22
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v361; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v366; // w21
  System_String_o *v367; // x0
  System_String_o *v368; // x0
  struct UnityEngine_Vector3_StaticFields *v369; // x8
  System_String_o *v370; // x0
  FollowerSelectItemListViewItemDraw_o *v371; // x0
  FollowerSelectItemListViewItem_o *v372; // x1
  const MethodInfo *v373; // x2
  int32_t v374; // [xsp+1Ch] [xbp-C4h]
  System_String_o *v375; // [xsp+20h] [xbp-C0h]
  int32_t TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v377; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v379; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v388; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v389; // 0:x0.16
  UnityEngine_Color_o v390; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v391; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_49F77A1 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&BalanceConfig_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_1B640C8(&DataManager_TypeInfo, v18);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1B640C8(&FollowerRootComponent_TypeInfo, v22);
    sub_1B640C8(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_1B640C8(&Grade_TypeInfo, v24);
    sub_1B640C8(&int_TypeInfo, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_1B640C8(&LocalizationManager_TypeInfo, v29);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v30);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B640C8(&OptionManager_TypeInfo, v32);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_1B640C8(&SkillInfo___TypeInfo, v36);
    sub_1B640C8(&TitleInfoControl_TypeInfo, v37);
    sub_1B640C8(&StringLiteral_3749/*"COMMON_NO_ENTRY"*/, v38);
    sub_1B640C8(&StringLiteral_6405/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_1B640C8(&StringLiteral_6384/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_1B640C8(&StringLiteral_11563/*"SERVANT_HIDE_NAME"*/, v41);
    sub_1B640C8(&StringLiteral_9281/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_1B640C8(&StringLiteral_6385/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_1B640C8(&StringLiteral_6338/*"FFFFFF"*/, v44);
    sub_1B640C8(&StringLiteral_9282/*"NP_HIDE_NAME"*/, v45);
    sub_1B640C8(&StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1B640C8(&StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_1B640C8(&StringLiteral_9283/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_1B640C8(&StringLiteral_6398/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_1B640C8(&StringLiteral_6383/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_1B640C8(&StringLiteral_17415/*"btn_bg_29_2"*/, v51);
    sub_1B640C8(&StringLiteral_20110/*"icon_support_01"*/, v52);
    sub_1B640C8(&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1B640C8(&StringLiteral_20226/*"img_frames_mask01"*/, v54);
    sub_1B640C8(&StringLiteral_12327/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v55);
    sub_1B640C8(&StringLiteral_12328/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v56);
    sub_1B640C8(&StringLiteral_6397/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v57);
    sub_1B640C8(&StringLiteral_6399/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v58);
    sub_1B640C8(&StringLiteral_6382/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v59);
    sub_1B640C8(&StringLiteral_18405/*"datalost_svt_select"*/, v60);
    sub_1B640C8(&StringLiteral_6337/*"FFFF00"*/, v61);
    sub_1B640C8(&StringLiteral_9256/*"NO_ENTRY_NAME"*/, v62);
    sub_1B640C8(&StringLiteral_9280/*"NP_COLOR_NAME"*/, v63);
    sub_1B640C8(&StringLiteral_15959/*"[{0}]+{1}[-]"*/, v64);
    sub_1B640C8(&StringLiteral_1/*""*/, v65);
    sub_1B640C8(&StringLiteral_20073/*"icon_friend"*/, v66);
    sub_1B640C8(&StringLiteral_6386/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v67);
    sub_1B640C8(&StringLiteral_20072/*"icon_follow"*/, v68);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_20268/*"img_listbg_02"*/, v69);
    byte_49F77A1 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v379 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v377.fields.r = 0LL;
  *(_QWORD *)&v377.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_162;
  size = switchSkillUIList->fields._size;
  v72 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v72;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_162;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_162;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  if ( (v8->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
    if ( !this )
      goto LABEL_162;
    v8->fields.warningMessageWidth = (int32_t)this->fields.skillIconList;
    UIWidget__set_width((UIWidget_o *)this, 1000, 0LL);
    if ( !item )
      return;
  }
  else if ( !item )
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
      goto LABEL_162;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, mode == 0, 0LL);
  }
  if ( mode )
  {
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
    followerInfo = item->fields.followerInfo;
    v76 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_37377344 = Grade__GetKind_37377344(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_37377344, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    v80 = FollowerBgImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    dataLostMaskMessageLabel = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_162;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    if ( !v76 )
      goto LABEL_49;
    v83 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v82 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v382.fields.currentCryptoKey = v83;
    *(_QWORD *)&v382.fields.fakeValue = v82;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                     v382,
                                                     0LL);
    if ( (int)this >= 1 )
    {
      v84 = item->fields.followerInfo;
      if ( !v84 )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_162;
      v375 = v80;
      v374 = Kind_37377344;
      ServantFaceIconComponent__Set_37909296(
        (ServantFaceIconComponent_o *)this,
        v76,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        0,
        v84->fields.imageSvtId,
        0LL);
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, item, v85);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, item, v86);
      FollowerSelectItemListViewItem__GetNpInfo(item, &tdInfo, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(
                                                       item,
                                                       0LL);
      if ( !tdInfo )
        goto LABEL_162;
      name = tdInfo->fields.name;
      v88 = (int)this;
      v89 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      if ( ServantLeaderInfo__IsNpc(v76, 0LL) )
      {
        dispLimitCount = v76->fields.dispLimitCount;
        if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v76->fields.npcFlag, 0LL) )
        {
          v91 = tdInfo;
          v93 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
          v92 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v383.fields.currentCryptoKey = v93;
          *(_QWORD *)&v383.fields.fakeValue = v92;
          this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                           v383,
                                                           0LL);
          if ( !v91 )
            goto LABEL_162;
          name = TreasureDvcInfo__GetName(v91, (int32_t)this, 0LL);
        }
        v94 = !NpcServantFollowerEntity__IsHideRarity(v76->fields.npcFlag, 0LL);
      }
      else
      {
        dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v76, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        if ( !OptionManager__GetSpoilerSetting(0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
          if ( !this )
            goto LABEL_162;
          dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                             (ServantLimitSpoilerProtectionMaster_o *)this,
                             v76->fields.svtId,
                             dispLimitCount,
                             0LL);
        }
        v94 = 1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_162;
      ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v94, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_162;
      ServantFaceIconComponent__SetDispClassSprite(
        (ServantFaceIconComponent_o *)this,
        !item->fields._IsDataLost_k__BackingField,
        0LL);
      if ( !ServantLeaderInfo__IsNpc(v76, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v99 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v100 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        v101 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v384.fields.currentCryptoKey = v99;
        *(_QWORD *)&v384.fields.fakeValue = v100;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                         v384,
                                                         0LL);
        if ( !v101 )
          goto LABEL_162;
        dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                           v101,
                           (int32_t)this,
                           dispLimitCount,
                           0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v102 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v103 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
      v104 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
      v105 = (ServantLimitAddMaster_o *)v102;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v385.fields.currentCryptoKey = v103;
      *(_QWORD *)&v385.fields.fakeValue = v104;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                       v385,
                                                       0LL);
      if ( !tdInfo || !v105 )
        goto LABEL_162;
      OverwriteTDName = (Il2CppObject *)ServantLimitAddMaster__GetOverwriteTDName(
                                          v105,
                                          (int32_t)this,
                                          dispLimitCount,
                                          name,
                                          tdInfo->fields.lv,
                                          0LL);
      switch ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) )
      {
        case 1:
          playerNameLabel = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !playerNameLabel )
            goto LABEL_162;
          UILabel__set_text(playerNameLabel, (System_String_o *)this, 0LL);
          playerLevelIconLabel = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          if ( !playerLevelIconLabel )
            goto LABEL_162;
          UIIconLabel__Set_37921148(playerLevelIconLabel, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          loginDataLabel = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v153 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          LoginTime = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v155 = (Il2CppObject *)LocalizationManager__GetBeforeTime(LoginTime, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v153, v155, 0LL);
          if ( !loginDataLabel )
            goto LABEL_162;
          UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20073/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          questRestrictionInfo = item->fields.questRestrictionInfo;
          if ( questRestrictionInfo )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                             questRestrictionInfo->fields.questId,
                                                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_162;
            HasFlag_39149148 = QuestEntity__HasFlag_39149148(
                                 (QuestEntity_o *)this,
                                 0x8000000LL,
                                 questRestrictionInfo->fields.questPhase,
                                 0LL);
          }
          else
          {
            HasFlag_39149148 = 0;
          }
          IsRecommendFollower_k__BackingField = item->fields._IsRecommendFollower_k__BackingField;
          v303 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v303 = BalanceConfig_TypeInfo;
          }
          v304 = 212LL;
          if ( HasFlag_39149148 )
            v304 = 664LL;
          if ( IsRecommendFollower_k__BackingField )
            v304 = 224LL;
          static_fields = v303->static_fields;
          v306 = (System_String_o **)&StringLiteral_9280/*"NP_COLOR_NAME"*/;
          v178 = LocalizationManager_TypeInfo;
          FollowerPointNpc = *(int32_t *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v304);
          if ( v88 > 1 )
            v306 = (System_String_o **)&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/;
          v180 = *v306;
          Kind_37377344 = v374;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
LABEL_213:
            j_il2cpp_runtime_class_init_0(v178);
LABEL_214:
          v181 = LocalizationManager__Get(v180, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v181, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_162;
          v89 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)this,
            !item->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_162;
          v182 = 1;
LABEL_226:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v182, 0LL);
LABEL_227:
          IsHideSupport = ServantLeaderInfo__IsHideSupport(v76, 0LL);
          svtNameRangeLabel = v8->fields.svtNameRangeLabel;
          if ( IsHideSupport )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11563/*"SERVANT_HIDE_NAME"*/,
                                                             0LL);
            if ( !svtNameRangeLabel )
              goto LABEL_162;
            UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
            if ( !this )
              goto LABEL_162;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0LL);
            if ( (_DWORD)this != 4 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_9283/*"NP_HIDE_NAME_LEVEL"*/,
                                                               0LL);
              v89 = this;
            }
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(item, 0LL);
            if ( !svtNameRangeLabel )
              goto LABEL_162;
            UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
          }
          if ( !tdInfo )
            goto LABEL_162;
          strengthStatus = tdInfo->fields.strengthStatus;
          if ( ServantLeaderInfo__IsHideSupport(v76, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v76, 0LL) )
            strengthStatus = 0;
          svtNpRangeLabel = v8->fields.svtNpRangeLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
          if ( !svtNpRangeLabel )
            goto LABEL_162;
          UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)v89, (System_String_o *)this, 0, 0, 0LL);
          svtNpCommandCard = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
            v188 = v8->fields.svtNpCommandCard;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v188 )
                goto LABEL_162;
              ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
            }
            else
            {
              if ( !v188 )
                goto LABEL_162;
              ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
            }
          }
          FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignValue(
                                                           item,
                                                           0LL);
          if ( !v8->fields.friendPointIconLabel )
            goto LABEL_162;
          v190 = (int)this;
          UIIconLabel__Set_37921148(v8->fields.friendPointIconLabel, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
          if ( FriendPointUpVal > 0 || v190 >= 1 )
          {
            if ( v190 <= 0 )
              v192 = 1000;
            else
              v192 = v190;
            v193 = 274877907LL * (v192 * FriendPointUpVal + (v192 - 1000) * FollowerPointNpc);
            friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            v195 = (v193 >> 38) + ((unsigned __int64)v193 >> 63);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v196 = LocalizationManager__Get((System_String_o *)StringLiteral_6405/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
            TimesToRestart_k__BackingField = v195;
            v197 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v196, v197, 0LL);
            if ( !friendPointData2Label )
              goto LABEL_162;
            v191 = this;
            this = friendPointData2Label;
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            if ( !this )
              goto LABEL_162;
            v191 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v191, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__IsFriendPointCampaign(
                                                           item,
                                                           0LL);
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
              goto LABEL_162;
            UILabel__set_gradientTop(campaignLabel, (UnityEngine_Color_o)this->fields.skillButtonList->obj, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
            if ( !this )
              goto LABEL_162;
            UILabel__set_gradientBottom(
              (UILabel_o *)this,
              FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
              0LL);
            campaignLabel = v8->fields.campaignLabel;
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignName(
                                                             item,
                                                             0LL);
            if ( !campaignLabel )
              goto LABEL_162;
            v199 = this;
          }
          else
          {
            if ( !campaignLabel )
              goto LABEL_162;
            v199 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text(campaignLabel, (System_String_o *)v199, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          v201 = activeSelf ? -3.0 : 39.0;
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          v202 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
          v203 = v202 ? -22.0 : 20.0;
          if ( !this )
            goto LABEL_162;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, v201, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
          if ( !this )
            goto LABEL_162;
          v205 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v205, v203, 0LL);
          eventUpValIcon = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
          {
            if ( FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL) )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                               item,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              baseButton = this->fields.baseButton;
              servantFaceIcon = this->fields.servantFaceIcon;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v386.fields.currentCryptoKey = baseButton;
              *(_QWORD *)&v386.fields.fakeValue = servantFaceIcon;
              v209 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v386, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                               item,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
            }
            else
            {
              Rarity = -1;
              v209 = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
            if ( !this )
              goto LABEL_162;
            if ( this->fields.typeTextSprite )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                               item,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              typeTextSprite = this->fields.typeTextSprite;
              if ( !typeTextSprite )
                goto LABEL_162;
              topAnchor = typeTextSprite->fields.topAnchor;
              v212 = *(_QWORD *)&typeTextSprite->fields.updateAnchors;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v387.fields.currentCryptoKey = topAnchor;
              *(_QWORD *)&v387.fields.fakeValue = v212;
              v214 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v387, 0LL);
            }
            else
            {
              v214 = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
            if ( !this )
              goto LABEL_162;
            EventUpValIconComponent__Set(
              (EventUpValIconComponent_o *)this,
              item->fields.eventUpValItemList,
              v209,
              Rarity,
              v214,
              0LL);
          }
          p_skillInfoList = &v8->fields.skillInfoList;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                           item,
                                                           &v8->fields.skillInfoList,
                                                           0LL);
          skillIconList = v8->fields.skillIconList;
          if ( !skillIconList )
            goto LABEL_162;
          v217 = *(_QWORD *)&skillIconList->max_length;
          if ( v217 << 32 >= 1 )
          {
            v218 = *p_skillInfoList;
            v219 = 0;
            v220 = 0LL;
            while ( v218 )
            {
              max_length = v218->max_length;
              if ( (__int64)v220 < (int)max_length )
              {
                if ( v220 >= max_length )
                  goto LABEL_685;
                v222 = (*p_skillInfoList)->m_Items[v220];
                if ( v222 && v222->fields.id >= 1 )
                  v219 = v220 + 1;
              }
              if ( (__int64)++v220 >= (int)v217 )
                goto LABEL_316;
            }
            goto LABEL_162;
          }
          v219 = 0;
LABEL_316:
          if ( (int)v217 >= 1 )
          {
            v223 = v219;
            v224 = 4LL;
            do
            {
              v225 = v224 - 4;
              if ( v224 - 4 >= v223 )
              {
                skillBaseList = v8->fields.skillBaseList;
                if ( !skillBaseList )
                  goto LABEL_162;
                if ( v225 >= skillBaseList->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillBaseList->obj.klass + v224);
                if ( !this )
                  goto LABEL_162;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v226 = *p_skillInfoList;
                if ( !*p_skillInfoList )
                  goto LABEL_162;
                if ( v225 >= v226->max_length )
                  goto LABEL_685;
                v227 = v8->fields.skillBaseList;
                if ( !v227 )
                  goto LABEL_162;
                if ( v225 >= v227->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v227->obj.klass + v224);
                if ( !this )
                  goto LABEL_162;
                v228 = (int32_t *)*((_QWORD *)&v226->obj.klass + v224);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v228 )
                    v228[4] = 0;
                  v229 = v8->fields.skillIconList;
                  if ( !v229 )
                    goto LABEL_162;
                  if ( v225 >= v229->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v229->obj.klass + v224);
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
                  if ( !skillLevelIconLabelList )
                    goto LABEL_162;
                  if ( v225 >= skillLevelIconLabelList->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v224);
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v232 = v8->fields.skillIconList;
                  if ( !v232 )
                    goto LABEL_162;
                  if ( v225 >= v232->max_length )
                    goto LABEL_685;
                  if ( !v228 )
                    goto LABEL_162;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v232->obj.klass + v224);
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__Set_37920336(
                    (SkillIconComponent_o *)this,
                    v228[4],
                    v228[5],
                    v228[12],
                    v228[13],
                    0LL);
                  v233 = v8->fields.skillLevelIconLabelList;
                  if ( !v233 )
                    goto LABEL_162;
                  if ( v225 >= v233->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v233->obj.klass + v224);
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Set_37921148((UIIconLabel_o *)this, 48, v228[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v234 = v8->fields.skillIconList;
              if ( !v234 )
                goto LABEL_162;
              v235 = v224 - 3;
              ++v224;
            }
            while ( v235 < (int)v234->max_length );
          }
          v236 = v8->fields.displaySkill;
          if ( v236 == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_162;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_162;
            skillInfoUiWidget = (Il2CppObject *)v8->fields.skillInfoUiWidget;
            v239 = *(_QWORD *)&this->fields.m_CachedPtr;
            v240 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v239 )
              goto LABEL_162;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v239 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                skillInfoUiWidget,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
            }
            else
            {
              v242 = v239 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v242 + 32) = skillInfoUiWidget;
              sub_1B6406C(v242 + 32);
            }
          }
          else
          {
            if ( v236 == 1 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              v237 = 0;
            }
            else
            {
              if ( v236 )
                goto LABEL_365;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                this,
                this->klass[1]._1.declaringType,
                1.0);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              v237 = 1;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v237, 0LL);
          }
LABEL_365:
          p_appendSkillInfoList = &v8->fields.appendSkillInfoList;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                           item,
                                                           &v8->fields.appendSkillInfoList,
                                                           item->fields.isNpc,
                                                           0LL);
          appendSkillIconList = v8->fields.appendSkillIconList;
          if ( !appendSkillIconList )
            goto LABEL_162;
          v245 = *(_QWORD *)&appendSkillIconList->max_length;
          if ( v245 << 32 < 1 )
          {
            v247 = 0;
          }
          else
          {
            v246 = *p_appendSkillInfoList;
            v247 = 0;
            v248 = 0LL;
            do
            {
              if ( v246 )
              {
                v249 = v246->max_length;
                if ( v248 < (int)v249 )
                {
                  if ( v248 >= v249 )
                    goto LABEL_685;
                  v250 = (*p_appendSkillInfoList)->m_Items[v248];
                  if ( v250 && v250->fields.id >= 1 )
                    v247 = v248 + 1;
                }
              }
              ++v248;
            }
            while ( v248 < (int)v245 );
          }
          if ( (int)v245 >= 1 )
          {
            v251 = 0LL;
            v252 = v247;
            do
            {
              if ( (__int64)v251 >= v252 )
              {
                appendSkillBaseList = v8->fields.appendSkillBaseList;
                if ( !appendSkillBaseList )
                  goto LABEL_162;
                if ( v251 >= appendSkillBaseList->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v251];
                if ( !this )
                  goto LABEL_162;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v253 = *p_appendSkillInfoList;
                if ( !*p_appendSkillInfoList )
                  goto LABEL_162;
                if ( v251 >= v253->max_length )
                  goto LABEL_685;
                v254 = v8->fields.appendSkillBaseList;
                if ( !v254 )
                  goto LABEL_162;
                if ( v251 >= v254->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)v254->m_Items[v251];
                if ( !this )
                  goto LABEL_162;
                v255 = (int32_t *)v253->m_Items[v251];
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
                  v257 = HIDWORD(skillButtonList->m_Items[145]);
                  if ( v251 )
                    v257 += LODWORD(skillButtonList->m_Items[146]) * v251;
                  v258 = v8->fields.appendSkillBaseList;
                  if ( !v258 )
                    goto LABEL_162;
                  if ( v251 >= v258->max_length )
                    goto LABEL_685;
                  GameObjectExtensions__SetLocalPositionX(v258->m_Items[v251], (float)v257, 0LL);
                }
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v255 )
                    v255[4] = 0;
                  v259 = v8->fields.appendSkillIconList;
                  if ( !v259 )
                    goto LABEL_162;
                  if ( v251 >= v259->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)v259->m_Items[v251];
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
                  if ( !appendSkillLevelIconLabelList )
                    goto LABEL_162;
                  if ( v251 >= appendSkillLevelIconLabelList->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v251];
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v262 = v8->fields.appendSkillIconList;
                  if ( !v262 )
                    goto LABEL_162;
                  if ( v251 >= v262->max_length )
                    goto LABEL_685;
                  if ( !v255 )
                    goto LABEL_162;
                  this = (FollowerSelectItemListViewItemDraw_o *)v262->m_Items[v251];
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__Set_37920336(
                    (SkillIconComponent_o *)this,
                    v255[4],
                    v255[5],
                    v255[12],
                    v255[13],
                    0LL);
                  v263 = v8->fields.appendSkillLevelIconLabelList;
                  if ( !v263 )
                    goto LABEL_162;
                  if ( v251 >= v263->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)v263->m_Items[v251];
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Set_37921148((UIIconLabel_o *)this, 48, v255[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v264 = v8->fields.appendSkillIconList;
              if ( !v264 )
                goto LABEL_162;
              ++v251;
            }
            while ( (__int64)v251 < (int)v264->max_length );
          }
          v265 = v8->fields.displaySkill;
          if ( v265 == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
            v80 = v375;
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_162;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_162;
            appendSkillInfoUiWidget = (Il2CppObject *)v8->fields.appendSkillInfoUiWidget;
            v268 = *(_QWORD *)&this->fields.m_CachedPtr;
            v269 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v268 )
              goto LABEL_162;
            v270 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v270 >= *(_DWORD *)(v268 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                appendSkillInfoUiWidget,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
            }
            else
            {
              v271 = v268 + 8 * v270;
              LODWORD(this->fields.m_CancellationTokenSource) = v270 + 1;
              *(_QWORD *)(v271 + 32) = appendSkillInfoUiWidget;
              sub_1B6406C(v271 + 32);
            }
          }
          else
          {
            v80 = v375;
            if ( v265 == 1 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                this,
                this->klass[1]._1.declaringType,
                1.0);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              v266 = 1;
            }
            else
            {
              if ( v265 )
                goto LABEL_438;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              v266 = 0;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v266, 0LL);
          }
          if ( v8->fields.displaySkill == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_162;
            switchSkillInfo = v8->fields.switchSkillInfo;
            this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
            if ( !switchSkillInfo )
              goto LABEL_162;
            SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
          }
LABEL_438:
          svtCommandCardList = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
            v274 = v8->fields.svtCommandCardList;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v274 )
                goto LABEL_162;
              ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
            }
            else
            {
              SvtId = FollowerSelectItemListViewItem__get_SvtId(item, 0LL);
              commandCardParam = v76->fields.commandCardParam;
              v277 = SvtId;
              this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v76, 0LL);
              if ( !v274 )
                goto LABEL_162;
              ServantCommandCardListComponent__Set_37898232(
                v274,
                v277,
                commandCardParam,
                (System_Int32_array *)this,
                2,
                1,
                0LL);
              v80 = v375;
            }
          }
          pushSprite = (UnityEngine_Object_o *)v8->fields.pushSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v279 = item->fields.followerInfo;
            if ( !v279 )
              goto LABEL_162;
            pushUserSvtId = v279->fields.pushUserSvtId;
            v281 = pushUserSvtId && pushUserSvtId == v76->fields.userSvtId;
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_162;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v281, 0LL);
          }
          v282 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v282, 0LL, 0LL) )
            goto LABEL_483;
          v283 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v283, 0LL, 0LL) )
            goto LABEL_483;
          if ( item->fields._IsDataLost_k__BackingField )
          {
            v284 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetPartyOrganizationImage(v284, (System_String_o *)StringLiteral_18405/*"datalost_svt_select"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            v390.fields.r = 1.0;
            v390.fields.g = 1.0;
            v390.fields.b = 1.0;
            v390.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)this, v390, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
          }
          else
          {
            if ( item->fields._TimesToRestart_k__BackingField < 1 )
              goto LABEL_483;
            v285 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetCommon(v285, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20226/*"img_frames_mask01"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            v391.fields.a = 0.62353;
            v391.fields.r = 0.0;
            v391.fields.g = 0.0;
            v391.fields.b = 0.0;
            UIWidget__set_color((UIWidget_o *)this, v391, 0LL);
            v286 = v8->fields.dataLostMaskMessageLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v287 = LocalizationManager__Get((System_String_o *)StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
            TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
            v288 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v287, v288, 0LL);
            if ( !v286 )
              goto LABEL_162;
            UILabel__set_text(v286, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_162;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
            if ( !this )
              goto LABEL_162;
          }
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_483:
          openClassBoardNumLabel = (UnityEngine_Object_o *)v8->fields.openClassBoardNumLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
          {
            if ( (item->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0
              || !item->fields._IsReleasedClassBoard_k__BackingField )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
              if ( !this )
                goto LABEL_162;
              v293 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( item->fields._IsMaxOpenClassBoard_k__BackingField )
                v290 = (Il2CppObject **)&StringLiteral_6337/*"FFFF00"*/;
              else
                v290 = (Il2CppObject **)&StringLiteral_6338/*"FFFFFF"*/;
              v291 = *v290;
              TimesToRestart_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
              v292 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
              this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_61389768(
                                                               (System_String_o *)StringLiteral_15959/*"[{0}]+{1}[-]"*/,
                                                               v291,
                                                               v292,
                                                               0LL);
              if ( !v8->fields.openClassBoardNumLabel )
                goto LABEL_162;
              v293 = this;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            }
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v293, 0LL);
          }
          classBoardOpenButton = (UnityEngine_Object_o *)v8->fields.classBoardOpenButton;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
            break;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
          if ( !this )
            goto LABEL_162;
          IsReleasedClassBoard_k__BackingField = item->fields._IsReleasedClassBoard_k__BackingField;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          if ( !IsReleasedClassBoard_k__BackingField )
            goto LABEL_175;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
          if ( !this )
            goto LABEL_162;
          UICommonButton__SetButtonEnable(
            (UICommonButton_o *)this,
            item->fields._OpenClassBoardNum_k__BackingField >= 0,
            1,
            0LL);
          classBoardOpenButtonLabel = (UnityEngine_Object_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(classBoardOpenButtonLabel, 0LL, 0LL) )
          {
            OpenClassBoardNum_k__BackingField = item->fields._OpenClassBoardNum_k__BackingField;
            v298 = v8->fields.classBoardOpenButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12328/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                               0LL);
              if ( !v298 )
                goto LABEL_162;
              UILabel__set_text(v298, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_162;
              v299 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v300 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v300 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v301 = 36LL;
            }
            else
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12327/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                               0LL);
              if ( !v298 )
                goto LABEL_162;
              UILabel__set_text(v298, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_162;
              v299 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v300 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v300 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v301 = 32LL;
            }
            GameObjectExtensions__SetLocalPositionY(
              v299,
              *(float *)((char *)&v300->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v301),
              0LL);
          }
          if ( ConstantMaster__IsFLAG20240804(0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
            if ( !this )
              goto LABEL_162;
            v307 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v308 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v308 = BalanceConfig_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_33375356(v307, v308->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
            classBoardBackSprite = v8->fields.classBoardBackSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17415/*"btn_bg_29_2"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
            if ( !this )
              goto LABEL_162;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_162;
            v310 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v311 = FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
              v311 = FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_33375356(v310, v311->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_162;
            v312 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalScaleX(
              v312,
              BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
              0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            if ( !this )
              goto LABEL_162;
            v313 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              v313,
              (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
              0LL);
          }
          break;
        case 2:
          v158 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !v158 )
            goto LABEL_162;
          UILabel__set_text(v158, (System_String_o *)this, 0LL);
          v159 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          Kind_37377344 = v374;
          if ( !v159 )
            goto LABEL_162;
          UIIconLabel__Set_37921148(v159, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v160 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v161 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v162 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v163 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v162, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v161, v163, 0LL);
          if ( !v160 )
            goto LABEL_162;
          UILabel__set_text(v160, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          v164 = item->fields._IsRecommendFollower_k__BackingField;
          v165 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v165 = BalanceConfig_TypeInfo;
          }
          v166 = v165->static_fields;
          v167 = !v164;
          v168 = 224LL;
          v169 = 216LL;
          goto LABEL_207;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_162;
          v107 = v88;
          v108 = StringLiteral_20268/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          Kind_37377344 = v374;
          if ( !this )
            goto LABEL_162;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
          if ( !this )
            goto LABEL_162;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20110/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v109 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v109 = BalanceConfig_TypeInfo;
          }
          FollowerPointNpc = v109->static_fields->FollowerPointNpc;
          v375 = (System_String_o *)v108;
          if ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) == 3 )
          {
            v111 = (System_String_o **)&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/;
            if ( v107 <= 1 )
              v111 = (System_String_o **)&StringLiteral_9280/*"NP_COLOR_NAME"*/;
            v112 = *v111;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v113 = LocalizationManager__Get(v112, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v113 = LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            OverwriteTDName = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9282/*"NP_HIDE_NAME"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v113, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_162;
          v89 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_162;
          v182 = 0;
          goto LABEL_226;
        case 5:
          v170 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !v170 )
            goto LABEL_162;
          UILabel__set_text(v170, (System_String_o *)this, 0LL);
          v171 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          Kind_37377344 = v374;
          if ( !v171 )
            goto LABEL_162;
          UIIconLabel__Set_37921148(v171, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v172 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v173 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v174 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v175 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v174, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v173, v175, 0LL);
          if ( !v172 )
            goto LABEL_162;
          UILabel__set_text(v172, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20072/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v176 = item->fields._IsRecommendFollower_k__BackingField;
          v177 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v177 = BalanceConfig_TypeInfo;
          }
          v166 = v177->static_fields;
          v167 = !v176;
          v168 = 224LL;
          v169 = 664LL;
LABEL_207:
          v178 = LocalizationManager_TypeInfo;
          if ( v167 )
            v168 = v169;
          if ( v88 <= 1 )
            v179 = (System_String_o **)&StringLiteral_9280/*"NP_COLOR_NAME"*/;
          else
            v179 = (System_String_o **)&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/;
          FollowerPointNpc = *(int32_t *)((char *)&v166->CriticalRateToAddByQuickFirstBonus + v168);
          v180 = *v179;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            goto LABEL_213;
          goto LABEL_214;
        default:
          Kind_37377344 = v374;
          FollowerPointNpc = 0;
          goto LABEL_227;
      }
    }
    else
    {
LABEL_49:
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(item, 0LL);
      if ( !v8->fields.servantFaceIcon )
        goto LABEL_162;
      ServantFaceIconComponent__SetEquipDangling(v8->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0LL);
      v95 = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3749/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !v95 )
        goto LABEL_162;
      UIRangeLabel__Set(v95, (System_String_o *)this, 0LL, 1, 0, 0LL);
      switch ( FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) )
      {
        case 1:
          v114 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !v114 )
            goto LABEL_162;
          UILabel__set_text(v114, (System_String_o *)this, 0LL);
          v115 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          if ( !v115 )
            goto LABEL_162;
          UIIconLabel__Set_37921148(v115, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v116 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v117 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v118 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v119 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v118, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v117, v119, 0LL);
          if ( !v116 )
            goto LABEL_162;
          UILabel__set_text(v116, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          v120 = &StringLiteral_20073/*"icon_friend"*/;
          goto LABEL_120;
        case 2:
          v121 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !v121 )
            goto LABEL_162;
          UILabel__set_text(v121, (System_String_o *)this, 0LL);
          v122 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          if ( !v122 )
            goto LABEL_162;
          UIIconLabel__Set_37921148(v122, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v123 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v124 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v125 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v126 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v125, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v124, v126, 0LL);
          if ( !v123 )
            goto LABEL_162;
          UILabel__set_text(v123, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          goto LABEL_122;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_162;
          v80 = (System_String_o *)StringLiteral_20268/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          if ( !this )
            goto LABEL_162;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
          if ( !this )
            goto LABEL_162;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20110/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_162;
          v97 = 0;
          goto LABEL_126;
        case 5:
          v127 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(item, 0LL);
          if ( !v127 )
            goto LABEL_162;
          UILabel__set_text(v127, (System_String_o *)this, 0LL);
          v128 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(item, 0LL);
          if ( !v128 )
            goto LABEL_162;
          UIIconLabel__Set_37921148(v128, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v129 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v130 = LocalizationManager__Get((System_String_o *)StringLiteral_13240/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v131 = FollowerSelectItemListViewItem__get_LoginTime(item, 0LL);
          v132 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v131, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v130, v132, 0LL);
          if ( !v129 )
            goto LABEL_162;
          UILabel__set_text(v129, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          v120 = &StringLiteral_20072/*"icon_follow"*/;
LABEL_120:
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v120, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
LABEL_122:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)this,
            !item->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_162;
          v97 = 1;
LABEL_126:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v97, 0LL);
LABEL_127:
          FollowerSelectItemListViewItemDraw__setupMessageUI(v8, item, v96);
          FollowerSelectItemListViewItemDraw__SetupLockUI(v8, item, v133);
          v134 = v8->fields.svtNpRangeLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9256/*"NO_ENTRY_NAME"*/,
                                                           0LL);
          if ( !v134 )
            goto LABEL_162;
          UIRangeLabel__Set(v134, (System_String_o *)this, 0LL, 1, 0, 0LL);
          v135 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
            goto LABEL_135;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtNpCommandCard;
          if ( !this )
            goto LABEL_162;
          ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
LABEL_135:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
          if ( !this )
            goto LABEL_162;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
          if ( !this )
            goto LABEL_162;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
          if ( !this )
            goto LABEL_162;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v136 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v136, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_143;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
          if ( !this )
            goto LABEL_162;
          EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
LABEL_143:
          v137 = v8->fields.skillIconList;
          if ( !v137 )
            goto LABEL_162;
          v8->fields.skillInfoList = (struct SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, v137->max_length);
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1B6406C(&v8->fields.skillInfoList);
          v141 = v8->fields.skillIconList;
          if ( !v141 )
            goto LABEL_162;
          v142 = 0LL;
          break;
        default:
          goto LABEL_127;
      }
      while ( (int)v142 < (signed int)v141->max_length )
      {
        v143 = v8->fields.skillBaseList;
        if ( v143 )
        {
          if ( (unsigned int)v142 >= v143->max_length )
LABEL_685:
            sub_1B6432C(this, v138, v139, v140);
          this = (FollowerSelectItemListViewItemDraw_o *)v143->m_Items[v142];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v141 = v8->fields.skillIconList;
            ++v142;
            if ( v141 )
              continue;
          }
        }
        goto LABEL_162;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v144 = v8->fields.appendSkillIconList;
      if ( !v144 )
        goto LABEL_162;
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, v144->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1B6406C(&v8->fields.appendSkillInfoList);
      v145 = v8->fields.appendSkillIconList;
      if ( !v145 )
        goto LABEL_162;
      v146 = 0LL;
      while ( (int)v146 < (signed int)v145->max_length )
      {
        v147 = v8->fields.appendSkillBaseList;
        if ( !v147 )
          goto LABEL_162;
        if ( (unsigned int)v146 >= v147->max_length )
          goto LABEL_685;
        this = (FollowerSelectItemListViewItemDraw_o *)v147->m_Items[v146];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v145 = v8->fields.appendSkillIconList;
          ++v146;
          if ( v145 )
            continue;
        }
        goto LABEL_162;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v148 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v148, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_162;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      v149 = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v149, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
        if ( !this )
          goto LABEL_162;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_162;
LABEL_175:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
    }
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
    if ( !this )
      goto LABEL_162;
    LODWORD(v314) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    v315 = v314;
    LODWORD(v316) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
    if ( !this )
      goto LABEL_162;
    v317 = v316;
    v318 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v318, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    v320 = LocalPositionX;
    v321 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v321, (float)(v317 * 0.5) + (float)(v315 + v320), 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_37377344, 0LL);
    baseSprite = v8->fields.baseSprite;
    if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    FollowerRootComponent__SetFollowerBase(baseSprite, v80, 0LL);
    if ( item->fields.isQuestRestriction || item->fields._IsSlotRestriction_k__BackingField )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      maskMessageLabel = v8->fields.maskMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6397/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
                                                       0LL);
      if ( !maskMessageLabel )
        goto LABEL_162;
      UILabel__set_text(maskMessageLabel, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
      if ( !this )
        goto LABEL_162;
      FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_162;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    else
    {
      if ( !item->fields.isUniqueSvtRestriction && !item->fields.isUniqueIndividualityRestriction )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_162;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
        if ( !this )
          goto LABEL_162;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
        if ( !this )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
        if ( !this )
          goto LABEL_162;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_162;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        v324 = 0;
        goto LABEL_563;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
      if ( !this )
        goto LABEL_162;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
      if ( !this )
        goto LABEL_162;
      FlashingIconComponent__SetFast((FlashingIconComponent_o *)this, 0LL);
      warningMessageLabel = v8->fields.warningMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6398/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                       0LL);
      if ( !warningMessageLabel )
        goto LABEL_162;
      UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_162;
      LODWORD(v350) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_162;
      v351 = v350;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      v353 = this;
      warningMessageWidth = (float)v8->fields.warningMessageWidth;
      if ( v351 <= warningMessageWidth )
      {
        if ( !byte_49F7116 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v352);
          byte_49F7116 = 1;
        }
        v369 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v369->oneVector.fields.x;
        y = v369->oneVector.fields.y;
        z = v369->oneVector.fields.z;
      }
      else
      {
        x = warningMessageWidth / v351;
        z = 1.0;
        y = 1.0;
      }
      if ( !v353 )
        goto LABEL_162;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v353, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    v324 = 1;
LABEL_563:
    classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    {
      if ( !v76 )
        goto LABEL_592;
      v327 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
      v326 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v388.fields.currentCryptoKey = v327;
      *(_QWORD *)&v388.fields.fakeValue = v326;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v388, 0LL) < 1
        || (v324 & 1) != 0
        || ServantLeaderInfo__IsHideSupport(v76, 0LL)
        || item->fields._IsDataLost_k__BackingField )
      {
        goto LABEL_592;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
        goto LABEL_592;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)this->fields.rangeSprite;
      if ( !this )
        goto LABEL_162;
      methodPtr_low = LOBYTE(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerRootComponent_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerRootComponent_TypeInfo )
      {
        v371 = (FollowerSelectItemListViewItemDraw_o *)sub_1B645E4(this);
        FollowerSelectItemListViewItemDraw__setupMessageUI(v371, v372, v373);
        return;
      }
      v329 = this->fields.typeTextSprite;
      if ( !v329 )
        goto LABEL_592;
      v330 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
      if ( !v330 )
        goto LABEL_592;
      m_CancellationTokenSource = (int32_t)v329->fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
        goto LABEL_592;
      v332 = v330;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !this )
        goto LABEL_162;
      v333 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v332, m_CancellationTokenSource, 0LL);
      if ( v333 )
      {
        v334 = v333;
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_162;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
        v337 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v336 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        v338 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v389.fields.currentCryptoKey = v337;
        *(_QWORD *)&v389.fields.fakeValue = v336;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                         v389,
                                                         0LL);
        if ( !v338 )
          goto LABEL_162;
        this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v338,
                                                         (int32_t)this,
                                                         (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_162;
        v339 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
        if ( !this )
          goto LABEL_162;
        ServantClassCompatibilityIconComponent__SetIcon(
          (ServantClassCompatibilityIconComponent_o *)this,
          (int32_t)v339->fields.svtNameRangeLabel,
          v334->fields.classIds,
          2,
          0LL);
      }
      else
      {
LABEL_592:
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
        if ( !this )
          goto LABEL_162;
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
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, item->fields.isRecommended, 0LL);
    }
    recommendedIconText = (UnityEngine_Object_o *)v8->fields.recommendedIconText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
    {
      v342 = v8->fields.recommendedIconText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6399/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                       0LL);
      if ( !v342 )
        goto LABEL_162;
      UILabel__set_text(v342, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedIconText;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, item->fields.isRecommended, 0LL);
    }
    numberOfUsabletimes = (UnityEngine_Object_o *)v8->fields.numberOfUsabletimes;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
      goto LABEL_629;
    v344 = item->fields.questRestrictionInfo;
    if ( v344 )
    {
      eventId = v344->fields.eventId;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0LL;
      if ( !this )
        goto LABEL_162;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              v344->fields.eventId,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_621;
      v346 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( TitleInfoControl__IsEnableEventShopButton_36942772((EventDetailEntity_o *)v346, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)entity;
        if ( !entity )
          goto LABEL_162;
        LODWORD(v344) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
      }
      else
      {
LABEL_621:
        LODWORD(v344) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !this )
      goto LABEL_162;
    if ( BYTE4(this->fields.typeTextSprite) || FollowerSelectItemListViewItem__get_FollowerType(item, 0LL) == 3 )
    {
      v347 = 0;
LABEL_627:
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimes;
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v347, 0LL);
LABEL_629:
      recommendedUser = (UnityEngine_Object_o *)v8->fields.recommendedUser;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedUser;
        if ( !this )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)this,
          item->fields._isRecommendedUser_k__BackingField,
          0LL);
      }
      return;
    }
    FollowerType = FollowerSelectItemListViewItem__get_FollowerType(item, 0LL);
    v347 = 0;
    if ( FollowerType == 4 || (((unsigned int)v344 ^ 1) & 1) != 0 )
      goto LABEL_627;
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      v359 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerId(item, 0LL);
      if ( v359 )
      {
        UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                      (EventBoostItemUsedMaster_o *)v359,
                      eventId,
                      (int64_t)this,
                      0LL);
        v361 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v361 = BalanceConfig_TypeInfo;
        }
        MaxFriendChocolateUse = v361->static_fields->MaxFriendChocolateUse;
        v379 = MaxFriendChocolateUse;
        if ( UsedCount )
        {
          if ( !v361->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v361);
            MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
          }
          v379 = MaxFriendChocolateUse - UsedCount->fields.count;
        }
        numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6384/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                         0LL);
        if ( numberOfUsabletimesPrefixLabel )
        {
          UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
          numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v379, 0LL);
          if ( numberOfUsabletimesLabel )
          {
            UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
            numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6385/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                             0LL);
            if ( numberOfUsabletimesSuffixLabel )
            {
              UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
              v366 = v379;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              if ( v366 )
              {
                v367 = LocalizationManager__Get((System_String_o *)StringLiteral_6382/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v367, &color, 0LL);
                v368 = LocalizationManager__Get((System_String_o *)StringLiteral_6383/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v368, &v377, 0LL);
              }
              else
              {
                v370 = LocalizationManager__Get((System_String_o *)StringLiteral_6386/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v370, &color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( !this )
                  goto LABEL_162;
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                v377 = color;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
              if ( this )
              {
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( this )
                {
                  UIWidget__set_color((UIWidget_o *)this, v377, 0LL);
                  v347 = 1;
                  goto LABEL_627;
                }
              }
            }
          }
        }
      }
    }
LABEL_162:
    sub_1B64324(this);
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
  if ( (byte_49F77A3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_49F77A3 = 1;
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
      sub_1B64324(gameObject);
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
  int v20; // w8
  UnityEngine_GameObject_o *v21; // x0
  bool v22; // w1
  float v23; // s8
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  struct FollowerInfo_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  struct FollowerInfo_o *v28; // x8

  v5 = this;
  if ( (byte_49F77A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&OptionManager_TypeInfo, v7);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_117/*" "*/, v8);
    byte_49F77A2 = 1;
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
      v11 = userRecommendSupportHash->m_Items[0];
      if ( !v11 )
        goto LABEL_51;
      adviceMessageIds = v11->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_51;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_28;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v13 = item->fields.followerInfo;
      if ( !v13 )
        goto LABEL_51;
      v14 = v13->fields.userRecommendSupportHash;
      if ( !v14 )
        goto LABEL_51;
      if ( v14->max_length )
      {
        v15 = v14->m_Items[0];
        if ( !v15 || !this )
          goto LABEL_51;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v15->fields.adviceMessageIds,
                               0LL);
        v17 = System_String__Join((System_String_o *)StringLiteral_117/*" "*/, ConvertMessageToId, 0LL);
        if ( !System_String__IsNullOrEmpty(v17, 0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
          if ( this )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
            if ( this )
            {
              message = v17;
              goto LABEL_22;
            }
          }
LABEL_51:
          sub_1B64324(this);
        }
LABEL_28:
        this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
        if ( this )
        {
          v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v21, -19.0, 0LL);
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
                v22 = 1;
LABEL_33:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22, 0LL);
                GameObjectExtensions__SetLocalPositionY(v5->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v5->fields.svtProfileObj, 10.0, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.gradeIcon;
                if ( this )
                {
                  v20 = 1113849856;
                  goto LABEL_35;
                }
              }
            }
          }
        }
        goto LABEL_51;
      }
    }
    sub_1B6432C(this, item, method, v3);
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0LL);
  switch ( (int)this )
  {
    case 1:
      v26 = item->fields.followerInfo;
      if ( !v26 )
        goto LABEL_51;
      if ( System_String__IsNullOrEmpty(v26->fields.message, 0LL) )
        goto LABEL_28;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
        goto LABEL_28;
      this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v27, -19.0, 0LL);
      v28 = item->fields.followerInfo;
      if ( !v28 )
        goto LABEL_51;
      this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
      if ( !this )
        goto LABEL_51;
      message = v28->fields.message;
      break;
    case 2:
    case 5:
      goto LABEL_28;
    case 3:
    case 4:
      this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v25, -16.0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
      if ( !this )
        goto LABEL_51;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_51;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
      if ( !this )
        goto LABEL_51;
      v22 = 0;
      goto LABEL_33;
    default:
      return;
  }
LABEL_22:
  UILabel__set_text((UILabel_o *)this, message, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.messageLabel;
  if ( !this )
    goto LABEL_51;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.playerProfileObj;
  if ( !this )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  GameObjectExtensions__SetLocalPositionY(v5->fields.playerProfileObj, -1.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(v5->fields.svtProfileObj, -1.0, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v5->fields.gradeIcon;
  if ( !this )
    goto LABEL_51;
  v20 = 1112801280;
LABEL_35:
  v23 = *(float *)&v20;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v24, v23, 0LL);
}