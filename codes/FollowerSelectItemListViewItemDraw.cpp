void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B61CA7 & 1) == 0 )
  {
    sub_1BE4ACC(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_4B61CA7 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BE1870;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BE1B70;
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

  if ( (byte_4B61CA6 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BE4ACC(&SkillIconComponent___TypeInfo, v4);
    sub_1BE4ACC(&UIIconLabel___TypeInfo, v5);
    byte_4B61CA6 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1BE4B74(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1BE4A70(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1BE4B74(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BE4A70(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BE4B74(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BE4A70(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1BE4B74(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BE4A70(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1BE4B74(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BE4A70(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BE4B74(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BE4A70(&this->fields.appendSkillLevelIconLabelList);
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

  if ( (byte_4B61CA0 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1BE4ACC(&StringLiteral_20460/*"icon_skill_mini"*/, v5);
    sub_1BE4ACC(&StringLiteral_20609/*"img_friend_skill"*/, v6);
    sub_1BE4ACC(&StringLiteral_20359/*"icon_append_mini"*/, v7);
    sub_1BE4ACC(&StringLiteral_20608/*"img_friend_appendskill"*/, v8);
    byte_4B61CA0 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1BE4A70(&this->fields.switchSkillUIList);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20460/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20609/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20359/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20608/*"img_friend_appendskill"*/, 0LL);
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
  if ( (byte_4B61CA5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B61CA5 = 1;
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
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v28, 0LL) > 0;
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
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = *(_QWORD *)&displaySkill;
        sub_1BE4A70(v22 + 32);
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
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v25 + 1;
        *(_QWORD *)(v26 + 32) = *(_QWORD *)&displaySkill;
        sub_1BE4A70(v26 + 32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v27 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v27 )
      {
        SwitchUIWidgetComponent__Set(v27, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1BE4D28(switchSkillInfo, *(_QWORD *)&displaySkill);
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

  if ( (byte_4B61CA4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    byte_4B61CA4 = 1;
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
          sub_1BE4D30(supportInfoButton, v10);
        v14 = &skillButtonList->obj.klass + (int)v13;
        v15 = (UnityEngine_Behaviour_o *)v14[4];
        if ( !v15 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v14[4],
                             (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_1BE4D28(supportInfoButton, v10);
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
  int32_t Kind_38594384; // w29
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
  struct SkillIconComponent_array *v138; // x8
  __int64 v139; // x24
  struct UnityEngine_GameObject_array *v140; // x8
  struct SkillIconComponent_array *v141; // x8
  struct SkillIconComponent_array *v142; // x8
  __int64 v143; // x23
  struct UnityEngine_GameObject_array *v144; // x8
  UnityEngine_Object_o *v145; // x23
  UnityEngine_Object_o *v146; // x23
  UILabel_o *playerNameLabel; // x26
  UIIconLabel_o *playerLevelIconLabel; // x26
  UILabel_o *loginDataLabel; // x26
  System_String_o *v150; // x23
  int64_t LoginTime; // x0
  Il2CppObject *v152; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  bool HasFlag_40415172; // w26
  UILabel_o *v155; // x26
  UIIconLabel_o *v156; // x26
  UILabel_o *v157; // x26
  System_String_o *v158; // x23
  int64_t v159; // x0
  Il2CppObject *v160; // x0
  _BOOL4 v161; // w23
  BalanceConfig_c *v162; // x0
  struct BalanceConfig_StaticFields *v163; // x8
  bool v164; // zf
  __int64 v165; // x9
  __int64 v166; // x10
  UILabel_o *v167; // x26
  UIIconLabel_o *v168; // x26
  UILabel_o *v169; // x26
  System_String_o *v170; // x23
  int64_t v171; // x0
  Il2CppObject *v172; // x0
  _BOOL4 v173; // w23
  BalanceConfig_c *v174; // x0
  LocalizationManager_c *v175; // x0
  System_String_o **v176; // x10
  System_String_o *v177; // x23
  System_String_o *v178; // x0
  bool v179; // w1
  bool IsHideSupport; // w0
  UIRangeLabel_o *svtNameRangeLabel; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *svtNpRangeLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x23
  struct ServantNpCommandCardComponent_o *v185; // x8
  int32_t FriendPointUpVal; // w24
  int v187; // w25
  FollowerSelectItemListViewItemDraw_o *v188; // x1
  int v189; // w8
  __int64 v190; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v192; // w25
  System_String_o *v193; // x23
  __int64 v194; // x2
  __int64 v195; // x3
  __int64 v196; // x4
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
  __int64 v238; // x8
  _QWORD *v239; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v241; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v244; // x8
  struct SkillInfo_array *v245; // x11
  int v246; // w9
  signed __int64 v247; // x10
  unsigned __int64 v248; // x14
  SkillInfo_o *v249; // x14
  unsigned __int64 v250; // x23
  signed __int64 v251; // x25
  struct SkillInfo_array *v252; // x8
  struct UnityEngine_GameObject_array *v253; // x9
  int32_t *v254; // x27
  struct UICommonButton_array *skillButtonList; // x9
  int v256; // w8
  struct UnityEngine_GameObject_array *v257; // x9
  struct SkillIconComponent_array *v258; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v261; // x8
  struct UIIconLabel_array *v262; // x8
  struct SkillIconComponent_array *v263; // x8
  int32_t v264; // w8
  bool v265; // w1
  __int64 v266; // x8
  _QWORD *v267; // x9
  __int64 v268; // x10
  __int64 v269; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *svtCommandCardList; // x23
  ServantCommandCardListComponent_o *v272; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v275; // w26
  UnityEngine_Object_o *pushSprite; // x23
  struct FollowerInfo_o *v277; // x8
  int64_t pushUserSvtId; // x8
  bool v279; // w24
  UnityEngine_Object_o *v280; // x23
  UnityEngine_Object_o *v281; // x23
  UISprite_o *v282; // x24
  UISprite_o *v283; // x23
  UILabel_o *v284; // x24
  System_String_o *v285; // x23
  __int64 v286; // x2
  __int64 v287; // x3
  __int64 v288; // x4
  Il2CppObject *v289; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v291; // x2
  __int64 v292; // x3
  __int64 v293; // x4
  Il2CppObject **v294; // x9
  Il2CppObject *v295; // x23
  Il2CppObject *v296; // x0
  FollowerSelectItemListViewItemDraw_o *v297; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w23
  UILabel_o *v302; // x24
  UnityEngine_GameObject_o *v303; // x24
  FollowerSelectItemListViewItemDraw_c *v304; // x8
  __int64 v305; // x9
  _BOOL4 IsRecommendFollower_k__BackingField; // w23
  BalanceConfig_c *v307; // x0
  __int64 v308; // x9
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o **v310; // x10
  UnityEngine_GameObject_o *v311; // x24
  BalanceConfig_c *v312; // x8
  UISprite_o *classBoardBackSprite; // x24
  UnityEngine_GameObject_o *v314; // x24
  FollowerSelectItemListViewItemDraw_c *v315; // x8
  UnityEngine_GameObject_o *v316; // x0
  UnityEngine_GameObject_o *v317; // x0
  float v318; // s0
  float v319; // s8
  float v320; // s0
  float v321; // s9
  UnityEngine_GameObject_o *v322; // x0
  float LocalPositionX; // s0
  float v324; // s10
  UnityEngine_GameObject_o *v325; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v328; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v330; // x22
  __int64 v331; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *v333; // x23
  int32_t v334; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v336; // w22
  QuestPhaseEntity_o *v337; // x0
  QuestPhaseEntity_o *v338; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v340; // x23
  __int64 v341; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v342; // x21
  FollowerSelectItemListViewItemDraw_o *v343; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v346; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *v348; // x22
  int32_t eventId; // w21
  Il2CppObject *v350; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  UILabel_o *warningMessageLabel; // x22
  float v353; // s0
  float v354; // s8
  FollowerSelectItemListViewItemDraw_o *v355; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int32_t FollowerType; // w0
  Il2CppObject *v361; // x22
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v363; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v368; // w21
  System_String_o *v369; // x0
  System_String_o *v370; // x0
  struct UnityEngine_Vector3_StaticFields *v371; // x8
  System_String_o *v372; // x0
  FollowerSelectItemListViewItemDraw_o *v373; // x0
  FollowerSelectItemListViewItem_o *v374; // x1
  const MethodInfo *v375; // x2
  int32_t v376; // [xsp+1Ch] [xbp-C4h]
  System_String_o *v377; // [xsp+20h] [xbp-C0h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v379; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v381; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v388; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v389; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v390; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v391; // 0:x0.16
  UnityEngine_Color_o v392; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v393; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4B61CA1 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, item);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_1BE4ACC(&DataManager_TypeInfo, v18);
    sub_1BE4ACC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1BE4ACC(&FollowerRootComponent_TypeInfo, v22);
    sub_1BE4ACC(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_1BE4ACC(&Grade_TypeInfo, v24);
    sub_1BE4ACC(&int_TypeInfo, v25);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v29);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v30);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1BE4ACC(&OptionManager_TypeInfo, v32);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_1BE4ACC(&SkillInfo___TypeInfo, v36);
    sub_1BE4ACC(&TitleInfoControl_TypeInfo, v37);
    sub_1BE4ACC(&StringLiteral_3813/*"COMMON_NO_ENTRY"*/, v38);
    sub_1BE4ACC(&StringLiteral_6568/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_1BE4ACC(&StringLiteral_6547/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_1BE4ACC(&StringLiteral_11788/*"SERVANT_HIDE_NAME"*/, v41);
    sub_1BE4ACC(&StringLiteral_9477/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_1BE4ACC(&StringLiteral_6548/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_1BE4ACC(&StringLiteral_6505/*"FFFFFF"*/, v44);
    sub_1BE4ACC(&StringLiteral_9478/*"NP_HIDE_NAME"*/, v45);
    sub_1BE4ACC(&StringLiteral_11684/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1BE4ACC(&StringLiteral_13503/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_1BE4ACC(&StringLiteral_9479/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_1BE4ACC(&StringLiteral_6561/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_1BE4ACC(&StringLiteral_6546/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_1BE4ACC(&StringLiteral_17705/*"btn_bg_29_2"*/, v51);
    sub_1BE4ACC(&StringLiteral_20472/*"icon_support_01"*/, v52);
    sub_1BE4ACC(&StringLiteral_9482/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1BE4ACC(&StringLiteral_20595/*"img_frames_mask01"*/, v54);
    sub_1BE4ACC(&StringLiteral_12574/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v55);
    sub_1BE4ACC(&StringLiteral_12575/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v56);
    sub_1BE4ACC(&StringLiteral_6560/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v57);
    sub_1BE4ACC(&StringLiteral_6562/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v58);
    sub_1BE4ACC(&StringLiteral_6545/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v59);
    sub_1BE4ACC(&StringLiteral_18715/*"datalost_svt_select"*/, v60);
    sub_1BE4ACC(&StringLiteral_6504/*"FFFF00"*/, v61);
    sub_1BE4ACC(&StringLiteral_9452/*"NO_ENTRY_NAME"*/, v62);
    sub_1BE4ACC(&StringLiteral_9476/*"NP_COLOR_NAME"*/, v63);
    sub_1BE4ACC(&StringLiteral_16234/*"[{0}]+{1}[-]"*/, v64);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v65);
    sub_1BE4ACC(&StringLiteral_20434/*"icon_friend"*/, v66);
    sub_1BE4ACC(&StringLiteral_6549/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v67);
    sub_1BE4ACC(&StringLiteral_20433/*"icon_follow"*/, v68);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BE4ACC(&StringLiteral_20637/*"img_listbg_02"*/, v69);
    byte_4B61CA1 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v381 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v379.fields.r = 0LL;
  *(_QWORD *)&v379.fields.b = 0LL;
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
    ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
    followerInfo = v7->fields.followerInfo;
    v76 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_38594384 = Grade__GetKind_38594384(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_38594384, 0LL);
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
    *(_QWORD *)&v384.fields.currentCryptoKey = v83;
    *(_QWORD *)&v384.fields.fakeValue = v82;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                     v384,
                                                     0LL);
    if ( (int)this >= 1 )
    {
      v84 = v7->fields.followerInfo;
      if ( !v84 )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_162;
      v377 = v80;
      v376 = Kind_38594384;
      ServantFaceIconComponent__Set_39129904(
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
          *(_QWORD *)&v385.fields.currentCryptoKey = v93;
          *(_QWORD *)&v385.fields.fakeValue = v92;
          this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                           v385,
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
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
        !v7->fields._IsDataLost_k__BackingField,
        0LL);
      if ( !ServantLeaderInfo__IsNpc(v76, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v99 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v100 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        v101 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v386.fields.currentCryptoKey = v99;
        *(_QWORD *)&v386.fields.fakeValue = v100;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                         v386,
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
      v102 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v103 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
      v104 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
      v105 = (ServantLimitAddMaster_o *)v102;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v387.fields.currentCryptoKey = v103;
      *(_QWORD *)&v387.fields.fakeValue = v104;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                       v387,
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
      switch ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) )
      {
        case 1:
          playerNameLabel = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !playerNameLabel )
            goto LABEL_162;
          UILabel__set_text(playerNameLabel, (System_String_o *)this, 0LL);
          playerLevelIconLabel = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !playerLevelIconLabel )
            goto LABEL_162;
          UIIconLabel__Set_39141664(playerLevelIconLabel, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          loginDataLabel = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v150 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          LoginTime = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v152 = (Il2CppObject *)LocalizationManager__GetBeforeTime(LoginTime, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v150, v152, 0LL);
          if ( !loginDataLabel )
            goto LABEL_162;
          UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20434/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( questRestrictionInfo )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                             questRestrictionInfo->fields.questId,
                                                             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_162;
            HasFlag_40415172 = QuestEntity__HasFlag_40415172(
                                 (QuestEntity_o *)this,
                                 0x8000000LL,
                                 questRestrictionInfo->fields.questPhase,
                                 0LL);
          }
          else
          {
            HasFlag_40415172 = 0;
          }
          IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
          v307 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v307 = BalanceConfig_TypeInfo;
          }
          v308 = 212LL;
          if ( HasFlag_40415172 )
            v308 = 672LL;
          if ( IsRecommendFollower_k__BackingField )
            v308 = 224LL;
          static_fields = v307->static_fields;
          v310 = (System_String_o **)&StringLiteral_9476/*"NP_COLOR_NAME"*/;
          v175 = LocalizationManager_TypeInfo;
          FollowerPointNpc = *(int32_t *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v308);
          if ( v88 > 1 )
            v310 = (System_String_o **)&StringLiteral_9482/*"NP_MAX_COLOR_NAME"*/;
          v177 = *v310;
          Kind_38594384 = v376;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
LABEL_213:
            j_il2cpp_runtime_class_init_0(v175);
LABEL_214:
          v178 = LocalizationManager__Get(v177, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v178, OverwriteTDName, 0LL);
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
            !v7->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_162;
          v179 = 1;
LABEL_226:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v179, 0LL);
LABEL_227:
          IsHideSupport = ServantLeaderInfo__IsHideSupport(v76, 0LL);
          svtNameRangeLabel = v8->fields.svtNameRangeLabel;
          if ( IsHideSupport )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11788/*"SERVANT_HIDE_NAME"*/,
                                                             0LL);
            if ( !svtNameRangeLabel )
              goto LABEL_162;
            UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
            if ( !this )
              goto LABEL_162;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL);
            if ( (_DWORD)this != 4 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_9479/*"NP_HIDE_NAME_LEVEL"*/,
                                                               0LL);
              v89 = this;
            }
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v7, 0LL);
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
            v185 = v8->fields.svtNpCommandCard;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v185 )
                goto LABEL_162;
              ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
            }
            else
            {
              if ( !v185 )
                goto LABEL_162;
              ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
            }
          }
          FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(v7, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignValue(
                                                           v7,
                                                           0LL);
          if ( !v8->fields.friendPointIconLabel )
            goto LABEL_162;
          v187 = (int)this;
          UIIconLabel__Set_39141664(v8->fields.friendPointIconLabel, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
          if ( FriendPointUpVal > 0 || v187 >= 1 )
          {
            if ( v187 <= 0 )
              v189 = 1000;
            else
              v189 = v187;
            v190 = 274877907LL * (v189 * FriendPointUpVal + (v189 - 1000) * FollowerPointNpc);
            friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            v192 = (v190 >> 38) + ((unsigned __int64)v190 >> 63);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v193 = LocalizationManager__Get((System_String_o *)StringLiteral_6568/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
            TimesToRestart_k__BackingField = v192;
            v197 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v194, v195, v196);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v193, v197, 0LL);
            if ( !friendPointData2Label )
              goto LABEL_162;
            v188 = this;
            this = friendPointData2Label;
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            if ( !this )
              goto LABEL_162;
            v188 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v188, 0LL);
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
                                                             v7,
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
            if ( FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL) )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_162;
              baseButton = this->fields.baseButton;
              servantFaceIcon = this->fields.servantFaceIcon;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v388.fields.currentCryptoKey = baseButton;
              *(_QWORD *)&v388.fields.fakeValue = servantFaceIcon;
              v209 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v388, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_162;
              Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
            }
            else
            {
              Rarity = -1;
              v209 = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
            if ( !this )
              goto LABEL_162;
            if ( this->fields.typeTextSprite )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_162;
              typeTextSprite = this->fields.typeTextSprite;
              if ( !typeTextSprite )
                goto LABEL_162;
              topAnchor = typeTextSprite->fields.topAnchor;
              v212 = *(_QWORD *)&typeTextSprite->fields.updateAnchors;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v389.fields.currentCryptoKey = topAnchor;
              *(_QWORD *)&v389.fields.fakeValue = v212;
              v214 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v389, 0LL);
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
              v7->fields.eventUpValItemList,
              v209,
              Rarity,
              v214,
              0LL);
          }
          p_skillInfoList = &v8->fields.skillInfoList;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                           v7,
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
                  SkillIconComponent__Set_39140860(
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
                  UIIconLabel__Set_39141664((UIIconLabel_o *)this, 48, v228[5], 0, 0, 0LL, 0, 0, 0, 0LL);
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
            item = (FollowerSelectItemListViewItem_o *)v8->fields.skillInfoUiWidget;
            v238 = *(_QWORD *)&this->fields.m_CachedPtr;
            v239 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v238 )
              goto LABEL_162;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v238 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
            }
            else
            {
              v241 = v238 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v241 + 32) = item;
              sub_1BE4A70(v241 + 32);
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
                                                           v7,
                                                           &v8->fields.appendSkillInfoList,
                                                           v7->fields.isNpc,
                                                           0LL);
          appendSkillIconList = v8->fields.appendSkillIconList;
          if ( !appendSkillIconList )
            goto LABEL_162;
          v244 = *(_QWORD *)&appendSkillIconList->max_length;
          if ( v244 << 32 < 1 )
          {
            v246 = 0;
          }
          else
          {
            v245 = *p_appendSkillInfoList;
            v246 = 0;
            v247 = 0LL;
            do
            {
              if ( v245 )
              {
                v248 = v245->max_length;
                if ( v247 < (int)v248 )
                {
                  if ( v247 >= v248 )
                    goto LABEL_685;
                  v249 = (*p_appendSkillInfoList)->m_Items[v247];
                  if ( v249 && v249->fields.id >= 1 )
                    v246 = v247 + 1;
                }
              }
              ++v247;
            }
            while ( v247 < (int)v244 );
          }
          if ( (int)v244 >= 1 )
          {
            v250 = 0LL;
            v251 = v246;
            do
            {
              if ( (__int64)v250 >= v251 )
              {
                appendSkillBaseList = v8->fields.appendSkillBaseList;
                if ( !appendSkillBaseList )
                  goto LABEL_162;
                if ( v250 >= appendSkillBaseList->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v250];
                if ( !this )
                  goto LABEL_162;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v252 = *p_appendSkillInfoList;
                if ( !*p_appendSkillInfoList )
                  goto LABEL_162;
                if ( v250 >= v252->max_length )
                  goto LABEL_685;
                v253 = v8->fields.appendSkillBaseList;
                if ( !v253 )
                  goto LABEL_162;
                if ( v250 >= v253->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)v253->m_Items[v250];
                if ( !this )
                  goto LABEL_162;
                v254 = (int32_t *)v252->m_Items[v250];
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
                  v256 = HIDWORD(skillButtonList->m_Items[144]);
                  if ( v250 )
                    v256 += LODWORD(skillButtonList->m_Items[145]) * v250;
                  v257 = v8->fields.appendSkillBaseList;
                  if ( !v257 )
                    goto LABEL_162;
                  if ( v250 >= v257->max_length )
                    goto LABEL_685;
                  GameObjectExtensions__SetLocalPositionX(v257->m_Items[v250], (float)v256, 0LL);
                }
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v76, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v254 )
                    v254[4] = 0;
                  v258 = v8->fields.appendSkillIconList;
                  if ( !v258 )
                    goto LABEL_162;
                  if ( v250 >= v258->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)v258->m_Items[v250];
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
                  if ( !appendSkillLevelIconLabelList )
                    goto LABEL_162;
                  if ( v250 >= appendSkillLevelIconLabelList->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v250];
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v261 = v8->fields.appendSkillIconList;
                  if ( !v261 )
                    goto LABEL_162;
                  if ( v250 >= v261->max_length )
                    goto LABEL_685;
                  if ( !v254 )
                    goto LABEL_162;
                  this = (FollowerSelectItemListViewItemDraw_o *)v261->m_Items[v250];
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__Set_39140860(
                    (SkillIconComponent_o *)this,
                    v254[4],
                    v254[5],
                    v254[12],
                    v254[13],
                    0LL);
                  v262 = v8->fields.appendSkillLevelIconLabelList;
                  if ( !v262 )
                    goto LABEL_162;
                  if ( v250 >= v262->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)v262->m_Items[v250];
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Set_39141664((UIIconLabel_o *)this, 48, v254[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v263 = v8->fields.appendSkillIconList;
              if ( !v263 )
                goto LABEL_162;
              ++v250;
            }
            while ( (__int64)v250 < (int)v263->max_length );
          }
          v264 = v8->fields.displaySkill;
          if ( v264 == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
            v80 = v377;
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
            item = (FollowerSelectItemListViewItem_o *)v8->fields.appendSkillInfoUiWidget;
            v266 = *(_QWORD *)&this->fields.m_CachedPtr;
            v267 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v266 )
              goto LABEL_162;
            v268 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v268 >= *(_DWORD *)(v266 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v267[4] + 192LL) + 112LL));
            }
            else
            {
              v269 = v266 + 8 * v268;
              LODWORD(this->fields.m_CancellationTokenSource) = v268 + 1;
              *(_QWORD *)(v269 + 32) = item;
              sub_1BE4A70(v269 + 32);
            }
          }
          else
          {
            v80 = v377;
            if ( v264 == 1 )
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
              v265 = 1;
            }
            else
            {
              if ( v264 )
                goto LABEL_438;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              v265 = 0;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v265, 0LL);
          }
          if ( v8->fields.displaySkill == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_162;
            switchSkillInfo = v8->fields.switchSkillInfo;
            this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
            v272 = v8->fields.svtCommandCardList;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v272 )
                goto LABEL_162;
              ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
            }
            else
            {
              SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, 0LL);
              commandCardParam = v76->fields.commandCardParam;
              v275 = SvtId;
              this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v76, 0LL);
              if ( !v272 )
                goto LABEL_162;
              ServantCommandCardListComponent__Set_39118956(
                v272,
                v275,
                commandCardParam,
                (System_Int32_array *)this,
                2,
                1,
                0LL);
              v80 = v377;
            }
          }
          pushSprite = (UnityEngine_Object_o *)v8->fields.pushSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v277 = v7->fields.followerInfo;
            if ( !v277 )
              goto LABEL_162;
            pushUserSvtId = v277->fields.pushUserSvtId;
            v279 = pushUserSvtId && pushUserSvtId == v76->fields.userSvtId;
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_162;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v279, 0LL);
          }
          v280 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v280, 0LL, 0LL) )
            goto LABEL_483;
          v281 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v281, 0LL, 0LL) )
            goto LABEL_483;
          if ( v7->fields._IsDataLost_k__BackingField )
          {
            v282 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetPartyOrganizationImage(v282, (System_String_o *)StringLiteral_18715/*"datalost_svt_select"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            v392.fields.r = 1.0;
            v392.fields.g = 1.0;
            v392.fields.b = 1.0;
            v392.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)this, v392, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
          }
          else
          {
            if ( v7->fields._TimesToRestart_k__BackingField < 1 )
              goto LABEL_483;
            v283 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetCommon(v283, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20595/*"img_frames_mask01"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            v393.fields.a = 0.62353;
            v393.fields.r = 0.0;
            v393.fields.g = 0.0;
            v393.fields.b = 0.0;
            UIWidget__set_color((UIWidget_o *)this, v393, 0LL);
            v284 = v8->fields.dataLostMaskMessageLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v285 = LocalizationManager__Get((System_String_o *)StringLiteral_11684/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
            TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
            v289 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v286, v287, v288);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v285, v289, 0LL);
            if ( !v284 )
              goto LABEL_162;
            UILabel__set_text(v284, (System_String_o *)this, 0LL);
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
            if ( (v7->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0
              || !v7->fields._IsReleasedClassBoard_k__BackingField )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
              if ( !this )
                goto LABEL_162;
              v297 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
                v294 = (Il2CppObject **)&StringLiteral_6504/*"FFFF00"*/;
              else
                v294 = (Il2CppObject **)&StringLiteral_6505/*"FFFFFF"*/;
              v295 = *v294;
              TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
              v296 = (Il2CppObject *)j_il2cpp_value_box_0(
                                       int_TypeInfo,
                                       &TimesToRestart_k__BackingField,
                                       v291,
                                       v292,
                                       v293);
              this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_62713180(
                                                               (System_String_o *)StringLiteral_16234/*"[{0}]+{1}[-]"*/,
                                                               v295,
                                                               v296,
                                                               0LL);
              if ( !v8->fields.openClassBoardNumLabel )
                goto LABEL_162;
              v297 = this;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            }
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v297, 0LL);
          }
          classBoardOpenButton = (UnityEngine_Object_o *)v8->fields.classBoardOpenButton;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
            break;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
          if ( !this )
            goto LABEL_162;
          IsReleasedClassBoard_k__BackingField = v7->fields._IsReleasedClassBoard_k__BackingField;
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
            v7->fields._OpenClassBoardNum_k__BackingField >= 0,
            1,
            0LL);
          classBoardOpenButtonLabel = (UnityEngine_Object_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(classBoardOpenButtonLabel, 0LL, 0LL) )
          {
            OpenClassBoardNum_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
            v302 = v8->fields.classBoardOpenButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12575/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                               0LL);
              if ( !v302 )
                goto LABEL_162;
              UILabel__set_text(v302, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_162;
              v303 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v304 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v304 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v305 = 36LL;
            }
            else
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12574/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                               0LL);
              if ( !v302 )
                goto LABEL_162;
              UILabel__set_text(v302, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_162;
              v303 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v304 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
                v304 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v305 = 32LL;
            }
            GameObjectExtensions__SetLocalPositionY(
              v303,
              *(float *)((char *)&v304->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v305),
              0LL);
          }
          if ( ConstantMaster__IsFLAG20240804(0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
            if ( !this )
              goto LABEL_162;
            v311 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v312 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v312 = BalanceConfig_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34486688(v311, v312->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
            classBoardBackSprite = v8->fields.classBoardBackSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17705/*"btn_bg_29_2"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
            if ( !this )
              goto LABEL_162;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_162;
            v314 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v315 = FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
              v315 = FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34486688(v314, v315->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_162;
            v316 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalScaleX(
              v316,
              BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
              0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            if ( !this )
              goto LABEL_162;
            v317 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              v317,
              (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
              0LL);
          }
          break;
        case 2:
          v155 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v155 )
            goto LABEL_162;
          UILabel__set_text(v155, (System_String_o *)this, 0LL);
          v156 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          Kind_38594384 = v376;
          if ( !v156 )
            goto LABEL_162;
          UIIconLabel__Set_39141664(v156, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v157 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v158 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v159 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v160 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v159, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v158, v160, 0LL);
          if ( !v157 )
            goto LABEL_162;
          UILabel__set_text(v157, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          v161 = v7->fields._IsRecommendFollower_k__BackingField;
          v162 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v162 = BalanceConfig_TypeInfo;
          }
          v163 = v162->static_fields;
          v164 = !v161;
          v165 = 224LL;
          v166 = 216LL;
          goto LABEL_207;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_162;
          v107 = v88;
          v108 = StringLiteral_20637/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          Kind_38594384 = v376;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20472/*"icon_support_01"*/, 0LL);
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
          v377 = (System_String_o *)v108;
          if ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) == 3 )
          {
            v111 = (System_String_o **)&StringLiteral_9482/*"NP_MAX_COLOR_NAME"*/;
            if ( v107 <= 1 )
              v111 = (System_String_o **)&StringLiteral_9476/*"NP_COLOR_NAME"*/;
            v112 = *v111;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v113 = LocalizationManager__Get(v112, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v113 = LocalizationManager__Get((System_String_o *)StringLiteral_9477/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            OverwriteTDName = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9478/*"NP_HIDE_NAME"*/, 0LL);
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
          v179 = 0;
          goto LABEL_226;
        case 5:
          v167 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v167 )
            goto LABEL_162;
          UILabel__set_text(v167, (System_String_o *)this, 0LL);
          v168 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          Kind_38594384 = v376;
          if ( !v168 )
            goto LABEL_162;
          UIIconLabel__Set_39141664(v168, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v169 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v170 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v171 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v172 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v171, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v170, v172, 0LL);
          if ( !v169 )
            goto LABEL_162;
          UILabel__set_text(v169, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20433/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v173 = v7->fields._IsRecommendFollower_k__BackingField;
          v174 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v174 = BalanceConfig_TypeInfo;
          }
          v163 = v174->static_fields;
          v164 = !v173;
          v165 = 224LL;
          v166 = 672LL;
LABEL_207:
          v175 = LocalizationManager_TypeInfo;
          if ( v164 )
            v165 = v166;
          if ( v88 <= 1 )
            v176 = (System_String_o **)&StringLiteral_9476/*"NP_COLOR_NAME"*/;
          else
            v176 = (System_String_o **)&StringLiteral_9482/*"NP_MAX_COLOR_NAME"*/;
          FollowerPointNpc = *(int32_t *)((char *)&v163->CriticalRateToAddByQuickFirstBonus + v165);
          v177 = *v176;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            goto LABEL_213;
          goto LABEL_214;
        default:
          Kind_38594384 = v376;
          FollowerPointNpc = 0;
          goto LABEL_227;
      }
    }
    else
    {
LABEL_49:
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(v7, 0LL);
      if ( !v8->fields.servantFaceIcon )
        goto LABEL_162;
      ServantFaceIconComponent__SetEquipDangling(v8->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0LL);
      v95 = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3813/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !v95 )
        goto LABEL_162;
      UIRangeLabel__Set(v95, (System_String_o *)this, 0LL, 1, 0, 0LL);
      switch ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) )
      {
        case 1:
          v114 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v114 )
            goto LABEL_162;
          UILabel__set_text(v114, (System_String_o *)this, 0LL);
          v115 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v115 )
            goto LABEL_162;
          UIIconLabel__Set_39141664(v115, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v116 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v117 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v118 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v119 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v118, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v117, v119, 0LL);
          if ( !v116 )
            goto LABEL_162;
          UILabel__set_text(v116, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          v120 = &StringLiteral_20434/*"icon_friend"*/;
          goto LABEL_120;
        case 2:
          v121 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v121 )
            goto LABEL_162;
          UILabel__set_text(v121, (System_String_o *)this, 0LL);
          v122 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v122 )
            goto LABEL_162;
          UIIconLabel__Set_39141664(v122, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v123 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v124 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v125 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
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
          v80 = (System_String_o *)StringLiteral_20637/*"img_listbg_02"*/;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20472/*"icon_support_01"*/, 0LL);
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
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v127 )
            goto LABEL_162;
          UILabel__set_text(v127, (System_String_o *)this, 0LL);
          v128 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v128 )
            goto LABEL_162;
          UIIconLabel__Set_39141664(v128, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v129 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v130 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v131 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v132 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v131, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v130, v132, 0LL);
          if ( !v129 )
            goto LABEL_162;
          UILabel__set_text(v129, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          v120 = &StringLiteral_20433/*"icon_follow"*/;
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
            !v7->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_162;
          v97 = 1;
LABEL_126:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v97, 0LL);
LABEL_127:
          FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v96);
          FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v133);
          v134 = v8->fields.svtNpRangeLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9452/*"NO_ENTRY_NAME"*/,
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
          v8->fields.skillInfoList = (struct SkillInfo_array *)sub_1BE4B74(SkillInfo___TypeInfo, v137->max_length);
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1BE4A70(&v8->fields.skillInfoList);
          v138 = v8->fields.skillIconList;
          if ( !v138 )
            goto LABEL_162;
          v139 = 0LL;
          break;
        default:
          goto LABEL_127;
      }
      while ( (int)v139 < (signed int)v138->max_length )
      {
        v140 = v8->fields.skillBaseList;
        if ( v140 )
        {
          if ( (unsigned int)v139 >= v140->max_length )
LABEL_685:
            sub_1BE4D30(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)v140->m_Items[v139];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v138 = v8->fields.skillIconList;
            ++v139;
            if ( v138 )
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
      v141 = v8->fields.appendSkillIconList;
      if ( !v141 )
        goto LABEL_162;
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)sub_1BE4B74(SkillInfo___TypeInfo, v141->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1BE4A70(&v8->fields.appendSkillInfoList);
      v142 = v8->fields.appendSkillIconList;
      if ( !v142 )
        goto LABEL_162;
      v143 = 0LL;
      while ( (int)v143 < (signed int)v142->max_length )
      {
        v144 = v8->fields.appendSkillBaseList;
        if ( !v144 )
          goto LABEL_162;
        if ( (unsigned int)v143 >= v144->max_length )
          goto LABEL_685;
        this = (FollowerSelectItemListViewItemDraw_o *)v144->m_Items[v143];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v142 = v8->fields.appendSkillIconList;
          ++v143;
          if ( v142 )
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
      v145 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v145, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_162;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      v146 = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v146, 0LL, 0LL) )
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
    LODWORD(v318) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    v319 = v318;
    LODWORD(v320) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
    if ( !this )
      goto LABEL_162;
    v321 = v320;
    v322 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v322, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    v324 = LocalPositionX;
    v325 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v325, (float)(v321 * 0.5) + (float)(v319 + v324), 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38594384, 0LL);
    baseSprite = v8->fields.baseSprite;
    if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    FollowerRootComponent__SetFollowerBase(baseSprite, v80, 0LL);
    if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
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
                                                       (System_String_o *)StringLiteral_6560/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
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
      if ( !v7->fields.isUniqueSvtRestriction && !v7->fields.isUniqueIndividualityRestriction )
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
        v328 = 0;
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
                                                       (System_String_o *)StringLiteral_6561/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                       0LL);
      if ( !warningMessageLabel )
        goto LABEL_162;
      UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_162;
      LODWORD(v353) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_162;
      v354 = v353;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      v355 = this;
      warningMessageWidth = (float)v8->fields.warningMessageWidth;
      if ( v354 <= warningMessageWidth )
      {
        if ( !byte_4B612E6 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, item);
          byte_4B612E6 = 1;
        }
        v371 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v371->oneVector.fields.x;
        y = v371->oneVector.fields.y;
        z = v371->oneVector.fields.z;
      }
      else
      {
        x = warningMessageWidth / v354;
        z = 1.0;
        y = 1.0;
      }
      if ( !v355 )
        goto LABEL_162;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v355, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    v328 = 1;
