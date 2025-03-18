void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  PartyServantListViewItemDraw_c *v2; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4C1DEBD & 1) == 0 )
  {
    sub_1C3B764(&PartyServantListViewItemDraw_TypeInfo, v1);
    byte_4C1DEBD = 1;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Object_o *maskSprite; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct UISprite_o *v28; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v30; // x8

  if ( (byte_4C1DEB3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    byte_4C1DEB3 = 1;
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
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.messageLabelList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v14;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.switchInfoList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v28 = this->fields.maskSprite;
    if ( v28 )
    {
      mAtlas = v28->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.maskSpriteDefaultAtlas,
        (int64_t)mAtlas,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v30 = this->fields.maskSprite;
      if ( v30 )
      {
        this->fields.maskSpriteDefaultHeight = v30->fields.mHeight;
        return;
      }
    }
LABEL_13:
    sub_1C3B9C0(maskMessageLabel, method);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_4C1DEB8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1DEB8 = 1;
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
    sub_1C3B9C0(maskSprite, method);
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

  if ( (byte_4C1DEB7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&PartyOrganizationRootComponent_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C1DEB7 = 1;
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
          SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)WaveBattleEnemyClassIds, 0, 0LL);
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
    WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_37;
    WaveBattleEnemyClassIds = (void *)AvalonSceneManager__checkNowScene(
                                        (AvalonSceneManager_o *)WaveBattleEnemyClassIds,
                                        40,
                                        0LL);
    if ( ((unsigned __int8)WaveBattleEnemyClassIds & 1) == 0 )
      goto LABEL_33;
    WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v20 = *((_QWORD *)WaveBattleEnemyClassIds + 62);
      if ( v20 )
      {
        WaveBattleEnemyClassIds = (void *)BattleSetupInfo__TargetQuestId(
                                            *((BattleSetupInfo_o **)WaveBattleEnemyClassIds + 62),
                                            0LL);
        if ( (_DWORD)WaveBattleEnemyClassIds )
        {
          v21 = *(_DWORD *)(v20 + 24);
          if ( v21 )
          {
            v22 = (int)WaveBattleEnemyClassIds;
            WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !WaveBattleEnemyClassIds )
              goto LABEL_37;
            WaveBattleEnemyClassIds = DataManager__GetMasterData_object_(
                                        (DataManager_o *)WaveBattleEnemyClassIds,
                                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
                                                    0,
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
              sub_1C3B9C0(WaveBattleEnemyClassIds, v13);
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
    v25 = (PartyServantListViewItemDraw_o *)sub_1C3BC80(WaveBattleEnemyClassIds);
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
    sub_1C3B9C0(this, item);
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
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4C1DEBC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_11744/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, v6);
    sub_1C3B764(&StringLiteral_20719/*"lavender"*/, v7);
    sub_1C3B764(&StringLiteral_11750/*"SHOP_BUY_BANK_ITEM"*/, v8);
    sub_1C3B764(&StringLiteral_11746/*"SHOP_BULK_WINDOW_ORIGIN"*/, v9);
    sub_1C3B764(&StringLiteral_414/*"#A"*/, v10);
    this = (PartyServantListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C1DEBC = 1;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20719/*"lavender"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_414/*"#A"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v35.fields.g = value.fields.g;
  v35.fields.b = value.fields.b;
  v35.fields.r = value.fields.r;
  v35.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v35, 0LL);
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
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11750/*"SHOP_BUY_BANK_ITEM"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v18 = (System_String_o **)&StringLiteral_11746/*"SHOP_BULK_WINDOW_ORIGIN"*/;
  else
    v18 = (System_String_o **)&StringLiteral_11744/*"SHOP_BULK_WINDOW_MAX_LABEL"*/;
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
        v30 = *(_QWORD *)&this->fields.m_CachedPtr,
        v31 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !v30) )
  {
LABEL_39:
    sub_1C3B9C0(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v30 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = v30 + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v33 + 32) = item;
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)item, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_4C1DEBB & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C1DEBB = 1;
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
                                                      (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1C3B9C0(Component_object, v10);
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v46; // x8
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v48; // x0
  System_String_o *v49; // x21
  System_String_o *v50; // x0
  UILabel_o *v51; // x21
  Il2CppObject *v52; // x22
  System_String_o *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  float v58; // s1
  float v59; // s2
  float v60; // s8
  float v61; // s9
  unsigned int localPosition; // s0
  float v63; // s10
  float v64; // s0
  UIWidget_o *v65; // x21
  float v66; // s11
  float v67; // s0
  int32_t v68; // w1
  unsigned int localScale; // s0
  float v70; // s12
  UISprite_o *svtPointIconSprite; // x21
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v78; // x22
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x23
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  Il2CppObject *v86; // x0
  int32_t MaxWave_k__BackingField; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+8h] [xbp-68h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  v5 = item;
  if ( (byte_4C1DEB4 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&int_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1C3B764(&LocalizationManager_TypeInfo, v11);
    sub_1C3B764(&System_Math_TypeInfo, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&PartyServantListViewItemDraw_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_15851/*"_EnvMatrix"*/, v15);
    sub_1C3B764(&StringLiteral_10512/*"ProgressSelfTurn"*/, v16);
    sub_1C3B764(&StringLiteral_20066/*"img_quest_pre_organization"*/, v17);
    sub_1C3B764(&StringLiteral_10513/*"ProgressShipData_"*/, v18);
    byte_4C1DEB4 = 1;
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
        FlashingIconComponent__Set_39547472(v22, (unsigned __int8)servantFaceIcon & 1, 0LL);
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
      sub_1C3B9C0(servantFaceIcon, item);
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
      v43 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
      v44 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
      if ( !v43 )
        goto LABEL_93;
      m_CancellationTokenSource_low = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v43 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = v43 + 8 * m_CancellationTokenSource_low;
        LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v46 + 32) = item;
        sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)item, v37, v38, v39, v40, v41, v42);
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
      v48 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
      v49 = System_String__Concat_63368612((System_String_o *)StringLiteral_10513/*"ProgressShipData_"*/, v48, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get(v49, 0LL);
      v51 = this->fields.svtPointInfoLabel;
      v52 = (Il2CppObject *)v50;
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_10512/*"ProgressSelfTurn"*/, 0LL);
      SvtPoint_k__BackingField = v5->fields._SvtPoint_k__BackingField;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField, v54, v55, v56);
      servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_63382984(v53, v52, v57, 0LL);
      if ( !v51 )
        goto LABEL_93;
      UILabel__set_text(v51, (System_String_o *)servantFaceIcon, 0LL);
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
      *(UnityEngine_Vector3_o *)(&v58 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)servantFaceIcon,
                                               0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
      if ( !servantFaceIcon )
        goto LABEL_93;
      v60 = v58;
      v61 = v59;
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
      v63 = *(float *)&localPosition;
      LODWORD(v64) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)servantFaceIcon, 0LL);
      v65 = (UIWidget_o *)this->fields.svtPointInfoLabel;
      v66 = v64;
      servantFaceIcon = (ServantFaceIconComponent_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !v65 )
        goto LABEL_93;
      v67 = ceilf(v66);
      v68 = v67 == INFINITY ? 0x80000000 : (int)v67;
      UIWidget__set_width(v65, v68, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
      if ( !servantFaceIcon )
        goto LABEL_93;
      UILabel__SetCondensedScale(
        (UILabel_o *)servantFaceIcon,
        PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
        0,
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
      v70 = *(float *)&localScale;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)servantFaceIcon,
                                                        0LL);
      if ( !servantFaceIcon )
        goto LABEL_93;
      v90.fields.x = -(float)(v63 + (float)(v66 * v70));
      v90.fields.y = v60;
      v90.fields.z = v61;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)servantFaceIcon, v90, 0LL);
      svtPointIconSprite = this->fields.svtPointIconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_20066/*"img_quest_pre_organization"*/, 0LL);
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
    if ( !servantFaceIcon )
      goto LABEL_93;
    item = (PartyServantListViewItem_o *)this->fields.costComp;
    v72 = *(_QWORD *)&servantFaceIcon->fields.m_CachedPtr;
    v73 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(servantFaceIcon->fields.m_CancellationTokenSource);
    if ( !v72 )
      goto LABEL_93;
    v74 = SLODWORD(servantFaceIcon->fields.m_CancellationTokenSource);
    if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = v72 + 8 * v74;
      LODWORD(servantFaceIcon->fields.m_CancellationTokenSource) = v74 + 1;
      *(_QWORD *)(v75 + 32) = item;
      sub_1C3B708((PartyOrganizationUtility_o *)(v75 + 32), (int64_t)item, v37, v38, v39, v40, v41, v42);
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
    if ( !servantFaceIcon )
      goto LABEL_93;
    switchInfoComp = this->fields.switchInfoComp;
    servantFaceIcon = (ServantFaceIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)servantFaceIcon,
                                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !switchInfoComp )
      goto LABEL_93;
    SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)servantFaceIcon, 0LL);
    if ( !PartyServantListViewItem__get_IsParty(v5, 0LL) && v5->fields._OrganizedWave_k__BackingField >= 1 )
    {
      wavePartyLabel = this->fields.wavePartyLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_15851/*"_EnvMatrix"*/, 0LL);
      SvtPoint_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField, v79, v80, v81);
      MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v83, v84, v85);
      servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_63382984(v78, v82, v86, 0LL);
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_4C1DEB9 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, message);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, v11);
    sub_1C3B764(&PartyServantListViewItemDraw_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_20716/*"latin9"*/, v13);
    sub_1C3B764(&StringLiteral_1/*""*/, v14);
    byte_4C1DEB9 = 1;
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
    v44.fields.r = 1.0;
    v44.fields.g = 1.0;
    v44.fields.b = 1.0;
    v44.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v44, 0LL);
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
    v20 = maskName ? maskName : (System_String_o *)StringLiteral_20716/*"latin9"*/;
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
    if ( !byte_4C1C516 )
    {
      maskSprite = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, message);
      byte_4C1C516 = 1;
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
    sub_1C3B9C0(maskSprite, message);
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
    if ( !byte_4C1C516 )
    {
      maskSprite = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, message);
      byte_4C1C516 = 1;
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
  v40 = *(_QWORD *)(maskSprite + 16);
  v41 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v40 )
    goto LABEL_51;
  v42 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * v42;
    *(_DWORD *)(maskSprite + 24) = v42 + 1;
    *(_QWORD *)(v43 + 32) = message;
    sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)message, v34, v35, v36, v37, v38, v39);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  _BOOL4 isEventJoin; // w21
  __int64 *v36; // x8
  bool v37; // w21
  System_String_o *v38; // x0
  const MethodInfo *v39; // x5
  int m_CancellationTokenSource; // w8
  __int64 v41; // x8
  _QWORD *v42; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x19

  v3 = item;
  v4 = this;
  if ( (byte_4C1DEB5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_11731/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/, v9);
    sub_1C3B764(&StringLiteral_11755/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/, v10);
    sub_1C3B764(&StringLiteral_11730/*"SHOP04_SHOP_STATE"*/, v11);
    this = (PartyServantListViewItemDraw_o *)sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C1DEB5 = 1;
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
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SHOP04_SHOP_STATE"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0LL);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_47;
    item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
    v23 = *(_QWORD *)&this->fields.m_CachedPtr;
    v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !v23 )
      goto LABEL_47;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)item,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = v23 + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v26 + 32) = item;
      sub_1C3B708((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)item, v17, v18, v19, v20, v21, v22);
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
        v36 = &StringLiteral_11755/*"SHOP_BUY_CONFIRM_CAN_SHOP_RESET_NO_LIMIT_MESSAGE"*/;
