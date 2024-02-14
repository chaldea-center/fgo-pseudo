void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItemDraw_c *v2; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4217FB4 & 1) == 0 )
  {
    sub_B0D8A4(&PartyServantListViewItemDraw_TypeInfo, v1);
    byte_4217FB4 = 1;
  }
  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT = 200;
  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX = 94;
  v2 = PartyServantListViewItemDraw_TypeInfo;
  static_fields = PartyServantListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BUDDY_INFO_BASE_POS.fields.x = 1112014848LL;
  static_fields->BUDDY_INFO_BASE_POS.fields.z = 0.0;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *maskSprite; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct UISprite_o *v32; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v34; // x8

  if ( (byte_4217FAA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4217FAA = 1;
  }
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_14;
  warningMessageLabel = this->fields.warningMessageLabel;
  this->fields.maskMessageWidth = maskMessageLabel->fields.mWidth;
  if ( !warningMessageLabel )
    goto LABEL_14;
  this->fields.warningMessageWidth = warningMessageLabel->fields.mWidth;
  UIWidget__set_width((UIWidget_o *)maskMessageLabel, 1000, 0LL);
  maskMessageLabel = this->fields.warningMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)maskMessageLabel, 1000, 0LL);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                 v7,
                                                                                                 v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.switchInfoList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v32 = this->fields.maskSprite;
    if ( v32 )
    {
      mAtlas = v32->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
        (System_Int32_array **)mAtlas,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v34 = this->fields.maskSprite;
      if ( v34 )
      {
        this->fields.maskSpriteDefaultHeight = v34->fields.mHeight;
        return;
      }
    }
LABEL_14:
    sub_B0D97C(maskMessageLabel);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_4217FAF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4217FAF = 1;
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
    sub_B0D97C(maskSprite);
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
  __int64 v18; // x9
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

  if ( (byte_4217FAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&PartyOrganizationRootComponent_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4217FAE = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  userServantEntity = (void *)UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL);
  if ( ((unsigned __int8)userServantEntity & 1) != 0 )
  {
    if ( isClear )
    {
      userServantEntity = this->fields.classCompatibilityIcon;
      if ( !userServantEntity )
        goto LABEL_39;
      goto LABEL_38;
    }
    if ( !item )
      goto LABEL_39;
    baseItem = item->fields.baseItem;
    if ( !baseItem )
      goto LABEL_39;
    WaveEnemyClassIds_k__BackingField = baseItem->fields._WaveEnemyClassIds_k__BackingField;
    if ( WaveEnemyClassIds_k__BackingField && *(_QWORD *)&WaveEnemyClassIds_k__BackingField->max_length )
    {
      userServantEntity = item->fields.userServantEntity;
      if ( userServantEntity )
      {
        v15 = this->fields.classCompatibilityIcon;
        userServantEntity = (void *)UserServantEntity__getSvtClassId((UserServantEntity_o *)userServantEntity, 0LL);
        v16 = item->fields.baseItem;
        if ( v16 )
        {
          if ( v15 )
          {
            v17 = v16->fields._WaveEnemyClassIds_k__BackingField;
LABEL_19:
            ServantClassCompatibilityIconComponent__SetIcon(v15, (int32_t)userServantEntity, v17, 1, 0LL);
            return;
          }
        }
      }
      goto LABEL_39;
    }
    userServantEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_39;
    userServantEntity = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0LL);
    if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      goto LABEL_35;
    userServantEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_39;
    userServantEntity = (void *)*((_QWORD *)userServantEntity + 3);
    if ( !userServantEntity )
      goto LABEL_39;
    v18 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 300LL) >= (unsigned int)v18
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL) + 8 * v18 - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v19 = *((_QWORD *)userServantEntity + 56);
      if ( v19 )
      {
        userServantEntity = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 56), 0LL);
        if ( (_DWORD)userServantEntity )
        {
          v20 = *(_DWORD *)(v19 + 24);
          if ( v20 )
          {
            v21 = (int)userServantEntity;
            userServantEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !userServantEntity )
              goto LABEL_39;
            userServantEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)userServantEntity,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !userServantEntity )
              goto LABEL_39;
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
                                              0LL);
                if ( v15 )
                {
                  v17 = (System_Int32_array *)*((_QWORD *)v22 + 6);
                  goto LABEL_19;
                }
              }
