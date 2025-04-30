void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A492ED & 1) == 0 )
  {
    sub_1B863B8(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_4A492ED = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BC2660;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BC2960;
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

  if ( (byte_4A492EC & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B863B8(&SkillIconComponent___TypeInfo, v4);
    sub_1B863B8(&UIIconLabel___TypeInfo, v5);
    byte_4A492EC = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1B86460(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1B8635C(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1B86460(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B8635C(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B86460(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1B8635C(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1B86460(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B8635C(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1B86460(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B8635C(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1B86460(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1B8635C(&this->fields.appendSkillLevelIconLabelList);
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

  if ( (byte_4A492E6 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1B863B8(&StringLiteral_19966/*"icon_skill_mini"*/, v5);
    sub_1B863B8(&StringLiteral_20124/*"img_friend_skill"*/, v6);
    sub_1B863B8(&StringLiteral_19864/*"icon_append_mini"*/, v7);
    sub_1B863B8(&StringLiteral_20123/*"img_friend_appendskill"*/, v8);
    byte_4A492E6 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1B8635C(&this->fields.switchSkillUIList);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_19966/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20124/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19864/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20123/*"img_friend_appendskill"*/, 0LL);
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
  if ( (byte_4A492EB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&displaySkill);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4A492EB = 1;
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
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v28, 0LL) > 0;
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
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = *(_QWORD *)&displaySkill;
        sub_1B8635C(v22 + 32);
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
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v25 + 1;
        *(_QWORD *)(v26 + 32) = *(_QWORD *)&displaySkill;
        sub_1B8635C(v26 + 32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v27 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v27 )
      {
        SwitchUIWidgetComponent__Set(v27, (UIWidget_array *)switchSkillInfo, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1B86614(switchSkillInfo, *(_QWORD *)&displaySkill);
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

  if ( (byte_4A492EA & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A492EA = 1;
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
          sub_1B8661C(supportInfoButton, v10);
        v14 = &skillButtonList->obj.klass + (int)v13;
        v15 = (UnityEngine_Behaviour_o *)v14[4];
        if ( !v15 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v14[4],
                             (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_1B86614(supportInfoButton, v10);
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
  int32_t Kind_38641108; // w27
  System_String_o *FollowerBgImage; // x0
  UnityEngine_Object_o *dataLostMaskSprite; // x24
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x24
  __int64 v82; // x24
  __int64 v83; // x25
  struct FollowerInfo_o *v84; // x8
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x1
  int v89; // w24
  System_String_o *name; // x26
  FollowerSelectItemListViewItemDraw_o *v91; // x27
  int32_t dispLimitCount; // w25
  TreasureDvcInfo_o *v93; // x26
  __int64 v94; // x28
  __int64 v95; // x29
  bool v96; // w8
  UIRangeLabel_o *svtNameRangeLabel; // x24
  const MethodInfo *v98; // x2
  FollowerInfo_o *v99; // x8
  __int64 v100; // x24
  bool v101; // w1
  Il2CppObject *Master_object; // x0
  __int64 v103; // x23
  __int64 v104; // x29
  ServantLimitImageMaster_o *v105; // x28
  Il2CppObject *v106; // x0
  __int64 v107; // x23
  __int64 v108; // x29
  ServantLimitAddMaster_o *v109; // x28
  FollowerInfo_o *v110; // x8
  Il2CppObject *v111; // x25
  __int64 v112; // x22
  int32_t FollowerPointNpc; // w26
  UILabel_o *playerNameLabel; // x24
  System_String_o **v115; // x8
  int32_t v116; // w2
  UILabel_o *v117; // x24
  System_String_o **v118; // x8
  int32_t v119; // w2
  UILabel_o *v120; // x24
  System_String_o **v121; // x8
  int32_t v122; // w2
  UILabel_o *v123; // x26
  System_String_o **v124; // x8
  int32_t v125; // w2
  UILabel_o *v126; // x26
  System_String_o **v127; // x8
  int32_t v128; // w2
  UILabel_o *v129; // x26
  System_String_o **v130; // x8
  int32_t v131; // w2
  BalanceConfig_c *v132; // x0
  System_String_o **v133; // x8
  System_String_o *v134; // x23
  System_String_o *v135; // x24
  bool v136; // w1
  UILabel_o *loginDataLabel; // x24
  System_String_o *v138; // x25
  int64_t v139; // x0
  UILabel_o *v140; // x24
  System_String_o *v141; // x25
  int64_t v142; // x0
  UILabel_o *v143; // x24
  System_String_o *v144; // x25
  int64_t v145; // x0
  Il2CppObject *v146; // x0
  __int64 *v147; // x8
  Il2CppObject *v148; // x0
  Il2CppObject *v149; // x0
  const MethodInfo *v150; // x2
  UIRangeLabel_o *svtNpRangeLabel; // x24
  UnityEngine_Object_o *svtNpCommandCard; // x23
  UnityEngine_Object_o *eventUpValIcon; // x23
  struct SkillIconComponent_array *skillIconList; // x8
  struct SkillIconComponent_array *v155; // x8
  __int64 v156; // x23
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillIconComponent_array *v159; // x8
  __int64 v160; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *svtCommandCardList; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UILabel_o *v164; // x26
  System_String_o *v165; // x27
  int64_t v166; // x0
  UILabel_o *v167; // x26
  System_String_o *v168; // x27
  int64_t v169; // x0
  UILabel_o *v170; // x26
  System_String_o *v171; // x27
  int64_t v172; // x0
  Il2CppObject *v173; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x26
  _BOOL4 IsRecommendFollower_k__BackingField; // w27
  BalanceConfig_c *v176; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v178; // x9
  Il2CppObject *v179; // x0
  _BOOL4 v180; // w26
  BalanceConfig_c *v181; // x0
  bool v182; // zf
  __int64 v183; // x10
  Il2CppObject *v184; // x0
  _BOOL4 v185; // w26
  BalanceConfig_c *v186; // x0
  System_String_o **v187; // x8
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
  int value; // w22
  FollowerSelectItemListViewItemDraw_o *v202; // x1
  int v203; // w8
  __int64 v204; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x24
  int v206; // w22
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
  UnityEngine_GameObject_o *gameObject; // x0
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
  struct UISprite_o *typeTextSprite; // x8
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
  __int64 v243; // x22
  __int64 v244; // x23
  unsigned __int64 v245; // x25
  struct SkillInfo_array *v246; // x8
  struct UnityEngine_GameObject_array *v247; // x9
  int32_t *v248; // x26
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
  __int64 v270; // x22
  __int64 v271; // x23
  unsigned __int64 v272; // x25
  struct SkillInfo_array *v273; // x8
  struct UnityEngine_GameObject_array *v274; // x9
  int32_t *v275; // x26
  struct SkillIconComponent_array *v276; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v278; // x8
  struct SkillIconComponent_array *v279; // x8
  struct UIIconLabel_array *v280; // x8
  struct SkillIconComponent_array *v281; // x8
  __int64 v282; // x9
  int32_t v283; // w8
  bool v284; // w1
  __int64 v285; // x8
  _QWORD *v286; // x9
  __int64 v287; // x10
  __int64 v288; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x24
  UnityEngine_Object_o *v290; // x23
  ServantCommandCardListComponent_o *v291; // x24
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x25
  int32_t v294; // w26
  UnityEngine_Object_o *v295; // x23
  int64_t pushUserSvtId; // x8
  bool v297; // w24
  UnityEngine_Object_o *v298; // x23
  UnityEngine_Object_o *v299; // x23
  UISprite_o *v300; // x24
  UISprite_o *v301; // x23
  UILabel_o *v302; // x24
  System_String_o *v303; // x23
  __int64 v304; // x2
  __int64 v305; // x3
  __int64 v306; // x4
  Il2CppObject *v307; // x0
  UnityEngine_Object_o *openClassBoardNumLabel; // x23
  __int64 v309; // x2
  __int64 v310; // x3
  __int64 v311; // x4
  Il2CppObject **v312; // x9
  Il2CppObject *v313; // x23
  Il2CppObject *v314; // x0
  FollowerSelectItemListViewItemDraw_o *v315; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x23
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w22
  UnityEngine_Object_o *classBoardOpenButtonLabel; // x23
  int32_t OpenClassBoardNum_k__BackingField; // w22
  UILabel_o *v320; // x24
  UnityEngine_GameObject_o *v321; // x24
  FollowerSelectItemListViewItemDraw_c *v322; // x8
  __int64 v323; // x9
  UISprite_o *classBoardBackSprite; // x24
  float v325; // s0
  float v326; // s8
  float v327; // s0
  float v328; // s9
  UnityEngine_GameObject_o *v329; // x0
  float LocalPositionX; // s0
  float v331; // s10
  UnityEngine_GameObject_o *v332; // x0
  UISprite_o *baseSprite; // x22
  UILabel_o *maskMessageLabel; // x22
  char v335; // w26
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v337; // x22
  __int64 v338; // x23
  __int64 methodPtr_low; // x9
  struct UISprite_o *v340; // x23
  int32_t v341; // w0
  int32_t m_CancellationTokenSource; // w23
  int32_t v343; // w22
  QuestPhaseEntity_o *v344; // x0
  QuestPhaseEntity_o *v345; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v347; // x23
  __int64 v348; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v349; // x21
  FollowerSelectItemListViewItemDraw_o *v350; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v353; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct QuestRestrictionInfo_o *v355; // x22
  int32_t eventId; // w21
  Il2CppObject *v357; // x22
  UnityEngine_Object_o *recommendedUser; // x21
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v361; // s0
  float v362; // s8
  FollowerSelectItemListViewItemDraw_o *v363; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  int64_t v368; // x2
  struct UnityEngine_Vector3_StaticFields *v369; // x8
  UsedCount_o *UsedCount; // x21
  BalanceConfig_c *v371; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x21
  UILabel_o *numberOfUsabletimesLabel; // x21
  UILabel_o *numberOfUsabletimesSuffixLabel; // x21
  int v376; // w21
  System_String_o *v377; // x0
  System_String_o *v378; // x0
  System_String_o *v379; // x0
  FollowerSelectItemListViewItemDraw_o *v380; // x0
  FollowerSelectItemListViewItem_o *v381; // x1
  const MethodInfo *v382; // x2
  FollowerInfo_o **v383; // [xsp+20h] [xbp-D0h]
  int32_t v384; // [xsp+28h] [xbp-C8h]
  _BOOL4 IsNoneSupportFriendPoint_k__BackingField; // [xsp+2Ch] [xbp-C4h]
  System_String_o *spriteName; // [xsp+30h] [xbp-C0h]
  int TimesToRestart_k__BackingField; // [xsp+3Ch] [xbp-B4h] BYREF
  UnityEngine_Color_o v388; // [xsp+40h] [xbp-B0h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-A0h] BYREF
  int v390; // [xsp+64h] [xbp-8Ch] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+78h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16
  UnityEngine_Color_o v401; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v402; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = item;
  v8 = this;
  if ( (byte_4A492E7 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, item);
    sub_1B863B8(&BalanceConfig_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v17);
    sub_1B863B8(&DataManager_TypeInfo, v18);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v19);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v21);
    sub_1B863B8(&FollowerRootComponent_TypeInfo, v22);
    sub_1B863B8(&FollowerSelectItemListViewItemDraw_TypeInfo, v23);
    sub_1B863B8(&Grade_TypeInfo, v24);
    sub_1B863B8(&int_TypeInfo, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Add__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v28);
    sub_1B863B8(&LocalizationManager_TypeInfo, v29);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v30);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    sub_1B863B8(&OptionManager_TypeInfo, v32);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v35);
    sub_1B863B8(&SkillInfo___TypeInfo, v36);
    sub_1B863B8(&TitleInfoControl_TypeInfo, v37);
    sub_1B863B8(&StringLiteral_3693/*"COMMON_NO_ENTRY"*/, v38);
    sub_1B863B8(&StringLiteral_6397/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v39);
    sub_1B863B8(&StringLiteral_6376/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v40);
    sub_1B863B8(&StringLiteral_11446/*"SERVANT_HIDE_NAME"*/, v41);
    sub_1B863B8(&StringLiteral_9201/*"NP_DISABLE_COLOR_NAME"*/, v42);
    sub_1B863B8(&StringLiteral_6377/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v43);
    sub_1B863B8(&StringLiteral_6335/*"FFFFFF"*/, v44);
    sub_1B863B8(&StringLiteral_9202/*"NP_HIDE_NAME"*/, v45);
    sub_1B863B8(&StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1B863B8(&StringLiteral_13170/*"TIME_BEFORE_TITLE_COLOR"*/, v47);
    sub_1B863B8(&StringLiteral_9203/*"NP_HIDE_NAME_LEVEL"*/, v48);
    sub_1B863B8(&StringLiteral_6390/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v49);
    sub_1B863B8(&StringLiteral_6375/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v50);
    sub_1B863B8(&StringLiteral_17243/*"btn_bg_29_2"*/, v51);
    sub_1B863B8(&StringLiteral_19979/*"icon_support_01"*/, v52);
    sub_1B863B8(&StringLiteral_9206/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1B863B8(&StringLiteral_20110/*"img_frames_mask01"*/, v54);
    sub_1B863B8(&StringLiteral_12262/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v55);
    sub_1B863B8(&StringLiteral_12263/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v56);
    sub_1B863B8(&StringLiteral_6389/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v57);
    sub_1B863B8(&StringLiteral_6391/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v58);
    sub_1B863B8(&StringLiteral_6374/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v59);
    sub_1B863B8(&StringLiteral_18249/*"datalost_svt_select"*/, v60);
    sub_1B863B8(&StringLiteral_6334/*"FFFF00"*/, v61);
    sub_1B863B8(&StringLiteral_9176/*"NO_ENTRY_NAME"*/, v62);
    sub_1B863B8(&StringLiteral_9200/*"NP_COLOR_NAME"*/, v63);
    sub_1B863B8(&StringLiteral_15795/*"[{0}]+{1}[-]"*/, v64);
    sub_1B863B8(&StringLiteral_1/*""*/, v65);
    sub_1B863B8(&StringLiteral_19940/*"icon_friend"*/, v66);
    sub_1B863B8(&StringLiteral_6378/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v67);
    sub_1B863B8(&StringLiteral_19939/*"icon_follow"*/, v68);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_20153/*"img_listbg_02"*/, v69);
    byte_4A492E7 = 1;
  }
  tdInfo = 0LL;
  entity = 0LL;
  v390 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v388.fields.r = 0LL;
  *(_QWORD *)&v388.fields.b = 0LL;
  switchSkillUIList = v8->fields.switchSkillUIList;
  v8->fields.displaySkill = displaySkill;
  if ( !switchSkillUIList )
    goto LABEL_233;
  size = switchSkillUIList->fields._size;
  v72 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v72;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_233;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_233;
  ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  if ( (v8->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
    if ( !this )
      goto LABEL_233;
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
      goto LABEL_233;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_233;
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
    Kind_38641108 = Grade__GetKind_38641108(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_38641108, 0LL);
    dataLostMaskSprite = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    spriteName = FollowerBgImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    dataLostMaskMessageLabel = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_233;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    if ( !v77 )
      goto LABEL_49;
    v83 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
    v82 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v393.fields.currentCryptoKey = v83;
    *(_QWORD *)&v393.fields.fakeValue = v82;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                     v393,
                                                     0LL);
    if ( (int)this < 1 )
    {
LABEL_49:
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(
                                                       v7,
                                                       (const MethodInfo *)item);
      if ( !v8->fields.servantFaceIcon )
        goto LABEL_233;
      ServantFaceIconComponent__SetEquipDangling(v8->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0LL);
      svtNameRangeLabel = v8->fields.svtNameRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3693/*"COMMON_NO_ENTRY"*/,
                                                       0LL);
      if ( !svtNameRangeLabel )
        goto LABEL_233;
      UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
      v99 = *p_followerInfo;
      if ( *p_followerInfo )
      {
        switch ( v99->fields.type )
        {
          case 1:
            playerNameLabel = v8->fields.playerNameLabel;
            if ( (byte_4A492DF & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_18829/*"error"*/, item);
              byte_4A492DF = 1;
              v99 = *p_followerInfo;
            }
            if ( !playerNameLabel )
              goto LABEL_233;
            v115 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_18829/*"error"*/;
            UILabel__set_text(playerNameLabel, *v115, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v116 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Set_39193520((UIIconLabel_o *)this, 2, v116, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
            loginDataLabel = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v138 = LocalizationManager__Get((System_String_o *)StringLiteral_13170/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v139 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v146 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v139, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v138, v146, 0LL);
            if ( !loginDataLabel )
              goto LABEL_233;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_233;
            v147 = &StringLiteral_19940/*"icon_friend"*/;
            goto LABEL_191;
          case 2:
            v117 = v8->fields.playerNameLabel;
            if ( (byte_4A492DF & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_18829/*"error"*/, item);
              byte_4A492DF = 1;
              v99 = *p_followerInfo;
            }
            if ( !v117 )
              goto LABEL_233;
            v118 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_18829/*"error"*/;
            UILabel__set_text(v117, *v118, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v119 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Set_39193520((UIIconLabel_o *)this, 2, v119, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
            v140 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v141 = LocalizationManager__Get((System_String_o *)StringLiteral_13170/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v142 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v148 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v142, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v141, v148, 0LL);
            if ( !v140 )
              goto LABEL_233;
            UILabel__set_text(v140, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_233;
            UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
            goto LABEL_193;
          case 3:
          case 4:
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
            if ( !this )
              goto LABEL_233;
            v100 = StringLiteral_20153/*"img_listbg_02"*/;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
            if ( !this )
              goto LABEL_233;
            UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_233;
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19979/*"icon_support_01"*/, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_233;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
            if ( !this )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_233;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
            if ( !this )
              goto LABEL_233;
            spriteName = (System_String_o *)v100;
            v101 = 0;
            goto LABEL_197;
          case 5:
            v120 = v8->fields.playerNameLabel;
            if ( (byte_4A492DF & 1) == 0 )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_18829/*"error"*/, item);
              byte_4A492DF = 1;
              v99 = *p_followerInfo;
            }
            if ( !v120 )
              goto LABEL_233;
            v121 = v99 ? &v99->fields.userName : (System_String_o **)&StringLiteral_18829/*"error"*/;
            UILabel__set_text(v120, *v121, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
            v122 = *p_followerInfo ? (*p_followerInfo)->fields.userLv : 1;
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Set_39193520((UIIconLabel_o *)this, 2, v122, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
            v143 = v8->fields.loginDataLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v144 = LocalizationManager__Get((System_String_o *)StringLiteral_13170/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
            v145 = *p_followerInfo ? FollowerInfo__getUpdatedAt(*p_followerInfo, 0LL) : 0LL;
            v149 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v145, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v144, v149, 0LL);
            if ( !v143 )
              goto LABEL_233;
            UILabel__set_text(v143, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_233;
            v147 = &StringLiteral_19939/*"icon_follow"*/;
LABEL_191:
            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v147, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
            if ( !this )
              goto LABEL_233;
            ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
LABEL_193:
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
            if ( !this )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_233;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)this,
              !v7->fields._IsRecommendFollower_k__BackingField,
              0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
            if ( !this )
              goto LABEL_233;
            v101 = 1;
LABEL_197:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v101, 0LL);
            break;
          default:
            break;
        }
      }
      FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v98);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v150);
      svtNpRangeLabel = v8->fields.svtNpRangeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_9176/*"NO_ENTRY_NAME"*/,
                                                       0LL);
      if ( !svtNpRangeLabel )
        goto LABEL_233;
      UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
      svtNpCommandCard = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtNpCommandCard;
        if ( !this )
          goto LABEL_233;
        ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
      if ( !this )
        goto LABEL_233;
      UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_233;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
      if ( !this )
        goto LABEL_233;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      eventUpValIcon = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
        if ( !this )
          goto LABEL_233;
        EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
      }
      skillIconList = v8->fields.skillIconList;
      if ( !skillIconList )
        goto LABEL_233;
      v8->fields.skillInfoList = (struct SkillInfo_array *)sub_1B86460(SkillInfo___TypeInfo, skillIconList->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1B8635C(&v8->fields.skillInfoList);
      v155 = v8->fields.skillIconList;
      if ( !v155 )
        goto LABEL_233;
      v156 = 0LL;
      while ( (int)v156 < (signed int)v155->max_length )
      {
        skillBaseList = v8->fields.skillBaseList;
        if ( skillBaseList )
        {
          if ( (unsigned int)v156 >= skillBaseList->max_length )
LABEL_754:
            sub_1B8661C(this, item);
          this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v156];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v155 = v8->fields.skillIconList;
            ++v156;
            if ( v155 )
              continue;
          }
        }
        goto LABEL_233;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      appendSkillIconList = v8->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_233;
      v8->fields.appendSkillInfoList = (struct SkillInfo_array *)sub_1B86460(
                                                                   SkillInfo___TypeInfo,
                                                                   appendSkillIconList->max_length);
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1B8635C(&v8->fields.appendSkillInfoList);
      v159 = v8->fields.appendSkillIconList;
      if ( !v159 )
        goto LABEL_233;
      v160 = 0LL;
      while ( (int)v160 < (signed int)v159->max_length )
      {
        appendSkillBaseList = v8->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_233;
        if ( (unsigned int)v160 >= appendSkillBaseList->max_length )
          goto LABEL_754;
        this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v160];
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          v159 = v8->fields.appendSkillIconList;
          ++v160;
          if ( v159 )
            continue;
        }
        goto LABEL_233;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      svtCommandCardList = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtCommandCardList;
        if ( !this )
          goto LABEL_233;
        ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)this, 0LL);
      }
      pushSprite = (UnityEngine_Object_o *)v8->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        goto LABEL_607;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      goto LABEL_246;
    }
    v84 = v7->fields.followerInfo;
    if ( !v84 )
      goto LABEL_233;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_233;
    v384 = Kind_38641108;
    ServantFaceIconComponent__Set_39181528(
      (ServantFaceIconComponent_o *)this,
      v77,
      v7->fields.iconLabelInfo1,
      v7->fields.iconLabelInfo2,
      0,
      v84->fields.imageSvtId,
      0LL);
    FollowerSelectItemListViewItemDraw__setupMessageUI(v8, v7, v85);
    FollowerSelectItemListViewItemDraw__SetupLockUI(v8, v7, v86);
    FollowerSelectItemListViewItem__GetNpInfo(v7, &tdInfo, v87);
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(v7, v88);
    if ( !tdInfo )
      goto LABEL_233;
    v89 = (int)this;
    IsNoneSupportFriendPoint_k__BackingField = v7->fields._IsNoneSupportFriendPoint_k__BackingField;
    name = tdInfo->fields.name;
    v91 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
    v383 = &v7->fields.followerInfo;
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
        *(_QWORD *)&v394.fields.currentCryptoKey = v95;
        *(_QWORD *)&v394.fields.fakeValue = v94;
        this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                         v394,
                                                         0LL);
        if ( !v93 )
          goto LABEL_233;
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
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_233;
        this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
        if ( !this )
          goto LABEL_233;
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
      goto LABEL_233;
    ServantFaceIconComponent__SetDispRaritySprite((ServantFaceIconComponent_o *)this, v96, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.servantFaceIcon;
    if ( !this )
      goto LABEL_233;
    ServantFaceIconComponent__SetDispClassSprite(
      (ServantFaceIconComponent_o *)this,
      !v7->fields._IsDataLost_k__BackingField,
      0LL);
    if ( !ServantLeaderInfo__IsNpc(v77, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v103 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
      v104 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
      v105 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v395.fields.currentCryptoKey = v103;
      *(_QWORD *)&v395.fields.fakeValue = v104;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                       v395,
                                                       0LL);
      if ( !v105 )
        goto LABEL_233;
      dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(v105, (int32_t)this, dispLimitCount, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v106 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v107 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
    v108 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
    v109 = (ServantLimitAddMaster_o *)v106;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v396.fields.currentCryptoKey = v107;
    *(_QWORD *)&v396.fields.fakeValue = v108;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                     v396,
                                                     0LL);
    if ( !tdInfo )
      goto LABEL_233;
    p_followerInfo = &v7->fields.followerInfo;
    if ( !v109 )
      goto LABEL_233;
    this = (FollowerSelectItemListViewItemDraw_o *)ServantLimitAddMaster__GetOverwriteTDName(
                                                     v109,
                                                     (int32_t)this,
                                                     dispLimitCount,
                                                     name,
                                                     tdInfo->fields.lv,
                                                     0LL);
    v110 = *v383;
    if ( *v383 )
    {
      v111 = (Il2CppObject *)this;
      switch ( v110->fields.type )
      {
        case 1:
          v123 = v8->fields.playerNameLabel;
          if ( (byte_4A492DF & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_18829/*"error"*/, item);
            byte_4A492DF = 1;
            v110 = *v383;
          }
          if ( !v123 )
            goto LABEL_233;
          v124 = v110 ? &v110->fields.userName : (System_String_o **)&StringLiteral_18829/*"error"*/;
          UILabel__set_text(v123, *v124, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v125 = *v383 ? (*v383)->fields.userLv : 1;
          if ( !this )
            goto LABEL_233;
          UIIconLabel__Set_39193520((UIIconLabel_o *)this, 2, v125, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
          v164 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v165 = LocalizationManager__Get((System_String_o *)StringLiteral_13170/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v166 = *v383 ? FollowerInfo__getUpdatedAt(*v383, 0LL) : 0LL;
          v173 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v166, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v165, v173, 0LL);
          if ( !v164 )
            goto LABEL_233;
          UILabel__set_text(v164, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_233;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19940/*"icon_friend"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_233;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_274;
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_233;
          this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)this,
                                                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !this )
            goto LABEL_233;
          this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           questRestrictionInfo->fields.questId,
                                                           (const MethodInfo_3214280 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !this )
            goto LABEL_233;
          LOBYTE(questRestrictionInfo) = QuestEntity__HasFlag_40473784(
                                           (QuestEntity_o *)this,
                                           0x8000000LL,
                                           questRestrictionInfo->fields.questPhase,
                                           0LL);
LABEL_274:
          if ( IsNoneSupportFriendPoint_k__BackingField )
          {
LABEL_294:
            FollowerPointNpc = 0;
          }
          else
          {
            IsRecommendFollower_k__BackingField = v7->fields._IsRecommendFollower_k__BackingField;
            v176 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v176 = BalanceConfig_TypeInfo;
            }
            static_fields = v176->static_fields;
            v178 = 212LL;
            if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
              v178 = 680LL;
            if ( IsRecommendFollower_k__BackingField )
              v178 = 224LL;
LABEL_300:
            FollowerPointNpc = *(int32_t *)((char *)&static_fields->CriticalRateToAddByQuickFirstBonus + v178);
          }
          v187 = (System_String_o **)&StringLiteral_9206/*"NP_MAX_COLOR_NAME"*/;
          if ( v89 <= 1 )
            v187 = (System_String_o **)&StringLiteral_9200/*"NP_COLOR_NAME"*/;
          v188 = *v187;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v189 = LocalizationManager__Get(v188, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v189, v111, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_233;
          v91 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)this,
            !v7->fields._IsRecommendFollower_k__BackingField,
            0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_233;
          v136 = 1;
LABEL_309:
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v136, 0LL);
          break;
        case 2:
          v126 = v8->fields.playerNameLabel;
          if ( (byte_4A492DF & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_18829/*"error"*/, item);
            byte_4A492DF = 1;
            v110 = *v383;
          }
          if ( !v126 )
            goto LABEL_233;
          v127 = v110 ? &v110->fields.userName : (System_String_o **)&StringLiteral_18829/*"error"*/;
          UILabel__set_text(v126, *v127, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v128 = *v383 ? (*v383)->fields.userLv : 1;
          if ( !this )
            goto LABEL_233;
          UIIconLabel__Set_39193520((UIIconLabel_o *)this, 2, v128, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
          v167 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v168 = LocalizationManager__Get((System_String_o *)StringLiteral_13170/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v169 = *v383 ? FollowerInfo__getUpdatedAt(*v383, 0LL) : 0LL;
          v179 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v169, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v168, v179, 0LL);
          if ( !v167 )
            goto LABEL_233;
          UILabel__set_text(v167, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_233;
          UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
          if ( IsNoneSupportFriendPoint_k__BackingField )
            goto LABEL_294;
          v180 = v7->fields._IsRecommendFollower_k__BackingField;
          v181 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v181 = BalanceConfig_TypeInfo;
          }
          static_fields = v181->static_fields;
          v182 = !v180;
          v178 = 224LL;
          v183 = 216LL;
          goto LABEL_298;
        case 3:
        case 4:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
          if ( !this )
            goto LABEL_233;
          v112 = StringLiteral_20153/*"img_listbg_02"*/;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          if ( !this )
            goto LABEL_233;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.loginDataLabel;
          if ( !this )
            goto LABEL_233;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_233;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19979/*"icon_support_01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_233;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          if ( IsNoneSupportFriendPoint_k__BackingField )
          {
            FollowerPointNpc = 0;
          }
          else
          {
            v132 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v132 = BalanceConfig_TypeInfo;
            }
            FollowerPointNpc = v132->static_fields->FollowerPointNpc;
          }
          spriteName = (System_String_o *)v112;
          if ( *v383 && (*v383)->fields.type == 3 )
          {
            v133 = (System_String_o **)&StringLiteral_9206/*"NP_MAX_COLOR_NAME"*/;
            if ( v89 <= 1 )
              v133 = (System_String_o **)&StringLiteral_9200/*"NP_COLOR_NAME"*/;
            v134 = *v133;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v135 = LocalizationManager__Get(v134, 0LL);
          }
          else
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v135 = LocalizationManager__Get((System_String_o *)StringLiteral_9201/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
            v111 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9202/*"NP_HIDE_NAME"*/, 0LL);
          }
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v135, v111, 0LL);
          if ( !v8->fields.supportInfoButton )
            goto LABEL_233;
          v91 = this;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v8->fields.supportInfoButton,
                                                           0LL);
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.svtProfileBackSpr;
          if ( !this )
            goto LABEL_233;
          v136 = 0;
          goto LABEL_309;
        case 5:
          v129 = v8->fields.playerNameLabel;
          if ( (byte_4A492DF & 1) == 0 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_18829/*"error"*/, item);
            byte_4A492DF = 1;
            v110 = *v383;
          }
          if ( !v129 )
            goto LABEL_233;
          v130 = v110 ? &v110->fields.userName : (System_String_o **)&StringLiteral_18829/*"error"*/;
          UILabel__set_text(v129, *v130, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerLevelIconLabel;
          v131 = *v383 ? (*v383)->fields.userLv : 1;
          if ( !this )
            goto LABEL_233;
          UIIconLabel__Set_39193520((UIIconLabel_o *)this, 2, v131, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
          v170 = v8->fields.loginDataLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v171 = LocalizationManager__Get((System_String_o *)StringLiteral_13170/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
          v172 = *v383 ? FollowerInfo__getUpdatedAt(*v383, 0LL) : 0LL;
          v184 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v172, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v171, v184, 0LL);
          if ( !v170 )
            goto LABEL_233;
          UILabel__set_text(v170, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_233;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19939/*"icon_follow"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.typeTextSprite;
          if ( !this )
            goto LABEL_233;
          ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
            this,
            this->klass[2]._1.interopData);
          if ( IsNoneSupportFriendPoint_k__BackingField )
            goto LABEL_294;
          v185 = v7->fields._IsRecommendFollower_k__BackingField;
          v186 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v186 = BalanceConfig_TypeInfo;
          }
          static_fields = v186->static_fields;
          v182 = !v185;
          v178 = 224LL;
          v183 = 680LL;
LABEL_298:
          if ( v182 )
            v178 = v183;
          goto LABEL_300;
        default:
          goto LABEL_95;
      }
    }
    else
    {
LABEL_95:
      FollowerPointNpc = 0;
    }
    IsHideSupport = ServantLeaderInfo__IsHideSupport(v77, 0LL);
    v192 = v8->fields.svtNameRangeLabel;
    if ( IsHideSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11446/*"SERVANT_HIDE_NAME"*/,
                                                       0LL);
      if ( !v192 )
        goto LABEL_233;
      UIRangeLabel__Set(v192, (System_String_o *)this, 0LL, 1, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_233;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( !*v383 || (*v383)->fields.type != 4 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9203/*"NP_HIDE_NAME_LEVEL"*/,
                                                         0LL);
        v91 = this;
      }
    }
    else
    {
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v7, v191);
      if ( !v192 )
        goto LABEL_233;
      UIRangeLabel__Set(v192, (System_String_o *)this, 0LL, 1, 0, 0LL);
    }
    if ( !tdInfo )
      goto LABEL_233;
    strengthStatus = tdInfo->fields.strengthStatus;
    if ( ServantLeaderInfo__IsHideSupport(v77, 0LL) || ServantLeaderInfo__IsNotUsedTreasureDeice(v77, 0LL) )
      strengthStatus = 0;
    v194 = v8->fields.svtNpRangeLabel;
    this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
    if ( !v194 )
      goto LABEL_233;
    UIRangeLabel__Set(v194, (System_String_o *)v91, (System_String_o *)this, 0, 0, 0LL);
    v195 = (UnityEngine_Object_o *)v8->fields.svtNpCommandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Kind_38641108 = v384;
    if ( UnityEngine_Object__op_Inequality(v195, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
      v197 = v8->fields.svtNpCommandCard;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v197 )
          goto LABEL_233;
        ServantNpCommandCardComponent__SetHide(v8->fields.svtNpCommandCard, 0LL);
      }
      else
      {
        if ( !v197 )
          goto LABEL_233;
        ServantNpCommandCardComponent__Set(v8->fields.svtNpCommandCard, tdInfo, 0LL);
      }
    }
    if ( IsNoneSupportFriendPoint_k__BackingField )
    {
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v8->fields.friendPointIconLabel, 0, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v8->fields.friendPointData2Label, 0, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
      if ( !this )
        goto LABEL_233;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    else
    {
      FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(v7, v196);
      friendPointCampaignEntity = v7->fields.friendPointCampaignEntity;
      v200 = FriendPointUpVal;
      if ( friendPointCampaignEntity )
        value = friendPointCampaignEntity->fields.value;
      else
        value = 0;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
      if ( !this )
        goto LABEL_233;
      UIIconLabel__Set_39193520((UIIconLabel_o *)this, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
      if ( v200 > 0 || value >= 1 )
      {
        if ( value <= 0 )
          v203 = 1000;
        else
          v203 = value;
        v204 = 274877907LL * (v203 * v200 + (v203 - 1000) * FollowerPointNpc);
        friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
        v206 = (v204 >> 38) + ((unsigned __int64)v204 >> 63);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v207 = LocalizationManager__Get((System_String_o *)StringLiteral_6397/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
        TimesToRestart_k__BackingField = v206;
        v211 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v208, v209, v210);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v207, v211, 0LL);
        if ( !friendPointData2Label )
          goto LABEL_233;
        v202 = this;
        this = friendPointData2Label;
      }
      else
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
        if ( !this )
          goto LABEL_233;
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
          goto LABEL_233;
        UILabel__set_gradientTop(campaignLabel, (UnityEngine_Color_o)this->fields.skillButtonList->obj, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.campaignLabel;
        if ( !this )
          goto LABEL_233;
        UILabel__set_gradientBottom(
          (UILabel_o *)this,
          FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
          0LL);
        campaignLabel = v8->fields.campaignLabel;
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignName(
                                                         v7,
                                                         v213);
        if ( !campaignLabel )
          goto LABEL_233;
        v214 = this;
      }
      else
      {
        if ( !campaignLabel )
          goto LABEL_233;
        v214 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text(campaignLabel, (System_String_o *)v214, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.supportInfoButton;
      v216 = activeSelf ? -3.0 : 39.0;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      v217 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointIconLabel;
      v218 = v217 ? -22.0 : 20.0;
      if ( !this )
        goto LABEL_233;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, v216, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendPointData2Label;
      if ( !this )
        goto LABEL_233;
      v220 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionY(v220, v218, 0LL);
    }
    v221 = (UnityEngine_Object_o *)v8->fields.eventUpValIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v221, 0LL, 0LL) )
    {
      if ( FollowerSelectItemListViewItem__get_ServantLeader(v7, v222) )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v224);
        if ( !this )
          goto LABEL_233;
        baseButton = this->fields.baseButton;
        servantFaceIcon = this->fields.servantFaceIcon;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v397.fields.currentCryptoKey = baseButton;
        *(_QWORD *)&v397.fields.fakeValue = servantFaceIcon;
        v227 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v397, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v228);
        if ( !this )
          goto LABEL_233;
        Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
      }
      else
      {
        Rarity = -1;
        v227 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v7, v224);
      if ( !this )
        goto LABEL_233;
      if ( this->fields.typeTextSprite )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                         v7,
                                                         (const MethodInfo *)item);
        if ( !this )
          goto LABEL_233;
        typeTextSprite = this->fields.typeTextSprite;
        if ( !typeTextSprite )
          goto LABEL_233;
        topAnchor = typeTextSprite->fields.topAnchor;
        v231 = *(_QWORD *)&typeTextSprite->fields.updateAnchors;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v398.fields.currentCryptoKey = topAnchor;
        *(_QWORD *)&v398.fields.fakeValue = v231;
        Kind_38641108 = v384;
        v233 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v398, 0LL);
      }
      else
      {
        v233 = -1;
      }
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.eventUpValIcon;
      if ( !this )
        goto LABEL_233;
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
      goto LABEL_233;
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
            goto LABEL_754;
          v242 = (*p_skillInfoList)->m_Items[v240];
          if ( v242 && v242->fields.id >= 1 )
            v239 = v240 + 1;
        }
        if ( (__int64)++v240 >= (int)v237 )
          goto LABEL_407;
      }
      goto LABEL_233;
    }
    v239 = 0;
LABEL_407:
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
            goto LABEL_233;
          if ( v245 >= v251->max_length )
            goto LABEL_754;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v251->obj.klass + v244);
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v246 = *p_skillInfoList;
          if ( !*p_skillInfoList )
            goto LABEL_233;
          if ( v245 >= v246->max_length )
            goto LABEL_754;
          v247 = v8->fields.skillBaseList;
          if ( !v247 )
            goto LABEL_233;
          if ( v245 >= v247->max_length )
            goto LABEL_754;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v247->obj.klass + v244);
          if ( !this )
            goto LABEL_233;
          v248 = (int32_t *)*((_QWORD *)&v246->obj.klass + v244);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v248 )
              v248[4] = 0;
            v249 = v8->fields.skillIconList;
            if ( !v249 )
              goto LABEL_233;
            if ( v245 >= v249->max_length )
              goto LABEL_754;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v249->obj.klass + v244);
            if ( !this )
              goto LABEL_233;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            skillLevelIconLabelList = v8->fields.skillLevelIconLabelList;
            if ( !skillLevelIconLabelList )
              goto LABEL_233;
            if ( v245 >= skillLevelIconLabelList->max_length )
              goto LABEL_754;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v244);
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v252 = v8->fields.skillIconList;
            if ( !v252 )
              goto LABEL_233;
            if ( v245 >= v252->max_length )
              goto LABEL_754;
            if ( !v248 )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v252->obj.klass + v244);
            if ( !this )
              goto LABEL_233;
            SkillIconComponent__Set_39192712((SkillIconComponent_o *)this, v248[4], v248[5], v248[12], v248[13], 0LL);
            v253 = v8->fields.skillLevelIconLabelList;
            if ( !v253 )
              goto LABEL_233;
            if ( v245 >= v253->max_length )
              goto LABEL_754;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v253->obj.klass + v244);
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Set_39193520((UIIconLabel_o *)this, 48, v248[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
          }
        }
        v254 = v8->fields.skillIconList;
        if ( !v254 )
          goto LABEL_233;
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
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_233;
      item = (FollowerSelectItemListViewItem_o *)v8->fields.skillInfoUiWidget;
      v258 = *(_QWORD *)&this->fields.m_CachedPtr;
      v259 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v258 )
        goto LABEL_233;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v258 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
      }
      else
      {
        v261 = v258 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v261 + 32) = item;
        sub_1B8635C(v261 + 32);
      }
    }
    else
    {
      if ( v256 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_233;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_233;
        v257 = 0;
      }
      else
      {
        if ( v256 )
          goto LABEL_456;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_233;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          1.0);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.skillInfoUiWidget;
        if ( !this )
          goto LABEL_233;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_233;
        v257 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v257, 0LL);
    }
