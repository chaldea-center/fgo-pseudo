void __fastcall FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerSelectItemListViewItemDraw_c *v2; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B17057 & 1) == 0 )
  {
    sub_1BCAFF8(&FollowerSelectItemListViewItemDraw_TypeInfo, v1);
    byte_4B17057 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BE1AF0;
  v2 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_BE1DF0;
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

  if ( (byte_4B17056 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BCAFF8(&SkillIconComponent___TypeInfo, v4);
    sub_1BCAFF8(&UIIconLabel___TypeInfo, v5);
    byte_4B17056 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  this->fields.skillBaseList = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        (unsigned int)v6->static_fields->SvtSkillListMax);
  sub_1BCAF9C(&this->fields.skillBaseList);
  this->fields.skillIconList = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                                                    SkillIconComponent___TypeInfo,
                                                                    (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BCAF9C(&this->fields.skillIconList);
  this->fields.skillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BCB0A0(
                                                                       UIIconLabel___TypeInfo,
                                                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  sub_1BCAF9C(&this->fields.skillLevelIconLabelList);
  this->fields.appendSkillBaseList = (struct UnityEngine_GameObject_array *)sub_1BCB0A0(
                                                                              UnityEngine_GameObject___TypeInfo,
                                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BCAF9C(&this->fields.appendSkillBaseList);
  this->fields.appendSkillIconList = (struct SkillIconComponent_array *)sub_1BCB0A0(
                                                                          SkillIconComponent___TypeInfo,
                                                                          (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BCAF9C(&this->fields.appendSkillIconList);
  this->fields.appendSkillLevelIconLabelList = (struct UIIconLabel_array *)sub_1BCB0A0(
                                                                             UIIconLabel___TypeInfo,
                                                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  sub_1BCAF9C(&this->fields.appendSkillLevelIconLabelList);
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

  if ( (byte_4B1704A & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_20050/*"icon_skill_mini"*/, v5);
    sub_1BCAFF8(&StringLiteral_20226/*"img_friend_skill"*/, v6);
    sub_1BCAFF8(&StringLiteral_19946/*"icon_append_mini"*/, v7);
    sub_1BCAFF8(&StringLiteral_20225/*"img_friend_appendskill"*/, v8);
    byte_4B1704A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1BCAF9C(&this->fields.switchSkillUIList);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20050/*"icon_skill_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20226/*"img_friend_skill"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_19946/*"icon_append_mini"*/, 0LL);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20225/*"img_friend_appendskill"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t targetDisplaySkill,
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
  int32_t displaySkill; // w9
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

  v5 = targetDisplaySkill;
  if ( (byte_4B17054 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Add__, *(_QWORD *)&targetDisplaySkill);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B17054 = 1;
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
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, *(const MethodInfo **)&targetDisplaySkill);
  if ( ServantLeader )
  {
    v16 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v16;
    *(_QWORD *)&v28.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v28, 0LL) > 0;
  }
  else
  {
    v17 = 0;
  }
  displaySkill = this->fields.displaySkill;
  if ( displaySkill == 2 )
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
      *(_QWORD *)&targetDisplaySkill = this->fields.skillInfoUiWidget;
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
          *(Il2CppObject **)&targetDisplaySkill,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = *(_QWORD *)&targetDisplaySkill;
        sub_1BCAF9C(v22 + 32);
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
      *(_QWORD *)&targetDisplaySkill = this->fields.appendSkillInfoUiWidget;
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
          *(Il2CppObject **)&targetDisplaySkill,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * v25;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v25 + 1;
        *(_QWORD *)(v26 + 32) = *(_QWORD *)&targetDisplaySkill;
        sub_1BCAF9C(v26 + 32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v27 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v27 )
      {
        SwitchUIWidgetComponent__Set(v27, (UIWidget_array *)switchSkillInfo, 0, 0LL);
        return;
      }
    }
LABEL_52:
    sub_1BCB254(switchSkillInfo, *(_QWORD *)&targetDisplaySkill);
  }
  if ( displaySkill != 1 )
  {
    if ( displaySkill )
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


void __fastcall FollowerSelectItemListViewItemDraw__SetActiveForGrandSupport(
        FollowerSelectItemListViewItemDraw_o *this,
        bool isGrandSupport,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *grandPlayerProfileObj; // x0
  bool v6; // w20
  bool v7; // w21

  grandPlayerProfileObj = this->fields.grandPlayerProfileObj;
  if ( !grandPlayerProfileObj )
    sub_1BCB254(0LL, isGrandSupport);
  v6 = isGrandSupport;
  if ( UnityEngine_GameObject__get_activeSelf(grandPlayerProfileObj, 0LL) != isGrandSupport )
  {
    v7 = !isGrandSupport;
    GameObjectHelper__SetActiveSafely(this->fields.svtProfileObj, v7, 0LL);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.servantFaceIcon, v7, 0LL);
    GameObjectHelper__SetActiveSafely(this->fields.playerProfileObj, v7, 0LL);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.messageLabel, v7, 0LL);
    GameObjectHelper__SetActiveSafely(this->fields.grandSvtProfileObj, v6, 0LL);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.grandServantFaceIcon, v6, 0LL);
    GameObjectHelper__SetActiveSafely(this->fields.grandSvtEquipObj, v6, 0LL);
    GameObjectHelper__SetActiveSafely(this->fields.grandPlayerProfileObj, v6, 0LL);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.grandMessageLabel, v6, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetAppendSkillIconInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  struct SkillInfo_array **p_appendSkillInfoList; // x21
  FollowerSelectItemListViewItemDraw_o *v6; // x20
  __int64 v7; // x2
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v9; // x8
  struct SkillInfo_array *v10; // x11
  int v11; // w9
  signed __int64 v12; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v14; // x14
  __int64 v15; // x22
  __int64 v16; // x23
  unsigned __int64 v17; // x24
  struct SkillInfo_array *v18; // x8
  struct UnityEngine_GameObject_array *v19; // x9
  int32_t *v20; // x25
  struct SkillIconComponent_array *v21; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  struct SkillIconComponent_array *v24; // x8
  struct UIIconLabel_array *v25; // x8
  struct SkillIconComponent_array *v26; // x8
  __int64 v27; // x9

  if ( !item
    || (p_appendSkillInfoList = &this->fields.appendSkillInfoList,
        v6 = this,
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                         item,
                                                         &this->fields.appendSkillInfoList,
                                                         item->fields.isNpc,
                                                         method),
        (appendSkillIconList = v6->fields.appendSkillIconList) == 0LL) )
  {
LABEL_48:
    sub_1BCB254(this, item);
  }
  v9 = *(_QWORD *)&appendSkillIconList->max_length;
  if ( v9 << 32 < 1 )
  {
    v11 = 0;
  }
  else
  {
    v10 = *p_appendSkillInfoList;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v10 )
      {
        max_length = v10->max_length;
        if ( v12 < (int)max_length )
        {
          if ( v12 >= max_length )
LABEL_49:
            sub_1BCB25C(this, item, v7);
          v14 = (*p_appendSkillInfoList)->m_Items[v12];
          if ( v14 && v14->fields.id >= 1 )
            v11 = v12 + 1;
        }
      }
      ++v12;
    }
    while ( v12 < (int)v9 );
  }
  if ( (int)v9 >= 1 )
  {
    v15 = v11;
    v16 = 4LL;
    do
    {
      v17 = v16 - 4;
      if ( v16 - 4 >= v15 )
      {
        appendSkillBaseList = v6->fields.appendSkillBaseList;
        if ( !appendSkillBaseList )
          goto LABEL_48;
        if ( v17 >= appendSkillBaseList->max_length )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v16);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        v18 = *p_appendSkillInfoList;
        if ( !*p_appendSkillInfoList )
          goto LABEL_48;
        if ( v17 >= v18->max_length )
          goto LABEL_49;
        v19 = v6->fields.appendSkillBaseList;
        if ( !v19 )
          goto LABEL_48;
        if ( v17 >= v19->max_length )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v19->obj.klass + v16);
        if ( !this )
          goto LABEL_48;
        v20 = (int32_t *)*((_QWORD *)&v18->obj.klass + v16);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !servantLeader )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(servantLeader, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v20 )
            v20[4] = 0;
          v21 = v6->fields.appendSkillIconList;
          if ( !v21 )
            goto LABEL_48;
          if ( v17 >= v21->max_length )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v21->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
          appendSkillLevelIconLabelList = v6->fields.appendSkillLevelIconLabelList;
          if ( !appendSkillLevelIconLabelList )
            goto LABEL_48;
          if ( v17 >= appendSkillLevelIconLabelList->max_length )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
        }
        else
        {
          v24 = v6->fields.appendSkillIconList;
          if ( !v24 )
            goto LABEL_48;
          if ( v17 >= v24->max_length )
            goto LABEL_49;
          if ( !v20 )
            goto LABEL_48;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__Set_40207096((SkillIconComponent_o *)this, v20[4], v20[5], v20[12], v20[13], 0LL);
          v25 = v6->fields.appendSkillLevelIconLabelList;
          if ( !v25 )
            goto LABEL_48;
          if ( v17 >= v25->max_length )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Set_40290232((UIIconLabel_o *)this, 48, v20[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
        }
      }
      v26 = v6->fields.appendSkillIconList;
      if ( !v26 )
        goto LABEL_48;
      v27 = v16 - 3;
      ++v16;
    }
    while ( v27 < (int)v26->max_length );
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetFriendPoint(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        bool isHideFriendPoint,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct FollowerInfo_o *followerInfo; // x9
  BalanceConfig_c *v17; // x0
  int32_t FollowerPointNpc; // w21
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  _BOOL4 IsRecommendFollower_k__BackingField; // w22
  BalanceConfig_c *v21; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_FollowerPointGrand; // x8
  _BOOL4 v24; // w21
  BalanceConfig_c *v25; // x0
  BalanceConfig_c *v26; // x0
  _BOOL4 v27; // w21
  BalanceConfig_c *v28; // x0
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v31; // w22
  int value; // w23
  FollowerSelectItemListViewItemDraw_o *v33; // x1
  int v34; // w8
  __int64 v35; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x21
  int v37; // w23
  System_String_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UILabel_o *campaignLabel; // x21
  const MethodInfo *v44; // x1
  FollowerSelectItemListViewItemDraw_o *v45; // x1
  bool activeSelf; // w8
  float v47; // s8
  bool v48; // w8
  float v49; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v51; // x0
  int v52; // [xsp+1Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4B17051 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&FollowerSelectItemListViewItemDraw_TypeInfo, v9);
    sub_1BCAFF8(&int_TypeInfo, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&StringLiteral_6416/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, v13);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    byte_4B17051 = 1;
  }
  if ( !item )
    goto LABEL_78;
  Option_k__BackingField = item->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_78;
  if ( Option_k__BackingField->fields.isNoneSupportFriendPoint || isHideFriendPoint )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.friendPointIconLabel, 0, 0LL);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.friendPointData2Label, 0, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.campaignLabel;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
        this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_78;
        this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
        if ( !this )
          goto LABEL_78;
        this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                         questRestrictionInfo->fields.questId,
                                                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( !this )
          goto LABEL_78;
        LOBYTE(questRestrictionInfo) = QuestEntity__HasFlag_41618860(
                                         (QuestEntity_o *)this,
                                         0x8000000LL,
                                         questRestrictionInfo->fields.questPhase,
                                         0LL);
LABEL_20:
        if ( item->fields._IsGrandSupport_k__BackingField )
        {
LABEL_32:
          v26 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v26 = BalanceConfig_TypeInfo;
          }
          p_FollowerPointGrand = &v26->static_fields->FollowerPointGrand;
        }
        else
        {
          IsRecommendFollower_k__BackingField = item->fields._IsRecommendFollower_k__BackingField;
          v21 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v21 = BalanceConfig_TypeInfo;
          }
          static_fields = v21->static_fields;
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
        v24 = item->fields._IsRecommendFollower_k__BackingField;
        v25 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v25 = BalanceConfig_TypeInfo;
        }
        static_fields = v25->static_fields;
        if ( v24 )
          goto LABEL_38;
        p_FollowerPointGrand = &static_fields->FollowerPointNotFriend;
        break;
      case 3:
      case 4:
        v17 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        FollowerPointNpc = v17->static_fields->FollowerPointNpc;
        goto LABEL_41;
      case 5:
        if ( item->fields._IsGrandSupport_k__BackingField )
          goto LABEL_32;
        v27 = item->fields._IsRecommendFollower_k__BackingField;
        v28 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v28 = BalanceConfig_TypeInfo;
        }
        static_fields = v28->static_fields;
        if ( v27 )
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
  v31 = FriendPointUpVal;
  if ( friendPointCampaignEntity )
    value = friendPointCampaignEntity->fields.value;
  else
    value = 0;
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointIconLabel;
  if ( !this )
    goto LABEL_78;
  UIIconLabel__Set_40290232((UIIconLabel_o *)this, 55, FollowerPointNpc, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  if ( v31 > 0 || value >= 1 )
  {
    if ( value <= 0 )
      v34 = 1000;
    else
      v34 = value;
    v35 = 274877907LL * (v34 * v31 + (v34 - 1000) * FollowerPointNpc);
    friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    v37 = (v35 >> 38) + ((unsigned __int64)v35 >> 63);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_6416/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0LL);
    v52 = v37;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v39, v40, v41);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v38, v42, 0LL);
    if ( !friendPointData2Label )
      goto LABEL_78;
    v33 = this;
    this = friendPointData2Label;
  }
  else
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    if ( !this )
      goto LABEL_78;
    v33 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v33, 0LL);
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
      UILabel__set_gradientTop(campaignLabel, (UnityEngine_Color_o)this->fields.skillButtonList->obj, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.campaignLabel;
      if ( this )
      {
        UILabel__set_gradientBottom(
          (UILabel_o *)this,
          FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR,
          0LL);
        campaignLabel = v6->fields.campaignLabel;
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignName(
                                                         item,
                                                         v44);
        if ( campaignLabel )
        {
          v45 = this;
          goto LABEL_65;
        }
      }
    }
LABEL_78:
    sub_1BCB254(this, item);
  }
  if ( !campaignLabel )
    goto LABEL_78;
  v45 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_65:
  UILabel__set_text(campaignLabel, (System_String_o *)v45, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  if ( !this )
    goto LABEL_78;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_78;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  v47 = activeSelf ? -3.0 : 39.0;
  if ( !this )
    goto LABEL_78;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_78;
  v48 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointIconLabel;
  v49 = v48 ? -22.0 : 20.0;
  if ( !this )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, v47, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
  if ( !this )
    goto LABEL_78;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v51, v49, 0LL);
}


void __fastcall FollowerSelectItemListViewItemDraw__SetGrandServantEquip(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *grandEquipHeaderSprite; // x21
  const MethodInfo *v11; // x5
  FollowerSelectItemListViewItemEquipDraw_o *grandSvtEquip2; // x21
  EquipTargetInfo_o *equipTarget2; // x22
  const MethodInfo *v14; // x5
  const MethodInfo *v15; // x5

  v6 = this;
  if ( (byte_4B1704E & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&StringLiteral_20156/*"img_blankbg_02"*/, v7);
    sub_1BCAFF8(&StringLiteral_20204/*"img_equipface_grand"*/, v8);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_20157/*"img_blankbg_03"*/, v9);
    byte_4B1704E = 1;
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
                                                     (System_String_o *)StringLiteral_20204/*"img_equipface_grand"*/,
                                                     0LL);
    if ( servantLeader )
    {
      ServantLeaderInfo__SetEquipImagePartsGroupIdxs(servantLeader, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.grandSvtEquip1;
      if ( this )
      {
        FollowerSelectItemListViewItemEquipDraw__SetEquip(
          (FollowerSelectItemListViewItemEquipDraw_o *)this,
          servantLeader->fields.equipTarget1,
          0LL,
          0,
          0,
          v11);
        grandSvtEquip2 = v6->fields.grandSvtEquip2;
        equipTarget2 = servantLeader->fields.equipTarget2;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
                                                         servantLeader,
                                                         0LL);
        if ( grandSvtEquip2 )
        {
          FollowerSelectItemListViewItemEquipDraw__SetEquip(
            grandSvtEquip2,
            equipTarget2,
            (System_String_o *)StringLiteral_20156/*"img_blankbg_02"*/,
            1,
            (int)this > 0,
            v14);
          this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.grandSvtEquip3;
          if ( this )
          {
            FollowerSelectItemListViewItemEquipDraw__SetEquip(
              (FollowerSelectItemListViewItemEquipDraw_o *)this,
              servantLeader->fields.equipTarget3,
              (System_String_o *)StringLiteral_20157/*"img_blankbg_03"*/,
              0,
              0,
              v15);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1BCB254(this, item);
  }
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
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  il2cpp_array_size_t v14; // w24
  Il2CppClass **v15; // x8
  UnityEngine_Behaviour_o *v16; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4B17053 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UITouchPress___, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B17053 = 1;
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
      v14 = 0;
      do
      {
        if ( v14 >= skillButtonList->max_length )
          sub_1BCB25C(supportInfoButton, v10, v11);
        v15 = &skillButtonList->obj.klass + (int)v14;
        v16 = (UnityEngine_Behaviour_o *)v15[4];
        if ( !v16 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v15[4],
                             (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
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
      sub_1BCB254(supportInfoButton, v10);
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
        int32_t targetDisplaySkill,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v7; // x20
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
  __int64 switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v37; // w9
  UnityEngine_Object_o *rangeSprite; // x23
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  FollowerInfo_o *followerInfo; // x21
  System_String_o *FollowerBgImage; // x21
  int32_t Kind_39618140; // w0
  UISprite_o *baseSprite; // x23
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v51; // x3
  ServantLeaderInfo_o *v52; // x21
  __int64 v53; // x23
  __int64 v54; // x24
  _BOOL4 v55; // w8
  const MethodInfo *v56; // x3
  UILabel_o *maskMessageLabel; // x22
  char v58; // w27
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v60; // x22
  __int64 v61; // x23
  __int64 methodPtr_low; // x9
  __int64 v63; // x23
  int32_t v64; // w0
  int32_t v65; // w23
  int32_t v66; // w22
  QuestPhaseEntity_o *v67; // x0
  QuestPhaseEntity_o *v68; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v70; // x23
  __int64 v71; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x21
  __int64 v73; // x8
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  Il2CppObject *v78; // x22
  struct FollowerInfo_o *v79; // x8
  int32_t type; // w8
  UILabel_o *warningMessageLabel; // x22
  float v82; // s0
  float v83; // s8
  UnityEngine_Transform_o *v84; // x22
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct FollowerInfo_o *v89; // x8
  int64_t v90; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UsedCount_o *UsedCount; // x20
  BalanceConfig_c *v93; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x20
  UILabel_o *numberOfUsabletimesLabel; // x20
  UILabel_o *numberOfUsabletimesSuffixLabel; // x20
  int v98; // w20
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  FollowerSelectItemListViewItemDraw_o *v102; // x0
  FollowerSelectItemListViewItem_o *v103; // x1
  const MethodInfo *v104; // x2
  unsigned __int128 v105; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+18h] [xbp-78h] BYREF
  int v107; // [xsp+2Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  v7 = item;
  if ( (byte_4B1704B & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, item);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v14);
    sub_1BCAFF8(&FollowerRootComponent_TypeInfo, v15);
    sub_1BCAFF8(&Grade_TypeInfo, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v17);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v18);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v19);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v23);
    sub_1BCAFF8(&TitleInfoControl_TypeInfo, v24);
    sub_1BCAFF8(&StringLiteral_6395/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, v25);
    sub_1BCAFF8(&StringLiteral_6396/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, v26);
    sub_1BCAFF8(&StringLiteral_6409/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v27);
    sub_1BCAFF8(&StringLiteral_6394/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, v28);
    sub_1BCAFF8(&StringLiteral_6408/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, v29);
    sub_1BCAFF8(&StringLiteral_6393/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, v30);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v31);
    sub_1BCAFF8(&StringLiteral_6397/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, v32);
    sub_1BCAFF8(&StringLiteral_20258/*"img_listbg_02"*/, v33);
    byte_4B1704B = 1;
  }
  entity = 0LL;
  v107 = 0;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v105 = 0uLL;
  switchSkillInfo = (__int64)this->fields.switchSkillInfo;
  if ( switchSkillInfo )
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)switchSkillInfo, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_169;
  size = switchSkillUIList->fields._size;
  v37 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v37;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchSkillInfo = (__int64)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_169;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  switchSkillInfo = (__int64)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_169;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  if ( (this->fields.warningMessageWidth & 0x80000000) != 0 )
  {
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_169;
    this->fields.warningMessageWidth = *(_DWORD *)(switchSkillInfo + 168);
    UIWidget__set_width((UIWidget_o *)switchSkillInfo, 1000, 0LL);
    if ( !v7 )
      return;
  }
  else if ( !v7 )
  {
    return;
  }
  rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
  {
    switchSkillInfo = (__int64)this->fields.rangeSprite;
    if ( !switchSkillInfo )
      goto LABEL_169;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0LL);
    if ( !switchSkillInfo )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, mode == 0, 0LL);
  }
  if ( !mode )
    return;
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
  {
    switchSkillInfo = (__int64)this->fields.dataLostMaskSprite;
    if ( !switchSkillInfo )
      goto LABEL_169;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0LL);
    if ( !switchSkillInfo )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0LL);
  }
  dataLostMaskMessageLabel = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
  {
    switchSkillInfo = (__int64)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_169;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    switchSkillInfo = (__int64)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_169;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0LL);
    if ( !switchSkillInfo )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0LL);
  }
  FollowerSelectItemListViewItemDraw__SetActiveForGrandSupport(this, v7->fields._IsGrandSupport_k__BackingField, v41);
  followerInfo = v7->fields.followerInfo;
  if ( followerInfo && (unsigned int)(followerInfo->fields.type - 3) < 2 )
  {
    FollowerBgImage = (System_String_o *)StringLiteral_20258/*"img_listbg_02"*/;
  }
  else
  {
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_39618140 = Grade__GetKind_39618140(followerInfo, 0LL);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_39618140, 0LL);
  }
  baseSprite = this->fields.baseSprite;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
  FollowerRootComponent__SetFollowerBase(baseSprite, FollowerBgImage, v42);
  FollowerSelectItemListViewItemDraw__SetupLockUI(this, v7, v47);
  FollowerSelectItemListViewItemDraw__SetPlayerInfo(this, v7, v48);
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v7, v49);
  v52 = ServantLeader;
  if ( ServantLeader )
  {
    v54 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v53 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v109.fields.currentCryptoKey = v54;
    *(_QWORD *)&v109.fields.fakeValue = v53;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v109, 0LL) > 0;
  }
  else
  {
    v55 = 0;
  }
  FollowerSelectItemListViewItemDraw__SetFriendPoint(this, v7, !v55, v51);
  FollowerSelectItemListViewItemDraw__SetServantInfo(this, v7, targetDisplaySkill, v56);
  if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
  {
    switchSkillInfo = (__int64)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_169;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0LL);
    if ( !switchSkillInfo )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
    maskMessageLabel = this->fields.maskMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6408/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0LL);
    if ( !maskMessageLabel )
      goto LABEL_169;
    UILabel__set_text(maskMessageLabel, (System_String_o *)switchSkillInfo, 0LL);
    switchSkillInfo = (__int64)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0LL);
    switchSkillInfo = (__int64)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_169;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0LL);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_169;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_59:
    v58 = 1;
    goto LABEL_60;
  }
  if ( v7->fields.isUniqueSvtRestriction || v7->fields.isUniqueIndividualityRestriction )
  {
    switchSkillInfo = (__int64)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_169;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0LL);
    if ( !switchSkillInfo )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0LL);
    switchSkillInfo = (__int64)this->fields.maskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_169;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    switchSkillInfo = (__int64)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0LL);
    switchSkillInfo = (__int64)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_169;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)switchSkillInfo, 0LL);
    warningMessageLabel = this->fields.warningMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6409/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
    if ( !warningMessageLabel )
      goto LABEL_169;
    UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillInfo, 0LL);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_169;
    LODWORD(v82) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillInfo, 0LL);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_169;
    v83 = v82;
    switchSkillInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0LL);
    v84 = (UnityEngine_Transform_o *)switchSkillInfo;
    warningMessageWidth = (float)this->fields.warningMessageWidth;
    if ( v83 <= warningMessageWidth )
    {
      if ( !byte_4B16196 )
      {
        switchSkillInfo = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, item);
        byte_4B16196 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->oneVector.fields.x;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
    }
    else
    {
      x = warningMessageWidth / v83;
      z = 1.0;
      y = 1.0;
    }
    if ( !v84 )
      goto LABEL_169;
    UnityEngine_Transform__set_localScale(v84, *(UnityEngine_Vector3_o *)&x, 0LL);
    goto LABEL_59;
  }
  switchSkillInfo = (__int64)this->fields.maskSprite;
  if ( !switchSkillInfo )
    goto LABEL_169;
  switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0LL);
  if ( !switchSkillInfo )
    goto LABEL_169;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0LL);
  switchSkillInfo = (__int64)this->fields.maskMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_169;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  switchSkillInfo = (__int64)this->fields.warningBase;
  if ( !switchSkillInfo )
    goto LABEL_169;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0LL);
  switchSkillInfo = (__int64)this->fields.warningIcon;
  if ( !switchSkillInfo )
    goto LABEL_169;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0LL);
  switchSkillInfo = (__int64)this->fields.warningMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_169;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v58 = 0;