LABEL_39:
              sub_B0D97C(userServantEntity);
            }
LABEL_36:
            if ( !v15 )
              goto LABEL_39;
            userServantEntity = v15;
LABEL_38:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)userServantEntity,
              0LL);
            return;
          }
        }
      }
LABEL_35:
      v15 = this->fields.classCompatibilityIcon;
      goto LABEL_36;
    }
    sub_B0DC70(userServantEntity);
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
    sub_B0D97C(this);
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
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4217FB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11659/*"SELECT_NO_SORTIE_FATIGURE"*/, v6);
    sub_B0D8A4(&StringLiteral_19548/*"img_frames_mask04"*/, v7);
    sub_B0D8A4(&StringLiteral_11665/*"SELECT_NO_SORTIE_TITLE"*/, v8);
    sub_B0D8A4(&StringLiteral_11661/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v9);
    sub_B0D8A4(&StringLiteral_354/*"#042484"*/, v10);
    this = (PartyServantListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4217FB3 = 1;
  }
  *(_QWORD *)&value.fields.r = 0LL;
  *(_QWORD *)&value.fields.b = 0LL;
  if ( !item )
    goto LABEL_39;
  fatigureTime = item->fields.fatigureTime;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19548/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_354/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v25.fields.g = value.fields.g;
  v25.fields.b = value.fields.b;
  v25.fields.r = value.fields.r;
  v25.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v25, 0LL);
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
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11665/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( item->fields.isFatigureRecover )
    v18 = (System_String_o **)&StringLiteral_11661/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v18 = (System_String_o **)&StringLiteral_11659/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v19 = *v18;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
  if ( !this )
LABEL_39:
    sub_B0D97C(this);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v4->fields.maskFatigueBase,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v15; // x2
  bool v16; // w0
  UnityEngine_Object_o *v17; // x22
  bool v18; // w21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4217FB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4217FB2 = 1;
  }
  if ( item )
  {
    isBase = item->fields.isBase;
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             Component_WebViewObject,
                                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject )
        goto LABEL_47;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
        Component_WebViewObject,
        0LL,
        1LL,
        Component_WebViewObject->klass[1]._1.interfaceOffsets);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_WebViewObject )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_WebViewObject,
        item->fields.isSwapLock != item->fields.isLock,
        0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_WebViewObject )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_WebViewObject,
        item->fields.isSwapChoice != item->fields.isChoice,
        0LL);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_WebViewObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, isBase, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_WebViewObject )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isPush, 0LL);
    }
    v16 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v15);
    v17 = (UnityEngine_Object_o *)this->fields.selectObject;
    v18 = v16;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
      goto LABEL_45;
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_WebViewObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isBase, 0LL);
LABEL_45:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v19);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v18, v20);
      return;
    }