LABEL_563:
    classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    {
      if ( !v76 )
        goto LABEL_592;
      v331 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
      v330 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v390.fields.currentCryptoKey = v331;
      *(_QWORD *)&v390.fields.fakeValue = v330;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v390, 0LL) < 1
        || (v328 & 1) != 0
        || ServantLeaderInfo__IsHideSupport(v76, 0LL)
        || v7->fields._IsDataLost_k__BackingField )
      {
        goto LABEL_592;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
        goto LABEL_592;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)this->fields.rangeSprite;
      if ( !this )
        goto LABEL_162;
      item = (FollowerSelectItemListViewItem_o *)FollowerRootComponent_TypeInfo;
      methodPtr_low = LOBYTE(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (FollowerRootComponent_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerRootComponent_TypeInfo )
      {
        v373 = (FollowerSelectItemListViewItemDraw_o *)sub_1BE4FE8(this);
        FollowerSelectItemListViewItemDraw__setupMessageUI(v373, v374, v375);
        return;
      }
      v333 = this->fields.typeTextSprite;
      if ( !v333 )
        goto LABEL_592;
      v334 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
      if ( !v334 )
        goto LABEL_592;
      m_CancellationTokenSource = (int32_t)v333->fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
        goto LABEL_592;
      v336 = v334;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !this )
        goto LABEL_162;
      v337 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v336, m_CancellationTokenSource, 0LL);
      if ( v337 )
      {
        v338 = v337;
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_162;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
        v341 = *(_QWORD *)&v76->fields.svtId.fields.currentCryptoKey;
        v340 = *(_QWORD *)&v76->fields.svtId.fields.fakeValue;
        v342 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v391.fields.currentCryptoKey = v341;
        *(_QWORD *)&v391.fields.fakeValue = v340;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                         v391,
                                                         0LL);
        if ( !v342 )
          goto LABEL_162;
        this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v342,
                                                         (int32_t)this,
                                                         (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_162;
        v343 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
        if ( !this )
          goto LABEL_162;
        ServantClassCompatibilityIconComponent__SetIcon(
          (ServantClassCompatibilityIconComponent_o *)this,
          (int32_t)v343->fields.svtNameRangeLabel,
          v338->fields.classIds,
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
    }
    recommendedIconText = (UnityEngine_Object_o *)v8->fields.recommendedIconText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
    {
      v346 = v8->fields.recommendedIconText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6562/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                       0LL);
      if ( !v346 )
        goto LABEL_162;
      UILabel__set_text(v346, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedIconText;
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
    }
    numberOfUsabletimes = (UnityEngine_Object_o *)v8->fields.numberOfUsabletimes;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
      goto LABEL_629;
    v348 = v7->fields.questRestrictionInfo;
    if ( v348 )
    {
      eventId = v348->fields.eventId;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0LL;
      if ( !this )
        goto LABEL_162;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              v348->fields.eventId,
              (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_621;
      v350 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( TitleInfoControl__IsEnableEventShopButton_38140200((EventDetailEntity_o *)v350, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)entity;
        if ( !entity )
          goto LABEL_162;
        LODWORD(v348) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
      }
      else
      {
LABEL_621:
        LODWORD(v348) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !this )
      goto LABEL_162;
    if ( BYTE4(this->fields.typeTextSprite) || FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) == 3 )
    {
      item = 0LL;
LABEL_627:
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimes;
      if ( !this )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
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
          v7->fields._isRecommendedUser_k__BackingField,
          0LL);
      }
      return;
    }
    FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL);
    item = 0LL;
    if ( FollowerType == 4 || (((unsigned int)v348 ^ 1) & 1) != 0 )
      goto LABEL_627;
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      v361 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerId(v7, 0LL);
      if ( v361 )
      {
        UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                      (EventBoostItemUsedMaster_o *)v361,
                      eventId,
                      (int64_t)this,
                      0LL);
        v363 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v363 = BalanceConfig_TypeInfo;
        }
        MaxFriendChocolateUse = v363->static_fields->MaxFriendChocolateUse;
        v381 = MaxFriendChocolateUse;
        if ( UsedCount )
        {
          if ( !v363->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v363);
            MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
          }
          v381 = MaxFriendChocolateUse - UsedCount->fields.count;
        }
        numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6547/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                         0LL);
        if ( numberOfUsabletimesPrefixLabel )
        {
          UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
          numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v381, 0LL);
          if ( numberOfUsabletimesLabel )
          {
            UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
            numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6548/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                             0LL);
            if ( numberOfUsabletimesSuffixLabel )
            {
              UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
              v368 = v381;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              if ( v368 )
              {
                v369 = LocalizationManager__Get((System_String_o *)StringLiteral_6545/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v369, &color, 0LL);
                v370 = LocalizationManager__Get((System_String_o *)StringLiteral_6546/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v370, &v379, 0LL);
              }
              else
              {
                v372 = LocalizationManager__Get((System_String_o *)StringLiteral_6549/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v372, &color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( !this )
                  goto LABEL_162;
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                v379 = color;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
              if ( this )
              {
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( this )
                {
                  UIWidget__set_color((UIWidget_o *)this, v379, 0LL);
                  item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
                  goto LABEL_627;
                }
              }
            }
          }
        }
      }
    }
LABEL_162:
    sub_1BE4D28(this, item);
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
  if ( (byte_4B61CA3 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, item);
    byte_4B61CA3 = 1;
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
      sub_1BE4D28(gameObject, v6);
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
  if ( (byte_4B61CA2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&OptionManager_TypeInfo, v6);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BE4ACC(&StringLiteral_116/*" "*/, v7);
    byte_4B61CA2 = 1;
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
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
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
        v16 = System_String__Join((System_String_o *)StringLiteral_116/*" "*/, ConvertMessageToId, 0LL);
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
          sub_1BE4D28(this, item);
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
    sub_1BE4D30(this, item);
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