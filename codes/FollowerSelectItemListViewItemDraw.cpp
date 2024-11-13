void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  FollowerSelectItemListViewItemDraw_c *v3; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B11385 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewItemDraw_TypeInfo, v1, v2);
    byte_4B11385 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BD22F0;
  v3 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BD2600;
  static_fields = v3->static_fields;
  *(_QWORD *)&static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 0x4130000041400000LL;
  static_fields->CLASS_BOARD_LABEL_POS = (struct UnityEngine_Vector2_o)0x41300000BF800000LL;
}


void __fastcall FollowerSelectItemListViewItemDraw___ctor(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  struct UnityEngine_GameObject_array *v11; // x0
  struct SkillIconComponent_array *v12; // x0
  struct UIIconLabel_array *v13; // x0
  struct UnityEngine_GameObject_array *v14; // x0
  struct SkillIconComponent_array *v15; // x0
  struct UIIconLabel_array *v16; // x0

  if ( (byte_4B11384 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v6, v7);
    sub_1BCA7E0(&UIIconLabel___TypeInfo, v8, v9);
    byte_4B11384 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v10->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v11;
  sub_1BCA784(&this->fields.skillBaseList, v11);
  v12 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v12;
  sub_1BCA784(&this->fields.skillIconList, v12);
  v13 = (struct UIIconLabel_array *)sub_1BCA888(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1BCA784(&this->fields.skillLevelIconLabelList, v13);
  v14 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v14;
  sub_1BCA784(&this->fields.appendSkillBaseList, v14);
  v15 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v15;
  sub_1BCA784(&this->fields.appendSkillIconList, v15);
  v16 = (struct UIIconLabel_array *)sub_1BCA888(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v16;
  sub_1BCA784(&this->fields.appendSkillLevelIconLabelList, v16);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__Awake(
        FollowerSelectItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  UISprite_o *skillIconSprite; // x20

  if ( (byte_4B1137E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_20392/*"icon_skill_mini"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20539/*"img_friend_skill"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20291/*"icon_append_mini"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20538/*"img_friend_appendskill"*/, v15, v16);
    byte_4B1137E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v17;
  sub_1BCA784(&this->fields.switchSkillUIList, v17);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20392/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20539/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20291/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20538/*"img_friend_appendskill"*/, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v16; // w9
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v18; // x20
  __int64 v19; // x21
  _BOOL4 v20; // w8
  int32_t v21; // w9
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  SwitchUIWidgetComponent_o *v30; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  v5 = displaySkill;
  if ( (byte_4B11383 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill, item);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B11383 = 1;
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
  v16 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v16;
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
    v19 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&displaySkill);
    *(_QWORD *)&v31.fields.currentCryptoKey = v19;
    *(_QWORD *)&v31.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL) > 0;
  }
  else
  {
    v20 = 0;
  }
  v21 = this->fields.displaySkill;
  if ( v21 == 2 )
  {
    if ( v20 )
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
      v22 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v22 )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = *(_QWORD *)&displaySkill;
        sub_1BCA784(v25 + 32, *(_QWORD *)&displaySkill);
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
      v26 = *(_QWORD *)&switchSkillInfo->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v26 )
        goto LABEL_52;
      v28 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&displaySkill,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * v28;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v28 + 1;
        *(_QWORD *)(v29 + 32) = *(_QWORD *)&displaySkill;
        sub_1BCA784(v29 + 32, *(_QWORD *)&displaySkill);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v30 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v30 )
      {
        SwitchUIWidgetComponent__Set(v30, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1BCAA3C(switchSkillInfo, *(_QWORD *)&displaySkill);
  }
  if ( v21 != 1 )
  {
    if ( v21 )
      return;
    if ( !v20 )
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
  if ( v20 )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__SetInput(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        bool isInput,
        bool isTutorial,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Behaviour_o *supportInfoButton; // x0
  __int64 v11; // x1
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v14; // w24
  Il2CppClass **v15; // x8
  UnityEngine_Behaviour_o *v16; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4B11382 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item, isInput);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B11382 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      v14 = 0;
      do
      {
        if ( v14 >= skillButtonList->max_length )
          sub_1BCAA44(supportInfoButton, v11);
        v15 = &skillButtonList->obj.klass + (int)v14;
        v16 = (UnityEngine_Behaviour_o *)v15[4];
        if ( !v16 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v15[4],
                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))v16->klass[1]._1.namespaze)(
          v16,
          1LL,
          v16->klass[1]._1.byval_arg.data);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))v16->klass[1]._1.implementedInterfaces)(
          v16,
          0LL,
          0LL,
          v16->klass[1]._1.interfaceOffsets);
        UnityEngine_Behaviour__set_enabled(v16, isInput, 0LL);
        if ( !Component_object )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, 1, 0LL);
        if ( max_length == ++v14 )
          goto LABEL_19;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_18:
      sub_1BCAA3C(supportInfoButton, v11);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v133; // w9
  UnityEngine_Object_o *rangeSprite; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v136; // x1
  FollowerInfo_o *followerInfo; // x22
  ServantLeaderInfo_o *v138; // x21
  int32_t Kind_38402548; // w29
  System_String_o *FollowerBgImage; // x0
  __int64 v141; // x1
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  System_String_o *v143; // x26
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v145; // x24
  __int64 v146; // x25
  struct FollowerInfo_o *v147; // x8
  const MethodInfo *v148; // x2
  const MethodInfo *v149; // x2
  System_String_o *name; // x27
  int v151; // w24
  FollowerSelectItemListViewItemDraw_o *v152; // x22
  int32_t dispLimitCount; // w25
  __int64 v154; // x1
  TreasureDvcInfo_o *v155; // x27
  __int64 v156; // x28
  __int64 v157; // x29
  bool v158; // w8
  __int64 v159; // x1
  UIRangeLabel_o *v160; // x24
  const MethodInfo *v161; // x2
  bool v162; // w1
  __int64 v163; // x1
  __int64 v164; // x1
  Il2CppObject *Master_object; // x0
  __int64 v166; // x1
  __int64 v167; // x23
  __int64 v168; // x29
  ServantLimitImageMaster_o *v169; // x28
  Il2CppObject *v170; // x0
  __int64 v171; // x1
  __int64 v172; // x23
  __int64 v173; // x29
  ServantLimitAddMaster_o *v174; // x28
  Il2CppObject *OverwriteTDName; // x25
  int v176; // w26
  __int64 v177; // x24
  __int64 v178; // x1
  BalanceConfig_c *v179; // x0
  int32_t FollowerPointNpc; // w27
  __int64 v181; // x1
  System_String_o **v182; // x8
  System_String_o *v183; // x23
  System_String_o *v184; // x24
  UILabel_o *v185; // x24
  UIIconLabel_o *v186; // x24
  __int64 v187; // x1
  UILabel_o *v188; // x24
  System_String_o *v189; // x23
  int64_t v190; // x0
  Il2CppObject *v191; // x0
  __int64 *v192; // x8
  UILabel_o *v193; // x24
  UIIconLabel_o *v194; // x24
  __int64 v195; // x1
  UILabel_o *v196; // x24
  System_String_o *v197; // x23
  int64_t v198; // x0
  Il2CppObject *v199; // x0
  UILabel_o *v200; // x24
  UIIconLabel_o *v201; // x24
  __int64 v202; // x1
  UILabel_o *v203; // x24
  System_String_o *v204; // x23
  int64_t v205; // x0
  Il2CppObject *v206; // x0
  const MethodInfo *v207; // x2
  __int64 v208; // x1
  UIRangeLabel_o *v209; // x24
  __int64 v210; // x1
  UnityEngine_Object_o *v211; // x23
  __int64 v212; // x1
  UnityEngine_Object_o *v213; // x23
  struct SkillIconComponent_array *v214; // x8
  __int64 v215; // x0
  struct SkillIconComponent_array *v216; // x8
  __int64 v217; // x24
  struct UnityEngine_GameObject_array *v218; // x8
  struct SkillIconComponent_array *v219; // x8
  __int64 v220; // x0
  struct SkillIconComponent_array *v221; // x8
  __int64 v222; // x23
  struct UnityEngine_GameObject_array *v223; // x8
  __int64 v224; // x1
  UnityEngine_Object_o *v225; // x23
  UnityEngine_Object_o *v226; // x23
  UILabel_o *playerNameLabel; // x26
  UIIconLabel_o *playerLevelIconLabel; // x26
  __int64 v229; // x1
  UILabel_o *loginDataLabel; // x26
  System_String_o *v231; // x23
  int64_t LoginTime; // x0
  Il2CppObject *v233; // x0
  __int64 v234; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  bool HasFlag_40199512; // w26
  UILabel_o *v237; // x26
  UIIconLabel_o *v238; // x26
  __int64 v239; // x1
  UILabel_o *v240; // x26
  System_String_o *v241; // x23
  int64_t v242; // x0
  Il2CppObject *v243; // x0
  _BOOL4 v244; // w23
  BalanceConfig_c *v245; // x0
  struct BalanceConfig_StaticFields *v246; // x8
  bool v247; // zf
  __int64 v248; // x9
  __int64 v249; // x10
  UILabel_o *v250; // x26
  UIIconLabel_o *v251; // x26
  __int64 v252; // x1
  UILabel_o *v253; // x26
  System_String_o *v254; // x23
  int64_t v255; // x0
  Il2CppObject *v256; // x0
  _BOOL4 v257; // w23
  BalanceConfig_c *v258; // x0
  LocalizationManager_c *v259; // x0
  System_String_o **v260; // x10
  System_String_o *v261; // x23
  System_String_o *v262; // x0
  bool v263; // w1
  bool IsHideSupport; // w0
  __int64 v265; // x1
  UIRangeLabel_o *svtNameRangeLabel; // x24
  int32_t strengthStatus; // w24
  UIRangeLabel_o *svtNpRangeLabel; // x25
  __int64 v269; // x1
  UnityEngine_Object_o *svtNpCommandCard; // x23
  struct ServantNpCommandCardComponent_o *v271; // x8
  int32_t FriendPointUpVal; // w24
  int v273; // w25
  FollowerSelectItemListViewItemDraw_o *v274; // x1
  int v275; // w8
  __int64 v276; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v278; // w25
  System_String_o *v279; // x23
  Il2CppObject *v280; // x0
  UILabel_o *campaignLabel; // x24
  FollowerSelectItemListViewItemDraw_o *v282; // x1
  bool activeSelf; // w8
  float v284; // s8
  bool v285; // w8
  float v286; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v288; // x0
  __int64 v289; // x1
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v293; // w24
  int32_t Rarity; // w25
  struct UISprite_o *typeTextSprite; // x8
  __int64 v296; // x26
  struct UIRect_AnchorPoint_o *topAnchor; // x27
  int32_t v298; // w4
  struct SkillInfo_array **p_skillInfoList; // x24
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v301; // x8
  struct SkillInfo_array *v302; // x11
  int v303; // w9
  unsigned __int64 v304; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v306; // x14
  __int64 v307; // x23
  __int64 v308; // x25
  unsigned __int64 v309; // x26
  struct SkillInfo_array *v310; // x8
  struct UnityEngine_GameObject_array *v311; // x9
  int32_t *v312; // x27
  struct SkillIconComponent_array *v313; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v316; // x8
  struct UIIconLabel_array *v317; // x8
  struct SkillIconComponent_array *v318; // x8
  __int64 v319; // x9
  int32_t v320; // w8
  bool v321; // w1
  __int64 v322; // x8
  _QWORD *v323; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v325; // x8
  struct SkillInfo_array **p_appendSkillInfoList; // x24
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v328; // x8
  struct SkillInfo_array *v329; // x11
  int v330; // w9
  signed __int64 v331; // x10
  unsigned __int64 v332; // x14
  SkillInfo_o *v333; // x14
  unsigned __int64 v334; // x23
  signed __int64 v335; // x25
  struct SkillInfo_array *v336; // x8
  struct UnityEngine_GameObject_array *v337; // x9
  int32_t *v338; // x27
  struct UICommonButton_array *skillButtonList; // x9
  int v340; // w8
  struct UnityEngine_GameObject_array *v341; // x9
  struct SkillIconComponent_array *v342; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v345; // x8
  struct UIIconLabel_array *v346; // x8
  struct SkillIconComponent_array *v347; // x8
  int32_t v348; // w8
  bool v349; // w1
  __int64 v350; // x8
  _QWORD *v351; // x9
  __int64 v352; // x10
  __int64 v353; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *svtCommandCardList; // x23
  __int64 v356; // x1
  ServantCommandCardListComponent_o *v357; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v360; // w26
  UnityEngine_Object_o *pushSprite; // x23
  struct FollowerInfo_o *v362; // x8
  int64_t pushUserSvtId; // x8
  bool v364; // w24
  UnityEngine_Object_o *v365; // x23
  __int64 v366; // x1
  UnityEngine_Object_o *v367; // x23
  UISprite_o *v368; // x24
  UISprite_o *v369; // x23
  __int64 v370; // x1
  UILabel_o *v371; // x24
  System_String_o *v372; // x23
  Il2CppObject *v373; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  Il2CppObject **v375; // x9
  Il2CppObject *v376; // x23
  Il2CppObject *v377; // x0
  FollowerSelectItemListViewItemDraw_o *v378; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w23
  __int64 v381; // x1
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  __int64 v383; // x1
  int32_t OpenClassBoardNum_k__BackingField; // w23
  UILabel_o *v385; // x24
  __int64 v386; // x1
  UnityEngine_GameObject_o *v387; // x24
  FollowerSelectItemListViewItemDraw_c *v388; // x8
  __int64 v389; // x9
  _BOOL4 IsRecommendFollower_k__BackingField; // w23
  BalanceConfig_c *v391; // x0
  __int64 v392; // x9
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_String_o **v394; // x10
  __int64 v395; // x1
  __int64 v396; // x1
  UnityEngine_GameObject_o *v397; // x24
  BalanceConfig_c *v398; // x8
  __int64 v399; // x1
  UISprite_o *classBoardBackSprite; // x24
  __int64 v401; // x1
  UnityEngine_GameObject_o *v402; // x24
  FollowerSelectItemListViewItemDraw_c *v403; // x8
  UnityEngine_GameObject_o *v404; // x0
  UnityEngine_GameObject_o *v405; // x0
  float v406; // s0
  float v407; // s8
  float v408; // s0
  float v409; // s9
  UnityEngine_GameObject_o *v410; // x0
  float LocalPositionX; // s0
  float v412; // s10
  UnityEngine_GameObject_o *v413; // x0
  __int64 v414; // x1
  UISprite_o *baseSprite; // x22
  __int64 v416; // x1
  UILabel_o *maskMessageLabel; // x22
  __int64 v418; // x1
  char v419; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v421; // x22
  __int64 v422; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *v424; // x23
  int32_t v425; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v427; // w22
  QuestPhaseEntity_o *v428; // x0
  QuestPhaseEntity_o *v429; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v431; // x1
  __int64 v432; // x23
  __int64 v433; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v434; // x21
  FollowerSelectItemListViewItemDraw_o *v435; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  __int64 v438; // x1
  UILabel_o *v439; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  __int64 v441; // x1
  struct QuestRestrictionInfo_o *v442; // x22
  int32_t eventId; // w21
  __int64 v444; // x1
  Il2CppObject *v445; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  __int64 v447; // x1
  UILabel_o *warningMessageLabel; // x22
  float v449; // s0
  float v450; // s8
  __int64 v451; // x2
  FollowerSelectItemListViewItemDraw_o *v452; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int32_t FollowerType; // w0
  Il2CppObject *v458; // x22
  __int64 v459; // x1
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v461; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  __int64 v466; // x1
  int v467; // w21
  System_String_o *v468; // x0
  System_String_o *v469; // x0
  struct UnityEngine_Vector3_StaticFields *v470; // x8
  System_String_o *v471; // x0
  FollowerSelectItemListViewItemDraw_o *v472; // x0
  FollowerSelectItemListViewItem_o *v473; // x1
  const MethodInfo *v474; // x2
  int32_t v475; // [xsp+1Ch] [xbp-C4h]
  System_String_o *v476; // [xsp+20h] [xbp-C0h]
  int TimesToRestart_k__BackingField; // [xsp+2Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v478; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+40h] [xbp-A0h] BYREF
  int v480; // [xsp+54h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v483; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v484; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v485; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v486; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v487; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v488; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v489; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v490; // 0:x0.16
  UnityEngine_Color_o v491; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v492; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4B1137F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v25, v26);
    sub_1BCA7E0(&DataManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v33, v34);
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v35, v36);
    sub_1BCA7E0(&FollowerSelectItemListViewItemDraw_TypeInfo, v37, v38);
    sub_1BCA7E0(&Grade_TypeInfo, v39, v40);
    sub_1BCA7E0(&int_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v47, v48);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v49, v50);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v51, v52);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v54);
    sub_1BCA7E0(&OptionManager_TypeInfo, v55, v56);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v57, v58);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59, v60);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v61, v62);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v63, v64);
    sub_1BCA7E0(&TitleInfoControl_TypeInfo, v65, v66);
    sub_1BCA7E0(&StringLiteral_3804/*"COMMON_NO_ENTRY"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_6552/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_6531/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_11756/*"SERVANT_HIDE_NAME"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_9455/*"NP_DISABLE_COLOR_NAME"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_6532/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_6489/*"FFFFFF"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_9456/*"NP_HIDE_NAME"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_9457/*"NP_HIDE_NAME_LEVEL"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_6545/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_6530/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_17658/*"btn_bg_29_2"*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_20404/*"icon_support_01"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_20525/*"img_frames_mask01"*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_12538/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_12539/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_6544/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_6546/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_6529/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_18662/*"datalost_svt_select"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_6488/*"FFFF00"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_9430/*"NO_ENTRY_NAME"*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_9454/*"NP_COLOR_NAME"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_16194/*"[{0}]+{1}[-]"*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_20366/*"icon_friend"*/, v123, v124);
    sub_1BCA7E0(&StringLiteral_6533/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v125, v126);
    sub_1BCA7E0(&StringLiteral_20365/*"icon_follow"*/, v127, v128);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_20567/*"img_listbg_02"*/, v129, v130);
    byte_4B1137F = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v480 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v478.fields.r = 0LL;
  *(_QWORD *)&v478.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_162;
  size = switchSkillUIList->fields._size;
  v133 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v133;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    v138 = ServantLeader;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v136);
    Kind_38402548 = Grade__GetKind_38402548(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_38402548, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    v143 = FollowerBgImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v141);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    if ( !v138 )
      goto LABEL_49;
    v146 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
    v145 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
    *(_QWORD *)&v483.fields.currentCryptoKey = v146;
    *(_QWORD *)&v483.fields.fakeValue = v145;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                     v483,
                                                     0LL);
    if ( (int)this >= 1 )
    {
      v147 = v7->fields.followerInfo;
      if ( !v147 )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_162;
      v476 = v143;
      v475 = Kind_38402548;
      ServantFaceIconComponent__Set_38935648(
        (ServantFaceIconComponent_o *)this,
        v138,
        v7->fields.iconLabelInfo1,
        v7->fields.iconLabelInfo2,
        0,
        v147->fields.imageSvtId,
        0LL);
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v148);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v149);
      FollowerSelectItemListViewItem__GetNpInfo(v7, &tdInfo, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(v7, 0LL);
      if ( !tdInfo )
        goto LABEL_162;
      name = tdInfo->fields.name;
      v151 = (int)this;
      v152 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      if ( ServantLeaderInfo__IsNpc(v138, 0LL) )
      {
        dispLimitCount = v138->fields.dispLimitCount;
        if ( NpcServantFollowerEntity__IsHideTreasureDeviceLv(v138->fields.npcFlag, 0LL) )
        {
          v155 = tdInfo;
          v157 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
          v156 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v154);
          *(_QWORD *)&v484.fields.currentCryptoKey = v157;
          *(_QWORD *)&v484.fields.fakeValue = v156;
          this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                           v484,
                                                           0LL);
          if ( !v155 )
            goto LABEL_162;
          name = TreasureDvcInfo__GetName(v155, (int32_t)this, 0LL);
        }
        v158 = !NpcServantFollowerEntity__IsHideRarity(v138->fields.npcFlag, 0LL);
      }
      else
      {
        dispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v138, 0LL);
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v163);
        if ( !OptionManager__GetSpoilerSetting(0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
          if ( !this )
            goto LABEL_162;
          dispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                             (ServantLimitSpoilerProtectionMaster_o *)this,
                             v138->fields.svtId,
                             dispLimitCount,
                             0LL);
        }
        v158 = 1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_162;
      ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v158, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
      if ( !this )
        goto LABEL_162;
      ServantFaceIconComponent__SetDispClassSprite(
        (ServantFaceIconComponent_o *)this,
        !v7->fields._IsDataLost_k__BackingField,
        0LL);
      if ( !ServantLeaderInfo__IsNpc(v138, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v164);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        v167 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
        v168 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
        v169 = (ServantLimitImageMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v166);
        *(_QWORD *)&v485.fields.currentCryptoKey = v167;
        *(_QWORD *)&v485.fields.fakeValue = v168;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                         v485,
                                                         0LL);
        if ( !v169 )
          goto LABEL_162;
        dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                           v169,
                           (int32_t)this,
                           dispLimitCount,
                           0LL);
      }
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v164);
      v170 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v172 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
      v173 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
      v174 = (ServantLimitAddMaster_o *)v170;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v171);
      *(_QWORD *)&v486.fields.currentCryptoKey = v172;
      *(_QWORD *)&v486.fields.fakeValue = v173;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                       v486,
                                                       0LL);
      if ( !tdInfo || !v174 )
        goto LABEL_162;
      OverwriteTDName = (Il2CppObject *)ServantLimitAddMaster__GetOverwriteTDName(
                                          v174,
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
          UIIconLabel__Set_38947284(playerLevelIconLabel, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          loginDataLabel = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v229);
          v231 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          LoginTime = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v233 = (Il2CppObject *)LocalizationManager__GetBeforeTime(LoginTime, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v231, v233, 0LL);
          if ( !loginDataLabel )
            goto LABEL_162;
          UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20366/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( questRestrictionInfo )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                             questRestrictionInfo->fields.questId,
                                                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_162;
            HasFlag_40199512 = QuestEntity__HasFlag_40199512(
                                 (QuestEntity_o *)this,
                                 0x8000000LL,
                                 questRestrictionInfo->fields.questPhase,
                                 0LL);
          }
          else
          {
            HasFlag_40199512 = 0;
          }
          IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
          v391 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v234);
            v391 = BalanceConfig_TypeInfo;
          }
          v392 = 212LL;
          if ( HasFlag_40199512 )
            v392 = 672LL;
          if ( IsRecommendFollower_k__BackingField )
            v392 = 224LL;
          static_fields = v391->static_fields;
          v394 = (System_String_o **)&StringLiteral_9454/*"NP_COLOR_NAME"*/;
          v259 = LocalizationManager_TypeInfo;
          FollowerPointNpc = *(int32_t *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v392);
          if ( v151 > 1 )
            v394 = (System_String_o **)&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/;
          v261 = *v394;
          Kind_38402548 = v475;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
