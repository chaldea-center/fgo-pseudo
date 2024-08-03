void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItemDraw_c *v2; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_49F8579 & 1) == 0 )
  {
    sub_1B640C8(&PartyServantListViewItemDraw_TypeInfo, v1);
    byte_49F8579 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct UISprite_o *v20; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v22; // x8

  if ( (byte_49F856F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F856F = 1;
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
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UIWidget__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.messageLabelList, (int32_t)v9, v10, v11);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchInfoList, (int32_t)v14, v15, v16);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v20 = this->fields.maskSprite;
    if ( v20 )
    {
      mAtlas = v20->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v18, v19);
      v22 = this->fields.maskSprite;
      if ( v22 )
      {
        this->fields.maskSpriteDefaultHeight = v22->fields.mHeight;
        return;
      }
    }
LABEL_13:
    sub_1B64324(maskMessageLabel);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_49F8574 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49F8574 = 1;
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
    sub_1B64324(maskSprite);
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
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x8
  ServantClassCompatibilityIconComponent_o *v15; // x20
  struct PartyOrganizationListViewItem_o *v16; // x8
  System_Int32_array *v17; // x2
  __int64 methodPtr_low; // x9
  __int64 v19; // x22
  int32_t v20; // w22
  int32_t v21; // w21
  void *v22; // x21
  PartyServantListViewItemDraw_o *v23; // x0
  System_String_o *v24; // x1
  bool v25; // w2
  System_String_o *v26; // x3
  bool v27; // w4
  const MethodInfo *v28; // x5

  if ( (byte_49F8573 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&PartyOrganizationRootComponent_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49F8573 = 1;
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
        v15 = this->fields.classCompatibilityIcon;
        userServantEntity = (void *)UserServantEntity__getSvtClassId((UserServantEntity_o *)userServantEntity, 0, 0LL);
        v16 = item->fields.baseItem;
        if ( v16 )
        {
          if ( v15 )
          {
            v17 = v16->fields._WaveEnemyClassIds_k__BackingField;
LABEL_18:
            ServantClassCompatibilityIconComponent__SetIcon(v15, (int32_t)userServantEntity, v17, 1, 0LL);
            return;
          }
        }
      }
      goto LABEL_38;
    }
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0LL);
    if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      goto LABEL_34;
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)*((_QWORD *)userServantEntity + 4);
    if ( !userServantEntity )
      goto LABEL_38;
    methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 304LL) >= (unsigned int)methodPtr_low
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL) + 8 * methodPtr_low - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v19 = *((_QWORD *)userServantEntity + 59);
      if ( v19 )
      {
        userServantEntity = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 59), 0LL);
        if ( (_DWORD)userServantEntity )
        {
          v20 = *(_DWORD *)(v19 + 24);
          if ( v20 )
          {
            v21 = (int)userServantEntity;
            userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = DataManager__GetMasterData_object_(
                                  (DataManager_o *)userServantEntity,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)userServantEntity, v21, v20, 0LL);
            v15 = this->fields.classCompatibilityIcon;
            if ( userServantEntity )
            {
              v22 = userServantEntity;
              userServantEntity = item->fields.userServantEntity;
              if ( userServantEntity )
              {
                userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                              (UserServantEntity_o *)userServantEntity,
                                              0,
                                              0LL);
                if ( v15 )
                {
                  v17 = (System_Int32_array *)*((_QWORD *)v22 + 6);
                  goto LABEL_18;
                }
              }
LABEL_38:
              sub_1B64324(userServantEntity);
            }
LABEL_35:
            if ( !v15 )
              goto LABEL_38;
            userServantEntity = v15;