LABEL_60:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( !v52 )
      goto LABEL_89;
    v61 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
    v60 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v110.fields.currentCryptoKey = v61;
    *(_QWORD *)&v110.fields.fakeValue = v60;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v110, 0LL) < 1
      || (v58 & 1) != 0
      || ServantLeaderInfo__IsHideSupport(v52, 0LL)
      || v7->fields._IsDataLost_k__BackingField )
    {
      goto LABEL_89;
    }
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_169;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillInfo, 35, 0LL) )
      goto LABEL_89;
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_169;
    switchSkillInfo = *(_QWORD *)(switchSkillInfo + 32);
    if ( !switchSkillInfo )
      goto LABEL_169;
    item = (FollowerSelectItemListViewItem_o *)FollowerRootComponent_TypeInfo;
    methodPtr_low = LOBYTE(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)switchSkillInfo + 304LL) < (unsigned int)methodPtr_low
      || *(FollowerRootComponent_c **)(*(_QWORD *)(*(_QWORD *)switchSkillInfo + 200LL) + 8 * methodPtr_low - 8) != FollowerRootComponent_TypeInfo )
    {
      v102 = (FollowerSelectItemListViewItemDraw_o *)sub_1BCB514(switchSkillInfo);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v102, v103, v104);
      return;
    }
    v63 = *(_QWORD *)(switchSkillInfo + 144);
    if ( !v63 )
      goto LABEL_89;
    v64 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(switchSkillInfo + 144), 0LL);
    if ( !v64 )
      goto LABEL_89;
    v65 = *(_DWORD *)(v63 + 24);
    if ( !v65 )
      goto LABEL_89;
    v66 = v64;
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_169;
    switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)switchSkillInfo,
                                 (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !switchSkillInfo )
      goto LABEL_169;
    v67 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillInfo, v66, v65, 0LL);
    if ( v67 )
    {
      v68 = v67;
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_169;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)switchSkillInfo,
                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      v71 = *(_QWORD *)&v52->fields.svtId.fields.currentCryptoKey;
      v70 = *(_QWORD *)&v52->fields.svtId.fields.fakeValue;
      v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v111.fields.currentCryptoKey = v71;
      *(_QWORD *)&v111.fields.fakeValue = v70;
      switchSkillInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v111, 0LL);
      if ( !v72 )
        goto LABEL_169;
      switchSkillInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   v72,
                                   switchSkillInfo,
                                   (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !switchSkillInfo )
        goto LABEL_169;
      v73 = switchSkillInfo;
      switchSkillInfo = (__int64)this->fields.classCompatibilityIcon;
      if ( !switchSkillInfo )
        goto LABEL_169;
      ServantClassCompatibilityIconComponent__SetIcon(
        (ServantClassCompatibilityIconComponent_o *)switchSkillInfo,
        *(_DWORD *)(v73 + 80),
        v68->fields.classIds,
        2,
        0LL);
    }
    else
    {
LABEL_89:
      switchSkillInfo = (__int64)this->fields.classCompatibilityIcon;
      if ( !switchSkillInfo )
        goto LABEL_169;
      ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)switchSkillInfo, 0LL);
    }
  }
  numberOfUsabletimes = (UnityEngine_Object_o *)this->fields.numberOfUsabletimes;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  switchSkillInfo = UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0LL, 0LL);
  if ( (switchSkillInfo & 1) != 0 )
  {
    Option_k__BackingField = v7->fields._Option_k__BackingField;
    if ( !Option_k__BackingField )
      goto LABEL_169;
    questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      eventId = questRestrictionInfo->fields.eventId;
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_169;
      switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)switchSkillInfo,
                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0LL;
      if ( !switchSkillInfo )
        goto LABEL_169;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)switchSkillInfo,
              &entity,
              questRestrictionInfo->fields.eventId,
              (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_104;
      v78 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( TitleInfoControl__IsEnableEventShopButton_39104492((EventDetailEntity_o *)v78, 0LL) )
      {
        switchSkillInfo = (__int64)entity;
        if ( !entity )
          goto LABEL_169;
        LODWORD(questRestrictionInfo) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0LL);
      }
      else
      {
LABEL_104:
        LODWORD(questRestrictionInfo) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_169;
    if ( *(_BYTE *)(switchSkillInfo + 148) )
      goto LABEL_108;
    v79 = v7->fields.followerInfo;
    if ( v79 )
    {
      type = v79->fields.type;
      if ( type != 3 )
      {
        item = 0LL;
        if ( type == 4 || (((unsigned int)questRestrictionInfo ^ 1) & 1) != 0 )
          goto LABEL_109;
        goto LABEL_132;
      }
    }
    else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
    {
LABEL_132:
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_169;
      switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)switchSkillInfo,
                                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      v89 = v7->fields.followerInfo;
      v90 = v89 ? v89->fields.userId : 0LL;
      if ( !switchSkillInfo )
        goto LABEL_169;
      UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                    (EventBoostItemUsedMaster_o *)switchSkillInfo,
                    eventId,
                    v90,
                    0LL);
      v93 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v93 = BalanceConfig_TypeInfo;
      }
      MaxFriendChocolateUse = v93->static_fields->MaxFriendChocolateUse;
      v107 = MaxFriendChocolateUse;
      if ( UsedCount )
      {
        if ( !v93->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v93);
          MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
        }
        v107 = MaxFriendChocolateUse - UsedCount->fields.count;
      }
      numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6395/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0LL);
      if ( !numberOfUsabletimesPrefixLabel )
        goto LABEL_169;
      UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillInfo, 0LL);
      numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
      switchSkillInfo = (__int64)System_Int32__ToString((int32_t)&v107, 0LL);
      if ( !numberOfUsabletimesLabel )
        goto LABEL_169;
      UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillInfo, 0LL);
      numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
      switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0LL);
      if ( !numberOfUsabletimesSuffixLabel )
        goto LABEL_169;
      UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillInfo, 0LL);
      v98 = v107;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v98 )
      {
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_6393/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString(v99, &color, 0LL);
        v100 = LocalizationManager__Get((System_String_o *)StringLiteral_6394/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString(v100, (UnityEngine_Color_o *)&v105, 0LL);
      }
      else
      {
        v101 = LocalizationManager__Get((System_String_o *)StringLiteral_6397/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString(v101, &color, 0LL);
        switchSkillInfo = (__int64)this->fields.friendChocolateSprite;
        if ( !switchSkillInfo )
          goto LABEL_169;
        UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0LL);
        v105 = (unsigned __int128)color;
      }
      switchSkillInfo = (__int64)this->fields.numberOfUsabletimesSprite;
      if ( !switchSkillInfo
        || (UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0LL),
            (switchSkillInfo = (__int64)this->fields.friendChocolateSprite) == 0) )
      {
LABEL_169:
        sub_1BCB254(switchSkillInfo, item);
      }
      UIWidget__set_color((UIWidget_o *)switchSkillInfo, (UnityEngine_Color_o)v105, 0LL);
      item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
