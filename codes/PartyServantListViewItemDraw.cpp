void PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyServantListViewItemDraw_c *v1; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4C52A7C & 1) == 0 )
  {
    sub_1C3E564(&PartyServantListViewItemDraw_TypeInfo);
    byte_4C52A7C = 1;
  }
  v1 = PartyServantListViewItemDraw_TypeInfo;
  static_fields = PartyServantListViewItemDraw_TypeInfo->static_fields;
  static_fields->BUDDY_INFO_BASE_POS.fields.z = 0.0;
  *(_QWORD *)&static_fields->BUDDY_INFO_WIDTH_DEFAULT = 0x5E000000C8LL;
  *(_QWORD *)&static_fields->BUDDY_INFO_BASE_POS.fields.x = 1112014848;
  v1->static_fields->DATA_LOST_MASK_HEIGHT = 154;
}


void PartyServantListViewItemDraw___ctor(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.SwitchPartyWavePartyLabelScale.fields.z = 1.0;
  *(_QWORD *)&this->fields.SwitchPartyWavePartyLabelScale.fields.x = 0x3F8000003F666666LL;
  *(_QWORD *)&this->fields.DefaultWavePartyLabelFontSize = 0x1700000018LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PartyServantListViewItemDraw__Awake(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *maskMessageLabel; // x0
  struct UILabel_o *warningMessageLabel; // x8
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UISprite_o *v14; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UISprite_o *v18; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v20; // x8

  if ( (byte_4C52A72 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52A72 = 1;
  }
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_14;
  warningMessageLabel = this->fields.warningMessageLabel;
  this->fields.maskMessageWidth = maskMessageLabel->fields.mWidth;
  if ( !warningMessageLabel )
    goto LABEL_14;
  this->fields.warningMessageWidth = warningMessageLabel->fields.mWidth;
  UIWidget__set_width((UIWidget_o *)maskMessageLabel, 1000, 0);
  maskMessageLabel = this->fields.warningMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)maskMessageLabel, 1000, 0);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.switchInfoList, (int32_t)v8, v9, v10);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v14 = this->fields.maskSprite;
    if ( v14 )
    {
      mSpriteName = v14->fields.mSpriteName;
      this->fields.maskSpriteDefaultName = mSpriteName;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultName, (int32_t)mSpriteName, v12, v13);
      v18 = this->fields.maskSprite;
      if ( v18 )
      {
        mAtlas = v18->fields.mAtlas;
        this->fields.maskSpriteDefaultAtlas = mAtlas;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v16, v17);
        v20 = this->fields.maskSprite;
        if ( v20 )
        {
          this->fields.maskSpriteDefaultHeight = v20->fields.mHeight;
          return;
        }
      }
    }
LABEL_14:
    sub_1C3E7C0(maskMessageLabel, method);
  }
}


void PartyServantListViewItemDraw__ClearMessage(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_4C52A77 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52A77 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_13;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon) == 0)
    || (FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel) == 0)
    || (UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.messageLabel) == 0) )
  {
LABEL_13:
    sub_1C3E7C0(maskSprite, method);
  }
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)maskSprite, 0);
}


void PartyServantListViewItemDraw__SetClassCompatibilityIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  void *userServantEntity; // x0
  PartyOrganizationRootComponent_c *v9; // x1
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x8
  ServantClassCompatibilityIconComponent_o *v12; // x20
  struct PartyOrganizationListViewItem_o *v13; // x8
  System_Int32_array *v14; // x2
  __int64 naturalAligment; // x9
  __int64 v16; // x22
  int32_t v17; // w22
  int32_t v18; // w21
  void *v19; // x21
  PartyServantListViewItemDraw_o *v20; // x0
  System_String_o *v21; // x1
  bool v22; // w2
  System_String_o *v23; // x3
  bool v24; // w4
  const MethodInfo *v25; // x5

  if ( (byte_4C52A76 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C52A76 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  userServantEntity = (void *)UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0);
  if ( ((unsigned __int8)userServantEntity & 1) != 0 )
  {
    if ( isClear )
    {
      userServantEntity = this->fields.classCompatibilityIcon;
      if ( !userServantEntity )
        goto LABEL_38;
      goto LABEL_37;
    }
    if ( !item )
      goto LABEL_38;
    baseItem = item->fields.baseItem;
    if ( !baseItem )
      goto LABEL_38;
    WaveEnemyClassIds_k__BackingField = baseItem->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && WaveEnemyClassIds_k__BackingField->max_length )
    {
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity )
      {
        v12 = this->fields.classCompatibilityIcon;
        userServantEntity = (void *)UserServantEntity__getSvtClassId((UserServantEntity_o *)userServantEntity, 0, 0, 0);
        v13 = item->fields.baseItem;
        if ( v13 )
        {
          if ( v12 )
          {
            v14 = v13->fields._WaveEnemyClassIds_k__BackingField;
LABEL_18:
            ServantClassCompatibilityIconComponent__SetIcon(v12, (int32_t)userServantEntity, v14, 1, 0);
            return;
          }
        }
      }
      goto LABEL_38;
    }
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0);
    if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      goto LABEL_34;
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)*((_QWORD *)userServantEntity + 4);
    if ( !userServantEntity )
      goto LABEL_38;
    v9 = PartyOrganizationRootComponent_TypeInfo;
    naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 304LL) >= (unsigned int)naturalAligment
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL)
                                              + 8 * naturalAligment
                                              - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v16 = *((_QWORD *)userServantEntity + 64);
      if ( v16 )
      {
        userServantEntity = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 64), 0);
        if ( (_DWORD)userServantEntity )
        {
          v17 = *(_DWORD *)(v16 + 24);
          if ( v17 )
          {
            v18 = (int)userServantEntity;
            userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = DataManager__GetMasterData_object_(
                                  (DataManager_o *)userServantEntity,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)userServantEntity, v18, v17, 0);
            v12 = this->fields.classCompatibilityIcon;
            if ( userServantEntity )
            {
              v19 = userServantEntity;
              userServantEntity = item->fields.userServantEntity;
              if ( userServantEntity )
              {
                userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                              (UserServantEntity_o *)userServantEntity,
                                              0,
                                              0,
                                              0);
                if ( v12 )
                {
                  v14 = (System_Int32_array *)*((_QWORD *)v19 + 6);
                  goto LABEL_18;
                }
              }
LABEL_38:
              sub_1C3E7C0(userServantEntity, v9);
            }
