void PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyServantListViewItemDraw_c *v1; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_4D283EB & 1) == 0 )
  {
    sub_1C94098(&PartyServantListViewItemDraw_TypeInfo);
    byte_4D283EB = 1;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_Object_o *maskSprite; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UISprite_o *v26; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct UISprite_o *v34; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v36; // x8

  if ( (byte_4D283E1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D283E1 = 1;
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
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.messageLabelList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.switchInfoList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v26 = this->fields.maskSprite;
    if ( v26 )
    {
      mSpriteName = v26->fields.mSpriteName;
      this->fields.maskSpriteDefaultName = mSpriteName;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultName,
        (int32_t)mSpriteName,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v34 = this->fields.maskSprite;
      if ( v34 )
      {
        mAtlas = v34->fields.mAtlas;
        this->fields.maskSpriteDefaultAtlas = mAtlas;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultAtlas,
          (int32_t)mAtlas,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        v36 = this->fields.maskSprite;
        if ( v36 )
        {
          this->fields.maskSpriteDefaultHeight = v36->fields.mHeight;
          return;
        }
      }
    }
LABEL_14:
    sub_1C942F0(maskMessageLabel, method);
  }
}


void PartyServantListViewItemDraw__ClearMessage(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_4D283E6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D283E6 = 1;
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
    sub_1C942F0(maskSprite, method);
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
  void *WaveBattleEnemyClassIds; // x0
  PartyOrganizationRootComponent_c *v9; // x1
  struct ServantClassCompatibilityIconComponent_o *v10; // x20
  int32_t SvtClassId; // w21
  System_Int32_array *v12; // x2
  ServantClassCompatibilityIconComponent_o *v13; // x0
  int32_t v14; // w1
  __int64 naturalAligment; // x9
  __int64 v16; // x22
  int32_t v17; // w22
  int32_t v18; // w21
  struct ServantClassCompatibilityIconComponent_o *v19; // x20
  void *v20; // x21
  PartyServantListViewItemDraw_o *v21; // x0
  System_String_o *v22; // x1
  bool v23; // w2
  System_String_o *v24; // x3
  bool v25; // w4
  const MethodInfo *v26; // x5

  if ( (byte_4D283E5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&PartyOrganizationRootComponent_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D283E5 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  WaveBattleEnemyClassIds = (void *)UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0);
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
    if ( PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0) )
    {
      WaveBattleEnemyClassIds = PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0);
      if ( !WaveBattleEnemyClassIds )
        goto LABEL_37;
      if ( *((_QWORD *)WaveBattleEnemyClassIds + 3) )
      {
        WaveBattleEnemyClassIds = item->fields.userServantEntity;
        if ( WaveBattleEnemyClassIds )
        {
          v10 = this->fields.classCompatibilityIcon;
          SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)WaveBattleEnemyClassIds, 0, 0, 0);
          WaveBattleEnemyClassIds = PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0);
          if ( v10 )
          {
            v12 = (System_Int32_array *)WaveBattleEnemyClassIds;
            v13 = v10;
            v14 = SvtClassId;
LABEL_17:
            ServantClassCompatibilityIconComponent__SetIcon(v13, v14, v12, 1, 0);
            return;
          }
        }
        goto LABEL_37;
      }
    }
    WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_37;
    WaveBattleEnemyClassIds = (void *)AvalonSceneManager__checkNowScene(
                                        (AvalonSceneManager_o *)WaveBattleEnemyClassIds,
                                        40,
                                        0);
    if ( ((unsigned __int8)WaveBattleEnemyClassIds & 1) == 0 )
      goto LABEL_33;
    WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_37;
    WaveBattleEnemyClassIds = (void *)*((_QWORD *)WaveBattleEnemyClassIds + 4);
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_37;
    v9 = PartyOrganizationRootComponent_TypeInfo;
    naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)WaveBattleEnemyClassIds + 304LL) >= (unsigned int)naturalAligment
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)WaveBattleEnemyClassIds + 200LL)
                                              + 8 * naturalAligment
                                              - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v16 = *((_QWORD *)WaveBattleEnemyClassIds + 65);
      if ( v16 )
      {
        WaveBattleEnemyClassIds = (void *)BattleSetupInfo__TargetQuestId(
                                            *((BattleSetupInfo_o **)WaveBattleEnemyClassIds + 65),
                                            0);
        if ( (_DWORD)WaveBattleEnemyClassIds )
        {
          v17 = *(_DWORD *)(v16 + 24);
          if ( v17 )
          {
            v18 = (int)WaveBattleEnemyClassIds;
            WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !WaveBattleEnemyClassIds )
              goto LABEL_37;
            WaveBattleEnemyClassIds = DataManager__GetMasterData_object_(
                                        (DataManager_o *)WaveBattleEnemyClassIds,
                                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !WaveBattleEnemyClassIds )
              goto LABEL_37;
            WaveBattleEnemyClassIds = QuestPhaseMaster__GetEntity(
                                        (QuestPhaseMaster_o *)WaveBattleEnemyClassIds,
                                        v18,
                                        v17,
                                        0);
            v19 = this->fields.classCompatibilityIcon;
            if ( WaveBattleEnemyClassIds )
            {
              v20 = WaveBattleEnemyClassIds;
              WaveBattleEnemyClassIds = item->fields.userServantEntity;
              if ( WaveBattleEnemyClassIds )
              {
                WaveBattleEnemyClassIds = (void *)UserServantEntity__getSvtClassId(
                                                    (UserServantEntity_o *)WaveBattleEnemyClassIds,
                                                    0,
                                                    0,
                                                    0);
                if ( v19 )
                {
                  v12 = (System_Int32_array *)*((_QWORD *)v20 + 6);
                  v14 = (int)WaveBattleEnemyClassIds;
                  v13 = v19;
                  goto LABEL_17;
                }
              }
LABEL_37:
              sub_1C942F0(WaveBattleEnemyClassIds, v9);
            }
LABEL_34:
            if ( !v19 )
              goto LABEL_37;
            WaveBattleEnemyClassIds = v19;
LABEL_36:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)WaveBattleEnemyClassIds,
              0);
            return;
          }
        }
      }
