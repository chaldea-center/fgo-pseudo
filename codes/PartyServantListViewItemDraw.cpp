void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItemDraw_c *v2; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4B407BB & 1) == 0 )
  {
    sub_1BDB878(&PartyServantListViewItemDraw_TypeInfo, v1);
    byte_4B407BB = 1;
  }
  v2 = PartyServantListViewItemDraw_TypeInfo;
  static_fields = PartyServantListViewItemDraw_TypeInfo->static_fields;
  static_fields->BUDDY_INFO_BASE_POS.fields.z = 0.0;
  *(_QWORD *)&static_fields->BUDDY_INFO_WIDTH_DEFAULT = 0x5E000000C8LL;
  *(_QWORD *)&static_fields->BUDDY_INFO_BASE_POS.fields.x = 1112014848LL;
  v2->static_fields->DATA_LOST_MASK_HEIGHT = 154;
}


void __fastcall PartyServantListViewItemDraw___ctor(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyServantListViewItemDraw__Awake(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *maskMessageLabel; // x0
  struct UILabel_o *warningMessageLabel; // x8
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v18; // x8

  if ( (byte_4B407B1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B407B1 = 1;
  }
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_13;
  warningMessageLabel = this->fields.warningMessageLabel;
  this->fields.maskMessageWidth = maskMessageLabel->fields.mWidth;
  if ( !warningMessageLabel )
    goto LABEL_13;
  this->fields.warningMessageWidth = warningMessageLabel->fields.mWidth;
  UIWidget__set_width((UIWidget_o *)maskMessageLabel, 1000, 0LL);
  maskMessageLabel = this->fields.warningMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_13;
  UIWidget__set_width((UIWidget_o *)maskMessageLabel, 1000, 0LL);
  v7 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.switchInfoList, (int32_t)v10, v11, v12);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v16 = this->fields.maskSprite;
    if ( v16 )
    {
      mAtlas = v16->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v14, v15);
      v18 = this->fields.maskSprite;
      if ( v18 )
      {
        this->fields.maskSpriteDefaultHeight = v18->fields.mHeight;
        return;
      }
    }
LABEL_13:
    sub_1BDBAD4(maskMessageLabel, method);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_4B407B6 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B407B6 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_13;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon) == 0LL)
    || (FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.messageLabel) == 0LL) )
  {
LABEL_13:
    sub_1BDBAD4(maskSprite, method);
  }
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)maskSprite, 0LL);
}


void __fastcall PartyServantListViewItemDraw__SetClassCompatibilityIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  void *userServantEntity; // x0
  PartyOrganizationRootComponent_c *v13; // x1
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x8
  ServantClassCompatibilityIconComponent_o *v16; // x20
  struct PartyOrganizationListViewItem_o *v17; // x8
  System_Int32_array *v18; // x2
  __int64 methodPtr_low; // x9
  __int64 v20; // x22
  int32_t v21; // w22
  int32_t v22; // w21
  void *v23; // x21
  PartyServantListViewItemDraw_o *v24; // x0
  System_String_o *v25; // x1
  bool v26; // w2
  System_String_o *v27; // x3
  bool v28; // w4
  const MethodInfo *v29; // x5

  if ( (byte_4B407B5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&PartyOrganizationRootComponent_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B407B5 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  userServantEntity = (void *)UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL);
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
    if ( WaveEnemyClassIds_k__BackingField && *(_QWORD *)&WaveEnemyClassIds_k__BackingField->max_length )
    {
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity )
      {
        v16 = this->fields.classCompatibilityIcon;
        userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                      (UserServantEntity_o *)userServantEntity,
                                      0,
                                      0,
                                      0LL);
        v17 = item->fields.baseItem;
        if ( v17 )
        {
          if ( v16 )
          {
            v18 = v17->fields._WaveEnemyClassIds_k__BackingField;
LABEL_18:
            ServantClassCompatibilityIconComponent__SetIcon(v16, (int32_t)userServantEntity, v18, 1, 0LL);
            return;
          }
        }
      }
      goto LABEL_38;
    }
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0LL);
    if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      goto LABEL_34;
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)*((_QWORD *)userServantEntity + 4);
    if ( !userServantEntity )
      goto LABEL_38;
    v13 = PartyOrganizationRootComponent_TypeInfo;
    methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 304LL) >= (unsigned int)methodPtr_low
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL) + 8 * methodPtr_low - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v20 = *((_QWORD *)userServantEntity + 64);
      if ( v20 )
      {
        userServantEntity = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 64), 0LL);
        if ( (_DWORD)userServantEntity )
        {
          v21 = *(_DWORD *)(v20 + 24);
          if ( v21 )
          {
            v22 = (int)userServantEntity;
            userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = DataManager__GetMasterData_object_(
                                  (DataManager_o *)userServantEntity,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)userServantEntity, v22, v21, 0LL);
            v16 = this->fields.classCompatibilityIcon;
            if ( userServantEntity )
            {
              v23 = userServantEntity;
              userServantEntity = item->fields.userServantEntity;
              if ( userServantEntity )
              {
                userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                              (UserServantEntity_o *)userServantEntity,
                                              0,
                                              0,
                                              0LL);
                if ( v16 )
                {
                  v18 = (System_Int32_array *)*((_QWORD *)v23 + 6);
                  goto LABEL_18;
                }
              }
LABEL_38:
              sub_1BDBAD4(userServantEntity, v13);
            }
