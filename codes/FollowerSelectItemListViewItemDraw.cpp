void FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_c *v1; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4E71F6D & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewItemDraw_TypeInfo);
    byte_4E71F6D = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_D34F80;
  v1 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_D352D0;
  static_fields = v1->static_fields;
  *(_QWORD *)&static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 0x4130000041400000LL;
  static_fields->CLASS_BOARD_LABEL_POS = (struct UnityEngine_Vector2_o)0x41300000BF800000LL;
  *(_OWORD *)&v1->static_fields->GrandMaskWidth01 = xmmword_D35380;
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

  if ( (byte_4E71F6C & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&UnityEngine_GameObject___TypeInfo);
    sub_1D0F0B4(&SkillIconComponent___TypeInfo);
    sub_1D0F0B4(&UIIconLabel___TypeInfo);
    byte_4E71F6C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UnityEngine_GameObject_array *)sub_1D0F15C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v3->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v4;
  sub_1D0F058(&this->fields.skillBaseList, v4);
  v5 = (struct SkillIconComponent_array *)sub_1D0F15C(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v5;
  sub_1D0F058(&this->fields.skillIconList, v5);
  v6 = (struct UIIconLabel_array *)sub_1D0F15C(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v6;
  sub_1D0F058(&this->fields.skillLevelIconLabelList, v6);
  v7 = (struct UnityEngine_GameObject_array *)sub_1D0F15C(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v7;
  sub_1D0F058(&this->fields.appendSkillBaseList, v7);
  v8 = (struct SkillIconComponent_array *)sub_1D0F15C(
                                            SkillIconComponent___TypeInfo,
                                            (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v8;
  sub_1D0F058(&this->fields.appendSkillIconList, v8);
  v9 = (struct UIIconLabel_array *)sub_1D0F15C(
                                     UIIconLabel___TypeInfo,
                                     (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v9;
  sub_1D0F058(&this->fields.appendSkillLevelIconLabelList, v9);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FollowerSelectItemListViewItemDraw__Awake(FollowerSelectItemListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  UISprite_o *skillIconSprite; // x20
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v7; // x1
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v10; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E71F60 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_20612/*"icon_skill_mini"*/);
    sub_1D0F0B4(&StringLiteral_20798/*"img_friend_skill"*/);
    sub_1D0F0B4(&StringLiteral_20505/*"icon_append_mini"*/);
    sub_1D0F0B4(&StringLiteral_20797/*"img_friend_appendskill"*/);
    byte_4E71F60 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1D0F058(&this->fields.switchSkillUIList, v3);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_20612/*"icon_skill_mini"*/, 0);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_20798/*"img_friend_skill"*/, 0);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_20505/*"icon_append_mini"*/, 0);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_20797/*"img_friend_appendskill"*/, 0);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v8 = this->fields.maskSprite;
    if ( !v8 )
      goto LABEL_14;
    mAtlas = v8->fields.mAtlas;
    this->fields.defaultMaskAtlas = mAtlas;
    transform = (UnityEngine_Component_o *)sub_1D0F058(&this->fields.defaultMaskAtlas, mAtlas);
    v10 = this->fields.maskSprite;
    if ( !v10
      || (mSpriteName = v10->fields.mSpriteName,
          this->fields.defaultMaskName = mSpriteName,
          sub_1D0F058(&this->fields.defaultMaskName, mSpriteName),
          (transform = (UnityEngine_Component_o *)this->fields.maskSprite) == 0)
      || (*(_QWORD *)&this->fields.defaultMaskWidth = transform[7].klass,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0) )
    {
LABEL_14:
      sub_1D0F30C(transform, v7);
    }
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultMaskPosition.fields.x = localPosition.fields.x;
    this->fields.defaultMaskPosition.fields.y = localPosition.fields.y;
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(
        FollowerSelectItemListViewItemDraw_o *this,
        int32_t targetDisplaySkill,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v5; // w21
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v10; // w9
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v12; // x20
  __int64 v13; // x21
  _BOOL4 v14; // w8
  int32_t displaySkill; // w9
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  intptr_t v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  intptr_t v23; // x8
  SwitchUIWidgetComponent_o *v24; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v5 = targetDisplaySkill;
  if ( (byte_4E71F6A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E71F6A = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  this->fields.displaySkill = v5;
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
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0);
  if ( ServantLeader )
  {
    v13 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v13;
    *(_QWORD *)&v25.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v25, 0) > 0;
  }
  else
  {
    v14 = 0;
  }
  displaySkill = this->fields.displaySkill;
  if ( displaySkill == 2 )
  {
    if ( v14 )
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
      *(_QWORD *)&targetDisplaySkill = this->fields.skillInfoUiWidget;
      m_CachedPtr = switchSkillInfo->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&targetDisplaySkill,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = *(_QWORD *)&targetDisplaySkill;
        sub_1D0F058(v19 + 32, *(_QWORD *)&targetDisplaySkill);
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
      *(_QWORD *)&targetDisplaySkill = this->fields.appendSkillInfoUiWidget;
      v20 = switchSkillInfo->fields.m_CachedPtr;
      v21 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v20 )
        goto LABEL_52;
      v22 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&targetDisplaySkill,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * v22;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v22 + 1;
        *(_QWORD *)(v23 + 32) = *(_QWORD *)&targetDisplaySkill;
        sub_1D0F058(v23 + 32, *(_QWORD *)&targetDisplaySkill);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v24 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v24 )
      {
        SwitchUIWidgetComponent__Set(v24, (UIWidget_array *)switchSkillInfo, 0, 0);
        return;
      }
    }
LABEL_52:
    sub_1D0F30C(switchSkillInfo, *(_QWORD *)&targetDisplaySkill);
  }
  if ( displaySkill != 1 )
  {
    if ( displaySkill )
      return;
    if ( !v14 )
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
  if ( v14 )
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
    sub_1D0F30C(0, isGrandSupport);
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
                                                         0),
        (appendSkillIconList = v6->fields.appendSkillIconList) == 0) )
  {
LABEL_48:
    sub_1D0F30C(this, item);
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
            sub_1D0F314(this);
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
          SkillIconComponent__Set_42472220((SkillIconComponent_o *)this, v19[4], v19[5], v19[12], v19[13], 0);
          v24 = v6->fields.appendSkillLevelIconLabelList;
          if ( !v24 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v24->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Set_42477084((UIIconLabel_o *)this, 48, v19[5], 0, 0, 0, 0, 0, 0, 0, 0);
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
  BalanceConfig_c *v7; // x0
  int32_t *p_FollowerPointGrand; // x8
  int32_t v9; // w21
  QuestRestrictionInfo_o *QuestRestrictionInfo; // x21
  _BOOL4 IsRecommendFollower_k__BackingField; // w22
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  _BOOL4 v14; // w21
  BalanceConfig_c *v15; // x0
  BalanceConfig_c *v16; // x0
  _BOOL4 v17; // w21
  BalanceConfig_c *v18; // x0
  int32_t FriendPointUpVal; // w22
  int v20; // w23
  FollowerSelectItemListViewItemDraw_o *v21; // x1
  int v22; // w8
  __int64 v23; // x8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x21
  int v25; // w23
  System_String_o *v26; // x22
  Il2CppObject *v27; // x0
  UILabel_o *campaignLabel; // x21
  FollowerSelectItemListViewItemDraw_o *v29; // x1
  bool activeSelf; // w8
  float v31; // s8
  bool v32; // w8
  float v33; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  int v36; // [xsp+1Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4E71F67 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1D0F0B4(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_6537/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E71F67 = 1;
  }
  if ( !item )
    goto LABEL_73;
  if ( FollowerSelectItemListViewItem__get_IsNoneSupportFriendPoint(item, 0) || isHideFriendPoint )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.friendPointIconLabel, 0, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v6->fields.friendPointData2Label, 0, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.campaignLabel;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
    goto LABEL_73;
  }
  switch ( FollowerSelectItemListViewItem__get_FollowerType(item, 0) )
  {
    case 1:
      QuestRestrictionInfo = FollowerSelectItemListViewItem__get_QuestRestrictionInfo(item, 0);
      if ( !QuestRestrictionInfo )
        goto LABEL_18;
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_73;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !this )
        goto LABEL_73;
      this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                       QuestRestrictionInfo->fields.questId,
                                                       (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_73;
      LOBYTE(QuestRestrictionInfo) = QuestEntity__HasFlag_43847172(
                                       (QuestEntity_o *)this,
                                       0x8000000,
                                       QuestRestrictionInfo->fields.questPhase,
                                       0);
LABEL_18:
      if ( item->fields._IsGrandSupport_k__BackingField )
      {
LABEL_30:
        v16 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v16 = BalanceConfig_TypeInfo;
        }
        p_FollowerPointGrand = &v16->static_fields->FollowerPointGrand;
      }
      else
      {
        IsRecommendFollower_k__BackingField = item->fields._IsRecommendFollower_k__BackingField;
        v12 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v12 = BalanceConfig_TypeInfo;
        }
        static_fields = v12->static_fields;
        if ( IsRecommendFollower_k__BackingField )
        {
LABEL_36:
          p_FollowerPointGrand = &static_fields->FollowerPointRecommend;
        }
        else if ( ((unsigned __int8)QuestRestrictionInfo & 1) != 0 )
        {
LABEL_37:
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
        goto LABEL_30;
      v14 = item->fields._IsRecommendFollower_k__BackingField;
      v15 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v15 = BalanceConfig_TypeInfo;
      }
      static_fields = v15->static_fields;
      if ( v14 )
        goto LABEL_36;
      p_FollowerPointGrand = &static_fields->FollowerPointNotFriend;
      break;
    case 3:
    case 4:
      v7 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v7 = BalanceConfig_TypeInfo;
      }
      p_FollowerPointGrand = &v7->static_fields->FollowerPointNpc;
      break;
    case 5:
      if ( item->fields._IsGrandSupport_k__BackingField )
        goto LABEL_30;
      v17 = item->fields._IsRecommendFollower_k__BackingField;
      v18 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      static_fields = v18->static_fields;
      if ( v17 )
        goto LABEL_36;
      goto LABEL_37;
    default:
      v9 = 0;
      goto LABEL_39;
  }
  v9 = *p_FollowerPointGrand;