LABEL_109:
      switchSkillInfo = (__int64)this->fields.numberOfUsabletimes;
      if ( switchSkillInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, (bool)item, 0LL);
        return;
      }
      goto LABEL_169;
    }
LABEL_108:
    item = 0LL;
    goto LABEL_109;
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetNPInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        bool isNpc,
        bool isHideSupport,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v10; // x21
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
  __int64 v25; // x8
  __int64 v26; // x9
  UIRangeLabel_o *v27; // x22
  UnityEngine_Object_o *v28; // x21
  int32_t dispLimitCount; // w26
  int32_t FriendNpNameDispLimitCount; // w25
  Il2CppObject *Master_object; // x0
  __int64 v32; // x27
  __int64 v33; // x28
  ServantLimitImageMaster_o *v34; // x26
  int32_t strengthStatus; // w25
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v37; // x23
  Il2CppObject *v38; // x1
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *name; // x27
  TreasureDvcInfo_o *v42; // x24
  __int64 v43; // x27
  __int64 v44; // x28
  Il2CppObject *v45; // x0
  __int64 v46; // x24
  __int64 v47; // x28
  ServantLimitAddMaster_o *v48; // x23
  System_String_o *OverwriteTDName; // x23
  const MethodInfo *v50; // x1
  System_String_o **v51; // x8
  System_String_o *v52; // x24
  System_String_o *v53; // x23
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  v10 = this;
  if ( (byte_4B1704D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, item);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v15);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BCAFF8(&OptionManager_TypeInfo, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BCAFF8(&StringLiteral_9281/*"NP_DISABLE_COLOR_NAME"*/, v19);
    sub_1BCAFF8(&StringLiteral_9282/*"NP_HIDE_NAME"*/, v20);
    sub_1BCAFF8(&StringLiteral_9283/*"NP_HIDE_NAME_LEVEL"*/, v21);
    sub_1BCAFF8(&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/, v22);
    sub_1BCAFF8(&StringLiteral_9280/*"NP_COLOR_NAME"*/, v23);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v24);
    byte_4B1704D = 1;
  }
  tdInfo = 0LL;
  if ( !item )
    goto LABEL_68;
  v25 = item->fields._IsGrandSupport_k__BackingField ? 600LL : 96LL;
  v26 = item->fields._IsGrandSupport_k__BackingField ? 592LL : 88LL;
  if ( !servantLeader )
    goto LABEL_68;
  v27 = *(UIRangeLabel_o **)((char *)&v10->klass + v26);
  v28 = *(UnityEngine_Object_o **)((char *)&v10->klass + v25);
  if ( isNpc )
  {
    dispLimitCount = servantLeader->fields.dispLimitCount;
  }
  else
  {
    FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(servantLeader, 0LL);
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( !OptionManager__GetSpoilerSetting(0LL) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_68;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
      if ( !this )
        goto LABEL_68;
      FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                     (ServantLimitSpoilerProtectionMaster_o *)this,
                                     servantLeader->fields.svtId,
                                     FriendNpNameDispLimitCount,
                                     0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v33 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v34 = (ServantLimitImageMaster_o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v55.fields.currentCryptoKey = v33;
    *(_QWORD *)&v55.fields.fakeValue = v32;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                     v55,
                                                     0LL);
    if ( !v34 )
LABEL_68:
      sub_1BCB254(this, item);
    dispLimitCount = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                       v34,
                       (int32_t)this,
                       FriendNpNameDispLimitCount,
                       0LL);
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetNpInfo(
                                                   item,
                                                   &tdInfo,
                                                   (const MethodInfo *)servantLeader);
  if ( !tdInfo )
    goto LABEL_68;
  if ( isHideSupport
    || (strengthStatus = tdInfo->fields.strengthStatus,
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsNotUsedTreasureDeice(servantLeader, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    strengthStatus = 0;
  }
  followerInfo = item->fields.followerInfo;
  if ( followerInfo && followerInfo->fields.type == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9281/*"NP_DISABLE_COLOR_NAME"*/, 0LL);
    v38 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_9282/*"NP_HIDE_NAME"*/, 0LL);
    v39 = v37;
LABEL_57:
    v40 = System_String__Format(v39, v38, 0LL);
    goto LABEL_58;
  }
  if ( !isHideSupport )
  {
    if ( !tdInfo )
      goto LABEL_68;
    name = tdInfo->fields.name;
    if ( isNpc && NpcServantFollowerEntity__IsHideTreasureDeviceLv(servantLeader->fields.npcFlag, 0LL) )
    {
      v42 = tdInfo;
      v44 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
      v43 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v56.fields.currentCryptoKey = v44;
      *(_QWORD *)&v56.fields.fakeValue = v43;
      this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                       v56,
                                                       0LL);
      if ( !v42 )
        goto LABEL_68;
      name = TreasureDvcInfo__GetName(v42, (int32_t)this, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v45 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v47 = *(_QWORD *)&servantLeader->fields.svtId.fields.currentCryptoKey;
    v46 = *(_QWORD *)&servantLeader->fields.svtId.fields.fakeValue;
    v48 = (ServantLimitAddMaster_o *)v45;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v57.fields.currentCryptoKey = v47;
    *(_QWORD *)&v57.fields.fakeValue = v46;
    this = (FollowerSelectItemListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                     v57,
                                                     0LL);
    if ( !tdInfo || !v48 )
      goto LABEL_68;
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        v48,
                        (int32_t)this,
                        dispLimitCount,
                        name,
                        tdInfo->fields.lv,
                        0LL);
    if ( FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, v50) <= 1 )
      v51 = (System_String_o **)&StringLiteral_9280/*"NP_COLOR_NAME"*/;
    else
      v51 = (System_String_o **)&StringLiteral_9286/*"NP_MAX_COLOR_NAME"*/;
    v52 = *v51;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v39 = LocalizationManager__Get(v52, 0LL);
    v38 = (Il2CppObject *)OverwriteTDName;
    goto LABEL_57;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9283/*"NP_HIDE_NAME_LEVEL"*/, 0LL);