LABEL_35:
            if ( !v16 )
              goto LABEL_38;
            userServantEntity = v16;
LABEL_37:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)userServantEntity,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      v16 = this->fields.classCompatibilityIcon;
      goto LABEL_35;
    }
    v24 = (PartyServantListViewItemDraw_o *)sub_1BDBD94(userServantEntity);
    PartyServantListViewItemDraw__SetMaskMessage(v24, v25, v26, v27, v28, v29);
  }
}


void __fastcall PartyServantListViewItemDraw__SetDispClassIcon(
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
    sub_1BDBAD4(this, item);
  }
  this = (PartyServantListViewItemDraw_o *)this->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_11;
  v3 = 1;
LABEL_8:
  ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, v3, 0LL);
}


void __fastcall PartyServantListViewItemDraw__SetFatigueMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v3; // x20
  PartyServantListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v14; // x3
  UILabel_o *maskFatigureMessageLabel; // x22
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v17; // x8
  System_String_o *v18; // x23
  System_String_o *v19; // x0
  int32_t v20; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v22; // s0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v28; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4B407BA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_11511/*"SELECT_NO_SORTIE_FATIGURE"*/, v6);
    sub_1BDB878(&StringLiteral_20410/*"img_frames_mask04"*/, v7);
    sub_1BDB878(&StringLiteral_11517/*"SELECT_NO_SORTIE_TITLE"*/, v8);
    sub_1BDB878(&StringLiteral_11513/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v9);
    sub_1BDB878(&StringLiteral_406/*"#042484"*/, v10);
    this = (PartyServantListViewItemDraw_o *)sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B407BA = 1;
  }
  *(_QWORD *)&value.fields.r = 0LL;
  *(_QWORD *)&value.fields.b = 0LL;
  if ( !v3 )
    goto LABEL_39;
  fatigureTime = v3->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    v3->fields.fatigureTime = -1LL;
    PartyServantListViewItemDraw__ClearMessage(v4, (const MethodInfo *)item);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v4, v3, 0, v14);
    return;
  }
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20410/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_406/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v30.fields.g = value.fields.g;
  v30.fields.b = value.fields.b;
  v30.fields.r = value.fields.r;
  v30.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v30, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningBase;
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningIcon;
  if ( !this )
    goto LABEL_39;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningMessageLabel;
  if ( !this )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskMessageLabel;
  if ( !this )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabel = v4->fields.maskFatigureMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11517/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v17 = (System_String_o **)&StringLiteral_11513/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v17 = (System_String_o **)&StringLiteral_11511/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v18 = *v17;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get(v18, 0LL);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v19, (Il2CppObject *)RestTime4, 0LL);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  v20 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v20, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v22 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v22, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        v25 = *(_QWORD *)&this->fields.m_CachedPtr,
        v26 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v25) )
  {
LABEL_39:
    sub_1BDBAD4(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = v25 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v28 + 32) = item;
    sub_1BDB81C((CGThumbnailListItem_o *)(v28 + 32), (int32_t)item, v23, v24);
  }
}