LABEL_213:
            j_il2cpp_runtime_class_init_0(v259, v234);
LABEL_214:
          v262 = LocalizationManager__Get(v261, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v262, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_162;
          v152 = this;
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
          v263 = 1;
LABEL_226:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v263, 0LL);
LABEL_227:
          IsHideSupport = ServantLeaderInfo__IsHideSupport(v138, 0LL);
          svtNameRangeLabel = v8->fields.svtNameRangeLabel;
          if ( IsHideSupport )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v265);
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11756/*"SERVANT_HIDE_NAME"*/,
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
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_9457/*"NP_HIDE_NAME_LEVEL"*/,
                                                               0LL);
              v152 = this;
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
          if ( ServantLeaderInfo__IsHideSupport(v138, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v138, 0LL) )
            strengthStatus = 0;
          svtNpRangeLabel = v8->fields.svtNpRangeLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
          if ( !svtNpRangeLabel )
            goto LABEL_162;
          UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)v152, (System_String_o *)this, 0, 0, 0LL);
          svtNpCommandCard = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v269);
          if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v138, 0LL);
            v271 = v8->fields.svtNpCommandCard;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v271 )
                goto LABEL_162;
              ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
            }
            else
            {
              if ( !v271 )
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
          v273 = (int)this;
          UIIconLabel__Set_38947284(v8->fields.friendPointIconLabel, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0LL);
          if ( FriendPointUpVal > 0 || v273 >= 1 )
          {
            if ( v273 <= 0 )
              v275 = 1000;
            else
              v275 = v273;
            v276 = 274877907LL * (v275 * FriendPointUpVal + (v275 - 1000) * FollowerPointNpc);
            friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            v278 = (v276 >> 38) + ((unsigned __int64)v276 >> 63);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
            v279 = LocalizationManager__Get((System_String_o *)StringLiteral_6552/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
            TimesToRestart_k__BackingField = v278;
            v280 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v279, v280, 0LL);
            if ( !friendPointData2Label )
              goto LABEL_162;
            v274 = this;
            this = friendPointData2Label;
          }
          else
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
            if ( !this )
              goto LABEL_162;
            v274 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text((UILabel_o *)this, (System_String_o *)v274, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__IsFriendPointCampaign(v7, 0LL);
          campaignLabel = v8->fields.campaignLabel;
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, item);
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
            v282 = this;
          }
          else
          {
            if ( !campaignLabel )
              goto LABEL_162;
            v282 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
          }
          UILabel__set_text(campaignLabel, (System_String_o *)v282, 0LL);
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
          v284 = activeSelf ? -3.0 : 39.0;
          if ( !this )
            goto LABEL_162;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          v285 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
          v286 = v285 ? -22.0 : 20.0;
          if ( !this )
            goto LABEL_162;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, v284, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
          if ( !this )
            goto LABEL_162;
          v288 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v288, v286, 0LL);
          eventUpValIcon = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v289);
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
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
              *(_QWORD *)&v487.fields.currentCryptoKey = baseButton;
              *(_QWORD *)&v487.fields.fakeValue = servantFaceIcon;
              v293 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v487, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, 0LL);
              if ( !this )
                goto LABEL_162;
              Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
            }
            else
            {
              Rarity = -1;
              v293 = -1;
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
              v296 = *(_QWORD *)&typeTextSprite->fields.updateAnchors;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
              *(_QWORD *)&v488.fields.currentCryptoKey = topAnchor;
              *(_QWORD *)&v488.fields.fakeValue = v296;
              v298 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v488, 0LL);
            }
            else
            {
              v298 = -1;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
            if ( !this )
              goto LABEL_162;
            EventUpValIconComponent__Set(
              (EventUpValIconComponent_o *)this,
              v7->fields.eventUpValItemList,
              v293,
              Rarity,
              v298,
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
          v301 = *(_QWORD *)&skillIconList->max_length;
          if ( v301 << 32 >= 1 )
          {
            v302 = *p_skillInfoList;
            v303 = 0;
            v304 = 0LL;
            while ( v302 )
            {
              max_length = v302->max_length;
              if ( (__int64)v304 < (int)max_length )
              {
                if ( v304 >= max_length )
                  goto LABEL_685;
                v306 = (*p_skillInfoList)->m_Items[v304];
                if ( v306 && v306->fields.id >= 1 )
                  v303 = v304 + 1;
              }
              if ( (__int64)++v304 >= (int)v301 )
                goto LABEL_316;
            }
            goto LABEL_162;
          }
          v303 = 0;
LABEL_316:
          if ( (int)v301 >= 1 )
          {
            v307 = v303;
            v308 = 4LL;
            do
            {
              v309 = v308 - 4;
              if ( v308 - 4 >= v307 )
              {
                skillBaseList = v8->fields.skillBaseList;
                if ( !skillBaseList )
                  goto LABEL_162;
                if ( v309 >= skillBaseList->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillBaseList->obj.klass + v308);
                if ( !this )
                  goto LABEL_162;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v310 = *p_skillInfoList;
                if ( !*p_skillInfoList )
                  goto LABEL_162;
                if ( v309 >= v310->max_length )
                  goto LABEL_685;
                v311 = v8->fields.skillBaseList;
                if ( !v311 )
                  goto LABEL_162;
                if ( v309 >= v311->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v311->obj.klass + v308);
                if ( !this )
                  goto LABEL_162;
                v312 = (int32_t *)*((_QWORD *)&v310->obj.klass + v308);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v138, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v312 )
                    v312[4] = 0;
                  v313 = v8->fields.skillIconList;
                  if ( !v313 )
                    goto LABEL_162;
                  if ( v309 >= v313->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v313->obj.klass + v308);
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
                  if ( !skillLevelIconLabelList )
                    goto LABEL_162;
                  if ( v309 >= skillLevelIconLabelList->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v308);
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v316 = v8->fields.skillIconList;
                  if ( !v316 )
                    goto LABEL_162;
                  if ( v309 >= v316->max_length )
                    goto LABEL_685;
                  if ( !v312 )
                    goto LABEL_162;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v316->obj.klass + v308);
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__Set_38946480(
                    (SkillIconComponent_o *)this,
                    v312[4],
                    v312[5],
                    v312[12],
                    v312[13],
                    0LL);
                  v317 = v8->fields.skillLevelIconLabelList;
                  if ( !v317 )
                    goto LABEL_162;
                  if ( v309 >= v317->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v317->obj.klass + v308);
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Set_38947284((UIIconLabel_o *)this, 48, v312[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v318 = v8->fields.skillIconList;
              if ( !v318 )
                goto LABEL_162;
              v319 = v308 - 3;
              ++v308;
            }
            while ( v319 < (int)v318->max_length );
          }
          v320 = v8->fields.displaySkill;
          if ( v320 == 2 )
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
            v322 = *(_QWORD *)&this->fields.m_CachedPtr;
            v323 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v322 )
              goto LABEL_162;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v322 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v323[4] + 192LL) + 112LL));
            }
            else
            {
              v325 = v322 + 8 * m_CancellationTokenSource_low;
              LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v325 + 32) = item;
              sub_1BCA784(v325 + 32, item);
            }
          }
          else
          {
            if ( v320 == 1 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              v321 = 0;
            }
            else
            {
              if ( v320 )
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
              v321 = 1;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v321, 0LL);
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
          v328 = *(_QWORD *)&appendSkillIconList->max_length;
          if ( v328 << 32 < 1 )
          {
            v330 = 0;
          }
          else
          {
            v329 = *p_appendSkillInfoList;
            v330 = 0;
            v331 = 0LL;
            do
            {
              if ( v329 )
              {
                v332 = v329->max_length;
                if ( v331 < (int)v332 )
                {
                  if ( v331 >= v332 )
                    goto LABEL_685;
                  v333 = (*p_appendSkillInfoList)->m_Items[v331];
                  if ( v333 && v333->fields.id >= 1 )
                    v330 = v331 + 1;
                }
              }
              ++v331;
            }
            while ( v331 < (int)v328 );
          }
          if ( (int)v328 >= 1 )
          {
            v334 = 0LL;
            v335 = v330;
            do
            {
              if ( (__int64)v334 >= v335 )
              {
                appendSkillBaseList = v8->fields.appendSkillBaseList;
                if ( !appendSkillBaseList )
                  goto LABEL_162;
                if ( v334 >= appendSkillBaseList->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v334];
                if ( !this )
                  goto LABEL_162;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
              else
              {
                v336 = *p_appendSkillInfoList;
                if ( !*p_appendSkillInfoList )
                  goto LABEL_162;
                if ( v334 >= v336->max_length )
                  goto LABEL_685;
                v337 = v8->fields.appendSkillBaseList;
                if ( !v337 )
                  goto LABEL_162;
                if ( v334 >= v337->max_length )
                  goto LABEL_685;
                this = (FollowerSelectItemListViewItemDraw_o *)v337->m_Items[v334];
                if ( !this )
                  goto LABEL_162;
                v338 = (int32_t *)v336->m_Items[v334];
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                if ( ConstantMaster__IsFLAG20240804(0LL) )
                {
                  this = (FollowerSelectItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
                    this = (FollowerSelectItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
                  }
                  skillButtonList = this->fields.skillButtonList;
                  v340 = HIDWORD(skillButtonList->m_Items[144]);
                  if ( v334 )
                    v340 += LODWORD(skillButtonList->m_Items[145]) * v334;
                  v341 = v8->fields.appendSkillBaseList;
                  if ( !v341 )
                    goto LABEL_162;
                  if ( v334 >= v341->max_length )
                    goto LABEL_685;
                  GameObjectExtensions__SetLocalPositionX(v341->m_Items[v334], (float)v340, 0LL);
                }
                this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v138, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( v338 )
                    v338[4] = 0;
                  v342 = v8->fields.appendSkillIconList;
                  if ( !v342 )
                    goto LABEL_162;
                  if ( v334 >= v342->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)v342->m_Items[v334];
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
                  appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
                  if ( !appendSkillLevelIconLabelList )
                    goto LABEL_162;
                  if ( v334 >= appendSkillLevelIconLabelList->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)appendSkillLevelIconLabelList->m_Items[v334];
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
                }
                else
                {
                  v345 = v8->fields.appendSkillIconList;
                  if ( !v345 )
                    goto LABEL_162;
                  if ( v334 >= v345->max_length )
                    goto LABEL_685;
                  if ( !v338 )
                    goto LABEL_162;
                  this = (FollowerSelectItemListViewItemDraw_o *)v345->m_Items[v334];
                  if ( !this )
                    goto LABEL_162;
                  SkillIconComponent__Set_38946480(
                    (SkillIconComponent_o *)this,
                    v338[4],
                    v338[5],
                    v338[12],
                    v338[13],
                    0LL);
                  v346 = v8->fields.appendSkillLevelIconLabelList;
                  if ( !v346 )
                    goto LABEL_162;
                  if ( v334 >= v346->max_length )
                    goto LABEL_685;
                  this = (FollowerSelectItemListViewItemDraw_o *)v346->m_Items[v334];
                  if ( !this )
                    goto LABEL_162;
                  UIIconLabel__Set_38947284((UIIconLabel_o *)this, 48, v338[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                }
              }
              v347 = v8->fields.appendSkillIconList;
              if ( !v347 )
                goto LABEL_162;
              ++v334;
            }
            while ( (__int64)v334 < (int)v347->max_length );
          }
          v348 = v8->fields.displaySkill;
          if ( v348 == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
            v143 = v476;
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
            v350 = *(_QWORD *)&this->fields.m_CachedPtr;
            v351 = Method_System_Collections_Generic_List_UIWidget__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v350 )
              goto LABEL_162;
            v352 = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)v352 >= *(_DWORD *)(v350 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)item,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v351[4] + 192LL) + 112LL));
            }
            else
            {
              v353 = v350 + 8 * v352;
              LODWORD(this->fields.m_CancellationTokenSource) = v352 + 1;
              *(_QWORD *)(v353 + 32) = item;
              sub_1BCA784(v353 + 32, item);
            }
          }
          else
          {
            v143 = v476;
            if ( v348 == 1 )
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
              v349 = 1;
            }
            else
            {
              if ( v348 )
                goto LABEL_438;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
              if ( !this )
                goto LABEL_162;
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_162;
              v349 = 0;
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v349, 0LL);
          }
          if ( v8->fields.displaySkill == 2 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
            if ( !this )
              goto LABEL_162;
            switchSkillInfo = v8->fields.switchSkillInfo;
            this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                             (System_Collections_Generic_List_object__o *)this,
                                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
            if ( !switchSkillInfo )
              goto LABEL_162;
            SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
          }