LABEL_58:
  v53 = v40;
  this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0LL);
  if ( !v27 )
    goto LABEL_68;
  UIRangeLabel__Set(v27, v53, (System_String_o *)this, 0, 0, item->fields._IsGrandSupport_k__BackingField, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( isHideSupport )
    {
      if ( v28 )
      {
        ServantNpCommandCardComponent__SetHide((ServantNpCommandCardComponent_o *)v28, 0LL);
        return;
      }
      goto LABEL_68;
    }
    if ( !v28 )
      goto LABEL_68;
    ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)v28, tdInfo, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetPlayerInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v3; // x19
  FollowerSelectItemListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct FollowerInfo_o *followerInfo; // x8
  UILabel_o *grandPlayerNameLabel; // x22
  UIIconLabel_o *grandPlayerLevelIconLabel; // x24
  UnityEngine_Behaviour_o *grandSvtProfileBackSpr; // x23
  UserGradeComponent_o *grandGradeIcon; // x21
  UISprite_o *grandPlayerBaseLineSprite; // x25
  struct FollowerInfo_o *v23; // x8
  System_String_o **v24; // x8
  struct FollowerInfo_o *v25; // x8
  int32_t userLv; // w2
  UILabel_o *loginDataLabel; // x24
  System_String_o *v28; // x25
  int64_t v29; // x0
  Il2CppObject *v30; // x0
  float v31; // s0
  float klass_low; // s8
  float v33; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s10
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  FollowerInfo_o *v39; // x22
  int32_t Kind_39618140; // w0
  struct FollowerInfo_o *v41; // x8
  int32_t type; // w8
  __int64 *v43; // x8
  System_String_o *v44; // x21
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v47; // x21
  UnityEngine_Object_o *recommendedUser; // x21

  v3 = item;
  v4 = this;
  if ( (byte_4B1704F & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___, v5);
    sub_1BCAFF8(&Grade_TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_13277/*"TIME_BEFORE_TITLE_COLOR"*/, v9);
    sub_1BCAFF8(&StringLiteral_20063/*"icon_support_01"*/, v10);
    sub_1BCAFF8(&StringLiteral_20262/*"img_listbg_svtprof_grand"*/, v11);
    sub_1BCAFF8(&StringLiteral_6410/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, v12);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v13);
    sub_1BCAFF8(&StringLiteral_20261/*"img_listbg_line_grand"*/, v14);
    sub_1BCAFF8(&StringLiteral_20023/*"icon_friend"*/, v15);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_20022/*"icon_follow"*/, v16);
    byte_4B1704F = 1;
  }
  if ( !v3 )
    goto LABEL_84;
  followerInfo = v3->fields.followerInfo;
  if ( !followerInfo || !followerInfo->fields.type )
    return;
  if ( v3->fields._IsGrandSupport_k__BackingField )
  {
    grandPlayerNameLabel = v4->fields.grandPlayerNameLabel;
    grandPlayerLevelIconLabel = v4->fields.grandPlayerLevelIconLabel;
    grandSvtProfileBackSpr = (UnityEngine_Behaviour_o *)v4->fields.grandSvtProfileBackSpr;
    grandGradeIcon = v4->fields.grandGradeIcon;
    grandPlayerBaseLineSprite = v4->fields.grandPlayerBaseLineSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(grandPlayerBaseLineSprite, (System_String_o *)StringLiteral_20261/*"img_listbg_line_grand"*/, 0LL);
    AtlasManager__SetPartyOrganizationImage(
      v4->fields.grandSvtProfileBackSpr,
      (System_String_o *)StringLiteral_20262/*"img_listbg_svtprof_grand"*/,
      0LL);
  }
  else
  {
    grandPlayerNameLabel = v4->fields.playerNameLabel;
    grandPlayerLevelIconLabel = v4->fields.playerLevelIconLabel;
    grandSvtProfileBackSpr = (UnityEngine_Behaviour_o *)v4->fields.svtProfileBackSpr;
    grandGradeIcon = v4->fields.gradeIcon;
  }
  FollowerSelectItemListViewItemDraw__SetPlayerMessage(v4, v3, method);
  v23 = v3->fields.followerInfo;
  if ( v23 && (unsigned int)(v23->fields.type - 3) <= 1 )
  {
    if ( !grandPlayerNameLabel )
      goto LABEL_84;
    UILabel__set_text(grandPlayerNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !grandPlayerLevelIconLabel )
      goto LABEL_84;
    UIIconLabel__Clear(grandPlayerLevelIconLabel, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.loginDataLabel;
    if ( !this )
      goto LABEL_84;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.supportInfoButton;
    if ( !this )
      goto LABEL_84;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    item = 0LL;
    if ( !grandSvtProfileBackSpr )
      goto LABEL_84;
  }
  else
  {
    if ( (byte_4B17041 & 1) == 0 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_18900/*"error"*/, item);
      byte_4B17041 = 1;
      v23 = v3->fields.followerInfo;
    }
    if ( !grandPlayerNameLabel )
      goto LABEL_84;
    v24 = v23 ? &v23->fields.userName : (System_String_o **)&StringLiteral_18900/*"error"*/;
    UILabel__set_text(grandPlayerNameLabel, *v24, 0LL);
    v25 = v3->fields.followerInfo;
    if ( v25 )
    {
      userLv = v25->fields.userLv;
      if ( !grandPlayerLevelIconLabel )
        goto LABEL_84;
    }
    else
    {
      userLv = 1;
      if ( !grandPlayerLevelIconLabel )
        goto LABEL_84;
    }
    UIIconLabel__Set_40290232(grandPlayerLevelIconLabel, 2, userLv, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
    loginDataLabel = v4->fields.loginDataLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13277/*"TIME_BEFORE_TITLE_COLOR"*/, 0LL);
    v29 = v3->fields.followerInfo ? FollowerInfo__getUpdatedAt(v3->fields.followerInfo, 0LL) : 0LL;
    v30 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v29, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v28, v30, 0LL);
    if ( !loginDataLabel )
      goto LABEL_84;
    UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.supportInfoButton;
    if ( !this )
      goto LABEL_84;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      !v3->fields._IsRecommendFollower_k__BackingField,
      0LL);
    if ( !grandSvtProfileBackSpr )
      goto LABEL_84;
    LOBYTE(item) = 1;
  }
  UnityEngine_Behaviour__set_enabled(grandSvtProfileBackSpr, (bool)item, 0LL);
  LODWORD(v31) = *(_QWORD *)&UILabel__get_printedSize(grandPlayerNameLabel, 0LL);
  if ( !grandGradeIcon )
    goto LABEL_84;
  klass_low = v31;
  LODWORD(v33) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(grandGradeIcon, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)grandPlayerNameLabel,
                                                   0LL);
  if ( !this )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_84;
    CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0LL);
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0LL);
    if ( GameObjectExtensions__GetLocalScaleX(v37, 0LL) < 1.0 )
      klass_low = (float)SLODWORD(Component_object[3].klass);
  }
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0LL);
  GameObjectExtensions__SetLocalPositionX(v38, (float)(v33 * 0.5) + (float)(LocalPositionX + klass_low), 0LL);
  v39 = v3->fields.followerInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind_39618140 = Grade__GetKind_39618140(v39, 0LL);
  UserGradeComponent__Set(grandGradeIcon, Kind_39618140, 0LL);
  v41 = v3->fields.followerInfo;
  if ( !v41 )
    goto LABEL_55;
  type = v41->fields.type;
  if ( (unsigned int)(type - 3) < 2 )
  {
    v43 = &StringLiteral_20063/*"icon_support_01"*/;
    goto LABEL_58;
  }
  if ( type == 5 )
  {
    v43 = &StringLiteral_20022/*"icon_follow"*/;
    goto LABEL_58;
  }
  if ( type != 1 )
  {
LABEL_55:
    v44 = 0LL;
    goto LABEL_59;
  }
  v43 = &StringLiteral_20023/*"icon_friend"*/;
