void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItemDraw_c *v2; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_48DEC12 & 1) == 0 )
  {
    sub_1B00CCC(&PartyServantListViewItemDraw_TypeInfo, v1);
    byte_48DEC12 = 1;
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
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v18; // x8

  if ( (byte_48DEC08 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    byte_48DEC08 = 1;
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
  v7 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.messageLabelList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.switchInfoList, (int32_t)v10, v11, v12);
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
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v14, v15);
      v18 = this->fields.maskSprite;
      if ( v18 )
      {
        this->fields.maskSpriteDefaultHeight = v18->fields.mHeight;
        return;
      }
    }
LABEL_13:
    sub_1B00F28(maskMessageLabel, method);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_48DEC0D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48DEC0D = 1;
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
    sub_1B00F28(maskSprite, method);
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
  void *WaveBattleEnemyClassIds; // x0
  PartyOrganizationRootComponent_c *v13; // x1
  struct ServantClassCompatibilityIconComponent_o *v14; // x20
  int32_t SvtClassId; // w21
  System_Int32_array *v16; // x2
  ServantClassCompatibilityIconComponent_o *v17; // x0
  int32_t v18; // w1
  __int64 methodPtr_low; // x9
  __int64 v20; // x22
  int32_t v21; // w22
  int32_t v22; // w21
  struct ServantClassCompatibilityIconComponent_o *v23; // x20
  void *v24; // x21
  PartyServantListViewItemDraw_o *v25; // x0
  System_String_o *v26; // x1
  bool v27; // w2
  System_String_o *v28; // x3
  bool v29; // w4
  const MethodInfo *v30; // x5

  if ( (byte_48DEC0C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&PartyOrganizationRootComponent_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_48DEC0C = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  WaveBattleEnemyClassIds = (void *)UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0LL, 0LL);
  if ( ((unsigned __int8)WaveBattleEnemyClassIds & 1) != 0 )
  {
    if ( isClear )
    {
      WaveBattleEnemyClassIds = this->fields.classCompatibilityIcon;
      if ( !WaveBattleEnemyClassIds )
        goto LABEL_37;
      goto LABEL_36;
    }
    if ( !item )
      goto LABEL_37;
    if ( PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0LL) )
    {
      WaveBattleEnemyClassIds = PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0LL);
      if ( !WaveBattleEnemyClassIds )
        goto LABEL_37;
      if ( *((_QWORD *)WaveBattleEnemyClassIds + 3) )
      {
        WaveBattleEnemyClassIds = item->fields.userServantEntity;
        if ( WaveBattleEnemyClassIds )
        {
          v14 = this->fields.classCompatibilityIcon;
          SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)WaveBattleEnemyClassIds, 0LL);
          WaveBattleEnemyClassIds = PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0LL);
          if ( v14 )
          {
            v16 = (System_Int32_array *)WaveBattleEnemyClassIds;
            v17 = v14;
            v18 = SvtClassId;
LABEL_17:
            ServantClassCompatibilityIconComponent__SetIcon(v17, v18, v16, 1, 0LL);
            return;
          }
        }
        goto LABEL_37;
      }
    }
    WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_37;
    WaveBattleEnemyClassIds = (void *)AvalonSceneManager__checkNowScene(
                                        (AvalonSceneManager_o *)WaveBattleEnemyClassIds,
                                        40,
                                        0LL);
    if ( ((unsigned __int8)WaveBattleEnemyClassIds & 1) == 0 )
      goto LABEL_33;
    WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_37;
    WaveBattleEnemyClassIds = (void *)*((_QWORD *)WaveBattleEnemyClassIds + 4);
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_37;
    v13 = PartyOrganizationRootComponent_TypeInfo;
    methodPtr_low = LOBYTE(PartyOrganizationRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)WaveBattleEnemyClassIds + 304LL) >= (unsigned int)methodPtr_low
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)WaveBattleEnemyClassIds + 200LL)
                                              + 8 * methodPtr_low
                                              - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v20 = *((_QWORD *)WaveBattleEnemyClassIds + 59);
      if ( v20 )
      {
        WaveBattleEnemyClassIds = (void *)BattleSetupInfo__TargetQuestId(
                                            *((BattleSetupInfo_o **)WaveBattleEnemyClassIds + 59),
                                            0LL);
        if ( (_DWORD)WaveBattleEnemyClassIds )
        {
          v21 = *(_DWORD *)(v20 + 24);
          if ( v21 )
          {
            v22 = (int)WaveBattleEnemyClassIds;
            WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !WaveBattleEnemyClassIds )
              goto LABEL_37;
            WaveBattleEnemyClassIds = DataManager__GetMasterData_object_(
                                        (DataManager_o *)WaveBattleEnemyClassIds,
                                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !WaveBattleEnemyClassIds )
              goto LABEL_37;
            WaveBattleEnemyClassIds = QuestPhaseMaster__GetEntity(
                                        (QuestPhaseMaster_o *)WaveBattleEnemyClassIds,
                                        v22,
                                        v21,
                                        0LL);
            v23 = this->fields.classCompatibilityIcon;
            if ( WaveBattleEnemyClassIds )
            {
              v24 = WaveBattleEnemyClassIds;
              WaveBattleEnemyClassIds = item->fields.userServantEntity;
              if ( WaveBattleEnemyClassIds )
              {
                WaveBattleEnemyClassIds = (void *)UserServantEntity__getSvtClassId(
                                                    (UserServantEntity_o *)WaveBattleEnemyClassIds,
                                                    0LL);
                if ( v23 )
                {
                  v16 = (System_Int32_array *)*((_QWORD *)v24 + 6);
                  v18 = (int)WaveBattleEnemyClassIds;
                  v17 = v23;
                  goto LABEL_17;
                }
              }
LABEL_37:
              sub_1B00F28(WaveBattleEnemyClassIds, v13);
            }
LABEL_34:
            if ( !v23 )
              goto LABEL_37;
            WaveBattleEnemyClassIds = v23;
LABEL_36:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)WaveBattleEnemyClassIds,
              0LL);
            return;
          }
        }
      }
