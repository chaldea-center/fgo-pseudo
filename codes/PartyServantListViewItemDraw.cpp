void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  PartyServantListViewItemDraw_c *v3; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4B1212B & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantListViewItemDraw_TypeInfo, v1, v2);
    byte_4B1212B = 1;
  }
  v3 = PartyServantListViewItemDraw_TypeInfo;
  static_fields = PartyServantListViewItemDraw_TypeInfo->static_fields;
  static_fields->BUDDY_INFO_BASE_POS.fields.z = 0.0;
  *(_QWORD *)&static_fields->BUDDY_INFO_WIDTH_DEFAULT = 0x5E000000C8LL;
  *(_QWORD *)&static_fields->BUDDY_INFO_BASE_POS.fields.x = 1112014848LL;
  v3->static_fields->DATA_LOST_MASK_HEIGHT = 154;
}


void __fastcall PartyServantListViewItemDraw___ctor(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyServantListViewItemDraw__Awake(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UILabel_o *maskMessageLabel; // x0
  struct UILabel_o *warningMessageLabel; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  UnityEngine_Object_o *maskSprite; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct UISprite_o *v38; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v40; // x8

  if ( (byte_4B12121 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B12121 = 1;
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
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v10,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.messageLabelList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.switchInfoList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v38 = this->fields.maskSprite;
    if ( v38 )
    {
      mAtlas = v38->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.maskSpriteDefaultAtlas,
        (int64_t)mAtlas,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v40 = this->fields.maskSprite;
      if ( v40 )
      {
        this->fields.maskSpriteDefaultHeight = v40->fields.mHeight;
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(maskMessageLabel, method);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_4B12126 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12126 = 1;
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
    sub_1BCAA3C(maskSprite, method);
  }
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)maskSprite, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetClassCompatibilityIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  void *userServantEntity; // x0
  PartyOrganizationRootComponent_c *v17; // x1
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x8
  ServantClassCompatibilityIconComponent_o *v20; // x20
  struct PartyOrganizationListViewItem_o *v21; // x8
  System_Int32_array *v22; // x2
  __int64 methodPtr_low; // x9
  __int64 v24; // x22
  int32_t v25; // w22
  int32_t v26; // w21
  void *v27; // x21
  PartyServantListViewItemDraw_o *v28; // x0
  System_String_o *v29; // x1
  bool v30; // w2
  System_String_o *v31; // x3
  bool v32; // w4
  const MethodInfo *v33; // x5

  if ( (byte_4B12125 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item, isClear);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&PartyOrganizationRootComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B12125 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
        v20 = this->fields.classCompatibilityIcon;
        userServantEntity = (void *)UserServantEntity__getSvtClassId((UserServantEntity_o *)userServantEntity, 0, 0LL);
        v21 = item->fields.baseItem;
        if ( v21 )
        {
          if ( v20 )
          {
            v22 = v21->fields._WaveEnemyClassIds_k__BackingField;
LABEL_18:
            ServantClassCompatibilityIconComponent__SetIcon(v20, (int32_t)userServantEntity, v22, 1, 0LL);
            return;
          }
        }
      }
      goto LABEL_38;
    }
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0LL);
    if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      goto LABEL_34;
    userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_38;
    userServantEntity = (void *)*((_QWORD *)userServantEntity + 4);
    if ( !userServantEntity )
      goto LABEL_38;
    v17 = PartyOrganizationRootComponent_TypeInfo;
    methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 304LL) >= (unsigned int)methodPtr_low
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL) + 8 * methodPtr_low - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v24 = *((_QWORD *)userServantEntity + 59);
      if ( v24 )
      {
        userServantEntity = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 59), 0LL);
        if ( (_DWORD)userServantEntity )
        {
          v25 = *(_DWORD *)(v24 + 24);
          if ( v25 )
          {
            v26 = (int)userServantEntity;
            userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = DataManager__GetMasterData_object_(
                                  (DataManager_o *)userServantEntity,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !userServantEntity )
              goto LABEL_38;
            userServantEntity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)userServantEntity, v26, v25, 0LL);
            v20 = this->fields.classCompatibilityIcon;
            if ( userServantEntity )
            {
              v27 = userServantEntity;
              userServantEntity = item->fields.userServantEntity;
              if ( userServantEntity )
              {
                userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                              (UserServantEntity_o *)userServantEntity,
                                              0,
                                              0LL);
                if ( v20 )
                {
                  v22 = (System_Int32_array *)*((_QWORD *)v27 + 6);
                  goto LABEL_18;
                }
              }