LABEL_58:
  v44 = (System_String_o *)*v43;
LABEL_59:
  this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
  if ( !this )
    goto LABEL_84;
  UISprite__set_spriteName((UISprite_o *)this, v44, 0LL);
  if ( !System_String__IsNullOrEmpty(v44, 0LL) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
    if ( !this )
      goto LABEL_84;
    ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
  }
  recommendedIcon = (UnityEngine_Object_o *)v4->fields.recommendedIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recommendedIcon, 0LL, 0LL) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedIcon;
    if ( !this )
      goto LABEL_84;
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isRecommended, 0LL);
  }
  recommendedIconText = (UnityEngine_Object_o *)v4->fields.recommendedIconText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(recommendedIconText, 0LL, 0LL) )
    goto LABEL_78;
  v47 = v4->fields.recommendedIconText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6410/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0LL);
  if ( !v47
    || (UILabel__set_text(v47, (System_String_o *)this, 0LL),
        (this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedIconText) == 0LL)
    || (this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL)) == 0LL )
  {
LABEL_84:
    sub_1BCB254(this, item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isRecommended, 0LL);
LABEL_78:
  recommendedUser = (UnityEngine_Object_o *)v4->fields.recommendedUser;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recommendedUser, 0LL, 0LL) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedUser;
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      v3->fields._isRecommendedUser_k__BackingField,
      0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetPlayerMessage(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o **p_grandPlayerProfileObj; // x12
  UnityEngine_GameObject_o **p_grandSvtProfileObj; // x11
  UnityEngine_Component_o **p_grandMessageLabel; // x10
  UnityEngine_Component_o **p_grandSvtNameRangeLabel; // x9
  UnityEngine_Component_o **p_grandGradeIcon; // x8
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Component_o *v15; // x22
  UnityEngine_Component_o *v16; // x24
  UnityEngine_Component_o *v17; // x19
  struct FollowerInfo_o *followerInfo; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v20; // x8
  struct System_Int32_array *adviceMessageIds; // x8
  struct FollowerInfo_o *v22; // x8
  struct UserRecommendSupportInfo_array *v23; // x8
  UserRecommendSupportInfo_o *v24; // x8
  System_String_array *ConvertMessageToId; // x0
  System_String_o *v26; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v28; // x0
  System_String_o *message; // x1
  UnityEngine_GameObject_o *v30; // x0
  int v31; // w8
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  bool v34; // w1
  UnityEngine_GameObject_o *v35; // x0
  struct FollowerInfo_o *v36; // x8
  UnityEngine_GameObject_o *v37; // x0

  v4 = this;
  if ( (byte_4B17050 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&OptionManager_TypeInfo, v6);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_113/*" "*/, v7);
    byte_4B17050 = 1;
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
  v13 = *p_grandPlayerProfileObj;
  v14 = *p_grandSvtProfileObj;
  v15 = *p_grandMessageLabel;
  v16 = *p_grandSvtNameRangeLabel;
  v17 = *p_grandGradeIcon;
  followerInfo = item->fields.followerInfo;
  if ( item->fields._IsRecommendFollower_k__BackingField )
  {
    if ( !followerInfo )
      goto LABEL_54;
    userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
    if ( !userRecommendSupportHash )
      goto LABEL_54;
    if ( userRecommendSupportHash->max_length )
    {
      v20 = userRecommendSupportHash->m_Items[0];
      if ( !v20 )
        goto LABEL_54;
      adviceMessageIds = v20->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_54;
      if ( !*(_QWORD *)&adviceMessageIds->max_length )
        goto LABEL_46;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v22 = item->fields.followerInfo;
      if ( !v22 )
        goto LABEL_54;
      v23 = v22->fields.userRecommendSupportHash;
      if ( !v23 )
        goto LABEL_54;
      if ( v23->max_length )
      {
        v24 = v23->m_Items[0];
        if ( !v24 || !this )
          goto LABEL_54;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v24->fields.adviceMessageIds,
                               0LL);
        v26 = System_String__Join((System_String_o *)StringLiteral_113/*" "*/, ConvertMessageToId, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v26, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v16 )
            goto LABEL_54;
          gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
          GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0LL);
          if ( !v15 )
            goto LABEL_54;
          v28 = (UILabel_o *)v15;
          message = v26;
          goto LABEL_25;
        }
LABEL_46:
        if ( v16 )
        {
          v37 = UnityEngine_Component__get_gameObject(v16, 0LL);
          GameObjectExtensions__SetLocalPositionY(v37, -19.0, 0LL);
          if ( v15 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              if ( v13 )
              {
                v34 = 1;
                v33 = v13;
LABEL_51:
                UnityEngine_GameObject__SetActive(v33, v34, 0LL);
                GameObjectExtensions__SetLocalPositionY(v13, -11.0, 0LL);
                GameObjectExtensions__SetLocalPositionY(v14, 10.0, 0LL);
                if ( v17 )
                {
                  v30 = UnityEngine_Component__get_gameObject(v17, 0LL);
                  v31 = 1113849856;
                  goto LABEL_53;
                }
              }
            }
          }
        }