LABEL_33:
      v19 = this->fields.classCompatibilityIcon;
      goto LABEL_34;
    }
    v21 = (PartyServantListViewItemDraw_o *)sub_1C9468C(WaveBattleEnemyClassIds);
    PartyServantListViewItemDraw__SetMaskMessage(v21, v22, v23, v24, v25, v26);
  }
}


void PartyServantListViewItemDraw__SetDispClassIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewItemDraw_o *v3; // x19
  bool v4; // w1

  if ( !item )
    goto LABEL_9;
  v3 = this;
  if ( !item->fields._IsDataLost_k__BackingField || !PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0) )
  {
    this = (PartyServantListViewItemDraw_o *)v3->fields.servantFaceIcon;
    if ( this )
    {
      v4 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1C942F0(this, item);
  }
  this = (PartyServantListViewItemDraw_o *)v3->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_9;
  v4 = 0;
LABEL_8:
  ServantFaceIconComponent__SetDispClassSprite((ServantFaceIconComponent_o *)this, v4, 0);
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
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  UILabel_o *maskFatigureMessageLabel; // x22
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v11; // x8
  System_String_o *v12; // x23
  System_String_o *v13; // x0
  int32_t v14; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v16; // s0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_4D283EA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11589/*"SELECT_NO_SORTIE_FATIGURE"*/);
    sub_1C94098(&StringLiteral_20571/*"img_frames_mask04"*/);
    sub_1C94098(&StringLiteral_11595/*"SELECT_NO_SORTIE_TITLE"*/);
    sub_1C94098(&StringLiteral_11591/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/);
    sub_1C94098(&StringLiteral_405/*"#042484"*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D283EA = 1;
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
    PartyServantListViewItem__ClearFatigure(v3, 0);
    PartyServantListViewItemDraw__ClearMessage(v4, v7);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v4, v3, 0, v8);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_20571/*"img_frames_mask04"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_405/*"#042484"*/, &value, 0);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  if ( !this )
    goto LABEL_41;
  v28.fields.g = value.fields.g;
  v28.fields.b = value.fields.b;
  v28.fields.r = value.fields.r;
  v28.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v28, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_41;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)this,
    v4->fields.maskSprite,
    (System_String_o *)StringLiteral_20571/*"img_frames_mask04"*/,
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
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11595/*"SELECT_NO_SORTIE_TITLE"*/, 0);
  if ( !maskFatigureMessageLabel )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v11 = (System_String_o **)&StringLiteral_11591/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v11 = (System_String_o **)&StringLiteral_11589/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v12 = *v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get(v12, 0);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v13, (Il2CppObject *)RestTime4, 0);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  v14 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v14, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v16 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v16 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v16, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        m_CachedPtr = this->fields.m_CachedPtr,
        v24 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_41:
    sub_1C942F0(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v26 + 32) = item;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)item, v17, v18, v19, v20, v21, v22);
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
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v15; // x2
  bool v16; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v18; // w21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_4D283E9 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D283E9 = 1;
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
        goto LABEL_36;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_36;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_36;
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
        goto LABEL_36;
      gameObject = UnityEngine_Component__get_gameObject(Component_object, 0);
      Component_object = (UnityEngine_Component_o *)PartyServantListViewItem__get_IsDispLock(item, 0);
      if ( !gameObject )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Component_object & 1, 0);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_36;
      v13 = UnityEngine_Component__get_gameObject(Component_object, 0);
      Component_object = (UnityEngine_Component_o *)PartyServantListViewItem__get_IsDispChoice(item, 0);
      if ( !v13 )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(v13, (unsigned __int8)Component_object & 1, 0);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.pushSprite;
      if ( !Component_object )
        goto LABEL_36;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isPush, 0);
    }
    v16 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v15);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    v18 = v16;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
      goto LABEL_34;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
