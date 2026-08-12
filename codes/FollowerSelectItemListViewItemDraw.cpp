void FollowerSelectItemListViewItemDraw___cctor(const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_c *v1; // x8
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x10
  struct FollowerSelectItemListViewItemDraw_StaticFields *v3; // x8

  if ( (byte_596AF96 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItemDraw_TypeInfo);
    byte_596AF96 = 1;
  }
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_E9C0F0;
  v1 = FollowerSelectItemListViewItemDraw_TypeInfo;
  FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_BOT_COLOR = (struct UnityEngine_Color_o)xmmword_E9C040;
  static_fields = v1->static_fields;
  static_fields->CLASS_BOARD_LABEL_POS = (struct UnityEngine_Vector2_o)0x41300000BF800000LL;
  v3 = v1->static_fields;
  *(_QWORD *)&static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y = 0x4130000041400000LL;
  *(_OWORD *)&v3->GrandMaskWidth01 = xmmword_E9DC30;
}


void FollowerSelectItemListViewItemDraw___ctor(FollowerSelectItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SkillIconComponent_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UIIconLabel_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UnityEngine_GameObject_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct SkillIconComponent_array *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct UIIconLabel_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_596AF95 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&SkillIconComponent___TypeInfo);
    sub_2213A60(&UIIconLabel___TypeInfo);
    byte_596AF95 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillBaseList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillIconList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UIIconLabel_array *)sub_2213B20(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillLevelIconLabelList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct UnityEngine_GameObject_array *)sub_2213B20(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillBaseList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (struct SkillIconComponent_array *)sub_2213B20(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillIconList,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (struct UIIconLabel_array *)sub_2213B20(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v40;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.appendSkillLevelIconLabelList,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.warningMessageWidth = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FollowerSelectItemListViewItemDraw__Awake(FollowerSelectItemListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *skillIconSprite; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UISprite_o *v24; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct UISprite_o *v32; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_596AF89 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21207/*"icon_skill_mini"*/);
    sub_2213A60(&StringLiteral_21394/*"img_friend_skill"*/);
    sub_2213A60(&StringLiteral_21096/*"icon_append_mini"*/);
    sub_2213A60(&StringLiteral_21393/*"img_friend_appendskill"*/);
    byte_596AF89 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.switchSkillUIList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  skillIconSprite = this->fields.skillIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  AtlasManager__SetEventSprite(skillIconSprite, (System_String_o *)StringLiteral_21207/*"icon_skill_mini"*/, 0);
  AtlasManager__SetEventSprite(this->fields.skillTitleSprite, (System_String_o *)StringLiteral_21394/*"img_friend_skill"*/, 0);
  AtlasManager__SetEventSprite(this->fields.appendSkillIconSprite, (System_String_o *)StringLiteral_21096/*"icon_append_mini"*/, 0);
  AtlasManager__SetEventSprite(this->fields.appendSkillTitleSprite, (System_String_o *)StringLiteral_21393/*"img_friend_appendskill"*/, 0);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v24 = this->fields.maskSprite;
    if ( !v24 )
      goto LABEL_14;
    mAtlas = v24->fields.mAtlas;
    this->fields.defaultMaskAtlas = mAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskAtlas,
      (int32_t)mAtlas,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v32 = this->fields.maskSprite;
    if ( !v32
      || (mSpriteName = v32->fields.mSpriteName,
          this->fields.defaultMaskName = mSpriteName,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.defaultMaskName,
            (int32_t)mSpriteName,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31),
          (transform = (UnityEngine_Component_o *)this->fields.maskSprite) == 0)
      || (*(_QWORD *)&this->fields.defaultMaskWidth = transform[7].klass,
          (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0)) == 0) )
    {
LABEL_14:
      sub_2213CDC(transform, v17);
    }
    this->fields.defaultMaskPosition = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                                       (UnityEngine_Transform_o *)transform,
                                                                       0);
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
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x21
  _BOOL4 v15; // w8
  int32_t displaySkill; // w9
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  intptr_t v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  intptr_t v36; // x8
  SwitchUIWidgetComponent_o *v37; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v5 = targetDisplaySkill;
  if ( (byte_596AF93 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AF93 = 1;
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
  ((void (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, double))switchSkillInfo->klass[1]._1.byval_arg.data)(
    switchSkillInfo,
    *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
    0.0);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_52;
  switchSkillInfo = (SwitchUIWidgetComponent_o *)((__int64 (__fastcall *)(SwitchUIWidgetComponent_o *, _QWORD, double))switchSkillInfo->klass[1]._1.byval_arg.data)(
                                                   switchSkillInfo,
                                                   *(_QWORD *)&switchSkillInfo->klass[1]._1.byval_arg.bits,
                                                   0.0);
  if ( !item )
    goto LABEL_52;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, *(const MethodInfo **)&targetDisplaySkill);
  if ( ServantLeader )
  {
    v13 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&targetDisplaySkill,
        v12);
    *(_QWORD *)&v38.fields.currentCryptoKey = v13;
    *(_QWORD *)&v38.fields.fakeValue = v14;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v38, 0) > 0;
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
      m_CachedPtr = switchSkillInfo->fields.m_CachedPtr;
      *(_QWORD *)&targetDisplaySkill = this->fields.skillInfoUiWidget;
      v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_52;
      m_CancellationTokenSource_low = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&targetDisplaySkill,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = *(_QWORD *)&targetDisplaySkill;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), targetDisplaySkill, v17, v18, v19, v20, v21, v22);
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
      v33 = switchSkillInfo->fields.m_CachedPtr;
      *(_QWORD *)&targetDisplaySkill = this->fields.appendSkillInfoUiWidget;
      v34 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_52;
      v35 = SLODWORD(switchSkillInfo->fields.m_CancellationTokenSource);
      if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)switchSkillInfo,
          *(Il2CppObject **)&targetDisplaySkill,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = v33 + 8 * v35;
        LODWORD(switchSkillInfo->fields.m_CancellationTokenSource) = v35 + 1;
        *(_QWORD *)(v36 + 32) = *(_QWORD *)&targetDisplaySkill;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), targetDisplaySkill, v27, v28, v29, v30, v31, v32);
      }
    }
    switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.switchSkillUIList;
    if ( switchSkillInfo )
    {
      v37 = this->fields.switchSkillInfo;
      switchSkillInfo = (SwitchUIWidgetComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                       (System_Collections_Generic_List_object__o *)switchSkillInfo,
                                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( v37 )
      {
        SwitchUIWidgetComponent__Set(v37, (UIWidget_array *)switchSkillInfo, 0, 0);
        return;
      }
    }
LABEL_52:
    sub_2213CDC(switchSkillInfo, *(_QWORD *)&targetDisplaySkill);
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
          goto LABEL_31;
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
LABEL_31:
  switchSkillInfo = (SwitchUIWidgetComponent_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)switchSkillInfo,
                                                   0);
  if ( !switchSkillInfo )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewItemDraw__SetActiveForGrandSupport(
        FollowerSelectItemListViewItemDraw_o *this,
        bool isGrandSupport,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *grandPlayerProfileObj; // x0
  bool v6; // w20

  grandPlayerProfileObj = this->fields.grandPlayerProfileObj;
  if ( !grandPlayerProfileObj )
    sub_2213CDC(0, isGrandSupport);
  v6 = isGrandSupport;
  if ( UnityEngine_GameObject__get_activeSelf(grandPlayerProfileObj, 0) != isGrandSupport )
  {
    GameObjectHelper__SetActiveSafely(this->fields.svtProfileObj, !isGrandSupport, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.servantFaceIcon, !isGrandSupport, 0);
    GameObjectHelper__SetActiveSafely(this->fields.playerProfileObj, !isGrandSupport, 0);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.messageLabel, !isGrandSupport, 0);
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
  int max_length; // w12
  struct SkillInfo_array *v9; // x11
  __int64 v10; // x12
  int v11; // w9
  unsigned __int64 v12; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v14; // x14
  signed __int64 v15; // x22
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
LABEL_46:
    sub_2213CDC(this, item);
  }
  max_length = appendSkillIconList->max_length;
  if ( max_length < 1 )
  {
    v15 = 0;
  }
  else
  {
    v9 = *p_appendSkillInfoList;
    v10 = max_length & (unsigned int)~(max_length >> 31);
    v11 = 0;
    v12 = 0;
    do
    {
      if ( v9 )
      {
        max_length_low = LODWORD(v9->max_length);
        if ( (__int64)v12 < (int)max_length_low )
        {
          if ( v12 >= max_length_low )
LABEL_48:
            sub_2213CE4(this);
          v14 = (*p_appendSkillInfoList)->m_Items[v12];
          if ( v14 && v14->fields.id >= 1 )
            v11 = v12 + 1;
        }
      }
      ++v12;
    }
    while ( v10 != v12 );
    v15 = v11;
  }
  v16 = 4;
  while ( 1 )
  {
    v17 = v16 - 4;
    if ( v16 - 4 >= SLODWORD(appendSkillIconList->max_length) )
      break;
    if ( (__int64)v17 >= v15 )
    {
      appendSkillBaseList = v6->fields.appendSkillBaseList;
      if ( !appendSkillBaseList )
        goto LABEL_46;
      if ( v17 >= LODWORD(appendSkillBaseList->max_length) )
        goto LABEL_48;
      this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillBaseList->obj.klass + v16);
      if ( !this )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    else
    {
      v18 = *p_appendSkillInfoList;
      if ( !*p_appendSkillInfoList )
        goto LABEL_46;
      if ( v17 >= LODWORD(v18->max_length) )
        goto LABEL_48;
      v19 = v6->fields.appendSkillBaseList;
      if ( !v19 )
        goto LABEL_46;
      if ( v17 >= LODWORD(v19->max_length) )
        goto LABEL_48;
      this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v19->obj.klass + v16);
      if ( !this )
        goto LABEL_46;
      v20 = (int32_t *)*((_QWORD *)&v18->obj.klass + v16);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( !servantLeader )
        goto LABEL_46;
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(servantLeader, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v20 )
          v20[4] = 0;
        v21 = v6->fields.appendSkillIconList;
        if ( !v21 )
          goto LABEL_46;
        if ( v17 >= LODWORD(v21->max_length) )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v21->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0);
        appendSkillLevelIconLabelList = v6->fields.appendSkillLevelIconLabelList;
        if ( !appendSkillLevelIconLabelList )
          goto LABEL_46;
        if ( v17 >= LODWORD(appendSkillLevelIconLabelList->max_length) )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&appendSkillLevelIconLabelList->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        UIIconLabel__Clear((UIIconLabel_o *)this, 0);
      }
      else
      {
        v24 = v6->fields.appendSkillIconList;
        if ( !v24 )
          goto LABEL_46;
        if ( v17 >= LODWORD(v24->max_length) )
          goto LABEL_48;
        if ( !v20 )
          goto LABEL_46;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        SkillIconComponent__Set_48066780((SkillIconComponent_o *)this, v20[4], v20[5], v20[12], v20[13], 0);
        v25 = v6->fields.appendSkillLevelIconLabelList;
        if ( !v25 )
          goto LABEL_46;
        if ( v17 >= LODWORD(v25->max_length) )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        UIIconLabel__Set_48071660((UIIconLabel_o *)this, 48, v20[5], 0, 0, 0, 0, 0, 0, 0, 0);
      }
    }
    appendSkillIconList = v6->fields.appendSkillIconList;
    ++v16;
    if ( !appendSkillIconList )
      goto LABEL_46;
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerSelectItemListViewItemDraw__SetFriendPoint(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        bool isHideFriendPoint,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v6; // x19
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct FollowerInfo_o *followerInfo; // x9
  int type; // w9
  int32_t v10; // w21
  BalanceConfig_c *v11; // x0
  int32_t *p_FollowerPointNpc; // x8
  BalanceConfig_c *v13; // x0
  int v14; // w8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  bool HasFlag_49492572; // w8
  BalanceConfig_c *v17; // x0
  int32_t FriendPointUpVal; // w0
  struct EventCampaignEntity_o *friendPointCampaignEntity; // x8
  int v20; // w22
  int value; // w23
  __int64 v22; // x2
  FollowerSelectItemListViewItemDraw_o *v23; // x1
  int v24; // w8
  int v25; // w8
  FollowerSelectItemListViewItemDraw_o *friendPointData2Label; // x21
  int v27; // w23
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  __int64 v30; // x2
  UILabel_o *campaignLabel; // x21
  const MethodInfo *v32; // x1
  FollowerSelectItemListViewItemDraw_o *v33; // x1
  bool v34; // zf
  float v35; // s8
  float v36; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x0
  int v39; // w9
  int v40; // [xsp+1Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_596AF90 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_6750/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AF90 = 1;
  }
  if ( !item )
    goto LABEL_89;
  Option_k__BackingField = item->fields._Option_k__BackingField;
  if ( !Option_k__BackingField )
    goto LABEL_89;
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
    goto LABEL_89;
  }
  followerInfo = item->fields.followerInfo;
  if ( !followerInfo )
  {
    v10 = 0;
    goto LABEL_40;
  }
  type = followerInfo->fields.type;
  v10 = 0;
  if ( type > 2 )
  {
    if ( (unsigned int)(type - 3) < 2 )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, isHideFriendPoint);
        v11 = BalanceConfig_TypeInfo;
      }
      p_FollowerPointNpc = &v11->static_fields->FollowerPointNpc;
      goto LABEL_39;
    }
    if ( type != 5 )
      goto LABEL_40;
    if ( !item->fields._IsGrandSupport_k__BackingField )
    {
      v13 = BalanceConfig_TypeInfo;
      v14 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
      if ( item->fields._IsRecommendFollower_k__BackingField )
        goto LABEL_26;
      if ( !v14 )
        goto LABEL_81;
      goto LABEL_82;
    }
    goto LABEL_36;
  }
  if ( type == 1 )
  {
    questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_89;
      this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !this )
        goto LABEL_89;
      this = (FollowerSelectItemListViewItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                       questRestrictionInfo->fields.questId,
                                                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_89;
      HasFlag_49492572 = QuestEntity__HasFlag_49492572(
                           (QuestEntity_o *)this,
                           0x8000000,
                           questRestrictionInfo->fields.questPhase,
                           0);
    }
    else
    {
      HasFlag_49492572 = 0;
    }
    if ( !item->fields._IsGrandSupport_k__BackingField )
    {
      v13 = BalanceConfig_TypeInfo;
      v39 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
      if ( item->fields._IsRecommendFollower_k__BackingField )
      {
        if ( v39 )
          goto LABEL_28;
        goto LABEL_27;
      }
      if ( !HasFlag_49492572 )
      {
        if ( !v39 )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, isHideFriendPoint);
          v13 = BalanceConfig_TypeInfo;
        }
        p_FollowerPointNpc = &v13->static_fields->FollowerPointFriend;
        goto LABEL_39;
      }
      if ( !v39 )
      {
LABEL_81:
        j_il2cpp_runtime_class_init_0(v13, item, isHideFriendPoint);
        v13 = BalanceConfig_TypeInfo;
      }