LABEL_438:
          svtCommandCardList = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
          if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v138, 0LL);
            v357 = v8->fields.svtCommandCardList;
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v357 )
                goto LABEL_162;
              ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
            }
            else
            {
              SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, 0LL);
              commandCardParam = v138->fields.commandCardParam;
              v360 = SvtId;
              this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v138, 0LL);
              if ( !v357 )
                goto LABEL_162;
              ServantCommandCardListComponent__Set_38924900(
                v357,
                v360,
                commandCardParam,
                (System_Int32_array *)this,
                2,
                1,
                0LL);
              v143 = v476;
            }
          }
          pushSprite = (UnityEngine_Object_o *)v8->fields.pushSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v356);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v362 = v7->fields.followerInfo;
            if ( !v362 )
              goto LABEL_162;
            pushUserSvtId = v362->fields.pushUserSvtId;
            v364 = pushUserSvtId && pushUserSvtId == v138->fields.userSvtId;
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
            if ( !this )
              goto LABEL_162;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_162;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v364, 0LL);
          }
          v365 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
          if ( !UnityEngine_Object__op_Inequality(v365, 0LL, 0LL) )
            goto LABEL_483;
          v367 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v366);
          if ( !UnityEngine_Object__op_Inequality(v367, 0LL, 0LL) )
            goto LABEL_483;
          if ( v7->fields._IsDataLost_k__BackingField )
          {
            v368 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v366);
            AtlasManager__SetPartyOrganizationImage(v368, (System_String_o *)StringLiteral_18662/*"datalost_svt_select"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            v491.fields.r = 1.0;
            v491.fields.g = 1.0;
            v491.fields.b = 1.0;
            v491.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)this, v491, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
          }
          else
          {
            if ( v7->fields._TimesToRestart_k__BackingField < 1 )
              goto LABEL_483;
            v369 = v8->fields.dataLostMaskSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v366);
            AtlasManager__SetCommon(v369, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20525/*"img_frames_mask01"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
            if ( !this )
              goto LABEL_162;
            v492.fields.a = 0.62353;
            v492.fields.r = 0.0;
            v492.fields.g = 0.0;
            v492.fields.b = 0.0;
            UIWidget__set_color((UIWidget_o *)this, v492, 0LL);
            v371 = v8->fields.dataLostMaskMessageLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v370);
            v372 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
            TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
            v373 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v372, v373, 0LL);
            if ( !v371 )
              goto LABEL_162;
            UILabel__set_text(v371, (System_String_o *)this, 0LL);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v366);
          if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
          {
            if ( (v7->fields._OpenClassBoardNum_k__BackingField & 0x80000000) != 0
              || !v7->fields._IsReleasedClassBoard_k__BackingField )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
              if ( !this )
                goto LABEL_162;
              v378 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
            }
            else
            {
              if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
                v375 = (Il2CppObject **)&StringLiteral_6488/*"FFFF00"*/;
              else
                v375 = (Il2CppObject **)&StringLiteral_6489/*"FFFFFF"*/;
              v376 = *v375;
              TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
              v377 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
              this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_62415592(
                                                               (System_String_o *)StringLiteral_16194/*"[{0}]+{1}[-]"*/,
                                                               v376,
                                                               v377,
                                                               0LL);
              if ( !v8->fields.openClassBoardNumLabel )
                goto LABEL_162;
              v378 = this;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            }
            UILabel__set_text((UILabel_o *)this, (System_String_o *)v378, 0LL);
          }
          classBoardOpenButton = (UnityEngine_Object_o *)v8->fields.classBoardOpenButton;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v381);
          if ( UnityEngine_Object__op_Inequality(classBoardOpenButtonLabel, 0LL, 0LL) )
          {
            OpenClassBoardNum_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
            v385 = v8->fields.classBoardOpenButtonLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v383);
            if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12539/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                               0LL);
              if ( !v385 )
                goto LABEL_162;
              UILabel__set_text(v385, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_162;
              v387 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v388 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, v395);
                v388 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v389 = 36LL;
            }
            else
            {
              this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12538/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                               0LL);
              if ( !v385 )
                goto LABEL_162;
              UILabel__set_text(v385, (System_String_o *)this, 0LL);
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
              if ( !this )
                goto LABEL_162;
              v387 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v388 = FollowerSelectItemListViewItemDraw_TypeInfo;
              if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, v386);
                v388 = FollowerSelectItemListViewItemDraw_TypeInfo;
              }
              v389 = 32LL;
            }
            GameObjectExtensions__SetLocalPositionY(
              v387,
              *(float *)((char *)&v388->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v389),
              0LL);
          }
          if ( ConstantMaster__IsFLAG20240804(0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
            if ( !this )
              goto LABEL_162;
            v397 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v398 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v396);
              v398 = BalanceConfig_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34330940(v397, v398->static_fields->CLASS_BOARD_BUTTON_POS, 0LL);
            classBoardBackSprite = v8->fields.classBoardBackSprite;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v399);
            AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17658/*"btn_bg_29_2"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
            if ( !this )
              goto LABEL_162;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_162;
            v402 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            v403 = FollowerSelectItemListViewItemDraw_TypeInfo;
            if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, v401);
              v403 = FollowerSelectItemListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPosition_34330940(v402, v403->static_fields->CLASS_BOARD_LABEL_POS, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
            if ( !this )
              goto LABEL_162;
            v404 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalScaleX(
              v404,
              BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
              0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
            if ( !this )
              goto LABEL_162;
            v405 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              v405,
              (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
              0LL);
          }
          break;
        case 2:
          v237 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v237 )
            goto LABEL_162;
          UILabel__set_text(v237, (System_String_o *)this, 0LL);
          v238 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          Kind_38402548 = v475;
          if ( !v238 )
            goto LABEL_162;
          UIIconLabel__Set_38947284(v238, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v240 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v239);
          v241 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v242 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v243 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v242, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v241, v243, 0LL);
          if ( !v240 )
            goto LABEL_162;
          UILabel__set_text(v240, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          v244 = v7->fields._IsRecommendFollower_k__BackingField;
          v245 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v234);
            v245 = BalanceConfig_TypeInfo;
          }
          v246 = v245->static_fields;
          v247 = !v244;
          v248 = 224LL;
          v249 = 216LL;
          goto LABEL_207;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_162;
          v176 = v151;
          v177 = StringLiteral_20567/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          Kind_38402548 = v475;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20404/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v179 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v178);
            v179 = BalanceConfig_TypeInfo;
          }
          FollowerPointNpc = v179->static_fields->FollowerPointNpc;
          v476 = (System_String_o *)v177;
          if ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) == 3 )
          {
            v182 = (System_String_o **)&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/;
            if ( v176 <= 1 )
              v182 = (System_String_o **)&StringLiteral_9454/*"NP_COLOR_NAME"*/;
            v183 = *v182;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v181);
            v184 = LocalizationManager__Get(v183, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v181);
            v184 = LocalizationManager__Get((System_String_o *)StringLiteral_9455/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            OverwriteTDName = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9456/*"NP_HIDE_NAME"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v184, OverwriteTDName, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_162;
          v152 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_162;
          v263 = 0;
          goto LABEL_226;
        case 5:
          v250 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v250 )
            goto LABEL_162;
          UILabel__set_text(v250, (System_String_o *)this, 0LL);
          v251 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          Kind_38402548 = v475;
          if ( !v251 )
            goto LABEL_162;
          UIIconLabel__Set_38947284(v251, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v253 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v252);
          v254 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v255 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v256 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v255, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v254, v256, 0LL);
          if ( !v253 )
            goto LABEL_162;
          UILabel__set_text(v253, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20365/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          v257 = v7->fields._IsRecommendFollower_k__BackingField;
          v258 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v234);
            v258 = BalanceConfig_TypeInfo;
          }
          v246 = v258->static_fields;
          v247 = !v257;
          v248 = 224LL;
          v249 = 672LL;
LABEL_207:
          v259 = LocalizationManager_TypeInfo;
          if ( v247 )
            v248 = v249;
          if ( v151 <= 1 )
            v260 = (System_String_o **)&StringLiteral_9454/*"NP_COLOR_NAME"*/;
          else
            v260 = (System_String_o **)&StringLiteral_9460/*"NP_MAX_COLOR_NAME"*/;
          FollowerPointNpc = *(int32_t *)((char *)&v246->CriticalRateToAddByQuickFirstBonus + v248);
          v261 = *v260;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            goto LABEL_213;
          goto LABEL_214;
        default:
          Kind_38402548 = v475;
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
      v160 = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v159);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3804/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !v160 )
        goto LABEL_162;
      UIRangeLabel__Set(v160, (System_String_o *)this, 0LL, 1, 0, 0LL);
      switch ( FollowerSelectItemListViewItem__get_FollowerType(v7, 0LL) )
      {
        case 1:
          v185 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v185 )
            goto LABEL_162;
          UILabel__set_text(v185, (System_String_o *)this, 0LL);
          v186 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v186 )
            goto LABEL_162;
          UIIconLabel__Set_38947284(v186, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v188 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v187);
          v189 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v190 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v191 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v190, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v189, v191, 0LL);
          if ( !v188 )
            goto LABEL_162;
          UILabel__set_text(v188, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          v192 = &StringLiteral_20366/*"icon_friend"*/;
          goto LABEL_120;
        case 2:
          v193 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v193 )
            goto LABEL_162;
          UILabel__set_text(v193, (System_String_o *)this, 0LL);
          v194 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v194 )
            goto LABEL_162;
          UIIconLabel__Set_38947284(v194, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v196 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v195);
          v197 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v198 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v199 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v198, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v197, v199, 0LL);
          if ( !v196 )
            goto LABEL_162;
          UILabel__set_text(v196, (System_String_o *)this, 0LL);
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
          v143 = (System_String_o *)StringLiteral_20567/*"img_listbg_02"*/;
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
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20404/*"icon_support_01"*/, 0LL);
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
          v162 = 0;
          goto LABEL_126;
        case 5:
          v200 = v8->fields.playerNameLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(v7, 0LL);
          if ( !v200 )
            goto LABEL_162;
          UILabel__set_text(v200, (System_String_o *)this, 0LL);
          v201 = v8->fields.playerLevelIconLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(v7, 0LL);
          if ( !v201 )
            goto LABEL_162;
          UIIconLabel__Set_38947284(v201, 2, (int32_t)this, 0, 0, 0LL, 0, 0, 0, 0LL);
          v203 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v202);
          v204 = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v205 = FollowerSelectItemListViewItem__get_LoginTime(v7, 0LL);
          v206 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v205, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v204, v206, 0LL);
          if ( !v203 )
            goto LABEL_162;
          UILabel__set_text(v203, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_162;
          v192 = &StringLiteral_20365/*"icon_follow"*/;
LABEL_120:
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v192, 0LL);
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
          v162 = 1;
