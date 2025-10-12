void FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_c *v1; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4C324F1 & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewItemDraw_TypeInfo);
    byte_4C324F1 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_C0C4C0;
  v1 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_C0C7F0;
  static_fields = v1->static_fields;
  *(_QWORD *)&static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 0x4130000041400000LL;
  static_fields->CLASS_BOARD_LABEL_POS = (struct UnityEngine_Vector2_o)0x41300000BF800000LL;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth01 = xmmword_C0C8C0;
}


void FollowerSelectItemListViewItemDraw___ctor(FollowerSelectItemListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UnityEngine_GameObject_array *v4; // x0
  struct SkillIconComponent_array *v5; // x0
  struct UIIconLabel_array *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  struct UIIconLabel_array *v9; // x0

  if ( (byte_4C324F0 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&UnityEngine_GameObject___TypeInfo);
    sub_1C32C20(&SkillIconComponent___TypeInfo);
    sub_1C32C20(&UIIconLabel___TypeInfo);
    byte_4C324F0 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1C32CC8(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1C32BC4(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1C32CC8(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1C32BC4(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1C32CC8(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1C32BC4(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1C32CC8(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1C32BC4(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1C32CC8(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1C32BC4(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1C32CC8(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1C32BC4(&this->fields.appendSkillLevelIconLabelList, v9);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FollowerSelectItemListViewItemDraw__Awake(FollowerSelectItemListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UISprite_o *skillIconSprite; // x20
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *transform; // x0
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C324E4 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20227/*"icon_skill_mini"*/);
    sub_1C32C20(&StringLiteral_20409/*"img_friend_skill"*/);
    sub_1C32C20(&StringLiteral_20123/*"icon_append_mini"*/);
    sub_1C32C20(&StringLiteral_20408/*"img_friend_appendskill"*/);
    byte_4C324E4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C32BC4(&this->fields.switchSkillUIList, v3);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20227/*"icon_skill_mini"*/, 0);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20409/*"img_friend_skill"*/, 0);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20123/*"icon_append_mini"*/, 0);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20408/*"img_friend_appendskill"*/, 0);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v7 = this->fields.maskSprite;
    if ( !v7 )
      goto LABEL_14;
    mAtlas = v7->fields.mAtlas;
    this->fields.defaultMaskAtlas = mAtlas;
    transform = (UnityEngine_Component_o *)sub_1C32BC4(&this->fields.defaultMaskAtlas, mAtlas);
    v9 = this->fields.maskSprite;
    if ( !v9
      || (mSpriteName = v9->fields.mSpriteName,
          this->fields.defaultMaskName = mSpriteName,
          sub_1C32BC4(&this->fields.defaultMaskName, mSpriteName),
          (transform = (UnityEngine_Component_o *)this->fields.maskSprite) == 0)
      || (*(_QWORD *)&this->fields.defaultMaskWidth = transform[7].klass,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0) )
    {
LABEL_14:
      sub_1C32E7C(transform);
    }
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultMaskPosition.fields.x = localPosition.fields.x;
    this->fields.defaultMaskPosition.fields.y = localPosition.fields.y;
  }
}


void FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t targetDisplaySkill,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v10; // w9
  const MethodInfo *v11; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v13; // x20
  __int64 v14; // x21
  _BOOL4 v15; // w8
  int32_t displaySkill; // w9
  Il2CppObject *skillInfoUiWidget; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  Il2CppObject *appendSkillInfoUiWidget; // x1
  intptr_t v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  intptr_t v26; // x8
  SwitchUIWidgetComponent_o *v27; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C324EE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C324EE = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  this->fields.displaySkill = targetDisplaySkill;
  if ( !switchSkillInfo )
    goto LABEL_52;
  SwitchUIWidgetComponent__Clear(switchSkillInfo, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_52;
  size = switchSkillUIList->fields._size;
  v10 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_52;
  ((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, float))switchSkillInfo->klass[1]._1.byval_arg.data)(
    switchSkillInfo,
    *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
    0.0);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_52;
  switchSkillInfo = (SwitchUIWidgetComponent_o *)((__int64 (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, float))switchSkillInfo->klass[1]._1.byval_arg.data)(
                                                   switchSkillInfo,
                                                   *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
                                                   0.0);
  if ( !item )
    goto LABEL_52;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, v11);
  if ( ServantLeader )
  {
    v14 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v14;
    *(_QWORD *)&v28.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v28, 0) > 0;
  }
  else
  {
    v15 = 0;
  }
  displaySkill = this->fields.displaySkill;
  if ( displaySkill == 2 )
  {
    if ( v15 )
    {
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( !switchSkillInfo )
        goto LABEL_52;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)switchSkillInfo,
                                                       0);
      if ( !switchSkillInfo )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !switchSkillInfo )
        goto LABEL_52;
      skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
      m_CachedPtr = switchSkillInfo->fields.m_CachedPtr;
      v19 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          skillInfoUiWidget,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v21 + 32) = skillInfoUiWidget;
        sub_1C32BC4(v21 + 32, skillInfoUiWidget);
      }
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
      if ( !switchSkillInfo )
        goto LABEL_52;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)switchSkillInfo,
                                                       0);
      if ( !switchSkillInfo )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
      if ( !switchSkillInfo )
        goto LABEL_52;
      appendSkillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
      v23 = switchSkillInfo->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v23 )
        goto LABEL_52;
      v25 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          appendSkillInfoUiWidget,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v25 + 1;
        *(_QWORD *)(v26 + 32) = appendSkillInfoUiWidget;
        sub_1C32BC4(v26 + 32, appendSkillInfoUiWidget);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v27 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v27 )
      {
        SwitchUIWidgetComponent__Set(v27, (UIWidget_array *)switchSkillInfo, 0, 0);
        return;
      }
    }
LABEL_52:
    sub_1C32E7C(switchSkillInfo);
  }
  if ( displaySkill != 1 )
  {
    if ( displaySkill )
      return;
    if ( !v15 )
      goto LABEL_23;
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
    if ( switchSkillInfo )
    {
      ((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, float))switchSkillInfo->klass[1]._1.byval_arg.data)(
        switchSkillInfo,
        *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
        1.0);
      switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
      if ( switchSkillInfo )
      {
        switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)switchSkillInfo,
                                                         0);
        if ( switchSkillInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
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
  if ( v15 )
  {
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
    if ( !switchSkillInfo )
      goto LABEL_52;
    ((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, float))switchSkillInfo->klass[1]._1.byval_arg.data)(
      switchSkillInfo,
      *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
      1.0);
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
    if ( !switchSkillInfo )
      goto LABEL_52;
    switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)switchSkillInfo,
                                                     0);
    if ( !switchSkillInfo )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
  }
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_52;
LABEL_38:
  switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillInfo,
                                                   0);
  if ( !switchSkillInfo )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
}


void FollowerSelectItemListViewItemDraw__SetActiveForGrandSupport(
        FollowerSelectItemListViewItemDraw_o *this,
        bool isGrandSupport,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *grandPlayerProfileObj; // x0
  bool v6; // w20
  bool v7; // w21

  grandPlayerProfileObj = this->fields.grandPlayerProfileObj;
  if ( !grandPlayerProfileObj )
    sub_1C32E7C(0);
  v6 = isGrandSupport;
  if ( UnityEngine_GameObject__get_activeSelf(grandPlayerProfileObj, 0) != isGrandSupport )
  {
    v7 = !isGrandSupport;
    GameObjectHelper__SetActiveSafely(this->fields.svtProfileObj, v7, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.servantFaceIcon, v7, 0);
    GameObjectHelper__SetActiveSafely(this->fields.playerProfileObj, v7, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.messageLabel, v7, 0);
    GameObjectHelper__SetActiveSafely(this->fields.grandSvtProfileObj, v6, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.grandServantFaceIcon, v6, 0);
    GameObjectHelper__SetActiveSafely(this->fields.grandSvtEquipObj, v6, 0);
    GameObjectHelper__SetActiveSafely(this->fields.grandPlayerProfileObj, v6, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.grandMessageLabel, v6, 0);
  }
}


void FollowerSelectItemListViewItemDraw__SetAppendSkillIconInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  struct SkillInfo_array **p_appendSkillInfoList; // x21
  FollowerSelectItemListViewItemDraw_o *v6; // x20
  struct SkillIconComponent_array *appendSkillIconList; // x8
  il2cpp_array_size_t max_length; // x8
  struct SkillInfo_array *v9; // x11
  int v10; // w9
  signed __int64 v11; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v13; // x14
  __int64 v14; // x22
  __int64 v15; // x23
  unsigned __int64 v16; // x24
  struct SkillInfo_array *v17; // x8
  struct UnityEngine_GameObject_array *v18; // x9
  int32_t *v19; // x25
  struct SkillIconComponent_array *v20; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v23; // x8
  struct UIIconLabel_array *v24; // x8
  struct SkillIconComponent_array *v25; // x8
  __int64 v26; // x9

  if ( !item
    || (p_appendSkillInfoList = &this->fields.appendSkillInfoList,
        v6 = this,
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                         item,
                                                         &this->fields.appendSkillInfoList,
                                                         item->fields.isNpc,
                                                         method),
        (appendSkillIconList = v6->fields.appendSkillIconList) == 0) )
  {
LABEL_48:
    sub_1C32E7C(this);
  }
  max_length = appendSkillIconList->max_length;
  if ( (__int64)(max_length << 32) < 1 )
  {
    v10 = 0;
  }
  else
  {
    v9 = *p_appendSkillInfoList;
    v10 = 0;
    v11 = 0;
    do
    {
      if ( v9 )
      {
        max_length_low = LODWORD(v9->max_length);
        if ( v11 < (int)max_length_low )
        {
          if ( v11 >= max_length_low )
LABEL_49:
            sub_1C32E84(this);
          v13 = (*p_appendSkillInfoList)->m_Items[v11];
          if ( v13 && v13->fields.id >= 1 )
            v10 = v11 + 1;
        }
      }
      ++v11;
    }
    while ( v11 < (int)max_length );
  }
  if ( (int)max_length >= 1 )
  {
    v14 = v10;
    v15 = 4;
    do
    {
      v16 = v15 - 4;
      if ( v15 - 4 >= v14 )
      {
        appendSkillBaseList = v6->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_48;
        if ( v16 >= LODWORD(appendSkillBaseList->max_length) )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v15);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        v17 = *p_appendSkillInfoList;
        if ( !*p_appendSkillInfoList )
          goto LABEL_48;
        if ( v16 >= LODWORD(v17->max_length) )
          goto LABEL_49;
        v18 = v6->fields.appendSkillBaseList;
        if ( !v18 )
          goto LABEL_48;
        if ( v16 >= LODWORD(v18->max_length) )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v18->obj.klass + v15);
        if ( !this )
          goto LABEL_48;
        v19 = (int32_t *)*((_QWORD *)&v17->obj.klass + v15);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( !servantLeader )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(servantLeader, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v19 )
            v19[4] = 0;
          v20 = v6->fields.appendSkillIconList;
          if ( !v20 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v20->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v20->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0);
          appendSkillLevelIconLabelList = v6->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_48;
          if ( v16 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0);
        }
        else
        {
          v23 = v6->fields.appendSkillIconList;
          if ( !v23 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v23->max_length) )
            goto LABEL_49;
          if ( !v19 )
            goto LABEL_48;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v23->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__Set_40922992((SkillIconComponent_o *)this, v19[4], v19[5], v19[12], v19[13], 0);
          v24 = v6->fields.appendSkillLevelIconLabelList;
          if ( !v24 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v24->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Set_41010828((UIIconLabel_o *)this, 48, v19[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
      }
      v25 = v6->fields.appendSkillIconList;
      if ( !v25 )
        goto LABEL_48;
      v26 = v15 - 3;
      ++v15;
    }
    while ( v26 < SLODWORD(v25->max_length) );
  }
}


