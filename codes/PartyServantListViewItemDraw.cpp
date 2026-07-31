void PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyServantListViewItemDraw_c *v1; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9
  struct PartyServantListViewItemDraw_StaticFields *v3; // x8

  if ( (byte_5934108 & 1) == 0 )
  {
    sub_21FFC50(&PartyServantListViewItemDraw_TypeInfo);
    byte_5934108 = 1;
  }
  v1 = PartyServantListViewItemDraw_TypeInfo;
  static_fields = PartyServantListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BUDDY_INFO_BASE_POS.fields.x = 1112014848;
  static_fields->BUDDY_INFO_BASE_POS.fields.z = 0.0;
  v3 = v1->static_fields;
  *(_QWORD *)&static_fields->BUDDY_INFO_WIDTH_DEFAULT = 0x5E000000C8LL;
  v3->DATA_LOST_MASK_HEIGHT = 154;
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *maskSprite; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UISprite_o *v28; // x8
  struct System_String_o *mSpriteName; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct UISprite_o *v36; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v38; // x8

  if ( (byte_59340FE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59340FE = 1;
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
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.messageLabelList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.switchInfoList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v28 = this->fields.maskSprite;
    if ( v28 )
    {
      mSpriteName = v28->fields.mSpriteName;
      this->fields.maskSpriteDefaultName = mSpriteName;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.maskSpriteDefaultName,
        (int32_t)mSpriteName,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v36 = this->fields.maskSprite;
      if ( v36 )
      {
        mAtlas = v36->fields.mAtlas;
        this->fields.maskSpriteDefaultAtlas = mAtlas;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.maskSpriteDefaultAtlas,
          (int32_t)mAtlas,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v38 = this->fields.maskSprite;
        if ( v38 )
        {
          this->fields.maskSpriteDefaultHeight = v38->fields.mHeight;
          return;
        }
      }
    }
LABEL_14:
    sub_21FFECC(maskMessageLabel, method);
  }
}


void PartyServantListViewItemDraw__ClearMessage(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_5934103 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934103 = 1;
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
    sub_21FFECC(maskSprite, method);
  }
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)maskSprite, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  struct ServantClassCompatibilityIconComponent_o *v12; // x20
  struct PartyOrganizationListViewItem_o *v13; // x8
  System_Int32_array *classIds; // x2
  int32_t v15; // w1
  ServantClassCompatibilityIconComponent_o *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 naturalAligment; // x9
  __int64 v20; // x22
  int32_t v21; // w0
  int32_t v22; // w22
  int32_t v23; // w21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v25; // x21
  struct ServantClassCompatibilityIconComponent_o *v26; // x19
  PartyServantListViewItemDraw_o *v27; // x0
  System_String_o *v28; // x1
  bool v29; // w2
  System_String_o *v30; // x3
  bool v31; // w4
  const MethodInfo *v32; // x5

  if ( (byte_5934102 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PartyOrganizationRootComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934102 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isClear);
  userServantEntity = (void *)UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0);
  if ( ((unsigned __int8)userServantEntity & 1) != 0 )
  {
    if ( !isClear )
    {
      if ( !item )
        goto LABEL_34;
      baseItem = item->fields.baseItem;
      if ( !baseItem )
        goto LABEL_34;
      WaveEnemyClassIds_k__BackingField = baseItem->fields._WaveEnemyClassIds_k__BackingField;
      if ( WaveEnemyClassIds_k__BackingField && WaveEnemyClassIds_k__BackingField->max_length )
      {
        userServantEntity = item->fields.userServantEntity;
        if ( userServantEntity )
        {
          v12 = this->fields.classCompatibilityIcon;
          userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                        (UserServantEntity_o *)userServantEntity,
                                        0,
                                        0,
                                        0);
          v13 = item->fields.baseItem;
          if ( v13 )
          {
            if ( v12 )
            {
              classIds = v13->fields._WaveEnemyClassIds_k__BackingField;
              v15 = (int)userServantEntity;
              v16 = v12;
LABEL_15:
              ServantClassCompatibilityIconComponent__SetIcon(v16, v15, classIds, 1, 0);
              return;
            }
          }
        }
        goto LABEL_34;
      }
      userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !userServantEntity )
        goto LABEL_34;
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0) )
      {
        userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !userServantEntity )
          goto LABEL_34;
        userServantEntity = (void *)*((_QWORD *)userServantEntity + 4);
        if ( !userServantEntity )
          goto LABEL_34;
        v9 = PartyOrganizationRootComponent_TypeInfo;
        naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 304LL) < (unsigned int)naturalAligment
          || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL)
                                                  + 8 * naturalAligment
                                                  - 8) != PartyOrganizationRootComponent_TypeInfo )
        {
          v27 = (PartyServantListViewItemDraw_o *)sub_220024C(
                                                    userServantEntity,
                                                    PartyOrganizationRootComponent_TypeInfo,
                                                    v17,
                                                    v18);
          PartyServantListViewItemDraw__SetMaskMessage(v27, v28, v29, v30, v31, v32);
          return;
        }
        v20 = *((_QWORD *)userServantEntity + 65);
        if ( v20 )
        {
          v21 = BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 65), 0);
          if ( v21 )
          {
            v22 = *(_DWORD *)(v20 + 24);
            if ( v22 )
            {
              v23 = v21;
              userServantEntity = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !userServantEntity )
                goto LABEL_34;
              userServantEntity = DataManager__GetMasterData_object_(
                                    (DataManager_o *)userServantEntity,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !userServantEntity )
                goto LABEL_34;
              Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)userServantEntity, v23, v22, 0);
              if ( Entity )
              {
                v25 = Entity;
                userServantEntity = item->fields.userServantEntity;
                if ( userServantEntity )
                {
                  v26 = this->fields.classCompatibilityIcon;
                  userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                                (UserServantEntity_o *)userServantEntity,
                                                0,
                                                0,
                                                0);
                  if ( v26 )
                  {
                    classIds = v25->fields.classIds;
                    v15 = (int)userServantEntity;
                    v16 = v26;
                    goto LABEL_15;
                  }
                }