LABEL_47:
    sub_B0D97C(Component_WebViewObject);
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
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v25; // x2
  bool v26; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v28; // w21
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x3
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x21
  System_String_o *v34; // x0
  UILabel_o *v35; // x21
  Il2CppObject *v36; // x22
  System_String_o *v37; // x23
  Il2CppObject *v38; // x0
  float v39; // s1
  float v40; // s2
  float v41; // s8
  float v42; // s9
  unsigned int localPosition; // s0
  float v44; // s10
  float v45; // s0
  UIWidget_o *v46; // x21
  float v47; // s11
  float v48; // s1
  double v49; // d0
  unsigned int localScale; // s0
  float v51; // s12
  UISprite_o *svtPointIconSprite; // x21
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x23
  Il2CppObject *v57; // x0
  int32_t MaxWave_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+18h] [xbp-58h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217FAB & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&System_Math_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&PartyServantListViewItemDraw_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_15406/*"WAVE_BATTLE_SERVANT_WAVE"*/, v15);
    sub_B0D8A4(&StringLiteral_10412/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v16);
    sub_B0D8A4(&StringLiteral_18986/*"func_group_icon_1028"*/, v17);
    sub_B0D8A4(&StringLiteral_10413/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v18);
    byte_4217FAB = 1;
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
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
          if ( isBase )
          {
            if ( !servantFaceIcon )
              goto LABEL_93;
            FlashingIconComponent__Clear((FlashingIconComponent_o *)servantFaceIcon, 0LL);
          }
          else
          {
            if ( !servantFaceIcon )
              goto LABEL_93;
            FlashingIconComponent__Set_21845332(
              (FlashingIconComponent_o *)servantFaceIcon,
              item->fields.partyIndex >= 0,
              0LL);
          }
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
          if ( !servantFaceIcon )
            goto LABEL_93;
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL);
          if ( !servantFaceIcon )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)servantFaceIcon,
            item->fields.isSwapLock != item->fields.isLock,
            0LL);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
          if ( !servantFaceIcon )
            goto LABEL_93;
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL);
          if ( !servantFaceIcon )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)servantFaceIcon,
            item->fields.isSwapChoice != item->fields.isChoice,
            0LL);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
          if ( !servantFaceIcon )
            goto LABEL_93;
          servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL);
          if ( !servantFaceIcon )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
        }
        v26 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v25);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v28 = v26;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
        {
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.selectObject;
          if ( !servantFaceIcon )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isBase, 0LL);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, item, v29);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v28, v30);
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
        if ( servantFaceIcon )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
            (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
                  goto LABEL_93;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.svtPointComp,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
                servantFaceIcon = (ServantFaceIconComponent_o *)PartyServantListViewItemDraw_TypeInfo;
                if ( (BYTE3(PartyServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
                }
                if ( !svtPointInfoLabel )
                  goto LABEL_93;
                UIWidget__set_width(
                  svtPointInfoLabel,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
                  0LL);
                SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
                v32 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
                v33 = System_String__Concat_43849904((System_String_o *)StringLiteral_10413/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v32, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v34 = LocalizationManager__Get(v33, 0LL);
                v35 = this->fields.svtPointInfoLabel;
                v36 = (Il2CppObject *)v34;
                v37 = LocalizationManager__Get((System_String_o *)StringLiteral_10412/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
                SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
                v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_43845440(v37, v36, v38, 0LL);
                if ( !v35 )
                  goto LABEL_93;
                UILabel__set_text(v35, (System_String_o *)servantFaceIcon, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointBaseObj;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_93;
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)servantFaceIcon,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
                  0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointBaseObj;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_93;
                *(UnityEngine_Vector3_o *)(&v39 - 1) = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)servantFaceIcon,
                                                         0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                v41 = v39;
                v42 = v40;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_93;
                localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)servantFaceIcon,
                                                0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                v44 = *(float *)&localPosition;
                LODWORD(v45) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)servantFaceIcon, 0LL);
                v46 = (UIWidget_o *)this->fields.svtPointInfoLabel;
                v47 = v45;
                servantFaceIcon = (ServantFaceIconComponent_o *)System_Math_TypeInfo;
                if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Math_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                }
                if ( !v46 )
                  goto LABEL_93;
                v48 = ceilf(v47);
                v49 = v48 == INFINITY ? -v48 : v48;
                UIWidget__set_width(v46, (int)v49, 0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                UILabel__SetCondensedScale(
                  (UILabel_o *)servantFaceIcon,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
                  0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_93;
                localScale = (unsigned int)UnityEngine_Transform__get_localScale(
                                             (UnityEngine_Transform_o *)servantFaceIcon,
                                             0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointBaseObj;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                v51 = *(float *)&localScale;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_93;
                v61.fields.x = -(float)(v44 + (float)(v47 * v51));
                v61.fields.y = v41;
                v61.fields.z = v42;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)servantFaceIcon, v61, 0LL);
                svtPointIconSprite = this->fields.svtPointIconSprite;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_18986/*"func_group_icon_1028"*/, 0LL);
              }
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
              if ( servantFaceIcon )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.costComp,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
                if ( servantFaceIcon )
                {
                  switchInfoComp = this->fields.switchInfoComp;
                  servantFaceIcon = (ServantFaceIconComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( switchInfoComp )
                  {
                    SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)servantFaceIcon, 0LL);
                    if ( (item->fields.partyIndex & 0x80000000) != 0 && item->fields._OrganizedWave_k__BackingField >= 1 )
                    {
                      wavePartyLabel = this->fields.wavePartyLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_15406/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
                      SvtPoint_k__BackingField = item->fields._OrganizedWave_k__BackingField;
                      v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
                      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
                      servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_43845440(v55, v56, v57, 0LL);
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
LABEL_93:
    sub_B0D97C(servantFaceIcon);
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
  UnityEngine_Component_o *maskSprite; // x0
  UISprite_o *v16; // x24
  UIWidget_o *v17; // x22
  int v18; // s0
  struct UISprite_o *v22; // x22
  int32_t maskSpriteDefaultHeight; // w1
  System_String_o *v24; // x1
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s7
  UIWidget_o *v29; // x23
  float v30; // s0
  float v31; // s1
  float v32; // s2
  int v33; // s3
  float v34; // s0
  float v35; // s8
  UnityEngine_Transform_o *transform; // x20
  float maskMessageWidth; // s0
  float v38; // s1
  float v39; // s0
  float v40; // s2
  MethodInfo v41; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v42; // 0:kr00_4.4,4:kr04_4.4,8:kr08_4.4,12:kr0C_4.4

  if ( (byte_4217FB0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, message);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, v11);
    sub_B0D8A4(&PartyServantListViewItemDraw_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_19545/*"img_frames_mask01"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4217FB0 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_42;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  v16 = this->fields.maskSprite;
  if ( !isDataLost )
  {
    if ( v16 )
    {
      UISprite__set_atlas(this->fields.maskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( maskSprite )
      {
        v24 = maskName ? maskName : (System_String_o *)StringLiteral_19545/*"img_frames_mask01"*/;
        UISprite__set_spriteName((UISprite_o *)maskSprite, v24, 0LL);
        v29 = (UIWidget_o *)this->fields.maskSprite;
        if ( maskName )
        {
          v30 = 1.0;
          v31 = 1.0;
          v32 = 1.0;
          v33 = 1.0;
          v41.methodPointer = 0LL;
          v41.invoker_method = 0LL;
        }
        else
        {
          v33 = 1059028206;
          v41.methodPointer = 0LL;
          v41.invoker_method = 0LL;
          v30 = 0.0;
          v31 = 0.0;
          v32 = 0.0;
        }
        UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&v30, v25, v26, v27, v28, &v41);
        *(_QWORD *)&v42.fields.r = v41.methodPointer;
        *(_QWORD *)&v42.fields.b = v41.invoker_method;
        if ( v29 )
        {
          UIWidget__set_color(v29, v42, 0LL);
          maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
          if ( maskSprite )
          {
            maskSpriteDefaultHeight = this->fields.maskSpriteDefaultHeight;
            goto LABEL_26;
          }
        }
      }
    }