LABEL_34:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v19);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v18, v20);
      return;
    }
LABEL_36:
    sub_1C942F0(Component_object, v8);
  }
}


void PartyServantListViewItemDraw__SetItem(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  _BOOL4 isBase; // w26
  System_Int64_array *equipIdList; // x22
  Il2CppObject *svtPointComp; // x1
  int64_t IsRestrictionActiveGrandBoard; // x0
  struct PartyOrganizationListViewItem_o *v12; // x8
  struct UserServantEntity_o *userServantEntity; // x9
  int32_t EquipFriendShipSkillChange_k__BackingField; // w23
  __int128 v15; // q1
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q0
  _BOOL4 v18; // w25
  bool isChangeFriendShipSvtEquipSkill; // w23
  bool v20; // w7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  bool v22; // zf
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v24; // w24
  Il2CppObject *Master_object; // x24
  struct UserServantEntity_o *v26; // x8
  __int128 v27; // q1
  UserServantGrandEntity_o *v28; // x24
  __int64 v29; // x22
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v31; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v37; // x2
  bool v38; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v40; // w21
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v45; // w9
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v57; // x0
  System_String_o *v58; // x21
  System_String_o *v59; // x0
  UILabel_o *v60; // x21
  Il2CppObject *v61; // x22
  System_String_o *v62; // x23
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
  Il2CppObject *v87; // x23
  Il2CppObject *v88; // x0
  System_String_o *v89; // x0
  int32_t OrganizedWave_k__BackingField; // w8
  System_String_o *v91; // x20
  Il2CppObject *v92; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+10h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+70h] [xbp-A0h] BYREF
  int32_t MaxWave_k__BackingField; // [xsp+98h] [xbp-78h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+9Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D283E2 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&PartyServantListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_15597/*"WAVE_BATTLE_SERVANT_WAVE"*/);
    sub_1C94098(&StringLiteral_10325/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_1C94098(&StringLiteral_15593/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/);
    sub_1C94098(&StringLiteral_15592/*"WAVE_BATTLE_SERVANT_PARTY"*/);
    sub_1C94098(&StringLiteral_19877/*"func_group_icon_1028"*/);
    sub_1C94098(&StringLiteral_10326/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_4D283E2 = 1;
  }
  SvtPointRank_k__BackingField = 0;
  if ( item && mode )
  {
    if ( item->fields.isConvertOverwriteImage )
      questRestrictionInfo = item->fields.questRestrictionInfo;
    else
      questRestrictionInfo = 0;
    isBase = item->fields.isBase;
    equipIdList = item->fields.equipIdList;
    if ( !PartyServantListViewItem__IsRestrictionGrandServant(item, 0) )
    {
      IsRestrictionActiveGrandBoard = PartyServantListViewItem__IsRestrictionActiveGrandBoard(item, 0);
      if ( (IsRestrictionActiveGrandBoard & 1) != 0 )
      {
        IsRestrictionActiveGrandBoard = (int64_t)item->fields.userServantEntity;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        isChangeFriendShipSvtEquipSkill = item->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField;
        IsRestrictionActiveGrandBoard = UserServantEntity__IsGrandServant(
                                          (UserServantEntity_o *)IsRestrictionActiveGrandBoard,
                                          0);
        v20 = 0;
        goto LABEL_40;
      }
      baseItem = item->fields.baseItem;
      if ( !baseItem )
        goto LABEL_148;
      isChangeFriendShipSvtEquipSkill = 0;
      v20 = 0;
      v22 = !baseItem->fields._IsTempGrandServant_k__BackingField;
LABEL_37:
      IsRestrictionActiveGrandBoard = !v22;
LABEL_40:
      if ( !this->fields.servantFaceIcon )
        goto LABEL_148;
      ServantFaceIconComponent__Set(
        this->fields.servantFaceIcon,
        item->fields.userServantEntity,
        equipIdList,
        questRestrictionInfo,
        item->fields.iconLabelInfo1,
        item->fields.iconLabelInfo2,
        IsRestrictionActiveGrandBoard & 1,
        v20,
        isChangeFriendShipSvtEquipSkill,
        0);
      IsRestrictionActiveGrandBoard = (int64_t)this->fields.servantFaceIcon;
      if ( !IsRestrictionActiveGrandBoard )
        goto LABEL_148;
      ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
        (ServantFaceIconComponent_o *)IsRestrictionActiveGrandBoard,
        this->fields.maskSprite,
        this->fields.maskSpriteDefaultName,
        this->fields.maskSpriteDefaultAtlas,
        0);
      IsRestrictionActiveGrandBoard = (int64_t)this->fields.info2IconLabel;
      if ( !IsRestrictionActiveGrandBoard )
        goto LABEL_148;
      UIIconLabel__Set((UIIconLabel_o *)IsRestrictionActiveGrandBoard, item->fields.iconLabelInfo3, 0);
      partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsRestrictionActiveGrandBoard = UnityEngine_Object__op_Inequality(partyIcon, 0, 0);
      if ( (IsRestrictionActiveGrandBoard & 1) != 0 )
      {
        v31 = this->fields.partyIcon;
        if ( isBase )
        {
          if ( !v31 )
            goto LABEL_148;
          FlashingIconComponent__Clear(this->fields.partyIcon, 0);
        }
        else
        {
          IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_IsParty(item, 0);
          if ( !v31 )
            goto LABEL_148;
          FlashingIconComponent__Set_41653568(v31, IsRestrictionActiveGrandBoard & 1, 0);
        }
      }
      lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
      {
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.lockSprite;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsRestrictionActiveGrandBoard, 0);
        IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_IsDispLock(item, 0);
        if ( !gameObject )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive(gameObject, IsRestrictionActiveGrandBoard & 1, 0);
      }
      choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
      {
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.choiceSprite;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsRestrictionActiveGrandBoard, 0);
        IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_IsDispChoice(item, 0);
        if ( !v35 )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive(v35, IsRestrictionActiveGrandBoard & 1, 0);
      }
      pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
      {
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.pushSprite;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                   0);
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
          item->fields.isPush,
          0);
      }
      v38 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v37);
      selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
      v40 = v38;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
      {
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.selectObject;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
          item->fields.isBase,
          0);
      }
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v41);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v40, v42);
      switchInfoList = this->fields.switchInfoList;
      if ( !switchInfoList )
        goto LABEL_148;
      size = switchInfoList->fields._size;
      v45 = switchInfoList->fields._version + 1;
      switchInfoList->fields._size = 0;
      switchInfoList->fields._version = v45;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)switchInfoList->fields._items, 0, size, 0);
      IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointComp;
      if ( !IsRestrictionActiveGrandBoard
        || (IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                       0)) == 0 )
      {
LABEL_148:
        sub_1C942F0(IsRestrictionActiveGrandBoard, svtPointComp);
      }
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
        item->fields._IsDispSvtPoint_k__BackingField,
        0);
      if ( item->fields._IsDispSvtPoint_k__BackingField )
      {
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.switchInfoList;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        svtPointComp = (Il2CppObject *)this->fields.svtPointComp;
        v52 = *(_QWORD *)(IsRestrictionActiveGrandBoard + 16);
        v53 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(IsRestrictionActiveGrandBoard + 28);
        if ( !v52 )
          goto LABEL_148;
        v54 = *(int *)(IsRestrictionActiveGrandBoard + 24);
        if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)IsRestrictionActiveGrandBoard,
            svtPointComp,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = v52 + 8 * v54;
          *(_DWORD *)(IsRestrictionActiveGrandBoard + 24) = v54 + 1;
          *(_QWORD *)(v55 + 32) = svtPointComp;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v55 + 32), (int32_t)svtPointComp, v46, v47, v48, v49, v50, v51);
        }
        svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
        IsRestrictionActiveGrandBoard = (int64_t)PartyServantListViewItemDraw_TypeInfo;
        if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
        if ( !svtPointInfoLabel )
          goto LABEL_148;
        UIWidget__set_width(
          svtPointInfoLabel,
          PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
          0);
        SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
        v57 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0);
        v58 = System_String__Concat_64417744((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v57, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v59 = LocalizationManager__Get(v58, 0);
        v60 = this->fields.svtPointInfoLabel;
        v61 = (Il2CppObject *)v59;
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_10325/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0);
        LODWORD(v96.fields.currentCryptoKey) = item->fields._SvtPoint_k__BackingField;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
        IsRestrictionActiveGrandBoard = (int64_t)System_String__Format_64459052(v62, v61, v63, 0);
        if ( !v60 )
          goto LABEL_148;
        UILabel__set_text(v60, (System_String_o *)IsRestrictionActiveGrandBoard, 0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointBaseObj;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
                                                   0);
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
          PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
          0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointBaseObj;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
                                                   0);
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        localPosition = UnityEngine_Transform__get_localPosition(
                          (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
                          0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                   0);
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        v66 = (unsigned int)UnityEngine_Transform__get_localPosition(
                              (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
                              0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        v67 = *(float *)&v66;
        LODWORD(v68) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)IsRestrictionActiveGrandBoard, 0);
        v69 = (UIWidget_o *)this->fields.svtPointInfoLabel;
        v70 = v68;
        IsRestrictionActiveGrandBoard = (int64_t)System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        if ( !v69 )
          goto LABEL_148;
        v71 = ceilf(v70);
        v72 = v71 == INFINITY ? 0x80000000 : (int)v71;
        UIWidget__set_width(v69, v72, 0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        UILabel__SetCondensedScale(
          (UILabel_o *)IsRestrictionActiveGrandBoard,
          PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
          0,
          0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                   0);
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        localScale = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
                                     0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointBaseObj;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        v74 = *(float *)&localScale;
        IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
                                                   0);
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_148;
        v100.fields.x = -(float)(v67 + (float)(v70 * v74));
        v100.fields.y = y;
        v100.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard, v100, 0);
        svtPointIconSprite = this->fields.svtPointIconSprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_19877/*"func_group_icon_1028"*/, 0);
      }
      IsRestrictionActiveGrandBoard = (int64_t)this->fields.switchInfoList;
      if ( !IsRestrictionActiveGrandBoard )
        goto LABEL_148;
      svtPointComp = (Il2CppObject *)this->fields.costComp;
      v76 = *(_QWORD *)(IsRestrictionActiveGrandBoard + 16);
      v77 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(IsRestrictionActiveGrandBoard + 28);
      if ( !v76 )
        goto LABEL_148;
      v78 = *(int *)(IsRestrictionActiveGrandBoard + 24);
      if ( (unsigned int)v78 >= *(_DWORD *)(v76 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)IsRestrictionActiveGrandBoard,
          svtPointComp,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
      }
      else
      {
        v79 = v76 + 8 * v78;
        *(_DWORD *)(IsRestrictionActiveGrandBoard + 24) = v78 + 1;
        *(_QWORD *)(v79 + 32) = svtPointComp;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 32), (int32_t)svtPointComp, v46, v47, v48, v49, v50, v51);
      }
      IsRestrictionActiveGrandBoard = (int64_t)this->fields.switchInfoList;
      if ( !IsRestrictionActiveGrandBoard )
        goto LABEL_148;
      switchInfoComp = this->fields.switchInfoComp;
      IsRestrictionActiveGrandBoard = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)IsRestrictionActiveGrandBoard,
                                                 (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !switchInfoComp )
        goto LABEL_148;
      SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)IsRestrictionActiveGrandBoard, 0, 0);
      if ( item->fields._OrganizedWave_k__BackingField >= 1 )
      {
        v81 = item->fields.questRestrictionInfo;
        if ( v81 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v81, 0) )
        {
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyCondensedLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_148;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)IsRestrictionActiveGrandBoard, 0, 0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_148;
          IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                     0);
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_148;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
            this->fields.SwitchPartyWavePartyLabelScale,
            0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_148;
          UILabel__set_fontSize(
            (UILabel_o *)IsRestrictionActiveGrandBoard,
            this->fields.SwitchPartyWavePartyLabelFontSize,
            0);
          if ( PartyServantListViewItem__get_IsParty(item, 0) )
          {
            IsRestrictionActiveGrandBoard = (int64_t)this->fields.partyIcon;
            if ( !IsRestrictionActiveGrandBoard )
              goto LABEL_148;
            FlashingIconComponent__Clear((FlashingIconComponent_o *)IsRestrictionActiveGrandBoard, 0);
            wavePartyLabel = this->fields.wavePartyLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            IsRestrictionActiveGrandBoard = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15593/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/, 0);
            if ( !wavePartyLabel )
              goto LABEL_148;
            v83 = (System_String_o *)IsRestrictionActiveGrandBoard;
            v84 = wavePartyLabel;
            goto LABEL_145;
          }
          v85 = this->fields.wavePartyLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_15592/*"WAVE_BATTLE_SERVANT_PARTY"*/, 0);
          OrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
          v91 = v89;
          v92 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(OrganizedWave_k__BackingField, 0);
          IsRestrictionActiveGrandBoard = (int64_t)System_String__Format(v91, v92, 0);
          if ( !v85 )
            goto LABEL_148;