LABEL_38:
              sub_1BCAA3C(userServantEntity, v17);
            }
LABEL_35:
            if ( !v20 )
              goto LABEL_38;
            userServantEntity = v20;
LABEL_37:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)userServantEntity,
              0LL);
            return;
          }
        }
      }
LABEL_34:
      v20 = this->fields.classCompatibilityIcon;
      goto LABEL_35;
    }
    v28 = (PartyServantListViewItemDraw_o *)sub_1BCACFC(userServantEntity);
    PartyServantListViewItemDraw__SetMaskMessage(v28, v29, v30, v31, v32, v33);
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
    sub_1BCAA3C(this, item);
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
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  UILabel_o *maskFatigureMessageLabel; // x22
  __int64 v24; // x1
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v26; // x8
  System_String_o *v27; // x23
  System_String_o *v28; // x0
  int32_t v29; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v31; // s0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v41; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4B1212A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, item, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_11647/*"SELECT_NO_SORTIE_FATIGURE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20528/*"img_frames_mask04"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11653/*"SELECT_NO_SORTIE_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11649/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_433/*"#042484"*/, v15, v16);
    this = (PartyServantListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B1212A = 1;
  }
  *(_QWORD *)&value.fields.r = 0LL;
  *(_QWORD *)&value.fields.b = 0LL;
  if ( !v3 )
    goto LABEL_39;
  fatigureTime = v3->fields.fatigureTime;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  RestTime4 = LocalizationManager__GetRestTime4(fatigureTime, -1LL, 0LL);
  if ( System_String__IsNullOrEmpty(RestTime4, 0LL) )
  {
    v3->fields.fatigureTime = -1LL;
    PartyServantListViewItemDraw__ClearMessage(v4, (const MethodInfo *)item);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v4, v3, 0, v21);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20528/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_433/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v43.fields.g = value.fields.g;
  v43.fields.b = value.fields.b;
  v43.fields.r = value.fields.r;
  v43.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v43, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11653/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v26 = (System_String_o **)&StringLiteral_11649/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v26 = (System_String_o **)&StringLiteral_11647/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v27 = *v26;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  v28 = LocalizationManager__Get(v27, 0LL);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v28, (Il2CppObject *)RestTime4, 0LL);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  v29 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v29, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v31 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v31, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        v38 = *(_QWORD *)&this->fields.m_CachedPtr,
        v39 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v38) )
  {
LABEL_39:
    sub_1BCAA3C(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = v38 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v41 + 32) = item;
    sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 32), (int64_t)item, v32, v33, v34, v35, v36, v37);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetInput(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  _BOOL4 isBase; // w24
  UnityEngine_Object_o *baseButton; // x22
  __int64 v11; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v19; // x2
  bool v20; // w0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x22
  bool v23; // w21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_4B12129 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, item, isInput);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B12129 = 1;
  }
  if ( item )
  {
    isBase = item->fields.isBase;
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_47;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isBase, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    v20 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v19);
    v22 = (UnityEngine_Object_o *)this->fields.selectObject;
    v23 = v20;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
      goto LABEL_45;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
LABEL_45:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v24);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v23, v25);
      return;
    }