LABEL_33:
      v23 = this->fields.classCompatibilityIcon;
      goto LABEL_34;
    }
    v25 = (PartyServantListViewItemDraw_o *)sub_1B011E8(WaveBattleEnemyClassIds);
    PartyServantListViewItemDraw__SetMaskMessage(v25, v26, v27, v28, v29, v30);
  }
}


void __fastcall PartyServantListViewItemDraw__SetDispClassIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewItemDraw_o *v3; // x19
  bool v4; // w1

  if ( !item )
    goto LABEL_9;
  v3 = this;
  if ( !item->fields._IsDataLost_k__BackingField || !PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
  {
    this = (PartyServantListViewItemDraw_o *)v3->fields.servantFaceIcon;
    if ( this )
    {
      v4 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1B00F28(this, item);
  }
  this = (PartyServantListViewItemDraw_o *)v3->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_9;
  v4 = 0;
LABEL_8:
  ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, v4, 0LL);
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
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v29; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_48DEC11 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_11319/*"SELECT_NO_SORTIE_FATIGURE"*/, v6);
    sub_1B00CCC(&StringLiteral_20034/*"img_frames_mask04"*/, v7);
    sub_1B00CCC(&StringLiteral_11325/*"SELECT_NO_SORTIE_TITLE"*/, v8);
    sub_1B00CCC(&StringLiteral_11321/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v9);
    sub_1B00CCC(&StringLiteral_435/*"#042484"*/, v10);
    this = (PartyServantListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_1/*""*/, v11);
    byte_48DEC11 = 1;
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
    PartyServantListViewItem__ClearFatigure(v3, 0LL);
    PartyServantListViewItemDraw__ClearMessage(v4, v14);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v4, v3, 0, v15);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20034/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_435/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v31.fields.g = value.fields.g;
  v31.fields.b = value.fields.b;
  v31.fields.r = value.fields.r;
  v31.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v31, 0LL);
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
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11325/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v18 = (System_String_o **)&StringLiteral_11321/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v18 = (System_String_o **)&StringLiteral_11319/*"SELECT_NO_SORTIE_FATIGURE"*/;
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
  v21 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v21, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v23 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v23 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v23, 0LL);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        v26 = *(_QWORD *)&this->fields.m_CachedPtr,
        v27 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v26) )
  {
LABEL_39:
    sub_1B00F28(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = v26 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v29 + 32) = item;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)item, v24, v25);
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
  __int64 v10; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v18; // x2
  bool v19; // w0
  UnityEngine_Object_o *v20; // x22
  bool v21; // w21
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3

  if ( (byte_48DEC10 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48DEC10 = 1;
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
        goto LABEL_41;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_41;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_41;
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
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject(Component_object, 0LL);
      Component_object = (UnityEngine_Component_o *)PartyServantListViewItem__get_IsDispLock(item, 0LL);
      if ( !gameObject )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Component_object & 1, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_41;
      v15 = UnityEngine_Component__get_gameObject(Component_object, 0LL);
      Component_object = (UnityEngine_Component_o *)PartyServantListViewItem__get_IsDispChoice(item, 0LL);
      if ( !v15 )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(v15, (unsigned __int8)Component_object & 1, 0LL);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isBase, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_41;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0LL);
    }
    v19 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v18);
    v20 = (UnityEngine_Object_o *)this->fields.selectObject;
    v21 = v19;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      goto LABEL_39;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