LABEL_144:
          v83 = (System_String_o *)IsRestrictionActiveGrandBoard;
          v84 = v85;
LABEL_145:
          UILabel__set_text(v84, v83, 0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyIcon;
          if ( IsRestrictionActiveGrandBoard )
          {
            FlashingIconComponent__Set((FlashingIconComponent_o *)IsRestrictionActiveGrandBoard, 0);
            return;
          }
          goto LABEL_148;
        }
        if ( !PartyServantListViewItem__get_IsParty(item, 0) )
        {
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_148;
          UILabel__set_fontSize(
            (UILabel_o *)IsRestrictionActiveGrandBoard,
            this->fields.DefaultWavePartyLabelFontSize,
            0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyCondensedLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_148;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)IsRestrictionActiveGrandBoard, 1, 0);
          v85 = this->fields.wavePartyLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_15597/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0);
          LODWORD(v96.fields.currentCryptoKey) = item->fields._OrganizedWave_k__BackingField;
          v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
          MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
          v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
          IsRestrictionActiveGrandBoard = (int64_t)System_String__Format_64459052(v86, v87, v88, 0);
          if ( !v85 )
            goto LABEL_148;
          goto LABEL_144;
        }
      }
      IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyIcon;
      if ( IsRestrictionActiveGrandBoard )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)IsRestrictionActiveGrandBoard, 0);
        return;
      }
      goto LABEL_148;
    }
    IsRestrictionActiveGrandBoard = (int64_t)item->fields.baseItem;
    if ( !IsRestrictionActiveGrandBoard )
      goto LABEL_148;
    IsRestrictionActiveGrandBoard = (int64_t)PartyOrganizationListViewItem__GetEquipList(
                                               (PartyOrganizationListViewItem_o *)IsRestrictionActiveGrandBoard,
                                               0);
    v12 = item->fields.baseItem;
    if ( !v12 )
      goto LABEL_148;
    userServantEntity = v12->fields.userServantEntity;
    EquipFriendShipSkillChange_k__BackingField = v12->fields._EquipFriendShipSkillChange_k__BackingField;
    equipIdList = (System_Int64_array *)IsRestrictionActiveGrandBoard;
    if ( userServantEntity )
    {
      v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v96.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v95 = v96;
      IsRestrictionActiveGrandBoard = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v95, 0);
      v16 = item->fields.userServantEntity;
      if ( !v16 )
        goto LABEL_148;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v94.fields.fakeValue = v17;
      if ( IsRestrictionActiveGrandBoard == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(
                                              &v94,
                                              0) )
      {
        v18 = 1;
LABEL_36:
        isChangeFriendShipSvtEquipSkill = EquipFriendShipSkillChange_k__BackingField > 0;
        v22 = !v18;
        v20 = !v18;
        goto LABEL_37;
      }
      v12 = item->fields.baseItem;
      if ( !v12 )
        goto LABEL_151;
    }
    if ( v12->fields.isFollower )
      goto LABEL_151;
    SvtId = PartyOrganizationListViewItem__get_SvtId(v12, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(SvtId, 0);
    if ( v24 != PartyServantListViewItem__get_SvtId(item, 0) )
    {
LABEL_151:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_SvtId(item, 0);
      if ( !Master_object )
        goto LABEL_148;
      IsRestrictionActiveGrandBoard = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(
                                                 (UserServantGrandMaster_o *)Master_object,
                                                 IsRestrictionActiveGrandBoard,
                                                 0);
      if ( IsRestrictionActiveGrandBoard )
      {
        v26 = item->fields.userServantEntity;
        if ( !v26 )
          goto LABEL_148;
        v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
        v28 = (UserServantGrandEntity_o *)IsRestrictionActiveGrandBoard;
        v29 = *(_QWORD *)(IsRestrictionActiveGrandBoard + 32);
        *(_OWORD *)&v96.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v96.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v93 = v96;
        v18 = v29 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v93, 0);
        equipIdList = UserServantGrandEntity__GetEquipUserServantIdList(v28, 0);
        EquipFriendShipSkillChange_k__BackingField = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v28, 0);
        goto LABEL_36;
      }
    }
    v18 = 0;
    goto LABEL_36;
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
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v35; // x9
  __int64 klass_low; // x10
  intptr_t v37; // x8
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_4D283E7 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&PartyServantListViewItemDraw_TypeInfo);
    sub_1C94098(&StringLiteral_20568/*"img_frames_mask01"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D283E7 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_53;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  if ( isDataLost )
  {
    v12 = this->fields.maskSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(v12, maskName, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_53;
    v38.fields.r = 1.0;
    v38.fields.g = 1.0;
    v38.fields.b = 1.0;
    v38.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v38, 0);
    v13 = (UIWidget_o *)this->fields.maskSprite;
    maskSprite = (UnityEngine_Component_o *)PartyServantListViewItemDraw_TypeInfo;
    if ( !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
    if ( !v13 )
      goto LABEL_53;
    UIWidget__set_height(v13, PartyServantListViewItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT, 0);
    message = (System_String_o *)this->fields.maskSprite;
    if ( !message )
      goto LABEL_53;
    maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
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
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskName )
      v14 = maskName;
    else
      v14 = (System_String_o *)StringLiteral_20568/*"img_frames_mask01"*/;
    if ( !maskSprite )
      goto LABEL_53;
    UISprite__set_atlas((UISprite_o *)maskSprite, this->fields.maskSpriteDefaultAtlas, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_53;
    UISprite__set_spriteName((UISprite_o *)maskSprite, v14, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    v15 = 0.0;
    if ( maskName )
      v15 = 1.0;
    if ( !maskSprite )
      goto LABEL_53;
    v16 = maskName ? 1.0 : 0.623;
    v17 = v15;
    v18 = v15;
    UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&v15, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_53;
    UIWidget__set_height((UIWidget_o *)maskSprite, this->fields.maskSpriteDefaultHeight, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
    if ( !maskSprite )
      goto LABEL_53;
    ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
      (ServantFaceIconComponent_o *)maskSprite,
      this->fields.maskSprite,
      v14,
      this->fields.maskSpriteDefaultAtlas,
      0);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_53;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskSprite, v9, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  if ( !isScale )
  {
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
    v21 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4D25F1E )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
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
    sub_1C942F0(maskSprite, message);
  }
  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_53;
  v20 = v19;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  v21 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v20 <= maskMessageWidth )
  {
    if ( !byte_4D25F1E )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
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
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_53;
  message = (System_String_o *)this->fields.maskMessageLabel;
  m_CachedPtr = maskSprite->fields.m_CachedPtr;
  v35 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(maskSprite[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_53;
  klass_low = SLODWORD(maskSprite[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = m_CachedPtr + 8 * klass_low;
    LODWORD(maskSprite[1].klass) = klass_low + 1;
    *(_QWORD *)(v37 + 32) = message;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v37 + 32), (int32_t)message, v28, v29, v30, v31, v32, v33);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v18; // x8
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  _BOOL4 isEventJoin; // w21
  __int64 *v28; // x8
  bool v29; // w21
  System_String_o *v30; // x0
  const MethodInfo *v31; // x5
  int m_CancellationTokenSource; // w8
  intptr_t v33; // x8
  _QWORD *v34; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x19

  v3 = item;
  v4 = this;
  if ( (byte_4D283E3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11568/*"SELECT_CANNOT"*/);
    sub_1C94098(&StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_1C94098(&StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D283E3 = 1;
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
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11567/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_47;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)this, 0);
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( !this )
      goto LABEL_47;
    item = (PartyServantListViewItem_o *)v4->fields.skillInvalidLabel;
    m_CachedPtr = this->fields.m_CachedPtr;
    v16 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_47;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)item,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v18 + 32) = item;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 32), (int32_t)item, v9, v10, v11, v12, v13, v14);
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
        v28 = &StringLiteral_11600/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_33:
        v30 = LocalizationManager__Get((System_String_o *)*v28, 0);
        PartyServantListViewItemDraw__SetMaskMessage(v4, v30, 0, 0, 0, v31);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isEventJoin )
        goto LABEL_28;
    }
    v28 = &StringLiteral_11568/*"SELECT_CANNOT"*/;
    goto LABEL_33;
  }
  if ( !v3->fields.isPushMode )
  {
    v29 = PartyServantListViewItemDraw__SetRestrictionMask(v4, v3, v20);
    goto LABEL_35;
  }
  if ( v3->fields.fatigureTime < 0 )
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
      v33 = this->fields.m_CachedPtr;
      v34 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_47;
      if ( *(_DWORD *)(v33 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = 2;
        *(_QWORD *)(v33 + 40) = item;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 40), (int32_t)item, v21, v22, v23, v24, v25, v26);
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0, 0);
        return v29;
      }
    }