LABEL_47:
    sub_1BCAA3C(Component_object, v11);
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
  __int64 v8; // x2
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
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  _BOOL4 isBase; // w23
  __int64 v33; // x1
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v40; // x2
  bool v41; // w0
  __int64 v42; // x1
  UnityEngine_Object_o *selectObject; // x22
  bool v44; // w21
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v49; // w9
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v59; // x8
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v61; // x0
  __int64 v62; // x1
  System_String_o *v63; // x21
  System_String_o *v64; // x0
  UILabel_o *v65; // x21
  Il2CppObject *v66; // x22
  System_String_o *v67; // x23
  Il2CppObject *v68; // x0
  float v69; // s1
  float v70; // s2
  float v71; // s8
  float v72; // s9
  unsigned int localPosition; // s0
  float v74; // s10
  float v75; // s0
  UIWidget_o *v76; // x21
  float v77; // s11
  float v78; // s0
  int32_t v79; // w1
  unsigned int localScale; // s0
  float v81; // s12
  __int64 v82; // x1
  UISprite_o *svtPointIconSprite; // x21
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v90; // x22
  Il2CppObject *v91; // x23
  Il2CppObject *v92; // x0
  int32_t MaxWave_k__BackingField; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+8h] [xbp-68h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4B12122 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Math_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&PartyServantListViewItemDraw_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_15709/*"WAVE_BATTLE_SERVANT_WAVE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10442/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_19875/*"func_group_icon_1028"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10443/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v29, v30);
    byte_4B12122 = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
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
            FlashingIconComponent__Set_38836528(
              (FlashingIconComponent_o *)servantFaceIcon,
              v5->fields.partyIndex >= 0,
              0LL);
          }
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
        v41 = PartyServantListViewItemDraw__SetMessageLabel(this, v5, v40);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v44 = v41;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
        if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.selectObject;
          if ( !servantFaceIcon )
            goto LABEL_99;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0LL);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, v5, v45);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, v5, v44, v46);
        switchInfoList = this->fields.switchInfoList;
        if ( switchInfoList )
        {
          size = switchInfoList->fields._size;
          v49 = switchInfoList->fields._version + 1;
          switchInfoList->fields._size = 0;
          switchInfoList->fields._version = v49;
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
                v56 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
                v57 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( !v56 )
                  goto LABEL_99;
                m_CancellationTokenSource_low = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v56 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)servantFaceIcon,
                    (Il2CppObject *)item,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                }
                else
                {
                  v59 = v56 + 8 * m_CancellationTokenSource_low;
                  LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v59 + 32) = item;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 32), (int64_t)item, v50, v51, v52, v53, v54, v55);
                }
                svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
                servantFaceIcon = (ServantFaceIconComponent_o *)PartyServantListViewItemDraw_TypeInfo;
                if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo, item);
                if ( !svtPointInfoLabel )
                  goto LABEL_99;
                UIWidget__set_width(
                  svtPointInfoLabel,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
                  0LL);
                SvtPointRank_k__BackingField = v5->fields._SvtPointRank_k__BackingField;
                v61 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
                v63 = System_String__Concat_62401220((System_String_o *)StringLiteral_10443/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v61, 0LL);
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
                v64 = LocalizationManager__Get(v63, 0LL);
                v65 = this->fields.svtPointInfoLabel;
                v66 = (Il2CppObject *)v64;
                v67 = LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
                SvtPoint_k__BackingField = v5->fields._SvtPoint_k__BackingField;
                v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_62415592(v67, v66, v68, 0LL);
                if ( !v65 )
                  goto LABEL_99;
                UILabel__set_text(v65, (System_String_o *)servantFaceIcon, 0LL);
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
                *(UnityEngine_Vector3_o *)(&v69 - 1) = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)servantFaceIcon,
                                                         0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v71 = v69;
                v72 = v70;
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
                v74 = *(float *)&localPosition;
                LODWORD(v75) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)servantFaceIcon, 0LL);
                v76 = (UIWidget_o *)this->fields.svtPointInfoLabel;
                v77 = v75;
                servantFaceIcon = (ServantFaceIconComponent_o *)System_Math_TypeInfo;
                if ( !System_Math_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, item);
                if ( !v76 )
                  goto LABEL_99;
                v78 = ceilf(v77);
                v79 = v78 == INFINITY ? 0x80000000 : (int)v78;
                UIWidget__set_width(v76, v79, 0LL);
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
                v81 = *(float *)&localScale;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_99;
                v96.fields.x = -(float)(v74 + (float)(v77 * v81));
                v96.fields.y = v71;
                v96.fields.z = v72;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)servantFaceIcon, v96, 0LL);
                svtPointIconSprite = this->fields.svtPointIconSprite;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v82);
                AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_19875/*"func_group_icon_1028"*/, 0LL);
              }
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
              if ( servantFaceIcon )
              {
                item = (PartyServantListViewItem_o *)this->fields.costComp;
                v84 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
                v85 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                if ( v84 )
                {
                  v86 = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                      (Il2CppObject *)item,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v87 = v84 + 8 * v86;
                    LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = v86 + 1;
                    *(_QWORD *)(v87 + 32) = item;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 32), (int64_t)item, v50, v51, v52, v53, v54, v55);
                  }
                  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
                  if ( servantFaceIcon )
                  {
                    switchInfoComp = this->fields.switchInfoComp;
                    servantFaceIcon = (ServantFaceIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                    if ( switchInfoComp )
                    {
                      SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)servantFaceIcon, 0LL);
                      if ( (v5->fields.partyIndex & 0x80000000) != 0 && v5->fields._OrganizedWave_k__BackingField >= 1 )
                      {
                        wavePartyLabel = this->fields.wavePartyLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
                        v90 = LocalizationManager__Get((System_String_o *)StringLiteral_15709/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
                        SvtPoint_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
                        v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
                        v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
                        servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_62415592(
                                                                          v90,
                                                                          v91,
                                                                          v92,
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
    sub_1BCAA3C(servantFaceIcon, item);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 maskSprite; // x0
  UISprite_o *v20; // x24
  UIWidget_o *v21; // x22
  int32_t *p_DATA_LOST_MASK_HEIGHT; // x8
  float v23; // s8
  System_String_o *v24; // x1
  float v25; // s1
  float v26; // s2
  float v27; // s3
  float v28; // s0
  float v29; // s0
  float v30; // s8
  __int64 v31; // x2
  UnityEngine_Transform_o *v32; // x20
  float maskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v37; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v39; // x8
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_4B12127 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, message, isScale);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v11, v12);
    sub_1BCA7E0(&PartyServantListViewItemDraw_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_20525/*"img_frames_mask01"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B12127 = 1;
  }
  maskSprite = (__int64)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_51;
  maskSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  v20 = this->fields.maskSprite;
  if ( isDataLost )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, message);
    AtlasManager__SetPartyOrganizationImage(v20, maskName, 0LL);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v50.fields.r = 1.0;
    v50.fields.g = 1.0;
    v50.fields.b = 1.0;
    v50.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v50, 0LL);
    v21 = (UIWidget_o *)this->fields.maskSprite;
    maskSprite = (__int64)PartyServantListViewItemDraw_TypeInfo;
    if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo, message);
    if ( !v21 )
      goto LABEL_51;
    p_DATA_LOST_MASK_HEIGHT = &PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
  }
  else
  {
    if ( !v20 )
      goto LABEL_51;
    UISprite__set_atlas(this->fields.maskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v23 = maskName ? 1.0 : 0.0;
    v24 = maskName ? maskName : (System_String_o *)StringLiteral_20525/*"img_frames_mask01"*/;
    UISprite__set_spriteName((UISprite_o *)maskSprite, v24, 0LL);
    maskSprite = (__int64)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_51;
    v25 = v23;
    v26 = v23;
    v27 = maskName ? 1.0 : 0.623;
    v28 = v23;
    UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)(&v25 - 1), 0LL);
    v21 = (UIWidget_o *)this->fields.maskSprite;
    if ( !v21 )
      goto LABEL_51;
    p_DATA_LOST_MASK_HEIGHT = &this->fields.maskSpriteDefaultHeight;
  }
  UIWidget__set_height(v21, *p_DATA_LOST_MASK_HEIGHT, 0LL);
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
    v32 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4B109C6 )
    {
      maskSprite = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, message, v37);
      byte_4B109C6 = 1;
    }
    if ( v32 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_46;
    }