LABEL_35:
            if ( !v12 )
              goto LABEL_38;
            userServantEntity = v12;
LABEL_37:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)userServantEntity,
              0);
            return;
          }
        }
      }
LABEL_34:
      v12 = this->fields.classCompatibilityIcon;
      goto LABEL_35;
    }
    v20 = (PartyServantListViewItemDraw_o *)sub_1C3EA80(userServantEntity);
    PartyServantListViewItemDraw__SetMaskMessage(v20, v21, v22, v23, v24, v25);
  }
}


void PartyServantListViewItemDraw__SetDispClassIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  bool v3; // w1

  if ( !item )
    goto LABEL_11;
  if ( item->fields._IsDataLost_k__BackingField
    && !item->fields.isLockMode
    && !item->fields.isSelectMode
    && !item->fields.isPushMode )
  {
    this = (PartyServantListViewItemDraw_o *)this->fields.servantFaceIcon;
    if ( this )
    {
      v3 = 0;
      goto LABEL_8;
    }
LABEL_11:
    sub_1C3E7C0(this, item);
  }
  this = (PartyServantListViewItemDraw_o *)this->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_11;
  v3 = 1;
LABEL_8:
  ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, v3, 0);
}


void PartyServantListViewItemDraw__SetFatigueMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v3; // x20
  PartyServantListViewItemDraw_o *v4; // x19
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v7; // x3
  UILabel_o *maskFatigureMessageLabel; // x22
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v10; // x8
  System_String_o *v11; // x23
  System_String_o *v12; // x0
  int32_t v13; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v15; // s0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4C52A7B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11544/*"SELECT_NO_SORTIE_FATIGURE"*/);
    sub_1C3E564(&StringLiteral_20416/*"img_frames_mask04"*/);
    sub_1C3E564(&StringLiteral_11550/*"SELECT_NO_SORTIE_TITLE"*/);
    sub_1C3E564(&StringLiteral_11546/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/);
    sub_1C3E564(&StringLiteral_406/*"#042484"*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52A7B = 1;
  }
  *(_QWORD *)&value.fields.r = 0;
  *(_QWORD *)&value.fields.b = 0;
  if ( !v3 )
    goto LABEL_41;
  fatigureTime = v3->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1, 0);
  if ( System_String__IsNullOrEmpty(RestTime4, 0) )
  {
    v3->fields.fatigureTime = -1;
    PartyServantListViewItemDraw__ClearMessage(v4, (const MethodInfo *)item);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v4, v3, 0, v7);
    return;
  }
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_41;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_41;
  UISprite__set_atlas((UISprite_o *)this, v4->fields.maskSpriteDefaultAtlas, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_41;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20416/*"img_frames_mask04"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_406/*"#042484"*/, &value, 0);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_41;
  v23.fields.g = value.fields.g;
  v23.fields.b = value.fields.b;
  v23.fields.r = value.fields.r;
  v23.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v23, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_41;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)this,
    v4->fields.maskSprite,
    (System_String_o *)StringLiteral_20416/*"img_frames_mask04"*/,
    v4->fields.maskSpriteDefaultAtlas,
    0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningBase;
  if ( !this )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningIcon;
  if ( !this )
    goto LABEL_41;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningMessageLabel;
  if ( !this )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskMessageLabel;
  if ( !this )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskFatigureMessageLabel = v4->fields.maskFatigureMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11550/*"SELECT_NO_SORTIE_TITLE"*/, 0);
  if ( !maskFatigureMessageLabel )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v10 = (System_String_o **)&StringLiteral_11546/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v10 = (System_String_o **)&StringLiteral_11544/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v11 = *v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get(v11, 0);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v12, (Il2CppObject *)RestTime4, 0);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  v13 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v13, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v15 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v15, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        m_CachedPtr = this->fields.m_CachedPtr,
        v19 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_41:
    sub_1C3E7C0(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v21 + 32) = item;
    sub_1C3E508((CGThumbnailListItem_o *)(v21 + 32), (int32_t)item, v16, v17);
  }
}