void FollowerSelectItemListViewItemDraw__SetFriendPoint(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        bool isHideFriendPoint,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v6; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct FollowerInfo_o *followerInfo; // x9
  BalanceConfig_c *v9; // x0
  int32_t FollowerPointNpc; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  _BOOL4 IsRecommendFollower_k__BackingField; // w22
  BalanceConfig_c *v13; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_FollowerPointGrand; // x8
  _BOOL4 v16; // w21
  BalanceConfig_c *v17; // x0
  BalanceConfig_c *v18; // x0
  _BOOL4 v19; // w21
  BalanceConfig_c *v20; // x0
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v23; // w22
  int value; // w23
  FollowerSelectItemListViewItemDraw_o *v25; // x1
  int v26; // w8
  __int64 v27; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x21
  int v29; // w23
  System_String_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x0
  UILabel_o *campaignLabel; // x21
  const MethodInfo *v39; // x1
  FollowerSelectItemListViewItemDraw_o *v40; // x1
  bool activeSelf; // w8
  float v42; // s8
  bool v43; // w8
  float v44; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // x0
  int v47; // [xsp+1Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4C324EB & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6464/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C324EB = 1;
  }
  if ( !item )
    goto LABEL_78;
  Option_k__BackingField = item->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_78;
  if ( Option_k__BackingField->fields.isNoneSupportFriendPoint || isHideFriendPoint )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.friendPointIconLabel, 0, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.friendPointData2Label, 0, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.campaignLabel;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
    goto LABEL_78;
  }
  followerInfo = item->fields.followerInfo;
  if ( followerInfo )
  {
    switch ( followerInfo->fields.type )
    {
      case 1:
        questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_20;
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_78;
        this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_78;
        this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         questRestrictionInfo->fields.questId,
                                                         (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_78;
        LOBYTE(questRestrictionInfo) = QuestEntity__HasFlag_42367412(
                                         (QuestEntity_o *)this,
                                         0x8000000,
                                         questRestrictionInfo->fields.questPhase,
                                         0);
LABEL_20:
        if ( item->fields._IsGrandSupport_k__BackingField )
        {
LABEL_32:
          v18 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v18 = BalanceConfig_TypeInfo;
          }
          p_FollowerPointGrand = &v18->static_fields->FollowerPointGrand;
        }
        else
        {
          IsRecommendFollower_k__BackingField = item->fields._IsRecommendFollower_k__BackingField;
          v13 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v13 = BalanceConfig_TypeInfo;
          }
          static_fields = v13->static_fields;
          if ( IsRecommendFollower_k__BackingField )
          {
LABEL_38:
            p_FollowerPointGrand = &static_fields->FollowerPointRecommend;
          }
          else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
LABEL_39:
            p_FollowerPointGrand = &static_fields->FollowFriendPoint;
          }
          else
          {
            p_FollowerPointGrand = &static_fields->FollowerPointFriend;
          }
        }
        break;
      case 2:
        if ( item->fields._IsGrandSupport_k__BackingField )
          goto LABEL_32;
        v16 = item->fields._IsRecommendFollower_k__BackingField;
        v17 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        static_fields = v17->static_fields;
        if ( v16 )
          goto LABEL_38;
        p_FollowerPointGrand = &static_fields->FollowerPointNotFriend;
        break;
      case 3:
      case 4:
        v9 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v9 = BalanceConfig_TypeInfo;
        }
        FollowerPointNpc = v9->static_fields->FollowerPointNpc;
        goto LABEL_41;
      case 5:
        if ( item->fields._IsGrandSupport_k__BackingField )
          goto LABEL_32;
        v19 = item->fields._IsRecommendFollower_k__BackingField;
        v20 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v20 = BalanceConfig_TypeInfo;
        }
        static_fields = v20->static_fields;
        if ( v19 )
          goto LABEL_38;
        goto LABEL_39;
      default:
        goto LABEL_14;
    }
    FollowerPointNpc = *p_FollowerPointGrand;
  }
  else
  {
LABEL_14:
    FollowerPointNpc = 0;
  }
LABEL_41:
  FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, (const MethodInfo *)item);
  friendPointCampaignEntity = item->fields.friendPointCampaignEntity;
  v23 = FriendPointUpVal;
  if ( friendPointCampaignEntity )
    value = friendPointCampaignEntity->fields.value;
  else
    value = 0;
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointIconLabel;
  if ( !this )
    goto LABEL_78;
  UIIconLabel__Set_41010828((UIIconLabel_o *)this, 55, FollowerPointNpc, 0, 0, 0, 0, 0, 0, 0, 0);
  if ( v23 > 0 || value >= 1 )
  {
    if ( value <= 0 )
      v26 = 1000;
    else
      v26 = value;
    v27 = 274877907LL * (v26 * v23 + (v26 - 1000) * FollowerPointNpc);
    friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    v29 = (v27 >> 38) + ((unsigned __int64)v27 >> 63);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6464/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0);
    v47 = v29;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v31, v32, v33, v34, v35, v36);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v30, v37, 0);
    if ( !friendPointData2Label )
      goto LABEL_78;
    v25 = this;
    this = friendPointData2Label;
  }
  else
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    if ( !this )
      goto LABEL_78;
    v25 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v25, 0);
  campaignLabel = v6->fields.campaignLabel;
  if ( item->fields.friendPointCampaignEntity )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
    if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
    }
    if ( campaignLabel )
    {
      UILabel__set_gradientTop(campaignLabel, (UnityEngine_Color_o)this->fields.skillButtonList->obj, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.campaignLabel;
      if ( this )
      {
        UILabel__set_gradientBottom(
          (UILabel_o *)this,
          FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
          0);
        campaignLabel = v6->fields.campaignLabel;
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignName(
                                                         item,
                                                         v39);
        if ( campaignLabel )
        {
          v40 = this;
          goto LABEL_65;
        }
      }
    }
LABEL_78:
    sub_1C32E7C(this);
  }
  if ( !campaignLabel )
    goto LABEL_78;
  v40 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_65:
  UILabel__set_text(campaignLabel, (System_String_o *)v40, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  if ( !this )
    goto LABEL_78;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_78;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  v42 = activeSelf ? -3.0 : 39.0;
  if ( !this )
    goto LABEL_78;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_78;
  v43 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointIconLabel;
  v44 = v43 ? -22.0 : 20.0;
  if ( !this )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v42, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
  if ( !this )
    goto LABEL_78;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v46, v44, 0);
}


void FollowerSelectItemListViewItemDraw__SetGrandServantEquip(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v6; // x20
  UISprite_o *grandEquipHeaderSprite; // x21
  const MethodInfo *v8; // x5
  FollowerSelectItemListViewItemEquipDraw_o *grandSvtEquip2; // x21
  EquipTargetInfo_o *equipTarget2; // x22
  const MethodInfo *v11; // x5
  const MethodInfo *v12; // x5

  v6 = this;
  if ( (byte_4C324E8 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20335/*"img_blankbg_02"*/);
    sub_1C32C20(&StringLiteral_20383/*"img_equipface_grand"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_20336/*"img_blankbg_03"*/);
    byte_4C324E8 = 1;
  }
  if ( !item )
    goto LABEL_13;
  if ( item->fields._IsGrandSupport_k__BackingField )
  {
    grandEquipHeaderSprite = v6->fields.grandEquipHeaderSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)AtlasManager__SetPartyOrganizationImage(
                                                     grandEquipHeaderSprite,
                                                     (System_String_o *)StringLiteral_20383/*"img_equipface_grand"*/,
                                                     0);
    if ( servantLeader )
    {
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(servantLeader, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.grandSvtEquip1;
      if ( this )
      {
        FollowerSelectItemListViewItemEquipDraw__SetEquip(
          (FollowerSelectItemListViewItemEquipDraw_o *)this,
          servantLeader->fields.equipTarget1,
          0,
          0,
          0,
          v8);
        grandSvtEquip2 = v6->fields.grandSvtEquip2;
        equipTarget2 = servantLeader->fields.equipTarget2;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
                                                         servantLeader,
                                                         0);
        if ( grandSvtEquip2 )
        {
          FollowerSelectItemListViewItemEquipDraw__SetEquip(
            grandSvtEquip2,
            equipTarget2,
            (System_String_o *)StringLiteral_20335/*"img_blankbg_02"*/,
            1,
            (int)this > 0,
            v11);
          this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.grandSvtEquip3;
          if ( this )
          {
            FollowerSelectItemListViewItemEquipDraw__SetEquip(
              (FollowerSelectItemListViewItemEquipDraw_o *)this,
              servantLeader->fields.equipTarget3,
              (System_String_o *)StringLiteral_20336/*"img_blankbg_03"*/,
              0,
              0,
              v12);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1C32E7C(this);
  }
}


void FollowerSelectItemListViewItemDraw__SetInput(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        bool isInput,
        bool isTutorial,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Behaviour_o *supportInfoButton; // x0
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  unsigned int v11; // w24
  Il2CppClass **v12; // x8
  UnityEngine_Behaviour_o *v13; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4C324ED & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C324ED = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( ((unsigned __int8)supportInfoButton & 1) != 0 )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))supportInfoButton->klass[1]._1.name)(
      supportInfoButton,
      1,
      supportInfoButton->klass[1]._1.namespaze);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))supportInfoButton->klass[1]._1.nestedTypes)(
      supportInfoButton,
      0,
      0,
      supportInfoButton->klass[1]._1.implementedInterfaces);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    UnityEngine_Behaviour__set_enabled(supportInfoButton, isInput, 0);
  }
  skillButtonList = this->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= LODWORD(skillButtonList->max_length) )
          sub_1C32E84(supportInfoButton);
        v12 = &skillButtonList->obj.klass + (int)v11;
        v13 = (UnityEngine_Behaviour_o *)v12[4];
        if ( !v13 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v12[4],
                             (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))v13->klass[1]._1.name)(
          v13,
          1,
          v13->klass[1]._1.namespaze);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))v13->klass[1]._1.nestedTypes)(
          v13,
          0,
          0,
          v13->klass[1]._1.implementedInterfaces);
        UnityEngine_Behaviour__set_enabled(v13, isInput, 0);
        if ( !Component_object )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, 1, 0);
        if ( max_length == ++v11 )
          goto LABEL_19;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_18:
      sub_1C32E7C(supportInfoButton);
    }
  }
