void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyServantListViewItemDraw_c *v1; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4BD83C4 & 1) == 0 )
  {
    sub_1C21E38(&PartyServantListViewItemDraw_TypeInfo);
    byte_4BD83C4 = 1;
  }
  v1 = PartyServantListViewItemDraw_TypeInfo;
  static_fields = PartyServantListViewItemDraw_TypeInfo->static_fields;
  static_fields->BUDDY_INFO_BASE_POS.fields.z = 0.0;
  *(_QWORD *)&static_fields->BUDDY_INFO_WIDTH_DEFAULT = 0x5E000000C8LL;
  *(_QWORD *)&static_fields->BUDDY_INFO_BASE_POS.fields.x = 1112014848LL;
  v1->static_fields->DATA_LOST_MASK_HEIGHT = 154;
}


void __fastcall PartyServantListViewItemDraw___ctor(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyServantListViewItemDraw__Awake(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *maskMessageLabel; // x0
  struct UILabel_o *warningMessageLabel; // x8
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Object_o *maskSprite; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UISprite_o *v26; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v28; // x8

  if ( (byte_4BD83BA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD83BA = 1;
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
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.messageLabelList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.switchInfoList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v26 = this->fields.maskSprite;
    if ( v26 )
    {
      mAtlas = v26->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.maskSpriteDefaultAtlas,
        (int64_t)mAtlas,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v28 = this->fields.maskSprite;
      if ( v28 )
      {
        this->fields.maskSpriteDefaultHeight = v28->fields.mHeight;
        return;
      }
    }
LABEL_13:
    sub_1C22094(maskMessageLabel, method);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_4BD83BF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD83BF = 1;
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
    sub_1C22094(maskSprite, method);
  }
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)maskSprite, 0LL);
}


void __fastcall PartyServantListViewItemDraw__SetClassCompatibilityIcon(
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
  __int64 methodPtr_low; // x9
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

  if ( (byte_4BD83BE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD83BE = 1;
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
        v12 = this->fields.classCompatibilityIcon;
        userServantEntity = (void *)UserServantEntity__getSvtClassId((UserServantEntity_o *)userServantEntity, 0, 0LL);
        v13 = item->fields.baseItem;
        if ( v13 )
        {
          if ( v12 )
          {
            v14 = v13->fields._WaveEnemyClassIds_k__BackingField;
LABEL_18:
            ServantClassCompatibilityIconComponent__SetIcon(v12, (int32_t)userServantEntity, v14, 1, 0LL);
            return;
          }
        }
      }
      goto LABEL_38;
    }
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0LL);
    if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      goto LABEL_34;
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)*((_QWORD *)userServantEntity + 4);
    if ( !userServantEntity )
      goto LABEL_38;
    v9 = PartyOrganizationRootComponent_TypeInfo;
    methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 304LL) >= (unsigned int)methodPtr_low
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL) + 8 * methodPtr_low - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v16 = *((_QWORD *)userServantEntity + 62);
      if ( v16 )
      {
        userServantEntity = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 62), 0LL);
        if ( (_DWORD)userServantEntity )
        {
          v17 = *(_DWORD *)(v16 + 24);
          if ( v17 )
          {
            v18 = (int)userServantEntity;
            userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = DataManager__GetMasterData_object_(
                                  (DataManager_o *)userServantEntity,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)userServantEntity, v18, v17, 0LL);
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
                                              0LL);
                if ( v12 )
                {
                  v14 = (System_Int32_array *)*((_QWORD *)v19 + 6);
                  goto LABEL_18;
                }
              }
LABEL_38:
              sub_1C22094(userServantEntity, v9);
            }
LABEL_35:
            if ( !v12 )
              goto LABEL_38;
            userServantEntity = v12;