LABEL_54:
        sub_1BCB254(this, item);
      }
    }
    sub_1BCB25C(this, item, method);
  }
  if ( followerInfo )
  {
    switch ( followerInfo->fields.type )
    {
      case 1:
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(followerInfo->fields.message, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_46;
        if ( !OptionManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)OptionManager__GetMessageDisp(0LL);
        if ( ((unsigned __int8)this & 1) == 0 || !item->fields.isMessageDisp )
          goto LABEL_46;
        if ( !v16 )
          goto LABEL_54;
        v35 = UnityEngine_Component__get_gameObject(v16, 0LL);
        GameObjectExtensions__SetLocalPositionY(v35, -19.0, 0LL);
        v36 = item->fields.followerInfo;
        if ( !v36 || !v15 )
          goto LABEL_54;
        message = v36->fields.message;
        v28 = (UILabel_o *)v15;
        break;
      case 2:
      case 5:
        goto LABEL_46;
      case 3:
      case 4:
        if ( !v16 )
          goto LABEL_54;
        v32 = UnityEngine_Component__get_gameObject(v16, 0LL);
        GameObjectExtensions__SetLocalPositionY(v32, -16.0, 0LL);
        if ( !v15 )
          goto LABEL_54;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
        if ( !this )
          goto LABEL_54;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !v13 )
          goto LABEL_54;
        v33 = v13;
        v34 = 0;
        goto LABEL_51;
      default:
        return;
    }
LABEL_25:
    UILabel__set_text(v28, message, 0LL);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      if ( v13 )
      {
        UnityEngine_GameObject__SetActive(v13, 1, 0LL);
        GameObjectExtensions__SetLocalPositionY(v13, -1.0, 0LL);
        GameObjectExtensions__SetLocalPositionY(v14, -1.0, 0LL);
        if ( v17 )
        {
          v30 = UnityEngine_Component__get_gameObject(v17, 0LL);
          v31 = 1112801280;
LABEL_53:
          GameObjectExtensions__SetLocalPositionY(v30, *(float *)&v31, 0LL);
          return;
        }
      }
    }
    goto LABEL_54;
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetServantInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        int32_t targetDisplaySkill,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v5; // x20
  FollowerSelectItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
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
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v25; // x1
  ServantLeaderInfo_o *v26; // x22
  __int64 v27; // x23
  __int64 v28; // x24
  bool IsNpc; // w24
  struct FollowerInfo_o *followerInfo; // x8
  __int64 v31; // x9
  __int64 v32; // x10
  ServantFaceIconComponent_o *v33; // x26
  UIRangeLabel_o *v34; // x25
  char v35; // w23
  const MethodInfo *v36; // x3
  bool v37; // w1
  UIRangeLabel_o *svtNameRangeLabel; // x20
  UIRangeLabel_o *svtNpRangeLabel; // x20
  ServantNpCommandCardComponent_o *svtNpCommandCard; // x0
  struct SkillIconComponent_array *skillIconList; // x8
  FollowerSelectItemListViewItemDraw_o *v42; // x2
  struct SkillIconComponent_array *v43; // x8
  __int64 v44; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  struct SkillIconComponent_array *v47; // x8
  __int64 v48; // x20
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  ServantCommandCardListComponent_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x5
  UnityEngine_Object_o *eventUpValIcon; // x24
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x1
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v60; // w25
  const MethodInfo *v61; // x1
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x26
  FollowerSelectItemListViewItemDraw___c_c *v63; // x8
  System_Func_object__int__o *_9__95_0; // x27
  Il2CppObject *v65; // x28
  struct FollowerSelectItemListViewItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x3
  UnityEngine_Object_o *svtCommandCardList; // x21
  ServantCommandCardListComponent_o *v71; // x21
  int32_t SvtId; // w0
  System_Int32_array *commandCardParam; // x23
  int32_t v74; // w24
  UnityEngine_Object_o *pushSprite; // x21
  struct FollowerInfo_o *v76; // x8
  int64_t pushUserSvtId; // x8
  bool v78; // w21
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  const MethodInfo *v80; // x2
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  UISprite_o *v82; // x21
  UISprite_o *v83; // x21
  UILabel_o *v84; // x21
  System_String_o *v85; // x22
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x0
  int32_t servantRarity; // [xsp+8h] [xbp-68h]
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = item;
  v6 = this;
  if ( (byte_4B1704C & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1BCAFF8(&System_Func_EquipTargetInfo__int__TypeInfo, v9);
    sub_1BCAFF8(&int___TypeInfo, v10);
    sub_1BCAFF8(&int_TypeInfo, v11);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v12);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v13);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BCAFF8(&SkillInfo___TypeInfo, v15);
    sub_1BCAFF8(&Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__95_0__, v16);
    sub_1BCAFF8(&FollowerSelectItemListViewItemDraw___c_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_3668/*"COMMON_NO_ENTRY"*/, v18);
    sub_1BCAFF8(&StringLiteral_11546/*"SERVANT_HIDE_NAME"*/, v19);
    sub_1BCAFF8(&StringLiteral_11442/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v20);
    sub_1BCAFF8(&StringLiteral_20210/*"img_frames_mask01"*/, v21);
    sub_1BCAFF8(&StringLiteral_18326/*"datalost_svt_select"*/, v22);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_9253/*"NO_ENTRY_NAME"*/, v23);
    byte_4B1704C = 1;
  }
  if ( !v5 )
    goto LABEL_132;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
  if ( ServantLeader )
  {
    v26 = ServantLeader;
    v28 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v92.fields.currentCryptoKey = v28;
    *(_QWORD *)&v92.fields.fakeValue = v27;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v92, 0LL) >= 1 )
    {
      IsNpc = ServantLeaderInfo__IsNpc(v26, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v26, 0LL);
      followerInfo = v5->fields.followerInfo;
      if ( v5->fields._IsGrandSupport_k__BackingField )
        v31 = 584LL;
      else
        v31 = 80LL;
      if ( v5->fields._IsGrandSupport_k__BackingField )
        v32 = 520LL;
      else
        v32 = 56LL;
      if ( !followerInfo )
        goto LABEL_132;
      v33 = *(ServantFaceIconComponent_o **)((char *)&v6->klass + v32);
      if ( !v33 )
        goto LABEL_132;
      v34 = *(UIRangeLabel_o **)((char *)&v6->klass + v31);
      v35 = (char)this;
      ServantFaceIconComponent__Set_40194108(
        *(ServantFaceIconComponent_o **)((char *)&v6->klass + v32),
        v26,
        v5->fields.iconLabelInfo1,
        v5->fields.iconLabelInfo2,
        0,
        followerInfo->fields.imageSvtId,
        0LL);
      if ( v5->fields._IsGrandSupport_k__BackingField )
        FollowerSelectItemListViewItemDraw__SetGrandServantEquip(v6, v5, v26, v36);
      v37 = !IsNpc || !NpcServantFollowerEntity__IsHideRarity(v26->fields.npcFlag, 0LL);
      ServantFaceIconComponent__SetDispRaritySprite(v33, v37, 0LL);
      ServantFaceIconComponent__SetDispClassSprite(v33, !v5->fields._IsDataLost_k__BackingField, 0LL);
      if ( (v35 & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11546/*"SERVANT_HIDE_NAME"*/,
                                                         0LL);
      }
      else
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v5, v52);
      }
      item = (FollowerSelectItemListViewItem_o *)this;
      if ( !v34 )
        goto LABEL_132;
      UIRangeLabel__Set(v34, (System_String_o *)this, 0LL, 1, 0, 0, 0LL);
      FollowerSelectItemListViewItemDraw__SetNPInfo(v6, v5, v26, IsNpc, v35 & 1, v53);
      eventUpValIcon = (UnityEngine_Object_o *)v6->fields.eventUpValIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL) )
      {
        if ( FollowerSelectItemListViewItem__get_ServantLeader(v5, v55) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, v57);
          if ( !this )
            goto LABEL_132;
          baseButton = this->fields.baseButton;
          servantFaceIcon = this->fields.servantFaceIcon;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v93.fields.currentCryptoKey = baseButton;
          *(_QWORD *)&v93.fields.fakeValue = servantFaceIcon;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v93, 0LL);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, v61);
          if ( !this )
            goto LABEL_132;
          servantRarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0LL);
        }
        else
        {
          servantRarity = -1;
          v60 = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, v57);
        if ( !this )
          goto LABEL_132;
        EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList((ServantLeaderInfo_o *)this, 0LL);
        v63 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw___c_TypeInfo);
          v63 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        }
        _9__95_0 = (System_Func_object__int__o *)v63->static_fields->__9__95_0;
        if ( !_9__95_0 )
        {
          if ( !v63->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v63);
            v63 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
          }
          v65 = (Il2CppObject *)v63->static_fields->__9;
          _9__95_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_EquipTargetInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__95_0,
            v65,
            Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__95_0__,
            0LL);
          static_fields = FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields;
          static_fields->__9__95_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__95_0;
          sub_1BCAF9C(&static_fields->__9__95_0);
        }
        v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList,
                                                                     (System_Func_TSource__TResult__o *)_9__95_0,
                                                                     (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
        this = (FollowerSelectItemListViewItemDraw_o *)System_Linq_Enumerable__ToArray_int_(
                                                         v67,
                                                         (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !this )
          goto LABEL_132;
        v42 = this;
        if ( !this->fields.m_CancellationTokenSource )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCB0A0(int___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_132;
          v42 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_133:
            sub_1BCB25C(this, item, v42);
          LODWORD(this->fields.rangeSprite) = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
        if ( !this )
LABEL_132:
          sub_1BCB254(this, item);
        EventUpValIconComponent__Set_40070448(
          (EventUpValIconComponent_o *)this,
          v5->fields.eventUpValItemList,
          (System_Int32_array *)v42,
          v60,
          servantRarity,
          0LL);
      }
      FollowerSelectItemListViewItemDraw__SetSkillIconInfo(v6, v5, v26, v56);
      FollowerSelectItemListViewItemDraw__SetAppendSkillIconInfo(v6, v5, v26, v68);
      FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(v6, targetDisplaySkill, v5, v69);
      svtCommandCardList = (UnityEngine_Object_o *)v6->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v71 = v6->fields.svtCommandCardList;
        if ( (v35 & 1) != 0 )
        {
          if ( !v71 )
            goto LABEL_132;
          ServantCommandCardListComponent__SetHide(v6->fields.svtCommandCardList, 0LL);
        }
        else
        {
          SvtId = FollowerSelectItemListViewItem__get_SvtId(v5, (const MethodInfo *)item);
          commandCardParam = v26->fields.commandCardParam;
          v74 = SvtId;
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v26, 0LL);
          if ( !v71 )
            goto LABEL_132;
          ServantCommandCardListComponent__Set_40179328(
            v71,
            v74,
            commandCardParam,
            (System_Int32_array *)this,
            2,
            1,
            0LL);
        }
      }
      pushSprite = (UnityEngine_Object_o *)v6->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v76 = v5->fields.followerInfo;
        if ( !v76 )
          goto LABEL_132;
        pushUserSvtId = v76->fields.pushUserSvtId;
        v78 = pushUserSvtId && pushUserSvtId == v26->fields.userSvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.pushSprite;
        if ( !this )
          goto LABEL_132;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v78, 0LL);
      }
      dataLostMaskSprite = (UnityEngine_Object_o *)v6->fields.dataLostMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0LL, 0LL) )
        goto LABEL_130;
      dataLostMaskMessageLabel = (UnityEngine_Object_o *)v6->fields.dataLostMaskMessageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0LL, 0LL) )
        goto LABEL_130;
      if ( v5->fields._IsDataLost_k__BackingField )
      {
        v82 = v6->fields.dataLostMaskSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(v82, (System_String_o *)StringLiteral_18326/*"datalost_svt_select"*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_132;
        v94.fields.r = 1.0;
        v94.fields.g = 1.0;
        v94.fields.b = 1.0;
        v94.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v94, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_132;
        goto LABEL_128;
      }
      if ( v5->fields._TimesToRestart_k__BackingField < 1 )
      {
LABEL_130:
        FollowerSelectItemListViewItemDraw__SetUpOpenClassScoreNumButton(v6, v5, v80);
        return;
      }
      v83 = v6->fields.dataLostMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v83, 0LL);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20210/*"img_frames_mask01"*/, 0LL);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( this )
        {
          v95.fields.a = 0.62353;
          v95.fields.r = 0.0;
          v95.fields.g = 0.0;
          v95.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v95, 0LL);
          v84 = v6->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11442/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
          v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField, v86, v87, v88);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v85, v89, 0LL);
          if ( v84 )
          {
            UILabel__set_text(v84, (System_String_o *)this, 0LL);
            this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
            if ( this )
            {
              this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskMessageLabel;
                if ( this )
                {
LABEL_128:
                  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
                  if ( !this )
                    goto LABEL_132;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
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
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v25);
  if ( !v6->fields.servantFaceIcon )
    goto LABEL_132;
  ServantFaceIconComponent__SetEquipDangling(v6->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0LL);
  svtNameRangeLabel = v6->fields.svtNameRangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3668/*"COMMON_NO_ENTRY"*/, 0LL);
  if ( !svtNameRangeLabel )
    goto LABEL_132;
  UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0, 0LL);
  svtNpRangeLabel = v6->fields.svtNpRangeLabel;
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9253/*"NO_ENTRY_NAME"*/, 0LL);
  if ( !svtNpRangeLabel )
    goto LABEL_132;
  UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)this, 0LL, 1, 0, 0, 0LL);
  svtNpCommandCard = v6->fields.svtNpCommandCard;
  if ( svtNpCommandCard )
    ServantNpCommandCardComponent__Clear(svtNpCommandCard, 0LL);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
  if ( this )
    EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0LL);
  skillIconList = v6->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_132;
  v6->fields.skillInfoList = (struct SkillInfo_array *)sub_1BCB0A0(SkillInfo___TypeInfo, skillIconList->max_length);
  this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAF9C(&v6->fields.skillInfoList);
  v43 = v6->fields.skillIconList;
  if ( !v43 )
    goto LABEL_132;
  v44 = 0LL;
  while ( (int)v44 < (signed int)v43->max_length )
  {
    skillBaseList = v6->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_132;
    if ( (unsigned int)v44 >= skillBaseList->max_length )
      goto LABEL_133;
    this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v44];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v43 = v6->fields.skillIconList;
      ++v44;
      if ( v43 )
        continue;
    }
    goto LABEL_132;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_132;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  appendSkillIconList = v6->fields.appendSkillIconList;
  if ( !appendSkillIconList )
    goto LABEL_132;
  v6->fields.appendSkillInfoList = (struct SkillInfo_array *)sub_1BCB0A0(
                                                               SkillInfo___TypeInfo,
                                                               appendSkillIconList->max_length);
  this = (FollowerSelectItemListViewItemDraw_o *)sub_1BCAF9C(&v6->fields.appendSkillInfoList);
  v47 = v6->fields.appendSkillIconList;
  if ( !v47 )
    goto LABEL_132;
  v48 = 0LL;
  while ( (int)v48 < (signed int)v47->max_length )
  {
    appendSkillBaseList = v6->fields.appendSkillBaseList;
    if ( !appendSkillBaseList )
      goto LABEL_132;
    if ( (unsigned int)v48 >= appendSkillBaseList->max_length )
      goto LABEL_133;
    this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v48];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v47 = v6->fields.appendSkillIconList;
      ++v48;
      if ( v47 )
        continue;
    }
    goto LABEL_132;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_132;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_132;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v50 = v6->fields.svtCommandCardList;
  if ( v50 )
    ServantCommandCardListComponent__Clear(v50, 0LL);
  v51 = (UnityEngine_Component_o *)v6->fields.pushSprite;
  if ( v51 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v51, 0LL);
    if ( !this )
      goto LABEL_132;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetSkillIconInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  struct SkillInfo_array **p_skillInfoList; // x21
  FollowerSelectItemListViewItemDraw_o *v5; // x20
  __int64 v7; // x2
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v9; // x8
  struct SkillInfo_array *v10; // x11
  int v11; // w9
  unsigned __int64 v12; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v14; // x14
  __int64 v15; // x22
  __int64 v16; // x23
  unsigned __int64 v17; // x24
  struct SkillInfo_array *v18; // x8
  struct UnityEngine_GameObject_array *v19; // x9
  int32_t *v20; // x25
  struct SkillIconComponent_array *v21; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *v24; // x8
  struct UIIconLabel_array *v25; // x8
  struct SkillIconComponent_array *v26; // x8
  __int64 v27; // x9

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
  v9 = *(_QWORD *)&skillIconList->max_length;
  if ( v9 << 32 >= 1 )
  {
    v10 = *p_skillInfoList;
    v11 = 0;
    v12 = 0LL;
    while ( v10 )
    {
      max_length = v10->max_length;
      if ( (__int64)v12 < (int)max_length )
      {
        if ( v12 >= max_length )
LABEL_49:
          sub_1BCB25C(this, item, v7);
        v14 = (*p_skillInfoList)->m_Items[v12];
        if ( v14 && v14->fields.id >= 1 )
          v11 = v12 + 1;
      }
      if ( (__int64)++v12 >= (int)v9 )
        goto LABEL_14;
    }
LABEL_48:
    sub_1BCB254(this, item);
  }
  v11 = 0;