LABEL_39:
  FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetFriendPointCampaignValue(item, 0);
  if ( !v6->fields.friendPointIconLabel )
    goto LABEL_73;
  v20 = (int)this;
  UIIconLabel__Set_42477084(v6->fields.friendPointIconLabel, 55, v9, 0, 0, 0, 0, 0, 0, 0, 0);
  if ( FriendPointUpVal > 0 || v20 >= 1 )
  {
    if ( v20 <= 0 )
      v22 = 1000;
    else
      v22 = v20;
    v23 = 274877907LL * (v22 * FriendPointUpVal + (v22 - 1000) * v9);
    friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    v25 = (v23 >> 38) + ((unsigned __int64)v23 >> 63);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6537/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0);
    v36 = v25;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v26, v27, 0);
    if ( !friendPointData2Label )
      goto LABEL_73;
    v21 = this;
    this = friendPointData2Label;
  }
  else
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    if ( !this )
      goto LABEL_73;
    v21 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v21, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__IsFriendPointCampaign(item, 0);
  campaignLabel = v6->fields.campaignLabel;
  if ( ((unsigned __int8)this & 1) != 0 )
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
                                                         0);
        if ( campaignLabel )
        {
          v29 = this;
          goto LABEL_60;
        }
      }
    }
LABEL_73:
    sub_1D0F30C(this, item);
  }
  if ( !campaignLabel )
    goto LABEL_73;
  v29 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_60:
  UILabel__set_text(campaignLabel, (System_String_o *)v29, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  if ( !this )
    goto LABEL_73;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_73;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  v31 = activeSelf ? -3.0 : 39.0;
  if ( !this )
    goto LABEL_73;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_73;
  v32 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointIconLabel;
  v33 = v32 ? -22.0 : 20.0;
  if ( !this )
    goto LABEL_73;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v31, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
  if ( !this )
    goto LABEL_73;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v35, v33, 0);
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
  if ( (byte_4E71F64 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_20724/*"img_blankbg_02"*/);
    sub_1D0F0B4(&StringLiteral_20772/*"img_equipface_grand"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F0B4(&StringLiteral_20725/*"img_blankbg_03"*/);
    byte_4E71F64 = 1;
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
                                                     (System_String_o *)StringLiteral_20772/*"img_equipface_grand"*/,
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
            (System_String_o *)StringLiteral_20724/*"img_blankbg_02"*/,
            1,
            (int)this > 0,
            v11);
          this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.grandSvtEquip3;
          if ( this )
          {
            FollowerSelectItemListViewItemEquipDraw__SetEquip(
              (FollowerSelectItemListViewItemEquipDraw_o *)this,
              servantLeader->fields.equipTarget3,
              (System_String_o *)StringLiteral_20725/*"img_blankbg_03"*/,
              0,
              0,
              v12);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_1D0F30C(this, item);
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
  __int64 v9; // x1
  struct UICommonButton_array *skillButtonList; // x8
  int max_length; // w23
  unsigned int v12; // w24
  Il2CppClass **v13; // x8
  UnityEngine_Behaviour_o *v14; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_4E71F69 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71F69 = 1;
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
      v12 = 0;
      do
      {
        if ( v12 >= LODWORD(skillButtonList->max_length) )
          sub_1D0F314(supportInfoButton);
        v13 = &skillButtonList->obj.klass + (int)v12;
        v14 = (UnityEngine_Behaviour_o *)v13[4];
        if ( !v14 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v13[4],
                             (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))v14->klass[1]._1.name)(
          v14,
          1,
          v14->klass[1]._1.namespaze);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))v14->klass[1]._1.nestedTypes)(
          v14,
          0,
          0,
          v14->klass[1]._1.implementedInterfaces);
        UnityEngine_Behaviour__set_enabled(v14, isInput, 0);
        if ( !Component_object )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, 1, 0);
        if ( max_length == ++v12 )
          goto LABEL_19;
        skillButtonList = this->fields.skillButtonList;
      }
      while ( skillButtonList );
