void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4AB0F97 & 1) == 0 )
  {
    sub_1BAB41C(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_4AB0F97 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BC2C30;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BC2F40;
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

  if ( (byte_4AB0F96 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BAB41C(&SkillIconComponent___TypeInfo, v4);
    sub_1BAB41C(&UIIconLabel___TypeInfo, v5);
    byte_4AB0F96 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1BAB4C4(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1BAB3C0(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1BAB4C4(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BAB3C0(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BAB4C4(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BAB3C0(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1BAB4C4(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BAB3C0(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1BAB4C4(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BAB3C0(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BAB4C4(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BAB3C0(&this->fields.appendSkillLevelIconLabelList);
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

  if ( (byte_4AB0F90 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1BAB41C(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1BAB41C(&StringLiteral_20208/*"icon_skill_mini"*/, v5);
    sub_1BAB41C(&StringLiteral_20351/*"img_friend_skill"*/, v6);
    sub_1BAB41C(&StringLiteral_20113/*"icon_append_mini"*/, v7);
    sub_1BAB41C(&StringLiteral_20350/*"img_friend_appendskill"*/, v8);
    byte_4AB0F90 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1BAB3C0(&this->fields.switchSkillUIList);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20208/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20351/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20113/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20350/*"img_friend_appendskill"*/, 0LL);
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
  if ( (byte_4AB0F95 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4AB0F95 = 1;
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
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v28, 0LL) > 0;
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
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = *(_QWORD *)&displaySkill;
        sub_1BAB3C0(v22 + 32);
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
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v25 + 1;
        *(_QWORD *)(v26 + 32) = *(_QWORD *)&displaySkill;
        sub_1BAB3C0(v26 + 32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v27 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v27 )
      {
        SwitchUIWidgetComponent__Set(v27, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1BAB678(switchSkillInfo, *(_QWORD *)&displaySkill);
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

  if ( (byte_4AB0F94 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    byte_4AB0F94 = 1;
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
          sub_1BAB680(supportInfoButton, v10);
        v14 = &skillButtonList->obj.klass + (int)v13;
        v15 = (UnityEngine_Behaviour_o *)v14[4];
        if ( !v15 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v14[4],
                             (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_1BAB678(supportInfoButton, v10);
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
  int32_t Kind_38072828; // w22
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
  struct SkillIconComponent_array *v154; // x8
  __int64 v155; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillIconComponent_array *v158; // x8
  __int64 v159; // x23
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v163; // x26
  System_String_o *v164; // x27
  int64_t v165; // x0
  UILabel_o *v166; // x26
  System_String_o *v167; // x27
  int64_t v168; // x0
  UILabel_o *v169; // x26
  System_String_o *v170; // x27
  int64_t v171; // x0
  Il2CppObject *v172; // x0
  struct QuestRestrictionInfo_o *v173; // x26
  _BOOL4 IsRecommendFollower_k__BackingField; // w27
  BalanceConfig_c *v175; // x0
  __int64 v176; // x9
  struct BalanceConfig_StaticFields *v177; // x8
  System_String_o **v178; // x10
  LocalizationManager_c *v179; // x0
  Il2CppObject *v180; // x0
  _BOOL4 v181; // w26
  BalanceConfig_c *v182; // x0
  bool v183; // zf
  __int64 v184; // x10
  Il2CppObject *v185; // x0
  _BOOL4 v186; // w26
  BalanceConfig_c *v187; // x0
  System_String_o *v188; // x23
  System_String_o *v189; // x0
  bool IsHideSupport; // w0
  const MethodInfo *v191; // x1
  UIRangeLabel_o *v192; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *v194; // x25
  UnityEngine_Object_o *v195; // x23
  const MethodInfo *v196; // x1
  struct ServantNpCommandCardComponent_o *v197; // x8
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v200; // w24
  int v201; // w23
  FollowerSelectItemListViewItemDraw_o *v202; // x1
  int v203; // w8
  __int64 v204; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v206; // w25
  System_String_o *v207; // x23
  __int64 v208; // x2
  __int64 v209; // x3
  __int64 v210; // x4
  Il2CppObject *v211; // x0
  UILabel_o *campaignLabel; // x24
  const MethodInfo *v213; // x1
  FollowerSelectItemListViewItemDraw_o *v214; // x1
  bool activeSelf; // w8
  float v216; // s8
  bool v217; // w8
  float v218; // s9
  UnityEngine_GameObject_o *v219; // x0
  UnityEngine_GameObject_o *v220; // x0
  UnityEngine_Object_o *v221; // x23
  const MethodInfo *v222; // x1
  const MethodInfo *v223; // x2
  const MethodInfo *v224; // x1
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v227; // w24
  const MethodInfo *v228; // x1
  int32_t Rarity; // w25
  struct UISprite_o *v230; // x8
  __int64 v231; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v233; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  const MethodInfo *v235; // x3
  struct SkillIconComponent_array *v236; // x8
  __int64 v237; // x8
  struct SkillInfo_array *v238; // x11
  int v239; // w9
  unsigned __int64 v240; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v242; // x14
  __int64 v243; // x23
  __int64 v244; // x25
  unsigned __int64 v245; // x26
  struct SkillInfo_array *v246; // x8
  struct UnityEngine_GameObject_array *v247; // x9
  int32_t *v248; // x27
  struct SkillIconComponent_array *v249; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v251; // x8
  struct SkillIconComponent_array *v252; // x8
  struct UIIconLabel_array *v253; // x8
  struct SkillIconComponent_array *v254; // x8
  __int64 v255; // x9
  int32_t v256; // w8
  bool v257; // w1
  __int64 v258; // x8
  _QWORD *v259; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v261; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *v263; // x8
  __int64 v264; // x8
  struct SkillInfo_array *v265; // x11
  int v266; // w9
  signed __int64 v267; // x10
  unsigned __int64 v268; // x14
  SkillInfo_o *v269; // x14
  unsigned __int64 v270; // x23
  signed __int64 v271; // x25
  struct SkillInfo_array *v272; // x8
  struct UnityEngine_GameObject_array *v273; // x9
  int32_t *v274; // x27
  struct UICommonButton_array *skillButtonList; // x9
  int v276; // w8
  struct UnityEngine_GameObject_array *v277; // x9
  struct SkillIconComponent_array *v278; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v280; // x8
  struct SkillIconComponent_array *v281; // x8
  struct UIIconLabel_array *v282; // x8
  struct SkillIconComponent_array *v283; // x8
  int32_t v284; // w8
  bool v285; // w1
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
  __int64 v324; // x9
  UnityEngine_GameObject_o *v325; // x24
  BalanceConfig_c *v326; // x8
  UISprite_o *classBoardBackSprite; // x24
  UnityEngine_GameObject_o *v328; // x24
  FollowerSelectItemListViewItemDraw_c *v329; // x8
  UnityEngine_GameObject_o *v330; // x0
  UnityEngine_GameObject_o *v331; // x0
  float v332; // s0
  float v333; // s8
  float v334; // s0
  float v335; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v338; // s10
  UnityEngine_GameObject_o *v339; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v342; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v344; // x22
  __int64 v345; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *typeTextSprite; // x23
  int32_t v348; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v350; // w22
  QuestPhaseEntity_o *v351; // x0
  QuestPhaseEntity_o *v352; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v354; // x23
  __int64 v355; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v356; // x21
  FollowerSelectItemListViewItemDraw_o *v357; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v360; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  Il2CppObject *v364; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v368; // s0
  float v369; // s8
  FollowerSelectItemListViewItemDraw_o *v370; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int64_t v375; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v378; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v383; // w21
  System_String_o *v384; // x0
  System_String_o *v385; // x0
  System_String_o *v386; // x0
  FollowerSelectItemListViewItemDraw_o *v387; // x0
  FollowerSelectItemListViewItem_o *v388; // x1
  const MethodInfo *v389; // x2
  int v390; // [xsp+18h] [xbp-C8h]
  System_String_o *v391; // [xsp+20h] [xbp-C0h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v393; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v395; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v404; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v405; // 0:x0.16
  UnityEngine_Color_o v406; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v407; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4AB0F91 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, item);
    sub_1BAB41C(&BalanceConfig_TypeInfo, v9);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1BAB41C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_1BAB41C(&DataManager_TypeInfo, v18);
    sub_1BAB41C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1BAB41C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1BAB41C(&FollowerRootComponent_TypeInfo, v22);
    sub_1BAB41C(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_1BAB41C(&Grade_TypeInfo, v24);
    sub_1BAB41C(&int_TypeInfo, v25);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v29);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v30);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1BAB41C(&OptionManager_TypeInfo, v32);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_1BAB41C(&SkillInfo___TypeInfo, v36);
    sub_1BAB41C(&TitleInfoControl_TypeInfo, v37);
    sub_1BAB41C(&StringLiteral_3770/*"COMMON_NO_ENTRY"*/, v38);
    sub_1BAB41C(&StringLiteral_6433/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_1BAB41C(&StringLiteral_6412/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_1BAB41C(&StringLiteral_11627/*"SERVANT_HIDE_NAME"*/, v41);
    sub_1BAB41C(&StringLiteral_9328/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_1BAB41C(&StringLiteral_6413/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_1BAB41C(&StringLiteral_6370/*"FFFFFF"*/, v44);
    sub_1BAB41C(&StringLiteral_9329/*"NP_HIDE_NAME"*/, v45);
    sub_1BAB41C(&StringLiteral_11523/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1BAB41C(&StringLiteral_13334/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_1BAB41C(&StringLiteral_9330/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_1BAB41C(&StringLiteral_6426/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_1BAB41C(&StringLiteral_6411/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_1BAB41C(&StringLiteral_17515/*"btn_bg_29_2"*/, v51);
    sub_1BAB41C(&StringLiteral_20220/*"icon_support_01"*/, v52);
    sub_1BAB41C(&StringLiteral_9333/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1BAB41C(&StringLiteral_20337/*"img_frames_mask01"*/, v54);
    sub_1BAB41C(&StringLiteral_12409/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v55);
    sub_1BAB41C(&StringLiteral_12410/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v56);
    sub_1BAB41C(&StringLiteral_6425/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v57);
    sub_1BAB41C(&StringLiteral_6427/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v58);
    sub_1BAB41C(&StringLiteral_6410/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v59);
    sub_1BAB41C(&StringLiteral_18506/*"datalost_svt_select"*/, v60);
    sub_1BAB41C(&StringLiteral_6369/*"FFFF00"*/, v61);
    sub_1BAB41C(&StringLiteral_9303/*"NO_ENTRY_NAME"*/, v62);
    sub_1BAB41C(&StringLiteral_9327/*"NP_COLOR_NAME"*/, v63);
    sub_1BAB41C(&StringLiteral_16057/*"[{0}]+{1}[-]"*/, v64);
    sub_1BAB41C(&StringLiteral_1/*""*/, v65);
    sub_1BAB41C(&StringLiteral_20183/*"icon_friend"*/, v66);
    sub_1BAB41C(&StringLiteral_6414/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v67);
    sub_1BAB41C(&StringLiteral_20182/*"icon_follow"*/, v68);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_20379/*"img_listbg_02"*/, v69);
    byte_4AB0F91 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v395 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v393.fields.r = 0LL;
  *(_QWORD *)&v393.fields.b = 0LL;
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
    Kind_38072828 = Grade__GetKind_38072828(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_38072828, 0LL);
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
    *(_QWORD *)&v398.fields.currentCryptoKey = v84;
    *(_QWORD *)&v398.fields.fakeValue = v83;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                     v398,
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
                                                       (System_String_o *)StringLiteral_3770/*"COMMON_NO_ENTRY"*/,
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
            if ( (byte_4AB0F89 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_19082/*"error"*/, item);
              byte_4AB0F89 = 1;
              v99 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_230;
            v118 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_19082/*"error"*/;
            UILabel__set_text(playerNameLabel, *v118, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v119 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38616660((UIIconLabel_o *)this, 2, v119, 0, 0, 0LL, 0, 0, 0, 0LL);
            loginDataLabel = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v137 = LocalizationManager__Get((System_String_o *)StringLiteral_13334/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v138 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v145 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v138, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v137, v145, 0LL);
            if ( !loginDataLabel )
              goto LABEL_230;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            v146 = &StringLiteral_20183/*"icon_friend"*/;
            goto LABEL_188;
          case 2:
            v120 = v8->fields.playerNameLabel;
            if ( (byte_4AB0F89 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_19082/*"error"*/, item);
              byte_4AB0F89 = 1;
              v99 = *p_followerInfo;
            }
            if ( !v120 )
              goto LABEL_230;
            v121 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_19082/*"error"*/;
            UILabel__set_text(v120, *v121, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v122 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38616660((UIIconLabel_o *)this, 2, v122, 0, 0, 0LL, 0, 0, 0, 0LL);
            v139 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v140 = LocalizationManager__Get((System_String_o *)StringLiteral_13334/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
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
            v81 = (System_String_o *)StringLiteral_20379/*"img_listbg_02"*/;
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
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20220/*"icon_support_01"*/, 0LL);
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
            if ( (byte_4AB0F89 & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_19082/*"error"*/, item);
              byte_4AB0F89 = 1;
              v99 = *p_followerInfo;
            }
            if ( !v123 )
              goto LABEL_230;
            v124 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_19082/*"error"*/;
            UILabel__set_text(v123, *v124, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v125 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38616660((UIIconLabel_o *)this, 2, v125, 0, 0, 0LL, 0, 0, 0, 0LL);
            v142 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v143 = LocalizationManager__Get((System_String_o *)StringLiteral_13334/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v144 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v148 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v144, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v143, v148, 0LL);
            if ( !v142 )
              goto LABEL_230;
            UILabel__set_text(v142, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_230;
            v146 = &StringLiteral_20182/*"icon_follow"*/;
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
                                                       (System_String_o *)StringLiteral_9303/*"NO_ENTRY_NAME"*/,
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
      v8->fields.skillInfoList = (struct SkillInfo_array *)sub_1BAB4C4(SkillInfo___TypeInfo, skillIconList->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB3C0(&v8->fields.skillInfoList);
      v154 = v8->fields.skillIconList;
      if ( !v154 )
        goto LABEL_230;
      v155 = 0LL;
      while ( (int)v155 < (signed int)v154->max_length )
      {
        skillBaseList = v8->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v155 >= skillBaseList->max_length )
LABEL_762:
            sub_1BAB680(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v155];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v154 = v8->fields.skillIconList;
            ++v155;
            if ( v154 )
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
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)sub_1BAB4C4(
                                                                   SkillInfo___TypeInfo,
                                                                   appendSkillIconList->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB3C0(&v8->fields.appendSkillInfoList);
      v158 = v8->fields.appendSkillIconList;
      if ( !v158 )
        goto LABEL_230;
      v159 = 0LL;
      while ( (int)v159 < (signed int)v158->max_length )
      {
        appendSkillBaseList = v8->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_230;
        if ( (unsigned int)v159 >= appendSkillBaseList->max_length )
          goto LABEL_762;
        this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v159];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v158 = v8->fields.appendSkillIconList;
          ++v159;
          if ( v158 )
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
        LODWORD(v332) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        v333 = v332;
        LODWORD(v334) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
        if ( !this )
          goto LABEL_230;
        v335 = v334;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        v338 = LocalPositionX;
        v339 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v339, (float)(v335 * 0.5) + (float)(v333 + v338), 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
        if ( !this )
          goto LABEL_230;
        UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38072828, 0LL);
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
            v342 = 0;
LABEL_634:
            classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
            {
              if ( !v77 )
                goto LABEL_663;
              v345 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
              v344 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v404.fields.currentCryptoKey = v345;
              *(_QWORD *)&v404.fields.fakeValue = v344;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v404, 0LL) < 1
                || (v342 & 1) != 0
                || ServantLeaderInfo__IsHideSupport(v77, 0LL)
                || v7->fields._IsDataLost_k__BackingField )
              {
                goto LABEL_663;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
                goto LABEL_663;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
                v387 = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB938(this);
                FollowerSelectItemListViewItemDraw__setupMessageUI(v387, v388, v389);
                return;
              }
              typeTextSprite = this->fields.typeTextSprite;
              if ( !typeTextSprite )
                goto LABEL_663;
              v348 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
              if ( !v348 )
                goto LABEL_663;
              m_CancellationTokenSource = (int32_t)typeTextSprite->fields.m_CancellationTokenSource;
              if ( !m_CancellationTokenSource )
                goto LABEL_663;
              v350 = v348;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !this )
                goto LABEL_230;
              v351 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v350, m_CancellationTokenSource, 0LL);
              if ( v351 )
              {
                v352 = v351;
                this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !this )
                  goto LABEL_230;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
                v355 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
                v354 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
                v356 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v405.fields.currentCryptoKey = v355;
                *(_QWORD *)&v405.fields.fakeValue = v354;
                this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                                 v405,
                                                                 0LL);
                if ( !v356 )
                  goto LABEL_230;
                this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                 v356,
                                                                 (int32_t)this,
                                                                 (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_230;
                v357 = this;
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
                if ( !this )
                  goto LABEL_230;
                ServantClassCompatibilityIconComponent__SetIcon(
                  (ServantClassCompatibilityIconComponent_o *)this,
                  (int32_t)v357->fields.svtNameRangeLabel,
                  v352->fields.classIds,
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
              v360 = v8->fields.recommendedIconText;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_6427/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                               0LL);
              if ( !v360 )
                goto LABEL_230;
              UILabel__set_text(v360, (System_String_o *)this, 0LL);
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
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_230;
              this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)this,
                                                               (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
              entity = 0LL;
              if ( !this )
                goto LABEL_230;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                      &entity,
                      questRestrictionInfo->fields.eventId,
                      (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
                goto LABEL_692;
              v364 = entity;
              if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
              if ( TitleInfoControl__IsEnableEventShopButton_37633168((EventDetailEntity_o *)v364, 0LL) )
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
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
                this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( this )
                {
                  this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)this,
                                                                   (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
                  v375 = *p_followerInfo ? (*p_followerInfo)->fields.userId : 0LL;
                  if ( this )
                  {
                    UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                                  (EventBoostItemUsedMaster_o *)this,
                                  eventId,
                                  v375,
                                  0LL);
                    v378 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v378 = BalanceConfig_TypeInfo;
                    }
                    MaxFriendChocolateUse = v378->static_fields->MaxFriendChocolateUse;
                    v395 = MaxFriendChocolateUse;
                    if ( UsedCount )
                    {
                      if ( !v378->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v378);
                        MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                      }
                      v395 = MaxFriendChocolateUse - UsedCount->fields.count;
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
                      this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v395, 0LL);
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
                          v383 = v395;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          if ( v383 )
                          {
                            v384 = LocalizationManager__Get((System_String_o *)StringLiteral_6410/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v384, &color, 0LL);
                            v385 = LocalizationManager__Get((System_String_o *)StringLiteral_6411/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v385, &v393, 0LL);
                          }
                          else
                          {
                            v386 = LocalizationManager__Get((System_String_o *)StringLiteral_6414/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                            UnityEngine_ColorUtility__TryParseHtmlString(v386, &color, 0LL);
                            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                            if ( !this )
                              goto LABEL_230;
                            UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                            v393 = color;
                          }
                          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
                          if ( this )
                          {
                            UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                            if ( this )
                            {
                              UIWidget__set_color((UIWidget_o *)this, v393, 0LL);
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
                sub_1BAB678(this, item);
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
          LODWORD(v368) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_230;
          v369 = v368;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v370 = this;
          warningMessageWidth = (float)v8->fields.warningMessageWidth;
          if ( v369 <= warningMessageWidth )
          {
            if ( !byte_4AB0696 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, item);
              byte_4AB0696 = 1;
            }
            static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
            x = static_fields->oneVector.fields.x;
            y = static_fields->oneVector.fields.y;
            z = static_fields->oneVector.fields.z;
          }
          else
          {
            x = warningMessageWidth / v369;
            z = 1.0;
            y = 1.0;
          }
          if ( !v370 )
            goto LABEL_230;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v370, *(UnityEngine_Vector3_o *)&x, 0LL);
        }
        v342 = 1;
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
    v391 = v81;
    ServantFaceIconComponent__Set_38605024(
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
    v390 = (int)this;
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
        *(_QWORD *)&v399.fields.currentCryptoKey = v95;
        *(_QWORD *)&v399.fields.fakeValue = v94;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                         v399,
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
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v102 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
      v103 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
      v104 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v400.fields.currentCryptoKey = v102;
      *(_QWORD *)&v400.fields.fakeValue = v103;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                       v400,
                                                       0LL);
      if ( !v104 )
        goto LABEL_230;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v104, (int32_t)this, dispLimitCount, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v105 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v106 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
    v107 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
    v108 = (ServantLimitAddMaster_o *)v105;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v401.fields.currentCryptoKey = v106;
    *(_QWORD *)&v401.fields.fakeValue = v107;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                     v401,
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
          if ( (byte_4AB0F89 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_19082/*"error"*/, item);
            byte_4AB0F89 = 1;
            v109 = *p_followerInfo;
          }
          if ( !v127 )
            goto LABEL_230;
          v128 = v109 ? &v109->fields.userName : (System_String_o **)&StringLiteral_19082/*"error"*/;
          UILabel__set_text(v127, *v128, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v129 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38616660((UIIconLabel_o *)this, 2, v129, 0, 0, 0LL, 0, 0, 0, 0LL);
          v163 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v164 = LocalizationManager__Get((System_String_o *)StringLiteral_13334/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v165 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v172 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v165, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v164, v172, 0LL);
          if ( !v163 )
            goto LABEL_230;
          UILabel__set_text(v163, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20183/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v173 = v7->fields.questRestrictionInfo;
          if ( !v173 )
            goto LABEL_271;
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !this )
            goto LABEL_230;
          this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           v173->fields.questId,
                                                           (const MethodInfo_3163D90 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_230;
          LOBYTE(v173) = QuestEntity__HasFlag_39862760((QuestEntity_o *)this, 0x8000000LL, v173->fields.questPhase, 0LL);
LABEL_271:
          IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
          v175 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v175 = BalanceConfig_TypeInfo;
          }
          v176 = 212LL;
          if ( ((unsigned __int8)v173 & 1) != 0 )
            v176 = 664LL;
          if ( IsRecommendFollower_k__BackingField )
            v176 = 224LL;
          v177 = v175->static_fields;
          v178 = (System_String_o **)&StringLiteral_9327/*"NP_COLOR_NAME"*/;
          v179 = LocalizationManager_TypeInfo;
          if ( v390 > 1 )
            v178 = (System_String_o **)&StringLiteral_9333/*"NP_MAX_COLOR_NAME"*/;
LABEL_298:
          FollowerPointNpc = *(int32_t *)((char *)&v177->CriticalRateToAddByQuickFirstBonus + v176);
          v188 = *v178;
          if ( !v179->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v179);
          v189 = LocalizationManager__Get(v188, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v189, v110, 0LL);
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
          if ( (byte_4AB0F89 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_19082/*"error"*/, item);
            byte_4AB0F89 = 1;
            v109 = *p_followerInfo;
          }
          if ( !v130 )
            goto LABEL_230;
          v131 = v109 ? &v109->fields.userName : (System_String_o **)&StringLiteral_19082/*"error"*/;
          UILabel__set_text(v130, *v131, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v132 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38616660((UIIconLabel_o *)this, 2, v132, 0, 0, 0LL, 0, 0, 0, 0LL);
          v166 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v167 = LocalizationManager__Get((System_String_o *)StringLiteral_13334/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v168 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v180 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v168, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v167, v180, 0LL);
          if ( !v166 )
            goto LABEL_230;
          UILabel__set_text(v166, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          v181 = v7->fields._IsRecommendFollower_k__BackingField;
          v182 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v182 = BalanceConfig_TypeInfo;
          }
          v177 = v182->static_fields;
          v183 = !v181;
          v176 = 224LL;
          v184 = 216LL;
          goto LABEL_293;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_230;
          v111 = StringLiteral_20379/*"img_listbg_02"*/;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20220/*"icon_support_01"*/, 0LL);
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
          v391 = (System_String_o *)v111;
          FollowerPointNpc = v112->static_fields->FollowerPointNpc;
          if ( *p_followerInfo && (*p_followerInfo)->fields.type == 3 )
          {
            v114 = (System_String_o **)&StringLiteral_9333/*"NP_MAX_COLOR_NAME"*/;
            if ( v390 <= 1 )
              v114 = (System_String_o **)&StringLiteral_9327/*"NP_COLOR_NAME"*/;
            v115 = *v114;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = LocalizationManager__Get(v115, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v116 = LocalizationManager__Get((System_String_o *)StringLiteral_9328/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            v110 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NP_HIDE_NAME"*/, 0LL);
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
          if ( (byte_4AB0F89 & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_19082/*"error"*/, item);
            byte_4AB0F89 = 1;
            v109 = *p_followerInfo;
          }
          if ( !v133 )
            goto LABEL_230;
          v134 = v109 ? &v109->fields.userName : (System_String_o **)&StringLiteral_19082/*"error"*/;
          UILabel__set_text(v133, *v134, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v135 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
          if ( !this )
            goto LABEL_230;
          UIIconLabel__Set_38616660((UIIconLabel_o *)this, 2, v135, 0, 0, 0LL, 0, 0, 0, 0LL);
          v169 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v170 = LocalizationManager__Get((System_String_o *)StringLiteral_13334/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v171 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
          v185 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v171, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v170, v185, 0LL);
          if ( !v169 )
            goto LABEL_230;
          UILabel__set_text(v169, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20182/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_230;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v186 = v7->fields._IsRecommendFollower_k__BackingField;
          v187 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v187 = BalanceConfig_TypeInfo;
          }
          v177 = v187->static_fields;
          v183 = !v186;
          v176 = 224LL;
          v184 = 664LL;
LABEL_293:
          if ( v183 )
            v176 = v184;
          v179 = LocalizationManager_TypeInfo;
          if ( v390 <= 1 )
            v178 = (System_String_o **)&StringLiteral_9327/*"NP_COLOR_NAME"*/;
          else
            v178 = (System_String_o **)&StringLiteral_9333/*"NP_MAX_COLOR_NAME"*/;
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
    v192 = v8->fields.svtNameRangeLabel;
    if ( IsHideSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11627/*"SERVANT_HIDE_NAME"*/,
                                                       0LL);
      if ( !v192 )
        goto LABEL_230;
      UIRangeLabel__Set(v192, (System_String_o *)this, 0LL, 1, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_230;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !*p_followerInfo || (*p_followerInfo)->fields.type != 4 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9330/*"NP_HIDE_NAME_LEVEL"*/,
                                                         0LL);
        v91 = this;
      }
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v7, v191);
      if ( !v192 )
        goto LABEL_230;
      UIRangeLabel__Set(v192, (System_String_o *)this, 0LL, 1, 0, 0LL);
    }
    if ( !tdInfo )
      goto LABEL_230;
    strengthStatus = tdInfo->fields.strengthStatus;
    if ( ServantLeaderInfo__IsHideSupport(v77, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v77, 0LL) )
      strengthStatus = 0;
    v194 = v8->fields.svtNpRangeLabel;
    this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
    if ( !v194 )
      goto LABEL_230;
    UIRangeLabel__Set(v194, (System_String_o *)v91, (System_String_o *)this, 0, 0, 0LL);
    v195 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v195, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
      v197 = v8->fields.svtNpCommandCard;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v197 )
          goto LABEL_230;
        ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
      }
      else
      {
        if ( !v197 )
          goto LABEL_230;
        ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
      }
    }
    FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(v7, v196);
    friendPointCampaignEntity = v7->fields.friendPointCampaignEntity;
    v200 = FriendPointUpVal;
    v201 = friendPointCampaignEntity ? friendPointCampaignEntity->fields.value : 0;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
    if ( !this )
      goto LABEL_230;
    UIIconLabel__Set_38616660((UIIconLabel_o *)this, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
    if ( v200 > 0 || v201 >= 1 )
    {
      if ( v201 <= 0 )
        v203 = 1000;
      else
        v203 = v201;
      v204 = 274877907LL * (v203 * v200 + (v203 - 1000) * FollowerPointNpc);
      friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      v206 = (v204 >> 38) + ((unsigned __int64)v204 >> 63);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v207 = LocalizationManager__Get((System_String_o *)StringLiteral_6433/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
      TimesToRestart_k__BackingField = v206;
      v211 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v208, v209, v210);
      this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v207, v211, 0LL);
      if ( !friendPointData2Label )
        goto LABEL_230;
      v202 = this;
      this = friendPointData2Label;
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_230;
      v202 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)this, (System_String_o *)v202, 0LL);
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
                                                       v213);
      if ( !campaignLabel )
        goto LABEL_230;
      v214 = this;
    }
    else
    {
      if ( !campaignLabel )
        goto LABEL_230;
      v214 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(campaignLabel, (System_String_o *)v214, 0LL);
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
    v216 = activeSelf ? -3.0 : 39.0;
    if ( !this )
      goto LABEL_230;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_230;
    v217 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
    v218 = v217 ? -22.0 : 20.0;
    if ( !this )
      goto LABEL_230;
    v219 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v219, v216, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
    if ( !this )
      goto LABEL_230;
    v220 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v220, v218, 0LL);
    v221 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v221, 0LL, 0LL) )
    {
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v7, v222) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v224);
        if ( !this )
          goto LABEL_230;
        baseButton = this->fields.baseButton;
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v402.fields.currentCryptoKey = baseButton;
        *(_QWORD *)&v402.fields.fakeValue = servantFaceIcon;
        v227 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v402, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v228);
        if ( !this )
          goto LABEL_230;
        Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
      }
      else
      {
        Rarity = -1;
        v227 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v224);
      if ( !this )
        goto LABEL_230;
      if ( this->fields.typeTextSprite )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                         v7,
                                                         (const MethodInfo *)item);
        if ( !this )
          goto LABEL_230;
        v230 = this->fields.typeTextSprite;
        if ( !v230 )
          goto LABEL_230;
        topAnchor = v230->fields.topAnchor;
        v231 = *(_QWORD *)&v230->fields.updateAnchors;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v403.fields.currentCryptoKey = topAnchor;
        *(_QWORD *)&v403.fields.fakeValue = v231;
        v233 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v403, 0LL);
      }
      else
      {
        v233 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
      if ( !this )
        goto LABEL_230;
      EventUpValIconComponent__Set(
        (EventUpValIconComponent_o *)this,
        v7->fields.eventUpValItemList,
        v227,
        Rarity,
        v233,
        0LL);
    }
    p_skillInfoList = &v8->fields.skillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                     v7,
                                                     &v8->fields.skillInfoList,
                                                     v223);
    v236 = v8->fields.skillIconList;
    if ( !v236 )
      goto LABEL_230;
    v237 = *(_QWORD *)&v236->max_length;
    if ( v237 << 32 >= 1 )
    {
      v238 = *p_skillInfoList;
      v239 = 0;
      v240 = 0LL;
      while ( v238 )
      {
        max_length = v238->max_length;
        if ( (__int64)v240 < (int)max_length )
        {
          if ( v240 >= max_length )
            goto LABEL_762;
          v242 = (*p_skillInfoList)->m_Items[v240];
          if ( v242 && v242->fields.id >= 1 )
            v239 = v240 + 1;
        }
        if ( (__int64)++v240 >= (int)v237 )
          goto LABEL_398;
      }
      goto LABEL_230;
    }
    v239 = 0;
LABEL_398:
    if ( (int)v237 >= 1 )
    {
      v243 = v239;
      v244 = 4LL;
      do
      {
        v245 = v244 - 4;
        if ( v244 - 4 >= v243 )
        {
          v251 = v8->fields.skillBaseList;
          if ( !v251 )
            goto LABEL_230;
          if ( v245 >= v251->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v251->obj.klass + v244);
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v246 = *p_skillInfoList;
          if ( !*p_skillInfoList )
            goto LABEL_230;
          if ( v245 >= v246->max_length )
            goto LABEL_762;
          v247 = v8->fields.skillBaseList;
          if ( !v247 )
            goto LABEL_230;
          if ( v245 >= v247->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v247->obj.klass + v244);
          if ( !this )
            goto LABEL_230;
          v248 = (int32_t *)*((_QWORD *)&v246->obj.klass + v244);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v248 )
              v248[4] = 0;
            v249 = v8->fields.skillIconList;
            if ( !v249 )
              goto LABEL_230;
            if ( v245 >= v249->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v249->obj.klass + v244);
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_230;
            if ( v245 >= skillLevelIconLabelList->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v244);
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v252 = v8->fields.skillIconList;
            if ( !v252 )
              goto LABEL_230;
            if ( v245 >= v252->max_length )
              goto LABEL_762;
            if ( !v248 )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v252->obj.klass + v244);
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__Set_38615856((SkillIconComponent_o *)this, v248[4], v248[5], v248[12], v248[13], 0LL);
            v253 = v8->fields.skillLevelIconLabelList;
            if ( !v253 )
              goto LABEL_230;
            if ( v245 >= v253->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v253->obj.klass + v244);
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38616660((UIIconLabel_o *)this, 48, v248[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v254 = v8->fields.skillIconList;
        if ( !v254 )
          goto LABEL_230;
        v255 = v244 - 3;
        ++v244;
      }
      while ( v255 < (int)v254->max_length );
    }
    v256 = v8->fields.displaySkill;
    if ( v256 == 2 )
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
      v258 = *(_QWORD *)&this->fields.m_CachedPtr;
      v259 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v258 )
        goto LABEL_230;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v258 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
      }
      else
      {
        v261 = v258 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v261 + 32) = item;
        sub_1BAB3C0(v261 + 32);
      }
    }
    else
    {
      if ( v256 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v257 = 0;
      }
      else
      {
        if ( v256 )
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
        v257 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v257, 0LL);
    }
LABEL_447:
    p_appendSkillInfoList = &v8->fields.appendSkillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                     v7,
                                                     &v8->fields.appendSkillInfoList,
                                                     v7->fields.isNpc,
                                                     v235);
    v263 = v8->fields.appendSkillIconList;
    if ( !v263 )
      goto LABEL_230;
    v264 = *(_QWORD *)&v263->max_length;
    if ( v264 << 32 < 1 )
    {
      v266 = 0;
    }
    else
    {
      v265 = *p_appendSkillInfoList;
      v266 = 0;
      v267 = 0LL;
      do
      {
        if ( v265 )
        {
          v268 = v265->max_length;
          if ( v267 < (int)v268 )
          {
            if ( v267 >= v268 )
              goto LABEL_762;
            v269 = (*p_appendSkillInfoList)->m_Items[v267];
            if ( v269 && v269->fields.id >= 1 )
              v266 = v267 + 1;
          }
        }
        ++v267;
      }
      while ( v267 < (int)v264 );
    }
    if ( (int)v264 >= 1 )
    {
      v270 = 0LL;
      v271 = v266;
      do
      {
        if ( (__int64)v270 >= v271 )
        {
          v280 = v8->fields.appendSkillBaseList;
          if ( !v280 )
            goto LABEL_230;
          if ( v270 >= v280->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)v280->m_Items[v270];
          if ( !this )
            goto LABEL_230;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v272 = *p_appendSkillInfoList;
          if ( !*p_appendSkillInfoList )
            goto LABEL_230;
          if ( v270 >= v272->max_length )
            goto LABEL_762;
          v273 = v8->fields.appendSkillBaseList;
          if ( !v273 )
            goto LABEL_230;
          if ( v270 >= v273->max_length )
            goto LABEL_762;
          this = (FollowerSelectItemListViewItemDraw_o *)v273->m_Items[v270];
          if ( !this )
            goto LABEL_230;
          v274 = (int32_t *)v272->m_Items[v270];
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
            v276 = HIDWORD(skillButtonList->m_Items[143]);
            if ( v270 )
              v276 += LODWORD(skillButtonList->m_Items[144]) * v270;
            v277 = v8->fields.appendSkillBaseList;
            if ( !v277 )
              goto LABEL_230;
            if ( v270 >= v277->max_length )
              goto LABEL_762;
            GameObjectExtensions__SetLocalPositionX(v277->m_Items[v270], (float)v276, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v274 )
              v274[4] = 0;
            v278 = v8->fields.appendSkillIconList;
            if ( !v278 )
              goto LABEL_230;
            if ( v270 >= v278->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)v278->m_Items[v270];
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
            if ( !appendSkillLevelIconLabelList )
              goto LABEL_230;
            if ( v270 >= appendSkillLevelIconLabelList->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v270];
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v281 = v8->fields.appendSkillIconList;
            if ( !v281 )
              goto LABEL_230;
            if ( v270 >= v281->max_length )
              goto LABEL_762;
            if ( !v274 )
              goto LABEL_230;
            this = (FollowerSelectItemListViewItemDraw_o *)v281->m_Items[v270];
            if ( !this )
              goto LABEL_230;
            SkillIconComponent__Set_38615856((SkillIconComponent_o *)this, v274[4], v274[5], v274[12], v274[13], 0LL);
            v282 = v8->fields.appendSkillLevelIconLabelList;
            if ( !v282 )
              goto LABEL_230;
            if ( v270 >= v282->max_length )
              goto LABEL_762;
            this = (FollowerSelectItemListViewItemDraw_o *)v282->m_Items[v270];
            if ( !this )
              goto LABEL_230;
            UIIconLabel__Set_38616660((UIIconLabel_o *)this, 48, v274[5], 0, 0, 0LL, 0, 0, 0, 0LL);
          }
        }
        v283 = v8->fields.appendSkillIconList;
        if ( !v283 )
          goto LABEL_230;
        ++v270;
      }
      while ( (__int64)v270 < (int)v283->max_length );
    }
    v284 = v8->fields.displaySkill;
    if ( v284 == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      v81 = v391;
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
      v286 = *(_QWORD *)&this->fields.m_CachedPtr;
      v287 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v286 )
        goto LABEL_230;
      v288 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v288 >= *(_DWORD *)(v286 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v287[4] + 192LL) + 112LL));
      }
      else
      {
        v289 = v286 + 8 * v288;
        LODWORD(this->fields.m_CancellationTokenSource) = v288 + 1;
        *(_QWORD *)(v289 + 32) = item;
        sub_1BAB3C0(v289 + 32);
      }
    }
    else
    {
      v81 = v391;
      if ( v284 == 1 )
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
        v285 = 1;
      }
      else
      {
        if ( v284 )
          goto LABEL_520;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_230;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_230;
        v285 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v285, 0LL);
    }
    if ( v8->fields.displaySkill == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_230;
      switchSkillInfo = v8->fields.switchSkillInfo;
      this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)this,
                                                       (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !switchSkillInfo )
        goto LABEL_230;
      SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
    }
LABEL_520:
    v291 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v291, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
      v292 = v8->fields.svtCommandCardList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v292 )
          goto LABEL_230;
        ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
      }
      else
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, (const MethodInfo *)item);
        commandCardParam = v77->fields.commandCardParam;
        v295 = SvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v77, 0LL);
        if ( !v292 )
          goto LABEL_230;
        ServantCommandCardListComponent__Set_38594276(
          v292,
          v295,
          commandCardParam,
          (System_Int32_array *)this,
          2,
          1,
          0LL);
        v81 = v391;
      }
    }
    v296 = (UnityEngine_Object_o *)v8->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v296, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*p_followerInfo )
        goto LABEL_230;
      pushUserSvtId = (*p_followerInfo)->fields.pushUserSvtId;
      v298 = pushUserSvtId && pushUserSvtId == v77->fields.userSvtId;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
      if ( !this )
        goto LABEL_230;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_230;
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
          AtlasManager__SetPartyOrganizationImage(v301, (System_String_o *)StringLiteral_18506/*"datalost_svt_select"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          v406.fields.r = 1.0;
          v406.fields.g = 1.0;
          v406.fields.b = 1.0;
          v406.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v406, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
        }
        else
        {
          if ( v7->fields._TimesToRestart_k__BackingField < 1 )
            goto LABEL_565;
          v302 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v302, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20337/*"img_frames_mask01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_230;
          v407.fields.a = 0.62353;
          v407.fields.r = 0.0;
          v407.fields.g = 0.0;
          v407.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v407, 0LL);
          v303 = v8->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v304 = LocalizationManager__Get((System_String_o *)StringLiteral_11523/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
          v308 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v305, v306, v307);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v304, v308, 0LL);
          if ( !v303 )
            goto LABEL_230;
          UILabel__set_text(v303, (System_String_o *)this, 0LL);
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
        v316 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
          v313 = (Il2CppObject **)&StringLiteral_6369/*"FFFF00"*/;
        else
          v313 = (Il2CppObject **)&StringLiteral_6370/*"FFFFFF"*/;
        v314 = *v313;
        TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
        v315 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v310, v311, v312);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_62062500(
                                                         (System_String_o *)StringLiteral_16057/*"[{0}]+{1}[-]"*/,
                                                         v314,
                                                         v315,
                                                         0LL);
        if ( !v8->fields.openClassBoardNumLabel )
          goto LABEL_230;
        v316 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
      }
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v316, 0LL);
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
        v321 = v8->fields.classBoardOpenButtonLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12410/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                           0LL);
          if ( !v321 )
            goto LABEL_230;
          UILabel__set_text(v321, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_230;
          v322 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v324 = 36LL;
        }
        else
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12409/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                           0LL);
          if ( !v321 )
            goto LABEL_230;
          UILabel__set_text(v321, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_230;
          v322 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v323 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v324 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v322,
          *(float *)((char *)&v323->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v324),
          0LL);
      }
      if ( ConstantMaster__IsFLAG20240804(0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
        if ( !this )
          goto LABEL_230;
        v325 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v326 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v326 = BalanceConfig_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition_34019596(v325, v326->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
        classBoardBackSprite = v8->fields.classBoardBackSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17515/*"btn_bg_29_2"*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
        if ( !this )
          goto LABEL_230;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
        if ( !this )
          goto LABEL_230;
        v328 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v329 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
          v329 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition_34019596(v328, v329->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
        if ( !this )
          goto LABEL_230;
        v330 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(
          v330,
          BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
          0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
        if ( !this )
          goto LABEL_230;
        v331 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(
          v331,
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
  if ( (byte_4AB0F93 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, item);
    byte_4AB0F93 = 1;
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
      sub_1BAB678(gameObject, v6);
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
  UnityEngine_GameObject_o *v19; // x0
  int v20; // w8
  UnityEngine_GameObject_o *v21; // x0
  bool v22; // w1
  UnityEngine_GameObject_o *v23; // x0
  struct FollowerInfo_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x0

  v4 = this;
  if ( (byte_4AB0F92 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&OptionManager_TypeInfo, v6);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BAB41C(&StringLiteral_116/*" "*/, v7);
    byte_4AB0F92 = 1;
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
      v10 = userRecommendSupportHash->m_Items[0];
      if ( !v10 )
        goto LABEL_52;
      adviceMessageIds = v10->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_52;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_44;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v12 = item->fields.followerInfo;
      if ( !v12 )
        goto LABEL_52;
      v13 = v12->fields.userRecommendSupportHash;
      if ( !v13 )
        goto LABEL_52;
      if ( v13->max_length )
      {
        v14 = v13->m_Items[0];
        if ( !v14 || !this )
          goto LABEL_52;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v14->fields.adviceMessageIds,
                               0LL);
        v16 = System_String__Join((System_String_o *)StringLiteral_116/*" "*/, ConvertMessageToId, 0LL);
        if ( !System_String__IsNullOrEmpty(v16, 0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
          if ( !this )
            goto LABEL_52;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
          if ( !this )
            goto LABEL_52;
          message = v16;
          goto LABEL_22;
        }
LABEL_44:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( this )
        {
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v25, -19.0, 0LL);
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
                v22 = 1;
LABEL_49:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v22, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, 10.0, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
                if ( this )
                {
                  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  v20 = 1113849856;
                  goto LABEL_51;
                }
              }
            }
          }
        }
LABEL_52:
        sub_1BAB678(this, item);
      }
    }
    sub_1BAB680(this, item);
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
        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v23, -19.0, 0LL);
        v24 = item->fields.followerInfo;
        if ( !v24 )
          goto LABEL_52;
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
        if ( !this )
          goto LABEL_52;
        message = v24->fields.message;
        break;
      case 2:
      case 5:
        goto LABEL_44;
      case 3:
      case 4:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( !this )
          goto LABEL_52;
        v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v21, -16.0, 0LL);
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
        v22 = 0;
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
            v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v20 = 1112801280;
LABEL_51:
            GameObjectExtensions__SetLocalPositionY(v19, *(float *)&v20, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_52;
  }
}