LABEL_19:
  supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
  if ( !supportInfoButton )
    goto LABEL_18;
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)supportInfoButton,
                                                   0);
  if ( !supportInfoButton )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)supportInfoButton, 0) )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))supportInfoButton->klass[1]._1.name)(
      supportInfoButton,
      1,
      supportInfoButton->klass[1]._1.namespaze);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))supportInfoButton->klass[1]._1.nestedTypes)(
      supportInfoButton,
      0,
      0,
      supportInfoButton->klass[1]._1.implementedInterfaces);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_18;
    UnityEngine_Behaviour__set_enabled(supportInfoButton, isInput, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewItemDraw__SetItem(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        int32_t mode,
        int32_t targetDisplaySkill,
        const MethodInfo *method)
{
  __int64 switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v12; // w9
  UnityEngine_Object_o *rangeSprite; // x23
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct FollowerInfo_o *followerInfo; // x21
  System_String_o *FollowerBgImage; // x21
  int32_t Kind_40328816; // w0
  UISprite_o *baseSprite; // x23
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v26; // x3
  ServantLeaderInfo_o *v27; // x21
  __int64 v28; // x23
  __int64 v29; // x24
  _BOOL4 v30; // w8
  const MethodInfo *v31; // x3
  UnityEngine_Object_o *maskSprite; // x22
  _BOOL4 IsGrandSvt_k__BackingField; // w27
  UISprite_o *v34; // x24
  System_String_o *defaultMaskName; // x22
  UIAtlas_o *defaultMaskAtlas; // x23
  UIWidget_o *v37; // x22
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition01; // x9
  UILabel_o *maskMessageLabel; // x22
  char v42; // w27
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v44; // x22
  __int64 v45; // x23
  __int64 naturalAligment; // x9
  __int64 v47; // x23
  int32_t v48; // w0
  int32_t v49; // w23
  int32_t v50; // w22
  QuestPhaseEntity_o *v51; // x0
  QuestPhaseEntity_o *v52; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v54; // x23
  __int64 v55; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x21
  __int64 v57; // x8
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  Il2CppObject *v62; // x22
  bool v63; // w1
  struct FollowerInfo_o *v64; // x8
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v67; // s0
  float v68; // s8
  UnityEngine_Transform_o *v69; // x22
  float warningMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct FollowerInfo_o *v74; // x8
  int64_t v75; // x2
  struct UnityEngine_Vector3_StaticFields *v76; // x8
  UsedCount_o *UsedCount; // x20
  BalanceConfig_c *v78; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x20
  UILabel_o *numberOfUsabletimesLabel; // x20
  UILabel_o *numberOfUsabletimesSuffixLabel; // x20
  int32_t v83; // w20
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  FollowerSelectItemListViewItemDraw_o *v87; // x0
  FollowerSelectItemListViewItem_o *v88; // x1
  const MethodInfo *v89; // x2
  unsigned __int128 v90; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+18h] [xbp-78h] BYREF
  int32_t v92; // [xsp+2Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C324E5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&FollowerRootComponent_TypeInfo);
    sub_1C32C20(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1C32C20(&Grade_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&TitleInfoControl_TypeInfo);
    sub_1C32C20(&StringLiteral_6443/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/);
    sub_1C32C20(&StringLiteral_6444/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/);
    sub_1C32C20(&StringLiteral_6457/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C32C20(&StringLiteral_6442/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/);
    sub_1C32C20(&StringLiteral_6456/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/);
    sub_1C32C20(&StringLiteral_6441/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_6445/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/);
    sub_1C32C20(&StringLiteral_20441/*"img_listbg_02"*/);
    byte_4C324E5 = 1;
  }
  entity = 0;
  v92 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v90 = 0u;
  switchSkillInfo = (__int64)this->fields.switchSkillInfo;
  if ( switchSkillInfo )
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)switchSkillInfo, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_188;
  size = switchSkillUIList->fields._size;
  v12 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchSkillInfo = (__int64)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  switchSkillInfo = (__int64)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  if ( this->fields.warningMessageWidth < 0 )
  {
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_188;
    this->fields.warningMessageWidth = *(_DWORD *)(switchSkillInfo + 168);
    UIWidget__set_width((UIWidget_o *)switchSkillInfo, 1000, 0);
    if ( !item )
      return;
  }
  else if ( !item )
  {
    return;
  }
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
  {
    switchSkillInfo = (__int64)this->fields.rangeSprite;
    if ( !switchSkillInfo )
      goto LABEL_188;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, mode == 0, 0);
  }
  if ( !mode )
    return;
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    switchSkillInfo = (__int64)this->fields.dataLostMaskSprite;
    if ( !switchSkillInfo )
      goto LABEL_188;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  }
  dataLostMaskMessageLabel = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0, 0) )
  {
    switchSkillInfo = (__int64)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_188;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
    switchSkillInfo = (__int64)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_188;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  }
  FollowerSelectItemListViewItemDraw__SetActiveForGrandSupport(this, item->fields._IsGrandSupport_k__BackingField, v16);
  followerInfo = item->fields.followerInfo;
  if ( followerInfo && (unsigned int)(followerInfo->fields.type - 3) < 2 )
  {
    FollowerBgImage = (System_String_o *)StringLiteral_20441/*"img_listbg_02"*/;
  }
  else
  {
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_40328816 = Grade__GetKind_40328816(followerInfo, 0);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_40328816, 0);
  }
  baseSprite = this->fields.baseSprite;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
  FollowerRootComponent__SetFollowerBase(baseSprite, FollowerBgImage, v17);
  FollowerSelectItemListViewItemDraw__SetupLockUI(this, item, v22);
  FollowerSelectItemListViewItemDraw__SetPlayerInfo(this, item, v23);
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, v24);
  v27 = ServantLeader;
  if ( ServantLeader )
  {
    v29 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v94.fields.currentCryptoKey = v29;
    *(_QWORD *)&v94.fields.fakeValue = v28;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v94, 0) > 0;
  }
  else
  {
    v30 = 0;
  }
  FollowerSelectItemListViewItemDraw__SetFriendPoint(this, item, !v30, v26);
  FollowerSelectItemListViewItemDraw__SetServantInfo(this, item, targetDisplaySkill, v31);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    IsGrandSvt_k__BackingField = item->fields._IsGrandSvt_k__BackingField;
    v34 = this->fields.maskSprite;
    defaultMaskName = this->fields.defaultMaskName;
    defaultMaskAtlas = this->fields.defaultMaskAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    switchSkillInfo = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                        IsGrandSvt_k__BackingField,
                        v34,
                        defaultMaskName,
                        defaultMaskAtlas,
                        0);
    v37 = (UIWidget_o *)this->fields.maskSprite;
    if ( (switchSkillInfo & 1) != 0 )
    {
      switchSkillInfo = (__int64)FollowerSelectItemListViewItemDraw_TypeInfo;
      if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
      if ( !v37 )
        goto LABEL_188;
      UIWidget__set_width(v37, FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth01, 0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_188;
      UIWidget__set_height(
        (UIWidget_o *)switchSkillInfo,
        FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight01,
        0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_188;
      switchSkillInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
      if ( !switchSkillInfo )
        goto LABEL_188;
      static_fields = FollowerSelectItemListViewItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition01.fields.y;
      p_GrandMaskPosition01 = &static_fields->GrandMaskPosition01;
    }
    else
    {
      if ( !v37 )
        goto LABEL_188;
      UIWidget__set_width((UIWidget_o *)this->fields.maskSprite, this->fields.defaultMaskWidth, 0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_188;
      UIWidget__set_height((UIWidget_o *)switchSkillInfo, this->fields.defaultMaskHeight, 0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_188;
      switchSkillInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
      if ( !switchSkillInfo )
        goto LABEL_188;
      p_y = &this->fields.defaultMaskPosition.fields.y;
      p_GrandMaskPosition01 = &this->fields.defaultMaskPosition;
    }
    v97.fields.y = *p_y;
    v97.fields.x = p_GrandMaskPosition01->fields.x;
    v97.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillInfo, v97, 0);
  }
  if ( item->fields.isQuestRestriction || item->fields._IsSlotRestriction_k__BackingField )
  {
    switchSkillInfo = (__int64)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_188;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
    maskMessageLabel = this->fields.maskMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6456/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0);
    if ( !maskMessageLabel )
      goto LABEL_188;
    UILabel__set_text(maskMessageLabel, (System_String_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
    switchSkillInfo = (__int64)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_188;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_188;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_78:
    v42 = 1;
    goto LABEL_79;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    switchSkillInfo = (__int64)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_188;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
    switchSkillInfo = (__int64)this->fields.maskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_188;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
    switchSkillInfo = (__int64)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_188;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
    switchSkillInfo = (__int64)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_188;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)switchSkillInfo, 0);
    warningMessageLabel = this->fields.warningMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
    if ( !warningMessageLabel )
      goto LABEL_188;
    UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_188;
    LODWORD(v67) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_188;
    v68 = v67;
    switchSkillInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
    v69 = (UnityEngine_Transform_o *)switchSkillInfo;
    warningMessageWidth = (float)this->fields.warningMessageWidth;
    if ( v68 <= warningMessageWidth )
    {
      if ( !byte_4C313D6 )
      {
        switchSkillInfo = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      v76 = UnityEngine_Vector3_TypeInfo->static_fields;
      x = v76->oneVector.fields.x;
      y = v76->oneVector.fields.y;
      z = v76->oneVector.fields.z;
    }
    else
    {
      x = warningMessageWidth / v68;
      z = 1.0;
      y = 1.0;
    }
    if ( !v69 )
      goto LABEL_188;
    UnityEngine_Transform__set_localScale(v69, *(UnityEngine_Vector3_o *)&x, 0);
    goto LABEL_78;
  }
  switchSkillInfo = (__int64)this->fields.maskSprite;
  if ( !switchSkillInfo )
    goto LABEL_188;
  switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
  if ( !switchSkillInfo )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  switchSkillInfo = (__int64)this->fields.maskMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_188;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  switchSkillInfo = (__int64)this->fields.warningBase;
  if ( !switchSkillInfo )
    goto LABEL_188;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  switchSkillInfo = (__int64)this->fields.warningIcon;
  if ( !switchSkillInfo )
    goto LABEL_188;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0);
  switchSkillInfo = (__int64)this->fields.warningMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_188;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  v42 = 0;
LABEL_79:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
  {
    if ( !v27 )
      goto LABEL_108;
    v45 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v95.fields.currentCryptoKey = v45;
    *(_QWORD *)&v95.fields.fakeValue = v44;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v95, 0) < 1
      || (v42 & 1) != 0
      || ServantLeaderInfo__IsHideSupport(v27, 0)
      || item->fields._IsDataLost_k__BackingField )
    {
      goto LABEL_108;
    }
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_188;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillInfo, 35, 0) )
      goto LABEL_108;
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_188;
    switchSkillInfo = *(_QWORD *)(switchSkillInfo + 32);
    if ( !switchSkillInfo )
      goto LABEL_188;
    naturalAligment = FollowerRootComponent_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)switchSkillInfo + 304LL) < (unsigned int)naturalAligment
      || *(FollowerRootComponent_c **)(*(_QWORD *)(*(_QWORD *)switchSkillInfo + 200LL) + 8 * naturalAligment - 8) != FollowerRootComponent_TypeInfo )
    {
      v87 = (FollowerSelectItemListViewItemDraw_o *)sub_1C3313C(switchSkillInfo);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v87, v88, v89);
      return;
    }
    v47 = *(_QWORD *)(switchSkillInfo + 144);
    if ( !v47 )
      goto LABEL_108;
    v48 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(switchSkillInfo + 144), 0);
    if ( !v48 )
      goto LABEL_108;
    v49 = *(_DWORD *)(v47 + 24);
    if ( !v49 )
      goto LABEL_108;
    v50 = v48;
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_188;
    switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)switchSkillInfo,
                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !switchSkillInfo )
      goto LABEL_188;
    v51 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillInfo, v50, v49, 0);
    if ( v51 )
    {
      v52 = v51;
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_188;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)switchSkillInfo,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      v55 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
      v54 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
      v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v96.fields.currentCryptoKey = v55;
      *(_QWORD *)&v96.fields.fakeValue = v54;
      switchSkillInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v96, 0);
      if ( !v56 )
        goto LABEL_188;
      switchSkillInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   v56,
                                   switchSkillInfo,
                                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !switchSkillInfo )
        goto LABEL_188;
      v57 = switchSkillInfo;
      switchSkillInfo = (__int64)this->fields.classCompatibilityIcon;
      if ( !switchSkillInfo )
        goto LABEL_188;
      ServantClassCompatibilityIconComponent__SetIcon(
        (ServantClassCompatibilityIconComponent_o *)switchSkillInfo,
        *(_DWORD *)(v57 + 80),
        v52->fields.classIds,
        2,
        0);
    }
    else
    {
LABEL_108:
      switchSkillInfo = (__int64)this->fields.classCompatibilityIcon;
      if ( !switchSkillInfo )
        goto LABEL_188;
      ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)switchSkillInfo, 0);
    }
  }
  numberOfUsabletimes = (UnityEngine_Object_o *)this->fields.numberOfUsabletimes;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  switchSkillInfo = UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0, 0);
  if ( (switchSkillInfo & 1) != 0 )
  {
    Option_k__BackingField = item->fields._Option_k__BackingField;
    if ( !Option_k__BackingField )
      goto LABEL_188;
    questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      eventId = questRestrictionInfo->fields.eventId;
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_188;
      switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)switchSkillInfo,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0;
      if ( !switchSkillInfo )
        goto LABEL_188;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)switchSkillInfo,
              &entity,
              questRestrictionInfo->fields.eventId,
              (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_123;
      v62 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( TitleInfoControl__IsEnableEventShopButton_39814172((EventDetailEntity_o *)v62, 0) )
      {
        switchSkillInfo = (__int64)entity;
        if ( !entity )
          goto LABEL_188;
        LODWORD(questRestrictionInfo) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0);
      }
      else
      {
LABEL_123:
        LODWORD(questRestrictionInfo) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_188;
    if ( *(_BYTE *)(switchSkillInfo + 148) )
      goto LABEL_127;
    v64 = item->fields.followerInfo;
    if ( v64 )
    {
      type = v64->fields.type;
      if ( type != 3 )
      {
        v63 = 0;
        if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
          goto LABEL_128;
        goto LABEL_151;
      }
    }
    else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
    {
LABEL_151:
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_188;
      switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)switchSkillInfo,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      v74 = item->fields.followerInfo;
      v75 = v74 ? v74->fields.userId : 0LL;
      if ( !switchSkillInfo )
        goto LABEL_188;
      UsedCount = EventBoostItemUsedMaster__GetUsedCount((EventBoostItemUsedMaster_o *)switchSkillInfo, eventId, v75, 0);
      v78 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v78 = BalanceConfig_TypeInfo;
      }
      MaxFriendChocolateUse = v78->static_fields->MaxFriendChocolateUse;
      v92 = MaxFriendChocolateUse;
      if ( UsedCount )
      {
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78);
          MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
        }
        v92 = MaxFriendChocolateUse - UsedCount->fields.count;
      }
      numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6443/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0);
      if ( !numberOfUsabletimesPrefixLabel )
        goto LABEL_188;
      UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillInfo, 0);
      numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
      switchSkillInfo = (__int64)System_Int32__ToString((int32_t)&v92, 0);
      if ( !numberOfUsabletimesLabel )
        goto LABEL_188;
      UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillInfo, 0);
      numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
      switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6444/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0);
      if ( !numberOfUsabletimesSuffixLabel )
        goto LABEL_188;
      UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillInfo, 0);
      v83 = v92;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v83 )
      {
        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_6441/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0);
        UnityEngine_ColorUtility__TryParseHtmlString(v84, &color, 0);
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_6442/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0);
        UnityEngine_ColorUtility__TryParseHtmlString(v85, (UnityEngine_Color_o *)&v90, 0);
      }
      else
      {
        v86 = LocalizationManager__Get((System_String_o *)StringLiteral_6445/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0);
        UnityEngine_ColorUtility__TryParseHtmlString(v86, &color, 0);
        switchSkillInfo = (__int64)this->fields.friendChocolateSprite;
        if ( !switchSkillInfo )
          goto LABEL_188;
        UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0);
        v90 = (unsigned __int128)color;
      }
      switchSkillInfo = (__int64)this->fields.numberOfUsabletimesSprite;
      if ( !switchSkillInfo
        || (UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0),
            (switchSkillInfo = (__int64)this->fields.friendChocolateSprite) == 0) )
      {
LABEL_188:
        sub_1C32E7C(switchSkillInfo);
      }
      UIWidget__set_color((UIWidget_o *)switchSkillInfo, (UnityEngine_Color_o)v90, 0);
      v63 = 1;