LABEL_82:
      p_FollowerPointNpc = &v13->static_fields->FollowFriendPoint;
      goto LABEL_39;
    }
LABEL_36:
    v17 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, isHideFriendPoint);
      v17 = BalanceConfig_TypeInfo;
    }
    p_FollowerPointNpc = &v17->static_fields->FollowerPointGrand;
    goto LABEL_39;
  }
  if ( type != 2 )
    goto LABEL_40;
  if ( item->fields._IsGrandSupport_k__BackingField )
    goto LABEL_36;
  v13 = BalanceConfig_TypeInfo;
  v14 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( !item->fields._IsRecommendFollower_k__BackingField )
  {
    if ( !v14 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, isHideFriendPoint);
      v13 = BalanceConfig_TypeInfo;
    }
    p_FollowerPointNpc = &v13->static_fields->FollowerPointNotFriend;
    goto LABEL_39;
  }
LABEL_26:
  if ( !v14 )
  {
LABEL_27:
    j_il2cpp_runtime_class_init_0(v13, item, isHideFriendPoint);
    v13 = BalanceConfig_TypeInfo;
  }
LABEL_28:
  p_FollowerPointNpc = &v13->static_fields->FollowerPointRecommend;
LABEL_39:
  v10 = *p_FollowerPointNpc;
LABEL_40:
  FriendPointUpVal = FollowerSelectItemListViewItem__GetFriendPointUpVal(item, (const MethodInfo *)item);
  friendPointCampaignEntity = item->fields.friendPointCampaignEntity;
  v20 = FriendPointUpVal;
  if ( friendPointCampaignEntity )
    value = friendPointCampaignEntity->fields.value;
  else
    value = 0;
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointIconLabel;
  if ( !this )
    goto LABEL_89;
  UIIconLabel__Set_48071660((UIIconLabel_o *)this, 55, v10, 0, 0, 0, 0, 0, 0, 0, 0);
  if ( v20 > 0 || value >= 1 )
  {
    if ( value <= 0 )
      v24 = 1000;
    else
      v24 = value;
    v25 = v24 * v20 + (v24 - 1000) * v10;
    friendPointData2Label = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    v27 = v25 / 1000;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v22);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_6750/*"FOLLOWER_SELECT_TYPE_POINT_UP"*/, 0);
    v40 = v27;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v40);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v28, v29, 0);
    if ( !friendPointData2Label )
      goto LABEL_89;
    v23 = this;
    this = friendPointData2Label;
  }
  else
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
    if ( !this )
      goto LABEL_89;
    v23 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v23, 0);
  campaignLabel = v6->fields.campaignLabel;
  if ( item->fields.friendPointCampaignEntity )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItemDraw_TypeInfo;
    if ( !*(&FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, item, v30);
    if ( campaignLabel )
    {
      UILabel__set_gradientTop(
        campaignLabel,
        FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR,
        0);
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
                                                         v32);
        if ( campaignLabel )
        {
          v33 = this;
          goto LABEL_64;
        }
      }
    }
LABEL_89:
    sub_2213CDC(this, item);
  }
  if ( !campaignLabel )
    goto LABEL_89;
  v33 = (FollowerSelectItemListViewItemDraw_o *)StringLiteral_1/*""*/;
LABEL_64:
  UILabel__set_text(campaignLabel, (System_String_o *)v33, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  if ( !this )
    goto LABEL_89;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_89;
  v34 = !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.supportInfoButton;
  v35 = v34 ? 39.0 : -3.0;
  if ( !this )
    goto LABEL_89;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_89;
  v34 = !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointIconLabel;
  v36 = v34 ? 20.0 : -22.0;
  if ( !this )
    goto LABEL_89;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, v35, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.friendPointData2Label;
  if ( !this )
    goto LABEL_89;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v38, v36, 0);
}


void FollowerSelectItemListViewItemDraw__SetGrandServantEquip(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        ServantLeaderInfo_o *servantLeader,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItemDraw_o *v6; // x20
  UISprite_o *grandEquipHeaderSprite; // x21
  FollowerSelectItemListViewItemEquipDraw_o *grandSvtEquip2; // x21
  EquipTargetInfo_o *equipTarget2; // x22

  v6 = this;
  if ( (byte_596AF8D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21321/*"img_blankbg_02"*/);
    sub_2213A60(&StringLiteral_21369/*"img_equipface_grand"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_21322/*"img_blankbg_03"*/);
    byte_596AF8D = 1;
  }
  if ( !item )
    goto LABEL_13;
  if ( item->fields._IsGrandSupport_k__BackingField )
  {
    grandEquipHeaderSprite = v6->fields.grandEquipHeaderSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, servantLeader);
    this = (FollowerSelectItemListViewItemDraw_o *)AtlasManager__SetPartyOrganizationImage(
                                                     grandEquipHeaderSprite,
                                                     (System_String_o *)StringLiteral_21369/*"img_equipface_grand"*/,
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
          0);
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
            (System_String_o *)StringLiteral_21321/*"img_blankbg_02"*/,
            1,
            (int)this > 0,
            0);
          this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.grandSvtEquip3;
          if ( this )
          {
            FollowerSelectItemListViewItemEquipDraw__SetEquip(
              (FollowerSelectItemListViewItemEquipDraw_o *)this,
              servantLeader->fields.equipTarget3,
              (System_String_o *)StringLiteral_21322/*"img_blankbg_03"*/,
              0,
              0,
              0);
            return;
          }
        }
      }
    }
LABEL_13:
    sub_2213CDC(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  il2cpp_array_size_t max_length; // x23
  __int64 v12; // x25
  struct UICommonButton_array *v13; // x8
  Il2CppClass **v14; // x8
  UnityEngine_Behaviour_o *v15; // x21
  Il2CppObject *Component_object; // x22

  if ( (byte_596AF92 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF92 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( ((unsigned __int8)supportInfoButton & 1) != 0 )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))supportInfoButton->klass[1]._1.name)(
      supportInfoButton,
      1,
      supportInfoButton->klass[1]._1.namespaze);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))supportInfoButton->klass[1]._1.nestedTypes)(
      supportInfoButton,
      0,
      0,
      supportInfoButton->klass[1]._1.implementedInterfaces);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.baseButton;
    if ( !supportInfoButton )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(supportInfoButton, isInput, 0);
  }
  skillButtonList = this->fields.skillButtonList;
  if ( skillButtonList )
  {
    max_length = skillButtonList->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = this->fields.skillButtonList;
        if ( !v13 )
          break;
        if ( (unsigned int)v12 >= LODWORD(v13->max_length) )
          sub_2213CE4(supportInfoButton);
        v14 = &v13->obj.klass + v12;
        v15 = (UnityEngine_Behaviour_o *)v14[4];
        if ( !v15 )
          break;
        Component_object = UnityEngine_Component__GetComponent_object_(
                             (UnityEngine_Component_o *)v14[4],
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))v15->klass[1]._1.name)(
          v15,
          1,
          v15->klass[1]._1.namespaze);
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))v15->klass[1]._1.nestedTypes)(
          v15,
          0,
          0,
          v15->klass[1]._1.implementedInterfaces);
        UnityEngine_Behaviour__set_enabled(v15, isInput, 0);
        if ( !Component_object )
          break;
        UITouchPress__set_IsEnabled((UITouchPress_o *)Component_object, 1, 0);
        if ( (_DWORD)max_length == (_DWORD)++v12 )
          goto LABEL_18;
      }
LABEL_26:
      sub_2213CDC(supportInfoButton, v9);
    }
  }