LABEL_126:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v162, 0LL);
LABEL_127:
          FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v161);
          FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v207);
          v209 = v8->fields.svtNpRangeLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v208);
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_9430/*"NO_ENTRY_NAME"*/,
                                                           0LL);
          if ( !v209 )
            goto LABEL_162;
          UIRangeLabel__Set(v209, (System_String_o *)this, 0LL, 1, 0, 0LL);
          v211 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v210);
          if ( !UnityEngine_Object__op_Inequality(v211, 0LL, 0LL) )
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
          v213 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v212);
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v213, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_143;
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
          if ( !this )
            goto LABEL_162;
          EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
LABEL_143:
          v214 = v8->fields.skillIconList;
          if ( !v214 )
            goto LABEL_162;
          v215 = sub_1BCA888(SkillInfo___TypeInfo, v214->max_length);
          v8->fields.skillInfoList = (struct SkillInfo_array *)v215;
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCA784(&v8->fields.skillInfoList, v215);
          v216 = v8->fields.skillIconList;
          if ( !v216 )
            goto LABEL_162;
          v217 = 0LL;
          break;
        default:
          goto LABEL_127;
      }
      while ( (int)v217 < (signed int)v216->max_length )
      {
        v218 = v8->fields.skillBaseList;
        if ( v218 )
        {
          if ( (unsigned int)v217 >= v218->max_length )
LABEL_685:
            sub_1BCAA44(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)v218->m_Items[v217];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v216 = v8->fields.skillIconList;
            ++v217;
            if ( v216 )
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
      v219 = v8->fields.appendSkillIconList;
      if ( !v219 )
        goto LABEL_162;
      v220 = sub_1BCA888(SkillInfo___TypeInfo, v219->max_length);
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)v220;
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCA784(&v8->fields.appendSkillInfoList, v220);
      v221 = v8->fields.appendSkillIconList;
      if ( !v221 )
        goto LABEL_162;
      v222 = 0LL;
      while ( (int)v222 < (signed int)v221->max_length )
      {
        v223 = v8->fields.appendSkillBaseList;
        if ( !v223 )
          goto LABEL_162;
        if ( (unsigned int)v222 >= v223->max_length )
          goto LABEL_685;
        this = (FollowerSelectItemListViewItemDraw_o *)v223->m_Items[v222];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v221 = v8->fields.appendSkillIconList;
          ++v222;
          if ( v221 )
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
      v225 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v224);
      if ( UnityEngine_Object__op_Inequality(v225, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_162;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      v226 = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      if ( UnityEngine_Object__op_Inequality(v226, 0LL, 0LL) )
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
    LODWORD(v406) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    v407 = v406;
    LODWORD(v408) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
    if ( !this )
      goto LABEL_162;
    v409 = v408;
    v410 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v410, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    v412 = LocalPositionX;
    v413 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionX(v413, (float)(v409 * 0.5) + (float)(v407 + v412), 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
    if ( !this )
      goto LABEL_162;
    UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38402548, 0LL);
    baseSprite = v8->fields.baseSprite;
    if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v414);
    FollowerRootComponent__SetFollowerBase(baseSprite, v143, 0LL);
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v416);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6544/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
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
        v419 = 0;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v447);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6545/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                       0LL);
      if ( !warningMessageLabel )
        goto LABEL_162;
      UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_162;
      LODWORD(v449) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
      if ( !this )
        goto LABEL_162;
      v450 = v449;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      v452 = this;
      warningMessageWidth = (float)v8->fields.warningMessageWidth;
      if ( v450 <= warningMessageWidth )
      {
        if ( !byte_4B109C6 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, item, v451);
          byte_4B109C6 = 1;
        }
        v470 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v470->oneVector.fields.x;
        y = v470->oneVector.fields.y;
        z = v470->oneVector.fields.z;
      }
      else
      {
        x = warningMessageWidth / v450;
        z = 1.0;
        y = 1.0;
      }
      if ( !v452 )
        goto LABEL_162;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v452, *(UnityEngine_Vector3_o *)&x, 0LL);
    }
    v419 = 1;