LABEL_128:
      switchSkillInfo = (__int64)this->fields.numberOfUsabletimes;
      if ( switchSkillInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, v63, 0);
        return;
      }
      goto LABEL_188;
    }
LABEL_127:
    v63 = 0;
    goto LABEL_128;
  }
}


void FollowerSelectItemListViewItemDraw__SetNPInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        bool isNpc,
        bool isHideSupport,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x9
  UIRangeLabel_o *v13; // x22
  UnityEngine_Object_o *v14; // x21
  int32_t dispLimitCount; // w26
  int32_t FriendNpNameDispLimitCount; // w25
  Il2CppObject *Master_object; // x0
  __int64 v18; // x27
  __int64 v19; // x28
  ServantLimitImageMaster_o *v20; // x26
  int32_t strengthStatus; // w25
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v23; // x23
  Il2CppObject *v24; // x1
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *name; // x27
  TreasureDvcInfo_o *v28; // x24
  __int64 v29; // x27
  __int64 v30; // x28
  Il2CppObject *v31; // x0
  __int64 v32; // x24
  __int64 v33; // x28
  ServantLimitAddMaster_o *v34; // x23
  System_String_o *OverwriteTDName; // x23
  const MethodInfo *v36; // x1
  System_String_o **v37; // x8
  System_String_o *v38; // x24
  System_String_o *v39; // x23
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v10 = this;
  if ( (byte_4C324E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_9354/*"NP_DISABLE_COLOR_NAME"*/);
    sub_1C32C20(&StringLiteral_9355/*"NP_HIDE_NAME"*/);
    sub_1C32C20(&StringLiteral_9356/*"NP_HIDE_NAME_LEVEL"*/);
    sub_1C32C20(&StringLiteral_9360/*"NP_MAX_COLOR_NAME"*/);
    sub_1C32C20(&StringLiteral_9353/*"NP_COLOR_NAME"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C324E7 = 1;
  }
  tdInfo = 0;
  if ( !item )
    goto LABEL_68;
  v11 = item->fields._IsGrandSupport_k__BackingField ? 600LL : 96LL;
  v12 = item->fields._IsGrandSupport_k__BackingField ? 592LL : 88LL;
  if ( !servantLeader )
    goto LABEL_68;
  v13 = *(UIRangeLabel_o **)((char *)&v10->klass + v12);
  v14 = *(UnityEngine_Object_o **)((char *)&v10->klass + v11);
  if ( isNpc )
  {
    dispLimitCount = servantLeader->fields.dispLimitCount;
  }
  else
  {
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(servantLeader, 0);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_68;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !this )
        goto LABEL_68;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)this,
                                     servantLeader->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v19 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v20 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v19;
    *(_QWORD *)&v41.fields.fakeValue = v18;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                     v41,
                                                     0);
    if ( !v20 )
LABEL_68:
      sub_1C32E7C(this);
    dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                       v20,
                       (int32_t)this,
                       FriendNpNameDispLimitCount,
                       0);
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetNpInfo(
                                                   item,
                                                   &tdInfo,
                                                   (const MethodInfo *)servantLeader);
  if ( !tdInfo )
    goto LABEL_68;
  if ( isHideSupport
    || (strengthStatus = tdInfo->fields.strengthStatus,
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsNotUsedTreasureDeice(servantLeader, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    strengthStatus = 0;
  }
  followerInfo = item->fields.followerInfo;
  if ( followerInfo && followerInfo->fields.type == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9354/*"NP_DISABLE_COLOR_NAME"*/, 0);
    v24 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9355/*"NP_HIDE_NAME"*/, 0);
    v25 = v23;