LABEL_42:
    sub_B0D97C(maskSprite);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(v16, maskName, 0LL);
  v17 = (UIWidget_o *)this->fields.maskSprite;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
    goto LABEL_42;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
  v22 = this->fields.maskSprite;
  maskSprite = (UnityEngine_Component_o *)PartyServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
  }
  if ( !v22 )
    goto LABEL_42;
  maskSprite = (UnityEngine_Component_o *)v22;
  maskSpriteDefaultHeight = PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
LABEL_26:
  UIWidget__set_height((UIWidget_o *)maskSprite, maskSpriteDefaultHeight, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_42;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)maskSprite, message, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_42;
  if ( !isScale )
  {
    transform = UnityEngine_Component__get_transform(maskSprite, 0LL);
    goto LABEL_39;
  }
  LODWORD(v34) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_42;
  v35 = v34;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  transform = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v35 <= maskMessageWidth )
  {
LABEL_39:
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_42;
    goto LABEL_40;
  }
  v38 = 1.0;
  v39 = maskMessageWidth / v35;
  v40 = 1.0;
  if ( !maskSprite )
    goto LABEL_42;
LABEL_40:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_42;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.maskMessageLabel,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
}


bool __fastcall PartyServantListViewItemDraw__SetMessageLabel(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *messageLabelList; // x0
  UILabel_o *skillInvalidLabel; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  __int64 *v17; // x8
  bool v18; // w21
  System_String_o *v19; // x0
  const MethodInfo *v20; // x5
  int size; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x19

  if ( (byte_4217FAC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_11647/*"SELECT_CANNOT"*/, v9);
    sub_B0D8A4(&StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/, v10);
    sub_B0D8A4(&StringLiteral_11646/*"SELECT_BONUS_SKILL_INVALID"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4217FAC = 1;
  }
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    messageLabelList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.maskMessageLabel;
  if ( !messageLabelList )
    goto LABEL_43;
  ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer, float))messageLabelList->klass->vtable._8_unknown.method)(
    messageLabelList,
    messageLabelList->klass->vtable._9_unknown.methodPtr,
    0.0);
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.maskFatigueBase;
  if ( !messageLabelList )
    goto LABEL_43;
  ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer, float))messageLabelList->klass->vtable._8_unknown.method)(
    messageLabelList,
    messageLabelList->klass->vtable._9_unknown.methodPtr,
    0.0);
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.warningMessageLabel;
  if ( !messageLabelList )
    goto LABEL_43;
  ((void (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer, float))messageLabelList->klass->vtable._8_unknown.method)(
    messageLabelList,
    messageLabelList->klass->vtable._9_unknown.methodPtr,
    0.0);
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.skillInvalidLabel;
  if ( !messageLabelList )
    goto LABEL_43;
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_XWeaponTrail_Element__o *, Il2CppMethodPointer, float))messageLabelList->klass->vtable._8_unknown.method)(
                                                                                  messageLabelList,
                                                                                  messageLabelList->klass->vtable._9_unknown.methodPtr,
                                                                                  0.0);
  if ( !item )
    goto LABEL_43;
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_11646/*"SELECT_BONUS_SKILL_INVALID"*/,
                                                                                    0LL);
    if ( !skillInvalidLabel )
      goto LABEL_43;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)messageLabelList, 0LL);
    messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.messageLabelList;
    if ( !messageLabelList )
      goto LABEL_43;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabelList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_43;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( item->fields.isEnabled )
  {
    if ( !item->fields.isPushMode )
    {
      v18 = PartyServantListViewItemDraw__SetRestrictionMask(this, item, v16);
      goto LABEL_35;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) != 0 )
    {
      PartyServantListViewItemDraw__ClearMessage(this, v15);
      v18 = 0;
      goto LABEL_35;
    }
    PartyServantListViewItemDraw__SetFatigueMask(this, item, v16);
  }
  else
  {
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_11670/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_11647/*"SELECT_CANNOT"*/;
    }
    v19 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
    PartyServantListViewItemDraw__SetMaskMessage(this, v19, 0, 0LL, 0, v20);
  }
  v18 = 1;