LABEL_18:
      sub_1D0F30C(supportInfoButton, v9);
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
  FollowerSelectItemListViewItem_o *v7; // x20
  int64_t switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v12; // w9
  UnityEngine_Object_o *rangeSprite; // x23
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  const MethodInfo *v16; // x2
  System_String_o *FollowerBgImage; // x21
  FollowerInfo_o *followerInfo; // x21
  int32_t Kind_41787120; // w0
  UISprite_o *baseSprite; // x23
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v24; // x3
  ServantLeaderInfo_o *v25; // x21
  __int64 v26; // x23
  __int64 v27; // x24
  _BOOL4 v28; // w8
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *maskSprite; // x22
  _BOOL4 IsGrandSvt_k__BackingField; // w27
  UISprite_o *v32; // x24
  System_String_o *defaultMaskName; // x22
  UIAtlas_o *defaultMaskAtlas; // x23
  UIWidget_o *v35; // x22
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition01; // x9
  UILabel_o *maskMessageLabel; // x22
  char v40; // w27
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v42; // x22
  __int64 v43; // x23
  __int64 naturalAligment; // x9
  __int64 v45; // x23
  int32_t v46; // w0
  int32_t v47; // w23
  int32_t v48; // w22
  QuestPhaseEntity_o *v49; // x0
  QuestPhaseEntity_o *v50; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v52; // x23
  __int64 v53; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // x21
  int64_t v55; // x8
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  QuestRestrictionInfo_o *QuestRestrictionInfo; // x0
  QuestRestrictionInfo_o *v58; // x22
  int32_t eventId; // w21
  Il2CppObject *v60; // x22
  UILabel_o *warningMessageLabel; // x22
  float v62; // s0
  float v63; // s8
  UnityEngine_Transform_o *v64; // x22
  float warningMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  int32_t FollowerType; // w0
  Il2CppObject *v70; // x22
  UsedCount_o *UsedCount; // x20
  BalanceConfig_c *v72; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x20
  UILabel_o *numberOfUsabletimesLabel; // x20
  UILabel_o *numberOfUsabletimesSuffixLabel; // x20
  int32_t v77; // w20
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  struct UnityEngine_Vector3_StaticFields *v80; // x8
  System_String_o *v81; // x0
  FollowerSelectItemListViewItemDraw_o *v82; // x0
  FollowerSelectItemListViewItem_o *v83; // x1
  const MethodInfo *v84; // x2
  unsigned __int128 v85; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+18h] [xbp-78h] BYREF
  int32_t v87; // [xsp+2Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v7 = item;
  if ( (byte_4E71F61 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1D0F0B4(&FollowerRootComponent_TypeInfo);
    sub_1D0F0B4(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1D0F0B4(&Grade_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1D0F0B4(&TitleInfoControl_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6516/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/);
    sub_1D0F0B4(&StringLiteral_6517/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/);
    sub_1D0F0B4(&StringLiteral_6530/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1D0F0B4(&StringLiteral_6515/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/);
    sub_1D0F0B4(&StringLiteral_6529/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/);
    sub_1D0F0B4(&StringLiteral_6514/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_6518/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/);
    sub_1D0F0B4(&StringLiteral_20830/*"img_listbg_02"*/);
    byte_4E71F61 = 1;
  }
  entity = 0;
  v87 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v85 = 0u;
  switchSkillInfo = (int64_t)this->fields.switchSkillInfo;
  if ( switchSkillInfo )
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)switchSkillInfo, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_180;
  size = switchSkillUIList->fields._size;
  v12 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchSkillInfo = (int64_t)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_180;
  (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  switchSkillInfo = (int64_t)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_180;
  (*(void (__fastcall **)(int64_t, _QWORD, float))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  if ( this->fields.warningMessageWidth < 0 )
  {
    switchSkillInfo = (int64_t)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_180;
    this->fields.warningMessageWidth = *(_DWORD *)(switchSkillInfo + 168);
    UIWidget__set_width((UIWidget_o *)switchSkillInfo, 1000, 0);
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
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
  {
    switchSkillInfo = (int64_t)this->fields.rangeSprite;
    if ( !switchSkillInfo )
      goto LABEL_180;
    switchSkillInfo = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, mode == 0, 0);
  }
  if ( !mode )
    return;
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    switchSkillInfo = (int64_t)this->fields.dataLostMaskSprite;
    if ( !switchSkillInfo )
      goto LABEL_180;
    switchSkillInfo = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  }
  dataLostMaskMessageLabel = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0, 0) )
  {
    switchSkillInfo = (int64_t)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_180;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
    switchSkillInfo = (int64_t)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_180;
    switchSkillInfo = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  }
  FollowerSelectItemListViewItemDraw__SetActiveForGrandSupport(this, v7->fields._IsGrandSupport_k__BackingField, v16);
  if ( (unsigned int)(FollowerSelectItemListViewItem__get_FollowerType(v7, 0) - 3) >= 2 )
  {
    followerInfo = v7->fields.followerInfo;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_41787120 = Grade__GetKind_41787120(followerInfo, 0);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_41787120, 0);
  }
  else
  {
    FollowerBgImage = (System_String_o *)StringLiteral_20830/*"img_listbg_02"*/;
  }
  baseSprite = this->fields.baseSprite;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
  FollowerRootComponent__SetFollowerBase(baseSprite, FollowerBgImage, 0);
  FollowerSelectItemListViewItemDraw__SetupLockUI(this, v7, v21);
  FollowerSelectItemListViewItemDraw__SetPlayerInfo(this, v7, v22);
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v7, 0);
  v25 = ServantLeader;
  if ( ServantLeader )
  {
    v27 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v89.fields.currentCryptoKey = v27;
    *(_QWORD *)&v89.fields.fakeValue = v26;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v89, 0) > 0;
  }
  else
  {
    v28 = 0;
  }
  FollowerSelectItemListViewItemDraw__SetFriendPoint(this, v7, !v28, v24);
  FollowerSelectItemListViewItemDraw__SetServantInfo(this, v7, targetDisplaySkill, v29);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    IsGrandSvt_k__BackingField = v7->fields._IsGrandSvt_k__BackingField;
    v32 = this->fields.maskSprite;
    defaultMaskName = this->fields.defaultMaskName;
    defaultMaskAtlas = this->fields.defaultMaskAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    switchSkillInfo = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                        IsGrandSvt_k__BackingField,
                        v32,
                        defaultMaskName,
                        defaultMaskAtlas,
                        0);
    v35 = (UIWidget_o *)this->fields.maskSprite;
    if ( (switchSkillInfo & 1) != 0 )
    {
      switchSkillInfo = (int64_t)FollowerSelectItemListViewItemDraw_TypeInfo;
      if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
      if ( !v35 )
        goto LABEL_180;
      UIWidget__set_width(v35, FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth01, 0);
      switchSkillInfo = (int64_t)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_180;
      UIWidget__set_height(
        (UIWidget_o *)switchSkillInfo,
        FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight01,
        0);
      switchSkillInfo = (int64_t)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_180;
      switchSkillInfo = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
      if ( !switchSkillInfo )
        goto LABEL_180;
      static_fields = FollowerSelectItemListViewItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition01.fields.y;
      p_GrandMaskPosition01 = &static_fields->GrandMaskPosition01;
    }
    else
    {
      if ( !v35 )
        goto LABEL_180;
      UIWidget__set_width((UIWidget_o *)this->fields.maskSprite, this->fields.defaultMaskWidth, 0);
      switchSkillInfo = (int64_t)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_180;
      UIWidget__set_height((UIWidget_o *)switchSkillInfo, this->fields.defaultMaskHeight, 0);
      switchSkillInfo = (int64_t)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_180;
      switchSkillInfo = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
      if ( !switchSkillInfo )
        goto LABEL_180;
      p_y = &this->fields.defaultMaskPosition.fields.y;
      p_GrandMaskPosition01 = &this->fields.defaultMaskPosition;
    }
    v92.fields.y = *p_y;
    v92.fields.x = p_GrandMaskPosition01->fields.x;
    v92.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillInfo, v92, 0);
  }
  if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
  {
    switchSkillInfo = (int64_t)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_180;
    switchSkillInfo = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
    maskMessageLabel = this->fields.maskMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    switchSkillInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6529/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0);
    if ( !maskMessageLabel )
      goto LABEL_180;
    UILabel__set_text(maskMessageLabel, (System_String_o *)switchSkillInfo, 0);
    switchSkillInfo = (int64_t)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
    switchSkillInfo = (int64_t)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_180;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0);
    switchSkillInfo = (int64_t)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_180;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_77:
    v40 = 1;
    goto LABEL_78;
  }
  if ( v7->fields.isUniqueSvtRestriction || v7->fields.isUniqueIndividualityRestriction )
  {
    switchSkillInfo = (int64_t)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_180;
    switchSkillInfo = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
    switchSkillInfo = (int64_t)this->fields.maskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_180;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
    switchSkillInfo = (int64_t)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_180;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
    switchSkillInfo = (int64_t)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_180;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)switchSkillInfo, 0);
    warningMessageLabel = this->fields.warningMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    switchSkillInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6530/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
    if ( !warningMessageLabel )
      goto LABEL_180;
    UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillInfo, 0);
    switchSkillInfo = (int64_t)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_180;
    LODWORD(v62) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillInfo, 0);
    switchSkillInfo = (int64_t)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_180;
    v63 = v62;
    switchSkillInfo = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
    v64 = (UnityEngine_Transform_o *)switchSkillInfo;
    warningMessageWidth = (float)this->fields.warningMessageWidth;
    if ( v63 <= warningMessageWidth )
    {
      if ( !byte_4E70C9E )
      {
        switchSkillInfo = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
        byte_4E70C9E = 1;
      }
      v80 = UnityEngine_Vector3_TypeInfo->static_fields;
      x = v80->oneVector.fields.x;
      y = v80->oneVector.fields.y;
      z = v80->oneVector.fields.z;
    }
    else
    {
      x = warningMessageWidth / v63;
      z = 1.0;
      y = 1.0;
    }
    if ( !v64 )
      goto LABEL_180;
    UnityEngine_Transform__set_localScale(v64, *(UnityEngine_Vector3_o *)&x, 0);
    goto LABEL_77;
  }
  switchSkillInfo = (int64_t)this->fields.maskSprite;
  if ( !switchSkillInfo )
    goto LABEL_180;
  switchSkillInfo = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
  if ( !switchSkillInfo )
    goto LABEL_180;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  switchSkillInfo = (int64_t)this->fields.maskMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_180;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  switchSkillInfo = (int64_t)this->fields.warningBase;
  if ( !switchSkillInfo )
    goto LABEL_180;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  switchSkillInfo = (int64_t)this->fields.warningIcon;
  if ( !switchSkillInfo )
    goto LABEL_180;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0);
  switchSkillInfo = (int64_t)this->fields.warningMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_180;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  v40 = 0;