LABEL_57:
    v26 = System_String__Format(v25, v24, 0);
    goto LABEL_58;
  }
  if ( !isHideSupport )
  {
    if ( !tdInfo )
      goto LABEL_68;
    name = tdInfo->fields.name;
    if ( isNpc && NpcServantFollowerEntity__IsHideTreasureDeviceLv(servantLeader->fields.npcFlag, 0) )
    {
      v28 = tdInfo;
      v30 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
      v29 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v42.fields.currentCryptoKey = v30;
      *(_QWORD *)&v42.fields.fakeValue = v29;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                       v42,
                                                       0);
      if ( !v28 )
        goto LABEL_68;
      name = TreasureDvcInfo__GetName(v28, (int32_t)this, 0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v31 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v33 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v34 = (ServantLimitAddMaster_o *)v31;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v33;
    *(_QWORD *)&v43.fields.fakeValue = v32;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                     v43,
                                                     0);
    if ( !tdInfo || !v34 )
      goto LABEL_68;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v34,
                        (int32_t)this,
                        dispLimitCount,
                        name,
                        tdInfo->fields.lv,
                        0);
    if ( FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, v36) <= 1 )
      v37 = (System_String_o **)&StringLiteral_9353/*"NP_COLOR_NAME"*/;
    else
      v37 = (System_String_o **)&StringLiteral_9360/*"NP_MAX_COLOR_NAME"*/;
    v38 = *v37;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get(v38, 0);
    v24 = (Il2CppObject *)OverwriteTDName;
    goto LABEL_57;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9356/*"NP_HIDE_NAME_LEVEL"*/, 0);
LABEL_58:
  v39 = v26;
  this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0);
  if ( !v13 )
    goto LABEL_68;
  UIRangeLabel__Set(v13, v39, (System_String_o *)this, 0, 0, item->fields._IsGrandSupport_k__BackingField, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( isHideSupport )
    {
      if ( v14 )
      {
        ServantNpCommandCardComponent__SetHide((ServantNpCommandCardComponent_o *)v14, 0);
        return;
      }
      goto LABEL_68;
    }
    if ( !v14 )
      goto LABEL_68;
    ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)v14, tdInfo, 0);
  }
}


void FollowerSelectItemListViewItemDraw__SetPlayerInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v4; // x20
  struct FollowerInfo_o *followerInfo; // x8
  UILabel_o *grandPlayerNameLabel; // x22
  UIIconLabel_o *grandPlayerLevelIconLabel; // x24
  UnityEngine_Behaviour_o *grandSvtProfileBackSpr; // x23
  UserGradeComponent_o *grandGradeIcon; // x21
  UISprite_o *grandPlayerBaseLineSprite; // x25
  struct FollowerInfo_o *v11; // x8
  bool v12; // w1
  System_String_o **v13; // x8
  struct FollowerInfo_o *v14; // x8
  int32_t userLv; // w2
  UILabel_o *loginDataLabel; // x24
  System_String_o *v17; // x25
  int64_t v18; // x0
  Il2CppObject *v19; // x0
  float v20; // s0
  float monitor_low; // s8
  float v22; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s10
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  FollowerInfo_o *v28; // x22
  int32_t Kind_40328816; // w0
  struct FollowerInfo_o *v30; // x8
  int32_t type; // w8
  __int64 *v32; // x8
  System_String_o *v33; // x21
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v36; // x21
  UnityEngine_Object_o *recommendedUser; // x21

  v4 = this;
  if ( (byte_4C324E9 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_1C32C20(&Grade_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_13392/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1C32C20(&StringLiteral_20241/*"icon_support_01"*/);
    sub_1C32C20(&StringLiteral_20445/*"img_listbg_svtprof_grand"*/);
    sub_1C32C20(&StringLiteral_6458/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_20444/*"img_listbg_line_grand"*/);
    sub_1C32C20(&StringLiteral_20200/*"icon_friend"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_20199/*"icon_follow"*/);
    byte_4C324E9 = 1;
  }
  if ( !item )
    goto LABEL_84;
  followerInfo = item->fields.followerInfo;
  if ( !followerInfo || !followerInfo->fields.type )
    return;
  if ( item->fields._IsGrandSupport_k__BackingField )
  {
    grandPlayerNameLabel = v4->fields.grandPlayerNameLabel;
    grandPlayerLevelIconLabel = v4->fields.grandPlayerLevelIconLabel;
    grandSvtProfileBackSpr = (UnityEngine_Behaviour_o *)v4->fields.grandSvtProfileBackSpr;
    grandGradeIcon = v4->fields.grandGradeIcon;
    grandPlayerBaseLineSprite = v4->fields.grandPlayerBaseLineSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(grandPlayerBaseLineSprite, (System_String_o *)StringLiteral_20444/*"img_listbg_line_grand"*/, 0);
    AtlasManager__SetPartyOrganizationImage(
      v4->fields.grandSvtProfileBackSpr,
      (System_String_o *)StringLiteral_20445/*"img_listbg_svtprof_grand"*/,
      0);
  }
  else
  {
    grandPlayerNameLabel = v4->fields.playerNameLabel;
    grandPlayerLevelIconLabel = v4->fields.playerLevelIconLabel;
    grandSvtProfileBackSpr = (UnityEngine_Behaviour_o *)v4->fields.svtProfileBackSpr;
    grandGradeIcon = v4->fields.gradeIcon;
  }
  FollowerSelectItemListViewItemDraw__SetPlayerMessage(v4, item, method);
  v11 = item->fields.followerInfo;
  if ( v11 && (unsigned int)(v11->fields.type - 3) <= 1 )
  {
    if ( !grandPlayerNameLabel )
      goto LABEL_84;
    UILabel__set_text(grandPlayerNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !grandPlayerLevelIconLabel )
      goto LABEL_84;
    UIIconLabel__Clear(grandPlayerLevelIconLabel, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.loginDataLabel;
    if ( !this )
      goto LABEL_84;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.supportInfoButton;
    if ( !this )
      goto LABEL_84;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v12 = 0;
    if ( !grandSvtProfileBackSpr )
      goto LABEL_84;
  }
  else
  {
    if ( (byte_4C324DB & 1) == 0 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_19066/*"error"*/);
      byte_4C324DB = 1;
      v11 = item->fields.followerInfo;
    }
    if ( !grandPlayerNameLabel )
      goto LABEL_84;
    v13 = v11 ? &v11->fields.userName : (System_String_o **)&StringLiteral_19066/*"error"*/;
    UILabel__set_text(grandPlayerNameLabel, *v13, 0);
    v14 = item->fields.followerInfo;
    if ( v14 )
    {
      userLv = v14->fields.userLv;
      if ( !grandPlayerLevelIconLabel )
        goto LABEL_84;
    }
    else
    {
      userLv = 1;
      if ( !grandPlayerLevelIconLabel )
        goto LABEL_84;
    }
    UIIconLabel__Set_41010828(grandPlayerLevelIconLabel, 2, userLv, 0, 0, 0, 0, 0, 0, 0, 0);
    loginDataLabel = v4->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    v18 = item->fields.followerInfo ? FollowerInfo__getUpdatedAt(item->fields.followerInfo, 0) : 0LL;
    v19 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v18, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v17, v19, 0);
    if ( !loginDataLabel )
      goto LABEL_84;
    UILabel__set_text(loginDataLabel, (System_String_o *)this, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.supportInfoButton;
    if ( !this )
      goto LABEL_84;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      !item->fields._IsRecommendFollower_k__BackingField,
      0);
    if ( !grandSvtProfileBackSpr )
      goto LABEL_84;
    v12 = 1;
  }
  UnityEngine_Behaviour__set_enabled(grandSvtProfileBackSpr, v12, 0);
  LODWORD(v20) = *(_QWORD *)&UILabel__get_printedSize(grandPlayerNameLabel, 0);
  if ( !grandGradeIcon )
    goto LABEL_84;
  monitor_low = v20;
  LODWORD(v22) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(grandGradeIcon, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)grandPlayerNameLabel,
                                                   0);
  if ( !this )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_84;
    CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
    if ( GameObjectExtensions__GetLocalScaleX(v26, 0) < 1.0 )
      monitor_low = (float)SLODWORD(Component_object[3].monitor);
  }
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0);
  GameObjectExtensions__SetLocalPositionX(v27, (float)(v22 * 0.5) + (float)(LocalPositionX + monitor_low), 0);
  v28 = item->fields.followerInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_40328816 = Grade__GetKind_40328816(v28, 0);
  UserGradeComponent__Set(grandGradeIcon, Kind_40328816, 0);
  v30 = item->fields.followerInfo;
  if ( !v30 )
    goto LABEL_55;
  type = v30->fields.type;
  if ( (unsigned int)(type - 3) < 2 )
  {
    v32 = &StringLiteral_20241/*"icon_support_01"*/;
    goto LABEL_58;
  }
  if ( type == 5 )
  {
    v32 = &StringLiteral_20199/*"icon_follow"*/;
    goto LABEL_58;
  }
  if ( type != 1 )
  {
LABEL_55:
    v33 = 0;
    goto LABEL_59;
  }
  v32 = &StringLiteral_20200/*"icon_friend"*/;
LABEL_58:
  v33 = (System_String_o *)*v32;