LABEL_18:
  supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
  if ( !supportInfoButton )
    goto LABEL_26;
  supportInfoButton = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)supportInfoButton,
                                                   0);
  if ( !supportInfoButton )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)supportInfoButton, 0) )
  {
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))supportInfoButton->klass[1]._1.name)(
      supportInfoButton,
      1,
      supportInfoButton->klass[1]._1.namespaze);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))supportInfoButton->klass[1]._1.nestedTypes)(
      supportInfoButton,
      0,
      0,
      supportInfoButton->klass[1]._1.implementedInterfaces);
    supportInfoButton = (UnityEngine_Behaviour_o *)this->fields.supportInfoButton;
    if ( !supportInfoButton )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(supportInfoButton, isInput, 0);
  }
}


void FollowerSelectItemListViewItemDraw__SetItem(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        int32_t mode,
        int32_t targetDisplaySkill,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v7; // x20
  __int64 switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v12; // w9
  __int64 v13; // x2
  UnityEngine_Object_o *rangeSprite; // x23
  __int64 v15; // x2
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  __int64 v17; // x2
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  FollowerInfo_o *followerInfo; // x21
  System_String_o *FollowerBgImage; // x21
  int32_t Kind_47389084; // w0
  UISprite_o *baseSprite; // x23
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  ServantLeaderInfo_o *v33; // x21
  __int64 v34; // x23
  __int64 v35; // x24
  bool v36; // w8
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_Object_o *maskSprite; // x22
  __int64 v41; // x2
  _BOOL4 IsGrandSvt_k__BackingField; // w27
  UISprite_o *v43; // x22
  System_String_o *defaultMaskName; // x23
  UIAtlas_o *defaultMaskAtlas; // x24
  __int64 v46; // x2
  UIWidget_o *v47; // x22
  struct FollowerSelectItemListViewItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector2_o *p_GrandMaskPosition01; // x9
  __int64 v51; // x1
  __int64 v52; // x2
  UILabel_o *maskMessageLabel; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  char v56; // w27
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  __int64 v58; // x2
  __int64 v59; // x22
  __int64 v60; // x23
  __int64 v61; // x22
  __int64 v62; // x0
  __int64 v63; // x23
  int32_t v64; // w0
  int32_t v65; // w23
  int32_t v66; // w22
  QuestPhaseEntity_o *v67; // x0
  QuestPhaseEntity_o *v68; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x23
  __int64 v73; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x21
  UnityEngine_Object_o *numberOfUsabletimes; // x21
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x22
  int32_t eventId; // w21
  __int64 v79; // x1
  __int64 v80; // x2
  Il2CppObject *v81; // x22
  struct FollowerInfo_o *v82; // x8
  __int64 v83; // x1
  __int64 v84; // x2
  UILabel_o *warningMessageLabel; // x22
  float v86; // s0
  float v87; // s8
  UnityEngine_Transform_o *v88; // x22
  float warningMessageWidth; // s0
  struct FollowerInfo_o *v92; // x8
  int64_t v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  UsedCount_o *UsedCount; // x20
  BalanceConfig_c *v97; // x8
  int32_t MaxFriendChocolateUse; // w9
  UILabel_o *numberOfUsabletimesPrefixLabel; // x20
  UILabel_o *numberOfUsabletimesLabel; // x20
  UILabel_o *numberOfUsabletimesSuffixLabel; // x20
  __int64 v102; // x1
  __int64 v103; // x2
  int v104; // w8
  System_String_o *v105; // x0
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  unsigned __int128 v108; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Color_o color; // [xsp+18h] [xbp-78h] BYREF
  int32_t v110; // [xsp+2Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  v7 = item;
  if ( (byte_596AF8A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&FollowerRootComponent_TypeInfo);
    sub_2213A60(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_2213A60(&Grade_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_2213A60(&TitleInfoControl_TypeInfo);
    sub_2213A60(&StringLiteral_6729/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/);
    sub_2213A60(&StringLiteral_6730/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/);
    sub_2213A60(&StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_2213A60(&StringLiteral_6728/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/);
    sub_2213A60(&StringLiteral_6742/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/);
    sub_2213A60(&StringLiteral_6727/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_6731/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/);
    sub_2213A60(&StringLiteral_21426/*"img_listbg_02"*/);
    byte_596AF8A = 1;
  }
  switchSkillInfo = (__int64)this->fields.switchSkillInfo;
  entity = 0;
  v110 = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v108 = 0u;
  if ( switchSkillInfo )
    SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)switchSkillInfo, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_186;
  size = switchSkillUIList->fields._size;
  v12 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  switchSkillInfo = (__int64)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_186;
  (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  switchSkillInfo = (__int64)this->fields.appendSkillInfoUiWidget;
  if ( !switchSkillInfo )
    goto LABEL_186;
  (*(void (__fastcall **)(__int64, _QWORD, double))(*(_QWORD *)switchSkillInfo + 440LL))(
    switchSkillInfo,
    *(_QWORD *)(*(_QWORD *)switchSkillInfo + 448LL),
    0.0);
  if ( this->fields.warningMessageWidth < 0 )
  {
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_186;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v13);
  if ( UnityEngine_Object__op_Inequality(rangeSprite, 0, 0) )
  {
    switchSkillInfo = (__int64)this->fields.rangeSprite;
    if ( !switchSkillInfo )
      goto LABEL_186;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_186;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, mode == 0, 0);
  }
  if ( !mode )
    return;
  dataLostMaskSprite = (UnityEngine_Object_o *)this->fields.dataLostMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v15);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
  {
    switchSkillInfo = (__int64)this->fields.dataLostMaskSprite;
    if ( !switchSkillInfo )
      goto LABEL_186;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_186;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  }
  dataLostMaskMessageLabel = (UnityEngine_Object_o *)this->fields.dataLostMaskMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v17);
  if ( UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0, 0) )
  {
    switchSkillInfo = (__int64)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_186;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
    switchSkillInfo = (__int64)this->fields.dataLostMaskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_186;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_186;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  }
  FollowerSelectItemListViewItemDraw__SetActiveForGrandSupport(this, v7->fields._IsGrandSupport_k__BackingField, v19);
  followerInfo = v7->fields.followerInfo;
  if ( followerInfo && (unsigned int)(followerInfo->fields.type - 3) < 2 )
  {
    FollowerBgImage = (System_String_o *)StringLiteral_21426/*"img_listbg_02"*/;
  }
  else
  {
    if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v20, v21);
    Kind_47389084 = Grade__GetKind_47389084(followerInfo, 0);
    FollowerBgImage = Grade__GetFollowerBgImage(Kind_47389084, 0);
  }
  baseSprite = this->fields.baseSprite;
  if ( !*(&FollowerRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v20, v21);
  FollowerRootComponent__SetFollowerBase(baseSprite, FollowerBgImage, v21);
  FollowerSelectItemListViewItemDraw__SetupLockUI(this, v7, v26);
  FollowerSelectItemListViewItemDraw__SetPlayerInfo(this, v7, v27);
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v7, v28);
  v33 = ServantLeader;
  if ( ServantLeader )
  {
    v34 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    *(_QWORD *)&v112.fields.currentCryptoKey = v34;
    *(_QWORD *)&v112.fields.fakeValue = v35;
    v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v112, 0) > 0;
  }
  else
  {
    v36 = 0;
  }
  FollowerSelectItemListViewItemDraw__SetFriendPoint(this, v7, !v36, v32);
  FollowerSelectItemListViewItemDraw__SetServantInfo(this, v7, targetDisplaySkill, v37);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    IsGrandSvt_k__BackingField = v7->fields._IsGrandSvt_k__BackingField;
    v43 = this->fields.maskSprite;
    defaultMaskName = this->fields.defaultMaskName;
    defaultMaskAtlas = this->fields.defaultMaskAtlas;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, v41);
    switchSkillInfo = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                        IsGrandSvt_k__BackingField,
                        v43,
                        defaultMaskName,
                        defaultMaskAtlas,
                        0);
    v47 = (UIWidget_o *)this->fields.maskSprite;
    if ( (switchSkillInfo & 1) != 0 )
    {
      switchSkillInfo = (__int64)FollowerSelectItemListViewItemDraw_TypeInfo;
      if ( !*(&FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, item, v46);
      if ( !v47 )
        goto LABEL_186;
      UIWidget__set_width(v47, FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->GrandMaskWidth01, 0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_186;
      UIWidget__set_height(
        (UIWidget_o *)switchSkillInfo,
        FollowerSelectItemListViewItemDraw_TypeInfo->static_fields->GrandMaskHeight01,
        0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_186;
      switchSkillInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
      if ( !switchSkillInfo )
        goto LABEL_186;
      static_fields = FollowerSelectItemListViewItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition01.fields.y;
      p_GrandMaskPosition01 = &static_fields->GrandMaskPosition01;
    }
    else
    {
      if ( !v47 )
        goto LABEL_186;
      UIWidget__set_width((UIWidget_o *)this->fields.maskSprite, this->fields.defaultMaskWidth, 0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_186;
      UIWidget__set_height((UIWidget_o *)switchSkillInfo, this->fields.defaultMaskHeight, 0);
      switchSkillInfo = (__int64)this->fields.maskSprite;
      if ( !switchSkillInfo )
        goto LABEL_186;
      switchSkillInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
      if ( !switchSkillInfo )
        goto LABEL_186;
      p_y = &this->fields.defaultMaskPosition.fields.y;
      p_GrandMaskPosition01 = &this->fields.defaultMaskPosition;
    }
    v115.fields.z = 0.0;
    v115.fields.y = *p_y;
    v115.fields.x = p_GrandMaskPosition01->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)switchSkillInfo, v115, 0);
  }
  if ( v7->fields.isQuestRestriction || v7->fields._IsSlotRestriction_k__BackingField )
  {
    switchSkillInfo = (__int64)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_186;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_186;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
    maskMessageLabel = this->fields.maskMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
    switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6742/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING"*/, 0);
    if ( !maskMessageLabel )
      goto LABEL_186;
    UILabel__set_text(maskMessageLabel, (System_String_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_186;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
    switchSkillInfo = (__int64)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_186;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_186;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
LABEL_78:
    v56 = 1;
    goto LABEL_79;
  }
  if ( v7->fields.isUniqueSvtRestriction || v7->fields.isUniqueIndividualityRestriction )
  {
    switchSkillInfo = (__int64)this->fields.maskSprite;
    if ( !switchSkillInfo )
      goto LABEL_186;
    switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
    if ( !switchSkillInfo )
      goto LABEL_186;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
    switchSkillInfo = (__int64)this->fields.maskMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_186;
    UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
    switchSkillInfo = (__int64)this->fields.warningBase;
    if ( !switchSkillInfo )
      goto LABEL_186;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 1, 0);
    switchSkillInfo = (__int64)this->fields.warningIcon;
    if ( !switchSkillInfo )
      goto LABEL_186;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)switchSkillInfo, 0);
    warningMessageLabel = this->fields.warningMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v83, v84);
    switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
    if ( !warningMessageLabel )
      goto LABEL_186;
    UILabel__set_text(warningMessageLabel, (System_String_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_186;
    LODWORD(v86) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)switchSkillInfo, 0);
    switchSkillInfo = (__int64)this->fields.warningMessageLabel;
    if ( !switchSkillInfo )
      goto LABEL_186;
    v87 = v86;
    switchSkillInfo = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)switchSkillInfo, 0);
    v88 = (UnityEngine_Transform_o *)switchSkillInfo;
    warningMessageWidth = (float)this->fields.warningMessageWidth;
    if ( v87 <= warningMessageWidth )
    {
      if ( !byte_5969AE5 )
      {
        switchSkillInfo = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
    }
    else
    {
      oneVector.fields.x = warningMessageWidth / v87;
      oneVector.fields.z = 1.0;
      oneVector.fields.y = 1.0;
    }
    if ( !v88 )
      goto LABEL_186;
    UnityEngine_Transform__set_localScale(v88, oneVector, 0);
    goto LABEL_78;
  }
  switchSkillInfo = (__int64)this->fields.maskSprite;
  if ( !switchSkillInfo )
    goto LABEL_186;
  switchSkillInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)switchSkillInfo, 0);
  if ( !switchSkillInfo )
    goto LABEL_186;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  switchSkillInfo = (__int64)this->fields.maskMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_186;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  switchSkillInfo = (__int64)this->fields.warningBase;
  if ( !switchSkillInfo )
    goto LABEL_186;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, 0, 0);
  switchSkillInfo = (__int64)this->fields.warningIcon;
  if ( !switchSkillInfo )
    goto LABEL_186;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)switchSkillInfo, 0);
  switchSkillInfo = (__int64)this->fields.warningMessageLabel;
  if ( !switchSkillInfo )
    goto LABEL_186;
  UILabel__set_text((UILabel_o *)switchSkillInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  v56 = 0;
LABEL_79:
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0) )
  {
    if ( !v33 )
      goto LABEL_106;
    v59 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
    v60 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v58);
    *(_QWORD *)&v113.fields.currentCryptoKey = v59;
    *(_QWORD *)&v113.fields.fakeValue = v60;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v113, 0) < 1
      || (v56 & 1) != 0
      || ServantLeaderInfo__IsHideSupport(v33, 0)
      || v7->fields._IsDataLost_k__BackingField )
    {
      goto LABEL_106;
    }
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_186;
    if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)switchSkillInfo, 35, 0) )
      goto LABEL_106;
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_186;
    v61 = *(_QWORD *)(switchSkillInfo + 32);
    switchSkillInfo = sub_1FFEA10(v61, FollowerRootComponent_TypeInfo);
    if ( !switchSkillInfo )
      goto LABEL_186;
    v62 = sub_1FFEA10(v61, FollowerRootComponent_TypeInfo);
    v63 = *(_QWORD *)(v62 + 144);
    if ( !v63 )
      goto LABEL_106;
    v64 = BattleSetupInfo__TargetQuestId(*(BattleSetupInfo_o **)(v62 + 144), 0);
    if ( !v64 )
      goto LABEL_106;
    v65 = *(_DWORD *)(v63 + 24);
    if ( !v65 )
      goto LABEL_106;
    v66 = v64;
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_186;
    switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)switchSkillInfo,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !switchSkillInfo )
      goto LABEL_186;
    v67 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)switchSkillInfo, v66, v65, 0);
    if ( v67 )
    {
      v68 = v67;
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_186;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)switchSkillInfo,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
      v72 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
      v73 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
      v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v70, v71);
      *(_QWORD *)&v114.fields.currentCryptoKey = v72;
      *(_QWORD *)&v114.fields.fakeValue = v73;
      switchSkillInfo = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v114, 0);
      if ( !v74 )
        goto LABEL_186;
      switchSkillInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                   v74,
                                   switchSkillInfo,
                                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !switchSkillInfo || !this->fields.classCompatibilityIcon )
        goto LABEL_186;
      ServantClassCompatibilityIconComponent__SetIcon(
        this->fields.classCompatibilityIcon,
        *(_DWORD *)(switchSkillInfo + 80),
        v68->fields.classIds,
        2,
        0);
    }
    else
    {
LABEL_106:
      switchSkillInfo = (__int64)this->fields.classCompatibilityIcon;
      if ( !switchSkillInfo )
        goto LABEL_186;
      ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)switchSkillInfo, 0);
    }
  }
  numberOfUsabletimes = (UnityEngine_Object_o *)this->fields.numberOfUsabletimes;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v58);
  switchSkillInfo = UnityEngine_Object__op_Inequality(numberOfUsabletimes, 0, 0);
  if ( (switchSkillInfo & 1) != 0 )
  {
    Option_k__BackingField = v7->fields._Option_k__BackingField;
    if ( !Option_k__BackingField )
      goto LABEL_186;
    questRestrictionInfo = Option_k__BackingField->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      eventId = questRestrictionInfo->fields.eventId;
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_186;
      switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)switchSkillInfo,
                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      entity = 0;
      if ( !switchSkillInfo )
        goto LABEL_186;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)switchSkillInfo,
              &entity,
              questRestrictionInfo->fields.eventId,
              (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        goto LABEL_121;
      v81 = entity;
      if ( !*(&TitleInfoControl_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo, v79, v80);
      if ( TitleInfoControl__IsEnableEventShopButton_46934560((EventDetailEntity_o *)v81, 0) )
      {
        switchSkillInfo = (__int64)entity;
        if ( !entity )
          goto LABEL_186;
        LOBYTE(questRestrictionInfo) = EventDetailEntity__HasFlag((EventDetailEntity_o *)entity, 0x1000000000LL, 0);
      }
      else
      {
LABEL_121:
        LOBYTE(questRestrictionInfo) = 0;
      }
    }
    else
    {
      eventId = -1;
    }
    switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !switchSkillInfo )
      goto LABEL_186;
    if ( *(_BYTE *)(switchSkillInfo + 148) )
      goto LABEL_125;
    v82 = v7->fields.followerInfo;
    if ( v82 )
    {
      if ( ((unsigned __int8)questRestrictionInfo & ((unsigned int)(v82->fields.type - 5) < 0xFFFFFFFE)) == 1 )
        goto LABEL_147;
    }
    else if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
    {
LABEL_147:
      switchSkillInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !switchSkillInfo )
        goto LABEL_186;
      switchSkillInfo = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)switchSkillInfo,
                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBoostItemUsedMaster___);
      v92 = v7->fields.followerInfo;
      v93 = v92 ? v92->fields.userId : 0LL;
      if ( !switchSkillInfo )
        goto LABEL_186;
      UsedCount = EventBoostItemUsedMaster__GetUsedCount((EventBoostItemUsedMaster_o *)switchSkillInfo, eventId, v93, 0);
      v97 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v94, v95);
        v97 = BalanceConfig_TypeInfo;
      }
      MaxFriendChocolateUse = v97->static_fields->MaxFriendChocolateUse;
      v110 = MaxFriendChocolateUse;
      if ( UsedCount )
      {
        if ( !*(&v97->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v97, v94, v95);
          MaxFriendChocolateUse = BalanceConfig_TypeInfo->static_fields->MaxFriendChocolateUse;
        }
        v110 = MaxFriendChocolateUse - UsedCount->fields.count;
      }
      numberOfUsabletimesPrefixLabel = this->fields.numberOfUsabletimesPrefixLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v94, v95);
      switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6729/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_PREFIX_TEXT"*/, 0);
      if ( !numberOfUsabletimesPrefixLabel )
        goto LABEL_186;
      UILabel__set_text(numberOfUsabletimesPrefixLabel, (System_String_o *)switchSkillInfo, 0);
      numberOfUsabletimesLabel = this->fields.numberOfUsabletimesLabel;
      switchSkillInfo = (__int64)System_Int32__ToString((int32_t)&v110, 0);
      if ( !numberOfUsabletimesLabel )
        goto LABEL_186;
      UILabel__set_text(numberOfUsabletimesLabel, (System_String_o *)switchSkillInfo, 0);
      numberOfUsabletimesSuffixLabel = this->fields.numberOfUsabletimesSuffixLabel;
      switchSkillInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6730/*"FOLLOWER_SELECT_FRIEND_CHOCO_REMAINING_COUNT_SUFFIX_TEXT"*/, 0);
      if ( !numberOfUsabletimesSuffixLabel )
        goto LABEL_186;
      UILabel__set_text(numberOfUsabletimesSuffixLabel, (System_String_o *)switchSkillInfo, 0);
      v104 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( v110 )
      {
        if ( !v104 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102, v103);
        v105 = LocalizationManager__Get((System_String_o *)StringLiteral_6727/*"FOLLOWER_SELECT_FRIEND_CHOCO_AVAILABLE_COLOR"*/, 0);
        UnityEngine_ColorUtility__TryParseHtmlString(v105, &color, 0);
        v106 = LocalizationManager__Get((System_String_o *)StringLiteral_6728/*"FOLLOWER_SELECT_FRIEND_CHOCO_DEFAULT_COLOR"*/, 0);
        UnityEngine_ColorUtility__TryParseHtmlString(v106, (UnityEngine_Color_o *)&v108, 0);
      }
      else
      {
        if ( !v104 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102, v103);
        v107 = LocalizationManager__Get((System_String_o *)StringLiteral_6731/*"FOLLOWER_SELECT_FRIEND_CHOCO_UNAVAILABLE_COLOR"*/, 0);
        UnityEngine_ColorUtility__TryParseHtmlString(v107, &color, 0);
        switchSkillInfo = (__int64)this->fields.friendChocolateSprite;
        if ( !switchSkillInfo )
          goto LABEL_186;
        UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0);
        v108 = (unsigned __int128)color;
      }
      switchSkillInfo = (__int64)this->fields.numberOfUsabletimesSprite;
      if ( !switchSkillInfo )
        goto LABEL_186;
      UIWidget__set_color((UIWidget_o *)switchSkillInfo, color, 0);
      switchSkillInfo = (__int64)this->fields.friendChocolateSprite;
      if ( !switchSkillInfo )
        goto LABEL_186;
      UIWidget__set_color((UIWidget_o *)switchSkillInfo, (UnityEngine_Color_o)v108, 0);
      item = (FollowerSelectItemListViewItem_o *)(&dword_0 + 1);
      goto LABEL_126;
    }