LABEL_51:
    sub_1BCAA3C(maskSprite, message);
  }
  LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_51;
  v30 = v29;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
  v32 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v30 <= maskMessageWidth )
  {
    if ( !byte_4B109C6 )
    {
      maskSprite = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, message, v31);
      byte_4B109C6 = 1;
    }
    v39 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v39->oneVector.fields.x;
    y = v39->oneVector.fields.y;
    z = v39->oneVector.fields.z;
  }
  else
  {
    x = maskMessageWidth / v30;
    z = 1.0;
    y = 1.0;
  }
  if ( !v32 )
    goto LABEL_51;
LABEL_46:
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_51;
  message = (System_String_o *)this->fields.maskMessageLabel;
  v46 = *(_QWORD *)(maskSprite + 16);
  v47 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v46 )
    goto LABEL_51;
  v48 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * v48;
    *(_DWORD *)(maskSprite + 24) = v48 + 1;
    *(_QWORD *)(v49 + 32) = message;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)message, v40, v41, v42, v43, v44, v45);
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v23; // w9
  UILabel_o *skillInvalidLabel; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v34; // x8
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  _BOOL4 isEventJoin; // w21
  __int64 *v44; // x8
  bool v45; // w21
  System_String_o *v46; // x0
  const MethodInfo *v47; // x5
  int m_CancellationTokenSource; // w8
  __int64 v49; // x8
  _QWORD *v50; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x19

  v3 = item;
  v4 = this;
  if ( (byte_4B12123 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, item, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_11634/*"SELECT_CANNOT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11633/*"SELECT_BONUS_SKILL_INVALID"*/, v17, v18);
    this = (PartyServantListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B12123 = 1;
  }
  messageLabelList = v4->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_47;
  size = messageLabelList->fields._size;
  v23 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v23;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11633/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0LL);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_47;
    item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
    v31 = *(_QWORD *)&this->fields.m_CachedPtr;
    v32 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v31 )
      goto LABEL_47;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)item,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = v31 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v34 + 32) = item;
      sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)item, v25, v26, v27, v28, v29, v30);
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
        v44 = &StringLiteral_11658/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
        v46 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
        PartyServantListViewItemDraw__SetMaskMessage(v4, v46, 0, 0LL, 0, v47);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
      if ( isEventJoin )
        goto LABEL_28;
    }
    v44 = &StringLiteral_11634/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( !v3->fields.isPushMode )
  {
    v45 = PartyServantListViewItemDraw__SetRestrictionMask(v4, v3, v36);
    goto LABEL_35;
  }
  if ( (v3->fields.fatigureTime & 0x8000000000000000LL) != 0 )
  {
    PartyServantListViewItemDraw__ClearMessage(v4, v35);
    v45 = 0;
    goto LABEL_35;
  }
  PartyServantListViewItemDraw__SetFatigueMask(v4, v3, v36);