void __fastcall PartyServantListViewItemDraw__SetInput(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  _BOOL8 v9; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v16; // x2
  bool v17; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v19; // w21
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3

  if ( (byte_4B407B9 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B407B9 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_44;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_44;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_44;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_44;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_44;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_44;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_44;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_44;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0LL);
    }
    v17 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v16);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    v19 = v17;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
      goto LABEL_41;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( item->fields.isBase )
    {
      v9 = !item->fields._IsGrandSameServant_k__BackingField;
      if ( Component_object )
      {
LABEL_40:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v9, 0LL);
LABEL_41:
        PartyServantListViewItemDraw__SetDispClassIcon(this, item, v20);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v19, v21);
        return;
      }
    }
    else
    {
      v9 = 0LL;
      if ( Component_object )
        goto LABEL_40;
    }
LABEL_44:
    sub_1BDBAD4(Component_object, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetItem(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v5; // x20
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  bool isChangeFriendShipSvtEquipSkill; // w8
  _BOOL4 isBase; // w24
  int64_t baseItem; // x0
  struct PartyOrganizationListViewItem_o *v24; // x8
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q1
  System_Int64_array *equipIdList; // x22
  struct UserServantEntity_o *v28; // x8
  __int128 v29; // q0
  int64_t v30; // x23
  struct PartyOrganizationListViewItem_o *v31; // x8
  bool v32; // w6
  bool v33; // w7
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v40; // x2
  bool v41; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v43; // w21
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v48; // w9
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v56; // x0
  System_String_o *v57; // x21
  System_String_o *v58; // x0
  UILabel_o *v59; // x21
  Il2CppObject *v60; // x22
  System_String_o *v61; // x23
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  float v66; // s1
  float v67; // s2
  float v68; // s8
  float v69; // s9
  unsigned int localPosition; // s0
  float v71; // s10
  float v72; // s0
  UIWidget_o *v73; // x21
  float v74; // s11
  float v75; // s0
  int32_t v76; // w1
  unsigned int localScale; // s0
  float v78; // s12
  UISprite_o *svtPointIconSprite; // x21
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  __int64 v83; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v86; // x22
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x23
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  int32_t MaxWave_k__BackingField; // [xsp+1Ch] [xbp-D4h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+60h] [xbp-90h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+8Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4B407B2 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&int_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1BDB878(&LocalizationManager_TypeInfo, v11);
    sub_1BDB878(&System_Math_TypeInfo, v12);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BDB878(&PartyServantListViewItemDraw_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_15517/*"WAVE_BATTLE_SERVANT_WAVE"*/, v16);
    sub_1BDB878(&StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v17);
    sub_1BDB878(&StringLiteral_19730/*"func_group_icon_1028"*/, v18);
    sub_1BDB878(&StringLiteral_10292/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v19);
    byte_4B407B2 = 1;
  }
  SvtPointRank_k__BackingField = 0;
  if ( v5 && mode )
  {
    if ( v5->fields.isConvertOverwriteImage )
      questRestrictionInfo = v5->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0LL;
    isChangeFriendShipSvtEquipSkill = v5->fields._IsGrandSameServant_k__BackingField;
    isBase = v5->fields.isBase;
    if ( isChangeFriendShipSvtEquipSkill )
    {
      baseItem = (int64_t)v5->fields.baseItem;
      if ( !baseItem )
        goto LABEL_115;
      baseItem = (int64_t)PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)baseItem, 0LL);
      v24 = v5->fields.baseItem;
      if ( !v24 )
        goto LABEL_115;
      userServantEntity = v24->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_115;
      v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      equipIdList = (System_Int64_array *)baseItem;
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v98.fields.fakeValue = v26;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v97 = v98;
      baseItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v97, 0LL);
      v28 = v5->fields.userServantEntity;
      if ( !v28 )
        goto LABEL_115;
      v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
      v30 = baseItem;
      *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v96.fields.fakeValue = v29;
      baseItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v96, 0LL);
      v31 = v5->fields.baseItem;
      v32 = v30 == baseItem;
      if ( !v31 )
        goto LABEL_115;
      v33 = v30 != baseItem;
      isChangeFriendShipSvtEquipSkill = v31->fields._EquipFriendShipSkillChange_k__BackingField > 0;
    }
    else
    {
      equipIdList = v5->fields.equipIdList;
      v33 = 0;
      v32 = 0;
    }
    baseItem = (int64_t)this->fields.servantFaceIcon;
    if ( !baseItem )
      goto LABEL_115;
    ServantFaceIconComponent__Set(
      (ServantFaceIconComponent_o *)baseItem,
      v5->fields.userServantEntity,
      equipIdList,
      questRestrictionInfo,
      v5->fields.iconLabelInfo1,
      v5->fields.iconLabelInfo2,
      v32,
      v33,
      isChangeFriendShipSvtEquipSkill,
      0LL);
    baseItem = (int64_t)this->fields.info2IconLabel;
    if ( !baseItem )
      goto LABEL_115;
    UIIconLabel__Set((UIIconLabel_o *)baseItem, v5->fields.iconLabelInfo3, 0LL);
    partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
    {
      baseItem = (int64_t)this->fields.partyIcon;
      if ( isBase )
      {
        if ( !baseItem )
          goto LABEL_115;
        FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0LL);
      }
      else
      {
        if ( !baseItem )
          goto LABEL_115;
        FlashingIconComponent__Set_39913908((FlashingIconComponent_o *)baseItem, v5->fields.partyIndex >= 0, 0LL);
      }
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      baseItem = (int64_t)this->fields.lockSprite;
      if ( !baseItem )
        goto LABEL_115;
      baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      if ( v5->fields.isSwapLock )
        isLock = !v5->fields.isLock;
      else
        isLock = v5->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      baseItem = (int64_t)this->fields.choiceSprite;
      if ( !baseItem )
        goto LABEL_115;
      baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      if ( v5->fields.isSwapChoice )
        isChoice = !v5->fields.isChoice;
      else
        isChoice = v5->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, isChoice, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      baseItem = (int64_t)this->fields.pushSprite;
      if ( !baseItem )
        goto LABEL_115;
      baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, v5->fields.isPush, 0LL);
    }
    v41 = PartyServantListViewItemDraw__SetMessageLabel(this, v5, v40);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    v43 = v41;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      baseItem = (int64_t)this->fields.selectObject;
      if ( v5->fields.isBase )
      {
        item = (PartyServantListViewItem_o *)!v5->fields._IsGrandSameServant_k__BackingField;
        if ( !baseItem )
          goto LABEL_115;
      }
      else
      {
        item = 0LL;
        if ( !baseItem )
          goto LABEL_115;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, (bool)item, 0LL);
    }
    PartyServantListViewItemDraw__SetDispClassIcon(this, v5, v44);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, v5, v43, v45);
    switchInfoList = this->fields.switchInfoList;
    if ( !switchInfoList )
      goto LABEL_115;
    size = switchInfoList->fields._size;
    v48 = switchInfoList->fields._version + 1;
    switchInfoList->fields._size = 0;
    switchInfoList->fields._version = v48;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)switchInfoList->fields._items, 0, size, 0LL);
    baseItem = (int64_t)this->fields.svtPointComp;
    if ( !baseItem
      || (baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0LL)) == 0 )
    {
LABEL_115:
      sub_1BDBAD4(baseItem, item);
    }
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)baseItem,
      v5->fields._IsDispSvtPoint_k__BackingField,
      0LL);
    if ( v5->fields._IsDispSvtPoint_k__BackingField )
    {
      baseItem = (int64_t)this->fields.switchInfoList;
      if ( !baseItem )
        goto LABEL_115;
      item = (PartyServantListViewItem_o *)this->fields.svtPointComp;
      v51 = *(_QWORD *)(baseItem + 16);
      v52 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(baseItem + 28);
      if ( !v51 )
        goto LABEL_115;
      v53 = *(int *)(baseItem + 24);
      if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)baseItem,
          (Il2CppObject *)item,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = v51 + 8 * v53;
        *(_DWORD *)(baseItem + 24) = v53 + 1;
        *(_QWORD *)(v54 + 32) = item;
        sub_1BDB81C((CGThumbnailListItem_o *)(v54 + 32), (int32_t)item, v49, v50);
      }
      svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
      baseItem = (int64_t)PartyServantListViewItemDraw_TypeInfo;
      if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
      if ( !svtPointInfoLabel )
        goto LABEL_115;
      UIWidget__set_width(
        svtPointInfoLabel,
        PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
        0LL);
      SvtPointRank_k__BackingField = v5->fields._SvtPointRank_k__BackingField;
      v56 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
      v57 = System_String__Concat_62572260((System_String_o *)StringLiteral_10292/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v56, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v58 = LocalizationManager__Get(v57, 0LL);
      v59 = this->fields.svtPointInfoLabel;
      v60 = (Il2CppObject *)v58;
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10291/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
      LODWORD(v98.fields.currentCryptoKey) = v5->fields._SvtPoint_k__BackingField;
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v62, v63, v64);
      baseItem = (int64_t)System_String__Format_62613552(v61, v60, v65, 0LL);
      if ( !v59 )
        goto LABEL_115;
      UILabel__set_text(v59, (System_String_o *)baseItem, 0LL);
      baseItem = (int64_t)this->fields.svtPointBaseObj;
      if ( !baseItem )
        goto LABEL_115;
      baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)baseItem,
        PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
        0LL);
      baseItem = (int64_t)this->fields.svtPointBaseObj;
      if ( !baseItem )
        goto LABEL_115;
      baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      *(UnityEngine_Vector3_o *)(&v66 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)baseItem,
                                               0LL);
      baseItem = (int64_t)this->fields.svtPointInfoLabel;
      if ( !baseItem )
        goto LABEL_115;
      v68 = v66;
      v69 = v67;
      baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseItem, 0LL);
      baseItem = (int64_t)this->fields.svtPointInfoLabel;
      if ( !baseItem )
        goto LABEL_115;
      v71 = *(float *)&localPosition;
      LODWORD(v72) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)baseItem, 0LL);
      v73 = (UIWidget_o *)this->fields.svtPointInfoLabel;
      v74 = v72;
      baseItem = (int64_t)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v73 )
        goto LABEL_115;
      v75 = ceilf(v74);
      v76 = v75 == INFINITY ? 0x80000000 : (int)v75;
      UIWidget__set_width(v73, v76, 0LL);
      baseItem = (int64_t)this->fields.svtPointInfoLabel;
      if ( !baseItem )
        goto LABEL_115;
      UILabel__SetCondensedScale(
        (UILabel_o *)baseItem,
        PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
        0,
        0LL);
      baseItem = (int64_t)this->fields.svtPointInfoLabel;
      if ( !baseItem )
        goto LABEL_115;
      baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)baseItem, 0LL);
      baseItem = (int64_t)this->fields.svtPointBaseObj;
      if ( !baseItem )
        goto LABEL_115;
      v78 = *(float *)&localScale;
      baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0LL);
      if ( !baseItem )
        goto LABEL_115;
      v100.fields.x = -(float)(v71 + (float)(v74 * v78));
      v100.fields.y = v68;
      v100.fields.z = v69;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseItem, v100, 0LL);
      svtPointIconSprite = this->fields.svtPointIconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_19730/*"func_group_icon_1028"*/, 0LL);
    }
    baseItem = (int64_t)this->fields.switchInfoList;
    if ( !baseItem )
      goto LABEL_115;
    item = (PartyServantListViewItem_o *)this->fields.costComp;
    v80 = *(_QWORD *)(baseItem + 16);
    v81 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(baseItem + 28);
    if ( !v80 )
      goto LABEL_115;
    v82 = *(int *)(baseItem + 24);
    if ( (unsigned int)v82 >= *(_DWORD *)(v80 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)baseItem,
        (Il2CppObject *)item,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
    }
    else
    {
      v83 = v80 + 8 * v82;
      *(_DWORD *)(baseItem + 24) = v82 + 1;
      *(_QWORD *)(v83 + 32) = item;
      sub_1BDB81C((CGThumbnailListItem_o *)(v83 + 32), (int32_t)item, v49, v50);
    }
    baseItem = (int64_t)this->fields.switchInfoList;
    if ( !baseItem )
      goto LABEL_115;
    switchInfoComp = this->fields.switchInfoComp;
    baseItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                          (System_Collections_Generic_List_object__o *)baseItem,
                          (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchInfoComp )
      goto LABEL_115;
    SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)baseItem, 0, 0LL);
    if ( (v5->fields.partyIndex & 0x80000000) != 0 && v5->fields._OrganizedWave_k__BackingField >= 1 )
    {
      wavePartyLabel = this->fields.wavePartyLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = LocalizationManager__Get((System_String_o *)StringLiteral_15517/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
      LODWORD(v98.fields.currentCryptoKey) = v5->fields._OrganizedWave_k__BackingField;
      v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98, v87, v88, v89);
      MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v91, v92, v93);
      baseItem = (int64_t)System_String__Format_62613552(v86, v90, v94, 0LL);
      if ( wavePartyLabel )
      {
        UILabel__set_text(wavePartyLabel, (System_String_o *)baseItem, 0LL);
        baseItem = (int64_t)this->fields.wavePartyIcon;
        if ( baseItem )
        {
          FlashingIconComponent__Set((FlashingIconComponent_o *)baseItem, 0LL);
          return;
        }
      }
      goto LABEL_115;
    }
    baseItem = (int64_t)this->fields.wavePartyIcon;
    if ( !baseItem )
      goto LABEL_115;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetMaskMessage(
        PartyServantListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        System_String_o *maskName,
        bool isDataLost,
        const MethodInfo *method)
{
  System_String_o *v9; // x21
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 maskSprite; // x0
  UISprite_o *v16; // x24
  UIWidget_o *v17; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  float v19; // s8
  System_String_o *v20; // x1
  float v21; // s1
  float v22; // s2
  float v23; // s3
  float v24; // s0
  float v25; // s0
  float v26; // s8
  UnityEngine_Transform_o *v27; // x20
  float maskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_4B407B7 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, message);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Add__, v11);
    sub_1BDB878(&PartyServantListViewItemDraw_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_20407/*"img_frames_mask01"*/, v13);
    sub_1BDB878(&StringLiteral_1/*""*/, v14);
    byte_4B407B7 = 1;
  }
  maskSprite = (__int64)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_51;
  maskSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  v16 = this->fields.maskSprite;
  if ( isDataLost )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v16, maskName, 0LL);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v40.fields.r = 1.0;
    v40.fields.g = 1.0;
    v40.fields.b = 1.0;
    v40.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v40, 0LL);
    v17 = (UIWidget_o *)this->fields.maskSprite;
    maskSprite = (__int64)PartyServantListViewItemDraw_TypeInfo;
    if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
    if ( !v17 )
      goto LABEL_51;
    p_DATA_LOST_MASK_HEIGHT = &PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
  }
  else
  {
    if ( !v16 )
      goto LABEL_51;
    UISprite__set_atlas(this->fields.maskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v19 = maskName ? 1.0 : 0.0;
    v20 = maskName ? maskName : (System_String_o *)StringLiteral_20407/*"img_frames_mask01"*/;
    UISprite__set_spriteName((UISprite_o *)maskSprite, v20, 0LL);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v21 = v19;
    v22 = v19;
    v23 = maskName ? 1.0 : 0.623;
    v24 = v19;
    UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)(&v21 - 1), 0LL);
    v17 = (UIWidget_o *)this->fields.maskSprite;
    if ( !v17 )
      goto LABEL_51;
    p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
  }
  UIWidget__set_height(v17, *p_DATA_LOST_MASK_HEIGHT, 0LL);
  maskSprite = (__int64)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (__int64)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_51;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, v9, 0LL);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  if ( !isScale )
  {
    maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
    v27 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4B3E916 )
    {
      maskSprite = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, message);
      byte_4B3E916 = 1;
    }
    if ( v27 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_46;
    }