LABEL_14:
  if ( (int)v9 >= 1 )
  {
    v15 = v11;
    v16 = 4LL;
    do
    {
      v17 = v16 - 4;
      if ( v16 - 4 >= v15 )
      {
        skillBaseList = v5->fields.skillBaseList;
        if ( !skillBaseList )
          goto LABEL_48;
        if ( v17 >= skillBaseList->max_length )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillBaseList->obj.klass + v16);
        if ( !this )
          goto LABEL_48;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
      else
      {
        v18 = *p_skillInfoList;
        if ( !*p_skillInfoList )
          goto LABEL_48;
        if ( v17 >= v18->max_length )
          goto LABEL_49;
        v19 = v5->fields.skillBaseList;
        if ( !v19 )
          goto LABEL_48;
        if ( v17 >= v19->max_length )
          goto LABEL_49;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v19->obj.klass + v16);
        if ( !this )
          goto LABEL_48;
        v20 = (int32_t *)*((_QWORD *)&v18->obj.klass + v16);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !servantLeader )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(servantLeader, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v20 )
            v20[4] = 0;
          v21 = v5->fields.skillIconList;
          if ( !v21 )
            goto LABEL_48;
          if ( v17 >= v21->max_length )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v21->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0LL);
          skillLevelIconLabelList = v5->fields.skillLevelIconLabelList;
          if ( !skillLevelIconLabelList )
            goto LABEL_48;
          if ( v17 >= skillLevelIconLabelList->max_length )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Clear((UIIconLabel_o *)this, 0LL);
        }
        else
        {
          v24 = v5->fields.skillIconList;
          if ( !v24 )
            goto LABEL_48;
          if ( v17 >= v24->max_length )
            goto LABEL_49;
          if ( !v20 )
            goto LABEL_48;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__Set_40207096((SkillIconComponent_o *)this, v20[4], v20[5], v20[12], v20[13], 0LL);
          v25 = v5->fields.skillLevelIconLabelList;
          if ( !v25 )
            goto LABEL_48;
          if ( v17 >= v25->max_length )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v16);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Set_40290232((UIIconLabel_o *)this, 48, v20[5], 0, 0, 0LL, 0, 0, 0, 0, 0LL);
        }
      }
      v26 = v5->fields.skillIconList;
      if ( !v26 )
        goto LABEL_48;
      v27 = v16 - 3;
      ++v16;
    }
    while ( v27 < (int)v26->max_length );
  }
}


