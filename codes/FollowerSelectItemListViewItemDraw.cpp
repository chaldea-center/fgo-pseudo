void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4BAF796 & 1) == 0 )
  {
    sub_1C13D24(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_4BAF796 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BF6090;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BF6390;
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

  if ( (byte_4BAF795 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1C13D24(&SkillIconComponent___TypeInfo, v4);
    sub_1C13D24(&UIIconLabel___TypeInfo, v5);
    byte_4BAF795 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1C13DCC(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1C13CC8(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1C13DCC(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1C13CC8(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1C13DCC(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1C13CC8(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1C13DCC(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C13CC8(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1C13DCC(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C13CC8(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1C13DCC(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1C13CC8(&this->fields.appendSkillLevelIconLabelList);
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

  if ( (byte_4BAF78F & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1C13D24(&StringLiteral_20504/*"icon_popularitem_reward_arrow"*/, v5);
    sub_1C13D24(&StringLiteral_20655/*"img_frames_mask01"*/, v6);
    sub_1C13D24(&StringLiteral_20403/*"iTweenOnComplete"*/, v7);
    sub_1C13D24(&StringLiteral_20654/*"img_fp"*/, v8);
    byte_4BAF78F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1C13CC8(&this->fields.switchSkillUIList);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20504/*"icon_popularitem_reward_arrow"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20655/*"img_frames_mask01"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20403/*"iTweenOnComplete"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20654/*"img_fp"*/, 0LL);
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
  if ( (byte_4BAF794 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4BAF794 = 1;
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
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL);
  if ( ServantLeader )
  {
    v16 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v16;
    *(_QWORD *)&v28.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v28, 0LL) > 0;
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
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = *(_QWORD *)&displaySkill;
        sub_1C13CC8(v22 + 32);
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
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v25 + 1;
        *(_QWORD *)(v26 + 32) = *(_QWORD *)&displaySkill;
        sub_1C13CC8(v26 + 32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v27 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v27 )
      {
        SwitchUIWidgetComponent__Set(v27, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1C13F80(switchSkillInfo, *(_QWORD *)&displaySkill);
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

  if ( (byte_4BAF793 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BAF793 = 1;
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
          sub_1C13F88(supportInfoButton, v10);
        v14 = &skillButtonList->obj.klass + (int)v13;
        v15 = (UnityEngine_Behaviour_o *)v14[4];
        if ( !v15 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v14[4],
                             (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_1C13F80(supportInfoButton, v10);
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
  ServantLeaderInfo_o *v76; // x21
  int32_t Kind_38831928; // w28
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  System_String_o *v80; // x29
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v82; // x24
  __int64 v83; // x25
  struct FollowerInfo_o *v84; // x8
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  int v87; // w24
  System_String_o *name; // x26
  FollowerSelectItemListViewItemDraw_o *v89; // x27
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v91; // x26
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
  int32_t FollowerPointNpc; // w26
  UILabel_o *v108; // x24
  UIIconLabel_o *v109; // x24
  UILabel_o *v110; // x24
  System_String_o *v111; // x23
  int64_t v112; // x0
  Il2CppObject *v113; // x0
  __int64 *v114; // x8
  UILabel_o *v115; // x24
  UIIconLabel_o *v116; // x24
  UILabel_o *v117; // x24
  System_String_o *v118; // x23
  int64_t v119; // x0
  Il2CppObject *v120; // x0
  UILabel_o *v121; // x24
  UIIconLabel_o *v122; // x24
  UILabel_o *v123; // x24
  System_String_o *v124; // x23
  int64_t v125; // x0
  Il2CppObject *v126; // x0
  const MethodInfo *v127; // x2
  UIRangeLabel_o *v128; // x24
  UnityEngine_Object_o *v129; // x23
  UnityEngine_Object_o *v130; // x23
  struct SkillIconComponent_array *v131; // x8
  struct SkillIconComponent_array *v132; // x8
  __int64 v133; // x23
  struct UnityEngine_GameObject_array *v134; // x8
  struct SkillIconComponent_array *v135; // x8
  struct SkillIconComponent_array *v136; // x8
  __int64 v137; // x22
  struct UnityEngine_GameObject_array *v138; // x8
  UnityEngine_Object_o *v139; // x23
  UnityEngine_Object_o *v140; // x23
  UILabel_o *playerNameLabel; // x26
  UIIconLabel_o *playerLevelIconLabel; // x26
  UILabel_o *loginDataLabel; // x26
  System_String_o *v144; // x23
  int64_t LoginTime; // x0
  Il2CppObject *v146; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  bool HasFlag_40637728; // w26
  UILabel_o *v149; // x26
  UIIconLabel_o *v150; // x26
  UILabel_o *v151; // x26
  System_String_o *v152; // x23
  int64_t v153; // x0
  Il2CppObject *v154; // x0
  _BOOL4 v155; // w23
  BalanceConfig_c *v156; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  bool v158; // zf
  __int64 v159; // x9
  __int64 v160; // x10
  UILabel_o *v161; // x26
  UIIconLabel_o *v162; // x26
  UILabel_o *v163; // x26
  System_String_o *v164; // x23
  int64_t v165; // x0
  Il2CppObject *v166; // x0
  _BOOL4 v167; // w23
  BalanceConfig_c *v168; // x0
  BalanceConfig_c *v169; // x0
  System_String_o **v170; // x8
  System_String_o *v171; // x23
  System_String_o *v172; // x24
  bool v173; // w1
  _BOOL4 IsRecommendFollower_k__BackingField; // w23
  BalanceConfig_c *v175; // x0
  System_String_o **v176; // x8
  System_String_o *v177; // x23
  System_String_o *v178; // x0
  bool IsHideSupport; // w0
  UIRangeLabel_o *svtNameRangeLabel; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *svtNpRangeLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x23
  struct ServantNpCommandCardComponent_o *v184; // x8
  int32_t FriendPointUpVal; // w24
  int v186; // w25
  FollowerSelectItemListViewItemDraw_o *v187; // x1
  int v188; // w8
  __int64 v189; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v191; // w22
  System_String_o *v192; // x23
  __int64 v193; // x2
  __int64 v194; // x3
  __int64 v195; // x4
  Il2CppObject *v196; // x0
  UILabel_o *campaignLabel; // x24
  FollowerSelectItemListViewItemDraw_o *v198; // x1
  bool activeSelf; // w8
  float v200; // s8
  bool v201; // w8
  float v202; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v204; // x0
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v208; // w24
  int32_t Rarity; // w25
  struct UISprite_o *typeTextSprite; // x8
  __int64 v211; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v213; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v216; // x8
  struct SkillInfo_array *v217; // x11
  int v218; // w9
  unsigned __int64 v219; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v221; // x14
  __int64 v222; // x22
  __int64 v223; // x23
  unsigned __int64 v224; // x25
  struct SkillInfo_array *v225; // x8
  struct UnityEngine_GameObject_array *v226; // x9
  int32_t *v227; // x26
  struct SkillIconComponent_array *v228; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v231; // x8
  struct UIIconLabel_array *v232; // x8
  struct SkillIconComponent_array *v233; // x8
  __int64 v234; // x9
  int32_t v235; // w8
  bool v236; // w1
  __int64 v237; // x8
  _QWORD *v238; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v240; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v243; // x8
  struct SkillInfo_array *v244; // x11
  int v245; // w9
  signed __int64 v246; // x10
  unsigned __int64 v247; // x14
  SkillInfo_o *v248; // x14
  unsigned __int64 v249; // x22
  signed __int64 v250; // x23
  struct SkillInfo_array *v251; // x8
  struct UnityEngine_GameObject_array *v252; // x9
  int32_t *v253; // x26
  struct UICommonButton_array *skillButtonList; // x9
  int v255; // w8
  struct UnityEngine_GameObject_array *v256; // x9
  struct SkillIconComponent_array *v257; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v260; // x8
  struct UIIconLabel_array *v261; // x8
  struct SkillIconComponent_array *v262; // x8
  int32_t v263; // w8
  bool v264; // w1
  __int64 v265; // x8
  _QWORD *v266; // x9
  __int64 v267; // x10
  __int64 v268; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantCommandCardListComponent_o *v271; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v274; // w26
  UnityEngine_Object_o *pushSprite; // x23
  struct FollowerInfo_o *v276; // x8
  int64_t pushUserSvtId; // x8
  bool v278; // w24
  UnityEngine_Object_o *v279; // x23
  UnityEngine_Object_o *v280; // x23
  UISprite_o *v281; // x24
  UISprite_o *v282; // x23
  UILabel_o *v283; // x24
  System_String_o *v284; // x23
  __int64 v285; // x2
  __int64 v286; // x3
  __int64 v287; // x4
  Il2CppObject *v288; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v290; // x2
  __int64 v291; // x3
  __int64 v292; // x4
  Il2CppObject **v293; // x9
  Il2CppObject *v294; // x23
  Il2CppObject *v295; // x0
  FollowerSelectItemListViewItemDraw_o *v296; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w22
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w22
  UILabel_o *v301; // x24
  UnityEngine_GameObject_o *v302; // x24
  FollowerSelectItemListViewItemDraw_c *v303; // x8
  __int64 v304; // x9
  UnityEngine_GameObject_o *v305; // x24
  BalanceConfig_c *v306; // x8
  UISprite_o *classBoardBackSprite; // x24
  UnityEngine_GameObject_o *v308; // x24
  FollowerSelectItemListViewItemDraw_c *v309; // x8
  UnityEngine_GameObject_o *v310; // x0
  UnityEngine_GameObject_o *v311; // x0
  float v312; // s0
  float v313; // s8
  float v314; // s0
  float v315; // s9
  UnityEngine_GameObject_o *v316; // x0
  float LocalPositionX; // s0
  float v318; // s10
  UnityEngine_GameObject_o *v319; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v322; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v324; // x22
  __int64 v325; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *v327; // x23
  int32_t v328; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v330; // w22
  QuestPhaseEntity_o *v331; // x0
  QuestPhaseEntity_o *v332; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v334; // x23
  __int64 v335; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v336; // x21
  FollowerSelectItemListViewItemDraw_o *v337; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v340; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *v342; // x22
  int32_t eventId; // w21
  Il2CppObject *v344; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  UILabel_o *warningMessageLabel; // x22
  float v347; // s0
  float v348; // s8
  FollowerSelectItemListViewItemDraw_o *v349; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int32_t FollowerType; // w0
  Il2CppObject *v355; // x22
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v357; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v362; // w21
  System_String_o *v363; // x0
  System_String_o *v364; // x0
  struct UnityEngine_Vector3_StaticFields *v365; // x8
  System_String_o *v366; // x0
  FollowerSelectItemListViewItemDraw_o *v367; // x0
  FollowerSelectItemListViewItem_o *v368; // x1
  const MethodInfo *v369; // x2
  _BOOL4 IsNoneSupportFriendPoint_k__BackingField; // [xsp+1Ch] [xbp-C4h]
  System_String_o *v371; // [xsp+20h] [xbp-C0h]
  int32_t v372; // [xsp+28h] [xbp-B8h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v374; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v376; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  UnityEngine_Color_o v387; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v388; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4BAF790 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, item);
    sub_1C13D24(&BalanceConfig_TypeInfo, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1C13D24(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_1C13D24(&DataManager_TypeInfo, v18);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1C13D24(&FollowerRootComponent_TypeInfo, v22);
    sub_1C13D24(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_1C13D24(&Grade_TypeInfo, v24);
    sub_1C13D24(&int_TypeInfo, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_1C13D24(&LocalizationManager_TypeInfo, v29);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v30);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1C13D24(&OptionManager_TypeInfo, v32);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1C13D24(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_1C13D24(&SkillInfo___TypeInfo, v36);
    sub_1C13D24(&TitleInfoControl_TypeInfo, v37);
    sub_1C13D24(&StringLiteral_3816/*"COMMON_COUNT_OPERATOR_PLUS"*/, v38);
    sub_1C13D24(&StringLiteral_6587/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v39);
    sub_1C13D24(&StringLiteral_6566/*"FOLLOWER_SELECT_EXPLANATION2"*/, v40);
    sub_1C13D24(&StringLiteral_11815/*"SERVANT_FRAME_PURCHASE_INFO1"*/, v41);
    sub_1C13D24(&StringLiteral_9501/*"NPUP_CONFIRM_WARNING_TXT"*/, v42);
    sub_1C13D24(&StringLiteral_6567/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v43);
    sub_1C13D24(&StringLiteral_6524/*"FEMALE_TEXT"*/, v44);
    sub_1C13D24(&StringLiteral_9502/*"NPUP_EXCEEDED"*/, v45);
    sub_1C13D24(&StringLiteral_11711/*"SELECT_FIGURE_INFO"*/, v46);
    sub_1C13D24(&StringLiteral_13536/*"TERMS_OF_USE_MESSAGE2"*/, v47);
    sub_1C13D24(&StringLiteral_9503/*"NPUP_RECONFIRM_TXT"*/, v48);
    sub_1C13D24(&StringLiteral_6580/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/, v49);
    sub_1C13D24(&StringLiteral_6565/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v50);
    sub_1C13D24(&StringLiteral_17747/*"btn_bg_04"*/, v51);
    sub_1C13D24(&StringLiteral_20516/*"icon_select"*/, v52);
    sub_1C13D24(&StringLiteral_9506/*"NP_COLOR_NAME"*/, v53);
    sub_1C13D24(&StringLiteral_20641/*"img_commonbg_11"*/, v54);
    sub_1C13D24(&StringLiteral_12604/*"SUMMON_RESULT_COIN_FORMAT"*/, v55);
    sub_1C13D24(&StringLiteral_12605/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/, v56);
    sub_1C13D24(&StringLiteral_6579/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v57);
    sub_1C13D24(&StringLiteral_6581/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/, v58);
    sub_1C13D24(&StringLiteral_6564/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v59);
    sub_1C13D24(&StringLiteral_18759/*"data-residency-eu"*/, v60);
    sub_1C13D24(&StringLiteral_6523/*"FEMALE"*/, v61);
    sub_1C13D24(&StringLiteral_9476/*"NOT_SELECT_MAX_EQUIP"*/, v62);
    sub_1C13D24(&StringLiteral_9500/*"NPUP_CONFIRM_TXT"*/, v63);
    sub_1C13D24(&StringLiteral_16277/*"[sup]"*/, v64);
    sub_1C13D24(&StringLiteral_1/*""*/, v65);
    sub_1C13D24(&StringLiteral_20478/*"icon_drop_item_{0:00}"*/, v66);
    sub_1C13D24(&StringLiteral_6568/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v67);
    sub_1C13D24(&StringLiteral_20477/*"icon_drop_item_L_{0:00}"*/, v68);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C13D24(&StringLiteral_20683/*"img_list_bg03"*/, v69);
    byte_4BAF790 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v376 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v374.fields.r = 0LL;
  *(_QWORD *)&v374.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_156;
  size = switchSkillUIList->fields._size;
  v72 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v72;
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
    v76 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_38831928 = Grade__GetKind_38831928(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_38831928, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    v80 = FollowerBgImage;
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
    if ( !v76 )
      goto LABEL_49;
    v83 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
    v82 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v379.fields.currentCryptoKey = v83;
    *(_QWORD *)&v379.fields.fakeValue = v82;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                     v379,
                                                     0LL);
    if ( (int)this >= 1 )
    {
      v84 = v7->fields.followerInfo;
      if ( !v84 )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_156;
      ServantFaceIconComponent__Set_39368520(
        (ServantFaceIconComponent_o *)this,
        v76,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        0,
        v84->fields.imageSvtId,
        0LL);
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v85);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v86);
      FollowerSelectItemListViewItem__GetNpInfo(v7, &tdInfo, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(v7, 0LL);
      if ( !tdInfo )
        goto LABEL_156;
      v87 = (int)this;
      IsNoneSupportFriendPoint_k__BackingField = v7->fields._IsNoneSupportFriendPoint_k__BackingField;
      name = tdInfo->fields.name;
      v89 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      v372 = Kind_38831928;
      v371 = v80;
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
          *(_QWORD *)&v380.fields.currentCryptoKey = v93;
          *(_QWORD *)&v380.fields.fakeValue = v92;
          this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                           v380,
                                                           0LL);
          if ( !v91 )
            goto LABEL_156;
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
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_156;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
          if ( !this )
            goto LABEL_156;
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
        goto LABEL_156;
      ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v94, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_156;
      ServantFaceIconComponent__SetDispClassSprite(
        (ServantFaceIconComponent_o *)this,
        !v7->fields._IsDataLost_k__BackingField,
        0LL);
      if ( !ServantLeaderInfo__IsNpc(v76, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v99 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v100 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        v101 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v381.fields.currentCryptoKey = v99;
        *(_QWORD *)&v381.fields.fakeValue = v100;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                         v381,
                                                         0LL);
        if ( !v101 )
          goto LABEL_156;
        dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                           v101,
                           (int32_t)this,
                           dispLimitCount,
                           0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v102 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v103 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
      v104 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
      v105 = (ServantLimitAddMaster_o *)v102;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v382.fields.currentCryptoKey = v103;
      *(_QWORD *)&v382.fields.fakeValue = v104;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                       v382,
                                                       0LL);
      if ( !tdInfo )
        goto LABEL_156;
      v80 = v371;
      if ( !v105 )
        goto LABEL_156;
      OverwriteTDName = (Il2CppObject *)ServantLimitAddMaster__GetOverwriteTDName(
                                          v105,
                                          (int32_t)this,
                                          dispLimitCount,
                                          name,
                                          tdInfo->fields.lv,
                                          0LL);
      Kind_38831928 = v372;
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
          UIIconLabel__Set_39380320(playerLevelIconLabel, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          loginDataLabel = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v144 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TERMS_OF_USE_MESSAGE2"*/, 0LL);
          LoginTime = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v146 = (Il2CppObject *)LocalizationManager__GetBeforeTime(LoginTime, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v144, v146, 0LL);
          if ( !loginDataLabel )
            goto LABEL_156;
          UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20478/*"icon_drop_item_{0:00}"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( questRestrictionInfo )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                             questRestrictionInfo->fields.questId,
                                                             (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_156;
            HasFlag_40637728 = QuestEntity__HasFlag_40637728(
                                 (QuestEntity_o *)this,
                                 0x8000000LL,
                                 questRestrictionInfo->fields.questPhase,
                                 0LL);
          }
          else
          {
            HasFlag_40637728 = 0;
          }
          if ( IsNoneSupportFriendPoint_k__BackingField )
          {
LABEL_225:
            FollowerPointNpc = 0;
          }
          else
          {
            IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
            v175 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v175 = BalanceConfig_TypeInfo;
            }
            Kind_38831928 = v372;
            static_fields = v175->static_fields;
            v159 = 212LL;
            if ( HasFlag_40637728 )
              v159 = 672LL;
            if ( IsRecommendFollower_k__BackingField )
              v159 = 224LL;
LABEL_232:
            FollowerPointNpc = *(int32_t *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v159);
          }
          v176 = (System_String_o **)&StringLiteral_9506/*"NP_COLOR_NAME"*/;
          if ( v87 <= 1 )
            v176 = (System_String_o **)&StringLiteral_9500/*"NPUP_CONFIRM_TXT"*/;
          v177 = *v176;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v178 = LocalizationManager__Get(v177, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v178, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_156;
          v89 = this;
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
          v173 = 1;
LABEL_241:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v173, 0LL);
LABEL_242:
          IsHideSupport = ServantLeaderInfo__IsHideSupport(v76, 0LL);
          svtNameRangeLabel = v8->fields.svtNameRangeLabel;
          if ( IsHideSupport )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11815/*"SERVANT_FRAME_PURCHASE_INFO1"*/,
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
                                                               (System_String_o *)StringLiteral_9503/*"NPUP_RECONFIRM_TXT"*/,
                                                               0LL);
              v89 = this;
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
          if ( ServantLeaderInfo__IsHideSupport(v76, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v76, 0LL) )
            strengthStatus = 0;
          svtNpRangeLabel = v8->fields.svtNpRangeLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
          if ( !svtNpRangeLabel )
            goto LABEL_156;
          UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)v89, (System_String_o *)this, 0, 0, 0LL);
          svtNpCommandCard = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
            goto LABEL_264;
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
          v184 = v8->fields.svtNpCommandCard;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v184 )
              goto LABEL_156;
            ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
LABEL_264:
            if ( IsNoneSupportFriendPoint_k__BackingField )
              goto LABEL_265;
          }
          else
          {
            if ( !v184 )
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
          v186 = (int)this;
          UIIconLabel__Set_39380320(v8->fields.friendPointIconLabel, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
          if ( FriendPointUpVal > 0 || v186 >= 1 )
          {
            if ( v186 <= 0 )
              v188 = 1000;
            else
              v188 = v186;
            v189 = 274877907LL * (v188 * FriendPointUpVal + (v188 - 1000) * FollowerPointNpc);
            friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            v191 = (v189 >> 38) + ((unsigned __int64)v189 >> 63);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v192 = LocalizationManager__Get((System_String_o *)StringLiteral_6587/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
            TimesToRestart_k__BackingField = v191;
            v196 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v193, v194, v195);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v192, v196, 0LL);
            if ( !friendPointData2Label )
              goto LABEL_156;
            v187 = this;
            this = friendPointData2Label;
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            if ( !this )
              goto LABEL_156;
            v187 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v187, 0LL);
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
            v198 = this;
          }
          else
          {
            if ( !campaignLabel )
              goto LABEL_156;
            v198 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text(campaignLabel, (System_String_o *)v198, 0LL);
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
          v200 = activeSelf ? -3.0 : 39.0;
          if ( !this )
            goto LABEL_156;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          v201 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
          v202 = v201 ? -22.0 : 20.0;
          if ( !this )
            goto LABEL_156;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, v200, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
          if ( !this )
            goto LABEL_156;
          v204 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v204, v202, 0LL);
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
              *(_QWORD *)&v383.fields.currentCryptoKey = baseButton;
              *(_QWORD *)&v383.fields.fakeValue = servantFaceIcon;
              v208 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v383, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_156;
              Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
            }
            else
            {
              Rarity = -1;
              v208 = -1;
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
              v211 = *(_QWORD *)&typeTextSprite->fields.updateAnchors;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v384.fields.currentCryptoKey = topAnchor;
              *(_QWORD *)&v384.fields.fakeValue = v211;
              v213 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v384, 0LL);
            }
            else
            {
              v213 = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
            if ( !this )
              goto LABEL_156;
            EventUpValIconComponent__Set(
              (EventUpValIconComponent_o *)this,
              v7->fields.eventUpValItemList,
              v208,
              Rarity,
              v213,
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
          v216 = *(_QWORD *)&skillIconList->max_length;
          if ( v216 << 32 >= 1 )
          {
            v217 = *p_skillInfoList;
            v218 = 0;
            v219 = 0LL;
            while ( v217 )
            {
              max_length = v217->max_length;
              if ( (__int64)v219 < (int)max_length )
              {
                if ( v219 >= max_length )
                  goto LABEL_693;
                v221 = (*p_skillInfoList)->m_Items[v219];
                if ( v221 && v221->fields.id >= 1 )
                  v218 = v219 + 1;
              }
              if ( (__int64)++v219 >= (int)v216 )
                goto LABEL_335;
            }
            goto LABEL_156;
          }
          v218 = 0;
LABEL_335:
          if ( (int)v216 >= 1 )
          {
            v222 = v218;
            v223 = 4LL;
            do
            {
              v224 = v223 - 4;
              if ( v223 - 4 >= v222 )
              {
                skillBaseList = v8->fields.skillBaseList;
                if ( !skillBaseList )
                  goto LABEL_156;
                if ( v224 >= skillBaseList->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillBaseList->obj.klass + v223);
                if ( !this )
                  goto LABEL_156;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v225 = *p_skillInfoList;
                if ( !*p_skillInfoList )
                  goto LABEL_156;
                if ( v224 >= v225->max_length )
                  goto LABEL_693;
                v226 = v8->fields.skillBaseList;
                if ( !v226 )
                  goto LABEL_156;
                if ( v224 >= v226->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v226->obj.klass + v223);
                if ( !this )
                  goto LABEL_156;
                v227 = (int32_t *)*((_QWORD *)&v225->obj.klass + v223);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v227 )
                    v227[4] = 0;
                  v228 = v8->fields.skillIconList;
                  if ( !v228 )
                    goto LABEL_156;
                  if ( v224 >= v228->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v228->obj.klass + v223);
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
                  if ( !skillLevelIconLabelList )
                    goto LABEL_156;
                  if ( v224 >= skillLevelIconLabelList->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v223);
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v231 = v8->fields.skillIconList;
                  if ( !v231 )
                    goto LABEL_156;
                  if ( v224 >= v231->max_length )
                    goto LABEL_693;
                  if ( !v227 )
                    goto LABEL_156;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v231->obj.klass + v223);
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__Set_39379516(
                    (SkillIconComponent_o *)this,
                    v227[4],
                    v227[5],
                    v227[12],
                    v227[13],
                    0LL);
                  v232 = v8->fields.skillLevelIconLabelList;
                  if ( !v232 )
                    goto LABEL_156;
                  if ( v224 >= v232->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v232->obj.klass + v223);
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Set_39380320((UIIconLabel_o *)this, 48, v227[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v233 = v8->fields.skillIconList;
              if ( !v233 )
                goto LABEL_156;
              v234 = v223 - 3;
              ++v223;
            }
            while ( v234 < (int)v233->max_length );
          }
          v235 = v8->fields.displaySkill;
          if ( v235 == 2 )
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
            v237 = *(_QWORD *)&this->fields.m_CachedPtr;
            v238 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v237 )
              goto LABEL_156;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v237 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
            }
            else
            {
              v240 = v237 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v240 + 32) = item;
              sub_1C13CC8(v240 + 32);
            }
          }
          else
          {
            if ( v235 == 1 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_156;
              v236 = 0;
            }
            else
            {
              if ( v235 )
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
              v236 = 1;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v236, 0LL);
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
          v243 = *(_QWORD *)&appendSkillIconList->max_length;
          if ( v243 << 32 < 1 )
          {
            v245 = 0;
          }
          else
          {
            v244 = *p_appendSkillInfoList;
            v245 = 0;
            v246 = 0LL;
            do
            {
              if ( v244 )
              {
                v247 = v244->max_length;
                if ( v246 < (int)v247 )
                {
                  if ( v246 >= v247 )
                    goto LABEL_693;
                  v248 = (*p_appendSkillInfoList)->m_Items[v246];
                  if ( v248 && v248->fields.id >= 1 )
                    v245 = v246 + 1;
                }
              }
              ++v246;
            }
            while ( v246 < (int)v243 );
          }
          if ( (int)v243 >= 1 )
          {
            v249 = 0LL;
            v250 = v245;
            do
            {
              if ( (__int64)v249 >= v250 )
              {
                appendSkillBaseList = v8->fields.appendSkillBaseList;
                if ( !appendSkillBaseList )
                  goto LABEL_156;
                if ( v249 >= appendSkillBaseList->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v249];
                if ( !this )
                  goto LABEL_156;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v251 = *p_appendSkillInfoList;
                if ( !*p_appendSkillInfoList )
                  goto LABEL_156;
                if ( v249 >= v251->max_length )
                  goto LABEL_693;
                v252 = v8->fields.appendSkillBaseList;
                if ( !v252 )
                  goto LABEL_156;
                if ( v249 >= v252->max_length )
                  goto LABEL_693;
                this = (FollowerSelectItemListViewItemDraw_o *)v252->m_Items[v249];
                if ( !this )
                  goto LABEL_156;
                v253 = (int32_t *)v251->m_Items[v249];
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
                  v255 = HIDWORD(skillButtonList->m_Items[144]);
                  if ( v249 )
                    v255 += LODWORD(skillButtonList->m_Items[145]) * v249;
                  v256 = v8->fields.appendSkillBaseList;
                  if ( !v256 )
                    goto LABEL_156;
                  if ( v249 >= v256->max_length )
                    goto LABEL_693;
                  GameObjectExtensions__SetLocalPositionX(v256->m_Items[v249], (float)v255, 0LL);
                }
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v253 )
                    v253[4] = 0;
                  v257 = v8->fields.appendSkillIconList;
                  if ( !v257 )
                    goto LABEL_156;
                  if ( v249 >= v257->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)v257->m_Items[v249];
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
                  if ( !appendSkillLevelIconLabelList )
                    goto LABEL_156;
                  if ( v249 >= appendSkillLevelIconLabelList->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v249];
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v260 = v8->fields.appendSkillIconList;
                  if ( !v260 )
                    goto LABEL_156;
                  if ( v249 >= v260->max_length )
                    goto LABEL_693;
                  if ( !v253 )
                    goto LABEL_156;
                  this = (FollowerSelectItemListViewItemDraw_o *)v260->m_Items[v249];
                  if ( !this )
                    goto LABEL_156;
                  SkillIconComponent__Set_39379516(
                    (SkillIconComponent_o *)this,
                    v253[4],
                    v253[5],
                    v253[12],
                    v253[13],
                    0LL);
                  v261 = v8->fields.appendSkillLevelIconLabelList;
                  if ( !v261 )
                    goto LABEL_156;
                  if ( v249 >= v261->max_length )
                    goto LABEL_693;
                  this = (FollowerSelectItemListViewItemDraw_o *)v261->m_Items[v249];
                  if ( !this )
                    goto LABEL_156;
                  UIIconLabel__Set_39380320((UIIconLabel_o *)this, 48, v253[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v262 = v8->fields.appendSkillIconList;
              if ( !v262 )
                goto LABEL_156;
              ++v249;
            }
            while ( (__int64)v249 < (int)v262->max_length );
          }
          v263 = v8->fields.displaySkill;
          if ( v263 == 2 )
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
            v265 = *(_QWORD *)&this->fields.m_CachedPtr;
            v266 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v265 )
              goto LABEL_156;
            v267 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v267 >= *(_DWORD *)(v265 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v266[4] + 192LL) + 112LL));
            }
            else
            {
              v268 = v265 + 8 * v267;
              LODWORD(this->fields.m_CancellationTokenSource) = v267 + 1;
              *(_QWORD *)(v268 + 32) = item;
              sub_1C13CC8(v268 + 32);
            }
          }
          else
          {
            if ( v263 == 1 )
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
              v264 = 1;
            }
            else
            {
              if ( v263 )
                goto LABEL_457;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_156;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_156;
              v264 = 0;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v264, 0LL);
          }
          if ( v8->fields.displaySkill == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_156;
            switchSkillInfo = v8->fields.switchSkillInfo;
            this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
            this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
            v271 = v8->fields.svtCommandCardList;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v271 )
                goto LABEL_156;
              ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
            }
            else
            {
              SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, 0LL);
              commandCardParam = v76->fields.commandCardParam;
              v274 = SvtId;
              this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v76, 0LL);
              if ( !v271 )
                goto LABEL_156;
              ServantCommandCardListComponent__Set_39357408(
                v271,
                v274,
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
            v276 = v7->fields.followerInfo;
            if ( !v276 )
              goto LABEL_156;
            pushUserSvtId = v276->fields.pushUserSvtId;
            v278 = pushUserSvtId && pushUserSvtId == v76->fields.userSvtId;
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
            if ( !this )
              goto LABEL_156;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_156;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v278, 0LL);
          }
          v279 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v279, 0LL, 0LL) )
            goto LABEL_502;
          v280 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v280, 0LL, 0LL) )
            goto LABEL_502;
          if ( v7->fields._IsDataLost_k__BackingField )
          {
            v281 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetPartyOrganizationImage(v281, (System_String_o *)StringLiteral_18759/*"data-residency-eu"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
            v387.fields.r = 1.0;
            v387.fields.g = 1.0;
            v387.fields.b = 1.0;
            v387.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)this, v387, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
          }
          else
          {
            if ( v7->fields._TimesToRestart_k__BackingField < 1 )
              goto LABEL_502;
            v282 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetCommon(v282, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20641/*"img_commonbg_11"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_156;
            v388.fields.a = 0.62353;
            v388.fields.r = 0.0;
            v388.fields.g = 0.0;
            v388.fields.b = 0.0;
            UIWidget__set_color((UIWidget_o *)this, v388, 0LL);
            v283 = v8->fields.dataLostMaskMessageLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v284 = LocalizationManager__Get((System_String_o *)StringLiteral_11711/*"SELECT_FIGURE_INFO"*/, 0LL);
            TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
            v288 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v285, v286, v287);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v284, v288, 0LL);
            if ( !v283 )
              goto LABEL_156;
            UILabel__set_text(v283, (System_String_o *)this, 0LL);
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
              v296 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
                v293 = (Il2CppObject **)&StringLiteral_6523/*"FEMALE"*/;
              else
                v293 = (Il2CppObject **)&StringLiteral_6524/*"FEMALE_TEXT"*/;
              v294 = *v293;
              TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
              v295 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v290,
                                       v291,
                                       v292);
              this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_62982316(
                                                               (System_String_o *)StringLiteral_16277/*"[sup]"*/,
                                                               v294,
                                                               v295,
                                                               0LL);
              if ( !v8->fields.openClassBoardNumLabel )
                goto LABEL_156;
              v296 = this;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            }
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v296, 0LL);
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
            v301 = v8->fields.classBoardOpenButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12605/*"SUMMON_SERVANT_MATERIAL_TD_GET_MESSAGE"*/,
                                                               0LL);
              if ( !v301 )
                goto LABEL_156;
              UILabel__set_text(v301, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_156;
              v302 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v303 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v303 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v304 = 36LL;
            }
            else
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12604/*"SUMMON_RESULT_COIN_FORMAT"*/,
                                                               0LL);
              if ( !v301 )
                goto LABEL_156;
              UILabel__set_text(v301, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_156;
              v302 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v303 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v303 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v304 = 32LL;
            }
            GameObjectExtensions__SetLocalPositionY(
              v302,
              *(float *)((char *)&v303->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v304),
              0LL);
          }
          if ( ConstantMaster__IsFLAG20240804(0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
            if ( !this )
              goto LABEL_156;
            v305 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v306 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v306 = BalanceConfig_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34711680(v305, v306->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
            classBoardBackSprite = v8->fields.classBoardBackSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17747/*"btn_bg_04"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
            if ( !this )
              goto LABEL_156;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_156;
            v308 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v309 = FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
              v309 = FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34711680(v308, v309->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_156;
            v310 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalScaleX(
              v310,
              BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
              0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            if ( !this )
              goto LABEL_156;
            v311 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              v311,
              (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
              0LL);
          }
          break;
        case 2:
          v149 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v149 )
            goto LABEL_156;
          UILabel__set_text(v149, (System_String_o *)this, 0LL);
          v150 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v150 )
            goto LABEL_156;
          UIIconLabel__Set_39380320(v150, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v151 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v152 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TERMS_OF_USE_MESSAGE2"*/, 0LL);
          v153 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v154 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v153, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v152, v154, 0LL);
          if ( !v151 )
            goto LABEL_156;
          UILabel__set_text(v151, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          if ( IsNoneSupportFriendPoint_k__BackingField )
            goto LABEL_225;
          v155 = v7->fields._IsRecommendFollower_k__BackingField;
          v156 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v156 = BalanceConfig_TypeInfo;
          }
          static_fields = v156->static_fields;
          v158 = !v155;
          v159 = 224LL;
          v160 = 216LL;
          goto LABEL_204;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_156;
          v80 = (System_String_o *)StringLiteral_20683/*"img_list_bg03"*/;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20516/*"icon_select"*/, 0LL);
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
            v169 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v169 = BalanceConfig_TypeInfo;
            }
            FollowerPointNpc = v169->static_fields->FollowerPointNpc;
          }
          if ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) == 3 )
          {
            v170 = (System_String_o **)&StringLiteral_9506/*"NP_COLOR_NAME"*/;
            if ( v87 <= 1 )
              v170 = (System_String_o **)&StringLiteral_9500/*"NPUP_CONFIRM_TXT"*/;
            v171 = *v170;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v172 = LocalizationManager__Get(v171, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v172 = LocalizationManager__Get((System_String_o *)StringLiteral_9501/*"NPUP_CONFIRM_WARNING_TXT"*/, 0LL);
            OverwriteTDName = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9502/*"NPUP_EXCEEDED"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v172, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_156;
          v89 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_156;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_156;
          v173 = 0;
          goto LABEL_241;
        case 5:
          v161 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v161 )
            goto LABEL_156;
          UILabel__set_text(v161, (System_String_o *)this, 0LL);
          v162 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v162 )
            goto LABEL_156;
          UIIconLabel__Set_39380320(v162, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v163 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v164 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TERMS_OF_USE_MESSAGE2"*/, 0LL);
          v165 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v166 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v165, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v164, v166, 0LL);
          if ( !v163 )
            goto LABEL_156;
          UILabel__set_text(v163, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20477/*"icon_drop_item_L_{0:00}"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          if ( IsNoneSupportFriendPoint_k__BackingField )
            goto LABEL_225;
          v167 = v7->fields._IsRecommendFollower_k__BackingField;
          v168 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v168 = BalanceConfig_TypeInfo;
          }
          static_fields = v168->static_fields;
          v158 = !v167;
          v159 = 224LL;
          v160 = 672LL;
LABEL_204:
          if ( v158 )
            v159 = v160;
          goto LABEL_232;
        default:
          Kind_38831928 = v372;
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
      v95 = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3816/*"COMMON_COUNT_OPERATOR_PLUS"*/,
                                                       0LL);
      if ( !v95 )
        goto LABEL_156;
      UIRangeLabel__Set(v95, (System_String_o *)this, 0LL, 1, 0, 0LL);
      switch ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) )
      {
        case 1:
          v108 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v108 )
            goto LABEL_156;
          UILabel__set_text(v108, (System_String_o *)this, 0LL);
          v109 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v109 )
            goto LABEL_156;
          UIIconLabel__Set_39380320(v109, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v110 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v111 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TERMS_OF_USE_MESSAGE2"*/, 0LL);
          v112 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v113 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v112, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v111, v113, 0LL);
          if ( !v110 )
            goto LABEL_156;
          UILabel__set_text(v110, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          v114 = &StringLiteral_20478/*"icon_drop_item_{0:00}"*/;
          goto LABEL_114;
        case 2:
          v115 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v115 )
            goto LABEL_156;
          UILabel__set_text(v115, (System_String_o *)this, 0LL);
          v116 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v116 )
            goto LABEL_156;
          UIIconLabel__Set_39380320(v116, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v117 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v118 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TERMS_OF_USE_MESSAGE2"*/, 0LL);
          v119 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v120 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v119, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v118, v120, 0LL);
          if ( !v117 )
            goto LABEL_156;
          UILabel__set_text(v117, (System_String_o *)this, 0LL);
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
          v80 = (System_String_o *)StringLiteral_20683/*"img_list_bg03"*/;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20516/*"icon_select"*/, 0LL);
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
          v97 = 0;
          goto LABEL_120;
        case 5:
          v121 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v121 )
            goto LABEL_156;
          UILabel__set_text(v121, (System_String_o *)this, 0LL);
          v122 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v122 )
            goto LABEL_156;
          UIIconLabel__Set_39380320(v122, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v123 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v124 = LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TERMS_OF_USE_MESSAGE2"*/, 0LL);
          v125 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v126 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v125, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v124, v126, 0LL);
          if ( !v123 )
            goto LABEL_156;
          UILabel__set_text(v123, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_156;
          v114 = &StringLiteral_20477/*"icon_drop_item_L_{0:00}"*/;
LABEL_114:
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v114, 0LL);
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
          v97 = 1;