void PartyServantListViewItemDraw__SetInput(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v15; // x2
  bool v16; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v18; // w21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4C52A7A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C52A7A = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_42;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_42;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_42;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_42;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_42;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_42;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_42;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_42;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_42;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0);
    }
    v16 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v15);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    v18 = v16;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
      goto LABEL_40;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
LABEL_40:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v19);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v18, v20);
      return;
    }
LABEL_42:
    sub_1C3E7C0(Component_object, v8);
  }
}


void PartyServantListViewItemDraw__SetItem(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v5; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int64_t baseItem; // x0
  char isChangeFriendShipSvtEquipSkill; // w8
  _BOOL4 isBase; // w26
  PartyOrganizationListViewItem_o *v11; // x8
  struct UserServantEntity_o *userServantEntity; // x9
  int32_t EquipFriendShipSkillChange_k__BackingField; // w23
  System_Int64_array *equipIdList; // x22
  __int128 v15; // q1
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q0
  int v18; // w25
  bool v19; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v21; // w24
  const MethodInfo *v22; // x1
  Il2CppObject *Master_object; // x24
  const MethodInfo *v24; // x1
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  UserServantGrandEntity_o *v27; // x24
  __int64 v28; // x22
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v35; // x2
  bool v36; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v38; // w21
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v43; // w9
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v51; // x0
  System_String_o *v52; // x21
  System_String_o *v53; // x0
  UILabel_o *v54; // x21
  Il2CppObject *v55; // x22
  System_String_o *v56; // x23
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x6
  __int64 v62; // x7
  Il2CppObject *v63; // x0
  float y; // s8
  float z; // s9
  unsigned int v66; // s0
  float v67; // s10
  float v68; // s0
  UIWidget_o *v69; // x21
  float v70; // s11
  float v71; // s0
  int32_t v72; // w1
  unsigned int localScale; // s0
  float v74; // s12
  UISprite_o *svtPointIconSprite; // x21
  __int64 v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  __int64 v79; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  QuestRestrictionInfo_o *v81; // x0
  struct UILabel_o *wavePartyLabel; // x20
  System_String_o *v83; // x1
  UILabel_o *v84; // x0
  struct UILabel_o *v85; // x21
  System_String_o *v86; // x22
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x5
  __int64 v91; // x6
  __int64 v92; // x7
  Il2CppObject *v93; // x23
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x5
  __int64 v98; // x6
  __int64 v99; // x7
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  int32_t OrganizedWave_k__BackingField; // w8
  System_String_o *v103; // x20
  Il2CppObject *v104; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+70h] [xbp-A0h] BYREF
  int32_t MaxWave_k__BackingField; // [xsp+98h] [xbp-78h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+9Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4C52A73 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&PartyServantListViewItemDraw_TypeInfo);
    sub_1C3E564(&StringLiteral_15551/*"WAVE_BATTLE_SERVANT_WAVE"*/);
    sub_1C3E564(&StringLiteral_10296/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_1C3E564(&StringLiteral_15547/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/);
    sub_1C3E564(&StringLiteral_15546/*"WAVE_BATTLE_SERVANT_PARTY"*/);
    sub_1C3E564(&StringLiteral_19734/*"func_group_icon_1028"*/);
    sub_1C3E564(&StringLiteral_10297/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_4C52A73 = 1;
  }
  SvtPointRank_k__BackingField = 0;
  if ( v5 && mode )
  {
    if ( v5->fields.isConvertOverwriteImage )
      questRestrictionInfo = v5->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0;
    baseItem = (int64_t)v5->fields.baseItem;
    if ( !baseItem )
      goto LABEL_146;
    isChangeFriendShipSvtEquipSkill = *(_BYTE *)(baseItem + 269);
    isBase = v5->fields.isBase;
    if ( !isChangeFriendShipSvtEquipSkill )
    {
      equipIdList = v5->fields.equipIdList;
      v18 = *(unsigned __int8 *)(baseItem + 405);
      v19 = 0;
      goto LABEL_32;
    }
    baseItem = (int64_t)PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)baseItem, 0);
    v11 = v5->fields.baseItem;
    if ( !v11 )
      goto LABEL_146;
    userServantEntity = v11->fields.userServantEntity;
    EquipFriendShipSkillChange_k__BackingField = v11->fields._EquipFriendShipSkillChange_k__BackingField;
    equipIdList = (System_Int64_array *)baseItem;
    if ( userServantEntity )
    {
      v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v108.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v107 = v108;
      baseItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v107, 0);
      v16 = v5->fields.userServantEntity;
      if ( !v16 )
        goto LABEL_146;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v106.fields.fakeValue = v17;
      if ( baseItem == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v106, 0) )
      {
        v18 = 1;
LABEL_31:
        isChangeFriendShipSvtEquipSkill = EquipFriendShipSkillChange_k__BackingField > 0;
        v19 = v18 == 0;
LABEL_32:
        baseItem = (int64_t)this->fields.servantFaceIcon;
        if ( !baseItem )
          goto LABEL_146;
        ServantFaceIconComponent__Set(
          (ServantFaceIconComponent_o *)baseItem,
          v5->fields.userServantEntity,
          equipIdList,
          questRestrictionInfo,
          v5->fields.iconLabelInfo1,
          v5->fields.iconLabelInfo2,
          v18 != 0,
          v19,
          isChangeFriendShipSvtEquipSkill,
          0);
        baseItem = (int64_t)this->fields.servantFaceIcon;
        if ( !baseItem )
          goto LABEL_146;
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          (ServantFaceIconComponent_o *)baseItem,
          this->fields.maskSprite,
          this->fields.maskSpriteDefaultName,
          this->fields.maskSpriteDefaultAtlas,
          0);
        baseItem = (int64_t)this->fields.info2IconLabel;
        if ( !baseItem )
          goto LABEL_146;
        UIIconLabel__Set((UIIconLabel_o *)baseItem, v5->fields.iconLabelInfo3, 0);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
        {
          baseItem = (int64_t)this->fields.partyIcon;
          if ( isBase )
          {
            if ( !baseItem )
              goto LABEL_146;
            FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0);
          }
          else
          {
            if ( !baseItem )
              goto LABEL_146;
            FlashingIconComponent__Set_40947528((FlashingIconComponent_o *)baseItem, v5->fields.partyIndex >= 0, 0);
          }
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
        {
          baseItem = (int64_t)this->fields.lockSprite;
          if ( !baseItem )
            goto LABEL_146;
          baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          if ( v5->fields.isSwapLock )
            isLock = !v5->fields.isLock;
          else
            isLock = v5->fields.isLock;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, isLock, 0);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
        {
          baseItem = (int64_t)this->fields.choiceSprite;
          if ( !baseItem )
            goto LABEL_146;
          baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          if ( v5->fields.isSwapChoice )
            isChoice = !v5->fields.isChoice;
          else
            isChoice = v5->fields.isChoice;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, isChoice, 0);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
        {
          baseItem = (int64_t)this->fields.pushSprite;
          if ( !baseItem )
            goto LABEL_146;
          baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, v5->fields.isPush, 0);
        }
        v36 = PartyServantListViewItemDraw__SetMessageLabel(this, v5, v35);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v38 = v36;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
        {
          baseItem = (int64_t)this->fields.selectObject;
          if ( !baseItem )
            goto LABEL_146;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, v5->fields.isBase, 0);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, v5, v39);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, v5, v38, v40);
        switchInfoList = this->fields.switchInfoList;
        if ( !switchInfoList )
          goto LABEL_146;
        size = switchInfoList->fields._size;
        v43 = switchInfoList->fields._version + 1;
        switchInfoList->fields._size = 0;
        switchInfoList->fields._version = v43;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)switchInfoList->fields._items, 0, size, 0);
        baseItem = (int64_t)this->fields.svtPointComp;
        if ( !baseItem
          || (baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0)) == 0 )
        {
LABEL_146:
          sub_1C3E7C0(baseItem, item);
        }
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)baseItem,
          v5->fields._IsDispSvtPoint_k__BackingField,
          0);
        if ( v5->fields._IsDispSvtPoint_k__BackingField )
        {
          baseItem = (int64_t)this->fields.switchInfoList;
          if ( !baseItem )
            goto LABEL_146;
          item = (PartyServantListViewItem_o *)this->fields.svtPointComp;
          v46 = *(_QWORD *)(baseItem + 16);
          v47 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(baseItem + 28);
          if ( !v46 )
            goto LABEL_146;
          v48 = *(int *)(baseItem + 24);
          if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)baseItem,
              (Il2CppObject *)item,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = v46 + 8 * v48;
            *(_DWORD *)(baseItem + 24) = v48 + 1;
            *(_QWORD *)(v49 + 32) = item;
            sub_1C3E508((CGThumbnailListItem_o *)(v49 + 32), (int32_t)item, v44, v45);
          }
          svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
          baseItem = (int64_t)PartyServantListViewItemDraw_TypeInfo;
          if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
          if ( !svtPointInfoLabel )
            goto LABEL_146;
          UIWidget__set_width(
            svtPointInfoLabel,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
            0);
          SvtPointRank_k__BackingField = v5->fields._SvtPointRank_k__BackingField;
          v51 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0);
          v52 = System_String__Concat_63636468((System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v51, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v53 = LocalizationManager__Get(v52, 0);
          v54 = this->fields.svtPointInfoLabel;
          v55 = (Il2CppObject *)v53;
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0);
          LODWORD(v108.fields.currentCryptoKey) = v5->fields._SvtPoint_k__BackingField;
          v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v57, v58, v59, v60, v61, v62);
          baseItem = (int64_t)System_String__Format_63677760(v56, v55, v63, 0);
          if ( !v54 )
            goto LABEL_146;
          UILabel__set_text(v54, (System_String_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointBaseObj;
          if ( !baseItem )
            goto LABEL_146;
          baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)baseItem,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
            0);
          baseItem = (int64_t)this->fields.svtPointBaseObj;
          if ( !baseItem )
            goto LABEL_146;
          baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_146;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          v66 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_146;
          v67 = *(float *)&v66;
          LODWORD(v68) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)baseItem, 0);
          v69 = (UIWidget_o *)this->fields.svtPointInfoLabel;
          v70 = v68;
          baseItem = (int64_t)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          if ( !v69 )
            goto LABEL_146;
          v71 = ceilf(v70);
          v72 = v71 == INFINITY ? 0x80000000 : (int)v71;
          UIWidget__set_width(v69, v72, 0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_146;
          UILabel__SetCondensedScale(
            (UILabel_o *)baseItem,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
            0,
            0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_146;
          baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointBaseObj;
          if ( !baseItem )
            goto LABEL_146;
          v74 = *(float *)&localScale;
          baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_146;
          v112.fields.x = -(float)(v67 + (float)(v70 * v74));
          v112.fields.y = y;
          v112.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseItem, v112, 0);
          svtPointIconSprite = this->fields.svtPointIconSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_19734/*"func_group_icon_1028"*/, 0);
        }
        baseItem = (int64_t)this->fields.switchInfoList;
        if ( !baseItem )
          goto LABEL_146;
        item = (PartyServantListViewItem_o *)this->fields.costComp;
        v76 = *(_QWORD *)(baseItem + 16);
        v77 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(baseItem + 28);
        if ( !v76 )
          goto LABEL_146;
        v78 = *(int *)(baseItem + 24);
        if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)baseItem,
            (Il2CppObject *)item,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = v76 + 8 * v78;
          *(_DWORD *)(baseItem + 24) = v78 + 1;
          *(_QWORD *)(v79 + 32) = item;
          sub_1C3E508((CGThumbnailListItem_o *)(v79 + 32), (int32_t)item, v44, v45);
        }
        baseItem = (int64_t)this->fields.switchInfoList;
        if ( !baseItem )
          goto LABEL_146;
        switchInfoComp = this->fields.switchInfoComp;
        baseItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)baseItem,
                              (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchInfoComp )
          goto LABEL_146;
        SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)baseItem, 0, 0);
        if ( v5->fields._OrganizedWave_k__BackingField >= 1 )
        {
          v81 = v5->fields.questRestrictionInfo;
          if ( v81 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v81, 0) )
          {
            baseItem = (int64_t)this->fields.wavePartyCondensedLabel;
            if ( !baseItem )
              goto LABEL_146;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseItem, 0, 0);
            baseItem = (int64_t)this->fields.wavePartyLabel;
            if ( !baseItem )
              goto LABEL_146;
            baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0);
            if ( !baseItem )
              goto LABEL_146;
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)baseItem,
              this->fields.SwitchPartyWavePartyLabelScale,
              0);
            baseItem = (int64_t)this->fields.wavePartyLabel;
            if ( !baseItem )
              goto LABEL_146;
            UILabel__set_fontSize((UILabel_o *)baseItem, this->fields.SwitchPartyWavePartyLabelFontSize, 0);
            if ( (v5->fields.partyIndex & 0x80000000) == 0 )
            {
              baseItem = (int64_t)this->fields.partyIcon;
              if ( !baseItem )
                goto LABEL_146;
              FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0);
              wavePartyLabel = this->fields.wavePartyLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              baseItem = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15547/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/, 0);
              if ( !wavePartyLabel )
                goto LABEL_146;
              v83 = (System_String_o *)baseItem;
              v84 = wavePartyLabel;
              goto LABEL_143;
            }
            v85 = this->fields.wavePartyLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v101 = LocalizationManager__Get((System_String_o *)StringLiteral_15546/*"WAVE_BATTLE_SERVANT_PARTY"*/, 0);
            OrganizedWave_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
            v103 = v101;
            v104 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(OrganizedWave_k__BackingField, 0);
            baseItem = (int64_t)System_String__Format(v103, v104, 0);
            if ( !v85 )
              goto LABEL_146;
