void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItemDraw_c *v2; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_40FDE3A & 1) == 0 )
  {
    sub_B16FFC(&PartyServantListViewItemDraw_TypeInfo, v1);
    byte_40FDE3A = 1;
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
  UIWidget_o *maskMessageLabel; // x0
  struct UILabel_o *warningMessageLabel; // x8
  UIWidget_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *maskSprite; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UISprite_o *v37; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v39; // x8

  if ( (byte_40FDE30 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FDE30 = 1;
  }
  maskMessageLabel = (UIWidget_o *)this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_14;
  warningMessageLabel = this->fields.warningMessageLabel;
  this->fields.maskMessageWidth = maskMessageLabel->fields.mWidth;
  if ( !warningMessageLabel )
    goto LABEL_14;
  this->fields.warningMessageWidth = warningMessageLabel->fields.mWidth;
  UIWidget__set_width(maskMessageLabel, 1000, 0LL);
  v7 = (UIWidget_o *)this->fields.warningMessageLabel;
  if ( !v7 )
    goto LABEL_14;
  UIWidget__set_width(v7, 1000, 0LL);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v8,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.switchInfoList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v37 = this->fields.maskSprite;
    if ( v37 )
    {
      mAtlas = v37->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
        (System_Int32_array **)mAtlas,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      v39 = this->fields.maskSprite;
      if ( v39 )
      {
        this->fields.maskSpriteDefaultHeight = v39->fields.mHeight;
        return;
      }
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *maskMessageLabel; // x0
  UILabel_o *maskFatigureMessageLabel; // x0
  UILabel_o *maskFatigureMessageLabelTime; // x0
  UnityEngine_GameObject_o *warningBase; // x0
  FlashingIconComponent_o *warningIcon; // x0
  UILabel_o *warningMessageLabel; // x0
  SwitchUIWidgetComponent_o *messageLabel; // x0

  if ( (byte_40FDE35 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FDE35 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_13;
  UILabel__set_text(maskMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabel = this->fields.maskFatigureMessageLabel;
  if ( !maskFatigureMessageLabel )
    goto LABEL_13;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabelTime = this->fields.maskFatigureMessageLabelTime;
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_13;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningBase = this->fields.warningBase;
  if ( !warningBase
    || (UnityEngine_GameObject__SetActive(warningBase, 0, 0LL), (warningIcon = this->fields.warningIcon) == 0LL)
    || (FlashingIconComponent__Clear(warningIcon, 0LL), (warningMessageLabel = this->fields.warningMessageLabel) == 0LL)
    || (UILabel__set_text(warningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.messageLabel) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  SwitchUIWidgetComponent__Clear(messageLabel, 0LL);
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
  ServantClassCompatibilityIconComponent_o *v12; // x0
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x8
  UserServantEntity_o *userServantEntity; // x0
  ServantClassCompatibilityIconComponent_o *v16; // x20
  int32_t SvtClassId; // w0
  struct PartyOrganizationListViewItem_o *v18; // x8
  System_Int32_array *classIds; // x2
  AvalonSceneManager_o *Instance; // x0
  WebViewManager_o *v21; // x0
  BattleSetupInfo_o **basePanel; // x0
  __int64 v23; // x9
  BattleSetupInfo_o *v24; // x22
  int32_t v25; // w0
  int32_t questPhase; // w22
  int32_t v27; // w21
  WebViewManager_o *v28; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v31; // x21
  UserServantEntity_o *v32; // x0
  PartyServantListViewItemDraw_o *v33; // x0
  System_String_o *v34; // x1
  bool v35; // w2
  System_String_o *v36; // x3
  bool v37; // w4
  const MethodInfo *v38; // x5

  if ( (byte_40FDE34 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&PartyOrganizationRootComponent_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FDE34 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL) )
  {
    if ( isClear )
    {
      v12 = this->fields.classCompatibilityIcon;
      if ( !v12 )
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
        v16 = this->fields.classCompatibilityIcon;
        SvtClassId = UserServantEntity__getSvtClassId(userServantEntity, 0LL);
        v18 = item->fields.baseItem;
        if ( v18 )
        {
          if ( v16 )
          {
            classIds = v18->fields._WaveEnemyClassIds_k__BackingField;
LABEL_19:
            ServantClassCompatibilityIconComponent__SetIcon(v16, SvtClassId, classIds, 1, 0LL);
            return;
          }
        }
      }
      goto LABEL_39;
    }
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    if ( !AvalonSceneManager__checkNowScene(Instance, 40, 0LL) )
      goto LABEL_35;
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !v21 )
      goto LABEL_39;
    basePanel = (BattleSetupInfo_o **)v21->fields.basePanel;
    if ( !basePanel )
      goto LABEL_39;
    v23 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( LOBYTE((*basePanel)[1].fields.originQuestId) >= (unsigned int)v23
      && *(PartyOrganizationRootComponent_c **)((*basePanel)[1].fields.deckId + 8 * v23 - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v24 = basePanel[56];
      if ( v24 )
      {
        v25 = BattleSetupInfo__TargetQuestId(basePanel[56], 0LL);
        if ( v25 )
        {
          questPhase = v24->fields.questPhase;
          if ( questPhase )
          {
            v27 = v25;
            v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v28 )
              goto LABEL_39;
            MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)v28,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_39;
            Entity = QuestPhaseMaster__GetEntity(MasterData_WarQuestSelectionMaster, v27, questPhase, 0LL);
            v16 = this->fields.classCompatibilityIcon;
            if ( Entity )
            {
              v31 = Entity;
              v32 = item->fields.userServantEntity;
              if ( v32 )
              {
                SvtClassId = UserServantEntity__getSvtClassId(v32, 0LL);
                if ( v16 )
                {
                  classIds = v31->fields.classIds;
                  goto LABEL_19;
                }
              }
LABEL_39:
              sub_B170D4();
            }
LABEL_36:
            if ( !v16 )
              goto LABEL_39;
            v12 = v16;
LABEL_38:
            ServantClassCompatibilityIconComponent__Clear(v12, 0LL);
            return;
          }
        }
      }
LABEL_35:
      v16 = this->fields.classCompatibilityIcon;
      goto LABEL_36;
    }
    sub_B173C8(basePanel);
    PartyServantListViewItemDraw__SetMaskMessage(v33, v34, v35, v36, v37, v38);
  }
}


void __fastcall PartyServantListViewItemDraw__SetDispClassIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  bool v4; // w1

  if ( !item )
    goto LABEL_11;
  if ( item->fields._IsDataLost_k__BackingField
    && !item->fields.isLockMode
    && !item->fields.isSelectMode
    && !item->fields.isPushMode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( servantFaceIcon )
    {
      v4 = 0;
      goto LABEL_8;
    }
LABEL_11:
    sub_B170D4();
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_11;
  v4 = 1;
LABEL_8:
  ServantFaceIconComponent__SetDispClassSprite(servantFaceIcon, v4, 0LL);
}


void __fastcall PartyServantListViewItemDraw__SetFatigueMask(
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
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v18; // x0
  UIWidget_o *v19; // x0
  UnityEngine_GameObject_o *warningBase; // x0
  FlashingIconComponent_o *warningIcon; // x0
  UILabel_o *warningMessageLabel; // x0
  UILabel_o *maskMessageLabel; // x0
  UILabel_o *maskFatigureMessageLabel; // x22
  System_String_o *v25; // x0
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v27; // x8
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *v31; // x0
  int32_t v32; // w1
  UnityEngine_Component_o *v33; // x0
  UnityEngine_Component_o *transform; // x0
  UnityEngine_GameObject_o *v35; // x0
  float v36; // s0
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x0
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDE39 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_11596/*"SELECT_NO_SORTIE_FATIGURE"*/, v6);
    sub_B16FFC(&StringLiteral_19412/*"img_frames_mask04"*/, v7);
    sub_B16FFC(&StringLiteral_11602/*"SELECT_NO_SORTIE_TITLE"*/, v8);
    sub_B16FFC(&StringLiteral_11598/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v9);
    sub_B16FFC(&StringLiteral_349/*"#042484"*/, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FDE39 = 1;
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
    PartyServantListViewItemDraw__ClearMessage(this, v14);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, 0, v15);
    return;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !gameObject )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v18 = this->fields.maskSprite;
  if ( !v18 )
    goto LABEL_39;
  UISprite__set_spriteName(v18, (System_String_o *)StringLiteral_19412/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_349/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  v19 = (UIWidget_o *)this->fields.maskSprite;
  if ( !v19 )
    goto LABEL_39;
  v39.fields.g = value.fields.g;
  v39.fields.b = value.fields.b;
  v39.fields.r = value.fields.r;
  v39.fields.a = 0.69804;
  UIWidget__set_color(v19, v39, 0LL);
  warningBase = this->fields.warningBase;
  if ( !warningBase )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(warningBase, 0, 0LL);
  warningIcon = this->fields.warningIcon;
  if ( !warningIcon )
    goto LABEL_39;
  FlashingIconComponent__Clear(warningIcon, 0LL);
  warningMessageLabel = this->fields.warningMessageLabel;
  if ( !warningMessageLabel )
    goto LABEL_39;
  UILabel__set_text(warningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabel = this->fields.maskFatigureMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_11602/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, v25, 0LL);
  maskFatigureMessageLabelTime = this->fields.maskFatigureMessageLabelTime;
  if ( item->fields.isFatigureRecover )
    v27 = (System_String_o **)&StringLiteral_11598/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v27 = (System_String_o **)&StringLiteral_11596/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v28 = *v27;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get(v28, 0LL);
  v30 = System_String__Format(v29, (Il2CppObject *)RestTime4, 0LL);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabelTime, v30, 0LL);
  v31 = this->fields.maskFatigureMessageLabelTime;
  if ( !v31 )
    goto LABEL_39;
  v32 = item->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY(v31, v32, 0LL);
  v33 = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !v33 )
    goto LABEL_39;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v33, 0LL);
  if ( !transform )
    goto LABEL_39;
  v35 = UnityEngine_Component__get_gameObject(transform, 0LL);
  v36 = 24.0;
  if ( !item->fields.isFatigureRecover )
    v36 = 18.0;
  GameObjectExtensions__SetLocalPositionY(v35, v36, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
LABEL_39:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabelList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.maskFatigueBase,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v12; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  bool v25; // w0
  UnityEngine_Object_o *v26; // x22
  bool v27; // w21
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x3

  if ( (byte_40FDE38 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FDE38 = 1;
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
      v10 = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !v10 )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v10,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
      v12 = this->fields.baseButton;
      if ( !v12 )
        goto LABEL_47;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v12->klass->vtable._14_SetState.method)(
        v12,
        0LL,
        1LL,
        v12->klass->vtable._15_OnPress.methodPtr);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      v14 = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !v14 )
        goto LABEL_47;
      gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( !gameObject )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !v17 )
        goto LABEL_47;
      v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v18 )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(v18, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v20 = this->fields.selectObject;
      if ( !v20 )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(v20, isBase, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      v23 = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !v23 )
        goto LABEL_47;
      v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !v24 )
        goto LABEL_47;
      UnityEngine_GameObject__SetActive(v24, item->fields.isPush, 0LL);
    }
    v25 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v22);
    v26 = (UnityEngine_Object_o *)this->fields.selectObject;
    v27 = v25;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
      goto LABEL_45;
    v29 = this->fields.selectObject;
    if ( v29 )
    {
      UnityEngine_GameObject__SetActive(v29, item->fields.isBase, 0LL);
LABEL_45:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v28);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v27, v30);
      return;
    }