LABEL_120:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v97, 0LL);
LABEL_121:
          FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v96);
          FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v127);
          v128 = v8->fields.svtNpRangeLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9476/*"NOT_SELECT_MAX_EQUIP"*/,
                                                           0LL);
          if ( !v128 )
            goto LABEL_156;
          UIRangeLabel__Set(v128, (System_String_o *)this, 0LL, 1, 0, 0LL);
          v129 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v129, 0LL, 0LL) )
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
          v130 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v130, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_137;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
          if ( !this )
            goto LABEL_156;
          EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
LABEL_137:
          v131 = v8->fields.skillIconList;
          if ( !v131 )
            goto LABEL_156;
          v8->fields.skillInfoList = (struct SkillInfo_array *)sub_1C13DCC(SkillInfo___TypeInfo, v131->max_length);
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1C13CC8(&v8->fields.skillInfoList);
          v132 = v8->fields.skillIconList;
          if ( !v132 )
            goto LABEL_156;
          v133 = 0LL;
          break;
        default:
          goto LABEL_121;
      }
      while ( (int)v133 < (signed int)v132->max_length )
      {
        v134 = v8->fields.skillBaseList;
        if ( v134 )
        {
          if ( (unsigned int)v133 >= v134->max_length )
LABEL_693:
            sub_1C13F88(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)v134->m_Items[v133];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v132 = v8->fields.skillIconList;
            ++v133;
            if ( v132 )
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
      v135 = v8->fields.appendSkillIconList;
      if ( !v135 )
        goto LABEL_156;
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)sub_1C13DCC(SkillInfo___TypeInfo, v135->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1C13CC8(&v8->fields.appendSkillInfoList);
      v136 = v8->fields.appendSkillIconList;
      if ( !v136 )
        goto LABEL_156;
      v137 = 0LL;
      while ( (int)v137 < (signed int)v136->max_length )
      {
        v138 = v8->fields.appendSkillBaseList;
        if ( !v138 )
          goto LABEL_156;
        if ( (unsigned int)v137 >= v138->max_length )
          goto LABEL_693;
        this = (FollowerSelectItemListViewItemDraw_o *)v138->m_Items[v137];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v136 = v8->fields.appendSkillIconList;
          ++v137;
          if ( v136 )
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
      v139 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v139, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_156;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      v140 = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v140, 0LL, 0LL) )
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
    LODWORD(v312) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_156;
    v313 = v312;
    LODWORD(v314) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
    if ( !this )
      goto LABEL_156;
    v315 = v314;
    v316 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v316, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_156;
    v318 = LocalPositionX;
    v319 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v319, (float)(v315 * 0.5) + (float)(v313 + v318), 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_156;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38831928, 0LL);
    baseSprite = v8->fields.baseSprite;
    if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    FollowerRootComponent__SetFollowerBase(baseSprite, v80, 0LL);
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
                                                       (System_String_o *)StringLiteral_6579/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/,
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
        v322 = 0;
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
                                                       (System_String_o *)StringLiteral_6580/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/,
                                                       0LL);
      if ( !warningMessageLabel )
        goto LABEL_156;
      UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_156;
      LODWORD(v347) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_156;
      v348 = v347;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      v349 = this;
      warningMessageWidth = (float)v8->fields.warningMessageWidth;
      if ( v348 <= warningMessageWidth )
      {
        if ( !byte_4BAEDA6 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, item);
          byte_4BAEDA6 = 1;
        }
        v365 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v365->oneVector.fields.x;
        y = v365->oneVector.fields.y;
        z = v365->oneVector.fields.z;
      }
      else
      {
        x = warningMessageWidth / v348;
        z = 1.0;
        y = 1.0;
      }
      if ( !v349 )
        goto LABEL_156;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v349, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    v322 = 1;