LABEL_35:
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_43;
  size = messageLabelList->fields._size;
  if ( size >= 1 )
  {
    if ( size != 1
      || !item->fields.isInvalidRarity
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabelList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__),
          (messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.messageLabelList) != 0LL) )
    {
      messageLabel = this->fields.messageLabel;
      messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)messageLabelList,
                                                                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)messageLabelList, 0LL);
        return v18;
      }
    }
LABEL_43:
    sub_B0D97C(messageLabelList);
  }
  return v18;
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
  __int64 *v16; // x8
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v18; // x5
  bool v19; // w20
  System_String_o *v20; // x1
  bool v21; // w2
  PartyServantListViewItemDraw_o *v22; // x0
  System_String_o *v23; // x3
  bool v24; // w4
  __int64 *v25; // x8
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  System_String_o *v29; // x21
  int32_t *v30; // x1
  Il2CppObject *v31; // x0
  int32_t v32; // [xsp+8h] [xbp-18h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v5 = this;
  if ( (byte_4217FAD & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_10388/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v7);
    sub_B0D8A4(&StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v8);
    sub_B0D8A4(&StringLiteral_11658/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v9);
    sub_B0D8A4(&StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v10);
    sub_B0D8A4(&StringLiteral_6410/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v11);
    sub_B0D8A4(&StringLiteral_11657/*"SELECT_NO_SORTIE"*/, v12);
    sub_B0D8A4(&StringLiteral_17939/*"datalost_svt_select"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    this = (PartyServantListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_10433/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v15);
    byte_4217FAD = 1;
  }
  if ( !item )
    sub_B0D97C(this);
  if ( !item->fields.isLeave )
  {
    if ( item->fields.isQuestRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10387/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v21 = 1;
      v22 = v5;
      v23 = 0LL;
      v24 = 0;
      goto LABEL_17;
    }
    if ( item->fields.isBase )
    {
      if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_10388/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_25:
        v26 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
        v19 = 1;
        PartyServantListViewItemDraw__SetWarningMessage(v5, v26, 1, v27);
        return v19;
      }
      if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
        goto LABEL_43;
      if ( item->fields._IsAllOutBattle_k__BackingField )
        goto LABEL_51;
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
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          v30 = &TimesToRestart_k__BackingField;
          TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_72:
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v30);
          RestrictionMessage = System_String__Format(v29, v31, 0LL);
          goto LABEL_10;
        }
        goto LABEL_75;
      }
    }
    else if ( !item->fields._IsDataLost_k__BackingField
           || item->fields.isLockMode
           || item->fields.isSelectMode
           || item->fields.isPushMode )
    {
      if ( item->fields._TimesToRestart_k__BackingField >= 1
        && !item->fields.isLockMode
        && !item->fields.isSelectMode
        && !item->fields.isPushMode )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11664/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        v30 = &v32;
        v32 = item->fields._TimesToRestart_k__BackingField;
        goto LABEL_72;
      }
      if ( item->fields.isSame )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_10433/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
        goto LABEL_9;
      }
      if ( (item->fields.commonRestrictionId & 0x80000000) == 0 )
      {
        RestrictionMessage = PartyServantListViewItem__GetRestrictionMessage(item, (const MethodInfo *)item);
        goto LABEL_10;
      }
      if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_6410/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
        goto LABEL_25;
      }
      if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      {
LABEL_43:
        PartyServantListViewItemDraw__SetFatigueMask(v5, item, method);
        return 1;
      }
      if ( item->fields._IsAllOutBattle_k__BackingField )
      {
LABEL_51:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = &StringLiteral_11658/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_9;
      }
LABEL_75:
      PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
      return 0;
    }
    v24 = 1;
    v22 = v5;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    v23 = (System_String_o *)StringLiteral_17939/*"datalost_svt_select"*/;
    v21 = 0;
LABEL_17:
    v19 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v22, v20, v21, v23, v24, v3);
    return v19;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = &StringLiteral_11657/*"SELECT_NO_SORTIE"*/;
LABEL_9:
  RestrictionMessage = LocalizationManager__Get((System_String_o *)*v16, 0LL);
LABEL_10:
  PartyServantListViewItemDraw__SetMaskMessage(v5, RestrictionMessage, 0, 0LL, 0, v18);
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
  UnityEngine_Component_o *maskSprite; // x0
  float v9; // s0
  float v10; // s8
  UnityEngine_Transform_o *transform; // x20
  float warningMessageWidth; // s0
  float v13; // s1
  float v14; // s0
  float v15; // s2

  if ( (byte_4217FB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__Add__, message);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4217FB1 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_21;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon) == 0LL)
    || (FlashingIconComponent__SetFast((FlashingIconComponent_o *)maskSprite, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)maskSprite, message, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(maskSprite);
  }
  if ( !isScale )
  {
    transform = UnityEngine_Component__get_transform(maskSprite, 0LL);
    goto LABEL_18;
  }
  LODWORD(v9) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_21;
  v10 = v9;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  transform = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v10 <= warningMessageWidth )
  {
LABEL_18:
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_21;
    goto LABEL_19;
  }
  v13 = 1.0;
  v14 = warningMessageWidth / v10;
  v15 = 1.0;
  if ( !maskSprite )
    goto LABEL_21;
LABEL_19:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_21;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningMessageLabel,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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