LABEL_34:
                sub_21FFECC(userServantEntity, v9);
              }
            }
          }
        }
      }
    }
    userServantEntity = this->fields.classCompatibilityIcon;
    if ( !userServantEntity )
      goto LABEL_34;
    ServantClassCompatibilityIconComponent__Clear((ServantClassCompatibilityIconComponent_o *)userServantEntity, 0);
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
    sub_21FFECC(this, item);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *maskFatigureMessageLabel; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v14; // x8
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  int32_t v17; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v19; // s0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_5934107 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12027/*"SELECT_NO_SORTIE_FATIGURE"*/);
    sub_21FFC50(&StringLiteral_21340/*"img_frames_mask04"*/);
    sub_21FFC50(&StringLiteral_12033/*"SELECT_NO_SORTIE_TITLE"*/);
    sub_21FFC50(&StringLiteral_12029/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/);
    sub_21FFC50(&StringLiteral_431/*"#042484"*/);
    this = (PartyServantListViewItemDraw_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934107 = 1;
  }
  *(_QWORD *)&value.fields.r = 0;
  *(_QWORD *)&value.fields.b = 0;
  if ( !v3 )
    goto LABEL_41;
  fatigureTime = v3->fields.fatigureTime;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21340/*"img_frames_mask04"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_431/*"#042484"*/, &value, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  value.fields.a = 0.69804;
  if ( !this )
    goto LABEL_41;
  v31.fields.g = value.fields.g;
  v31.fields.b = value.fields.b;
  v31.fields.r = value.fields.r;
  v31.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v31, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_41;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)this,
    v4->fields.maskSprite,
    (System_String_o *)StringLiteral_21340/*"img_frames_mask04"*/,
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SELECT_NO_SORTIE_TITLE"*/, 0);
  if ( !maskFatigureMessageLabel )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v14 = (System_String_o **)&StringLiteral_12029/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v14 = (System_String_o **)&StringLiteral_12027/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v15 = *v14;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  v16 = LocalizationManager__Get(v15, 0);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v16, (Il2CppObject *)RestTime4, 0);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  v17 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v17, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v19 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v19 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v19, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (m_CachedPtr = this->fields.m_CachedPtr,
        item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        v27 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_41:
    sub_21FFECC(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v29 + 32) = item;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)item, v20, v21, v22, v23, v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyServantListViewItemDraw__SetInput(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v12; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v15; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v18; // x2
  bool v19; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *selectObject; // x22
  bool v23; // w21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_5934106 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934106 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_42;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v15);
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
    v19 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v18);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    v23 = v19;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    if ( !UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
      goto LABEL_40;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
LABEL_40:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v24);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v23, v25);
      return;
    }