LABEL_125:
    item = 0;
LABEL_126:
    switchSkillInfo = (__int64)this->fields.numberOfUsabletimes;
    if ( switchSkillInfo )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)switchSkillInfo, (bool)item, 0);
      return;
    }
LABEL_186:
    sub_2213CDC(switchSkillInfo, item);
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
  const MethodInfo *v16; // x2
  int32_t strengthStatus; // w23
  __int64 v18; // x2
  struct FollowerInfo_o *followerInfo; // x8
  System_String_o *v20; // x0
  System_String_o *v21; // x1
  System_String_o *v22; // x24
  System_String_o *v23; // x24
  System_String_o *v24; // x0
  System_String_o *name; // x27
  TreasureDvcInfo_o *v26; // x25
  Il2CppObject *Master_object; // x25
  System_String_o *OverwriteTDName; // x24
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o **v32; // x8
  System_String_o *v33; // x25
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // [xsp+0h] [xbp-60h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+8h] [xbp-58h] BYREF

  v10 = this;
  if ( (byte_596AF8C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9741/*"NP_DISABLE_COLOR_NAME"*/);
    sub_2213A60(&StringLiteral_9742/*"NP_HIDE_NAME"*/);
    sub_2213A60(&StringLiteral_9743/*"NP_HIDE_NAME_LEVEL"*/);
    sub_2213A60(&StringLiteral_9747/*"NP_MAX_COLOR_NAME"*/);
    sub_2213A60(&StringLiteral_9740/*"NP_COLOR_NAME"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AF8C = 1;
  }
  v36 = 0;
  tdInfo = 0;
  if ( !item )
    goto LABEL_55;
  v11 = 96;
  if ( item->fields._IsGrandSupport_k__BackingField )
  {
    v11 = 600;
    v12 = 592;
  }
  else
  {
    v12 = 88;
  }
  if ( !servantLeader )
    goto LABEL_55;
  v13 = *(UIRangeLabel_o **)((char *)&v10->klass + v12);
  v14 = *(UnityEngine_Object_o **)((char *)&v10->klass + v11);
  DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                    servantLeader,
                                                    0);
  this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getTreasureDeviceInfo(servantLeader, &tdInfo, -1, 0);
  if ( !tdInfo )
    goto LABEL_55;
  if ( isHideSupport
    || (strengthStatus = tdInfo->fields.strengthStatus, ServantLeaderInfo__IsNotUsedTreasureDeice(servantLeader, 0)) )
  {
    strengthStatus = 0;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__TryGetSupportSelectOverwriteTreasureDeviceName(
                                                   item,
                                                   &v36,
                                                   v16);
  followerInfo = item->fields.followerInfo;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !followerInfo || followerInfo->fields.type != 4 )
    {
      v23 = v36;
      goto LABEL_45;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v18);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_9741/*"NP_DISABLE_COLOR_NAME"*/, 0);
    v21 = v36;
  }
  else if ( followerInfo && followerInfo->fields.type == 4 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v18);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9741/*"NP_DISABLE_COLOR_NAME"*/, 0);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9742/*"NP_HIDE_NAME"*/, 0);
    v20 = v22;
  }
  else
  {
    if ( isHideSupport )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v18);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9743/*"NP_HIDE_NAME_LEVEL"*/, 0);
      goto LABEL_44;
    }
    if ( !tdInfo )
      goto LABEL_55;
    name = tdInfo->fields.name;
    if ( isNpc && NpcServantFollowerEntity__IsHideTreasureDeviceLv(servantLeader->fields.npcFlag, 0) )
    {
      v26 = tdInfo;
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__GetServantId(servantLeader, -1, 0);
      if ( !v26 )
        goto LABEL_55;
      name = TreasureDvcInfo__GetName(v26, (int32_t)this, 0);
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v18);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__GetServantId(servantLeader, -1, 0);
    if ( !tdInfo || !Master_object )