LABEL_563:
    classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v418);
    if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
    {
      if ( !v138 )
        goto LABEL_592;
      v422 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
      v421 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item);
      *(_QWORD *)&v489.fields.currentCryptoKey = v422;
      *(_QWORD *)&v489.fields.fakeValue = v421;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v489, 0LL) < 1
        || (v419 & 1) != 0
        || ServantLeaderInfo__IsHideSupport(v138, 0LL)
        || v7->fields._IsDataLost_k__BackingField )
      {
        goto LABEL_592;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
        goto LABEL_592;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v472 = (FollowerSelectItemListViewItemDraw_o *)sub_1BCACFC(this);
        FollowerSelectItemListViewItemDraw__setupMessageUI(v472, v473, v474);
        return;
      }
      v424 = this->fields.typeTextSprite;
      if ( !v424 )
        goto LABEL_592;
      v425 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
      if ( !v425 )
        goto LABEL_592;
      m_CancellationTokenSource = (int32_t)v424->fields.m_CancellationTokenSource;
      if ( !m_CancellationTokenSource )
        goto LABEL_592;
      v427 = v425;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( !this )
        goto LABEL_162;
      v428 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v427, m_CancellationTokenSource, 0LL);
      if ( v428 )
      {
        v429 = v428;
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_162;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        v433 = *(_QWORD *)&v138->fields.svtId.fields.currentCryptoKey;
        v432 = *(_QWORD *)&v138->fields.svtId.fields.fakeValue;
        v434 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v431);
        *(_QWORD *)&v490.fields.currentCryptoKey = v433;
        *(_QWORD *)&v490.fields.fakeValue = v432;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                         v490,
                                                         0LL);
        if ( !v434 )
          goto LABEL_162;
        this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                         v434,
                                                         (int32_t)this,
                                                         (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_162;
        v435 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
        if ( !this )
          goto LABEL_162;
        ServantClassCompatibilityIconComponent__SetIcon(
          (ServantClassCompatibilityIconComponent_o *)this,
          (int32_t)v435->fields.svtNameRangeLabel,
          v429->fields.classIds,
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
    {
      v439 = v8->fields.recommendedIconText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v438);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6546/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                       0LL);
      if ( !v439 )
        goto LABEL_162;
      UILabel__set_text(v439, (System_String_o *)this, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v438);
    if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
      goto LABEL_629;
    v442 = v7->fields.questRestrictionInfo;
    if ( v442 )
    {
      eventId = v442->fields.eventId;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_162;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0LL;
      if ( !this )
        goto LABEL_162;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              v442->fields.eventId,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_621;
      v445 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v444);
      if ( TitleInfoControl__IsEnableEventShopButton_37955824((EventDetailEntity_o *)v445, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)entity;
        if ( !entity )
          goto LABEL_162;
        LODWORD(v442) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
      }
      else
      {
LABEL_621:
        LODWORD(v442) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v441);
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
    if ( FollowerType == 4 || (((unsigned int)v442 ^ 1) & 1) != 0 )
      goto LABEL_627;
    this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      v458 = DataManager__GetMasterData_object_(
               (DataManager_o *)this,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerId(v7, 0LL);
      if ( v458 )
      {
        UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                      (EventBoostItemUsedMaster_o *)v458,
                      eventId,
                      (int64_t)this,
                      0LL);
        v461 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v459);
          v461 = BalanceConfig_TypeInfo;
        }
        MaxFriendChocolateUse = v461->static_fields->MaxFriendChocolateUse;
        v480 = MaxFriendChocolateUse;
        if ( UsedCount )
        {
          if ( !v461->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v461, v459);
            MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
          }
          v480 = MaxFriendChocolateUse - UsedCount->fields.count;
        }
        numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v459);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6531/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                         0LL);
        if ( numberOfUsabletimesPrefixLabel )
        {
          UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
          numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
          this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v480, 0LL);
          if ( numberOfUsabletimesLabel )
          {
            UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
            numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6532/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                             0LL);
            if ( numberOfUsabletimesSuffixLabel )
            {
              UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
              v467 = v480;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v466);
              if ( v467 )
              {
                v468 = LocalizationManager__Get((System_String_o *)StringLiteral_6529/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v468, &color, 0LL);
                v469 = LocalizationManager__Get((System_String_o *)StringLiteral_6530/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v469, &v478, 0LL);
              }
              else
              {
                v471 = LocalizationManager__Get((System_String_o *)StringLiteral_6533/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                UnityEngine_ColorUtility__TryParseHtmlString(v471, &color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( !this )
                  goto LABEL_162;
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                v478 = color;
              }
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
              if ( this )
              {
                UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                if ( this )
                {
                  UIWidget__set_color((UIWidget_o *)this, v478, 0LL);
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
    sub_1BCAA3C(this, item);
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
  if ( (byte_4B11381 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B11381 = 1;
  }
  if ( v3 )
    LOBYTE(v3) = v3->fields.isLockUser;
  lockMarkSprite = (UnityEngine_Object_o *)this->fields.lockMarkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(lockMarkSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockMarkSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct FollowerInfo_o *followerInfo; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v13; // x8
  struct System_Int32_array *adviceMessageIds; // x8
  struct FollowerInfo_o *v15; // x8
  struct UserRecommendSupportInfo_array *v16; // x8
  UserRecommendSupportInfo_o *v17; // x8
  System_String_array *ConvertMessageToId; // x0
  System_String_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *message; // x1
  int v22; // w8
  UnityEngine_GameObject_o *v23; // x0
  bool v24; // w1
  float v25; // s8
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  struct FollowerInfo_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  struct FollowerInfo_o *v30; // x8

  v4 = this;
  if ( (byte_4B11380 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&OptionManager_TypeInfo, v7, v8);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_116/*" "*/, v9, v10);
    byte_4B11380 = 1;
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
      v13 = userRecommendSupportHash->m_Items[0];
      if ( !v13 )
        goto LABEL_51;
      adviceMessageIds = v13->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_51;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_28;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v15 = item->fields.followerInfo;
      if ( !v15 )
        goto LABEL_51;
      v16 = v15->fields.userRecommendSupportHash;
      if ( !v16 )
        goto LABEL_51;
      if ( v16->max_length )
      {
        v17 = v16->m_Items[0];
        if ( !v17 || !this )
          goto LABEL_51;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v17->fields.adviceMessageIds,
                               0LL);
        v19 = System_String__Join((System_String_o *)StringLiteral_116/*" "*/, ConvertMessageToId, 0LL);
        if ( !System_String__IsNullOrEmpty(v19, 0LL) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
          if ( this )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
            if ( this )
            {
              message = v19;
              goto LABEL_22;
            }
          }
LABEL_51:
          sub_1BCAA3C(this, item);
        }
LABEL_28:
        this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
        if ( this )
        {
          v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          GameObjectExtensions__SetLocalPositionY(v23, -19.0, 0LL);
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
                v24 = 1;
LABEL_33:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.playerProfileObj, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v4->fields.svtProfileObj, 10.0, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.gradeIcon;
                if ( this )
                {
                  v22 = 1113849856;
                  goto LABEL_35;
                }
              }
            }
          }
        }
        goto LABEL_51;
      }
    }
    sub_1BCAA44(this, item);
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0LL);
  switch ( (int)this )
  {
    case 1:
      v28 = item->fields.followerInfo;
      if ( !v28 )
        goto LABEL_51;
      if ( System_String__IsNullOrEmpty(v28->fields.message, 0LL) )
        goto LABEL_28;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, item);
      if ( !OptionManager__GetMessageDisp(0LL) || !item->fields.isMessageDisp )
        goto LABEL_28;
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v29, -19.0, 0LL);
      v30 = item->fields.followerInfo;
      if ( !v30 )
        goto LABEL_51;
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.messageLabel;
      if ( !this )
        goto LABEL_51;
      message = v30->fields.message;
      break;
    case 2:
    case 5:
      goto LABEL_28;
    case 3:
    case 4:
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.svtNameRangeLabel;
      if ( !this )
        goto LABEL_51;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v27, -16.0, 0LL);
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
      v24 = 0;
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
  v22 = 1112801280;
LABEL_35:
  v25 = *(float *)&v22;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v26, v25, 0LL);
}