LABEL_51:
    sub_1BDBAD4(maskSprite, message);
  }
  LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  v26 = v25;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
  v27 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v26 <= maskMessageWidth )
  {
    if ( !byte_4B3E916 )
    {
      maskSprite = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, message);
      byte_4B3E916 = 1;
    }
    v33 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v33->oneVector.fields.x;
    y = v33->oneVector.fields.y;
    z = v33->oneVector.fields.z;
  }
  else
  {
    x = maskMessageWidth / v26;
    z = 1.0;
    y = 1.0;
  }
  if ( !v27 )
    goto LABEL_51;
LABEL_46:
  UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_51;
  message = (System_String_o *)this->fields.maskMessageLabel;
  v36 = *(_QWORD *)(maskSprite + 16);
  v37 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v36 )
    goto LABEL_51;
  v38 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = v36 + 8 * v38;
    *(_DWORD *)(maskSprite + 24) = v38 + 1;
    *(_QWORD *)(v39 + 32) = message;
    sub_1BDB81C((CGThumbnailListItem_o *)(v39 + 32), (int32_t)message, v34, v35);
  }
}


bool __fastcall PartyServantListViewItemDraw__SetMessageLabel(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v3; // x20
  PartyServantListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v15; // w9
  UILabel_o *skillInvalidLabel; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  _BOOL4 isEventJoin; // w21
  __int64 *v28; // x8
  bool v29; // w21
  System_String_o *v30; // x0
  const MethodInfo *v31; // x5
  int m_CancellationTokenSource; // w8
  __int64 v33; // x8
  _QWORD *v34; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x19

  v3 = item;
  v4 = this;
  if ( (byte_4B407B3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Clear__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_11491/*"SELECT_CANNOT"*/, v9);
    sub_1BDB878(&StringLiteral_11522/*"SELECT_SERVANT_EVENT_JOIN"*/, v10);
    sub_1BDB878(&StringLiteral_11490/*"SELECT_BONUS_SKILL_INVALID"*/, v11);
    this = (PartyServantListViewItemDraw_o *)sub_1BDB878(&StringLiteral_1/*""*/, v12);
    byte_4B407B3 = 1;
  }
  messageLabelList = v4->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_47;
  size = messageLabelList->fields._size;
  v15 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskMessageLabel;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigueBase;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningMessageLabel;
  if ( !this )
    goto LABEL_47;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.skillInvalidLabel;
  if ( !this )
    goto LABEL_47;
  this = (PartyServantListViewItemDraw_o *)((__int64 (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                             this,
                                             this->klass[1]._1.declaringType,
                                             0.0);
  if ( !v3 )
    goto LABEL_47;
  skillInvalidLabel = v4->fields.skillInvalidLabel;
  if ( v3->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11490/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0LL);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_47;
    item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
    v19 = *(_QWORD *)&this->fields.m_CachedPtr;
    v20 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v19 )
      goto LABEL_47;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)item,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = v19 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v22 + 32) = item;
      sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 32), (int32_t)item, v17, v18);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(v4->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( !v3->fields.isEnabled )
  {
    isEventJoin = v3->fields.isEventJoin;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v3->fields.isEventJoin )
      {
LABEL_28:
        v28 = &StringLiteral_11522/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
        v30 = LocalizationManager__Get((System_String_o *)*v28, 0LL);
        PartyServantListViewItemDraw__SetMaskMessage(v4, v30, 0, 0LL, 0, v31);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_28;
    }
    v28 = &StringLiteral_11491/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( !v3->fields.isPushMode )
  {
    v29 = PartyServantListViewItemDraw__SetRestrictionMask(v4, v3, v24);
    goto LABEL_35;
  }
  if ( (v3->fields.fatigureTime & 0x8000000000000000LL) != 0 )
  {
    PartyServantListViewItemDraw__ClearMessage(v4, v23);
    v29 = 0;
    goto LABEL_35;
  }
  PartyServantListViewItemDraw__SetFatigueMask(v4, v3, v24);
LABEL_34:
  v29 = 1;
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
      v33 = *(_QWORD *)&this->fields.m_CachedPtr;
      v34 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_47;
      if ( *(_DWORD *)(v33 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v33 + 40) = item;
        sub_1BDB81C((CGThumbnailListItem_o *)(v33 + 40), (int32_t)item, v25, v26);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0, 0LL);
        return v29;
      }
    }