LABEL_37:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)userServantEntity,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      v15 = this->fields.classCompatibilityIcon;
      goto LABEL_35;
    }
    v23 = (PartyServantListViewItemDraw_o *)sub_1B645E4(userServantEntity);
    PartyServantListViewItemDraw__SetMaskMessage(v23, v24, v25, v26, v27, v28);
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
    sub_1B64324(this);
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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  UILabel_o *maskFatigureMessageLabel; // x22
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v18; // x8
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  int32_t v21; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v23; // s0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *maskFatigueBase; // x1
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_49F8578 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_11454/*"SELECT_NO_SORTIE_FATIGURE"*/, v6);
    sub_1B640C8(&StringLiteral_20229/*"img_frames_mask04"*/, v7);
    sub_1B640C8(&StringLiteral_11460/*"SELECT_NO_SORTIE_TITLE"*/, v8);
    sub_1B640C8(&StringLiteral_11456/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v9);
    sub_1B640C8(&StringLiteral_439/*"#042484"*/, v10);
    this = (PartyServantListViewItemDraw_o *)sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49F8578 = 1;
  }
  *(_QWORD *)&value.fields.r = 0LL;
  *(_QWORD *)&value.fields.b = 0LL;
  if ( !item )
    goto LABEL_39;
  fatigureTime = item->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    item->fields.fatigureTime = -1LL;
    PartyServantListViewItemDraw__ClearMessage(v4, v14);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v4, item, 0, v15);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20229/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_439/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v32.fields.g = value.fields.g;
  v32.fields.b = value.fields.b;
  v32.fields.r = value.fields.r;
  v32.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v32, 0LL);
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
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11460/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( item->fields.isFatigureRecover )
    v18 = (System_String_o **)&StringLiteral_11456/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v18 = (System_String_o **)&StringLiteral_11454/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v19 = *v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get(v19, 0LL);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v20, (Il2CppObject *)RestTime4, 0LL);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  v21 = item->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v21, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v23 = 24.0;
  if ( !item->fields.isFatigureRecover )
    v23 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v23, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (maskFatigueBase = (Il2CppObject *)v4->fields.maskFatigueBase,
        v27 = *(_QWORD *)&this->fields.m_CachedPtr,
        v28 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v27) )
  {
LABEL_39:
    sub_1B64324(this);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      maskFatigueBase,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = v27 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v30 + 32) = maskFatigueBase;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)maskFatigueBase, v24, v25);
  }
}


void __fastcall PartyServantListViewItemDraw__SetInput(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  _BOOL4 isBase; // w24
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v17; // x2
  bool v18; // w0
  UnityEngine_Object_o *v19; // x22
  bool v20; // w21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3

  if ( (byte_49F8577 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F8577 = 1;
  }
  if ( item )
  {
    isBase = item->fields.isBase;
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_47;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_47;
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
        goto LABEL_47;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_47;
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
        goto LABEL_47;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_47;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0LL);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isBase, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_47;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0LL);
    }
    v18 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v17);
    v19 = (UnityEngine_Object_o *)this->fields.selectObject;
    v20 = v18;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      goto LABEL_45;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
LABEL_45:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v21);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v20, v22);
      return;
    }