LABEL_456:
    p_appendSkillInfoList = &v8->fields.appendSkillInfoList;
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                     v7,
                                                     &v8->fields.appendSkillInfoList,
                                                     v7->fields.isNpc,
                                                     v235);
    v263 = v8->fields.appendSkillIconList;
    if ( !v263 )
      goto LABEL_233;
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
              goto LABEL_754;
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
      v270 = v266;
      v271 = 4LL;
      do
      {
        v272 = v271 - 4;
        if ( v271 - 4 >= v270 )
        {
          v278 = v8->fields.appendSkillBaseList;
          if ( !v278 )
            goto LABEL_233;
          if ( v272 >= v278->max_length )
            goto LABEL_754;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v278->obj.klass + v271);
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          v273 = *p_appendSkillInfoList;
          if ( !*p_appendSkillInfoList )
            goto LABEL_233;
          if ( v272 >= v273->max_length )
            goto LABEL_754;
          v274 = v8->fields.appendSkillBaseList;
          if ( !v274 )
            goto LABEL_233;
          if ( v272 >= v274->max_length )
            goto LABEL_754;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v274->obj.klass + v271);
          if ( !this )
            goto LABEL_233;
          v275 = (int32_t *)*((_QWORD *)&v273->obj.klass + v271);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( v275 )
              v275[4] = 0;
            v276 = v8->fields.appendSkillIconList;
            if ( !v276 )
              goto LABEL_233;
            if ( v272 >= v276->max_length )
              goto LABEL_754;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v276->obj.klass + v271);
            if ( !this )
              goto LABEL_233;
            SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
            appendSkillLevelIconLabelList = v8->fields.appendSkillLevelIconLabelList;
            if ( !appendSkillLevelIconLabelList )
              goto LABEL_233;
            if ( v272 >= appendSkillLevelIconLabelList->max_length )
              goto LABEL_754;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v271);
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
          }
          else
          {
            v279 = v8->fields.appendSkillIconList;
            if ( !v279 )
              goto LABEL_233;
            if ( v272 >= v279->max_length )
              goto LABEL_754;
            if ( !v275 )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v279->obj.klass + v271);
            if ( !this )
              goto LABEL_233;
            SkillIconComponent__Set_39192712((SkillIconComponent_o *)this, v275[4], v275[5], v275[12], v275[13], 0LL);
            v280 = v8->fields.appendSkillLevelIconLabelList;
            if ( !v280 )
              goto LABEL_233;
            if ( v272 >= v280->max_length )
              goto LABEL_754;
            this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v280->obj.klass + v271);
            if ( !this )
              goto LABEL_233;
            UIIconLabel__Set_39193520((UIIconLabel_o *)this, 48, v275[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
          }
        }
        v281 = v8->fields.appendSkillIconList;
        if ( !v281 )
          goto LABEL_233;
        v282 = v271 - 3;
        ++v271;
      }
      while ( v282 < (int)v281->max_length );
    }
    v283 = v8->fields.displaySkill;
    if ( v283 == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_233;
      item = (FollowerSelectItemListViewItem_o *)v8->fields.appendSkillInfoUiWidget;
      v285 = *(_QWORD *)&this->fields.m_CachedPtr;
      v286 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v285 )
        goto LABEL_233;
      v287 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v287 >= *(_DWORD *)(v285 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
      }
      else
      {
        v288 = v285 + 8 * v287;
        LODWORD(this->fields.m_CancellationTokenSource) = v287 + 1;
        *(_QWORD *)(v288 + 32) = item;
        sub_1B8635C(v288 + 32);
      }
    }
    else
    {
      if ( v283 == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_233;
        ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          1.0);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_233;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_233;
        v284 = 1;
      }
      else
      {
        if ( v283 )
          goto LABEL_521;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.appendSkillInfoUiWidget;
        if ( !this )
          goto LABEL_233;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_233;
        v284 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v284, 0LL);
    }
    if ( v8->fields.displaySkill == 2 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.switchSkillUIList;
      if ( !this )
        goto LABEL_233;
      switchSkillInfo = v8->fields.switchSkillInfo;
      this = (FollowerSelectItemListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)this,
                                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !switchSkillInfo )
        goto LABEL_233;
      SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)this, 0LL);
    }