LABEL_47:
    sub_1C942F0(this, item);
  }
  return v29;
}


bool PartyServantListViewItemDraw__SetRestrictionMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  PartyServantListViewItemDraw_o *v4; // x19
  System_String_o *v5; // x0
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v7; // x5
  bool v8; // w20
  System_String_o *v9; // x1
  const MethodInfo *v10; // x5
  bool v11; // w2
  PartyServantListViewItemDraw_o *v12; // x0
  System_String_o *v13; // x3
  bool v14; // w4
  __int64 *v15; // x8
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  System_String_o *v19; // x21
  int32_t *v20; // x1
  Il2CppObject *v21; // x0
  __int64 *v22; // x8
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4D283E4 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_15537/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C94098(&StringLiteral_10295/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C94098(&StringLiteral_11594/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C94098(&StringLiteral_11588/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_1C94098(&StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C94098(&StringLiteral_6465/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C94098(&StringLiteral_11587/*"SELECT_NO_SORTIE"*/);
    sub_1C94098(&StringLiteral_10324/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/);
    sub_1C94098(&StringLiteral_18588/*"datalost_svt_select"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    this = (PartyServantListViewItemDraw_o *)sub_1C94098(&StringLiteral_10346/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_4D283E4 = 1;
  }
  if ( !item )
    sub_1C942F0(this, item);
  if ( item->fields.isLeave )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = (System_String_o *)StringLiteral_11587/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v11 = 1;
    v12 = v4;
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
      v15 = &StringLiteral_10295/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v16 = LocalizationManager__Get((System_String_o *)*v15, 0);
      v8 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v4, v16, 1, v17);
      return v8;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_38;
    if ( item->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_44;
    if ( !item->fields._IsDataLost_k__BackingField || !PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0) )
    {
      if ( item->fields._TimesToRestart_k__BackingField >= 1
        && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
        v20 = &TimesToRestart_k__BackingField;
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_32:
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v20);
        RestrictionMessage = System_String__Format(v19, v21, 0);
        goto LABEL_9;
      }
LABEL_68:
      PartyServantListViewItemDraw__ClearMessage(v4, (const MethodInfo *)item);
      return 0;
    }
LABEL_26:
    v14 = 1;
    v12 = v4;
    v9 = (System_String_o *)StringLiteral_1/*""*/;
    v13 = (System_String_o *)StringLiteral_18588/*"datalost_svt_select"*/;
    v11 = 0;
LABEL_15:
    v8 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v12, v9, v11, v13, v14, v10);
    return v8;
  }
  if ( item->fields._IsDataLost_k__BackingField && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0) )
    goto LABEL_26;
  if ( item->fields._TimesToRestart_k__BackingField >= 1
    && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11594/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    v20 = &v23;
    v23 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_32;
  }
  if ( item->fields.isSame )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_10346/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_47;
  }
  if ( item->fields.isNotSameParty )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = &StringLiteral_10324/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/;
    goto LABEL_47;
  }
  if ( PartyServantListViewItem__get_IsRestricted(item, 0) )
  {
    RestrictionMessage = PartyServantListViewItem__GetRestrictionMessage(item, 0);
    goto LABEL_9;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_6465/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
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
      v22 = &StringLiteral_15537/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_47;
    }
    goto LABEL_68;
  }