LABEL_39:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v22);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v21, v23);
      return;
    }
LABEL_41:
    sub_1B00F28(Component_object, v10);
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
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  _BOOL4 isBase; // w23
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v22; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v28; // x2
  bool v29; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v31; // w21
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v36; // w9
  int32_t v37; // w2
  int32_t v38; // w3
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
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  float v54; // s1
  float v55; // s2
  float v56; // s8
  float v57; // s9
  unsigned int localPosition; // s0
  float v59; // s10
  float v60; // s0
  UIWidget_o *v61; // x21
  float v62; // s11
  float v63; // s0
  int32_t v64; // w1
  unsigned int localScale; // s0
  float v66; // s12
  UISprite_o *svtPointIconSprite; // x21
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x23
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  int32_t MaxWave_k__BackingField; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+8h] [xbp-68h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_48DEC09 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, item);
    sub_1B00CCC(&int_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v11);
    sub_1B00CCC(&System_Math_TypeInfo, v12);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v13);
    sub_1B00CCC(&PartyServantListViewItemDraw_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_15312/*"WAVE_BATTLE_SERVANT_WAVE"*/, v15);
    sub_1B00CCC(&StringLiteral_10194/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v16);
    sub_1B00CCC(&StringLiteral_19402/*"func_group_icon_1028"*/, v17);
    sub_1B00CCC(&StringLiteral_10195/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v18);
    byte_48DEC09 = 1;
  }
  SvtPointRank_k__BackingField = 0;
  if ( v5 && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_93;
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
    if ( !servantFaceIcon )
      goto LABEL_93;
    UIIconLabel__Set((UIIconLabel_o *)servantFaceIcon, v5->fields.iconLabelInfo3, 0LL);
    partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
    if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
    {
      v22 = this->fields.partyIcon;
      if ( isBase )
      {
        if ( !v22 )
          goto LABEL_93;
        FlashingIconComponent__Clear(this->fields.partyIcon, 0LL);
      }
      else
      {
        servantFaceIcon = (ServantFaceIconComponent_o *)PartyServantListViewItem__get_IsParty(v5, 0LL);
        if ( !v22 )
          goto LABEL_93;
        FlashingIconComponent__Set_36917472(v22, (unsigned __int8)servantFaceIcon & 1, 0LL);
      }
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
      if ( !servantFaceIcon )
        goto LABEL_93;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)PartyServantListViewItem__get_IsDispLock(v5, 0LL);
      if ( !gameObject )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
      if ( !servantFaceIcon )
        goto LABEL_93;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)PartyServantListViewItem__get_IsDispChoice(v5, 0LL);
      if ( !v26 )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive(v26, (unsigned __int8)servantFaceIcon & 1, 0LL);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isPush, 0LL);
    }
    v29 = PartyServantListViewItemDraw__SetMessageLabel(this, v5, v28);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    v31 = v29;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.selectObject;
      if ( !servantFaceIcon )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0LL);
    }
    PartyServantListViewItemDraw__SetDispClassIcon(this, v5, v32);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, v5, v31, v33);
    switchInfoList = this->fields.switchInfoList;
    if ( !switchInfoList )
      goto LABEL_93;
    size = switchInfoList->fields._size;
    v36 = switchInfoList->fields._version + 1;
    switchInfoList->fields._size = 0;
    switchInfoList->fields._version = v36;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)switchInfoList->fields._items, 0, size, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointComp;
    if ( !servantFaceIcon
      || (servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)servantFaceIcon,
                                                            0LL)) == 0LL )
    {
LABEL_93:
      sub_1B00F28(servantFaceIcon, item);
    }
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      v5->fields._IsDispSvtPoint_k__BackingField,
      0LL);
    if ( v5->fields._IsDispSvtPoint_k__BackingField )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
      if ( !servantFaceIcon )
        goto LABEL_93;
      item = (PartyServantListViewItem_o *)this->fields.svtPointComp;
      v39 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
      v40 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
      if ( !v39 )
        goto LABEL_93;
      m_CancellationTokenSource_low = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = v39 + 8 * m_CancellationTokenSource_low;
        LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v42 + 32) = item;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)item, v37, v38);
      }
      svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
      servantFaceIcon = (ServantFaceIconComponent_o *)PartyServantListViewItemDraw_TypeInfo;
      if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
      if ( !svtPointInfoLabel )
        goto LABEL_93;
      UIWidget__set_width(
        svtPointInfoLabel,
        PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
        0LL);
      SvtPointRank_k__BackingField = v5->fields._SvtPointRank_k__BackingField;
      v44 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
      v45 = System_String__Concat_60325748((System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v44, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v46 = LocalizationManager__Get(v45, 0LL);
      v47 = this->fields.svtPointInfoLabel;
      v48 = (Il2CppObject *)v46;
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10194/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
      SvtPoint_k__BackingField = v5->fields._SvtPoint_k__BackingField;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField, v50, v51, v52);
      servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_60340120(v49, v48, v53, 0LL);
      if ( !v47 )
        goto LABEL_93;
      UILabel__set_text(v47, (System_String_o *)servantFaceIcon, 0LL);
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
      *(UnityEngine_Vector3_o *)(&v54 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)servantFaceIcon,
                                               0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
      if ( !servantFaceIcon )
        goto LABEL_93;
      v56 = v54;
      v57 = v55;
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
      v59 = *(float *)&localPosition;
      LODWORD(v60) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)servantFaceIcon, 0LL);
      v61 = (UIWidget_o *)this->fields.svtPointInfoLabel;
      v62 = v60;
      servantFaceIcon = (ServantFaceIconComponent_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v61 )
        goto LABEL_93;
      v63 = ceilf(v62);
      v64 = v63 == INFINITY ? 0x80000000 : (int)v63;
      UIWidget__set_width(v61, v64, 0LL);
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
      localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)servantFaceIcon, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointBaseObj;
      if ( !servantFaceIcon )
        goto LABEL_93;
      v66 = *(float *)&localScale;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)servantFaceIcon,
                                                        0LL);
      if ( !servantFaceIcon )
        goto LABEL_93;
      v86.fields.x = -(float)(v59 + (float)(v62 * v66));
      v86.fields.y = v56;
      v86.fields.z = v57;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)servantFaceIcon, v86, 0LL);
      svtPointIconSprite = this->fields.svtPointIconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_19402/*"func_group_icon_1028"*/, 0LL);
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
    if ( !servantFaceIcon )
      goto LABEL_93;
    item = (PartyServantListViewItem_o *)this->fields.costComp;
    v68 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
    v69 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
    if ( !v68 )
      goto LABEL_93;
    v70 = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
    if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
    }
    else
    {
      v71 = v68 + 8 * v70;
      LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = v70 + 1;
      *(_QWORD *)(v71 + 32) = item;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v71 + 32), (int32_t)item, v37, v38);
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
    if ( !servantFaceIcon )
      goto LABEL_93;
    switchInfoComp = this->fields.switchInfoComp;
    servantFaceIcon = (ServantFaceIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                                      (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchInfoComp )
      goto LABEL_93;
    SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)servantFaceIcon, 0LL);
    if ( !PartyServantListViewItem__get_IsParty(v5, 0LL) && v5->fields._OrganizedWave_k__BackingField >= 1 )
    {
      wavePartyLabel = this->fields.wavePartyLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_15312/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
      SvtPoint_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField, v75, v76, v77);
      MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v79, v80, v81);
      servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_60340120(v74, v78, v82, 0LL);
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
      goto LABEL_93;
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.wavePartyIcon;
    if ( !servantFaceIcon )
      goto LABEL_93;
    FlashingIconComponent__Clear((FlashingIconComponent_o *)servantFaceIcon, 0LL);
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
  int32_t v35; // w3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_48DEC0E & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, message);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, v11);
    sub_1B00CCC(&PartyServantListViewItemDraw_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_20031/*"img_frames_mask01"*/, v13);
    sub_1B00CCC(&StringLiteral_1/*""*/, v14);
    byte_48DEC0E = 1;
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
    v20 = maskName ? maskName : (System_String_o *)StringLiteral_20031/*"img_frames_mask01"*/;
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
    if ( !byte_48DD9F6 )
    {
      maskSprite = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, message);
      byte_48DD9F6 = 1;
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
    sub_1B00F28(maskSprite, message);
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
    if ( !byte_48DD9F6 )
    {
      maskSprite = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, message);
      byte_48DD9F6 = 1;
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
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = v36 + 8 * v38;
    *(_DWORD *)(maskSprite + 24) = v38 + 1;
    *(_QWORD *)(v39 + 32) = message;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v39 + 32), (int32_t)message, v34, v35);
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
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
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
  if ( (byte_48DEC0A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v7);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_11306/*"SELECT_CANNOT"*/, v9);
    sub_1B00CCC(&StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/, v10);
    sub_1B00CCC(&StringLiteral_11305/*"SELECT_BONUS_SKILL_INVALID"*/, v11);
    this = (PartyServantListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48DEC0A = 1;
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
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11305/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
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
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = v19 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v22 + 32) = item;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)item, v17, v18);
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
        v28 = &StringLiteral_11330/*"SELECT_SERVANT_EVENT_JOIN"*/;
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
    v28 = &StringLiteral_11306/*"SELECT_CANNOT"*/;
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
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v33 + 40) = item;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v33 + 40), (int32_t)item, v25, v26);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0LL);
        return v29;
      }
    }