LABEL_521:
    v290 = (UnityEngine_Object_o *)v8->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v290, 0LL, 0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v77, 0LL);
      v291 = v8->fields.svtCommandCardList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v291 )
          goto LABEL_233;
        ServantCommandCardListComponent__SetHide(v8->fields.svtCommandCardList, 0LL);
      }
      else
      {
        SvtId = FollowerSelectItemListViewItem__get_SvtId(v7, (const MethodInfo *)item);
        commandCardParam = v77->fields.commandCardParam;
        v294 = SvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v77, 0LL);
        if ( !v291 )
          goto LABEL_233;
        ServantCommandCardListComponent__Set_39170332(
          v291,
          v294,
          commandCardParam,
          (System_Int32_array *)this,
          2,
          1,
          0LL);
      }
    }
    v295 = (UnityEngine_Object_o *)v8->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v295, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !*v383 )
        goto LABEL_233;
      pushUserSvtId = (*v383)->fields.pushUserSvtId;
      v297 = pushUserSvtId && pushUserSvtId == v77->fields.userSvtId;
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.pushSprite;
      if ( !this )
        goto LABEL_233;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_233;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v297, 0LL);
    }
    v298 = (UnityEngine_Object_o *)v8->fields.dataLostMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v298, 0LL, 0LL) )
    {
      v299 = (UnityEngine_Object_o *)v8->fields.dataLostMaskMessageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v299, 0LL, 0LL) )
      {
        if ( v7->fields._IsDataLost_k__BackingField )
        {
          v300 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetPartyOrganizationImage(v300, (System_String_o *)StringLiteral_18249/*"datalost_svt_select"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_233;
          v401.fields.r = 1.0;
          v401.fields.g = 1.0;
          v401.fields.b = 1.0;
          v401.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)this, v401, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_233;
        }
        else
        {
          if ( v7->fields._TimesToRestart_k__BackingField < 1 )
            goto LABEL_566;
          v301 = v8->fields.dataLostMaskSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetCommon(v301, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_233;
          UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20110/*"img_frames_mask01"*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_233;
          v402.fields.a = 0.62353;
          v402.fields.r = 0.0;
          v402.fields.g = 0.0;
          v402.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v402, 0LL);
          v302 = v8->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v303 = LocalizationManager__Get((System_String_o *)StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          TimesToRestart_k__BackingField = v7->fields._TimesToRestart_k__BackingField;
          v307 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v304, v305, v306);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v303, v307, 0LL);
          if ( !v302 )
            goto LABEL_233;
          UILabel__set_text(v302, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskSprite;
          if ( !this )
            goto LABEL_233;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.dataLostMaskMessageLabel;
          if ( !this )
            goto LABEL_233;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_233;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      }
    }
LABEL_566:
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
          goto LABEL_233;
        v315 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
      }
      else
      {
        if ( v7->fields._IsMaxOpenClassBoard_k__BackingField )
          v312 = (Il2CppObject **)&StringLiteral_6334/*"FFFF00"*/;
        else
          v312 = (Il2CppObject **)&StringLiteral_6335/*"FFFFFF"*/;
        v313 = *v312;
        TimesToRestart_k__BackingField = v7->fields._OpenClassBoardNum_k__BackingField;
        v314 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v309, v310, v311);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format_61686468(
                                                         (System_String_o *)StringLiteral_15795/*"[{0}]+{1}[-]"*/,
                                                         v313,
                                                         v314,
                                                         0LL);
        if ( !v8->fields.openClassBoardNumLabel )
          goto LABEL_233;
        v315 = this;
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.openClassBoardNumLabel;
      }
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v315, 0LL);
    }
    classBoardOpenButton = (UnityEngine_Object_o *)v8->fields.classBoardOpenButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
      goto LABEL_607;
    this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
    if ( !this )
      goto LABEL_233;
    IsReleasedClassBoard_k__BackingField = v7->fields._IsReleasedClassBoard_k__BackingField;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_233;
    if ( IsReleasedClassBoard_k__BackingField )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButton;
      if ( !this )
        goto LABEL_233;
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
        v320 = v8->fields.classBoardOpenButtonLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( (OpenClassBoardNum_k__BackingField & 0x80000000) != 0 )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12263/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/,
                                                           0LL);
          if ( !v320 )
            goto LABEL_233;
          UILabel__set_text(v320, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_233;
          v321 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v322 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v322 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v323 = 36LL;
        }
        else
        {
          this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12262/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                           0LL);
          if ( !v320 )
            goto LABEL_233;
          UILabel__set_text(v320, (System_String_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardOpenButtonLabel;
          if ( !this )
            goto LABEL_233;
          v321 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v322 = FollowerSelectItemListViewItemDraw_TypeInfo;
          if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
            v322 = FollowerSelectItemListViewItemDraw_TypeInfo;
          }
          v323 = 32LL;
        }
        GameObjectExtensions__SetLocalPositionY(
          v321,
          *(float *)((char *)&v322->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v323),
          0LL);
      }
      classBoardBackSprite = v8->fields.classBoardBackSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17243/*"btn_bg_29_2"*/, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classBoardBackSprite;
      if ( !this )
        goto LABEL_233;
      ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        this->klass[2]._1.interopData);