LABEL_33:
        v38 = LocalizationManager__Get((System_String_o *)*v36, 0LL);
        PartyServantListViewItemDraw__SetMaskMessage(v4, v38, 0, 0LL, 0, v39);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_28;
    }
    v36 = &StringLiteral_11731/*"SHOP_ACHIEVEMENT_FREE_EXCHANGE_CONDITIONS"*/;
    goto LABEL_33;
  }
  if ( !v3->fields.isPushMode )
  {
    v37 = PartyServantListViewItemDraw__SetRestrictionMask(v4, v3, v28);
    goto LABEL_35;
  }
  if ( (v3->fields.fatigureTime & 0x8000000000000000LL) != 0 )
  {
    PartyServantListViewItemDraw__ClearMessage(v4, v27);
    v37 = 0;
    goto LABEL_35;
  }
  PartyServantListViewItemDraw__SetFatigueMask(v4, v3, v28);
LABEL_34:
  v37 = 1;
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
      v41 = *(_QWORD *)&this->fields.m_CachedPtr;
      v42 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v41 )
        goto LABEL_47;
      if ( *(_DWORD *)(v41 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v41 + 40) = item;
        sub_1C3B708((PartyOrganizationUtility_o *)(v41 + 40), (int64_t)item, v29, v30, v31, v32, v33, v34);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0LL);
        return v37;
      }
    }