LABEL_34:
  v45 = 1;
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
      v49 = *(_QWORD *)&this->fields.m_CachedPtr;
      v50 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v49 )
        goto LABEL_47;
      if ( *(_DWORD *)(v49 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v49 + 40) = item;
        sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 40), (int64_t)item, v37, v38, v39, v40, v41, v42);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0LL);
        return v45;
      }
    }
LABEL_47:
    sub_1BCAA3C(this, item);
  }
  return v45;
}


bool __fastcall PartyServantListViewItemDraw__SetRestrictionMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  PartyServantListViewItemDraw_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x0
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v30; // x5
  bool v31; // w20
  System_String_o *v32; // x1
  bool v33; // w2
  PartyServantListViewItemDraw_o *v34; // x0
  System_String_o *v35; // x3
  bool v36; // w4
  __int64 *v37; // x8
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  __int64 *v41; // x8
  System_String_o *v42; // x21
  int32_t *v43; // x1
  Il2CppObject *v44; // x0
  int32_t v45; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4B12124 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, item, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_15660/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_10416/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_11646/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_6545/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11645/*"SELECT_NO_SORTIE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_18662/*"datalost_svt_select"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    this = (PartyServantListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_10463/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v26, v27);
    byte_4B12124 = 1;
  }
  if ( !item )
    sub_1BCAA3C(this, item);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v28 = (System_String_o *)StringLiteral_11645/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v33 = 1;
    v34 = v5;
    v35 = 0LL;
    v36 = 0;
    goto LABEL_15;
  }
  if ( item->fields.isBase )
  {
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v37 = &StringLiteral_10416/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v38 = LocalizationManager__Get((System_String_o *)*v37, 0LL);
      v31 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v5, v38, 1, v39);
      return v31;
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        v43 = &TimesToRestart_k__BackingField;
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_65:
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v43);
        RestrictionMessage = System_String__Format(v42, v44, 0LL);
        goto LABEL_9;
      }
LABEL_72:
      PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
      return 0;
    }
LABEL_61:
    v36 = 1;
    v34 = v5;
    v32 = (System_String_o *)StringLiteral_1/*""*/;
    v35 = (System_String_o *)StringLiteral_18662/*"datalost_svt_select"*/;
    v33 = 0;