LABEL_607:
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_233;
      LODWORD(v325) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
      if ( !this )
        goto LABEL_233;
      v326 = v325;
      LODWORD(v327) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.playerNameLabel;
      if ( !this )
        goto LABEL_233;
      v328 = v327;
      v329 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v329, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
      if ( !this )
        goto LABEL_233;
      v331 = LocalPositionX;
      v332 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalPositionX(v332, (float)(v328 * 0.5) + (float)(v326 + v331), 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.gradeIcon;
      if ( !this )
        goto LABEL_233;
      UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38641108, 0LL);
      baseSprite = v8->fields.baseSprite;
      if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
      FollowerRootComponent__SetFollowerBase(baseSprite, spriteName, 0LL);
      if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_233;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_233;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        maskMessageLabel = v8->fields.maskMessageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6389/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/,
                                                         0LL);
        if ( !maskMessageLabel )
          goto LABEL_233;
        UILabel__set_text(maskMessageLabel, (System_String_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
        if ( !this )
          goto LABEL_233;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
        if ( !this )
          goto LABEL_233;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_233;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      else
      {
        if ( !v7->fields.isUniqueSvtRestriction && !v7->fields.isUniqueIndividualityRestriction )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
          if ( !this )
            goto LABEL_233;
          this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
          if ( !this )
            goto LABEL_233;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
          if ( !this )
            goto LABEL_233;
          FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
          if ( !this )
            goto LABEL_233;
          UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v335 = 0;
LABEL_626:
          classCompatibilityIcon = (UnityEngine_Object_o *)v8->fields.classCompatibilityIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
          {
            if ( !v77 )
              goto LABEL_655;
            v338 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
            v337 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v399.fields.currentCryptoKey = v338;
            *(_QWORD *)&v399.fields.fakeValue = v337;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v399, 0LL) < 1
              || (v335 & 1) != 0
              || ServantLeaderInfo__IsHideSupport(v77, 0LL)
              || v7->fields._IsDataLost_k__BackingField )
            {
              goto LABEL_655;
            }
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !this )
              goto LABEL_233;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)this, 35, 0LL) )
              goto LABEL_655;
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !this )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)this->fields.rangeSprite;
            if ( !this )
              goto LABEL_233;
            item = (FollowerSelectItemListViewItem_o *)FollowerRootComponent_TypeInfo;
            methodPtr_low = LOBYTE(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
              || (FollowerRootComponent_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] != FollowerRootComponent_TypeInfo )
            {
              v380 = (FollowerSelectItemListViewItemDraw_o *)sub_1B868D4(this);
              FollowerSelectItemListViewItemDraw__setupMessageUI(v380, v381, v382);
              return;
            }
            v340 = this->fields.typeTextSprite;
            if ( !v340 )
              goto LABEL_655;
            v341 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)this->fields.typeTextSprite, 0LL);
            if ( !v341 )
              goto LABEL_655;
            m_CancellationTokenSource = (int32_t)v340->fields.m_CancellationTokenSource;
            if ( !m_CancellationTokenSource )
              goto LABEL_655;
            v343 = v341;
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !this )
              goto LABEL_233;
            v344 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)this, v343, m_CancellationTokenSource, 0LL);
            if ( v344 )
            {
              v345 = v344;
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_233;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
              v348 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
              v347 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
              v349 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v400.fields.currentCryptoKey = v348;
              *(_QWORD *)&v400.fields.fakeValue = v347;
              this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                               v400,
                                                               0LL);
              if ( !v349 )
                goto LABEL_233;
              this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                               v349,
                                                               (int32_t)this,
                                                               (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !this )
                goto LABEL_233;
              v350 = this;
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
              if ( !this )
                goto LABEL_233;
              ServantClassCompatibilityIconComponent__SetIcon(
                (ServantClassCompatibilityIconComponent_o *)this,
                (int32_t)v350->fields.svtNameRangeLabel,
                v345->fields.classIds,
                2,
                0LL);
            }
            else
            {
LABEL_655:
              this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.classCompatibilityIcon;
              if ( !this )
                goto LABEL_233;
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
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_233;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
          }
          recommendedIconText = (UnityEngine_Object_o *)v8->fields.recommendedIconText;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
          {
            v353 = v8->fields.recommendedIconText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6391/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/,
                                                             0LL);
            if ( !v353 )
              goto LABEL_233;
            UILabel__set_text(v353, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedIconText;
            if ( !this )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( !this )
              goto LABEL_233;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7->fields.isRecommended, 0LL);
          }
          numberOfUsabletimes = (UnityEngine_Object_o *)v8->fields.numberOfUsabletimes;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL) )
            goto LABEL_691;
          v355 = v7->fields.questRestrictionInfo;
          if ( v355 )
          {
            eventId = v355->fields.eventId;
            this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_233;
            this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)this,
                                                             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
            entity = 0LL;
            if ( !this )
              goto LABEL_233;
            if ( !DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    v355->fields.eventId,
                    (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
              goto LABEL_684;
            v357 = entity;
            if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
            if ( TitleInfoControl__IsEnableEventShopButton_38159400((EventDetailEntity_o *)v357, 0LL) )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)entity;
              if ( !entity )
                goto LABEL_233;
              LODWORD(v355) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
            }
            else
            {
LABEL_684:
              LODWORD(v355) = 0;
            }
          }
          else
          {
            eventId = -1;
          }
          this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !this )
            goto LABEL_233;
          if ( BYTE4(this->fields.typeTextSprite) )
            goto LABEL_688;
          if ( *p_followerInfo )
          {
            type = (*p_followerInfo)->fields.type;
            if ( type != 3 )
            {
              item = 0LL;
              if ( type == 4 || (((unsigned int)v355 ^ 1) & 1) != 0 )
                goto LABEL_689;
LABEL_717:
              this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)this,
                                                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
                v368 = *p_followerInfo ? (*p_followerInfo)->fields.userId : 0LL;
                if ( this )
                {
                  UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                                (EventBoostItemUsedMaster_o *)this,
                                eventId,
                                v368,
                                0LL);
                  v371 = BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v371 = BalanceConfig_TypeInfo;
                  }
                  MaxFriendChocolateUse = v371->static_fields->MaxFriendChocolateUse;
                  v390 = MaxFriendChocolateUse;
                  if ( UsedCount )
                  {
                    if ( !v371->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v371);
                      MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
                    }
                    v390 = MaxFriendChocolateUse - UsedCount->fields.count;
                  }
                  numberOfUsabletimesPrefixLabel = v8->fields.numberOfUsabletimesPrefixLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_6376/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/,
                                                                   0LL);
                  if ( numberOfUsabletimesPrefixLabel )
                  {
                    UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)this, 0LL);
                    numberOfUsabletimesLabel = v8->fields.numberOfUsabletimesLabel;
                    this = (FollowerSelectItemListViewItemDraw_o *)System_Int32__ToString((int32_t)&v390, 0LL);
                    if ( numberOfUsabletimesLabel )
                    {
                      UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)this, 0LL);
                      numberOfUsabletimesSuffixLabel = v8->fields.numberOfUsabletimesSuffixLabel;
                      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_6377/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/,
                                                                       0LL);
                      if ( numberOfUsabletimesSuffixLabel )
                      {
                        UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)this, 0LL);
                        v376 = v390;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        if ( v376 )
                        {
                          v377 = LocalizationManager__Get((System_String_o *)StringLiteral_6374/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
                          UnityEngine_ColorUtility__TryParseHtmlString(v377, &color, 0LL);
                          v378 = LocalizationManager__Get((System_String_o *)StringLiteral_6375/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
                          UnityEngine_ColorUtility__TryParseHtmlString(v378, &v388, 0LL);
                        }
                        else
                        {
                          v379 = LocalizationManager__Get((System_String_o *)StringLiteral_6378/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
                          UnityEngine_ColorUtility__TryParseHtmlString(v379, &color, 0LL);
                          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                          if ( !this )
                            goto LABEL_233;
                          UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                          v388 = color;
                        }
                        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimesSprite;
                        if ( this )
                        {
                          UIWidget__set_color((UIWidget_o *)this, color, 0LL);
                          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.friendChocolateSprite;
                          if ( this )
                          {
                            UIWidget__set_color((UIWidget_o *)this, v388, 0LL);
                            item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
                            goto LABEL_689;
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_233:
              sub_1B86614(this, item);
            }
          }
          else if ( ((unsigned __int8)v355 & 1) != 0 )
          {
            goto LABEL_717;
          }
LABEL_688:
          item = 0LL;
LABEL_689:
          this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.numberOfUsabletimes;
          if ( !this )
            goto LABEL_233;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)item, 0LL);
LABEL_691:
          recommendedUser = (UnityEngine_Object_o *)v8->fields.recommendedUser;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.recommendedUser;
            if ( !this )
              goto LABEL_233;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)this,
              v7->fields._isRecommendedUser_k__BackingField,
              0LL);
          }
          return;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskSprite;
        if ( !this )
          goto LABEL_233;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_233;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.maskMessageLabel;
        if ( !this )
          goto LABEL_233;
        UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningBase;
        if ( !this )
          goto LABEL_233;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningIcon;
        if ( !this )
          goto LABEL_233;
        FlashingIconComponent__SetFast((FlashingIconComponent_o *)this, 0LL);
        warningMessageLabel = v8->fields.warningMessageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6390/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/,
                                                         0LL);
        if ( !warningMessageLabel )
          goto LABEL_233;
        UILabel__set_text(warningMessageLabel, (System_String_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_233;
        LODWORD(v361) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v8->fields.warningMessageLabel;
        if ( !this )
          goto LABEL_233;
        v362 = v361;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        v363 = this;
        warningMessageWidth = (float)v8->fields.warningMessageWidth;
        if ( v362 <= warningMessageWidth )
        {
          if ( !byte_4A487E6 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, item);
            byte_4A487E6 = 1;
          }
          v369 = UnityEngine_Vector3_TypeInfo->static_fields;
          x = v369->oneVector.fields.x;
          y = v369->oneVector.fields.y;
          z = v369->oneVector.fields.z;
        }
        else
        {
          x = warningMessageWidth / v362;
          z = 1.0;
          y = 1.0;
        }
        if ( !v363 )
          goto LABEL_233;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v363, *(UnityEngine_Vector3_o *)&x, 0LL);
      }
      v335 = 1;
      goto LABEL_626;
    }
LABEL_246:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    goto LABEL_607;
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
  if ( (byte_4A492E9 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, item);
    byte_4A492E9 = 1;
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
      sub_1B86614(gameObject, v6);
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
  if ( (byte_4A492E8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&OptionManager_TypeInfo, v6);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1B863B8(&StringLiteral_115/*" "*/, v7);
    byte_4A492E8 = 1;
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
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
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
        v16 = System_String__Join((System_String_o *)StringLiteral_115/*" "*/, ConvertMessageToId, 0LL);
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
        sub_1B86614(this, item);
      }
    }
    sub_1B8661C(this, item);
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