LABEL_55:
      sub_2213CDC(this, item);
    OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                        (ServantLimitAddMaster_o *)Master_object,
                        (int32_t)this,
                        DispLimitCountStageSealAfterAtStageLimitCount,
                        name,
                        tdInfo->fields.lv,
                        0);
    if ( FollowerSelectItemListViewItem__GetTreasureDeviceLevelIcon(item, v29) <= 1 )
      v32 = (System_String_o **)&StringLiteral_9740/*"NP_COLOR_NAME"*/;
    else
      v32 = (System_String_o **)&StringLiteral_9747/*"NP_MAX_COLOR_NAME"*/;
    v33 = *v32;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
    v20 = LocalizationManager__Get(v33, 0);
    v21 = OverwriteTDName;
  }
  v24 = System_String__Format(v20, (Il2CppObject *)v21, 0);
LABEL_44:
  v23 = v24;
LABEL_45:
  this = (FollowerSelectItemListViewItemDraw_o *)StrengthStatus__GetIconName(strengthStatus, 0);
  if ( !v13 )
    goto LABEL_55;
  UIRangeLabel__Set(v13, v23, (System_String_o *)this, 0, 0, item->fields._IsGrandSupport_k__BackingField, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
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
      goto LABEL_55;
    }
    if ( !v14 )
      goto LABEL_55;
    ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)v14, tdInfo, 0);
  }
}


void FollowerSelectItemListViewItemDraw__SetPlayerInfo(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v3; // x19
  FollowerSelectItemListViewItemDraw_o *v4; // x20
  struct FollowerInfo_o *followerInfo; // x8
  UILabel_o *grandPlayerNameLabel; // x22
  UIIconLabel_o *grandPlayerLevelIconLabel; // x24
  UnityEngine_Behaviour_o *grandSvtProfileBackSpr; // x23
  UserGradeComponent_o *grandGradeIcon; // x21
  UISprite_o *grandPlayerBaseLineSprite; // x25
  struct FollowerInfo_o *v11; // x8
  struct FollowerInfo_o *v12; // x8
  System_String_o **v13; // x8
  struct FollowerInfo_o *v14; // x8
  int32_t userLv; // w2
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *loginDataLabel; // x24
  System_String_o *v19; // x25
  int64_t v20; // x0
  Il2CppObject *v21; // x0
  float v22; // s0
  float monitor_low; // s8
  float v24; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s10
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *Component_object; // x23
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  FollowerInfo_o *v34; // x22
  int32_t Kind_47389084; // w0
  struct FollowerInfo_o *v36; // x8
  int32_t type; // w8
  __int64 *v38; // x8
  System_String_o *v39; // x21
  __int64 v40; // x2
  UnityEngine_Object_o *recommendedIcon; // x21
  __int64 v42; // x2
  UnityEngine_Object_o *recommendedIconText; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  UILabel_o *v46; // x21
  UnityEngine_Object_o *recommendedUser; // x21

  v3 = item;
  v4 = this;
  if ( (byte_596AF8E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
    sub_2213A60(&Grade_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13949/*"TIME_BEFORE_TITLE_COLOR"*/);
    sub_2213A60(&StringLiteral_21222/*"icon_support_01"*/);
    sub_2213A60(&StringLiteral_21432/*"img_listbg_svtprof_grand"*/);
    sub_2213A60(&StringLiteral_6744/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_21431/*"img_listbg_line_grand"*/);
    sub_2213A60(&StringLiteral_21177/*"icon_friend"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_21176/*"icon_follow"*/);
    byte_596AF8E = 1;
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
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, method);
    AtlasManager__SetPartyOrganizationImage(grandPlayerBaseLineSprite, (System_String_o *)StringLiteral_21431/*"img_listbg_line_grand"*/, 0);
    AtlasManager__SetPartyOrganizationImage(
      v4->fields.grandSvtProfileBackSpr,
      (System_String_o *)StringLiteral_21432/*"img_listbg_svtprof_grand"*/,
      0);
  }
  else
  {
    grandPlayerNameLabel = v4->fields.playerNameLabel;
    grandPlayerLevelIconLabel = v4->fields.playerLevelIconLabel;
    grandSvtProfileBackSpr = (UnityEngine_Behaviour_o *)v4->fields.svtProfileBackSpr;
    grandGradeIcon = v4->fields.gradeIcon;
  }
  FollowerSelectItemListViewItemDraw__SetPlayerMessage(v4, v3, method);
  v11 = v3->fields.followerInfo;
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
    item = 0;
    if ( !grandSvtProfileBackSpr )
      goto LABEL_84;
  }
  else
  {
    if ( (byte_596AF82 & 1) == 0 )
    {
      this = (FollowerSelectItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_19957/*"error"*/);
      byte_596AF82 = 1;
    }
    if ( !grandPlayerNameLabel )
      goto LABEL_84;
    v12 = v3->fields.followerInfo;
    v13 = v12 ? &v12->fields.userName : (System_String_o **)&StringLiteral_19957/*"error"*/;
    UILabel__set_text(grandPlayerNameLabel, *v13, 0);
    v14 = v3->fields.followerInfo;
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
    UIIconLabel__Set_48071660(grandPlayerLevelIconLabel, 2, userLv, 0, 0, 0, 0, 0, 0, 0, 0);
    loginDataLabel = v4->fields.loginDataLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13949/*"TIME_BEFORE_TITLE_COLOR"*/, 0);
    v20 = v3->fields.followerInfo ? FollowerInfo__getUpdatedAt(v3->fields.followerInfo, 0) : 0LL;
    v21 = (Il2CppObject *)LocalizationManager__GetBeforeTime(v20, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v19, v21, 0);
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
      !v3->fields._IsRecommendFollower_k__BackingField,
      0);
    if ( !grandSvtProfileBackSpr )
      goto LABEL_84;
    LOBYTE(item) = 1;
  }
  UnityEngine_Behaviour__set_enabled(grandSvtProfileBackSpr, (bool)item, 0);
  LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize(grandPlayerNameLabel, 0);
  if ( !grandGradeIcon )
    goto LABEL_84;
  monitor_low = v22;
  LODWORD(v24) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize(grandGradeIcon, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)grandPlayerNameLabel,
                                                   0);
  if ( !this )
    goto LABEL_84;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CondensedScaleLabel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_84;
    CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0);
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandPlayerNameLabel, 0);
    if ( GameObjectExtensions__GetLocalScaleX(v30, 0) < 1.0 )
      monitor_low = (float)SLODWORD(Component_object[3].monitor);
  }
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)grandGradeIcon, 0);
  GameObjectExtensions__SetLocalPositionX(v31, (float)(v24 * 0.5) + (float)(LocalPositionX + monitor_low), 0);
  v34 = v3->fields.followerInfo;
  if ( !*(&Grade_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v32, v33);
  Kind_47389084 = Grade__GetKind_47389084(v34, 0);
  UserGradeComponent__Set(grandGradeIcon, Kind_47389084, 0);
  v36 = v3->fields.followerInfo;
  if ( !v36 )
    goto LABEL_55;
  type = v36->fields.type;
  if ( (unsigned int)(type - 3) < 2 )
  {
    v38 = &StringLiteral_21222/*"icon_support_01"*/;
    goto LABEL_58;
  }
  if ( type == 5 )
  {
    v38 = &StringLiteral_21176/*"icon_follow"*/;
    goto LABEL_58;
  }
  if ( type != 1 )
  {
LABEL_55:
    v39 = 0;
    goto LABEL_59;
  }
  v38 = &StringLiteral_21177/*"icon_friend"*/;
LABEL_58:
  v39 = (System_String_o *)*v38;
LABEL_59:
  this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
  if ( !this )
    goto LABEL_84;
  UISprite__set_spriteName((UISprite_o *)this, v39, 0);
  if ( !System_String__IsNullOrEmpty(v39, 0) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.typeTextSprite;
    if ( !this )
      goto LABEL_84;
    ((void (__fastcall *)(FollowerSelectItemListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
      this,
      this->klass[2]._1.generic_class);
  }
  recommendedIcon = (UnityEngine_Object_o *)v4->fields.recommendedIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v40);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isRecommended, 0);
  }
  recommendedIconText = (UnityEngine_Object_o *)v4->fields.recommendedIconText;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v42);
  if ( !UnityEngine_Object__op_Inequality(recommendedIconText, 0, 0) )
    goto LABEL_78;
  v46 = v4->fields.recommendedIconText;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6744/*"FOLLOWER_SELECT_RECOMMENDED_TEXT"*/, 0);
  if ( !v46
    || (UILabel__set_text(v46, (System_String_o *)this, 0),
        (this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedIconText) == 0)
    || (this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0)) == 0 )
  {
LABEL_84:
    sub_2213CDC(this, item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.isRecommended, 0);
LABEL_78:
  recommendedUser = (UnityEngine_Object_o *)v4->fields.recommendedUser;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
  if ( UnityEngine_Object__op_Inequality(recommendedUser, 0, 0) )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)v4->fields.recommendedUser;
    if ( !this )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)this,
      v3->fields._isRecommendedUser_k__BackingField,
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
  UnityEngine_Component_o *v13; // x23
  UnityEngine_Component_o *v14; // x19
  struct FollowerInfo_o *followerInfo; // x8
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x8
  UserRecommendSupportInfo_o *v17; // x8
  struct System_Int32_array *adviceMessageIds; // x8
  struct FollowerInfo_o *v19; // x8
  struct UserRecommendSupportInfo_array *v20; // x8
  UserRecommendSupportInfo_o *v21; // x8
  System_String_array *ConvertMessageToId; // x0
  System_String_o *v23; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0
  bool v26; // w1
  int v27; // w8
  int type; // w9
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UILabel_o *v31; // x0
  System_String_o *message; // x1
  float v33; // s8
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x2
  UnityEngine_GameObject_o *v36; // x0
  struct FollowerInfo_o *v37; // x8

  v4 = this;
  if ( (byte_596AF8F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_113/*" "*/);
    byte_596AF8F = 1;
  }
  if ( !item )
    goto LABEL_59;
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
      goto LABEL_59;
    userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
    if ( !userRecommendSupportHash )
      goto LABEL_59;
    if ( !LODWORD(userRecommendSupportHash->max_length) )
      goto LABEL_60;
    v17 = userRecommendSupportHash->m_Items[0];
    if ( !v17 )
      goto LABEL_59;
    adviceMessageIds = v17->fields.adviceMessageIds;
    if ( !adviceMessageIds )
      goto LABEL_59;
    if ( !adviceMessageIds->max_length )
      goto LABEL_22;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, method);
    this = (FollowerSelectItemListViewItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    v19 = item->fields.followerInfo;
    if ( !v19 )
      goto LABEL_59;
    v20 = v19->fields.userRecommendSupportHash;
    if ( !v20 )
      goto LABEL_59;
    if ( !LODWORD(v20->max_length) )
LABEL_60:
      sub_2213CE4(this);
    v21 = v20->m_Items[0];
    if ( !v21 || !this )
      goto LABEL_59;
    ConvertMessageToId = RecommendAdviceMessageMaster__GetConvertMessageToId(
                           (RecommendAdviceMessageMaster_o *)this,
                           v21->fields.adviceMessageIds,
                           0);
    v23 = System_String__Join((System_String_o *)StringLiteral_113/*" "*/, ConvertMessageToId, 0);
    this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v23, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_22:
      if ( !v13 )
        goto LABEL_59;
      gameObject = UnityEngine_Component__get_gameObject(v13, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, -19.0, 0);
      if ( !v12 )
        goto LABEL_59;
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
      if ( !this )
        goto LABEL_59;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( !v10 )
        goto LABEL_59;
      v25 = v10;
      v26 = 1;
LABEL_27:
      UnityEngine_GameObject__SetActive(v25, v26, 0);
      GameObjectExtensions__SetLocalPositionY(v10, -11.0, 0);
      GameObjectExtensions__SetLocalPositionY(v11, 10.0, 0);
      if ( v14 )
      {
        v27 = 1113849856;
LABEL_44:
        v33 = *(float *)&v27;
        v34 = UnityEngine_Component__get_gameObject(v14, 0);
        GameObjectExtensions__SetLocalPositionY(v34, v33, 0);
        return;
      }
      goto LABEL_59;
    }
    if ( !v13 )
      goto LABEL_59;
    v30 = UnityEngine_Component__get_gameObject(v13, 0);
    GameObjectExtensions__SetLocalPositionY(v30, -19.0, 0);
    if ( !v12 )
      goto LABEL_59;
    v31 = (UILabel_o *)v12;
    message = v23;