LABEL_47:
    sub_1B64324(Component_object);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetItem(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
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
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  _BOOL4 isBase; // w23
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v27; // x2
  bool v28; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v30; // w21
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v35; // w9
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *svtPointComp; // x1
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v42; // x8
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  System_String_o *v46; // x0
  UILabel_o *v47; // x21
  Il2CppObject *v48; // x22
  System_String_o *v49; // x23
  Il2CppObject *v50; // x0
  float v51; // s1
  float v52; // s2
  float v53; // s8
  float v54; // s9
  unsigned int localPosition; // s0
  float v56; // s10
  float v57; // s0
  UIWidget_o *v58; // x21
  float v59; // s11
  float v60; // s0
  int32_t v61; // w1
  unsigned int localScale; // s0
  float v63; // s12
  UISprite_o *svtPointIconSprite; // x21
  Il2CppObject *costComp; // x1
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v72; // x22
  Il2CppObject *v73; // x23
  Il2CppObject *v74; // x0
  int32_t MaxWave_k__BackingField; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+8h] [xbp-68h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8570 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&System_Math_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&PartyServantListViewItemDraw_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_15474/*"WAVE_BATTLE_SERVANT_WAVE"*/, v15);
    sub_1B640C8(&StringLiteral_10260/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v16);
    sub_1B640C8(&StringLiteral_19594/*"func_group_icon_1028"*/, v17);
    sub_1B640C8(&StringLiteral_10261/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v18);
    byte_49F8570 = 1;
  }
  SvtPointRank_k__BackingField = 0;
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      isBase = item->fields.isBase;
      ServantFaceIconComponent__Set(
        servantFaceIcon,
        item->fields.userServantEntity,
        item->fields.equipIdList,
        item->fields.questRestrictionInfo,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.info2IconLabel;
      if ( servantFaceIcon )
      {
        UIIconLabel__Set((UIIconLabel_o *)servantFaceIcon, item->fields.iconLabelInfo3, 0LL);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
          if ( isBase )
          {
            if ( !servantFaceIcon )
              goto LABEL_99;
            FlashingIconComponent__Clear((FlashingIconComponent_o *)servantFaceIcon, 0LL);
          }
          else
          {
            if ( !servantFaceIcon )
              goto LABEL_99;
            FlashingIconComponent__Set_37811588(
              (FlashingIconComponent_o *)servantFaceIcon,
              item->fields.partyIndex >= 0,
              0LL);
          }
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
          if ( !servantFaceIcon )
            goto LABEL_99;
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL);
          if ( !servantFaceIcon )
            goto LABEL_99;
          if ( item->fields.isSwapLock )
            isLock = !item->fields.isLock;
          else
            isLock = item->fields.isLock;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0LL);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
          if ( !servantFaceIcon )
            goto LABEL_99;
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL);
          if ( !servantFaceIcon )
            goto LABEL_99;
          if ( item->fields.isSwapChoice )
            isChoice = !item->fields.isChoice;
          else
            isChoice = item->fields.isChoice;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0LL);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
          if ( !servantFaceIcon )
            goto LABEL_99;
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL);
          if ( !servantFaceIcon )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
        }
        v28 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v27);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v30 = v28;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.selectObject;
          if ( !servantFaceIcon )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isBase, 0LL);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, item, v31);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v30, v32);
        switchInfoList = this->fields.switchInfoList;
        if ( switchInfoList )
        {
          size = switchInfoList->fields._size;
          v35 = switchInfoList->fields._version + 1;
          switchInfoList->fields._size = 0;
          switchInfoList->fields._version = v35;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)switchInfoList->fields._items, 0, size, 0LL);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointComp;
          if ( servantFaceIcon )
          {
            servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)servantFaceIcon,
                                                              0LL);
            if ( servantFaceIcon )
            {
              UnityEngine_GameObject__SetActive(
                (UnityEngine_GameObject_o *)servantFaceIcon,
                item->fields._IsDispSvtPoint_k__BackingField,
                0LL);
              if ( item->fields._IsDispSvtPoint_k__BackingField )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                svtPointComp = (Il2CppObject *)this->fields.svtPointComp;
                v39 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
                v40 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( !v39 )
                  goto LABEL_99;
                m_CancellationTokenSource_low = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)servantFaceIcon,
                    svtPointComp,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                }
                else
                {
                  v42 = v39 + 8 * m_CancellationTokenSource_low;
                  LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v42 + 32) = svtPointComp;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)svtPointComp, v36, v37);
                }
                svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
                servantFaceIcon = (ServantFaceIconComponent_o *)PartyServantListViewItemDraw_TypeInfo;
                if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
                if ( !svtPointInfoLabel )
                  goto LABEL_99;
                UIWidget__set_width(
                  svtPointInfoLabel,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
                  0LL);
                SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
                v44 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
                v45 = System_String__Concat_61375396((System_String_o *)StringLiteral_10261/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v44, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v46 = LocalizationManager__Get(v45, 0LL);
                v47 = this->fields.svtPointInfoLabel;
                v48 = (Il2CppObject *)v46;
                v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10260/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
                SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
                v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_61389768(v49, v48, v50, 0LL);
                if ( !v47 )
                  goto LABEL_99;
                UILabel__set_text(v47, (System_String_o *)servantFaceIcon, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointBaseObj;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_99;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)servantFaceIcon,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
                  0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointBaseObj;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_99;
                *(UnityEngine_Vector3_o *)(&v51 - 1) = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)servantFaceIcon,
                                                         0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v53 = v51;
                v54 = v52;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_99;
                localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)servantFaceIcon,
                                                0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v56 = *(float *)&localPosition;
                LODWORD(v57) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)servantFaceIcon, 0LL);
                v58 = (UIWidget_o *)this->fields.svtPointInfoLabel;
                v59 = v57;
                servantFaceIcon = (ServantFaceIconComponent_o *)System_Math_TypeInfo;
                if ( !System_Math_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                if ( !v58 )
                  goto LABEL_99;
                v60 = ceilf(v59);
                v61 = v60 == INFINITY ? 0x80000000 : (int)v60;
                UIWidget__set_width(v58, v61, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                UILabel__SetCondensedScale(
                  (UILabel_o *)servantFaceIcon,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
                  0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_99;
                localScale = (unsigned int)UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)servantFaceIcon,
                                             0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointBaseObj;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v63 = *(float *)&localScale;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v78.fields.x = -(float)(v56 + (float)(v59 * v63));
                v78.fields.y = v53;
                v78.fields.z = v54;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)servantFaceIcon, v78, 0LL);
                svtPointIconSprite = this->fields.svtPointIconSprite;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_19594/*"func_group_icon_1028"*/, 0LL);
              }
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
              if ( servantFaceIcon )
              {
                costComp = (Il2CppObject *)this->fields.costComp;
                v66 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
                v67 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( v66 )
                {
                  v68 = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                      costComp,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v69 = v66 + 8 * v68;
                    LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = v68 + 1;
                    *(_QWORD *)(v69 + 32) = costComp;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 32), (int32_t)costComp, v36, v37);
                  }
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
                  if ( servantFaceIcon )
                  {
                    switchInfoComp = this->fields.switchInfoComp;
                    servantFaceIcon = (ServantFaceIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchInfoComp )
                    {
                      SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)servantFaceIcon, 0LL);
                      if ( (item->fields.partyIndex & 0x80000000) != 0
                        && item->fields._OrganizedWave_k__BackingField >= 1 )
                      {
                        wavePartyLabel = this->fields.wavePartyLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_15474/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
                        SvtPoint_k__BackingField = item->fields._OrganizedWave_k__BackingField;
                        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
                        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
                        servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_61389768(
                                                                          v72,
                                                                          v73,
                                                                          v74,
                                                                          0LL);
                        if ( wavePartyLabel )
                        {
                          UILabel__set_text(wavePartyLabel, (System_String_o *)servantFaceIcon, 0LL);
                          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.wavePartyIcon;
                          if ( servantFaceIcon )
                          {
                            FlashingIconComponent__Set((FlashingIconComponent_o *)servantFaceIcon, 0LL);
                            return;
                          }
                        }
                      }
                      else
                      {
                        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.wavePartyIcon;
                        if ( servantFaceIcon )
                        {
                          FlashingIconComponent__Clear((FlashingIconComponent_o *)servantFaceIcon, 0LL);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_99:
    sub_1B64324(servantFaceIcon);
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
  __int64 v27; // x1
  UnityEngine_Transform_o *v28; // x20
  float maskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v33; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *maskMessageLabel; // x1
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8575 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, message);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v11);
    sub_1B640C8(&PartyServantListViewItemDraw_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_20226/*"img_frames_mask01"*/, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49F8575 = 1;
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
    v43.fields.r = 1.0;
    v43.fields.g = 1.0;
    v43.fields.b = 1.0;
    v43.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v43, 0LL);
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
    v20 = maskName ? maskName : (System_String_o *)StringLiteral_20226/*"img_frames_mask01"*/;
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
  UILabel__set_text((UILabel_o *)maskSprite, message, 0LL);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  if ( !isScale )
  {
    maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
    v28 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_49F7116 )
    {
      maskSprite = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v33);
      byte_49F7116 = 1;
    }
    if ( v28 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_46;
    }