LABEL_42:
    sub_21FFECC(Component_object, v8);
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
  _BOOL4 isBase; // w26
  __int64 v10; // x2
  PartyOrganizationListViewItem_o *v11; // x8
  struct UserServantEntity_o *userServantEntity; // x9
  int32_t EquipFriendShipSkillChange_k__BackingField; // w23
  System_Int64_array *equipIdList; // x22
  __int128 v15; // q1
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  bool IsGrandServant; // w24
  bool isChangeFriendShipSvtEquipSkill; // w23
  bool v20; // w7
  int32_t BaseServantId; // w24
  const MethodInfo *v22; // x1
  Il2CppObject *Master_object; // x24
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  struct UserServantEntity_o *v26; // x8
  UserServantGrandEntity_o *v27; // x25
  __int128 v28; // q1
  __int64 v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v33; // x2
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v35; // x2
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v38; // x2
  bool isChoice; // w1
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v41; // x2
  bool v42; // w0
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *selectObject; // x22
  bool v46; // w21
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v51; // w9
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  __int64 v62; // x2
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  System_String_o *v67; // x21
  Il2CppObject *v68; // x22
  UILabel_o *v69; // x21
  System_String_o *v70; // x23
  Il2CppObject *v71; // x0
  float y; // s8
  float z; // s9
  unsigned int v74; // s0
  float v75; // s10
  UnityEngine_Vector2_o v76; // x2
  float v77; // s11
  UIWidget_o *v78; // x21
  unsigned int v79; // w9
  int32_t v80; // w1
  unsigned int localScale; // s0
  float v82; // s12
  __int64 v83; // x1
  __int64 v84; // x2
  UISprite_o *svtPointIconSprite; // x21
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  QuestRestrictionInfo_o *v91; // x0
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  struct UILabel_o *wavePartyLabel; // x20
  System_String_o *v96; // x1
  UILabel_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  struct UILabel_o *v100; // x21
  System_String_o *v101; // x22
  Il2CppObject *v102; // x23
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  int32_t OrganizedWave_k__BackingField; // w8
  System_String_o *v106; // x20
  Il2CppObject *v107; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+80h] [xbp-A0h] BYREF
  int32_t MaxWave_k__BackingField; // [xsp+A8h] [xbp-78h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+ACh] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_59340FF & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&PartyServantListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_16121/*"WAVE_BATTLE_SERVANT_WAVE"*/);
    sub_21FFC50(&StringLiteral_10693/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_21FFC50(&StringLiteral_16117/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/);
    sub_21FFC50(&StringLiteral_16116/*"WAVE_BATTLE_SERVANT_PARTY"*/);
    sub_21FFC50(&StringLiteral_20605/*"func_group_icon_1028"*/);
    sub_21FFC50(&StringLiteral_10694/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_59340FF = 1;
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
      goto LABEL_148;
    isBase = v5->fields.isBase;
    if ( !*(_BYTE *)(baseItem + 261) )
    {
      equipIdList = v5->fields.equipIdList;
      if ( *(_BYTE *)(baseItem + 262) )
      {
        baseItem = (int64_t)v5->fields.userServantEntity;
        if ( !baseItem )
          goto LABEL_148;
        isChangeFriendShipSvtEquipSkill = v5->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField;
        IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)baseItem, 0);
        v20 = 0;
      }
      else
      {
        isChangeFriendShipSvtEquipSkill = 0;
        v20 = 0;
        IsGrandServant = *(_BYTE *)(baseItem + 397) != 0;
      }
      goto LABEL_33;
    }
    baseItem = (int64_t)PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)baseItem, 0);
    v11 = v5->fields.baseItem;
    if ( !v11 )
      goto LABEL_148;
    userServantEntity = v11->fields.userServantEntity;
    EquipFriendShipSkillChange_k__BackingField = v11->fields._EquipFriendShipSkillChange_k__BackingField;
    equipIdList = (System_Int64_array *)baseItem;
    if ( userServantEntity )
    {
      v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v111.fields.fakeValue = v15;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, v10);
      v110 = v111;
      baseItem = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v110, 0);
      v16 = v5->fields.userServantEntity;
      if ( !v16 )
        goto LABEL_148;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      *(_OWORD *)&v109.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v109.fields.fakeValue = v17;
      if ( baseItem == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v109, 0) )
      {
        IsGrandServant = 1;
LABEL_32:
        v20 = !IsGrandServant;
        isChangeFriendShipSvtEquipSkill = EquipFriendShipSkillChange_k__BackingField > 0;
LABEL_33:
        baseItem = (int64_t)this->fields.servantFaceIcon;
        if ( !baseItem )
          goto LABEL_148;
        ServantFaceIconComponent__Set(
          (ServantFaceIconComponent_o *)baseItem,
          v5->fields.userServantEntity,
          equipIdList,
          questRestrictionInfo,
          v5->fields.iconLabelInfo1,
          v5->fields.iconLabelInfo2,
          IsGrandServant,
          v20,
          isChangeFriendShipSvtEquipSkill,
          0,
          0);
        baseItem = (int64_t)this->fields.servantFaceIcon;
        if ( !baseItem )
          goto LABEL_148;
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          (ServantFaceIconComponent_o *)baseItem,
          this->fields.maskSprite,
          this->fields.maskSpriteDefaultName,
          this->fields.maskSpriteDefaultAtlas,
          0);
        baseItem = (int64_t)this->fields.info2IconLabel;
        if ( !baseItem )
          goto LABEL_148;
        UIIconLabel__Set((UIIconLabel_o *)baseItem, v5->fields.iconLabelInfo3, 0);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
        if ( UnityEngine_Object__op_Inequality(partyIcon, 0, 0) )
        {
          baseItem = (int64_t)this->fields.partyIcon;
          if ( isBase )
          {
            if ( !baseItem )
              goto LABEL_148;
            FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0);
          }
          else
          {
            if ( !baseItem )
              goto LABEL_148;
            FlashingIconComponent__Set_47916600((FlashingIconComponent_o *)baseItem, v5->fields.partyIndex >= 0, 0);
          }
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v33);
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
        {
          baseItem = (int64_t)this->fields.lockSprite;
          if ( !baseItem )
            goto LABEL_148;
          baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          if ( v5->fields.isSwapLock )
            isLock = !v5->fields.isLock;
          else
            isLock = v5->fields.isLock;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, isLock, 0);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v35);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
        {
          baseItem = (int64_t)this->fields.choiceSprite;
          if ( !baseItem )
            goto LABEL_148;
          baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          if ( v5->fields.isSwapChoice )
            isChoice = !v5->fields.isChoice;
          else
            isChoice = v5->fields.isChoice;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, isChoice, 0);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v38);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
        {
          baseItem = (int64_t)this->fields.pushSprite;
          if ( !baseItem )
            goto LABEL_148;
          baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, v5->fields.isPush, 0);
        }
        v42 = PartyServantListViewItemDraw__SetMessageLabel(this, v5, v41);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v46 = v42;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
        if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
        {
          baseItem = (int64_t)this->fields.selectObject;
          if ( !baseItem )
            goto LABEL_148;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseItem, v5->fields.isBase, 0);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, v5, v47);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, v5, v46, v48);
        switchInfoList = this->fields.switchInfoList;
        if ( !switchInfoList )
          goto LABEL_148;
        size = switchInfoList->fields._size;
        v51 = switchInfoList->fields._version + 1;
        switchInfoList->fields._size = 0;
        switchInfoList->fields._version = v51;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)switchInfoList->fields._items, 0, size, 0);
        baseItem = (int64_t)this->fields.svtPointComp;
        if ( !baseItem
          || (baseItem = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseItem, 0)) == 0 )
        {
LABEL_148:
          sub_21FFECC(baseItem, item);
        }
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)baseItem,
          v5->fields._IsDispSvtPoint_k__BackingField,
          0);
        if ( v5->fields._IsDispSvtPoint_k__BackingField )
        {
          baseItem = (int64_t)this->fields.switchInfoList;
          if ( !baseItem )
            goto LABEL_148;
          v58 = *(_QWORD *)(baseItem + 16);
          item = (PartyServantListViewItem_o *)this->fields.svtPointComp;
          v59 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(baseItem + 28);
          if ( !v58 )
            goto LABEL_148;
          v60 = *(int *)(baseItem + 24);
          if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)baseItem,
              (Il2CppObject *)item,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = v58 + 8 * v60;
            *(_DWORD *)(baseItem + 24) = v60 + 1;
            *(_QWORD *)(v61 + 32) = item;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v61 + 32), (int32_t)item, v52, v53, v54, v55, v56, v57);
          }
          svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
          baseItem = (int64_t)PartyServantListViewItemDraw_TypeInfo;
          if ( !*(&PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo, item, v62);
          if ( !svtPointInfoLabel )
            goto LABEL_148;
          UIWidget__set_width(
            svtPointInfoLabel,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
            0);
          SvtPointRank_k__BackingField = v5->fields._SvtPointRank_k__BackingField;
          v64 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0);
          v67 = System_String__Concat_75438412((System_String_o *)StringLiteral_10694/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v64, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65, v66);
          v68 = (Il2CppObject *)LocalizationManager__Get(v67, 0);
          v69 = this->fields.svtPointInfoLabel;
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_10693/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0);
          LODWORD(v111.fields.currentCryptoKey) = v5->fields._SvtPoint_k__BackingField;
          v71 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v111);
          baseItem = (int64_t)System_String__Format_75484576(v70, v68, v71, 0);
          if ( !v69 )
            goto LABEL_148;
          UILabel__set_text(v69, (System_String_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointBaseObj;
          if ( !baseItem )
            goto LABEL_148;
          baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)baseItem,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
            0);
          baseItem = (int64_t)this->fields.svtPointBaseObj;
          if ( !baseItem )
            goto LABEL_148;
          baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_148;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          v74 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_148;
          v75 = *(float *)&v74;
          LODWORD(v77) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)baseItem, 0);
          v78 = (UIWidget_o *)this->fields.svtPointInfoLabel;
          baseItem = (int64_t)System_Math_TypeInfo;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
              System_Math_TypeInfo,
              item,
              v76);
          if ( !v78 )
            goto LABEL_148;
          v79 = vcvtps_s32_f32(v77);
          v80 = ceilf(v77) == INFINITY ? 0x80000000 : v79;
          UIWidget__set_width(v78, v80, 0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_148;
          UILabel__SetCondensedScale(
            (UILabel_o *)baseItem,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
            0,
            0);
          baseItem = (int64_t)this->fields.svtPointInfoLabel;
          if ( !baseItem )
            goto LABEL_148;
          baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)baseItem, 0);
          baseItem = (int64_t)this->fields.svtPointBaseObj;
          if ( !baseItem )
            goto LABEL_148;
          v82 = *(float *)&localScale;
          baseItem = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseItem, 0);
          if ( !baseItem )
            goto LABEL_148;
          v115.fields.y = y;
          v115.fields.z = z;
          v115.fields.x = -(float)(v75 + (float)(v77 * v82));
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseItem, v115, 0);
          svtPointIconSprite = this->fields.svtPointIconSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v83, v84);
          AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_20605/*"func_group_icon_1028"*/, 0);
        }
        baseItem = (int64_t)this->fields.switchInfoList;
        if ( !baseItem )
          goto LABEL_148;
        v86 = *(_QWORD *)(baseItem + 16);
        item = (PartyServantListViewItem_o *)this->fields.costComp;
        v87 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(baseItem + 28);
        if ( !v86 )
          goto LABEL_148;
        v88 = *(int *)(baseItem + 24);
        if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)baseItem,
            (Il2CppObject *)item,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = v86 + 8 * v88;
          *(_DWORD *)(baseItem + 24) = v88 + 1;
          *(_QWORD *)(v89 + 32) = item;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v89 + 32), (int32_t)item, v52, v53, v54, v55, v56, v57);
        }
        baseItem = (int64_t)this->fields.switchInfoList;
        if ( !baseItem )
          goto LABEL_148;
        switchInfoComp = this->fields.switchInfoComp;
        baseItem = (int64_t)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)baseItem,
                              (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchInfoComp )
          goto LABEL_148;
        SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)baseItem, 0, 0);
        if ( v5->fields._OrganizedWave_k__BackingField >= 1 )
        {
          v91 = v5->fields.questRestrictionInfo;
          if ( v91 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v91, 0) )
          {
            baseItem = (int64_t)this->fields.wavePartyCondensedLabel;
            if ( !baseItem )
              goto LABEL_148;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseItem, 0, 0);
            baseItem = (int64_t)this->fields.wavePartyLabel;
            if ( !baseItem )
              goto LABEL_148;
            baseItem = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseItem, 0);
            if ( !baseItem )
              goto LABEL_148;
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)baseItem,
              this->fields.SwitchPartyWavePartyLabelScale,
              0);
            baseItem = (int64_t)this->fields.wavePartyLabel;
            if ( !baseItem )
              goto LABEL_148;
            UILabel__set_fontSize((UILabel_o *)baseItem, this->fields.SwitchPartyWavePartyLabelFontSize, 0);
            if ( (v5->fields.partyIndex & 0x80000000) == 0 )
            {
              baseItem = (int64_t)this->fields.partyIcon;
              if ( !baseItem )
                goto LABEL_148;
              FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0);
              wavePartyLabel = this->fields.wavePartyLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93, v94);
              baseItem = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_16117/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/, 0);
              if ( !wavePartyLabel )
                goto LABEL_148;
              v96 = (System_String_o *)baseItem;
              v97 = wavePartyLabel;
              goto LABEL_145;
            }
            v100 = this->fields.wavePartyLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v92);
            v104 = LocalizationManager__Get((System_String_o *)StringLiteral_16116/*"WAVE_BATTLE_SERVANT_PARTY"*/, 0);
            OrganizedWave_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
            v106 = v104;
            v107 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(OrganizedWave_k__BackingField, 0);
            baseItem = (int64_t)System_String__Format(v106, v107, 0);
            if ( !v100 )
              goto LABEL_148;