LABEL_59:
  this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
  if ( !this )
    goto LABEL_84;
  UISprite__set_spriteName((UISprite_o *)this, v33, 0);
  if ( !System_String__IsNullOrEmpty(v33, 0) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
    if ( !this )
      goto LABEL_84;
    ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
      this,
      this->klass[2]._1.generic_class);
  }
  recommendedIcon = (UnityEngine_Object_o *)v4->fields.recommendedIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recommendedIcon, 0, 0) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedIcon;
    if ( !this )
      goto LABEL_84;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, item->fields.isRecommended, 0);
  }
  recommendedIconText = (UnityEngine_Object_o *)v4->fields.recommendedIconText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(recommendedIconText, 0, 0) )
    goto LABEL_78;
  v36 = v4->fields.recommendedIconText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6458/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0);
  if ( !v36
    || (UILabel__set_text(v36, (System_String_o *)this, 0),
        (this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedIconText) == 0)
    || (this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0)) == 0 )
  {
LABEL_84:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, item->fields.isRecommended, 0);
LABEL_78:
  recommendedUser = (UnityEngine_Object_o *)v4->fields.recommendedUser;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recommendedUser, 0, 0) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedUser;
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      item->fields._isRecommendedUser_k__BackingField,
      0);
  }
}


void FollowerSelectItemListViewItemDraw__SetPlayerMessage(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v4; // x19
  UnityEngine_GameObject_o **p_grandPlayerProfileObj; // x12
  UnityEngine_GameObject_o **p_grandSvtProfileObj; // x11
  UnityEngine_Component_o **p_grandMessageLabel; // x10
  UnityEngine_Component_o **p_grandSvtNameRangeLabel; // x9
  UnityEngine_Component_o **p_grandGradeIcon; // x8
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Component_o *v12; // x22
  UnityEngine_Component_o *v13; // x24
  UnityEngine_Component_o *v14; // x19
  struct FollowerInfo_o *followerInfo; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v17; // x8
  struct System_Int32_array *adviceMessageIds; // x8
  struct FollowerInfo_o *v19; // x8
  struct UserRecommendSupportInfo_array *v20; // x8
  UserRecommendSupportInfo_o *v21; // x8
  System_String_array *ConvertMessageToId; // x0
  System_String_o *v23; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v25; // x0
  System_String_o *message; // x1
  UnityEngine_GameObject_o *v27; // x0
  float v28; // w8
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  bool v31; // w1
  UnityEngine_GameObject_o *v32; // x0
  struct FollowerInfo_o *v33; // x8
  UnityEngine_GameObject_o *v34; // x0

  v4 = this;
  if ( (byte_4C324EA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_113/*" "*/);
    byte_4C324EA = 1;
  }
  if ( !item )
    goto LABEL_54;
  if ( item->fields._IsGrandSupport_k__BackingField )
  {
    p_grandPlayerProfileObj = &v4->fields.grandPlayerProfileObj;
    p_grandSvtProfileObj = &v4->fields.grandSvtProfileObj;
    p_grandMessageLabel = (UnityEngine_Component_o **)&v4->fields.grandMessageLabel;
    p_grandSvtNameRangeLabel = (UnityEngine_Component_o **)&v4->fields.grandSvtNameRangeLabel;
    p_grandGradeIcon = (UnityEngine_Component_o **)&v4->fields.grandGradeIcon;
  }
  else
  {
    p_grandGradeIcon = (UnityEngine_Component_o **)&v4->fields.gradeIcon;
    p_grandSvtNameRangeLabel = (UnityEngine_Component_o **)&v4->fields.svtNameRangeLabel;
    p_grandMessageLabel = (UnityEngine_Component_o **)&v4->fields.messageLabel;
    p_grandSvtProfileObj = &v4->fields.svtProfileObj;
    p_grandPlayerProfileObj = &v4->fields.playerProfileObj;
  }
  v10 = *p_grandPlayerProfileObj;
  v11 = *p_grandSvtProfileObj;
  v12 = *p_grandMessageLabel;
  v13 = *p_grandSvtNameRangeLabel;
  v14 = *p_grandGradeIcon;
  followerInfo = item->fields.followerInfo;
  if ( item->fields._IsRecommendFollower_k__BackingField )
  {
    if ( !followerInfo )
      goto LABEL_54;
    userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
    if ( !userRecommendSupportHash )
      goto LABEL_54;
    if ( LODWORD(userRecommendSupportHash->max_length) )
    {
      v17 = userRecommendSupportHash->m_Items[0];
      if ( !v17 )
        goto LABEL_54;
      adviceMessageIds = v17->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_54;
      if ( !adviceMessageIds->max_length )
        goto LABEL_46;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v19 = item->fields.followerInfo;
      if ( !v19 )
        goto LABEL_54;
      v20 = v19->fields.userRecommendSupportHash;
      if ( !v20 )
        goto LABEL_54;
      if ( LODWORD(v20->max_length) )
      {
        v21 = v20->m_Items[0];
        if ( !v21 || !this )
          goto LABEL_54;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v21->fields.adviceMessageIds,
                               0);
        v23 = System_String__Join((System_String_o *)StringLiteral_113/*" "*/, ConvertMessageToId, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v23, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v13 )
            goto LABEL_54;
          gameObject = UnityEngine_Component__get_gameObject(v13, 0);
          GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0);
          if ( !v12 )
            goto LABEL_54;
          v25 = (UILabel_o *)v12;
          message = v23;
          goto LABEL_25;
        }
LABEL_46:
        if ( v13 )
        {
          v34 = UnityEngine_Component__get_gameObject(v13, 0);
          GameObjectExtensions__SetLocalPositionY(v34, -19.0, 0);
          if ( v12 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              if ( v10 )
              {
                v31 = 1;
                v30 = v10;
LABEL_51:
                UnityEngine_GameObject__SetActive(v30, v31, 0);
                GameObjectExtensions__SetLocalPositionY(v10, -11.0, 0);
                GameObjectExtensions__SetLocalPositionY(v11, 10.0, 0);
                if ( v14 )
                {
                  v27 = UnityEngine_Component__get_gameObject(v14, 0);
                  v28 = 57.0;
                  goto LABEL_53;
                }
              }
            }
          }
        }
LABEL_54:
        sub_1C32E7C(this);
      }
    }
    sub_1C32E84(this);
  }
  if ( followerInfo )
  {
    switch ( followerInfo->fields.type )
    {
      case 1:
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(followerInfo->fields.message, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_46;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)OptionManager__GetMessageDisp(0);
        if ( ((unsigned __int8)this & 1) == 0 || !item->fields.isMessageDisp )
          goto LABEL_46;
        if ( !v13 )
          goto LABEL_54;
        v32 = UnityEngine_Component__get_gameObject(v13, 0);
        GameObjectExtensions__SetLocalPositionY(v32, -19.0, 0);
        v33 = item->fields.followerInfo;
        if ( !v33 || !v12 )
          goto LABEL_54;
        message = v33->fields.message;
        v25 = (UILabel_o *)v12;
        break;
      case 2:
      case 5:
        goto LABEL_46;
      case 3:
      case 4:
        if ( !v13 )
          goto LABEL_54;
        v29 = UnityEngine_Component__get_gameObject(v13, 0);
        GameObjectExtensions__SetLocalPositionY(v29, -16.0, 0);
        if ( !v12 )
          goto LABEL_54;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
        if ( !this )
          goto LABEL_54;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !v10 )
          goto LABEL_54;
        v30 = v10;
        v31 = 0;
        goto LABEL_51;
      default:
        return;
    }
LABEL_25:
    UILabel__set_text(v25, message, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( v10 )
      {
        UnityEngine_GameObject__SetActive(v10, 1, 0);
        GameObjectExtensions__SetLocalPositionY(v10, -1.0, 0);
        GameObjectExtensions__SetLocalPositionY(v11, -1.0, 0);
        if ( v14 )
        {
          v27 = UnityEngine_Component__get_gameObject(v14, 0);
          v28 = 53.0;
LABEL_53:
          GameObjectExtensions__SetLocalPositionY(v27, v28, 0);
          return;
        }
      }
    }
    goto LABEL_54;
  }
}