LABEL_78:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
  {
    if ( !v25 )
      goto LABEL_107;
    v43 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v90.fields.currentCryptoKey = v43;
    *(_QWORD *)&v90.fields.fakeValue = v42;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v90, 0) < 1
      || (v40 & 1) != 0
      || ServantLeaderInfo__IsHideSupport(v25, 0)
      || v7->fields._IsDataLost_k__BackingField )
    {
      goto LABEL_107;
    }
    switchSkillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_180;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillInfo, 35, 0) )
      goto LABEL_107;
    switchSkillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_180;
    switchSkillInfo = *(_QWORD *)(switchSkillInfo + 32);
    if ( !switchSkillInfo )
      goto LABEL_180;
    item = (FollowerSelectItemListViewItem_o *)FollowerRootComponent_TypeInfo;
    naturalAligment = FollowerRootComponent_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)switchSkillInfo + 304LL) < (unsigned int)naturalAligment
      || *(FollowerRootComponent_c **)(*(_QWORD *)(*(_QWORD *)switchSkillInfo + 200LL) + 8 * naturalAligment - 8) != FollowerRootComponent_TypeInfo )
    {
      v82 = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F6A8(switchSkillInfo);
      FollowerSelectItemListViewItemDraw__SetupLockUI(v82, v83, v84);
      return;
    }
    v45 = *(_QWORD *)(switchSkillInfo + 144);
    if ( !v45 )
      goto LABEL_107;
    v46 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(switchSkillInfo + 144), 0);
    if ( !v46 )
      goto LABEL_107;
    v47 = *(_DWORD *)(v45 + 24);
    if ( !v47 )
      goto LABEL_107;
    v48 = v46;
    switchSkillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_180;
    switchSkillInfo = (int64_t)DataManager__GetMasterData_object_(
                                 (DataManager_o *)switchSkillInfo,
                                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !switchSkillInfo )
      goto LABEL_180;
    v49 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillInfo, v48, v47, 0);
    if ( v49 )
    {
      v50 = v49;
      switchSkillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_180;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)switchSkillInfo,
                            (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
      v53 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
      v52 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
      v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v91.fields.currentCryptoKey = v53;
      *(_QWORD *)&v91.fields.fakeValue = v52;
      switchSkillInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v91, 0);
      if ( !v54 )
        goto LABEL_180;
      switchSkillInfo = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                   v54,
                                   switchSkillInfo,
                                   (const MethodInfo_3535B7C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !switchSkillInfo )
        goto LABEL_180;
      v55 = switchSkillInfo;
      switchSkillInfo = (int64_t)this->fields.classCompatibilityIcon;
      if ( !switchSkillInfo )
        goto LABEL_180;
      ServantClassCompatibilityIconComponent__SetIcon(
        (ServantClassCompatibilityIconComponent_o *)switchSkillInfo,
        *(_DWORD *)(v55 + 80),
        v50->fields.classIds,
        2,
        0);
    }
    else
    {
LABEL_107:
      switchSkillInfo = (int64_t)this->fields.classCompatibilityIcon;
      if ( !switchSkillInfo )
        goto LABEL_180;
      ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)switchSkillInfo, 0);
    }
  }
  numberOfUsabletimes = (UnityEngine_Object_o *)this->fields.numberOfUsabletimes;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0, 0) )
  {
    QuestRestrictionInfo = FollowerSelectItemListViewItem__get_QuestRestrictionInfo(v7, 0);
    v58 = QuestRestrictionInfo;
    if ( QuestRestrictionInfo )
    {
      eventId = QuestRestrictionInfo->fields.eventId;
      switchSkillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_180;
      switchSkillInfo = (int64_t)DataManager__GetMasterData_object_(
                                   (DataManager_o *)switchSkillInfo,
                                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0;
      if ( !switchSkillInfo )
        goto LABEL_180;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)switchSkillInfo,
              &entity,
              v58->fields.eventId,
              (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_121;
      v60 = entity;
      if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
      if ( TitleInfoControl__IsEnableEventShopButton_41333244((EventDetailEntity_o *)v60, 0) )
      {
        switchSkillInfo = (int64_t)entity;
        if ( !entity )
          goto LABEL_180;
        LODWORD(v58) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0);
      }
      else
      {
LABEL_121:
        LODWORD(v58) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    switchSkillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_180;
    if ( *(_BYTE *)(switchSkillInfo + 148) || FollowerSelectItemListViewItem__get_FollowerType(v7, 0) == 3 )
    {
      item = 0;
    }
    else
    {
      FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v7, 0);
      item = 0;
      if ( FollowerType != 4 && (((unsigned int)v58 ^ 1) & 1) == 0 )
      {
        switchSkillInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !switchSkillInfo )
          goto LABEL_180;
        v70 = DataManager__GetMasterData_object_(
                (DataManager_o *)switchSkillInfo,
                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
        switchSkillInfo = FollowerSelectItemListViewItem__get_FollowerId(v7, 0);
        if ( !v70 )
          goto LABEL_180;
        UsedCount = EventBoostItemUsedMaster__GetUsedCount(
                      (EventBoostItemUsedMaster_o *)v70,
                      eventId,
                      switchSkillInfo,
                      0);
        v72 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v72 = BalanceConfig_TypeInfo;
        }
        MaxFriendChocolateUse = v72->static_fields->MaxFriendChocolateUse;
        v87 = MaxFriendChocolateUse;
        if ( UsedCount )
        {
          if ( !v72->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v72);
            MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
          }
          v87 = MaxFriendChocolateUse - UsedCount->fields.count;
        }
        numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        switchSkillInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6516/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0);
        if ( !numberOfUsabletimesPrefixLabel )
          goto LABEL_180;
        UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillInfo, 0);
        numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
        switchSkillInfo = (int64_t)System_Int32__ToString((int32_t)&v87, 0);
        if ( !numberOfUsabletimesLabel )
          goto LABEL_180;
        UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillInfo, 0);
        numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
        switchSkillInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_6517/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0);
        if ( !numberOfUsabletimesSuffixLabel )
          goto LABEL_180;
        UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillInfo, 0);
        v77 = v87;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v77 )
        {
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_6514/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0);
          UnityEngine_ColorUtility__TryParseHtmlString(v78, &color, 0);
          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_6515/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0);
          UnityEngine_ColorUtility__TryParseHtmlString(v79, (UnityEngine_Color_o *)&v85, 0);
        }
        else
        {
          v81 = LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0);
          UnityEngine_ColorUtility__TryParseHtmlString(v81, &color, 0);
          switchSkillInfo = (int64_t)this->fields.friendChocolateSprite;
          if ( !switchSkillInfo )
            goto LABEL_180;
          UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0);
          v85 = (unsigned __int128)color;
        }
        switchSkillInfo = (int64_t)this->fields.numberOfUsabletimesSprite;
        if ( !switchSkillInfo
          || (UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0),
              (switchSkillInfo = (int64_t)this->fields.friendChocolateSprite) == 0) )
        {
LABEL_180:
          sub_1D0F30C(switchSkillInfo, item);
        }
        UIWidget__set_color((UIWidget_o *)switchSkillInfo, (UnityEngine_Color_o)v85, 0);
        item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
      }
    }
    switchSkillInfo = (int64_t)this->fields.numberOfUsabletimes;
    if ( switchSkillInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, (bool)item, 0);
      return;
    }
    goto LABEL_180;
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
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w26
  int32_t strengthStatus; // w23
  bool SupportSelectOverwriteTreasureDeviceName; // w27
  System_String_o *v18; // x0
  System_String_o *v19; // x1
  System_String_o *v20; // x24
  System_String_o *v21; // x24
  System_String_o *v22; // x0
  System_String_o *name; // x27
  TreasureDvcInfo_o *v24; // x25
  Il2CppObject *Master_object; // x25
  System_String_o *OverwriteTDName; // x24
  System_String_o **v27; // x8
  System_String_o *v28; // x25
  System_String_o *v29; // [xsp+0h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-58h] BYREF

  v10 = this;
  if ( (byte_4E71F63 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_9468/*"NP_DISABLE_COLOR_NAME"*/);
    sub_1D0F0B4(&StringLiteral_9469/*"NP_HIDE_NAME"*/);
    sub_1D0F0B4(&StringLiteral_9470/*"NP_HIDE_NAME_LEVEL"*/);
    sub_1D0F0B4(&StringLiteral_9474/*"NP_MAX_COLOR_NAME"*/);
    sub_1D0F0B4(&StringLiteral_9467/*"NP_COLOR_NAME"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E71F63 = 1;
  }
  v29 = 0;
  tdInfo = 0;
  if ( !item )
    goto LABEL_56;
  v11 = item->fields._IsGrandSupport_k__BackingField ? 600LL : 96LL;
  v12 = item->fields._IsGrandSupport_k__BackingField ? 592LL : 88LL;
  if ( !servantLeader )
    goto LABEL_56;
  v13 = *(UIRangeLabel_o **)((char *)&v10->klass + v12);
  v14 = *(UnityEngine_Object_o **)((char *)&v10->klass + v11);
  DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    servantLeader,
                                                    0);
  this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getTreasureDeviceInfo(servantLeader, &tdInfo, -1, 0);
  if ( !tdInfo )
    goto LABEL_56;
  if ( isHideSupport
    || (strengthStatus = tdInfo->fields.strengthStatus, ServantLeaderInfo__IsNotUsedTreasureDeice(servantLeader, 0)) )
  {
    strengthStatus = 0;
  }
  SupportSelectOverwriteTreasureDeviceName = FollowerSelectItemListViewItem__TryGetSupportSelectOverwriteTreasureDeviceName(
                                               item,
                                               &v29,
                                               0);
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0);
  if ( SupportSelectOverwriteTreasureDeviceName )
  {
    if ( (_DWORD)this != 4 )
    {
      v21 = v29;
      goto LABEL_46;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9468/*"NP_DISABLE_COLOR_NAME"*/, 0);
    v19 = v29;
  }
  else if ( (_DWORD)this == 4 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9468/*"NP_DISABLE_COLOR_NAME"*/, 0);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9469/*"NP_HIDE_NAME"*/, 0);
    v18 = v20;
  }
  else
  {
    if ( isHideSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9470/*"NP_HIDE_NAME_LEVEL"*/, 0);
      goto LABEL_45;
    }
    if ( !tdInfo )
      goto LABEL_56;
    name = tdInfo->fields.name;
    if ( isNpc && NpcServantFollowerEntity__IsHideTreasureDeviceLv(servantLeader->fields.npcFlag, 0) )
    {
      v24 = tdInfo;
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__GetServantId(servantLeader, -1, 0);
      if ( !v24 )
        goto LABEL_56;
      name = TreasureDvcInfo__GetName(v24, (int32_t)this, 0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__GetServantId(servantLeader, -1, 0);
    if ( !tdInfo || !Master_object )
LABEL_56:
      sub_1D0F30C(this, item);
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        (ServantLimitAddMaster_o *)Master_object,
                        (int32_t)this,
                        DispLimitCountStageSealAfterAtStageLimitCount,
                        name,
                        tdInfo->fields.lv,
                        0);
    if ( FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, 0) <= 1 )
      v27 = (System_String_o **)&StringLiteral_9467/*"NP_COLOR_NAME"*/;
    else
      v27 = (System_String_o **)&StringLiteral_9474/*"NP_MAX_COLOR_NAME"*/;
    v28 = *v27;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get(v28, 0);
    v19 = OverwriteTDName;
  }
  v22 = System_String__Format(v18, (Il2CppObject *)v19, 0);