LABEL_144:
            v96 = (System_String_o *)baseItem;
            v97 = v100;
LABEL_145:
            UILabel__set_text(v97, v96, 0);
            baseItem = (int64_t)this->fields.wavePartyIcon;
            if ( baseItem )
            {
              FlashingIconComponent__Set((FlashingIconComponent_o *)baseItem, 0);
              return;
            }
            goto LABEL_148;
          }
          if ( v5->fields.partyIndex < 0 )
          {
            baseItem = (int64_t)this->fields.wavePartyLabel;
            if ( !baseItem )
              goto LABEL_148;
            UILabel__set_fontSize((UILabel_o *)baseItem, this->fields.DefaultWavePartyLabelFontSize, 0);
            baseItem = (int64_t)this->fields.wavePartyCondensedLabel;
            if ( !baseItem )
              goto LABEL_148;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)baseItem, 1, 0);
            v100 = this->fields.wavePartyLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v98, v99);
            v101 = LocalizationManager__Get((System_String_o *)StringLiteral_16121/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0);
            LODWORD(v111.fields.currentCryptoKey) = v5->fields._OrganizedWave_k__BackingField;
            v102 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v111);
            MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
            v103 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &MaxWave_k__BackingField);
            baseItem = (int64_t)System_String__Format_75484576(v101, v102, v103, 0);
            if ( !v100 )
              goto LABEL_148;
            goto LABEL_144;
          }
        }
        baseItem = (int64_t)this->fields.wavePartyIcon;
        if ( baseItem )
        {
          FlashingIconComponent__Clear((FlashingIconComponent_o *)baseItem, 0);
          return;
        }
        goto LABEL_148;
      }
      v11 = v5->fields.baseItem;
      if ( !v11 )
        goto LABEL_151;
    }
    if ( v11->fields.isFollower
      || (BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(v11, 0),
          BaseServantId != PartyServantListViewItem__get_BaseServantId(v5, v22)) )
    {
LABEL_151:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v10);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      baseItem = PartyServantListViewItem__get_BaseServantId(v5, v24);
      if ( !Master_object )
        goto LABEL_148;
      baseItem = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(
                            (UserServantGrandMaster_o *)Master_object,
                            baseItem,
                            0);
      if ( baseItem )
      {
        v26 = v5->fields.userServantEntity;
        if ( !v26 )
          goto LABEL_148;
        v27 = (UserServantGrandEntity_o *)baseItem;
        v28 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
        v29 = *(_QWORD *)(baseItem + 32);
        *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v111.fields.fakeValue = v28;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, item, v25);
        v108 = v111;
        IsGrandServant = v29 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v108, 0);
        equipIdList = UserServantGrandEntity__GetEquipUserServantIdList(v27, 0);
        EquipFriendShipSkillChange_k__BackingField = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v27, 0);
        goto LABEL_32;
      }
    }
    IsGrandServant = 0;
    goto LABEL_32;
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
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v12; // x2
  UISprite_o *v13; // x23
  __int64 v14; // x2
  UIWidget_o *v15; // x23
  System_String_o *v16; // x23
  float v17; // s0 OVERLAPPED
  float v18; // s3
  float v19; // s1
  float v20; // s2
  float v21; // s0
  float v22; // s8
  UnityEngine_Transform_o *v23; // x20
  float maskMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_List_object__o *messageLabelList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_5934104 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&PartyServantListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_21337/*"img_frames_mask01"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934104 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_52;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  if ( isDataLost )
  {
    v13 = this->fields.maskSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, message, v12);
    AtlasManager__SetPartyOrganizationImage(v13, maskName, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_52;
    v41.fields.r = 1.0;
    v41.fields.g = 1.0;
    v41.fields.b = 1.0;
    v41.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v41, 0);
    v15 = (UIWidget_o *)this->fields.maskSprite;
    maskSprite = (UnityEngine_Component_o *)PartyServantListViewItemDraw_TypeInfo;
    if ( !*(&PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo, message, v14);
    if ( !v15 )
      goto LABEL_52;
    UIWidget__set_height(v15, PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT, 0);
    message = (System_String_o *)this->fields.maskSprite;
    if ( !message )
      goto LABEL_52;
    maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
    if ( !maskSprite )
      goto LABEL_52;
    ServantFaceIconComponent__SetGrandFaceMaskSpritePartyOrganizationAtlas(
      (ServantFaceIconComponent_o *)maskSprite,
      (UISprite_o *)message,
      maskName,
      (UIAtlas_o *)message[19].monitor,
      0);
  }
  else
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskName )
      v16 = maskName;
    else
      v16 = (System_String_o *)StringLiteral_21337/*"img_frames_mask01"*/;
    if ( !maskSprite )
      goto LABEL_52;
    UISprite__set_atlas((UISprite_o *)maskSprite, this->fields.maskSpriteDefaultAtlas, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_52;
    UISprite__set_spriteName((UISprite_o *)maskSprite, v16, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_52;
    v17 = 0.0;
    if ( maskName )
    {
      v17 = 1.0;
      v18 = 1.0;
    }
    else
    {
      v18 = 0.623;
    }
    v19 = v17;
    v20 = v17;
    UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&v17, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_52;
    UIWidget__set_height((UIWidget_o *)maskSprite, this->fields.maskSpriteDefaultHeight, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
    if ( !maskSprite )
      goto LABEL_52;
    ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
      (ServantFaceIconComponent_o *)maskSprite,
      this->fields.maskSprite,
      v16,
      this->fields.maskSpriteDefaultAtlas,
      0);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_52;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)maskSprite, v9, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !isScale )
  {
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
      v23 = (UnityEngine_Transform_o *)maskSprite;
      if ( !byte_5931945 )
      {
        maskSprite = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      if ( v23 )
      {
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
        x = static_fields->oneVector.fields.x;
        goto LABEL_47;
      }
    }
LABEL_52:
    sub_21FFECC(maskSprite, message);
  }
  if ( !maskSprite )
    goto LABEL_52;
  LODWORD(v21) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_52;
  v22 = v21;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  v23 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v22 <= maskMessageWidth )
  {
    if ( !byte_5931945 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
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
    goto LABEL_52;
LABEL_47:
  UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&x, 0);
  messageLabelList = (System_Collections_Generic_List_object__o *)this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_52;
  items = messageLabelList->fields._items;
  message = (System_String_o *)this->fields.maskMessageLabel;
  v38 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++messageLabelList->fields._version;
  if ( !items )
    goto LABEL_52;
  size = messageLabelList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      messageLabelList,
      (Il2CppObject *)message,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v40[4] = (Il2CppClass *)message;
    messageLabelList->fields._size = size + 1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)message, v30, v31, v32, v33, v34, v35);
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
  __int64 v8; // x2
  UILabel_o *skillInvalidLabel; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int v28; // w8
  __int64 *v29; // x8
  bool v30; // w21
  System_String_o *v31; // x0
  const MethodInfo *v32; // x5
  int m_CancellationTokenSource; // w8
  intptr_t v34; // x8
  _QWORD *v35; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x19

  v3 = item;
  v4 = this;
  if ( (byte_5934100 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12006/*"SELECT_CANNOT"*/);
    sub_21FFC50(&StringLiteral_12038/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_21FFC50(&StringLiteral_12005/*"SELECT_BONUS_SKILL_INVALID"*/);
    this = (PartyServantListViewItemDraw_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934100 = 1;
  }
  messageLabelList = v4->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_49;
  size = messageLabelList->fields._size;
  v7 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskMessageLabel;
  if ( !this )
    goto LABEL_49;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigueBase;
  if ( !this )
    goto LABEL_49;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.warningMessageLabel;
  if ( !this )
    goto LABEL_49;
  ((void (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.skillInvalidLabel;
  if ( !this )
    goto LABEL_49;
  this = (PartyServantListViewItemDraw_o *)((__int64 (__fastcall *)(PartyServantListViewItemDraw_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
                                             this,
                                             this->klass[1]._1.castClass,
                                             0.0);
  if ( !v3 )
    goto LABEL_49;
  skillInvalidLabel = v4->fields.skillInvalidLabel;
  if ( v3->fields.isInvalidRarity )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v8);
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12005/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_49;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_49;
    m_CachedPtr = this->fields.m_CachedPtr;
    item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
    v17 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_49;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)item,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v19 + 32) = item;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)item, v10, v11, v12, v13, v14, v15);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_49;
    UILabel__set_text(v4->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( v3->fields.isEnabled )
  {
    if ( !v3->fields.isPushMode )
    {
      v30 = PartyServantListViewItemDraw__SetRestrictionMask(v4, v3, v21);
      goto LABEL_37;
    }
    if ( v3->fields.fatigureTime < 0 )
    {
      PartyServantListViewItemDraw__ClearMessage(v4, v20);
      v30 = 0;
      goto LABEL_37;
    }
    PartyServantListViewItemDraw__SetFatigueMask(v4, v3, v21);
  }
  else
  {
    v28 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v3->fields.isEventJoin )
    {
      if ( !v28 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
      v29 = &StringLiteral_12038/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( !v28 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
      v29 = &StringLiteral_12006/*"SELECT_CANNOT"*/;
    }
    v31 = LocalizationManager__Get((System_String_o *)*v29, 0);
    PartyServantListViewItemDraw__SetMaskMessage(v4, v31, 0, 0, 0, v32);
  }
  v30 = 1;
LABEL_37:
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this )
    goto LABEL_49;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    if ( m_CancellationTokenSource == 1 && v3->fields.isInvalidRarity )
    {
      v34 = this->fields.m_CachedPtr;
      item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
      v35 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v34 )
        goto LABEL_49;
      if ( (*(_DWORD *)(v34 + 24) & 0xFFFFFFFE) != 0 )
      {
        *(_QWORD *)(v34 + 40) = item;
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 40), (int32_t)item, v22, v23, v24, v25, v26, v27);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0, 0);
        return v30;
      }
    }