LABEL_51:
    sub_1B64324(maskSprite);
  }
  LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  v26 = v25;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
  v28 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v26 <= maskMessageWidth )
  {
    if ( !byte_49F7116 )
    {
      maskSprite = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v27);
      byte_49F7116 = 1;
    }
    v35 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v35->oneVector.fields.x;
    y = v35->oneVector.fields.y;
    z = v35->oneVector.fields.z;
  }
  else
  {
    x = maskMessageWidth / v26;
    z = 1.0;
    y = 1.0;
  }
  if ( !v28 )
    goto LABEL_51;
LABEL_46:
  UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_51;
  maskMessageLabel = (Il2CppObject *)this->fields.maskMessageLabel;
  v39 = *(_QWORD *)(maskSprite + 16);
  v40 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v39 )
    goto LABEL_51;
  v41 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      maskMessageLabel,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = v39 + 8 * v41;
    *(_DWORD *)(maskSprite + 24) = v41 + 1;
    *(_QWORD *)(v42 + 32) = maskMessageLabel;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)maskMessageLabel, v36, v37);
  }
}


bool __fastcall PartyServantListViewItemDraw__SetMessageLabel(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
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
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w2
  int32_t v27; // w3
  _BOOL4 isEventJoin; // w21
  __int64 *v29; // x8
  bool v30; // w21
  System_String_o *v31; // x0
  const MethodInfo *v32; // x5
  int m_CancellationTokenSource; // w8
  Il2CppObject *v34; // x1
  __int64 v35; // x8
  _QWORD *v36; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x19

  v4 = this;
  if ( (byte_49F8571 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_11441/*"SELECT_CANNOT"*/, v9);
    sub_1B640C8(&StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/, v10);
    sub_1B640C8(&StringLiteral_11440/*"SELECT_BONUS_SKILL_INVALID"*/, v11);
    this = (PartyServantListViewItemDraw_o *)sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49F8571 = 1;
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
  if ( !item )
    goto LABEL_47;
  skillInvalidLabel = v4->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11440/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0LL);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_47;
    v19 = (Il2CppObject *)v4->fields.skillInvalidLabel;
    v20 = *(_QWORD *)&this->fields.m_CachedPtr;
    v21 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v20 )
      goto LABEL_47;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v19,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = v20 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v23 + 32) = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v19, v17, v18);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(v4->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( !item->fields.isEnabled )
  {
    isEventJoin = item->fields.isEventJoin;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( item->fields.isEventJoin )
      {
LABEL_28:
        v29 = &StringLiteral_11465/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
        v31 = LocalizationManager__Get((System_String_o *)*v29, 0LL);
        PartyServantListViewItemDraw__SetMaskMessage(v4, v31, 0, 0LL, 0, v32);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_28;
    }
    v29 = &StringLiteral_11441/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( !item->fields.isPushMode )
  {
    v30 = PartyServantListViewItemDraw__SetRestrictionMask(v4, item, v25);
    goto LABEL_35;
  }
  if ( (item->fields.fatigureTime & 0x8000000000000000LL) != 0 )
  {
    PartyServantListViewItemDraw__ClearMessage(v4, v24);
    v30 = 0;
    goto LABEL_35;
  }
  PartyServantListViewItemDraw__SetFatigueMask(v4, item, v25);
LABEL_34:
  v30 = 1;
LABEL_35:
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this )
    goto LABEL_47;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    if ( m_CancellationTokenSource == 1 && item->fields.isInvalidRarity )
    {
      v34 = (Il2CppObject *)v4->fields.skillInvalidLabel;
      v35 = *(_QWORD *)&this->fields.m_CachedPtr;
      v36 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v35 )
        goto LABEL_47;
      if ( *(_DWORD *)(v35 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          v34,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v35 + 40) = v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 40), (int32_t)v34, v26, v27);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0LL);
        return v30;
      }
    }