LABEL_40:
    UILabel__set_text(v31, message, 0);
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
          v27 = 1112801280;
          goto LABEL_44;
        }
      }
    }
LABEL_59:
    sub_2213CDC(this, item);
  }
  if ( followerInfo )
  {
    type = followerInfo->fields.type;
    if ( type <= 2 )
    {
      if ( type == 1 )
      {
        this = (FollowerSelectItemListViewItemDraw_o *)System_String__IsNullOrEmpty(followerInfo->fields.message, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_22;
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, item, v35);
        this = (FollowerSelectItemListViewItemDraw_o *)OptionManager__GetMessageDisp(0);
        if ( ((unsigned __int8)this & 1) == 0 || !item->fields.isMessageDisp )
          goto LABEL_22;
        if ( !v13 )
          goto LABEL_59;
        v36 = UnityEngine_Component__get_gameObject(v13, 0);
        GameObjectExtensions__SetLocalPositionY(v36, -19.0, 0);
        v37 = item->fields.followerInfo;
        if ( !v37 || !v12 )
          goto LABEL_59;
        message = v37->fields.message;
        v31 = (UILabel_o *)v12;
        goto LABEL_40;
      }
      if ( type == 2 )
        goto LABEL_22;
    }
    else
    {
      if ( (unsigned int)(type - 3) < 2 )
      {
        if ( !v13 )
          goto LABEL_59;
        v29 = UnityEngine_Component__get_gameObject(v13, 0);
        GameObjectExtensions__SetLocalPositionY(v29, -16.0, 0);
        if ( !v12 )
          goto LABEL_59;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v12, 0);
        if ( !this )
          goto LABEL_59;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !v10 )
          goto LABEL_59;
        v25 = v10;
        v26 = 0;
        goto LABEL_27;
      }
      if ( type == 5 )
        goto LABEL_22;
    }
  }
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
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  ServantLeaderInfo_o *v10; // x21
  __int64 v11; // x23
  __int64 v12; // x24
  bool IsNpc; // w24
  struct FollowerInfo_o *followerInfo; // x8
  __int64 v15; // x9
  __int64 v16; // x10
  ServantFaceIconComponent_o *v17; // x26
  char v18; // w23
  UIRangeLabel_o *v19; // x25
  const MethodInfo *v20; // x3
  bool v21; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  UIRangeLabel_o *svtNameRangeLabel; // x20
  UIRangeLabel_o *svtNpRangeLabel; // x20
  ServantNpCommandCardComponent_o *svtNpCommandCard; // x0
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct SkillIconComponent_array *v35; // x8
  __int64 v36; // x21
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct SkillIconComponent_array *v46; // x8
  __int64 v47; // x20
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  ServantCommandCardListComponent_o *v49; // x0
  UnityEngine_Component_o *v50; // x0
  const MethodInfo *v51; // x1
  __int64 v52; // x2
  const MethodInfo *v53; // x5
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *eventUpValIcon; // x24
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x1
  __int64 v60; // x2
  struct UICommonButton_o *baseButton; // x24
  struct ServantFaceIconComponent_o *servantFaceIcon; // x25
  const MethodInfo *v63; // x1
  __int64 v64; // x1
  __int64 v65; // x2
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x26
  FollowerSelectItemListViewItemDraw___c_c *v67; // x8
  struct FollowerSelectItemListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__103_0; // x27
  Il2CppObject *v70; // x28
  struct FollowerSelectItemListViewItemDraw___c_StaticFields *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  FollowerSelectItemListViewItemDraw_o *v79; // x2
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  __int64 v83; // x2
  UnityEngine_Object_o *svtCommandCardList; // x22
  __int64 v85; // x2
  ServantCommandCardListComponent_o *v86; // x22
  __int64 v87; // x23
  __int64 v88; // x24
  int32_t v89; // w23
  int32_t ServantId; // w0
  System_Int32_array *commandCardParam; // x24
  int32_t v92; // w25
  UnityEngine_Object_o *pushSprite; // x22
  __int64 v94; // x2
  struct FollowerInfo_o *v95; // x8
  int64_t pushUserSvtId; // x8
  bool v97; // w21
  UnityEngine_Object_o *dataLostMaskSprite; // x21
  __int64 v99; // x1
  const MethodInfo *v100; // x2
  UnityEngine_Object_o *dataLostMaskMessageLabel; // x21
  __int64 v102; // x1
  UISprite_o *v103; // x21
  UISprite_o *v104; // x21
  __int64 v105; // x1
  __int64 v106; // x2
  UILabel_o *v107; // x21
  System_String_o *v108; // x22
  Il2CppObject *v109; // x0
  int32_t Rarity; // [xsp+14h] [xbp-6Ch]
  int32_t v111; // [xsp+18h] [xbp-68h]
  int32_t TimesToRestart_k__BackingField; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = item;
  v6 = this;
  if ( (byte_596AF8B & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_EquipTargetInfo__int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&SkillInfo___TypeInfo);
    sub_2213A60(&Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__103_0__);
    sub_2213A60(&FollowerSelectItemListViewItemDraw___c_TypeInfo);
    sub_2213A60(&StringLiteral_3846/*"COMMON_NO_ENTRY"*/);
    sub_2213A60(&StringLiteral_12159/*"SERVANT_HIDE_NAME"*/);
    sub_2213A60(&StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_2213A60(&StringLiteral_21378/*"img_frames_mask01"*/);
    sub_2213A60(&StringLiteral_19315/*"datalost_svt_select"*/);
    this = (FollowerSelectItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_9710/*"NO_ENTRY_NAME"*/);
    byte_596AF8B = 1;
  }
  if ( !v5 )
    goto LABEL_45;
  ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(v5, (const MethodInfo *)item);
  if ( ServantLeader )
  {
    v10 = ServantLeader;
    v11 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    *(_QWORD *)&v113.fields.currentCryptoKey = v11;
    *(_QWORD *)&v113.fields.fakeValue = v12;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v113, 0) >= 1 )
    {
      IsNpc = ServantLeaderInfo__IsNpc(v10, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(v10, 0);
      followerInfo = v5->fields.followerInfo;
      v15 = 80;
      if ( v5->fields._IsGrandSupport_k__BackingField )
      {
        v15 = 584;
        v16 = 520;
      }
      else
      {
        v16 = 56;
      }
      if ( !followerInfo )
        goto LABEL_45;
      v17 = *(ServantFaceIconComponent_o **)((char *)&v6->klass + v16);
      if ( !v17 )
        goto LABEL_45;
      v18 = (char)this;
      v19 = *(UIRangeLabel_o **)((char *)&v6->klass + v15);
      ServantFaceIconComponent__Set_48053420(
        *(ServantFaceIconComponent_o **)((char *)&v6->klass + v16),
        v10,
        v5->fields.iconLabelInfo1,
        v5->fields.iconLabelInfo2,
        0,
        followerInfo->fields.imageSvtId,
        0,
        0,
        0);
      if ( v5->fields._IsGrandSupport_k__BackingField )
        FollowerSelectItemListViewItemDraw__SetGrandServantEquip(v6, v5, v10, v20);
      v21 = !IsNpc || !NpcServantFollowerEntity__IsHideRarity(v10->fields.npcFlag, 0);
      ServantFaceIconComponent__SetDispRaritySprite(v17, v21, 0);
      ServantFaceIconComponent__SetDispClassSprite(v17, !v5->fields._IsDataLost_k__BackingField, 0);
      if ( (v18 & 1) != 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
        this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12159/*"SERVANT_HIDE_NAME"*/,
                                                         0);
      }
      else
      {
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_SvtNameText(v5, v51);
      }
      item = (FollowerSelectItemListViewItem_o *)this;
      if ( !v19 )
        goto LABEL_45;
      UIRangeLabel__Set(v19, (System_String_o *)this, 0, 1, 0, 0, 0);
      FollowerSelectItemListViewItemDraw__SetNPInfo(v6, v5, v10, IsNpc, v18 & 1, v53);
      eventUpValIcon = (UnityEngine_Object_o *)v6->fields.eventUpValIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
      if ( UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0) )
      {
        if ( FollowerSelectItemListViewItem__get_ServantLeader(v5, v57) )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, v59);
          if ( !this )
            goto LABEL_45;
          baseButton = this->fields.baseButton;
          servantFaceIcon = this->fields.servantFaceIcon;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v60);
          *(_QWORD *)&v114.fields.currentCryptoKey = baseButton;
          *(_QWORD *)&v114.fields.fakeValue = servantFaceIcon;
          v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v114, 0);
          this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, v63);
          if ( !this )
            goto LABEL_45;
          Rarity = ServantLeaderInfo__getRarity((ServantLeaderInfo_o *)this, 0);
        }
        else
        {
          Rarity = -1;
          v111 = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_ServantLeader(v5, v59);
        if ( !this )
          goto LABEL_45;
        EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList((ServantLeaderInfo_o *)this, 0);
        v67 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        if ( !*(&FollowerSelectItemListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw___c_TypeInfo, v64, v65);
          v67 = FollowerSelectItemListViewItemDraw___c_TypeInfo;
        }
        static_fields = v67->static_fields;
        _9__103_0 = (System_Func_object__int__o *)static_fields->__9__103_0;
        if ( !_9__103_0 )
        {
          if ( !*(&v67->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v67, v64, v65);
            static_fields = FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields;
          }
          v70 = (Il2CppObject *)static_fields->__9;
          _9__103_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EquipTargetInfo__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__103_0,
            v70,
            Method_FollowerSelectItemListViewItemDraw___c__SetServantInfo_b__103_0__,
            0);
          v71 = FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields;
          v71->__9__103_0 = (struct System_Func_EquipTargetInfo__int__o *)_9__103_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v71->__9__103_0,
            (int32_t)_9__103_0,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
        }
        v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList,
                                                                     (System_Func_TSource__TResult__o *)_9__103_0,
                                                                     (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__int___);
        this = (FollowerSelectItemListViewItemDraw_o *)System_Linq_Enumerable__ToArray_int_(
                                                         v78,
                                                         (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( !this )
          goto LABEL_45;
        v79 = this;
        if ( !this->fields.m_CancellationTokenSource )
        {
          this = (FollowerSelectItemListViewItemDraw_o *)sub_2213B20(int___TypeInfo, 1);
          if ( !this )
            goto LABEL_45;
          v79 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_131:
            sub_2213CE4(this);
          LODWORD(this->fields.rangeSprite) = -1;
        }
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
        if ( !this )
LABEL_45:
          sub_2213CDC(this, item);
        EventUpValIconComponent__Set_47847584(
          (EventUpValIconComponent_o *)this,
          v5->fields.eventUpValItemList,
          (System_Int32_array *)v79,
          v111,
          Rarity,
          0);
      }
      FollowerSelectItemListViewItemDraw__SetSkillIconInfo(v6, v5, v10, v58);
      FollowerSelectItemListViewItemDraw__SetAppendSkillIconInfo(v6, v5, v10, v80);
      FollowerSelectItemListViewItemDraw__ChangeDisplaySkill(v6, targetDisplaySkill, v5, v81);
      svtCommandCardList = (UnityEngine_Object_o *)v6->fields.svtCommandCardList;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v82, v83);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v86 = v6->fields.svtCommandCardList;
        if ( (v18 & 1) != 0 )
        {
          if ( !v86 )
            goto LABEL_45;
          ServantCommandCardListComponent__SetHide(v6->fields.svtCommandCardList, 0);
        }
        else
        {
          v87 = *(_QWORD *)&v10->fields.svtId.fields.currentCryptoKey;
          v88 = *(_QWORD *)&v10->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, v85);
          *(_QWORD *)&v115.fields.currentCryptoKey = v87;
          *(_QWORD *)&v115.fields.fakeValue = v88;
          v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v115, 0);
          ServantId = ServantLeaderInfo__GetServantId(v10, -1, 0);
          commandCardParam = v10->fields.commandCardParam;
          v92 = ServantId;
          this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__getCommandCodeIdList(v10, 0);
          if ( !v86 )
            goto LABEL_45;
          ServantCommandCardListComponent__Set_48038284(
            v86,
            v89,
            v92,
            commandCardParam,
            (System_Int32_array *)this,
            2,
            1,
            0);
        }
      }
      pushSprite = (UnityEngine_Object_o *)v6->fields.pushSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v85);
      this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(pushSprite, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v95 = v5->fields.followerInfo;
        if ( !v95 )
          goto LABEL_45;
        pushUserSvtId = v95->fields.pushUserSvtId;
        v97 = pushUserSvtId && pushUserSvtId == v10->fields.userSvtId;
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.pushSprite;
        if ( !this )
          goto LABEL_45;
        this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_45;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v97, 0);
      }
      dataLostMaskSprite = (UnityEngine_Object_o *)v6->fields.dataLostMaskSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v94);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskSprite, 0, 0) )
        goto LABEL_129;
      dataLostMaskMessageLabel = (UnityEngine_Object_o *)v6->fields.dataLostMaskMessageLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99, v100);
      if ( !UnityEngine_Object__op_Inequality(dataLostMaskMessageLabel, 0, 0) )
        goto LABEL_129;
      if ( v5->fields._IsDataLost_k__BackingField )
      {
        v103 = v6->fields.dataLostMaskSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v102, v100);
        AtlasManager__SetPartyOrganizationImage(v103, (System_String_o *)StringLiteral_19315/*"datalost_svt_select"*/, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_45;
        v116.fields.r = 1.0;
        v116.fields.g = 1.0;
        v116.fields.b = 1.0;
        v116.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v116, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( !this )
          goto LABEL_45;
        goto LABEL_127;
      }
      if ( v5->fields._TimesToRestart_k__BackingField < 1 )
      {
LABEL_129:
        FollowerSelectItemListViewItemDraw__SetUpOpenClassScoreNumButton(v6, v5, v100);
        return;
      }
      v104 = v6->fields.dataLostMaskSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v102, v100);
      AtlasManager__SetCommon(v104, 0);
      this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21378/*"img_frames_mask01"*/, 0);
        this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.dataLostMaskSprite;
        if ( this )
        {
          v117.fields.r = 0.0;
          v117.fields.g = 0.0;
          v117.fields.b = 0.0;
          v117.fields.a = 0.62353;
          UIWidget__set_color((UIWidget_o *)this, v117, 0);
          v107 = v6->fields.dataLostMaskMessageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v105, v106);
          v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
          TimesToRestart_k__BackingField = v5->fields._TimesToRestart_k__BackingField;
          v109 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &TimesToRestart_k__BackingField);
          this = (FollowerSelectItemListViewItemDraw_o *)System_String__Format(v108, v109, 0);
          if ( v107 )
          {
            UILabel__set_text(v107, (System_String_o *)this, 0);
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
LABEL_127:
                  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0);
                  if ( !this )
                    goto LABEL_45;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  goto LABEL_129;
                }
              }
            }
          }
        }
      }
      goto LABEL_45;
    }
  }
  this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__get_EquipInfo(v5, v8);
  if ( !v6->fields.servantFaceIcon )
    goto LABEL_45;
  ServantFaceIconComponent__SetEquipDangling(v6->fields.servantFaceIcon, (EquipTargetInfo_o *)this, 0);
  svtNameRangeLabel = v6->fields.svtNameRangeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3846/*"COMMON_NO_ENTRY"*/, 0);
  if ( !svtNameRangeLabel )
    goto LABEL_45;
  UIRangeLabel__Set(svtNameRangeLabel, (System_String_o *)this, 0, 1, 0, 0, 0);
  svtNpRangeLabel = v6->fields.svtNpRangeLabel;
  this = (FollowerSelectItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9710/*"NO_ENTRY_NAME"*/, 0);
  if ( !svtNpRangeLabel )
    goto LABEL_45;
  UIRangeLabel__Set(svtNpRangeLabel, (System_String_o *)this, 0, 1, 0, 0, 0);
  svtNpCommandCard = v6->fields.svtNpCommandCard;
  if ( svtNpCommandCard )
    ServantNpCommandCardComponent__Clear(svtNpCommandCard, 0);
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.eventUpValIcon;
  if ( this )
    EventUpValIconComponent__Clear((EventUpValIconComponent_o *)this, 0);
  skillIconList = v6->fields.skillIconList;
  if ( !skillIconList )
    goto LABEL_45;
  v28 = sub_2213B20(SkillInfo___TypeInfo, LODWORD(skillIconList->max_length));
  v6->fields.skillInfoList = (struct SkillInfo_array *)v28;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.skillInfoList, v28, v29, v30, v31, v32, v33, v34);
  v35 = v6->fields.skillIconList;
  if ( !v35 )
    goto LABEL_45;
  v36 = 0;
  while ( (int)v36 < SLODWORD(v35->max_length) )
  {
    skillBaseList = v6->fields.skillBaseList;
    if ( !skillBaseList )
      goto LABEL_45;
    if ( (unsigned int)v36 >= LODWORD(skillBaseList->max_length) )
      goto LABEL_131;
    this = (FollowerSelectItemListViewItemDraw_o *)skillBaseList->m_Items[v36];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v35 = v6->fields.skillIconList;
      ++v36;
      if ( v35 )
        continue;
    }
    goto LABEL_45;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.skillInfoUiWidget;
  if ( !this )
    goto LABEL_45;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  appendSkillIconList = v6->fields.appendSkillIconList;
  if ( !appendSkillIconList )
    goto LABEL_45;
  v39 = sub_2213B20(SkillInfo___TypeInfo, LODWORD(appendSkillIconList->max_length));
  v6->fields.appendSkillInfoList = (struct SkillInfo_array *)v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.appendSkillInfoList, v39, v40, v41, v42, v43, v44, v45);
  v46 = v6->fields.appendSkillIconList;
  if ( !v46 )
    goto LABEL_45;
  v47 = 0;
  while ( (int)v47 < SLODWORD(v46->max_length) )
  {
    appendSkillBaseList = v6->fields.appendSkillBaseList;
    if ( !appendSkillBaseList )
      goto LABEL_45;
    if ( (unsigned int)v47 >= LODWORD(appendSkillBaseList->max_length) )
      goto LABEL_131;
    this = (FollowerSelectItemListViewItemDraw_o *)appendSkillBaseList->m_Items[v47];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v46 = v6->fields.appendSkillIconList;
      ++v47;
      if ( v46 )
        continue;
    }
    goto LABEL_45;
  }
  this = (FollowerSelectItemListViewItemDraw_o *)v6->fields.appendSkillInfoUiWidget;
  if ( !this )
    goto LABEL_45;
  this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v49 = v6->fields.svtCommandCardList;
  if ( v49 )
    ServantCommandCardListComponent__Clear(v49, 0);
  v50 = (UnityEngine_Component_o *)v6->fields.pushSprite;
  if ( v50 )
  {
    this = (FollowerSelectItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v50, 0);
    if ( !this )
      goto LABEL_45;
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
  int max_length; // w12
  struct SkillInfo_array *v9; // x11
  __int64 v10; // x12
  int v11; // w9
  unsigned __int64 v12; // x10
  unsigned __int64 max_length_low; // x14
  SkillInfo_o *v14; // x14
  signed __int64 v15; // x22
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

  if ( !item
    || (p_skillInfoList = &this->fields.skillInfoList,
        v5 = this,
        this = (FollowerSelectItemListViewItemDraw_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                         item,
                                                         &this->fields.skillInfoList,
                                                         (const MethodInfo *)servantLeader),
        (skillIconList = v5->fields.skillIconList) == 0) )
  {
LABEL_46:
    sub_2213CDC(this, item);
  }
  max_length = skillIconList->max_length;
  if ( max_length < 1 )
  {
    v15 = 0;
  }
  else
  {
    v9 = *p_skillInfoList;
    v10 = max_length & (unsigned int)~(max_length >> 31);
    v11 = 0;
    v12 = 0;
    do
    {
      if ( !v9 )
        goto LABEL_46;
      max_length_low = LODWORD(v9->max_length);
      if ( (__int64)v12 < (int)max_length_low )
      {
        if ( v12 >= max_length_low )
LABEL_48:
          sub_2213CE4(this);
        v14 = (*p_skillInfoList)->m_Items[v12];
        if ( v14 && v14->fields.id >= 1 )
          v11 = v12 + 1;
      }
      ++v12;
    }
    while ( v10 != v12 );
    v15 = v11;
  }
  v16 = 4;
  while ( 1 )
  {
    v17 = v16 - 4;
    if ( v16 - 4 >= SLODWORD(skillIconList->max_length) )
      break;
    if ( (__int64)v17 >= v15 )
    {
      skillBaseList = v5->fields.skillBaseList;
      if ( !skillBaseList )
        goto LABEL_46;
      if ( v17 >= LODWORD(skillBaseList->max_length) )
        goto LABEL_48;
      this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillBaseList->obj.klass + v16);
      if ( !this )
        goto LABEL_46;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    else
    {
      v18 = *p_skillInfoList;
      if ( !*p_skillInfoList )
        goto LABEL_46;
      if ( v17 >= LODWORD(v18->max_length) )
        goto LABEL_48;
      v19 = v5->fields.skillBaseList;
      if ( !v19 )
        goto LABEL_46;
      if ( v17 >= LODWORD(v19->max_length) )
        goto LABEL_48;
      this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v19->obj.klass + v16);
      if ( !this )
        goto LABEL_46;
      v20 = (int32_t *)*((_QWORD *)&v18->obj.klass + v16);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( !servantLeader )
        goto LABEL_46;
      this = (FollowerSelectItemListViewItemDraw_o *)ServantLeaderInfo__IsHideSupport(servantLeader, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v20 )
          v20[4] = 0;
        v21 = v5->fields.skillIconList;
        if ( !v21 )
          goto LABEL_46;
        if ( v17 >= LODWORD(v21->max_length) )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v21->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        SkillIconComponent__SetHide((SkillIconComponent_o *)this, 0);
        skillLevelIconLabelList = v5->fields.skillLevelIconLabelList;
        if ( !skillLevelIconLabelList )
          goto LABEL_46;
        if ( v17 >= LODWORD(skillLevelIconLabelList->max_length) )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        UIIconLabel__Clear((UIIconLabel_o *)this, 0);
      }
      else
      {
        v24 = v5->fields.skillIconList;
        if ( !v24 )
          goto LABEL_46;
        if ( v17 >= LODWORD(v24->max_length) )
          goto LABEL_48;
        if ( !v20 )
          goto LABEL_46;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v24->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        SkillIconComponent__Set_48066780((SkillIconComponent_o *)this, v20[4], v20[5], v20[12], v20[13], 0);
        v25 = v5->fields.skillLevelIconLabelList;
        if ( !v25 )
          goto LABEL_46;
        if ( v17 >= LODWORD(v25->max_length) )
          goto LABEL_48;
        this = (FollowerSelectItemListViewItemDraw_o *)*((_QWORD *)&v25->obj.klass + v16);
        if ( !this )
          goto LABEL_46;
        UIIconLabel__Set_48071660((UIIconLabel_o *)this, 48, v20[5], 0, 0, 0, 0, 0, 0, 0, 0);
      }
    }
    skillIconList = v5->fields.skillIconList;
    ++v16;
    if ( !skillIconList )
      goto LABEL_46;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *classBoardOpenButtonLabel; // x21
  int v15; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *v18; // x21
  FollowerSelectItemListViewItemDraw_c *v19; // x8
  float *p_CLASS_BOARD_NOT_LABEL_POS_Y; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  FollowerSelectItemListViewItemDraw_c *v23; // x8
  UISprite_o *classBoardBackSprite; // x21
  UnityEngine_Object_o *openClassBoardNumLabel; // x21
  Il2CppObject **v26; // x9
  Il2CppObject *v27; // x21
  Il2CppObject *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  int32_t openGrandClassBoardNum; // w8
  Il2CppObject **v31; // x9
  Il2CppObject *v32; // x20
  Il2CppObject *v33; // x0
  struct UILabel_o *v34; // x20
  System_String_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *Component_object; // x19
  int32_t v39; // [xsp+8h] [xbp-48h] BYREF
  int32_t openClassBoardNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596AF94 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_2213A60(&FollowerSelectItemListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6674/*"FFFFFF"*/);
    sub_2213A60(&StringLiteral_18217/*"btn_bg_29_2"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_13012/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_2213A60(&StringLiteral_13013/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/);
    sub_2213A60(&StringLiteral_6673/*"FFFF00"*/);
    sub_2213A60(&StringLiteral_16650/*"[{0}]+{1}[-]"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AF94 = 1;
  }
  classBoardOpenButton = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(classBoardOpenButton, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !item )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( !item->fields._IsReleasedClassBoard_k__BackingField )
    {
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          return;
        }
      }
      goto LABEL_61;
    }
    if ( !gameObject )
      goto LABEL_61;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButton;
    if ( !gameObject )
      goto LABEL_61;
    UICommonButton__SetButtonEnable((UICommonButton_o *)gameObject, item->fields.openClassBoardNum >= 0, 1, 0);
    v11 = (UnityEngine_Object_o *)this->fields.classBoardOpenButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
    {
      classBoardOpenButtonLabel = this->fields.classBoardOpenButtonLabel;
      v15 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( item->fields.openClassBoardNum < 0 )
      {
        if ( !v15 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13013/*"SUPPORT_CLASS_BOARD_EFFECT_NOT_BUTTON"*/, 0);
        if ( !classBoardOpenButtonLabel )
          goto LABEL_61;
        UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
        if ( !gameObject )
          goto LABEL_61;
        v18 = UnityEngine_Component__get_gameObject(gameObject, 0);
        v23 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !*(&FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, v21, v22);
          v23 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        p_CLASS_BOARD_NOT_LABEL_POS_Y = &v23->static_fields->CLASS_BOARD_NOT_LABEL_POS_Y;
      }
      else
      {
        if ( !v15 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
        gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13012/*"SUPPORT_CLASS_BOARD_EFFECT_DISP_BUTTON"*/, 0);
        if ( !classBoardOpenButtonLabel )
          goto LABEL_61;
        UILabel__set_text(classBoardOpenButtonLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.classBoardOpenButtonLabel;
        if ( !gameObject )
          goto LABEL_61;
        v18 = UnityEngine_Component__get_gameObject(gameObject, 0);
        v19 = FollowerSelectItemListViewItemDraw_TypeInfo;
        if ( !*(&FollowerSelectItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewItemDraw_TypeInfo, v16, v17);
          v19 = FollowerSelectItemListViewItemDraw_TypeInfo;
        }
        p_CLASS_BOARD_NOT_LABEL_POS_Y = &v19->static_fields->CLASS_BOARD_NORMAL_LABEL_POS_Y;
      }
      GameObjectExtensions__SetLocalPositionY(v18, *p_CLASS_BOARD_NOT_LABEL_POS_Y, 0);
    }
    classBoardBackSprite = this->fields.classBoardBackSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
    AtlasManager__SetDownloadCommonSprite(classBoardBackSprite, (System_String_o *)StringLiteral_18217/*"btn_bg_29_2"*/, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.classBoardBackSprite;
    if ( !gameObject )
      goto LABEL_61;
    ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
      gameObject,
      gameObject->klass[2]._1.generic_class);
  }
  openClassBoardNumLabel = (UnityEngine_Object_o *)this->fields.openClassBoardNumLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !item )
      goto LABEL_61;
    if ( item->fields.openClassBoardNum < 0 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
      if ( gameObject )
      {
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        return;
      }
      goto LABEL_61;
    }
    if ( item->fields.isMaxOpenClassBoard )
      v26 = (Il2CppObject **)&StringLiteral_6673/*"FFFF00"*/;
    else
      v26 = (Il2CppObject **)&StringLiteral_6674/*"FFFFFF"*/;
    v27 = *v26;
    openClassBoardNum = item->fields.openClassBoardNum;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &openClassBoardNum);
    gameObject = (UnityEngine_Component_o *)System_String__Format_75697880(
                                              (System_String_o *)StringLiteral_16650/*"[{0}]+{1}[-]"*/,
                                              v27,
                                              v28,
                                              0);
    if ( !this->fields.openClassBoardNumLabel )
      goto LABEL_61;
    UILabel__set_text(this->fields.openClassBoardNumLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel;
    if ( !gameObject )
      goto LABEL_61;
    v29 = UnityEngine_Component__get_gameObject(gameObject, 0);
    GameObjectExtensions__SetLocalScale_42893524(v29, 1.0, 0);
    openGrandClassBoardNum = item->fields.openGrandClassBoardNum;
    if ( openGrandClassBoardNum < 0 )
      return;
    v31 = item->fields.isMaxOpenGrandClassBoard
        ? (Il2CppObject **)&StringLiteral_6673/*"FFFF00"*/
        : (Il2CppObject **)&StringLiteral_6674/*"FFFFFF"*/;
    v32 = *v31;
    v39 = openGrandClassBoardNum;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
    gameObject = (UnityEngine_Component_o *)System_String__Format_75697880(
                                              (System_String_o *)StringLiteral_16650/*"[{0}]+{1}[-]"*/,
                                              v32,
                                              v33,
                                              0);
    v34 = this->fields.openClassBoardNumLabel;
    if ( !v34
      || (v35 = System_String__Concat_75694928(
                  v34->fields.mText,
                  (System_String_o *)StringLiteral_1123/*"/"*/,
                  (System_String_o *)gameObject,
                  0),
          UILabel__set_text(v34, v35, 0),
          (gameObject = (UnityEngine_Component_o *)this->fields.openClassBoardNumLabel) == 0) )
    {
LABEL_61:
      sub_2213CDC(gameObject, v7);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
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
      goto LABEL_61;
    }
  }
}


void FollowerSelectItemListViewItemDraw__SetupLockUI(
        FollowerSelectItemListViewItemDraw_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  FollowerSelectItemListViewItem_o *v3; // x20
  UnityEngine_Object_o *lockMarkSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  v3 = item;
  if ( (byte_596AF91 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AF91 = 1;
  }
  if ( v3 )
    LOBYTE(v3) = v3->fields.isLockUser;
  lockMarkSprite = (UnityEngine_Object_o *)this->fields.lockMarkSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  if ( UnityEngine_Object__op_Inequality(lockMarkSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.lockMarkSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (bool)v3, 0);
  }
}


void FollowerSelectItemListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AF99 & 1) == 0 )
  {
    sub_2213A60(&FollowerSelectItemListViewItemDraw___c_TypeInfo);
    byte_596AF99 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(FollowerSelectItemListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct FollowerSelectItemListViewItemDraw___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)FollowerSelectItemListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_596AF9A & 1) == 0 )
  {
    this = (FollowerSelectItemListViewItemDraw___c_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596AF9A = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  v5 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
}