LABEL_47:
    sub_B170D4();
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
  UIIconLabel_o *info2IconLabel; // x0
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v23; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v31; // x2
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  bool v34; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v36; // w21
  const MethodInfo *v37; // x2
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x0
  UnityEngine_Component_o *svtPointComp; // x0
  UnityEngine_GameObject_o *v42; // x0
  struct System_Collections_Generic_List_UIWidget__o *v43; // x0
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v45; // x0
  System_String_o *v46; // x21
  System_String_o *v47; // x0
  UILabel_o *v48; // x21
  Il2CppObject *v49; // x22
  System_String_o *v50; // x23
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  UnityEngine_GameObject_o *svtPointBaseObj; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Transform_o *v56; // x0
  float v57; // s1
  float v58; // s2
  UnityEngine_Component_o *v59; // x0
  float v60; // s8
  float v61; // s9
  UnityEngine_Transform_o *v62; // x0
  unsigned int localPosition; // s0
  UILabel_o *v64; // x0
  float v65; // s10
  float v66; // s0
  UIWidget_o *v67; // x21
  float v68; // s11
  float v69; // s1
  double v70; // d0
  UILabel_o *v71; // x0
  UnityEngine_Component_o *v72; // x0
  UnityEngine_Transform_o *v73; // x0
  unsigned int localScale; // s0
  UnityEngine_GameObject_o *v75; // x0
  float v76; // s12
  UnityEngine_Transform_o *v77; // x0
  UISprite_o *svtPointIconSprite; // x21
  struct System_Collections_Generic_List_UIWidget__o *v79; // x0
  struct System_Collections_Generic_List_UIWidget__o *v80; // x0
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UIWidget_array *v82; // x0
  FlashingIconComponent_o *v83; // x0
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v85; // x22
  Il2CppObject *v86; // x23
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  FlashingIconComponent_o *wavePartyIcon; // x0
  int32_t MaxWave_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+18h] [xbp-58h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE31 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&System_Math_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&PartyServantListViewItemDraw_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_15297/*"WAVE_BATTLE_SERVANT_WAVE"*/, v15);
    sub_B16FFC(&StringLiteral_10355/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v16);
    sub_B16FFC(&StringLiteral_18856/*"func_group_icon_1028"*/, v17);
    sub_B16FFC(&StringLiteral_10356/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v18);
    byte_40FDE31 = 1;
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
      info2IconLabel = this->fields.info2IconLabel;
      if ( info2IconLabel )
      {
        UIIconLabel__Set(info2IconLabel, item->fields.iconLabelInfo3, 0LL);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
        {
          v23 = this->fields.partyIcon;
          if ( isBase )
          {
            if ( !v23 )
              goto LABEL_93;
            FlashingIconComponent__Clear(v23, 0LL);
          }
          else
          {
            if ( !v23 )
              goto LABEL_93;
            FlashingIconComponent__Set_23222596(v23, item->fields.partyIndex >= 0, 0LL);
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
          v25 = (UnityEngine_Component_o *)this->fields.lockSprite;
          if ( !v25 )
            goto LABEL_93;
          gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
          if ( !gameObject )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
        {
          v28 = (UnityEngine_Component_o *)this->fields.choiceSprite;
          if ( !v28 )
            goto LABEL_93;
          v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
          if ( !v29 )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive(v29, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
        {
          v32 = (UnityEngine_Component_o *)this->fields.pushSprite;
          if ( !v32 )
            goto LABEL_93;
          v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
          if ( !v33 )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive(v33, item->fields.isPush, 0LL);
        }
        v34 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v31);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v36 = v34;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
        {
          v38 = this->fields.selectObject;
          if ( !v38 )
            goto LABEL_93;
          UnityEngine_GameObject__SetActive(v38, item->fields.isBase, 0LL);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, item, v37);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v36, v39);
        switchInfoList = this->fields.switchInfoList;
        if ( switchInfoList )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)switchInfoList,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
          svtPointComp = (UnityEngine_Component_o *)this->fields.svtPointComp;
          if ( svtPointComp )
          {
            v42 = UnityEngine_Component__get_gameObject(svtPointComp, 0LL);
            if ( v42 )
            {
              UnityEngine_GameObject__SetActive(v42, item->fields._IsDispSvtPoint_k__BackingField, 0LL);
              if ( item->fields._IsDispSvtPoint_k__BackingField )
              {
                v43 = this->fields.switchInfoList;
                if ( !v43 )
                  goto LABEL_93;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.svtPointComp,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
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
                v45 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
                v46 = System_String__Concat_43743732((System_String_o *)StringLiteral_10356/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v45, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v47 = LocalizationManager__Get(v46, 0LL);
                v48 = this->fields.svtPointInfoLabel;
                v49 = (Il2CppObject *)v47;
                v50 = LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
                SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
                v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                v52 = System_String__Format_43739268(v50, v49, v51, 0LL);
                if ( !v48 )
                  goto LABEL_93;
                UILabel__set_text(v48, v52, 0LL);
                svtPointBaseObj = this->fields.svtPointBaseObj;
                if ( !svtPointBaseObj )
                  goto LABEL_93;
                transform = UnityEngine_GameObject__get_transform(svtPointBaseObj, 0LL);
                if ( !transform )
                  goto LABEL_93;
                UnityEngine_Transform__set_localPosition(
                  transform,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
                  0LL);
                v55 = this->fields.svtPointBaseObj;
                if ( !v55 )
                  goto LABEL_93;
                v56 = UnityEngine_GameObject__get_transform(v55, 0LL);
                if ( !v56 )
                  goto LABEL_93;
                *(UnityEngine_Vector3_o *)(&v57 - 1) = UnityEngine_Transform__get_localPosition(v56, 0LL);
                v59 = (UnityEngine_Component_o *)this->fields.svtPointInfoLabel;
                if ( !v59 )
                  goto LABEL_93;
                v60 = v57;
                v61 = v58;
                v62 = UnityEngine_Component__get_transform(v59, 0LL);
                if ( !v62 )
                  goto LABEL_93;
                localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v62, 0LL);
                v64 = this->fields.svtPointInfoLabel;
                if ( !v64 )
                  goto LABEL_93;
                v65 = *(float *)&localPosition;
                LODWORD(v66) = *(_QWORD *)&UILabel__get_printedSize(v64, 0LL);
                v67 = (UIWidget_o *)this->fields.svtPointInfoLabel;
                v68 = v66;
                if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Math_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                }
                if ( !v67 )
                  goto LABEL_93;
                v69 = ceilf(v68);
                v70 = v69 == INFINITY ? -v69 : v69;
                UIWidget__set_width(v67, (int)v70, 0LL);
                v71 = this->fields.svtPointInfoLabel;
                if ( !v71 )
                  goto LABEL_93;
                UILabel__SetCondensedScale(
                  v71,
                  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
                  0LL);
                v72 = (UnityEngine_Component_o *)this->fields.svtPointInfoLabel;
                if ( !v72 )
                  goto LABEL_93;
                v73 = UnityEngine_Component__get_transform(v72, 0LL);
                if ( !v73 )
                  goto LABEL_93;
                localScale = (unsigned int)UnityEngine_Transform__get_localScale(v73, 0LL);
                v75 = this->fields.svtPointBaseObj;
                if ( !v75 )
                  goto LABEL_93;
                v76 = *(float *)&localScale;
                v77 = UnityEngine_GameObject__get_transform(v75, 0LL);
                if ( !v77 )
                  goto LABEL_93;
                v93.fields.x = -(float)(v65 + (float)(v68 * v76));
                v93.fields.y = v60;
                v93.fields.z = v61;
                UnityEngine_Transform__set_localPosition(v77, v93, 0LL);
                svtPointIconSprite = this->fields.svtPointIconSprite;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_18856/*"func_group_icon_1028"*/, 0LL);
              }
              v79 = this->fields.switchInfoList;
              if ( v79 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v79,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.costComp,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                v80 = this->fields.switchInfoList;
                if ( v80 )
                {
                  switchInfoComp = this->fields.switchInfoComp;
                  v82 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v80,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
                  if ( switchInfoComp )
                  {
                    SwitchUIWidgetComponent__Set(switchInfoComp, v82, 0LL);
                    if ( (item->fields.partyIndex & 0x80000000) != 0 && item->fields._OrganizedWave_k__BackingField >= 1 )
                    {
                      wavePartyLabel = this->fields.wavePartyLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_15297/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
                      SvtPoint_k__BackingField = item->fields._OrganizedWave_k__BackingField;
                      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
                      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
                      v88 = System_String__Format_43739268(v85, v86, v87, 0LL);
                      if ( wavePartyLabel )
                      {
                        UILabel__set_text(wavePartyLabel, v88, 0LL);
                        wavePartyIcon = this->fields.wavePartyIcon;
                        if ( wavePartyIcon )
                        {
                          FlashingIconComponent__Set(wavePartyIcon, 0LL);
                          return;
                        }
                      }
                    }
                    else
                    {
                      v83 = this->fields.wavePartyIcon;
                      if ( v83 )
                      {
                        FlashingIconComponent__Clear(v83, 0LL);
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v17; // x24
  UIWidget_o *v18; // x22
  int v19; // s0
  struct UISprite_o *v23; // x22
  UIWidget_o *v24; // x0
  int32_t maskSpriteDefaultHeight; // w1
  UISprite_o *v26; // x0
  System_String_o *v27; // x1
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s7
  UIWidget_o *v32; // x23
  float v33; // s0
  float v34; // s1
  float v35; // s2
  int v36; // s3
  UnityEngine_GameObject_o *warningBase; // x0
  FlashingIconComponent_o *warningIcon; // x0
  UILabel_o *warningMessageLabel; // x0
  UILabel_o *maskFatigureMessageLabel; // x0
  UILabel_o *maskFatigureMessageLabelTime; // x0
  UILabel_o *maskMessageLabel; // x0
  UnityEngine_Component_o *v43; // x0
  float v44; // s0
  UnityEngine_Component_o *v45; // x0
  float v46; // s8
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_Transform_o *transform; // x20
  float maskMessageWidth; // s0
  float v50; // s1
  float v51; // s0
  float v52; // s2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x0
  MethodInfo v54; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v55; // 0:kr00_4.4,4:kr04_4.4,8:kr08_4.4,12:kr0C_4.4

  if ( (byte_40FDE36 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, message);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, v11);
    sub_B16FFC(&PartyServantListViewItemDraw_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_19409/*"img_frames_mask01"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40FDE36 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !gameObject )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v17 = this->fields.maskSprite;
  if ( !isDataLost )
  {
    if ( v17 )
    {
      UISprite__set_atlas(this->fields.maskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      v26 = this->fields.maskSprite;
      if ( v26 )
      {
        v27 = maskName ? maskName : (System_String_o *)StringLiteral_19409/*"img_frames_mask01"*/;
        UISprite__set_spriteName(v26, v27, 0LL);
        v32 = (UIWidget_o *)this->fields.maskSprite;
        if ( maskName )
        {
          v33 = 1.0;
          v34 = 1.0;
          v35 = 1.0;
          v36 = 1.0;
          v54.methodPointer = 0LL;
          v54.invoker_method = 0LL;
        }
        else
        {
          v36 = 1059028206;
          v54.methodPointer = 0LL;
          v54.invoker_method = 0LL;
          v33 = 0.0;
          v34 = 0.0;
          v35 = 0.0;
        }
        UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&v33, v28, v29, v30, v31, &v54);
        *(_QWORD *)&v55.fields.r = v54.methodPointer;
        *(_QWORD *)&v55.fields.b = v54.invoker_method;
        if ( v32 )
        {
          UIWidget__set_color(v32, v55, 0LL);
          v24 = (UIWidget_o *)this->fields.maskSprite;
          if ( v24 )
          {
            maskSpriteDefaultHeight = this->fields.maskSpriteDefaultHeight;
            goto LABEL_26;
          }
        }
      }
    }
LABEL_42:
    sub_B170D4();
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(v17, maskName, 0LL);
  v18 = (UIWidget_o *)this->fields.maskSprite;
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
  if ( !v18 )
    goto LABEL_42;
  UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
  v23 = this->fields.maskSprite;
  if ( (BYTE3(PartyServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
  }
  if ( !v23 )
    goto LABEL_42;
  v24 = (UIWidget_o *)v23;
  maskSpriteDefaultHeight = PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT;
LABEL_26:
  UIWidget__set_height(v24, maskSpriteDefaultHeight, 0LL);
  warningBase = this->fields.warningBase;
  if ( !warningBase )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(warningBase, 0, 0LL);
  warningIcon = this->fields.warningIcon;
  if ( !warningIcon )
    goto LABEL_42;
  FlashingIconComponent__Clear(warningIcon, 0LL);
  warningMessageLabel = this->fields.warningMessageLabel;
  if ( !warningMessageLabel )
    goto LABEL_42;
  UILabel__set_text(warningMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabel = this->fields.maskFatigureMessageLabel;
  if ( !maskFatigureMessageLabel )
    goto LABEL_42;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabelTime = this->fields.maskFatigureMessageLabelTime;
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_42;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_42;
  UILabel__set_text(maskMessageLabel, message, 0LL);
  v43 = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !v43 )
    goto LABEL_42;
  if ( !isScale )
  {
    transform = UnityEngine_Component__get_transform(v43, 0LL);
    goto LABEL_39;
  }
  LODWORD(v44) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v43, 0LL);
  v45 = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !v45 )
    goto LABEL_42;
  v46 = v44;
  v47 = UnityEngine_Component__get_transform(v45, 0LL);
  transform = v47;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v46 <= maskMessageWidth )
  {
LABEL_39:
    *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_42;
    goto LABEL_40;
  }
  v50 = 1.0;
  v51 = maskMessageWidth / v46;
  v52 = 1.0;
  if ( !v47 )
    goto LABEL_42;
LABEL_40:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v51, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_42;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabelList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.maskMessageLabel,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x0
  struct UILabel_o *maskMessageLabel; // x0
  struct UIWidget_o *maskFatigueBase; // x0
  struct UILabel_o *warningMessageLabel; // x0
  struct UILabel_o *skillInvalidLabel; // x0
  UILabel_o *v18; // x21
  System_String_o *v19; // x0
  struct System_Collections_Generic_List_UIWidget__o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  __int64 *v23; // x8
  bool v24; // w21
  System_String_o *v25; // x0
  const MethodInfo *v26; // x5
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v27; // x0
  int size; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x19
  UIWidget_array *v30; // x0

  if ( (byte_40FDE32 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v9);
    sub_B16FFC(&StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, v10);
    sub_B16FFC(&StringLiteral_11583/*"SELECT_BONUS_SKILL_INVALID"*/, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40FDE32 = 1;
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)messageLabelList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_43;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))maskMessageLabel->klass->vtable._8_set_alpha.method)(
    maskMessageLabel,
    maskMessageLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  maskFatigueBase = this->fields.maskFatigueBase;
  if ( !maskFatigueBase )
    goto LABEL_43;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))maskFatigueBase->klass->vtable._8_set_alpha.method)(
    maskFatigueBase,
    maskFatigueBase->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  warningMessageLabel = this->fields.warningMessageLabel;
  if ( !warningMessageLabel )
    goto LABEL_43;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))warningMessageLabel->klass->vtable._8_set_alpha.method)(
    warningMessageLabel,
    warningMessageLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( !skillInvalidLabel )
    goto LABEL_43;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))skillInvalidLabel->klass->vtable._8_set_alpha.method)(
    skillInvalidLabel,
    skillInvalidLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  if ( !item )
    goto LABEL_43;
  v18 = this->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !v18 )
      goto LABEL_43;
    UILabel__set_text(v18, v19, 0LL);
    v20 = this->fields.messageLabelList;
    if ( !v20 )
      goto LABEL_43;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !v18 )
      goto LABEL_43;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( item->fields.isEnabled )
  {
    if ( !item->fields.isPushMode )
    {
      v24 = PartyServantListViewItemDraw__SetRestrictionMask(this, item, v22);
      goto LABEL_35;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) != 0 )
    {
      PartyServantListViewItemDraw__ClearMessage(this, v21);
      v24 = 0;
      goto LABEL_35;
    }
    PartyServantListViewItemDraw__SetFatigueMask(this, item, v22);
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
      v23 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
    }
    v25 = LocalizationManager__Get((System_String_o *)*v23, 0LL);
    PartyServantListViewItemDraw__SetMaskMessage(this, v25, 0, 0LL, 0, v26);
  }
  v24 = 1;