LABEL_47:
    sub_1C3B9C0(this, item);
  }
  return v37;
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
  __int64 v16; // x1
  System_String_o *v17; // x0
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v19; // x5
  bool v20; // w20
  System_String_o *v21; // x1
  const MethodInfo *v22; // x5
  bool v23; // w2
  PartyServantListViewItemDraw_o *v24; // x0
  System_String_o *v25; // x3
  bool v26; // w4
  __int64 *v27; // x8
  System_String_o *v28; // x0
  const MethodInfo *v29; // x3
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_String_o *v34; // x21
  int32_t *v35; // x1
  Il2CppObject *v36; // x0
  __int64 *v37; // x8
  int32_t v38; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C1DEB6 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, item);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_15799/*"_BloomTex"*/, v6);
    sub_1C3B764(&StringLiteral_10485/*"Pressed"*/, v7);
    sub_1C3B764(&StringLiteral_11749/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, v8);
    sub_1C3B764(&StringLiteral_11743/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/, v9);
    sub_1C3B764(&StringLiteral_10484/*"PreserveSig"*/, v10);
    sub_1C3B764(&StringLiteral_6587/*"FifthFeedNodeName"*/, v11);
    sub_1C3B764(&StringLiteral_11742/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/, v12);
    sub_1C3B764(&StringLiteral_10511/*"ProgressBar/CancelButton"*/, v13);
    sub_1C3B764(&StringLiteral_18833/*"event_gachabanner_"*/, v14);
    sub_1C3B764(&StringLiteral_1/*""*/, v15);
    this = (PartyServantListViewItemDraw_o *)sub_1C3B764(&StringLiteral_10533/*"Protocol not supported"*/, v16);
    byte_4C1DEB6 = 1;
  }
  if ( !item )
    sub_1C3B9C0(this, item);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = (System_String_o *)StringLiteral_11742/*"SHOP_BULK_WINDOW_DESTINATION_KIND"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10484/*"PreserveSig"*/, 0LL);
    v23 = 1;
    v24 = v4;
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
      v27 = &StringLiteral_10485/*"Pressed"*/;