LABEL_49:
    sub_21FFECC(this, item);
  }
  return v30;
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
  bool v9; // w19
  System_String_o *v10; // x1
  PartyServantListViewItemDraw_o *v11; // x0
  bool v12; // w2
  System_String_o *v13; // x3
  bool v14; // w4
  __int64 *v15; // x8
  System_String_o *v16; // x1
  PartyServantListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 *v20; // x8
  System_String_o *v21; // x21
  int32_t *v22; // x1
  __int64 v23; // x0
  Il2CppObject *v24; // x0
  int32_t v25; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_5934101 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16061/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_21FFC50(&StringLiteral_10663/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_21FFC50(&StringLiteral_12032/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_21FFC50(&StringLiteral_12026/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_21FFC50(&StringLiteral_10662/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_21FFC50(&StringLiteral_6731/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_21FFC50(&StringLiteral_12025/*"SELECT_NO_SORTIE"*/);
    sub_21FFC50(&StringLiteral_10692/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/);
    sub_21FFC50(&StringLiteral_19274/*"datalost_svt_select"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (PartyServantListViewItemDraw_o *)sub_21FFC50(&StringLiteral_10714/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_5934101 = 1;
  }
  if ( !item )
    sub_21FFECC(this, item);
  if ( item->fields.isLeave )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v6 = (System_String_o *)StringLiteral_12025/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10662/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v11 = v5;
    v12 = 1;
    v13 = 0;
    v14 = 0;
    goto LABEL_15;
  }
  if ( item->fields.isBase )
  {
    if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
      v15 = &StringLiteral_10663/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v16 = LocalizationManager__Get((System_String_o *)*v15, 0);
      v17 = v5;
      v9 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v17, v16, 1, v18);
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
      v22 = &TimesToRestart_k__BackingField;
      v23 = qword_594C070;
      TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_67:
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(v23, v22);
      RestrictionMessage = System_String__Format(v21, v24, 0);
      goto LABEL_9;
    }
LABEL_63:
    v11 = v5;
    v12 = 0;
    v14 = 1;
    v10 = (System_String_o *)StringLiteral_1/*""*/;
    v13 = (System_String_o *)StringLiteral_19274/*"datalost_svt_select"*/;
LABEL_15:
    v9 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v11, v10, v12, v13, v14, v3);
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    v22 = &v25;
    v23 = qword_594C070;
    v25 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_67;
  }
  if ( item->fields.isSame )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v20 = &StringLiteral_10714/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_48;
  }
  if ( item->fields.isNotSameParty )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v20 = &StringLiteral_10692/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/;
    goto LABEL_48;
  }
  if ( (item->fields.commonRestrictionId & 0x80000000) == 0 )
  {
    RestrictionMessage = PartyServantListViewItem__GetRestrictionMessage(item, (const MethodInfo *)item);
    goto LABEL_9;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v15 = &StringLiteral_6731/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
      v20 = &StringLiteral_16061/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_48;
    }
LABEL_62:
    PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
    return 0;
  }
LABEL_45:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
  v20 = &StringLiteral_12026/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_48:
  v6 = (System_String_o *)*v20;
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
  UnityEngine_Component_o *maskSprite; // x0
  float v8; // s0
  float v9; // s8
  UnityEngine_Transform_o *v10; // x20
  float warningMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *messageLabelList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0

  v5 = message;
  if ( (byte_5934105 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934105 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_30;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_30;
  FlashingIconComponent__SetFast((FlashingIconComponent_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)maskSprite, v5, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !isScale )
  {
    if ( maskSprite )
    {
      maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
      v10 = (UnityEngine_Transform_o *)maskSprite;
      if ( !byte_5931945 )
      {
        maskSprite = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      if ( v10 )
      {
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
        x = static_fields->oneVector.fields.x;
        goto LABEL_25;
      }
    }
LABEL_30:
    sub_21FFECC(maskSprite, message);
  }
  if ( !maskSprite )
    goto LABEL_30;
  LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_30;
  v9 = v8;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  v10 = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v9 <= warningMessageWidth )
  {
    if ( !byte_5931945 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
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
    goto LABEL_30;
LABEL_25:
  UnityEngine_Transform__set_localScale(v10, *(UnityEngine_Vector3_o *)&x, 0);
  messageLabelList = (System_Collections_Generic_List_object__o *)this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_30;
  items = messageLabelList->fields._items;
  message = (System_String_o *)this->fields.warningMessageLabel;
  v25 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++messageLabelList->fields._version;
  if ( !items )
    goto LABEL_30;
  size = messageLabelList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      messageLabelList,
      (Il2CppObject *)message,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v27[4] = (Il2CppClass *)message;
    messageLabelList->fields._size = size + 1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)message, v17, v18, v19, v20, v21, v22);
  }
}


void PartyServantListViewItemDraw__UpdateDisp(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  if ( item
    && !item->fields.isLeave
    && !item->fields.isQuestRestriction
    && (item->fields.isBase
     || !item->fields.isSame
     && !item->fields.isNotSameParty
     && item->fields.commonRestrictionId < 0
     && !item->fields.isUniqueSvtRestriction)
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
  }
}