LABEL_142:
            v83 = (System_String_o *)baseItem;
            v84 = v85;
LABEL_143:
            UILabel__set_text(v84, v83, 0);
            baseItem = (int64_t)this->fields.wavePartyIcon;
            if ( baseItem )
            {
              FlashingIconComponent__Set((FlashingIconComponent_o *)baseItem, 0);
              return;
            }
            goto LABEL_146;
          }
          if ( v5->fields.partyIndex < 0 )
          {
            baseItem = (int64_t)this->fields.wavePartyLabel;
            if ( !baseItem )
              goto LABEL_146;
            UILabel__set_fontSize((UILabel_o *)baseItem, this->fields.DefaultWavePartyLabelFontSize, 0);
            baseItem = (int64_t)this->fields.wavePartyCondensedLabel;
            if ( !baseItem )
              goto LABEL_146;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseItem, 1, 0);
            v85 = this->fields.wavePartyLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v86 = LocalizationManager__Get((System_String_o *)StringLiteral_15551/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0);
            LODWORD(v108.fields.currentCryptoKey) = v5->fields._OrganizedWave_k__BackingField;
            v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108, v87, v88, v89, v90, v91, v92);
            MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
            v100 = (Il2CppObject *)j_il2cpp_value_box_0(
                                     int_TypeInfo,
                                     &MaxWave_k__BackingField,
                                     v94,
                                     v95,
                                     v96,
                                     v97,
                                     v98,
                                     v99);
            baseItem = (int64_t)System_String__Format_63677760(v86, v93, v100, 0);
            if ( !v85 )
              goto LABEL_146;
            goto LABEL_142;
          }
        }
        baseItem = (int64_t)this->fields.wavePartyIcon;
        if ( baseItem )
        {
          FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0);
          return;
        }
        goto LABEL_146;
      }
      v11 = v5->fields.baseItem;
      if ( !v11 )
        goto LABEL_149;
    }
    SvtId = PartyOrganizationListViewItem__get_SvtId(v11, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(SvtId, 0);
    if ( v21 != PartyServantListViewItem__get_SvtId(v5, v22) )
    {
LABEL_149:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      baseItem = PartyServantListViewItem__get_SvtId(v5, v24);
      if ( !Master_object )
        goto LABEL_146;
      baseItem = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(
                            (UserServantGrandMaster_o *)Master_object,
                            baseItem,
                            0);
      if ( baseItem )
      {
        v25 = v5->fields.userServantEntity;
        if ( !v25 )
          goto LABEL_146;
        v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
        v27 = (UserServantGrandEntity_o *)baseItem;
        v28 = *(_QWORD *)(baseItem + 32);
        *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v108.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v105 = v108;
        v18 = v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v105, 0);
        equipIdList = UserServantGrandEntity__GetEquipUserServantIdList(v27, 0);
        EquipFriendShipSkillChange_k__BackingField = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v27, 0);
        goto LABEL_31;
      }
    }
    v18 = 0;
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewItemDraw__SetMaskMessage(
        PartyServantListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        System_String_o *maskName,
        bool isDataLost,
        const MethodInfo *method)
{
  System_String_o *v9; // x21
  __int64 maskSprite; // x0
  UISprite_o *v12; // x23
  UIWidget_o *v13; // x23
  System_String_o *v14; // x23
  float v15; // s0 OVERLAPPED
  float v16; // s3
  float v17; // s1
  float v18; // s2
  float v19; // s0
  float v20; // s8
  UnityEngine_Transform_o *v21; // x20
  float maskMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_4C52A78 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C3E564(&PartyServantListViewItemDraw_TypeInfo);
    sub_1C3E564(&StringLiteral_20413/*"img_frames_mask01"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52A78 = 1;
  }
  maskSprite = (__int64)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_53;
  maskSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  if ( isDataLost )
  {
    v12 = this->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v12, maskName, 0);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_53;
    v34.fields.r = 1.0;
    v34.fields.g = 1.0;
    v34.fields.b = 1.0;
    v34.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v34, 0);
    v13 = (UIWidget_o *)this->fields.maskSprite;
    maskSprite = (__int64)PartyServantListViewItemDraw_TypeInfo;
    if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
    if ( !v13 )
      goto LABEL_53;
    UIWidget__set_height(v13, PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT, 0);
    message = (System_String_o *)this->fields.maskSprite;
    if ( !message )
      goto LABEL_53;
    maskSprite = (__int64)this->fields.servantFaceIcon;
    if ( !maskSprite )
      goto LABEL_53;
    ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
      (ServantFaceIconComponent_o *)maskSprite,
      (UISprite_o *)message,
      maskName,
      (UIAtlas_o *)message[19].monitor,
      0);
  }
  else
  {
    maskSprite = (__int64)this->fields.maskSprite;
    if ( maskName )
      v14 = maskName;
    else
      v14 = (System_String_o *)StringLiteral_20413/*"img_frames_mask01"*/;
    if ( !maskSprite )
      goto LABEL_53;
    UISprite__set_atlas((UISprite_o *)maskSprite, this->fields.maskSpriteDefaultAtlas, 0);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_53;
    UISprite__set_spriteName((UISprite_o *)maskSprite, v14, 0);
    maskSprite = (__int64)this->fields.maskSprite;
    v15 = 0.0;
    if ( maskName )
      v15 = 1.0;
    if ( !maskSprite )
      goto LABEL_53;
    v16 = maskName ? 1.0 : 0.623;
    v17 = v15;
    v18 = v15;
    UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&v15, 0);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_53;
    UIWidget__set_height((UIWidget_o *)maskSprite, this->fields.maskSpriteDefaultHeight, 0);
    maskSprite = (__int64)this->fields.servantFaceIcon;
    if ( !maskSprite )
      goto LABEL_53;
    ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
      (ServantFaceIconComponent_o *)maskSprite,
      this->fields.maskSprite,
      v14,
      this->fields.maskSpriteDefaultAtlas,
      0);
  }
  maskSprite = (__int64)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (__int64)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_53;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, v9, 0);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  if ( !isScale )
  {
    maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0);
    v21 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4C506A6 )
    {
      maskSprite = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    if ( v21 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_48;
    }
LABEL_53:
    sub_1C3E7C0(maskSprite, message);
  }
  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  v20 = v19;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0);
  v21 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v20 <= maskMessageWidth )
  {
    if ( !byte_4C506A6 )
    {
      maskSprite = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    v27 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v27->oneVector.fields.x;
    y = v27->oneVector.fields.y;
    z = v27->oneVector.fields.z;
  }
  else
  {
    x = maskMessageWidth / v20;
    z = 1.0;
    y = 1.0;
  }
  if ( !v21 )
    goto LABEL_53;
LABEL_48:
  UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&x, 0);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_53;
  message = (System_String_o *)this->fields.maskMessageLabel;
  v30 = *(_QWORD *)(maskSprite + 16);
  v31 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v30 )
    goto LABEL_53;
  v32 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * v32;
    *(_DWORD *)(maskSprite + 24) = v32 + 1;
    *(_QWORD *)(v33 + 32) = message;
    sub_1C3E508((CGThumbnailListItem_o *)(v33 + 32), (int32_t)message, v28, v29);
  }
}