LABEL_37:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)userServantEntity,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      v12 = this->fields.classCompatibilityIcon;
      goto LABEL_35;
    }
    v20 = (PartyServantListViewItemDraw_o *)sub_1C22354(userServantEntity);
    PartyServantListViewItemDraw__SetMaskMessage(v20, v21, v22, v23, v24, v25);
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
    sub_1C22094(this, item);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4BD83C3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11727/*"SELECT_NO_SORTIE_FATIGURE"*/);
    sub_1C21E38(&StringLiteral_20673/*"img_frames_mask04"*/);
    sub_1C21E38(&StringLiteral_11733/*"SELECT_NO_SORTIE_TITLE"*/);
    sub_1C21E38(&StringLiteral_11729/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/);
    sub_1C21E38(&StringLiteral_435/*"#042484"*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD83C3 = 1;
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
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v4, v3, 0, v7);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20673/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_435/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v27.fields.g = value.fields.g;
  v27.fields.b = value.fields.b;
  v27.fields.r = value.fields.r;
  v27.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v27, 0LL);
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
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11733/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v10 = (System_String_o **)&StringLiteral_11729/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v10 = (System_String_o **)&StringLiteral_11727/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v11 = *v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get(v11, 0LL);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v12, (Il2CppObject *)RestTime4, 0LL);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  v13 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v13, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v15 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v15, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        v22 = *(_QWORD *)&this->fields.m_CachedPtr,
        v23 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v22) )
  {
LABEL_39:
    sub_1C22094(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v25 + 32) = item;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)item, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall PartyServantListViewItemDraw__SetInput(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  _BOOL4 isBase; // w24
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
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

  if ( (byte_4BD83C2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD83C2 = 1;
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
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1C22094(Component_object, v9);
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
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  _BOOL4 isBase; // w23
  UnityEngine_Object_o *partyIcon; // x21
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
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v23; // w9
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v33; // x8
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x21
  System_String_o *v37; // x0
  UILabel_o *v38; // x21
  Il2CppObject *v39; // x22
  System_String_o *v40; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  float v45; // s1
  float v46; // s2
  float v47; // s8
  float v48; // s9
  unsigned int localPosition; // s0
  float v50; // s10
  float v51; // s0
  UIWidget_o *v52; // x21
  float v53; // s11
  float v54; // s0
  int32_t v55; // w1
  unsigned int localScale; // s0
  float v57; // s12
  UISprite_o *svtPointIconSprite; // x21
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v65; // x22
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x23
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  int32_t MaxWave_k__BackingField; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+8h] [xbp-68h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4BD83BB & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PartyServantListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_15810/*"WAVE_BATTLE_SERVANT_WAVE"*/);
    sub_1C21E38(&StringLiteral_10513/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_1C21E38(&StringLiteral_20016/*"func_group_icon_1028"*/);
    sub_1C21E38(&StringLiteral_10514/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_4BD83BB = 1;
  }
  SvtPointRank_k__BackingField = 0;
  if ( v5 && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      isBase = v5->fields.isBase;
      ServantFaceIconComponent__Set(
        servantFaceIcon,
        v5->fields.userServantEntity,
        v5->fields.equipIdList,
        v5->fields.questRestrictionInfo,
        v5->fields.iconLabelInfo1,
        v5->fields.iconLabelInfo2,
        0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.info2IconLabel;
      if ( servantFaceIcon )
      {
        UIIconLabel__Set((UIIconLabel_o *)servantFaceIcon, v5->fields.iconLabelInfo3, 0LL);
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
            FlashingIconComponent__Set_39367912(
              (FlashingIconComponent_o *)servantFaceIcon,
              v5->fields.partyIndex >= 0,
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
          if ( v5->fields.isSwapLock )
            isLock = !v5->fields.isLock;
          else
            isLock = v5->fields.isLock;
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
          if ( v5->fields.isSwapChoice )
            isChoice = !v5->fields.isChoice;
          else
            isChoice = v5->fields.isChoice;
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
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isPush, 0LL);
        }
        v16 = PartyServantListViewItemDraw__SetMessageLabel(this, v5, v15);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v18 = v16;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.selectObject;
          if ( !servantFaceIcon )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0LL);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, v5, v19);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, v5, v18, v20);
        switchInfoList = this->fields.switchInfoList;
        if ( switchInfoList )
        {
          size = switchInfoList->fields._size;
          v23 = switchInfoList->fields._version + 1;
          switchInfoList->fields._size = 0;
          switchInfoList->fields._version = v23;
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
                v5->fields._IsDispSvtPoint_k__BackingField,
                0LL);
              if ( v5->fields._IsDispSvtPoint_k__BackingField )
              {
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                item = (PartyServantListViewItem_o *)this->fields.svtPointComp;
                v30 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
                v31 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( !v30 )
                  goto LABEL_99;
                m_CancellationTokenSource_low = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v30 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)servantFaceIcon,
                    (Il2CppObject *)item,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = v30 + 8 * m_CancellationTokenSource_low;
                  LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v33 + 32) = item;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)item, v24, v25, v26, v27, v28, v29);
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
                SvtPointRank_k__BackingField = v5->fields._SvtPointRank_k__BackingField;
                v35 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
                v36 = System_String__Concat_63115476((System_String_o *)StringLiteral_10514/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v35, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                v37 = LocalizationManager__Get(v36, 0LL);
                v38 = this->fields.svtPointInfoLabel;
                v39 = (Il2CppObject *)v37;
                v40 = LocalizationManager__Get((System_String_o *)StringLiteral_10513/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
                SvtPoint_k__BackingField = v5->fields._SvtPoint_k__BackingField;
                v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField, v41, v42, v43);
                servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_63129848(v40, v39, v44, 0LL);
                if ( !v38 )
                  goto LABEL_99;
                UILabel__set_text(v38, (System_String_o *)servantFaceIcon, 0LL);
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
                *(UnityEngine_Vector3_o *)(&v45 - 1) = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)servantFaceIcon,
                                                         0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v47 = v45;
                v48 = v46;
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
                v50 = *(float *)&localPosition;
                LODWORD(v51) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)servantFaceIcon, 0LL);
                v52 = (UIWidget_o *)this->fields.svtPointInfoLabel;
                v53 = v51;
                servantFaceIcon = (ServantFaceIconComponent_o *)System_Math_TypeInfo;
                if ( !System_Math_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                if ( !v52 )
                  goto LABEL_99;
                v54 = ceilf(v53);
                v55 = v54 == INFINITY ? 0x80000000 : (int)v54;
                UIWidget__set_width(v52, v55, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                UILabel__SetCondensedScale(
                  (UILabel_o *)servantFaceIcon,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
                  0,
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
                v57 = *(float *)&localScale;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v77.fields.x = -(float)(v50 + (float)(v53 * v57));
                v77.fields.y = v47;
                v77.fields.z = v48;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)servantFaceIcon, v77, 0LL);
                svtPointIconSprite = this->fields.svtPointIconSprite;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_20016/*"func_group_icon_1028"*/, 0LL);
              }
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
              if ( servantFaceIcon )
              {
                item = (PartyServantListViewItem_o *)this->fields.costComp;
                v59 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
                v60 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( v59 )
                {
                  v61 = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                      (Il2CppObject *)item,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v62 = v59 + 8 * v61;
                    LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = v61 + 1;
                    *(_QWORD *)(v62 + 32) = item;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v62 + 32), (int64_t)item, v24, v25, v26, v27, v28, v29);
                  }
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
                  if ( servantFaceIcon )
                  {
                    switchInfoComp = this->fields.switchInfoComp;
                    servantFaceIcon = (ServantFaceIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchInfoComp )
                    {
                      SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)servantFaceIcon, 0LL);
                      if ( (v5->fields.partyIndex & 0x80000000) != 0 && v5->fields._OrganizedWave_k__BackingField >= 1 )
                      {
                        wavePartyLabel = this->fields.wavePartyLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_15810/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
                        SvtPoint_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
                        v69 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &SvtPoint_k__BackingField,
                                                v66,
                                                v67,
                                                v68);
                        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
                        v73 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                int_TypeInfo,
                                                &MaxWave_k__BackingField,
                                                v70,
                                                v71,
                                                v72);
                        servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_63129848(
                                                                          v65,
                                                                          v69,
                                                                          v73,
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
    sub_1C22094(servantFaceIcon, item);
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
  UnityEngine_Component_o *maskSprite; // x0
  UISprite_o *v12; // x24
  UIWidget_o *v13; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  float v15; // s8
  System_String_o *v16; // x1
  float v17; // s1
  float v18; // s2
  float v19; // s3
  float v20; // s0
  float v21; // s0
  float v22; // s8
  UnityEngine_Transform_o *v23; // x20
  float maskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 klass_low; // x10
  __int64 v39; // x8
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_4BD83C0 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&PartyServantListViewItemDraw_TypeInfo);
    sub_1C21E38(&StringLiteral_20670/*"img_frames_mask01"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD83C0 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_51;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  v12 = this->fields.maskSprite;
  if ( isDataLost )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v12, maskName, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v40.fields.r = 1.0;
    v40.fields.g = 1.0;
    v40.fields.b = 1.0;
    v40.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v40, 0LL);
    v13 = (UIWidget_o *)this->fields.maskSprite;
    maskSprite = (UnityEngine_Component_o *)PartyServantListViewItemDraw_TypeInfo;
    if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
    if ( !v13 )
      goto LABEL_51;
    p_DATA_LOST_MASK_HEIGHT = &PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
  }
  else
  {
    if ( !v12 )
      goto LABEL_51;
    UISprite__set_atlas(this->fields.maskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v15 = maskName ? 1.0 : 0.0;
    v16 = maskName ? maskName : (System_String_o *)StringLiteral_20670/*"img_frames_mask01"*/;
    UISprite__set_spriteName((UISprite_o *)maskSprite, v16, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v17 = v15;
    v18 = v15;
    v19 = maskName ? 1.0 : 0.623;
    v20 = v15;
    UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)(&v17 - 1), 0LL);
    v13 = (UIWidget_o *)this->fields.maskSprite;
    if ( !v13 )
      goto LABEL_51;
    p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
  }
  UIWidget__set_height(v13, *p_DATA_LOST_MASK_HEIGHT, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_51;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  UILabel__set_text((UILabel_o *)maskSprite, v9, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  if ( !isScale )
  {
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
    v23 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4BD6BB6 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    if ( v23 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_46;
    }
LABEL_51:
    sub_1C22094(maskSprite, message);
  }
  LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  v22 = v21;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  v23 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v22 <= maskMessageWidth )
  {
    if ( !byte_4BD6BB6 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    v29 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v29->oneVector.fields.x;
    y = v29->oneVector.fields.y;
    z = v29->oneVector.fields.z;
  }
  else
  {
    x = maskMessageWidth / v22;
    z = 1.0;
    y = 1.0;
  }
  if ( !v23 )
    goto LABEL_51;
LABEL_46:
  UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_51;
  message = (System_String_o *)this->fields.maskMessageLabel;
  v36 = *(_QWORD *)&maskSprite->fields.m_CachedPtr;
  v37 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(maskSprite[1].klass);
  if ( !v36 )
    goto LABEL_51;
  klass_low = SLODWORD(maskSprite[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = v36 + 8 * klass_low;
    LODWORD(maskSprite[1].klass) = klass_low + 1;
    *(_QWORD *)(v39 + 32) = message;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)message, v30, v31, v32, v33, v34, v35);
  }
}