LABEL_571:
    classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    {
      if ( !v76 )
        goto LABEL_600;
      v325 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
      v324 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v385.fields.currentCryptoKey = v325;
      *(_QWORD *)&v385.fields.fakeValue = v324;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v385, 0LL) < 1
        || (v322 & 1) != 0
        || ServantLeaderInfo__IsHideSupport(v76, 0LL)
        || v7->fields._IsDataLost_k__BackingField )
      {
        goto LABEL_600;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_156;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
        goto LABEL_600;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v367 = (FollowerSelectItemListViewItemDraw_o *)sub_1C14240(this);
        FollowerSelectItemListViewItemDraw__setupMessageUI(v367, v368, v369);
        return;
      }
      v327 = this->fields.typeTextSprite;
      if ( !v327 )
        goto LABEL_600;
      v328 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
      if ( !v328 )
        goto LABEL_600;
      m_CancellationTokenSource = (int32_t)v327->fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
        goto LABEL_600;
      v330 = v328;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !this )
        goto LABEL_156;
      v331 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v330, m_CancellationTokenSource, 0LL);
      if ( v331 )
      {
        v332 = v331;
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_156;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
        v335 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v334 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        v336 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v386.fields.currentCryptoKey = v335;
        *(_QWORD *)&v386.fields.fakeValue = v334;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                         v386,
                                                         0LL);
        if ( !v336 )
          goto LABEL_156;
        this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v336,
                                                         (int32_t)this,
                                                         (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_156;
        v337 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
        if ( !this )
          goto LABEL_156;
        ServantClassCompatibilityIconComponent__SetIcon(
          (ServantClassCompatibilityIconComponent_o *)this,
          (int32_t)v337->fields.svtNameRangeLabel,
          v332->fields.classIds,
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
      v340 = v8->fields.recommendedIconText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6581/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/,
                                                       0LL);
      if ( !v340 )
        goto LABEL_156;
      UILabel__set_text(v340, (System_String_o *)this, 0LL);
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
    v342 = v7->fields.questRestrictionInfo;
    if ( v342 )
    {
      eventId = v342->fields.eventId;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_156;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0LL;
      if ( !this )
        goto LABEL_156;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              v342->fields.eventId,
              (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_629;
      v344 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( TitleInfoControl__IsEnableEventShopButton_38355656((EventDetailEntity_o *)v344, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)entity;
        if ( !entity )
          goto LABEL_156;
        LODWORD(v342) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
      }
      else
      {
LABEL_629:
        LODWORD(v342) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    if ( FollowerType == 4 || (((unsigned int)v342 ^ 1) & 1) != 0 )
      goto LABEL_635;
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      v355 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerId(v7, 0LL);
      if ( v355 )
      {
        UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                      (EventBoostItemUsedMaster_o *)v355,
                      eventId,
                      (int64_t)this,
                      0LL);
        v357 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v357 = BalanceConfig_TypeInfo;
        }
        MaxFriendChocolateUse = v357->static_fields->MaxFriendChocolateUse;
        v376 = MaxFriendChocolateUse;
        if ( UsedCount )
        {
          if ( !v357->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v357);
            MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
          }
          v376 = MaxFriendChocolateUse - UsedCount->fields.count;
        }
        numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6566/*"FOLLOWER_SELECT_EXPLANATION2"*/,
                                                         0LL);
        if ( numberOfUsabletimesPrefixLabel )
        {
          UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
          numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v376, 0LL);
          if ( numberOfUsabletimesLabel )
          {
            UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
            numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6567/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/,
                                                             0LL);
            if ( numberOfUsabletimesSuffixLabel )
            {
              UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
              v362 = v376;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              if ( v362 )
              {
                v363 = LocalizationManager__Get((System_String_o *)StringLiteral_6564/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v363, &color, 0LL);
                v364 = LocalizationManager__Get((System_String_o *)StringLiteral_6565/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v364, &v374, 0LL);
              }
              else
              {
                v366 = LocalizationManager__Get((System_String_o *)StringLiteral_6568/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v366, &color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( !this )
                  goto LABEL_156;
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                v374 = color;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
              if ( this )
              {
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( this )
                {
                  UIWidget__set_color((UIWidget_o *)this, v374, 0LL);
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
    sub_1C13F80(this, item);
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
  if ( (byte_4BAF792 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, item);
    byte_4BAF792 = 1;
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
      sub_1C13F80(gameObject, v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct FollowerInfo_o *followerInfo; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v10; // x8
  struct System_Int32_array *adviceMessageIds; // x8
  struct FollowerInfo_o *v12; // x8
  struct UserRecommendSupportInfo_array *v13; // x8
  UserRecommendSupportInfo_o *v14; // x8
  System_String_array *ConvertMessageToId; // x0
  System_String_o *v16; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *message; // x1
  int v19; // w8
  UnityEngine_GameObject_o *v20; // x0
  bool v21; // w1
  float v22; // s8
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct FollowerInfo_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x0
  struct FollowerInfo_o *v27; // x8

  v4 = this;
  if ( (byte_4BAF791 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&OptionManager_TypeInfo, v6);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C13D24(&StringLiteral_117/*" "*/, v7);
    byte_4BAF791 = 1;
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
      v10 = userRecommendSupportHash->m_Items[0];
      if ( !v10 )
        goto LABEL_51;
      adviceMessageIds = v10->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_51;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_28;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v12 = item->fields.followerInfo;
      if ( !v12 )
        goto LABEL_51;
      v13 = v12->fields.userRecommendSupportHash;
      if ( !v13 )
        goto LABEL_51;
      if ( v13->max_length )
      {
        v14 = v13->m_Items[0];
        if ( !v14 || !this )
          goto LABEL_51;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v14->fields.adviceMessageIds,
                               0LL);
        v16 = System_String__Join((System_String_o *)StringLiteral_117/*" "*/, ConvertMessageToId, 0LL);
        if ( !System_String__IsNullOrEmpty(v16, 0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
          if ( this )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
            if ( this )
            {
              message = v16;
              goto LABEL_22;
            }
          }
LABEL_51:
          sub_1C13F80(this, item);
        }
LABEL_28:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( this )
        {
          v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v20, -19.0, 0LL);
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
                v21 = 1;
LABEL_33:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v21, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, 10.0, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
                if ( this )
                {
                  v19 = 1113849856;
                  goto LABEL_35;
                }
              }
            }
          }
        }
        goto LABEL_51;
      }
    }
    sub_1C13F88(this, item);
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0LL);
  switch ( (int)this )
  {
    case 1:
      v25 = item->fields.followerInfo;
      if ( !v25 )
        goto LABEL_51;
      if ( System_String__IsNullOrEmpty(v25->fields.message, 0LL) )
        goto LABEL_28;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
        goto LABEL_28;
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v26, -19.0, 0LL);
      v27 = item->fields.followerInfo;
      if ( !v27 )
        goto LABEL_51;
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
      if ( !this )
        goto LABEL_51;
      message = v27->fields.message;
      break;
    case 2:
    case 5:
      goto LABEL_28;
    case 3:
    case 4:
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v24, -16.0, 0LL);
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
      v21 = 0;
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
  v19 = 1112801280;
LABEL_35:
  v22 = *(float *)&v19;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v23, v22, 0LL);
}