LABEL_35:
  v27 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.messageLabelList;
  if ( !v27 )
    goto LABEL_43;
  size = v27->fields._size;
  if ( size >= 1 )
  {
    if ( size != 1
      || !item->fields.isInvalidRarity
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__),
          (v27 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.messageLabelList) != 0LL) )
    {
      messageLabel = this->fields.messageLabel;
      v30 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                v27,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, v30, 0LL);
        return v24;
      }
    }
LABEL_43:
    sub_B170D4();
  }
  return v24;
}


bool __fastcall PartyServantListViewItemDraw__SetRestrictionMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
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

  if ( (byte_40FDE33 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_10331/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v7);
    sub_B16FFC(&StringLiteral_11601/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v8);
    sub_B16FFC(&StringLiteral_11595/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v9);
    sub_B16FFC(&StringLiteral_10330/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v10);
    sub_B16FFC(&StringLiteral_6375/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v11);
    sub_B16FFC(&StringLiteral_11594/*"SELECT_NO_SORTIE"*/, v12);
    sub_B16FFC(&StringLiteral_17815/*"datalost_svt_select"*/, v13);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    sub_B16FFC(&StringLiteral_10376/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v15);
    byte_40FDE33 = 1;
  }
  if ( !item )
    sub_B170D4();
  if ( !item->fields.isLeave )
  {
    if ( item->fields.isQuestRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v21 = 1;
      v22 = this;
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
        v25 = &StringLiteral_10331/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_25:
        v26 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
        v19 = 1;
        PartyServantListViewItemDraw__SetWarningMessage(this, v26, 1, v27);
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
          v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
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
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11601/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
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
        v16 = &StringLiteral_10376/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
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
        v25 = &StringLiteral_6375/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
        goto LABEL_25;
      }
      if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      {
LABEL_43:
        PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
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
        v16 = &StringLiteral_11595/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_9;
      }
LABEL_75:
      PartyServantListViewItemDraw__ClearMessage(this, (const MethodInfo *)item);
      return 0;
    }
    v24 = 1;
    v22 = this;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    v23 = (System_String_o *)StringLiteral_17815/*"datalost_svt_select"*/;
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
  v16 = &StringLiteral_11594/*"SELECT_NO_SORTIE"*/;