LABEL_45:
  v21 = v22;
LABEL_46:
  this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0);
  if ( !v13 )
    goto LABEL_56;
  UIRangeLabel__Set(v13, v21, (System_String_o *)this, 0, 0, item->fields._IsGrandSupport_k__BackingField, 0);
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
      goto LABEL_56;
    }
    if ( !v14 )
      goto LABEL_56;
    ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)v14, tdInfo, 0);
  }
}


void FollowerSelectItemListViewItemDraw__SetPlayerInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v4; // x20
  const MethodInfo *v5; // x2
  UILabel_o *grandPlayerNameLabel; // x22
  UIIconLabel_o *grandPlayerLevelIconLabel; // x24
  UnityEngine_Behaviour_o *grandSvtProfileBackSpr; // x23
  UserGradeComponent_o *grandGradeIcon; // x21
  UISprite_o *grandPlayerBaseLineSprite; // x25
  unsigned int v11; // w26
  bool v12; // w1
  UILabel_o *loginDataLabel; // x24
  System_String_o *v14; // x25
  int64_t LoginTime; // x0
  Il2CppObject *v16; // x0
  FollowerSelectItemListViewItemDraw_o *gameObject; // x24
  float v18; // s0
  float monitor_low; // s8
  float v20; // s9
  UnityEngine_GameObject_o *v21; // x0
  float LocalPositionX; // s10
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  FollowerInfo_o *followerInfo; // x22
  int32_t Kind_41787120; // w0
  int32_t FollowerType; // w0
  System_String_o *v29; // x21
  __int64 *v30; // x8
  UnityEngine_Object_o *recommendedIcon; // x21
  UnityEngine_Object_o *recommendedIconText; // x21
  UILabel_o *v33; // x21
  UnityEngine_Object_o *recommendedUser; // x21

  v4 = this;
  if ( (byte_4E71F65 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_1D0F0B4(&Grade_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_13581/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_1D0F0B4(&StringLiteral_20627/*"icon_support_01"*/);
    sub_1D0F0B4(&StringLiteral_20836/*"img_listbg_svtprof_grand"*/);
    sub_1D0F0B4(&StringLiteral_6531/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_20835/*"img_listbg_line_grand"*/);
    sub_1D0F0B4(&StringLiteral_20582/*"icon_friend"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F0B4(&StringLiteral_20581/*"icon_follow"*/);
    byte_4E71F65 = 1;
  }
  if ( !item )
    goto LABEL_68;
  if ( FollowerSelectItemListViewItem__get_FollowerType(item, 0) )
  {
    if ( item->fields._IsGrandSupport_k__BackingField )
    {
      grandPlayerNameLabel = v4->fields.grandPlayerNameLabel;
      grandPlayerLevelIconLabel = v4->fields.grandPlayerLevelIconLabel;
      grandSvtProfileBackSpr = (UnityEngine_Behaviour_o *)v4->fields.grandSvtProfileBackSpr;
      grandGradeIcon = v4->fields.grandGradeIcon;
      grandPlayerBaseLineSprite = v4->fields.grandPlayerBaseLineSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(grandPlayerBaseLineSprite, (System_String_o *)StringLiteral_20835/*"img_listbg_line_grand"*/, 0);
      AtlasManager__SetPartyOrganizationImage(
        v4->fields.grandSvtProfileBackSpr,
        (System_String_o *)StringLiteral_20836/*"img_listbg_svtprof_grand"*/,
        0);
    }
    else
    {
      grandPlayerNameLabel = v4->fields.playerNameLabel;
      grandPlayerLevelIconLabel = v4->fields.playerLevelIconLabel;
      grandSvtProfileBackSpr = (UnityEngine_Behaviour_o *)v4->fields.svtProfileBackSpr;
      grandGradeIcon = v4->fields.gradeIcon;
    }
    FollowerSelectItemListViewItemDraw__SetPlayerMessage(v4, item, v5);
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0);
    v11 = (_DWORD)this - 3;
    if ( (unsigned int)((_DWORD)this - 3) > 1 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerNameText(item, 0);
      if ( !grandPlayerNameLabel )
        goto LABEL_68;
      UILabel__set_text(grandPlayerNameLabel, (System_String_o *)this, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_PlayerLevel(item, 0);
      if ( !grandPlayerLevelIconLabel )
        goto LABEL_68;
      UIIconLabel__Set_42477084(grandPlayerLevelIconLabel, 2, (int32_t)this, 0, 0, 0, 0, 0, 0, 0, 0);
      loginDataLabel = v4->fields.loginDataLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
      LoginTime = FollowerSelectItemListViewItem__get_LoginTime(item, 0);
      v16 = (Il2CppObject *)LocalizationManager__GetBeforeTime(LoginTime, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v14, v16, 0);
      if ( !loginDataLabel )
        goto LABEL_68;
      UILabel__set_text(loginDataLabel, (System_String_o *)this, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.supportInfoButton;
      if ( !this )
        goto LABEL_68;
      gameObject = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
      this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__DisplaySupportInfoButton(item, 0);
      if ( !gameObject )
        goto LABEL_68;
      v12 = (unsigned __int8)this & 1;
      this = gameObject;
    }
    else
    {
      if ( !grandPlayerNameLabel )
        goto LABEL_68;
      UILabel__set_text(grandPlayerNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !grandPlayerLevelIconLabel )
        goto LABEL_68;
      UIIconLabel__Clear(grandPlayerLevelIconLabel, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.loginDataLabel;
      if ( !this )
        goto LABEL_68;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.supportInfoButton;
      if ( !this )
        goto LABEL_68;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_68;
      v12 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
    if ( !grandSvtProfileBackSpr )
      goto LABEL_68;
    UnityEngine_Behaviour__set_enabled(grandSvtProfileBackSpr, v11 > 1, 0);
    LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize(grandPlayerNameLabel, 0);
    if ( !grandGradeIcon )
      goto LABEL_68;
    monitor_low = v18;
    LODWORD(v20) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(grandGradeIcon, 0);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v21, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)grandPlayerNameLabel,
                                                     0);
    if ( !this )
      goto LABEL_68;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_68;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
      if ( GameObjectExtensions__GetLocalScaleX(v24, 0) < 1.0 )
        monitor_low = (float)SLODWORD(Component_object[3].monitor);
    }
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0);
    GameObjectExtensions__SetLocalPositionX(v25, (float)(v20 * 0.5) + (float)(LocalPositionX + monitor_low), 0);
    followerInfo = item->fields.followerInfo;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    Kind_41787120 = Grade__GetKind_41787120(followerInfo, 0);
    UserGradeComponent__Set(grandGradeIcon, Kind_41787120, 0);
    FollowerType = FollowerSelectItemListViewItem__get_FollowerType(item, 0);
    if ( (unsigned int)(FollowerType - 3) < 2 )
    {
      v30 = &StringLiteral_20627/*"icon_support_01"*/;
    }
    else if ( FollowerType == 5 )
    {
      v30 = &StringLiteral_20581/*"icon_follow"*/;
    }
    else
    {
      v29 = 0;
      if ( FollowerType != 1 )
        goto LABEL_43;
      v30 = &StringLiteral_20582/*"icon_friend"*/;
    }
    v29 = (System_String_o *)*v30;
LABEL_43:
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
    if ( !this )
      goto LABEL_68;
    UISprite__set_spriteName((UISprite_o *)this, v29, 0);
    if ( !System_String__IsNullOrEmpty(v29, 0) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
      if ( !this )
        goto LABEL_68;
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
        goto LABEL_68;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, item->fields.isRecommended, 0);
    }
    recommendedIconText = (UnityEngine_Object_o *)v4->fields.recommendedIconText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(recommendedIconText, 0, 0) )
    {
      v33 = v4->fields.recommendedIconText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6531/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0);
      if ( !v33 )
        goto LABEL_68;
      UILabel__set_text(v33, (System_String_o *)this, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedIconText;
      if ( !this )
        goto LABEL_68;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, item->fields.isRecommended, 0);
    }
    recommendedUser = (UnityEngine_Object_o *)v4->fields.recommendedUser;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(recommendedUser, 0, 0) )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedUser;
      if ( this )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)this,
          item->fields._isRecommendedUser_k__BackingField,
          0);
        return;
      }