LABEL_47:
    sub_1BDBAD4(this, item);
  }
  return v29;
}


bool __fastcall PartyServantListViewItemDraw__SetRestrictionMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  PartyServantListViewItemDraw_o *v5; // x19
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
  __int64 v17; // x1
  System_String_o *v18; // x0
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v20; // x5
  bool v21; // w20
  System_String_o *v22; // x1
  bool v23; // w2
  PartyServantListViewItemDraw_o *v24; // x0
  System_String_o *v25; // x3
  bool v26; // w4
  __int64 *v27; // x8
  System_String_o *v28; // x0
  const MethodInfo *v29; // x3
  __int64 *v31; // x8
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_String_o *v35; // x21
  int32_t *v36; // x1
  Il2CppObject *v37; // x0
  int32_t v38; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4B407B4 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, item);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_15465/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v7);
    sub_1BDB878(&StringLiteral_10264/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v8);
    sub_1BDB878(&StringLiteral_11516/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v9);
    sub_1BDB878(&StringLiteral_11510/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v10);
    sub_1BDB878(&StringLiteral_10263/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v11);
    sub_1BDB878(&StringLiteral_6470/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v12);
    sub_1BDB878(&StringLiteral_11509/*"SELECT_NO_SORTIE"*/, v13);
    sub_1BDB878(&StringLiteral_10290/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/, v14);
    sub_1BDB878(&StringLiteral_18487/*"datalost_svt_select"*/, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    this = (PartyServantListViewItemDraw_o *)sub_1BDB878(&StringLiteral_10312/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v17);
    byte_4B407B4 = 1;
  }
  if ( !item )
    sub_1BDBAD4(this, item);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = (System_String_o *)StringLiteral_11509/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10263/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v23 = 1;
    v24 = v5;
    v25 = 0LL;
    v26 = 0;
    goto LABEL_15;
  }
  if ( item->fields.isBase )
  {
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_10264/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v28 = LocalizationManager__Get((System_String_o *)*v27, 0LL);
      v21 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v5, v28, 1, v29);
      return v21;
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
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11516/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      v36 = &TimesToRestart_k__BackingField;
      TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_67:
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v36, v32, v33, v34);
      RestrictionMessage = System_String__Format(v35, v37, 0LL);
      goto LABEL_9;
    }