LABEL_47:
    sub_1B00F28(this, item);
  }
  return v29;
}


bool __fastcall PartyServantListViewItemDraw__SetRestrictionMask(
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x0
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v18; // x5
  bool v19; // w20
  System_String_o *v20; // x1
  const MethodInfo *v21; // x5
  bool v22; // w2
  PartyServantListViewItemDraw_o *v23; // x0
  System_String_o *v24; // x3
  bool v25; // w4
  __int64 *v26; // x8
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_String_o *v33; // x21
  int32_t *v34; // x1
  Il2CppObject *v35; // x0
  __int64 *v36; // x8
  int32_t v37; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_48DEC0B & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, item);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_15263/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v6);
    sub_1B00CCC(&StringLiteral_10168/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v7);
    sub_1B00CCC(&StringLiteral_11324/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v8);
    sub_1B00CCC(&StringLiteral_11318/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v9);
    sub_1B00CCC(&StringLiteral_10167/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v10);
    sub_1B00CCC(&StringLiteral_6361/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v11);
    sub_1B00CCC(&StringLiteral_11317/*"SELECT_NO_SORTIE"*/, v12);
    sub_1B00CCC(&StringLiteral_18227/*"datalost_svt_select"*/, v13);
    sub_1B00CCC(&StringLiteral_1/*""*/, v14);
    this = (PartyServantListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_10215/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v15);
    byte_48DEC0B = 1;
  }
  if ( !item )
    sub_1B00F28(this, item);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = (System_String_o *)StringLiteral_11317/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10167/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    v22 = 1;
    v23 = v4;
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
      v26 = &StringLiteral_10168/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v27 = LocalizationManager__Get((System_String_o *)*v26, 0LL);
      v19 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v4, v27, 1, v28);
      return v19;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_39;
    if ( item->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_48;
    if ( !item->fields._IsDataLost_k__BackingField || !PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
    {
      if ( item->fields._TimesToRestart_k__BackingField >= 1
        && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11324/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        v34 = &TimesToRestart_k__BackingField;
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_32:
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v34, v30, v31, v32);
        RestrictionMessage = System_String__Format(v33, v35, 0LL);
        goto LABEL_9;
      }
LABEL_64:
      PartyServantListViewItemDraw__ClearMessage(v4, (const MethodInfo *)item);
      return 0;
    }
LABEL_26:
    v25 = 1;
    v23 = v4;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    v24 = (System_String_o *)StringLiteral_18227/*"datalost_svt_select"*/;
    v22 = 0;
LABEL_15:
    v19 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v23, v20, v22, v24, v25, v21);
    return v19;
  }
  if ( item->fields._IsDataLost_k__BackingField && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
    goto LABEL_26;
  if ( item->fields._TimesToRestart_k__BackingField >= 1
    && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11324/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
    v34 = &v37;
    v37 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_32;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = &StringLiteral_10215/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_37;
  }
  if ( PartyServantListViewItem__get_IsRestricted(item, 0LL) )
  {
    RestrictionMessage = PartyServantListViewItem__GetRestrictionMessage(item, 0LL);
    goto LABEL_9;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = &StringLiteral_6361/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
    goto LABEL_22;
  }
  if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
LABEL_39:
    PartyServantListViewItemDraw__SetFatigueMask(v4, item, method);
    return 1;
  }
  if ( !item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( item->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = &StringLiteral_15263/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_37;
    }
    goto LABEL_64;
  }