LABEL_9:
  RestrictionMessage = LocalizationManager__Get((System_String_o *)*v16, 0LL);
LABEL_10:
  PartyServantListViewItemDraw__SetMaskMessage(this, RestrictionMessage, 0, 0LL, 0, v18);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *maskMessageLabel; // x0
  UILabel_o *maskFatigureMessageLabel; // x0
  UILabel_o *maskFatigureMessageLabelTime; // x0
  UnityEngine_GameObject_o *warningBase; // x0
  FlashingIconComponent_o *warningIcon; // x0
  UILabel_o *warningMessageLabel; // x0
  UnityEngine_Component_o *v16; // x0
  float v17; // s0
  UnityEngine_Component_o *v18; // x0
  float v19; // s8
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *transform; // x20
  float warningMessageWidth; // s0
  float v23; // s1
  float v24; // s0
  float v25; // s2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x0

  if ( (byte_40FDE37 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, message);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40FDE37 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  maskMessageLabel = this->fields.maskMessageLabel;
  if ( !maskMessageLabel )
    goto LABEL_21;
  UILabel__set_text(maskMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabel = this->fields.maskFatigureMessageLabel;
  if ( !maskFatigureMessageLabel )
    goto LABEL_21;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabelTime = this->fields.maskFatigureMessageLabelTime;
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_21;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  warningBase = this->fields.warningBase;
  if ( !warningBase
    || (UnityEngine_GameObject__SetActive(warningBase, 1, 0LL), (warningIcon = this->fields.warningIcon) == 0LL)
    || (FlashingIconComponent__SetFast(warningIcon, 0LL), (warningMessageLabel = this->fields.warningMessageLabel) == 0LL)
    || (UILabel__set_text(warningMessageLabel, message, 0LL),
        (v16 = (UnityEngine_Component_o *)this->fields.warningMessageLabel) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  if ( !isScale )
  {
    transform = UnityEngine_Component__get_transform(v16, 0LL);
    goto LABEL_18;
  }
  LODWORD(v17) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)v16, 0LL);
  v18 = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !v18 )
    goto LABEL_21;
  v19 = v17;
  v20 = UnityEngine_Component__get_transform(v18, 0LL);
  transform = v20;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v19 <= warningMessageWidth )
  {
LABEL_18:
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_21;
    goto LABEL_19;
  }
  v23 = 1.0;
  v24 = warningMessageWidth / v19;
  v25 = 1.0;
  if ( !v20 )
    goto LABEL_21;
LABEL_19:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_21;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)messageLabelList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningMessageLabel,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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