void __fastcall FollowerSelectItemListViewItemDraw__SetUpOpenClassScoreNumButton(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *classBoardOpenButton; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v19; // x1
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w21
  UnityEngine_Object_o *v21; // x21
  int32_t openClassBoardNum; // w23
  UILabel_o *classBoardOpenButtonLabel; // x21
  UnityEngine_GameObject_o *v24; // x21
  FollowerSelectItemListViewItemDraw_c *v25; // x8
  __int64 v26; // x9
  UISprite_o *classBoardBackSprite; // x21
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject **v32; // x9
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int32_t openGrandClassBoardNum; // w8
  Il2CppObject **v40; // x9
  Il2CppObject *v41; // x20
  Il2CppObject *v42; // x0
  struct UILabel_o *v43; // x19
  System_String_o *v44; // x0
  int32_t v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B17055 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, item);
    sub_1BCAFF8(&FollowerSelectItemListViewItemDraw_TypeInfo, v5);
    sub_1BCAFF8(&int_TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_6352/*"FFFFFF"*/, v9);
    sub_1BCAFF8(&StringLiteral_17313/*"btn_bg_29_2"*/, v10);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v11);
    sub_1BCAFF8(&StringLiteral_12378/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, v12);
    sub_1BCAFF8(&StringLiteral_12379/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, v13);
    sub_1BCAFF8(&StringLiteral_6351/*"FFFF00"*/, v14);
    sub_1BCAFF8(&StringLiteral_15883/*"[{0}]+{1}[-]"*/, v15);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v16);
    byte_4B17055 = 1;
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    goto LABEL_33;
  if ( !item )
    goto LABEL_52;
  gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
  if ( !gameObject )
    goto LABEL_52;
  IsReleasedClassBoard_k__BackingField = item->fields._IsReleasedClassBoard_k__BackingField;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  if ( !IsReleasedClassBoard_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
  if ( !gameObject )
    goto LABEL_52;
  UICommonButton__SetButtonEnable((UICommonButton_o *)gameObject, item->fields.openClassBoardNum >= 0, 1, 0LL);
  v21 = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
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
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12378/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, 0LL);
        if ( !classBoardOpenButtonLabel )
          goto LABEL_52;
        UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
        if ( !gameObject )
          goto LABEL_52;
        v24 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
        v25 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
          v25 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        v26 = 32LL;
LABEL_28:
        GameObjectExtensions__SetLocalPositionY(
          v24,
          *(float *)((char *)&v25->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v26),
          0LL);
        goto LABEL_29;
      }
    }
    gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12379/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, 0LL);
    if ( !classBoardOpenButtonLabel )
      goto LABEL_52;
    UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
    if ( !gameObject )
      goto LABEL_52;
    v24 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
    v25 = FollowerSelectItemListViewItemDraw_TypeInfo;
    if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
      v25 = FollowerSelectItemListViewItemDraw_TypeInfo;
    }
    v26 = 36LL;
    goto LABEL_28;
  }
LABEL_29:
  classBoardBackSprite = this->fields.classBoardBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17313/*"btn_bg_29_2"*/, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.classBoardBackSprite;
  if ( !gameObject )
    goto LABEL_52;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
    gameObject,
    gameObject->klass[2]._1.interopData);
LABEL_33:
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( item )
    {
      if ( (item->fields.openClassBoardNum & 0x80000000) != 0 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
      else
      {
        if ( item->fields.isMaxOpenClassBoard )
          v32 = (Il2CppObject **)&StringLiteral_6351/*"FFFF00"*/;
        else
          v32 = (Il2CppObject **)&StringLiteral_6352/*"FFFFFF"*/;
        v33 = *v32;
        v46 = item->fields.openClassBoardNum;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v29, v30, v31);
        gameObject = (UnityEngine_Component_o *)System_String__Format_62491716(
                                                  (System_String_o *)StringLiteral_15883/*"[{0}]+{1}[-]"*/,
                                                  v33,
                                                  v34,
                                                  0LL);
        if ( this->fields.openClassBoardNumLabel )
        {
          UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
          if ( gameObject )
          {
            v35 = UnityEngine_Component__get_gameObject(gameObject, 0LL);
            GameObjectExtensions__SetLocalScale_35358856(v35, 1.0, 0LL);
            openGrandClassBoardNum = item->fields.openGrandClassBoardNum;
            if ( (openGrandClassBoardNum & 0x80000000) != 0 )
              return;
            v40 = (Il2CppObject **)(item->fields.isMaxOpenGrandClassBoard ? &StringLiteral_6351/*"FFFF00"*/ : &StringLiteral_6352/*"FFFFFF"*/);
            v41 = *v40;
            v45 = openGrandClassBoardNum;
            v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v36, v37, v38);
            gameObject = (UnityEngine_Component_o *)System_String__Format_62491716(
                                                      (System_String_o *)StringLiteral_15883/*"[{0}]+{1}[-]"*/,
                                                      v41,
                                                      v42,
                                                      0LL);
            v43 = this->fields.openClassBoardNumLabel;
            if ( v43 )
            {
              v44 = System_String__Concat_62488672(
                      v43->fields.mText,
                      (System_String_o *)StringLiteral_1039/*"/"*/,
                      (System_String_o *)gameObject,
                      0LL);
              UILabel__set_text(v43, v44, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_52:
    sub_1BCB254(gameObject, v19);
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
  if ( (byte_4B17052 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, item);
    byte_4B17052 = 1;
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
      sub_1BCB254(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v3, 0LL);
  }
}


void __fastcall FollowerSelectItemListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B17058 & 1) == 0 )
  {
    sub_1BCAFF8(&FollowerSelectItemListViewItemDraw___c_TypeInfo, v1);
    byte_4B17058 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(FollowerSelectItemListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItemDraw___c_o *)v2;
  sub_1BCAF9C(FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields);
}


void __fastcall FollowerSelectItemListViewItemDraw___c___ctor(
        FollowerSelectItemListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FollowerSelectItemListViewItemDraw___c___SetServantInfo_b__95_0(
        FollowerSelectItemListViewItemDraw___c_o *this,
        EquipTargetInfo_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B17059 & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw___c_o *)sub_1BCAFF8(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         x);
    byte_4B17059 = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v7, 0LL);
}