LABEL_47:
    sub_1B64324(this);
  }
  return v30;
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
  System_String_o *v17; // x0
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v19; // x5
  bool v20; // w20
  System_String_o *v21; // x1
  bool v22; // w2
  PartyServantListViewItemDraw_o *v23; // x0
  System_String_o *v24; // x3
  bool v25; // w4
  __int64 *v26; // x8
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  __int64 *v30; // x8
  System_String_o *v31; // x21
  int32_t *v32; // x1
  Il2CppObject *v33; // x0
  int32_t v34; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_49F8572 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15425/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v7);
    sub_1B640C8(&StringLiteral_10234/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v8);
    sub_1B640C8(&StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v9);
    sub_1B640C8(&StringLiteral_11453/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v10);
    sub_1B640C8(&StringLiteral_10233/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v11);
    sub_1B640C8(&StringLiteral_6398/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v12);
    sub_1B640C8(&StringLiteral_11452/*"SELECT_NO_SORTIE"*/, v13);
    sub_1B640C8(&StringLiteral_18405/*"datalost_svt_select"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    this = (PartyServantListViewItemDraw_o *)sub_1B640C8(&StringLiteral_10281/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v16);
    byte_49F8572 = 1;
  }
  if ( !item )
    sub_1B64324(this);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = (System_String_o *)StringLiteral_11452/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10233/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v22 = 1;
    v23 = v5;
    v24 = 0LL;
    v25 = 0;
    goto LABEL_15;
  }
  if ( item->fields.isBase )
  {
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_10234/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v27 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
      v20 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v5, v27, 1, v28);
      return v20;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_40;
    if ( item->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_47;
    if ( !item->fields._IsDataLost_k__BackingField
      || item->fields.isLockMode
      || item->fields.isSelectMode
      || item->fields.isPushMode )
    {
      if ( item->fields._TimesToRestart_k__BackingField >= 1
        && !item->fields.isLockMode
        && !item->fields.isSelectMode
        && !item->fields.isPushMode )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        v32 = &TimesToRestart_k__BackingField;
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_65:
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v32);
        RestrictionMessage = System_String__Format(v31, v33, 0LL);
        goto LABEL_9;
      }
LABEL_72:
      PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
      return 0;
    }
LABEL_61:
    v25 = 1;
    v23 = v5;
    v21 = (System_String_o *)StringLiteral_1/*""*/;
    v24 = (System_String_o *)StringLiteral_18405/*"datalost_svt_select"*/;
    v22 = 0;
LABEL_15:
    v20 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v23, v21, v22, v24, v25, v3);
    return v20;
  }
  if ( item->fields._IsDataLost_k__BackingField
    && !item->fields.isLockMode
    && !item->fields.isSelectMode
    && !item->fields.isPushMode )
  {
    goto LABEL_61;
  }
  if ( item->fields._TimesToRestart_k__BackingField >= 1
    && !item->fields.isLockMode
    && !item->fields.isSelectMode
    && !item->fields.isPushMode )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
    v32 = &v34;
    v34 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_65;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = &StringLiteral_10281/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_36;
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
    v26 = &StringLiteral_6398/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
    goto LABEL_22;
  }
  if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