LABEL_68:
      sub_1D0F30C(this, item);
    }
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
  int v27; // w8
  UnityEngine_GameObject_o *v28; // x0
  bool v29; // w1
  UnityEngine_GameObject_o *v30; // x0
  float v31; // s8
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct FollowerInfo_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  struct FollowerInfo_o *v36; // x8

  v4 = this;
  if ( (byte_4E71F66 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F0B4(&StringLiteral_113/*" "*/);
    byte_4E71F66 = 1;
  }
  if ( !item )
    goto LABEL_53;
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
  if ( item->fields._IsRecommendFollower_k__BackingField )
  {
    followerInfo = item->fields.followerInfo;
    if ( !followerInfo )
      goto LABEL_53;
    userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
    if ( !userRecommendSupportHash )
      goto LABEL_53;
    if ( LODWORD(userRecommendSupportHash->max_length) )
    {
      v17 = userRecommendSupportHash->m_Items[0];
      if ( !v17 )
        goto LABEL_53;
      adviceMessageIds = v17->fields.adviceMessageIds;
      if ( !adviceMessageIds )
        goto LABEL_53;
      if ( !adviceMessageIds->max_length )
        goto LABEL_30;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
      v19 = item->fields.followerInfo;
      if ( !v19 )
        goto LABEL_53;
      v20 = v19->fields.userRecommendSupportHash;
      if ( !v20 )
        goto LABEL_53;
      if ( LODWORD(v20->max_length) )
      {
        v21 = v20->m_Items[0];
        if ( !v21 || !this )
          goto LABEL_53;
        ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                               (RecommendAdviceMessageMaster_o *)this,
                               v21->fields.adviceMessageIds,
                               0);
        v23 = System_String__Join((System_String_o *)StringLiteral_113/*" "*/, ConvertMessageToId, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v23, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( v13 )
          {
            gameObject = UnityEngine_Component__get_gameObject(v13, 0);
            GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0);
            if ( v12 )
            {
              v25 = (UILabel_o *)v12;
              message = v23;
              goto LABEL_25;
            }
          }
LABEL_53:
          sub_1D0F30C(this, item);
        }
LABEL_30:
        if ( v13 )
        {
          v28 = UnityEngine_Component__get_gameObject(v13, 0);
          GameObjectExtensions__SetLocalPositionY(v28, -19.0, 0);
          if ( v12 )
          {
            this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              if ( v10 )
              {
                v29 = 1;
                v30 = v10;
LABEL_35:
                UnityEngine_GameObject__SetActive(v30, v29, 0);
                GameObjectExtensions__SetLocalPositionY(v10, -11.0, 0);
                GameObjectExtensions__SetLocalPositionY(v11, 10.0, 0);
                if ( v14 )
                {
                  v27 = 1113849856;
                  goto LABEL_37;
                }
              }
            }
          }
        }
        goto LABEL_53;
      }
    }
    sub_1D0F314(this);
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_FollowerType(item, 0);
  switch ( (int)this )
  {
    case 1:
      v34 = item->fields.followerInfo;
      if ( !v34 )
        goto LABEL_53;
      this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v34->fields.message, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_30;
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)OptionManager__GetMessageDisp(0);
      if ( ((unsigned __int8)this & 1) == 0 || !item->fields.isMessageDisp )
        goto LABEL_30;
      if ( !v13 )
        goto LABEL_53;
      v35 = UnityEngine_Component__get_gameObject(v13, 0);
      GameObjectExtensions__SetLocalPositionY(v35, -19.0, 0);
      v36 = item->fields.followerInfo;
      if ( !v36 || !v12 )
        goto LABEL_53;
      message = v36->fields.message;
      v25 = (UILabel_o *)v12;
      break;
    case 2:
    case 5:
      goto LABEL_30;
    case 3:
    case 4:
      if ( !v13 )
        goto LABEL_53;
      v33 = UnityEngine_Component__get_gameObject(v13, 0);
      GameObjectExtensions__SetLocalPositionY(v33, -16.0, 0);
      if ( !v12 )
        goto LABEL_53;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
      if ( !this )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( !v10 )
        goto LABEL_53;
      v30 = v10;
      v29 = 0;
      goto LABEL_35;
    default:
      return;
  }
LABEL_25:
  UILabel__set_text(v25, message, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
  if ( !this )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( !v10 )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(v10, 1, 0);
  GameObjectExtensions__SetLocalPositionY(v10, -1.0, 0);
  GameObjectExtensions__SetLocalPositionY(v11, -1.0, 0);
  if ( !v14 )
    goto LABEL_53;
  v27 = 1112801280;
LABEL_37:
  v31 = *(float *)&v27;
  v32 = UnityEngine_Component__get_gameObject(v14, 0);
  GameObjectExtensions__SetLocalPositionY(v32, v31, 0);
}