LABEL_15:
    v31 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v34, v32, v33, v35, v36, v3);
    return v31;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
    v43 = &v45;
    v45 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_65;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v41 = &StringLiteral_10463/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    v37 = &StringLiteral_6545/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
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
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      v41 = &StringLiteral_15660/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_36;
    }
    goto LABEL_72;
  }
LABEL_47:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  v41 = &StringLiteral_11646/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_36:
  v28 = (System_String_o *)*v41;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v28, 0LL);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v5, RestrictionMessage, 0, 0LL, 0, v30);
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
  __int64 v8; // x2
  __int64 maskSprite; // x0
  float v10; // s0
  float v11; // s8
  __int64 v12; // x2
  UnityEngine_Transform_o *v13; // x20
  float warningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v18; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v20; // x8
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8

  v5 = message;
  if ( (byte_4B12128 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, message, isScale);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B12128 = 1;
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
    v13 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4B109C6 )
    {
      maskSprite = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, message, v18);
      byte_4B109C6 = 1;
    }
    if ( v13 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_24;
    }
LABEL_29:
    sub_1BCAA3C(maskSprite, message);
  }
  LODWORD(v10) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (__int64)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  v11 = v10;
  maskSprite = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)maskSprite, 0LL);
  v13 = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v11 <= warningMessageWidth )
  {
    if ( !byte_4B109C6 )
    {
      maskSprite = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, message, v12);
      byte_4B109C6 = 1;
    }
    v20 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v20->oneVector.fields.x;
    y = v20->oneVector.fields.y;
    z = v20->oneVector.fields.z;
  }
  else
  {
    x = warningMessageWidth / v11;
    z = 1.0;
    y = 1.0;
  }
  if ( !v13 )
    goto LABEL_29;
LABEL_24:
  UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&x, 0LL);
  maskSprite = (__int64)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_29;
  message = (System_String_o *)this->fields.warningMessageLabel;
  v27 = *(_QWORD *)(maskSprite + 16);
  v28 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v27 )
    goto LABEL_29;
  v29 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = v27 + 8 * v29;
    *(_DWORD *)(maskSprite + 24) = v29 + 1;
    *(_QWORD *)(v30 + 32) = message;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)message, v21, v22, v23, v24, v25, v26);
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