void FollowerSelectItemListViewItemDraw__SetServantInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        int32_t targetDisplaySkill,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v6; // x19
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v8; // x1
  ServantLeaderInfo_o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  bool IsNpc; // w24
  struct FollowerInfo_o *followerInfo; // x8
  __int64 v14; // x9
  __int64 v15; // x10
  ServantFaceIconComponent_o *v16; // x26
  UIRangeLabel_o *v17; // x25
  char v18; // w23
  const MethodInfo *v19; // x3
  bool v20; // w1
  UIRangeLabel_o *svtNameRangeLabel; // x20
  UIRangeLabel_o *svtNpRangeLabel; // x20
  ServantNpCommandCardComponent_o *svtNpCommandCard; // x0
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v25; // x0
  struct SkillIconComponent_array *v26; // x8
  __int64 v27; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v30; // x0
  struct SkillIconComponent_array *v31; // x8
  __int64 v32; // x20
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  ServantCommandCardListComponent_o *v34; // x0
  UnityEngine_Component_o *v35; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x5
  UnityEngine_Object_o *eventUpValIcon; // x24
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v44; // w25
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x26
  FollowerSelectItemListViewItemDraw___c_c *v47; // x8
  System_Func_object__int__o *_9__103_0; // x27
  Il2CppObject *v49; // x28
  struct FollowerSelectItemListViewItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  FollowerSelectItemListViewItemDraw_o *v52; // x2
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  UnityEngine_Object_o *svtCommandCardList; // x21
  const MethodInfo *v56; // x1
  ServantCommandCardListComponent_o *v57; // x21
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x23
  int32_t v60; // w24
  UnityEngine_Object_o *pushSprite; // x21
  struct FollowerInfo_o *v62; // x8
  int64_t pushUserSvtId; // x8
  bool v64; // w21
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  const MethodInfo *v66; // x2
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  UISprite_o *v68; // x21
  UISprite_o *v69; // x21
  UILabel_o *v70; // x21
  System_String_o *v71; // x22
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  __int64 v76; // x6
  __int64 v77; // x7
  Il2CppObject *v78; // x0
  int32_t servantRarity; // [xsp+8h] [xbp-68h]
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4C324E6 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&SkillInfo___TypeInfo);
    sub_1C32C20(&Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__103_0__);
    sub_1C32C20(&FollowerSelectItemListViewItemDraw___c_TypeInfo);
    sub_1C32C20(&StringLiteral_3703/*"COMMON_NO_ENTRY"*/);
    sub_1C32C20(&StringLiteral_11650/*"SERVANT_HIDE_NAME"*/);
    sub_1C32C20(&StringLiteral_11546/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C32C20(&StringLiteral_20392/*"img_frames_mask01"*/);
    sub_1C32C20(&StringLiteral_18479/*"datalost_svt_select"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32C20(&StringLiteral_9324/*"NO_ENTRY_NAME"*/);
    byte_4C324E6 = 1;
  }
  if ( !item )
    goto LABEL_132;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item);
  if ( ServantLeader )
  {
    v9 = ServantLeader;
    v11 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v10 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v81.fields.currentCryptoKey = v11;
    *(_QWORD *)&v81.fields.fakeValue = v10;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v81, 0) >= 1 )
    {
      IsNpc = ServantLeaderInfo__IsNpc(v9, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v9, 0);
      followerInfo = item->fields.followerInfo;
      if ( item->fields._IsGrandSupport_k__BackingField )
        v14 = 584;
      else
        v14 = 80;
      if ( item->fields._IsGrandSupport_k__BackingField )
        v15 = 520;
      else
        v15 = 56;
      if ( !followerInfo )
        goto LABEL_132;
      v16 = *(ServantFaceIconComponent_o **)((char *)&v6->klass + v15);
      if ( !v16 )
        goto LABEL_132;
      v17 = *(UIRangeLabel_o **)((char *)&v6->klass + v14);
      v18 = (char)this;
      ServantFaceIconComponent__Set_40909724(
        *(ServantFaceIconComponent_o **)((char *)&v6->klass + v15),
        v9,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        0,
        followerInfo->fields.imageSvtId,
        0);
      if ( item->fields._IsGrandSupport_k__BackingField )
        FollowerSelectItemListViewItemDraw__SetGrandServantEquip(v6, item, v9, v19);
      v20 = !IsNpc || !NpcServantFollowerEntity__IsHideRarity(v9->fields.npcFlag, 0);
      ServantFaceIconComponent__SetDispRaritySprite(v16, v20, 0);
      ServantFaceIconComponent__SetDispClassSprite(v16, !item->fields._IsDataLost_k__BackingField, 0);
      if ( (v18 & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11650/*"SERVANT_HIDE_NAME"*/,
                                                         0);
      }
      else
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(item, v36);
      }
      if ( !v17 )
        goto LABEL_132;
      UIRangeLabel__Set(v17, (System_String_o *)this, 0, 1, 0, 0, 0);
      FollowerSelectItemListViewItemDraw__SetNPInfo(v6, item, v9, IsNpc, v18 & 1, v37);
      eventUpValIcon = (UnityEngine_Object_o *)v6->fields.eventUpValIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
      {
        if ( FollowerSelectItemListViewItem__get_ServantLeader(item, v39) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(item, v41);
          if ( !this )
            goto LABEL_132;
          baseButton = this->fields.baseButton;
          servantFaceIcon = this->fields.servantFaceIcon;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v82.fields.currentCryptoKey = baseButton;
          *(_QWORD *)&v82.fields.fakeValue = servantFaceIcon;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v82, 0);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(item, v45);
          if ( !this )
            goto LABEL_132;
          servantRarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0);
        }
        else
        {
          servantRarity = -1;
          v44 = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(item, v41);
        if ( !this )
          goto LABEL_132;
        EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList((ServantLeaderInfo_o *)this, 0);
        v47 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw___c_TypeInfo);
          v47 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        }
        _9__103_0 = (System_Func_object__int__o *)v47->static_fields->__9__103_0;
        if ( !_9__103_0 )
        {
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
          }
          v49 = (Il2CppObject *)v47->static_fields->__9;
          _9__103_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EquipTargetInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__103_0,
            v49,
            Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__103_0__,
            0);
          static_fields = FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields;
          static_fields->__9__103_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__103_0;
          sub_1C32BC4(&static_fields->__9__103_0, _9__103_0);
        }
        v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList,
                                                                     (System_Func_TSource__TResult__o *)_9__103_0,
                                                                     (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
        this = (FollowerSelectItemListViewItemDraw_o *)System_Linq_Enumerable__ToArray_int_(
                                                         v51,
                                                         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !this )
          goto LABEL_132;
        v52 = this;
        if ( !this->fields.m_CancellationTokenSource )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32CC8(int___TypeInfo, 1);
          if ( !this )
            goto LABEL_132;
          v52 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_133:
            sub_1C32E84(this);
          LODWORD(this->fields.rangeSprite) = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
        if ( !this )
LABEL_132:
          sub_1C32E7C(this);
        EventUpValIconComponent__Set_40784360(
          (EventUpValIconComponent_o *)this,
          item->fields.eventUpValItemList,
          (System_Int32_array *)v52,
          v44,
          servantRarity,
          0);
      }
      FollowerSelectItemListViewItemDraw__SetSkillIconInfo(v6, item, v9, v40);
      FollowerSelectItemListViewItemDraw__SetAppendSkillIconInfo(v6, item, v9, v53);
      FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(v6, targetDisplaySkill, item, v54);
      svtCommandCardList = (UnityEngine_Object_o *)v6->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v57 = v6->fields.svtCommandCardList;
        if ( (v18 & 1) != 0 )
        {
          if ( !v57 )
            goto LABEL_132;
          ServantCommandCardListComponent__SetHide(v6->fields.svtCommandCardList, 0);
        }
        else
        {
          SvtId = FollowerSelectItemListViewItem__get_SvtId(item, v56);
          commandCardParam = v9->fields.commandCardParam;
          v60 = SvtId;
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v9, 0);
          if ( !v57 )
            goto LABEL_132;
          ServantCommandCardListComponent__Set_40894944(v57, v60, commandCardParam, (System_Int32_array *)this, 2, 1, 0);
        }
      }
      pushSprite = (UnityEngine_Object_o *)v6->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v62 = item->fields.followerInfo;
        if ( !v62 )
          goto LABEL_132;
        pushUserSvtId = v62->fields.pushUserSvtId;
        v64 = pushUserSvtId && pushUserSvtId == v9->fields.userSvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.pushSprite;
        if ( !this )
          goto LABEL_132;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v64, 0);
      }
      dataLostMaskSprite = (UnityEngine_Object_o *)v6->fields.dataLostMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
        goto LABEL_130;
      dataLostMaskMessageLabel = (UnityEngine_Object_o *)v6->fields.dataLostMaskMessageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0, 0) )
        goto LABEL_130;
      if ( item->fields._IsDataLost_k__BackingField )
      {
        v68 = v6->fields.dataLostMaskSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(v68, (System_String_o *)StringLiteral_18479/*"datalost_svt_select"*/, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_132;
        v83.fields.r = 1.0;
        v83.fields.g = 1.0;
        v83.fields.b = 1.0;
        v83.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v83, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_132;
        goto LABEL_128;
      }
      if ( item->fields._TimesToRestart_k__BackingField < 1 )
      {
LABEL_130:
        FollowerSelectItemListViewItemDraw__SetUpOpenClassScoreNumButton(v6, item, v66);
        return;
      }
      v69 = v6->fields.dataLostMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v69, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20392/*"img_frames_mask01"*/, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( this )
        {
          v84.fields.a = 0.62353;
          v84.fields.r = 0.0;
          v84.fields.g = 0.0;
          v84.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v84, 0);
          v70 = v6->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11546/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
          TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
          v78 = (Il2CppObject *)j_il2cpp_value_box_0(
                                  int_TypeInfo,
                                  &TimesToRestart_k__BackingField,
                                  v72,
                                  v73,
                                  v74,
                                  v75,
                                  v76,
                                  v77);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v71, v78, 0);
          if ( v70 )
          {
            UILabel__set_text(v70, (System_String_o *)this, 0);
            this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
            if ( this )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskMessageLabel;
                if ( this )
                {
LABEL_128:
                  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
                  if ( !this )
                    goto LABEL_132;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  goto LABEL_130;
                }
              }
            }
          }
        }
      }
      goto LABEL_132;
    }
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(item, v8);
  if ( !v6->fields.servantFaceIcon )
    goto LABEL_132;
  ServantFaceIconComponent__SetEquipDangling(v6->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0);
  svtNameRangeLabel = v6->fields.svtNameRangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3703/*"COMMON_NO_ENTRY"*/, 0);
  if ( !svtNameRangeLabel )
    goto LABEL_132;
  UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0, 1, 0, 0, 0);
  svtNpRangeLabel = v6->fields.svtNpRangeLabel;
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9324/*"NO_ENTRY_NAME"*/, 0);
  if ( !svtNpRangeLabel )
    goto LABEL_132;
  UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)this, 0, 1, 0, 0, 0);
  svtNpCommandCard = v6->fields.svtNpCommandCard;
  if ( svtNpCommandCard )
    ServantNpCommandCardComponent__Clear(svtNpCommandCard, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
  if ( this )
    EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0);
  skillIconList = v6->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_132;
  v25 = sub_1C32CC8(SkillInfo___TypeInfo, LODWORD(skillIconList->max_length));
  v6->fields.skillInfoList = (struct SkillInfo_array *)v25;
  this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32BC4(&v6->fields.skillInfoList, v25);
  v26 = v6->fields.skillIconList;
  if ( !v26 )
    goto LABEL_132;
  v27 = 0;
  while ( (int)v27 < SLODWORD(v26->max_length) )
  {
    skillBaseList = v6->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_132;
    if ( (unsigned int)v27 >= LODWORD(skillBaseList->max_length) )
      goto LABEL_133;
    this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v27];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v26 = v6->fields.skillIconList;
      ++v27;
      if ( v26 )
        continue;
    }
    goto LABEL_132;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_132;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  appendSkillIconList = v6->fields.appendSkillIconList;
  if ( !appendSkillIconList )
    goto LABEL_132;
  v30 = sub_1C32CC8(SkillInfo___TypeInfo, LODWORD(appendSkillIconList->max_length));
  v6->fields.appendSkillInfoList = (struct SkillInfo_array *)v30;
  this = (FollowerSelectItemListViewItemDraw_o *)sub_1C32BC4(&v6->fields.appendSkillInfoList, v30);
  v31 = v6->fields.appendSkillIconList;
  if ( !v31 )
    goto LABEL_132;
  v32 = 0;
  while ( (int)v32 < SLODWORD(v31->max_length) )
  {
    appendSkillBaseList = v6->fields.appendSkillBaseList;
    if ( !appendSkillBaseList )
      goto LABEL_132;
    if ( (unsigned int)v32 >= LODWORD(appendSkillBaseList->max_length) )
      goto LABEL_133;
    this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v32];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v31 = v6->fields.appendSkillIconList;
      ++v32;
      if ( v31 )
        continue;
    }
    goto LABEL_132;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_132;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v34 = v6->fields.svtCommandCardList;
  if ( v34 )
    ServantCommandCardListComponent__Clear(v34, 0);
  v35 = (UnityEngine_Component_o *)v6->fields.pushSprite;
  if ( v35 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v35, 0);
    if ( !this )
      goto LABEL_132;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
}