bool __fastcall PartyServantListViewItemDraw__SetMessageLabel(
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v18; // x8
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
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
  if ( (byte_4BD83BC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11714/*"SELECT_CANNOT"*/);
    sub_1C21E38(&StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C21E38(&StringLiteral_11713/*"SELECT_BONUS_SKILL_INVALID"*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD83BC = 1;
  }
  messageLabelList = v4->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_47;
  size = messageLabelList->fields._size;
  v7 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v7;
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
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11713/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0LL);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_47;
    item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
    v15 = *(_QWORD *)&this->fields.m_CachedPtr;
    v16 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v15 )
      goto LABEL_47;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v15 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)item,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = v15 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v18 + 32) = item;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)item, v9, v10, v11, v12, v13, v14);
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
        v28 = &StringLiteral_11738/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
    v28 = &StringLiteral_11714/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( !v3->fields.isPushMode )
  {
    v29 = PartyServantListViewItemDraw__SetRestrictionMask(v4, v3, v20);
    goto LABEL_35;
  }
  if ( (v3->fields.fatigureTime & 0x8000000000000000LL) != 0 )
  {
    PartyServantListViewItemDraw__ClearMessage(v4, v19);
    v29 = 0;
    goto LABEL_35;
  }
  PartyServantListViewItemDraw__SetFatigueMask(v4, v3, v20);
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
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v33 + 40) = item;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 40), (int64_t)item, v21, v22, v23, v24, v25, v26);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0LL);
        return v29;
      }
    }
LABEL_47:
    sub_1C22094(this, item);
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
  System_String_o *v23; // x21
  int32_t *v24; // x1
  Il2CppObject *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4BD83BD & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_15759/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C21E38(&StringLiteral_10486/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C21E38(&StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C21E38(&StringLiteral_11726/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C21E38(&StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C21E38(&StringLiteral_6593/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C21E38(&StringLiteral_11725/*"SELECT_NO_SORTIE"*/);
    sub_1C21E38(&StringLiteral_10512/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/);
    sub_1C21E38(&StringLiteral_18788/*"datalost_svt_select"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C21E38(&StringLiteral_10534/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_4BD83BD = 1;
  }
  if ( !item )
    sub_1C22094(this, item);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = (System_String_o *)StringLiteral_11725/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10485/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v11 = 1;
    v12 = v5;
    v13 = 0LL;
    v14 = 0;
    goto LABEL_15;
  }
  if ( item->fields.isBase )
  {
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = &StringLiteral_10486/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v16 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
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
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      v24 = &TimesToRestart_k__BackingField;
      TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_67:
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v24, v20, v21, v22);
      RestrictionMessage = System_String__Format(v23, v25, 0LL);
      goto LABEL_9;
    }
LABEL_63:
    v14 = 1;
    v12 = v5;
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    v13 = (System_String_o *)StringLiteral_18788/*"datalost_svt_select"*/;
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
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11732/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
    v24 = &v26;
    v26 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_67;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = &StringLiteral_10534/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_48;
  }
  if ( item->fields.isNotSameParty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = &StringLiteral_10512/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/;
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
    v15 = &StringLiteral_6593/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
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
      v19 = &StringLiteral_15759/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_48;
    }
LABEL_62:
    PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
    return 0;
  }
LABEL_45:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = &StringLiteral_11726/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_48:
  v6 = (System_String_o *)*v19;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v6, 0LL);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v5, RestrictionMessage, 0, 0LL, 0, v8);
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
  UnityEngine_Component_o *maskSprite; // x0
  float v8; // s0
  float v9; // s8
  UnityEngine_Transform_o *v10; // x20
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v16; // x8
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  __int64 v26; // x8

  v5 = message;
  if ( (byte_4BD83C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD83C1 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_29;
  FlashingIconComponent__SetFast((FlashingIconComponent_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, v5, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  if ( !isScale )
  {
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
    v10 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4BD6BB6 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
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
    sub_1C22094(maskSprite, message);
  }
  LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  v9 = v8;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  v10 = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v9 <= warningMessageWidth )
  {
    if ( !byte_4BD6BB6 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
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
  UnityEngine_Transform__set_localScale(v10, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_29;
  message = (System_String_o *)this->fields.warningMessageLabel;
  v23 = *(_QWORD *)&maskSprite->fields.m_CachedPtr;
  v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(maskSprite[1].klass);
  if ( !v23 )
    goto LABEL_29;
  klass_low = SLODWORD(maskSprite[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = v23 + 8 * klass_low;
    LODWORD(maskSprite[1].klass) = klass_low + 1;
    *(_QWORD *)(v26 + 32) = message;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)message, v17, v18, v19, v20, v21, v22);
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