bool PartyServantListViewItemDraw__SetMessageLabel(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v3; // x20
  PartyServantListViewItemDraw_o *v4; // x19
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v7; // w9
  UILabel_o *skillInvalidLabel; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v14; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _BOOL4 isEventJoin; // w21
  __int64 *v20; // x8
  bool v21; // w21
  System_String_o *v22; // x0
  const MethodInfo *v23; // x5
  int m_CancellationTokenSource; // w8
  intptr_t v25; // x8
  _QWORD *v26; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x19

  v3 = item;
  v4 = this;
  if ( (byte_4C52A74 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_11523/*"SELECT_CANNOT"*/);
    sub_1C3E564(&StringLiteral_11555/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C3E564(&StringLiteral_11522/*"SELECT_BONUS_SKILL_INVALID"*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52A74 = 1;
  }
  messageLabelList = v4->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_47;
  size = messageLabelList->fields._size;
  v7 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskMessageLabel;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigueBase;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningMessageLabel;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.skillInvalidLabel;
  if ( !this )
    goto LABEL_47;
  this = (PartyServantListViewItemDraw_o *)((__int64 (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
                                             this,
                                             this->klass[1]._1.castClass,
                                             0.0);
  if ( !v3 )
    goto LABEL_47;
  skillInvalidLabel = v4->fields.skillInvalidLabel;
  if ( v3->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11522/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_47;
    item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
    m_CachedPtr = this->fields.m_CachedPtr;
    v12 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_47;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)item,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v14 + 32) = item;
      sub_1C3E508((CGThumbnailListItem_o *)(v14 + 32), (int32_t)item, v9, v10);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(v4->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( !v3->fields.isEnabled )
  {
    isEventJoin = v3->fields.isEventJoin;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v3->fields.isEventJoin )
      {
LABEL_28:
        v20 = &StringLiteral_11555/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
        v22 = LocalizationManager__Get((System_String_o *)*v20, 0);
        PartyServantListViewItemDraw__SetMaskMessage(v4, v22, 0, 0, 0, v23);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_28;
    }
    v20 = &StringLiteral_11523/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( !v3->fields.isPushMode )
  {
    v21 = PartyServantListViewItemDraw__SetRestrictionMask(v4, v3, v16);
    goto LABEL_35;
  }
  if ( v3->fields.fatigureTime < 0 )
  {
    PartyServantListViewItemDraw__ClearMessage(v4, v15);
    v21 = 0;
    goto LABEL_35;
  }
  PartyServantListViewItemDraw__SetFatigueMask(v4, v3, v16);
LABEL_34:
  v21 = 1;
LABEL_35:
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this )
    goto LABEL_47;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    if ( m_CancellationTokenSource == 1 && v3->fields.isInvalidRarity )
    {
      item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
      v25 = this->fields.m_CachedPtr;
      v26 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v25 )
        goto LABEL_47;
      if ( *(_DWORD *)(v25 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v25 + 40) = item;
        sub_1C3E508((CGThumbnailListItem_o *)(v25 + 40), (int32_t)item, v17, v18);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0, 0);
        return v21;
      }
    }
LABEL_47:
    sub_1C3E7C0(this, item);
  }
  return v21;
}


bool PartyServantListViewItemDraw__SetRestrictionMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  PartyServantListViewItemDraw_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v8; // x5
  bool v9; // w20
  System_String_o *v10; // x1
  bool v11; // w2
  PartyServantListViewItemDraw_o *v12; // x0
  System_String_o *v13; // x3
  bool v14; // w4
  __int64 *v15; // x8
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 *v19; // x8
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  System_String_o *v26; // x21
  int32_t *v27; // x1
  Il2CppObject *v28; // x0
  int32_t v29; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4C52A75 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_15491/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C3E564(&StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C3E564(&StringLiteral_11549/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C3E564(&StringLiteral_11543/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C3E564(&StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C3E564(&StringLiteral_6458/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C3E564(&StringLiteral_11542/*"SELECT_NO_SORTIE"*/);
    sub_1C3E564(&StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/);
    sub_1C3E564(&StringLiteral_18500/*"datalost_svt_select"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C3E564(&StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_4C52A75 = 1;
  }
  if ( !item )
    sub_1C3E7C0(this, item);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = (System_String_o *)StringLiteral_11542/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v11 = 1;
    v12 = v5;
    v13 = 0;
    v14 = 0;
    goto LABEL_15;
  }
  if ( item->fields.isBase )
  {
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = &StringLiteral_10268/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v16 = LocalizationManager__Get((System_String_o *)*v15, 0);
      v9 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v5, v16, 1, v17);
      return v9;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_41;
    if ( item->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_45;
    if ( !item->fields._IsDataLost_k__BackingField
      || item->fields.isLockMode
      || item->fields.isSelectMode
      || item->fields.isPushMode )
    {
      if ( item->fields._TimesToRestart_k__BackingField < 1
        || item->fields.isLockMode
        || item->fields.isSelectMode
        || item->fields.isPushMode )
      {
        goto LABEL_62;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11549/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
      v27 = &TimesToRestart_k__BackingField;
      TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_67:
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v27, v20, v21, v22, v23, v24, v25);
      RestrictionMessage = System_String__Format(v26, v28, 0);
      goto LABEL_9;
    }
LABEL_63:
    v14 = 1;
    v12 = v5;
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    v13 = (System_String_o *)StringLiteral_18500/*"datalost_svt_select"*/;
    v11 = 0;
LABEL_15:
    v9 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v12, v10, v11, v13, v14, v3);
    return v9;
  }
  if ( item->fields._IsDataLost_k__BackingField
    && !item->fields.isLockMode
    && !item->fields.isSelectMode
    && !item->fields.isPushMode )
  {
    goto LABEL_63;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1
    && !item->fields.isLockMode
    && !item->fields.isSelectMode
    && !item->fields.isPushMode )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_11549/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    v27 = &v29;
    v29 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_67;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = &StringLiteral_10317/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_48;
  }
  if ( item->fields.isNotSameParty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = &StringLiteral_10295/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/;
    goto LABEL_48;
  }
  if ( (item->fields.commonRestrictionId & 0x80000000) == 0 )
  {
    RestrictionMessage = PartyServantListViewItem__GetRestrictionMessage(item, (const MethodInfo *)item);
    goto LABEL_9;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_6458/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
    goto LABEL_22;
  }
  if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
LABEL_41:
    PartyServantListViewItemDraw__SetFatigueMask(v5, item, method);
    return 1;
  }
  if ( !item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( item->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = &StringLiteral_15491/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_48;
    }
LABEL_62:
    PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
    return 0;
  }