void FollowerSelectItemListViewItemDraw__SetSkillIconInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  struct SkillInfo_array **p_skillInfoList; // x21
  FollowerSelectItemListViewItemDraw_o *v5; // x20
  struct SkillIconComponent_array *skillIconList; // x8
  il2cpp_array_size_t max_length; // x8
  struct SkillInfo_array *v9; // x11
  int v10; // w9
  unsigned __int64 v11; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v13; // x14
  __int64 v14; // x22
  __int64 v15; // x23
  unsigned __int64 v16; // x24
  struct SkillInfo_array *v17; // x8
  struct UnityEngine_GameObject_array *v18; // x9
  int32_t *v19; // x25
  struct SkillIconComponent_array *v20; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v23; // x8
  struct UIIconLabel_array *v24; // x8
  struct SkillIconComponent_array *v25; // x8
  __int64 v26; // x9

  if ( !item )
    goto LABEL_48;
  p_skillInfoList = &this->fields.skillInfoList;
  v5 = this;
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                   item,
                                                   &this->fields.skillInfoList,
                                                   (const MethodInfo *)servantLeader);
  skillIconList = v5->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_48;
  max_length = skillIconList->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v9 = *p_skillInfoList;
    v10 = 0;
    v11 = 0;
    while ( v9 )
    {
      max_length_low = LODWORD(v9->max_length);
      if ( (__int64)v11 < (int)max_length_low )
      {
        if ( v11 >= max_length_low )
LABEL_49:
          sub_1C32E84(this);
        v13 = (*p_skillInfoList)->m_Items[v11];
        if ( v13 && v13->fields.id >= 1 )
          v10 = v11 + 1;
      }
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_14;
    }
LABEL_48:
    sub_1C32E7C(this);
  }
  v10 = 0;
LABEL_14:
  if ( (int)max_length >= 1 )
  {
    v14 = v10;
    v15 = 4;
    do
    {
      v16 = v15 - 4;
      if ( v15 - 4 >= v14 )
      {
        skillBaseList = v5->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_48;
        if ( v16 >= LODWORD(skillBaseList->max_length) )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillBaseList->obj.klass + v15);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
      else
      {
        v17 = *p_skillInfoList;
        if ( !*p_skillInfoList )
          goto LABEL_48;
        if ( v16 >= LODWORD(v17->max_length) )
          goto LABEL_49;
        v18 = v5->fields.skillBaseList;
        if ( !v18 )
          goto LABEL_48;
        if ( v16 >= LODWORD(v18->max_length) )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v18->obj.klass + v15);
        if ( !this )
          goto LABEL_48;
        v19 = (int32_t *)*((_QWORD *)&v17->obj.klass + v15);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( !servantLeader )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(servantLeader, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v19 )
            v19[4] = 0;
          v20 = v5->fields.skillIconList;
          if ( !v20 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v20->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v20->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0);
          skillLevelIconLabelList = v5->fields.skillLevelIconLabelList;
          if ( !skillLevelIconLabelList )
            goto LABEL_48;
          if ( v16 >= LODWORD(skillLevelIconLabelList->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0);
        }
        else
        {
          v23 = v5->fields.skillIconList;
          if ( !v23 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v23->max_length) )
            goto LABEL_49;
          if ( !v19 )
            goto LABEL_48;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v23->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__Set_40922992((SkillIconComponent_o *)this, v19[4], v19[5], v19[12], v19[13], 0);
          v24 = v5->fields.skillLevelIconLabelList;
          if ( !v24 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v24->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Set_41010828((UIIconLabel_o *)this, 48, v19[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
      }
      v25 = v5->fields.skillIconList;
      if ( !v25 )
        goto LABEL_48;
      v26 = v15 - 3;
      ++v15;
    }
    while ( v26 < SLODWORD(v25->max_length) );
  }
}


void FollowerSelectItemListViewItemDraw__SetUpOpenClassScoreNumButton(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UnityEngine_Component_o *gameObject; // x0
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w21
  UnityEngine_Object_o *v8; // x21
  int32_t openClassBoardNum; // w23
  UILabel_o *classBoardOpenButtonLabel; // x21
  UnityEngine_GameObject_o *v11; // x21
  FollowerSelectItemListViewItemDraw_c *v12; // x8
  __int64 v13; // x9
  UISprite_o *classBoardBackSprite; // x21
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject **v22; // x9
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  int32_t openGrandClassBoardNum; // w8
  Il2CppObject **v33; // x9
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x0
  struct UILabel_o *v36; // x20
  System_String_o *v37; // x0
  Il2CppObject *Component_object; // x19
  int32_t v39; // [xsp+8h] [xbp-48h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C324EF & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1C32C20(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6402/*"FFFFFF"*/);
    sub_1C32C20(&StringLiteral_17451/*"btn_bg_29_2"*/);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    sub_1C32C20(&StringLiteral_12484/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_1C32C20(&StringLiteral_12485/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/);
    sub_1C32C20(&StringLiteral_6401/*"FFFF00"*/);
    sub_1C32C20(&StringLiteral_16016/*"[{0}]+{1}[-]"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C324EF = 1;
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(classBoardOpenButton, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    goto LABEL_33;
  if ( !item )
    goto LABEL_57;
  gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
  if ( !gameObject )
    goto LABEL_57;
  IsReleasedClassBoard_k__BackingField = item->fields._IsReleasedClassBoard_k__BackingField;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_57;
  if ( !IsReleasedClassBoard_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
  if ( !gameObject )
    goto LABEL_57;
  UICommonButton__SetButtonEnable((UICommonButton_o *)gameObject, item->fields.openClassBoardNum >= 0, 1, 0);
  v8 = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    openClassBoardNum = item->fields.openClassBoardNum;
    classBoardOpenButtonLabel = this->fields.classBoardOpenButtonLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( (openClassBoardNum & 0x80000000) == 0 )
        goto LABEL_16;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( (openClassBoardNum & 0x80000000) == 0 )
      {
LABEL_16:
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, 0);
        if ( !classBoardOpenButtonLabel )
          goto LABEL_57;
        UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
        if ( !gameObject )
          goto LABEL_57;
        v11 = UnityEngine_Component__get_gameObject(gameObject, 0);
        v12 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
          v12 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        v13 = 32;
LABEL_28:
        GameObjectExtensions__SetLocalPositionY(
          v11,
          *(float *)((char *)&v12->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v13),
          0);
        goto LABEL_29;
      }
    }
    gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12485/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, 0);
    if ( !classBoardOpenButtonLabel )
      goto LABEL_57;
    UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
    if ( !gameObject )
      goto LABEL_57;
    v11 = UnityEngine_Component__get_gameObject(gameObject, 0);
    v12 = FollowerSelectItemListViewItemDraw_TypeInfo;
    if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
      v12 = FollowerSelectItemListViewItemDraw_TypeInfo;
    }
    v13 = 36;
    goto LABEL_28;
  }
LABEL_29:
  classBoardBackSprite = this->fields.classBoardBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17451/*"btn_bg_29_2"*/, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.classBoardBackSprite;
  if ( !gameObject )
    goto LABEL_57;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
    gameObject,
    gameObject->klass[2]._1.generic_class);
LABEL_33:
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !item )
      goto LABEL_57;
    if ( item->fields.openClassBoardNum < 0 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
      if ( gameObject )
      {
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        return;
      }
      goto LABEL_57;
    }
    if ( item->fields.isMaxOpenClassBoard )
      v22 = (Il2CppObject **)&StringLiteral_6401/*"FFFF00"*/;
    else
      v22 = (Il2CppObject **)&StringLiteral_6402/*"FFFFFF"*/;
    v23 = *v22;
    v40 = item->fields.openClassBoardNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v16, v17, v18, v19, v20, v21);
    gameObject = (UnityEngine_Component_o *)System_String__Format_63559836(
                                              (System_String_o *)StringLiteral_16016/*"[{0}]+{1}[-]"*/,
                                              v23,
                                              v24,
                                              0);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_57;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
    if ( !gameObject )
      goto LABEL_57;
    v25 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SetLocalScale_36038768(v25, 1.0, 0);
    openGrandClassBoardNum = item->fields.openGrandClassBoardNum;
    if ( openGrandClassBoardNum < 0 )
      return;
    v33 = (Il2CppObject **)(item->fields.isMaxOpenGrandClassBoard ? &StringLiteral_6401/*"FFFF00"*/ : &StringLiteral_6402/*"FFFFFF"*/);
    v34 = *v33;
    v39 = openGrandClassBoardNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v26, v27, v28, v29, v30, v31);
    gameObject = (UnityEngine_Component_o *)System_String__Format_63559836(
                                              (System_String_o *)StringLiteral_16016/*"[{0}]+{1}[-]"*/,
                                              v34,
                                              v35,
                                              0);
    v36 = this->fields.openClassBoardNumLabel;
    if ( !v36
      || (v37 = System_String__Concat_63556792(
                  v36->fields.mText,
                  (System_String_o *)StringLiteral_1048/*"/"*/,
                  (System_String_o *)gameObject,
                  0),
          UILabel__set_text(v36, v37, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel) == 0) )
    {
LABEL_57:
      sub_1C32E7C(gameObject);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
        return;
      }
      goto LABEL_57;
    }
  }
}


void FollowerSelectItemListViewItemDraw__SetupLockUI(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *lockMarkSprite; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C324EC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C324EC = 1;
  }
  if ( item )
    LOBYTE(item) = item->fields.isLockUser;
  lockMarkSprite = (UnityEngine_Object_o *)this->fields.lockMarkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockMarkSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockMarkSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C32E7C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)item, 0);
  }
}


void FollowerSelectItemListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C324F2 & 1) == 0 )
  {
    sub_1C32C20(&FollowerSelectItemListViewItemDraw___c_TypeInfo);
    byte_4C324F2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(FollowerSelectItemListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItemDraw___c_o *)v1;
  sub_1C32BC4(FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields, v1);
}


void FollowerSelectItemListViewItemDraw___c___ctor(
        FollowerSelectItemListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t FollowerSelectItemListViewItemDraw___c___SetServantInfo_b__103_0(
        FollowerSelectItemListViewItemDraw___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4C324F3 & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw___c_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C324F3 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v7, 0);
}