LABEL_48:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = &StringLiteral_11318/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_37:
  v16 = (System_String_o *)*v36;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v16, 0LL);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v4, RestrictionMessage, 0, 0LL, 0, v18);
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
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8

  v5 = message;
  if ( (byte_48DEC0F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UIWidget__Add__, message);
    sub_1B00CCC(&StringLiteral_1/*""*/, v7);
    byte_48DEC0F = 1;
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
    if ( !byte_48DD9F6 )
    {
      maskSprite = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, message);
      byte_48DD9F6 = 1;
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
    sub_1B00F28(maskSprite, message);
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
    if ( !byte_48DD9F6 )
    {
      maskSprite = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, message);
      byte_48DD9F6 = 1;
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
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = v20 + 8 * v22;
    *(_DWORD *)(maskSprite + 24) = v22 + 1;
    *(_QWORD *)(v23 + 32) = message;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)message, v18, v19);
  }
}


void __fastcall PartyServantListViewItemDraw__UpdateDisp(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  if ( item
    && !item->fields.isLeave
    && !item->fields.isQuestRestriction
    && (item->fields.isBase
     || !item->fields.isSame
     && !PartyServantListViewItem__get_IsRestricted(item, 0LL)
     && !item->fields.isUniqueSvtRestriction)
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
  }
}