LABEL_63:
    v26 = 1;
    v24 = v5;
    v22 = (System_String_o *)StringLiteral_1/*""*/;
    v25 = (System_String_o *)StringLiteral_18487/*"datalost_svt_select"*/;
    v23 = 0;
LABEL_15:
    v21 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v24, v22, v23, v25, v26, v3);
    return v21;
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
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_11516/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
    v36 = &v38;
    v38 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_67;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = &StringLiteral_10312/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_48;
  }
  if ( item->fields.isNotSameParty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = &StringLiteral_10290/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/;
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
    v27 = &StringLiteral_6470/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
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
      v31 = &StringLiteral_15465/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_48;
    }
LABEL_62:
    PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
    return 0;
  }
LABEL_45:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v31 = &StringLiteral_11510/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_48:
  v18 = (System_String_o *)*v31;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v18, 0LL);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v5, RestrictionMessage, 0, 0LL, 0, v20);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetWarningMessage(
        PartyServantListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  __int64 v7; // x1
  __int64 maskSprite; // x0
  float v9; // s0
  float v10; // s8
  UnityEngine_Transform_o *v11; // x20
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8

  v5 = message;
  if ( (byte_4B407B8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UIWidget__Add__, message);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B407B8 = 1;
  }
  maskSprite = (__int64)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (__int64)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (__int64)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  maskSprite = (__int64)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_29;
  FlashingIconComponent__SetFast((FlashingIconComponent_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, v5, 0LL);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  if ( !isScale )
  {
    maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
    v11 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4B3E916 )
    {
      maskSprite = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, message);
      byte_4B3E916 = 1;
    }
    if ( v11 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_24;
    }
LABEL_29:
    sub_1BDBAD4(maskSprite, message);
  }
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  v10 = v9;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
  v11 = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v10 <= warningMessageWidth )
  {
    if ( !byte_4B3E916 )
    {
      maskSprite = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, message);
      byte_4B3E916 = 1;
    }
    v17 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v17->oneVector.fields.x;
    y = v17->oneVector.fields.y;
    z = v17->oneVector.fields.z;
  }
  else
  {
    x = warningMessageWidth / v10;
    z = 1.0;
    y = 1.0;
  }
  if ( !v11 )
    goto LABEL_29;
LABEL_24:
  UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_29;
  message = (System_String_o *)this->fields.warningMessageLabel;
  v20 = *(_QWORD *)(maskSprite + 16);
  v21 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v20 )
    goto LABEL_29;
  v22 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = v20 + 8 * v22;
    *(_DWORD *)(maskSprite + 24) = v22 + 1;
    *(_QWORD *)(v23 + 32) = message;
    sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 32), (int32_t)message, v18, v19);
  }
}


void __fastcall PartyServantListViewItemDraw__UpdateDisp(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  if ( item && !item->fields.isLeave && !item->fields.isQuestRestriction )
  {
    if ( item->fields.isBase )
    {
      if ( (item->fields.fatigureTime & 0x8000000000000000LL) != 0 )
        return;
    }
    else if ( item->fields.isSame
           || item->fields.isNotSameParty
           || (item->fields.commonRestrictionId & 0x80000000) == 0
           || item->fields.isUniqueSvtRestriction
           || (item->fields.fatigureTime & 0x8000000000000000LL) != 0 )
    {
      return;
    }
    PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
  }
}