LABEL_40:
    PartyServantListViewItemDraw__SetFatigueMask(v5, item, method);
    return 1;
  }
  if ( !item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( item->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = &StringLiteral_15425/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_36;
    }
    goto LABEL_72;
  }
LABEL_47:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = &StringLiteral_11453/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_36:
  v17 = (System_String_o *)*v30;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v17, 0LL);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v5, RestrictionMessage, 0, 0LL, 0, v19);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetWarningMessage(
        PartyServantListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 maskSprite; // x0
  float v9; // s0
  float v10; // s8
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x20
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v17; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v19; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *warningMessageLabel; // x1
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8

  if ( (byte_49F8576 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, message);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49F8576 = 1;
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
  UILabel__set_text((UILabel_o *)maskSprite, message, 0LL);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  if ( !isScale )
  {
    maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
    v12 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_49F7116 )
    {
      maskSprite = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
      byte_49F7116 = 1;
    }
    if ( v12 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_24;
    }
LABEL_29:
    sub_1B64324(maskSprite);
  }
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  v10 = v9;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
  v12 = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v10 <= warningMessageWidth )
  {
    if ( !byte_49F7116 )
    {
      maskSprite = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
      byte_49F7116 = 1;
    }
    v19 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v19->oneVector.fields.x;
    y = v19->oneVector.fields.y;
    z = v19->oneVector.fields.z;
  }
  else
  {
    x = warningMessageWidth / v10;
    z = 1.0;
    y = 1.0;
  }
  if ( !v12 )
    goto LABEL_29;
LABEL_24:
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_29;
  warningMessageLabel = (Il2CppObject *)this->fields.warningMessageLabel;
  v23 = *(_QWORD *)(maskSprite + 16);
  v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v23 )
    goto LABEL_29;
  v25 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      warningMessageLabel,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * v25;
    *(_DWORD *)(maskSprite + 24) = v25 + 1;
    *(_QWORD *)(v26 + 32) = warningMessageLabel;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)warningMessageLabel, v20, v21);
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
           || (item->fields.commonRestrictionId & 0x80000000) == 0
           || item->fields.isUniqueSvtRestriction
           || (item->fields.fatigureTime & 0x8000000000000000LL) != 0 )
    {
      return;
    }
    PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
  }
}