void FollowerSelectItemListViewItemDraw__SetServantInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        int32_t targetDisplaySkill,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v5; // x20
  FollowerSelectItemListViewItemDraw_o *v6; // x19
  ServantLeaderInfo_o *ServantLeader; // x0
  ServantLeaderInfo_o *v8; // x21
  __int64 v9; // x23
  __int64 v10; // x24
  bool IsNpc; // w24
  struct FollowerInfo_o *followerInfo; // x8
  __int64 v13; // x9
  __int64 v14; // x10
  ServantFaceIconComponent_o *v15; // x26
  UIRangeLabel_o *v16; // x25
  char v17; // w23
  const MethodInfo *v18; // x3
  bool v19; // w1
  UIRangeLabel_o *svtNameRangeLabel; // x20
  UIRangeLabel_o *svtNpRangeLabel; // x20
  ServantNpCommandCardComponent_o *svtNpCommandCard; // x0
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v24; // x0
  struct SkillIconComponent_array *v25; // x8
  __int64 v26; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v29; // x0
  struct SkillIconComponent_array *v30; // x8
  __int64 v31; // x20
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  ServantCommandCardListComponent_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  const MethodInfo *v35; // x5
  UnityEngine_Object_o *eventUpValIcon; // x24
  const MethodInfo *v37; // x3
  struct ServantFaceIconComponent_o *servantFaceIcon; // x24
  struct UICommonButton_o *baseButton; // x25
  int32_t v40; // w25
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x26
  FollowerSelectItemListViewItemDraw___c_c *v42; // x8
  System_Func_object__int__o *_9__103_0; // x27
  Il2CppObject *v44; // x28
  struct FollowerSelectItemListViewItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  FollowerSelectItemListViewItemDraw_o *v47; // x2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  UnityEngine_Object_o *svtCommandCardList; // x22
  ServantCommandCardListComponent_o *v51; // x22
  __int64 v52; // x23
  __int64 v53; // x24
  int32_t v54; // w23
  int32_t ServantId; // w0
  System_Int32_array *commandCardParam; // x24
  int32_t v57; // w25
  UnityEngine_Object_o *pushSprite; // x22
  struct FollowerInfo_o *v59; // x8
  int64_t pushUserSvtId; // x8
  bool v61; // w21
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  const MethodInfo *v63; // x2
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  UISprite_o *v65; // x21
  UISprite_o *v66; // x21
  UILabel_o *v67; // x21
  System_String_o *v68; // x22
  Il2CppObject *v69; // x0
  int32_t servantRarity; // [xsp+18h] [xbp-68h]
  int32_t TimesToRestart_k__BackingField; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = item;
  v6 = this;
  if ( (byte_4E71F62 & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&SkillInfo___TypeInfo);
    sub_1D0F0B4(&Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__103_0__);
    sub_1D0F0B4(&FollowerSelectItemListViewItemDraw___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_3742/*"COMMON_NO_ENTRY"*/);
    sub_1D0F0B4(&StringLiteral_11821/*"SERVANT_HIDE_NAME"*/);
    sub_1D0F0B4(&StringLiteral_11717/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1D0F0B4(&StringLiteral_20781/*"img_frames_mask01"*/);
    sub_1D0F0B4(&StringLiteral_18776/*"datalost_svt_select"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F0B4(&StringLiteral_9437/*"NO_ENTRY_NAME"*/);
    byte_4E71F62 = 1;
  }
  if ( !v5 )
    goto LABEL_134;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v5, 0);
  if ( ServantLeader )
  {
    v8 = ServantLeader;
    v10 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v72.fields.currentCryptoKey = v10;
    *(_QWORD *)&v72.fields.fakeValue = v9;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v72, 0) >= 1 )
    {
      IsNpc = ServantLeaderInfo__IsNpc(v8, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v8, 0);
      followerInfo = v5->fields.followerInfo;
      if ( v5->fields._IsGrandSupport_k__BackingField )
        v13 = 584;
      else
        v13 = 80;
      if ( v5->fields._IsGrandSupport_k__BackingField )
        v14 = 520;
      else
        v14 = 56;
      if ( !followerInfo )
        goto LABEL_134;
      v15 = *(ServantFaceIconComponent_o **)((char *)&v6->klass + v14);
      if ( !v15 )
        goto LABEL_134;
      v16 = *(UIRangeLabel_o **)((char *)&v6->klass + v13);
      v17 = (char)this;
      ServantFaceIconComponent__Set_42458904(
        *(ServantFaceIconComponent_o **)((char *)&v6->klass + v14),
        v8,
        v5->fields.iconLabelInfo1,
        v5->fields.iconLabelInfo2,
        0,
        followerInfo->fields.imageSvtId,
        0,
        0,
        0);
      if ( v5->fields._IsGrandSupport_k__BackingField )
        FollowerSelectItemListViewItemDraw__SetGrandServantEquip(v6, v5, v8, v18);
      v19 = !IsNpc || !NpcServantFollowerEntity__IsHideRarity(v8->fields.npcFlag, 0);
      ServantFaceIconComponent__SetDispRaritySprite(v15, v19, 0);
      ServantFaceIconComponent__SetDispClassSprite(v15, !v5->fields._IsDataLost_k__BackingField, 0);
      if ( (v17 & 1) != 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11821/*"SERVANT_HIDE_NAME"*/,
                                                         0);
      }
      else
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v5, 0);
      }
      item = (FollowerSelectItemListViewItem_o *)this;
      if ( !v16 )
        goto LABEL_134;
      UIRangeLabel__Set(v16, (System_String_o *)this, 0, 1, 0, 0, 0);
      FollowerSelectItemListViewItemDraw__SetNPInfo(v6, v5, v8, IsNpc, v17 & 1, v35);
      eventUpValIcon = (UnityEngine_Object_o *)v6->fields.eventUpValIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
      {
        if ( FollowerSelectItemListViewItem__get_ServantLeader(v5, 0) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, 0);
          if ( !this )
            goto LABEL_134;
          baseButton = this->fields.baseButton;
          servantFaceIcon = this->fields.servantFaceIcon;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = baseButton;
          *(_QWORD *)&v73.fields.fakeValue = servantFaceIcon;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v73, 0);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, 0);
          if ( !this )
            goto LABEL_134;
          servantRarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0);
        }
        else
        {
          servantRarity = -1;
          v40 = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, 0);
        if ( !this )
          goto LABEL_134;
        EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList((ServantLeaderInfo_o *)this, 0);
        v42 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw___c_TypeInfo);
          v42 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        }
        _9__103_0 = (System_Func_object__int__o *)v42->static_fields->__9__103_0;
        if ( !_9__103_0 )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
          }
          v44 = (Il2CppObject *)v42->static_fields->__9;
          _9__103_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_EquipTargetInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__103_0,
            v44,
            Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__103_0__,
            0);
          static_fields = FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields;
          static_fields->__9__103_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__103_0;
          sub_1D0F058(&static_fields->__9__103_0, _9__103_0);
        }
        v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList,
                                                                     (System_Func_TSource__TResult__o *)_9__103_0,
                                                                     (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
        this = (FollowerSelectItemListViewItemDraw_o *)System_Linq_Enumerable__ToArray_int_(
                                                         v46,
                                                         (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !this )
          goto LABEL_134;
        v47 = this;
        if ( !this->fields.m_CancellationTokenSource )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F15C(int___TypeInfo, 1);
          if ( !this )
            goto LABEL_134;
          v47 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_135:
            sub_1D0F314(this);
          LODWORD(this->fields.rangeSprite) = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
        if ( !this )
LABEL_134:
          sub_1D0F30C(this, item);
        EventUpValIconComponent__Set_42246192(
          (EventUpValIconComponent_o *)this,
          v5->fields.eventUpValItemList,
          (System_Int32_array *)v47,
          v40,
          servantRarity,
          0);
      }
      FollowerSelectItemListViewItemDraw__SetSkillIconInfo(v6, v5, v8, v37);
      FollowerSelectItemListViewItemDraw__SetAppendSkillIconInfo(v6, v5, v8, v48);
      FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(v6, targetDisplaySkill, v5, v49);
      svtCommandCardList = (UnityEngine_Object_o *)v6->fields.svtCommandCardList;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v51 = v6->fields.svtCommandCardList;
        if ( (v17 & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_134;
          ServantCommandCardListComponent__SetHide(v6->fields.svtCommandCardList, 0);
        }
        else
        {
          v53 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
          v52 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v74.fields.currentCryptoKey = v53;
          *(_QWORD *)&v74.fields.fakeValue = v52;
          v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v74, 0);
          ServantId = ServantLeaderInfo__GetServantId(v8, -1, 0);
          commandCardParam = v8->fields.commandCardParam;
          v57 = ServantId;
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v8, 0);
          if ( !v51 )
            goto LABEL_134;
          ServantCommandCardListComponent__Set_42443692(
            v51,
            v54,
            v57,
            commandCardParam,
            (System_Int32_array *)this,
            2,
            1,
            0);
        }
      }
      pushSprite = (UnityEngine_Object_o *)v6->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v59 = v5->fields.followerInfo;
        if ( !v59 )
          goto LABEL_134;
        pushUserSvtId = v59->fields.pushUserSvtId;
        v61 = pushUserSvtId && pushUserSvtId == v8->fields.userSvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.pushSprite;
        if ( !this )
          goto LABEL_134;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_134;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v61, 0);
      }
      dataLostMaskSprite = (UnityEngine_Object_o *)v6->fields.dataLostMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
        goto LABEL_132;
      dataLostMaskMessageLabel = (UnityEngine_Object_o *)v6->fields.dataLostMaskMessageLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0, 0) )
        goto LABEL_132;
      if ( v5->fields._IsDataLost_k__BackingField )
      {
        v65 = v6->fields.dataLostMaskSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(v65, (System_String_o *)StringLiteral_18776/*"datalost_svt_select"*/, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_134;
        v75.fields.r = 1.0;
        v75.fields.g = 1.0;
        v75.fields.b = 1.0;
        v75.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v75, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_134;
        goto LABEL_130;
      }
      if ( v5->fields._TimesToRestart_k__BackingField < 1 )
      {
LABEL_132:
        FollowerSelectItemListViewItemDraw__SetUpOpenClassScoreNumButton(v6, v5, v63);
        return;
      }
      v66 = v6->fields.dataLostMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCommon(v66, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20781/*"img_frames_mask01"*/, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( this )
        {
          v76.fields.a = 0.62353;
          v76.fields.r = 0.0;
          v76.fields.g = 0.0;
          v76.fields.b = 0.0;
          UIWidget__set_color((UIWidget_o *)this, v76, 0);
          v67 = v6->fields.dataLostMaskMessageLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
          TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TimesToRestart_k__BackingField);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v68, v69, 0);
          if ( v67 )
          {
            UILabel__set_text(v67, (System_String_o *)this, 0);
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
LABEL_130:
                  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
                  if ( !this )
                    goto LABEL_134;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  goto LABEL_132;
                }
              }
            }
          }
        }
      }
      goto LABEL_134;
    }
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, 0);
  if ( !v6->fields.servantFaceIcon )
    goto LABEL_134;
  ServantFaceIconComponent__SetEquipDangling(v6->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0);
  svtNameRangeLabel = v6->fields.svtNameRangeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3742/*"COMMON_NO_ENTRY"*/, 0);
  if ( !svtNameRangeLabel )
    goto LABEL_134;
  UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0, 1, 0, 0, 0);
  svtNpRangeLabel = v6->fields.svtNpRangeLabel;
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9437/*"NO_ENTRY_NAME"*/, 0);
  if ( !svtNpRangeLabel )
    goto LABEL_134;
  UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)this, 0, 1, 0, 0, 0);
  svtNpCommandCard = v6->fields.svtNpCommandCard;
  if ( svtNpCommandCard )
    ServantNpCommandCardComponent__Clear(svtNpCommandCard, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
  if ( this )
    EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0);
  skillIconList = v6->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_134;
  v24 = sub_1D0F15C(SkillInfo___TypeInfo, LODWORD(skillIconList->max_length));
  v6->fields.skillInfoList = (struct SkillInfo_array *)v24;
  this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F058(&v6->fields.skillInfoList, v24);
  v25 = v6->fields.skillIconList;
  if ( !v25 )
    goto LABEL_134;
  v26 = 0;
  while ( (int)v26 < SLODWORD(v25->max_length) )
  {
    skillBaseList = v6->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_134;
    if ( (unsigned int)v26 >= LODWORD(skillBaseList->max_length) )
      goto LABEL_135;
    this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v26];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v25 = v6->fields.skillIconList;
      ++v26;
      if ( v25 )
        continue;
    }
    goto LABEL_134;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_134;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  appendSkillIconList = v6->fields.appendSkillIconList;
  if ( !appendSkillIconList )
    goto LABEL_134;
  v29 = sub_1D0F15C(SkillInfo___TypeInfo, LODWORD(appendSkillIconList->max_length));
  v6->fields.appendSkillInfoList = (struct SkillInfo_array *)v29;
  this = (FollowerSelectItemListViewItemDraw_o *)sub_1D0F058(&v6->fields.appendSkillInfoList, v29);
  v30 = v6->fields.appendSkillIconList;
  if ( !v30 )
    goto LABEL_134;
  v31 = 0;
  while ( (int)v31 < SLODWORD(v30->max_length) )
  {
    appendSkillBaseList = v6->fields.appendSkillBaseList;
    if ( !appendSkillBaseList )
      goto LABEL_134;
    if ( (unsigned int)v31 >= LODWORD(appendSkillBaseList->max_length) )
      goto LABEL_135;
    this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v31];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v30 = v6->fields.appendSkillIconList;
      ++v31;
      if ( v30 )
        continue;
    }
    goto LABEL_134;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_134;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_134;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v33 = v6->fields.svtCommandCardList;
  if ( v33 )
    ServantCommandCardListComponent__Clear(v33, 0);
  v34 = (UnityEngine_Component_o *)v6->fields.pushSprite;
  if ( v34 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v34, 0);
    if ( !this )
      goto LABEL_134;
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
  FollowerSelectItemListViewItemDraw_o *v6; // x20
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
  v6 = this;
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                   item,
                                                   &this->fields.skillInfoList,
                                                   0);
  skillIconList = v6->fields.skillIconList;
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
          sub_1D0F314(this);
        v13 = (*p_skillInfoList)->m_Items[v11];
        if ( v13 && v13->fields.id >= 1 )
          v10 = v11 + 1;
      }
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_14;
    }