LABEL_44:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = &StringLiteral_11588/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_47:
  v5 = (System_String_o *)*v22;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v5, 0);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v4, RestrictionMessage, 0, 0, 0, v7);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  intptr_t v26; // x8

  v5 = message;
  if ( (byte_4D283E8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D283E8 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskFatigureMessageLabelTime;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningBase;
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningIcon;
  if ( !maskSprite )
    goto LABEL_29;
  FlashingIconComponent__SetFast((FlashingIconComponent_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)maskSprite, v5, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  if ( !isScale )
  {
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
    v10 = (UnityEngine_Transform_o *)maskSprite;
    if ( !byte_4D25F1E )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
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
    sub_1C942F0(maskSprite, message);
  }
  LODWORD(v8) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_29;
  v9 = v8;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  v10 = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v9 <= warningMessageWidth )
  {
    if ( !byte_4D25F1E )
    {
      maskSprite = (UnityEngine_Component_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
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
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_29;
  message = (System_String_o *)this->fields.warningMessageLabel;
  m_CachedPtr = maskSprite->fields.m_CachedPtr;
  v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++HIDWORD(maskSprite[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_29;
  klass_low = SLODWORD(maskSprite[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)maskSprite,
      (Il2CppObject *)message,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = m_CachedPtr + 8 * klass_low;
    LODWORD(maskSprite[1].klass) = klass_low + 1;
    *(_QWORD *)(v26 + 32) = message;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 32), (int32_t)message, v17, v18, v19, v20, v21, v22);
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
     && !PartyServantListViewItem__get_IsRestricted(item, 0)
     && !item->fields.isUniqueSvtRestriction)
    && (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
  {
    PartyServantListViewItemDraw__SetFatigueMask(this, item, method);
  }
}