LABEL_22:
      v28 = LocalizationManager__Get((System_String_o *)*v27, 0LL);
      v20 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v4, v28, 1, v29);
      return v20;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_38;
    if ( item->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_44;
    if ( !item->fields._IsDataLost_k__BackingField || !PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
    {
      if ( item->fields._TimesToRestart_k__BackingField >= 1
        && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, 0LL);
        v35 = &TimesToRestart_k__BackingField;
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_32:
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v35, v31, v32, v33);
        RestrictionMessage = System_String__Format(v34, v36, 0LL);
        goto LABEL_9;
      }
LABEL_68:
      PartyServantListViewItemDraw__ClearMessage(v4, (const MethodInfo *)item);
      return 0;
    }
LABEL_26:
    v26 = 1;
    v24 = v4;
    v21 = (System_String_o *)StringLiteral_1/*""*/;
    v25 = (System_String_o *)StringLiteral_18833/*"event_gachabanner_"*/;
    v23 = 0;
LABEL_15:
    v20 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v24, v21, v23, v25, v26, v22);
    return v20;
  }
  if ( item->fields._IsDataLost_k__BackingField && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
    goto LABEL_26;
  if ( item->fields._TimesToRestart_k__BackingField >= 1
    && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11749/*"SHOP_BUY_ANONYMOUS_CONFIRM_WARNING"*/, 0LL);
    v35 = &v38;
    v38 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_32;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = &StringLiteral_10533/*"Protocol not supported"*/;
    goto LABEL_47;
  }
  if ( item->fields.isNotSameParty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = &StringLiteral_10511/*"ProgressBar/CancelButton"*/;
    goto LABEL_47;
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
    v27 = &StringLiteral_6587/*"FifthFeedNodeName"*/;
    goto LABEL_22;
  }
  if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
LABEL_38:
    PartyServantListViewItemDraw__SetFatigueMask(v4, item, method);
    return 1;
  }
  if ( !item->fields._IsAllOutBattle_k__BackingField )
  {
    if ( item->fields._IsClearedWave_k__BackingField )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = &StringLiteral_15799/*"_BloomTex"*/;
      goto LABEL_47;
    }
    goto LABEL_68;
  }
LABEL_44:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = &StringLiteral_11743/*"SHOP_BULK_WINDOW_DISABLE_ITEM_COLOR"*/;
LABEL_47:
  v17 = (System_String_o *)*v37;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v17, 0LL);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v4, RestrictionMessage, 0, 0LL, 0, v19);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8

  v5 = message;
  if ( (byte_4C1DEBA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_UIWidget__Add__, message);
    sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C1DEBA = 1;
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
    if ( !byte_4C1C516 )
    {
      maskSprite = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, message);
      byte_4C1C516 = 1;
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
    sub_1C3B9C0(maskSprite, message);
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
    if ( !byte_4C1C516 )
    {
      maskSprite = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, message);
      byte_4C1C516 = 1;
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
  v24 = *(_QWORD *)(maskSprite + 16);
  v25 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(maskSprite + 28);
  if ( !v24 )
    goto LABEL_29;
  v26 = *(int *)(maskSprite + 24);
  if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v24 + 8 * v26;
    *(_DWORD *)(maskSprite + 24) = v26 + 1;
    *(_QWORD *)(v27 + 32) = message;
    sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)message, v18, v19, v20, v21, v22, v23);
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
     && !item->fields.isNotSameParty
     && !PartyServantListViewItem__get_IsRestricted(item, 0LL)
     && !item->fields.isUniqueSvtRestriction)
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
  }
}