LABEL_48:
    sub_1D0F30C(this, item);
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
        skillBaseList = v6->fields.skillBaseList;
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
        v18 = v6->fields.skillBaseList;
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
          v20 = v6->fields.skillIconList;
          if ( !v20 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v20->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v20->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0);
          skillLevelIconLabelList = v6->fields.skillLevelIconLabelList;
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
          v23 = v6->fields.skillIconList;
          if ( !v23 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v23->max_length) )
            goto LABEL_49;
          if ( !v19 )
            goto LABEL_48;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v23->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          SkillIconComponent__Set_42472220((SkillIconComponent_o *)this, v19[4], v19[5], v19[12], v19[13], 0);
          v24 = v6->fields.skillLevelIconLabelList;
          if ( !v24 )
            goto LABEL_48;
          if ( v16 >= LODWORD(v24->max_length) )
            goto LABEL_49;
          this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v15);
          if ( !this )
            goto LABEL_48;
          UIIconLabel__Set_42477084((UIIconLabel_o *)this, 48, v19[5], 0, 0, 0, 0, 0, 0, 0, 0);
        }
      }
      v25 = v6->fields.skillIconList;
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
  __int64 v7; // x1
  _BOOL4 IsReleasedClassBoard_k__BackingField; // w21
  UnityEngine_Object_o *v9; // x21
  int32_t openClassBoardNum; // w23
  UILabel_o *classBoardOpenButtonLabel; // x21
  UnityEngine_GameObject_o *v12; // x21
  FollowerSelectItemListViewItemDraw_c *v13; // x8
  __int64 v14; // x9
  UISprite_o *classBoardBackSprite; // x21
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  Il2CppObject **v17; // x9
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  int32_t openGrandClassBoardNum; // w8
  Il2CppObject **v22; // x9
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  struct UILabel_o *v25; // x20
  System_String_o *v26; // x0
  Il2CppObject *Component_object; // x19
  int32_t v28; // [xsp+8h] [xbp-48h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4E71F6B & 1) == 0 )
  {
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1D0F0B4(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6467/*"FFFFFF"*/);
    sub_1D0F0B4(&StringLiteral_17715/*"btn_bg_29_2"*/);
    sub_1D0F0B4(&StringLiteral_1043/*"/"*/);
    sub_1D0F0B4(&StringLiteral_12665/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_12666/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/);
    sub_1D0F0B4(&StringLiteral_6466/*"FFFF00"*/);
    sub_1D0F0B4(&StringLiteral_16222/*"[{0}]+{1}[-]"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E71F6B = 1;
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
  v9 = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
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
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12665/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, 0);
        if ( !classBoardOpenButtonLabel )
          goto LABEL_57;
        UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
        if ( !gameObject )
          goto LABEL_57;
        v12 = UnityEngine_Component__get_gameObject(gameObject, 0);
        v13 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
          v13 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        v14 = 32;
LABEL_28:
        GameObjectExtensions__SetLocalPositionY(
          v12,
          *(float *)((char *)&v13->static_fields->CAMPAIGN_TOP_COLOR.fields.r + v14),
          0);
        goto LABEL_29;
      }
    }
    gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12666/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, 0);
    if ( !classBoardOpenButtonLabel )
      goto LABEL_57;
    UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
    if ( !gameObject )
      goto LABEL_57;
    v12 = UnityEngine_Component__get_gameObject(gameObject, 0);
    v13 = FollowerSelectItemListViewItemDraw_TypeInfo;
    if ( !FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo);
      v13 = FollowerSelectItemListViewItemDraw_TypeInfo;
    }
    v14 = 36;
    goto LABEL_28;
  }
LABEL_29:
  classBoardBackSprite = this->fields.classBoardBackSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_17715/*"btn_bg_29_2"*/, 0);
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
      v17 = (Il2CppObject **)&StringLiteral_6466/*"FFFF00"*/;
    else
      v17 = (Il2CppObject **)&StringLiteral_6467/*"FFFFFF"*/;
    v18 = *v17;
    v29 = item->fields.openClassBoardNum;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    gameObject = (UnityEngine_Component_o *)System_String__Format_65604080(
                                              (System_String_o *)StringLiteral_16222/*"[{0}]+{1}[-]"*/,
                                              v18,
                                              v19,
                                              0);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_57;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
    if ( !gameObject )
      goto LABEL_57;
    v20 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SetLocalScale_37345220(v20, 1.0, 0);
    openGrandClassBoardNum = item->fields.openGrandClassBoardNum;
    if ( openGrandClassBoardNum < 0 )
      return;
    v22 = (Il2CppObject **)(item->fields.isMaxOpenGrandClassBoard ? &StringLiteral_6466/*"FFFF00"*/ : &StringLiteral_6467/*"FFFFFF"*/);
    v23 = *v22;
    v28 = openGrandClassBoardNum;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    gameObject = (UnityEngine_Component_o *)System_String__Format_65604080(
                                              (System_String_o *)StringLiteral_16222/*"[{0}]+{1}[-]"*/,
                                              v23,
                                              v24,
                                              0);
    v25 = this->fields.openClassBoardNumLabel;
    if ( !v25
      || (v26 = System_String__Concat_65601036(
                  v25->fields.mText,
                  (System_String_o *)StringLiteral_1043/*"/"*/,
                  (System_String_o *)gameObject,
                  0),
          UILabel__set_text(v25, v26, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel) == 0) )
    {
LABEL_57:
      sub_1D0F30C(gameObject, v7);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4E71F68 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E71F68 = 1;
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
      sub_1D0F30C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)item, 0);
  }
}


void FollowerSelectItemListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4E71F6E & 1) == 0 )
  {
    sub_1D0F0B4(&FollowerSelectItemListViewItemDraw___c_TypeInfo);
    byte_4E71F6E = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(FollowerSelectItemListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItemDraw___c_o *)v1;
  sub_1D0F058(FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields, v1);
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

  if ( (byte_4E71F6F & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw___c_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E71F6F = 1;
  }
  if ( !x )
    sub_1D0F30C(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v7, 0);
}