LABEL_45:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = &StringLiteral_11543/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_48:
  v6 = (System_String_o *)*v19;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v6, 0);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v5, RestrictionMessage, 0, 0, 0, v8);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewItemDraw__SetWarningMessage(
        PartyServantListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 maskSprite; // x0
  float v8; // s0
  float v9; // s8
  UnityEngine_Transform_o *v10; // x20
  float warningMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8

  v5 = message;
  if ( (byte_4C52A79 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52A79 = 1;
  }
  maskSprite = (__int64)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (__int64)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  maskSprite = (__int64)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_29;
  FlashingIconComponent__SetFast((FlashingIconComponent_o *)maskSprite, 0);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, v5, 0);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  if ( !isScale )
  {
    maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0);
    v10 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4C506A6 )
    {
      maskSprite = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    if ( v10 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_24;
    }
LABEL_29:
    sub_1C3E7C0(maskSprite, message);
  }
  LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  v9 = v8;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0);
  v10 = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v9 <= warningMessageWidth )
  {
    if ( !byte_4C506A6 )
    {
      maskSprite = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A6 = 1;
    }
    v16 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v16->oneVector.fields.x;
    y = v16->oneVector.fields.y;
    z = v16->oneVector.fields.z;
  }
  else
  {
    x = warningMessageWidth / v9;
    z = 1.0;
    y = 1.0;
  }
  if ( !v10 )
    goto LABEL_29;
LABEL_24:
  UnityEngine_Transform__set_localScale(v10, *(UnityEngine_Vector3_o *)&x, 0);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_29;
  message = (System_String_o *)this->fields.warningMessageLabel;
  v19 = *(_QWORD *)(maskSprite + 16);
  v20 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v19 )
    goto LABEL_29;
  v21 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = v19 + 8 * v21;
    *(_DWORD *)(maskSprite + 24) = v21 + 1;
    *(_QWORD *)(v22 + 32) = message;
    sub_1C3E508((CGThumbnailListItem_o *)(v22 + 32), (int32_t)message, v17, v18);
  }
}


void PartyServantListViewItemDraw__UpdateDisp(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  if ( item && !item->fields.isLeave && !item->fields.isQuestRestriction )
  {
    if ( item->fields.isBase )
    {
      if ( item->fields.fatigureTime < 0 )
        return;
    }
    else if ( item->fields.isSame
           || item->fields.isNotSameParty
           || (item->fields.commonRestrictionId & 0x80000000) == 0
           || item->fields.isUniqueSvtRestriction
           || item->fields.fatigureTime < 0 )
    {
      return;
    }
    PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
  }
}