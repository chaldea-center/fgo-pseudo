void PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyServantListViewItemDraw_c *v1; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9
  struct PartyServantListViewItemDraw_StaticFields *v3; // x8

  if ( (byte_596C228 & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewItemDraw_TypeInfo);
    byte_596C228 = 1;
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

  if ( (byte_596C21E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C21E = 1;
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
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.messageLabelList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_2213A04(
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
      sub_2213A04(
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
        sub_2213A04(
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
    sub_2213CDC(maskMessageLabel, method);
  }
}


void PartyServantListViewItemDraw__ClearMessage(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_596C223 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C223 = 1;
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
    sub_2213CDC(maskSprite, method);
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
  void *WaveBattleEnemyClassIds; // x0
  PartyOrganizationRootComponent_c *v9; // x1
  struct ServantClassCompatibilityIconComponent_o *v10; // x20
  int32_t SvtClassId; // w21
  System_Int32_array *classIds; // x2
  ServantClassCompatibilityIconComponent_o *v13; // x0
  int32_t v14; // w1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 naturalAligment; // x9
  __int64 v18; // x22
  int32_t v19; // w0
  int32_t v20; // w22
  int32_t v21; // w21
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v23; // x21
  struct ServantClassCompatibilityIconComponent_o *v24; // x19
  PartyServantListViewItemDraw_o *v25; // x0
  System_String_o *v26; // x1
  bool v27; // w2
  System_String_o *v28; // x3
  bool v29; // w4
  const MethodInfo *v30; // x5

  if ( (byte_596C222 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&PartyOrganizationRootComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C222 = 1;
  }
  classCompatibilityIcon = (UnityEngine_Object_o *)this->fields.classCompatibilityIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isClear);
  WaveBattleEnemyClassIds = (void *)UnityEngine_Object__op_Inequality(classCompatibilityIcon, 0, 0);
  if ( ((unsigned __int8)WaveBattleEnemyClassIds & 1) != 0 )
  {
    if ( !isClear )
    {
      if ( !item )
        goto LABEL_33;
      if ( PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0) )
      {
        WaveBattleEnemyClassIds = PartyServantListViewItem__get_WaveBattleEnemyClassIds(item, 0);
        if ( !WaveBattleEnemyClassIds )
          goto LABEL_33;
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
              classIds = (System_Int32_array *)WaveBattleEnemyClassIds;
              v13 = v10;
              v14 = SvtClassId;
LABEL_14:
              ServantClassCompatibilityIconComponent__SetIcon(v13, v14, classIds, 1, 0);
              return;
            }
          }
          goto LABEL_33;
        }
      }
      WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !WaveBattleEnemyClassIds )
        goto LABEL_33;
      if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)WaveBattleEnemyClassIds, 40, 0) )
      {
        WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !WaveBattleEnemyClassIds )
          goto LABEL_33;
        WaveBattleEnemyClassIds = (void *)*((_QWORD *)WaveBattleEnemyClassIds + 4);
        if ( !WaveBattleEnemyClassIds )
          goto LABEL_33;
        v9 = PartyOrganizationRootComponent_TypeInfo;
        naturalAligment = PartyOrganizationRootComponent_TypeInfo->_2.naturalAligment;
        if ( *(unsigned __int8 *)(*(_QWORD *)WaveBattleEnemyClassIds + 304LL) < (unsigned int)naturalAligment
          || *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)WaveBattleEnemyClassIds + 200LL)
                                                  + 8 * naturalAligment
                                                  - 8) != PartyOrganizationRootComponent_TypeInfo )
        {
          v25 = (PartyServantListViewItemDraw_o *)sub_221405C(
                                                    WaveBattleEnemyClassIds,
                                                    PartyOrganizationRootComponent_TypeInfo,
                                                    v15,
                                                    v16);
          PartyServantListViewItemDraw__SetMaskMessage(v25, v26, v27, v28, v29, v30);
          return;
        }
        v18 = *((_QWORD *)WaveBattleEnemyClassIds + 68);
        if ( v18 )
        {
          v19 = BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)WaveBattleEnemyClassIds + 68), 0);
          if ( v19 )
          {
            v20 = *(_DWORD *)(v18 + 24);
            if ( v20 )
            {
              v21 = v19;
              WaveBattleEnemyClassIds = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !WaveBattleEnemyClassIds )
                goto LABEL_33;
              WaveBattleEnemyClassIds = DataManager__GetMasterData_object_(
                                          (DataManager_o *)WaveBattleEnemyClassIds,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
              if ( !WaveBattleEnemyClassIds )
                goto LABEL_33;
              Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)WaveBattleEnemyClassIds, v21, v20, 0);
              if ( Entity )
              {
                v23 = Entity;
                WaveBattleEnemyClassIds = item->fields.userServantEntity;
                if ( WaveBattleEnemyClassIds )
                {
                  v24 = this->fields.classCompatibilityIcon;
                  WaveBattleEnemyClassIds = (void *)UserServantEntity__getSvtClassId(
                                                      (UserServantEntity_o *)WaveBattleEnemyClassIds,
                                                      0,
                                                      0,
                                                      0);
                  if ( v24 )
                  {
                    classIds = v23->fields.classIds;
                    v14 = (int)WaveBattleEnemyClassIds;
                    v13 = v24;
                    goto LABEL_14;
                  }
                }
LABEL_33:
                sub_2213CDC(WaveBattleEnemyClassIds, v9);
              }
            }
          }
        }
      }
    }
    WaveBattleEnemyClassIds = this->fields.classCompatibilityIcon;
    if ( !WaveBattleEnemyClassIds )
      goto LABEL_33;
    ServantClassCompatibilityIconComponent__Clear(
      (ServantClassCompatibilityIconComponent_o *)WaveBattleEnemyClassIds,
      0);
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
    sub_2213CDC(this, item);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *maskFatigureMessageLabel; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v15; // x8
  System_String_o *v16; // x23
  System_String_o *v17; // x0
  int32_t v18; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v20; // s0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = item;
  v4 = this;
  if ( (byte_596C227 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12050/*"SELECT_NO_SORTIE_FATIGURE"*/);
    sub_2213A60(&StringLiteral_21381/*"img_frames_mask04"*/);
    sub_2213A60(&StringLiteral_12056/*"SELECT_NO_SORTIE_TITLE"*/);
    sub_2213A60(&StringLiteral_12052/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/);
    sub_2213A60(&StringLiteral_431/*"#042484"*/);
    this = (PartyServantListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C227 = 1;
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_21381/*"img_frames_mask04"*/, 0);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_431/*"#042484"*/, &value, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskSprite;
  value.fields.a = 0.69804;
  if ( !this )
    goto LABEL_41;
  v32.fields.g = value.fields.g;
  v32.fields.b = value.fields.b;
  v32.fields.r = value.fields.r;
  v32.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v32, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_41;
  ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
    (ServantFaceIconComponent_o *)this,
    v4->fields.maskSprite,
    (System_String_o *)StringLiteral_21381/*"img_frames_mask04"*/,
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12056/*"SELECT_NO_SORTIE_TITLE"*/, 0);
  if ( !maskFatigureMessageLabel )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0);
  maskFatigureMessageLabelTime = v4->fields.maskFatigureMessageLabelTime;
  if ( v3->fields.isFatigureRecover )
    v15 = (System_String_o **)&StringLiteral_12052/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v15 = (System_String_o **)&StringLiteral_12050/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v16 = *v15;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  v17 = LocalizationManager__Get(v16, 0);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v17, (Il2CppObject *)RestTime4, 0);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_41;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  v18 = v3->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v18, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_41;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v20 = 24.0;
  if ( !v3->fields.isFatigureRecover )
    v20 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v20, 0);
  this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
  if ( !this
    || (m_CachedPtr = this->fields.m_CachedPtr,
        item = (PartyServantListViewItem_o *)v4->fields.maskFatigueBase,
        v28 = Method_System_Collections_Generic_List_UIWidget__Add__,
        ++HIDWORD(this->fields.m_CancellationTokenSource),
        !m_CachedPtr) )
  {
LABEL_41:
    sub_2213CDC(this, item);
  }
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)item,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v30 + 32) = item;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 32), (int32_t)item, v21, v22, v23, v24, v25, v26);
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
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v15; // x2
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v18; // x2
  bool v19; // w0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *selectObject; // x22
  bool v23; // w21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_596C226 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C226 = 1;
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
        goto LABEL_36;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_36;
      v16 = UnityEngine_Component__get_gameObject(Component_object, 0);
      Component_object = (UnityEngine_Component_o *)PartyServantListViewItem__get_IsDispChoice(item, 0);
      if ( !v16 )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(v16, (unsigned __int8)Component_object & 1, 0);
    }
    pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v15);
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
    v19 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v18);
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    v23 = v19;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    if ( !UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
      goto LABEL_34;
    Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
LABEL_34:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v24);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v23, v25);
      return;
    }
LABEL_36:
    sub_2213CDC(Component_object, v8);
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
  __int64 v12; // x2
  struct PartyOrganizationListViewItem_o *v13; // x8
  struct UserServantEntity_o *userServantEntity; // x9
  int32_t EquipFriendShipSkillChange_k__BackingField; // w23
  __int128 v16; // q1
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q1
  bool IsGrandServant; // w24
  bool isChangeFriendShipSvtEquipSkill; // w23
  bool v21; // w7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  int32_t BaseServantId; // w24
  Il2CppObject *Master_object; // x24
  __int64 v25; // x2
  struct UserServantEntity_o *v26; // x8
  UserServantGrandEntity_o *v27; // x25
  __int128 v28; // q1
  __int64 v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *partyIcon; // x21
  __int64 v33; // x2
  FlashingIconComponent_o *v34; // x21
  UnityEngine_Object_o *lockSprite; // x21
  __int64 v36; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  __int64 v39; // x2
  UnityEngine_GameObject_o *v40; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v42; // x2
  bool v43; // w0
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_o *selectObject; // x22
  bool v47; // w21
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  struct System_Collections_Generic_List_UIWidget__o *switchInfoList; // x8
  int32_t size; // w2
  int v52; // w9
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  __int64 v63; // x2
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  System_String_o *v68; // x21
  Il2CppObject *v69; // x22
  UILabel_o *v70; // x21
  System_String_o *v71; // x23
  Il2CppObject *v72; // x0
  float v73; // s10
  UnityEngine_Vector2_o v74; // x2
  float v75; // s11
  UIWidget_o *v76; // x21
  unsigned int v77; // w9
  int32_t v78; // w1
  float v79; // s12
  __int64 v80; // x1
  __int64 v81; // x2
  UISprite_o *svtPointIconSprite; // x21
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  QuestRestrictionInfo_o *v88; // x0
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  struct UILabel_o *wavePartyLabel; // x20
  System_String_o *v93; // x1
  UILabel_o *v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  struct UILabel_o *v97; // x21
  System_String_o *v98; // x22
  Il2CppObject *v99; // x23
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  int32_t OrganizedWave_k__BackingField; // w8
  System_String_o *v103; // x20
  Il2CppObject *v104; // x0
  unsigned int v105; // s0
  unsigned int localScale; // s0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+20h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v108; // [xsp+40h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+60h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+80h] [xbp-A0h] BYREF
  int32_t MaxWave_k__BackingField; // [xsp+A8h] [xbp-78h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+ACh] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C21F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&PartyServantListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_16152/*"WAVE_BATTLE_SERVANT_WAVE"*/);
    sub_2213A60(&StringLiteral_10706/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/);
    sub_2213A60(&StringLiteral_16148/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/);
    sub_2213A60(&StringLiteral_16147/*"WAVE_BATTLE_SERVANT_PARTY"*/);
    sub_2213A60(&StringLiteral_20646/*"func_group_icon_1028"*/);
    sub_2213A60(&StringLiteral_10707/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/);
    byte_596C21F = 1;
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
          goto LABEL_143;
        isChangeFriendShipSvtEquipSkill = item->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField;
        IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)IsRestrictionActiveGrandBoard, 0);
        v21 = 0;
      }
      else
      {
        baseItem = item->fields.baseItem;
        if ( !baseItem )
          goto LABEL_143;
        isChangeFriendShipSvtEquipSkill = 0;
        v21 = 0;
        IsGrandServant = baseItem->fields._IsTempGrandServant_k__BackingField;
      }
      goto LABEL_35;
    }
    IsRestrictionActiveGrandBoard = (int64_t)item->fields.baseItem;
    if ( !IsRestrictionActiveGrandBoard )
      goto LABEL_143;
    IsRestrictionActiveGrandBoard = (int64_t)PartyOrganizationListViewItem__GetEquipList(
                                               (PartyOrganizationListViewItem_o *)IsRestrictionActiveGrandBoard,
                                               0);
    v13 = item->fields.baseItem;
    if ( !v13 )
      goto LABEL_143;
    userServantEntity = v13->fields.userServantEntity;
    EquipFriendShipSkillChange_k__BackingField = v13->fields._EquipFriendShipSkillChange_k__BackingField;
    equipIdList = (System_Int64_array *)IsRestrictionActiveGrandBoard;
    if ( userServantEntity )
    {
      v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v110.fields.fakeValue = v16;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointComp, v12);
      v109 = v110;
      IsRestrictionActiveGrandBoard = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v109, 0);
      v17 = item->fields.userServantEntity;
      if ( !v17 )
        goto LABEL_143;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      *(_OWORD *)&v108.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v108.fields.fakeValue = v18;
      if ( IsRestrictionActiveGrandBoard == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                              &v108,
                                              0) )
      {
        IsGrandServant = 1;
LABEL_34:
        v21 = !IsGrandServant;
        isChangeFriendShipSvtEquipSkill = EquipFriendShipSkillChange_k__BackingField > 0;
LABEL_35:
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.servantFaceIcon;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_143;
        ServantFaceIconComponent__Set(
          (ServantFaceIconComponent_o *)IsRestrictionActiveGrandBoard,
          item->fields.userServantEntity,
          equipIdList,
          questRestrictionInfo,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          IsGrandServant,
          v21,
          isChangeFriendShipSvtEquipSkill,
          0,
          0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.servantFaceIcon;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_143;
        ServantFaceIconComponent__SetGrandFaceMaskSpriteCommonAtlas(
          (ServantFaceIconComponent_o *)IsRestrictionActiveGrandBoard,
          this->fields.maskSprite,
          this->fields.maskSpriteDefaultName,
          this->fields.maskSpriteDefaultAtlas,
          0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.info2IconLabel;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_143;
        UIIconLabel__Set((UIIconLabel_o *)IsRestrictionActiveGrandBoard, item->fields.iconLabelInfo3, 0);
        partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
        IsRestrictionActiveGrandBoard = UnityEngine_Object__op_Inequality(partyIcon, 0, 0);
        if ( (IsRestrictionActiveGrandBoard & 1) != 0 )
        {
          v34 = this->fields.partyIcon;
          if ( isBase )
          {
            if ( !v34 )
              goto LABEL_143;
            FlashingIconComponent__Clear(this->fields.partyIcon, 0);
          }
          else
          {
            IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_IsParty(item, 0);
            if ( !v34 )
              goto LABEL_143;
            FlashingIconComponent__Set_47864696(v34, IsRestrictionActiveGrandBoard & 1, 0);
          }
        }
        lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtPointComp, v33);
        if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
        {
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.lockSprite;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                         0);
          IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_IsDispLock(item, 0);
          if ( !gameObject )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive(gameObject, IsRestrictionActiveGrandBoard & 1, 0);
        }
        choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtPointComp, v36);
        if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
        {
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.choiceSprite;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsRestrictionActiveGrandBoard, 0);
          IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_IsDispChoice(item, 0);
          if ( !v40 )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive(v40, IsRestrictionActiveGrandBoard & 1, 0);
        }
        pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtPointComp, v39);
        if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
        {
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.pushSprite;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                     0);
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
            item->fields.isPush,
            0);
        }
        v43 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v42);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v47 = v43;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
        if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
        {
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.selectObject;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
            item->fields.isBase,
            0);
        }
        PartyServantListViewItemDraw__SetDispClassIcon(this, item, v48);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v47, v49);
        switchInfoList = this->fields.switchInfoList;
        if ( !switchInfoList )
          goto LABEL_143;
        size = switchInfoList->fields._size;
        v52 = switchInfoList->fields._version + 1;
        switchInfoList->fields._size = 0;
        switchInfoList->fields._version = v52;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)switchInfoList->fields._items, 0, size, 0);
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointComp;
        if ( !IsRestrictionActiveGrandBoard
          || (IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                         0)) == 0 )
        {
LABEL_143:
          sub_2213CDC(IsRestrictionActiveGrandBoard, svtPointComp);
        }
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
          item->fields._IsDispSvtPoint_k__BackingField,
          0);
        if ( item->fields._IsDispSvtPoint_k__BackingField )
        {
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.switchInfoList;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          v59 = *(_QWORD *)(IsRestrictionActiveGrandBoard + 16);
          svtPointComp = (Il2CppObject *)this->fields.svtPointComp;
          v60 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(IsRestrictionActiveGrandBoard + 28);
          if ( !v59 )
            goto LABEL_143;
          v61 = *(int *)(IsRestrictionActiveGrandBoard + 24);
          if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)IsRestrictionActiveGrandBoard,
              svtPointComp,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = v59 + 8 * v61;
            *(_DWORD *)(IsRestrictionActiveGrandBoard + 24) = v61 + 1;
            *(_QWORD *)(v62 + 32) = svtPointComp;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v62 + 32),
              (int32_t)svtPointComp,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
          }
          svtPointInfoLabel = (UIWidget_o *)this->fields.svtPointInfoLabel;
          IsRestrictionActiveGrandBoard = (int64_t)PartyServantListViewItemDraw_TypeInfo;
          if ( !*(&PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo, svtPointComp, v63);
          if ( !svtPointInfoLabel )
            goto LABEL_143;
          UIWidget__set_width(
            svtPointInfoLabel,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT,
            0);
          SvtPointRank_k__BackingField = item->fields._SvtPointRank_k__BackingField;
          v65 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0);
          v68 = System_String__Concat_75651716((System_String_o *)StringLiteral_10707/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v65, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66, v67);
          v69 = (Il2CppObject *)LocalizationManager__Get(v68, 0);
          v70 = this->fields.svtPointInfoLabel;
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_10706/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0);
          LODWORD(v110.fields.currentCryptoKey) = item->fields._SvtPoint_k__BackingField;
          v72 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v110);
          IsRestrictionActiveGrandBoard = (int64_t)System_String__Format_75697880(v71, v69, v72, 0);
          if ( !v70 )
            goto LABEL_143;
          UILabel__set_text(v70, (System_String_o *)IsRestrictionActiveGrandBoard, 0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointBaseObj;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
                                                     0);
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_BASE_POS,
            0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointBaseObj;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
                                                     0);
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          localPosition = UnityEngine_Transform__get_localPosition(
                            (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
                            0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                     0);
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          v105 = (unsigned int)UnityEngine_Transform__get_localPosition(
                                 (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
                                 0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          v73 = *(float *)&v105;
          LODWORD(v75) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)IsRestrictionActiveGrandBoard, 0);
          v76 = (UIWidget_o *)this->fields.svtPointInfoLabel;
          IsRestrictionActiveGrandBoard = (int64_t)System_Math_TypeInfo;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
              System_Math_TypeInfo,
              svtPointComp,
              v74);
          if ( !v76 )
            goto LABEL_143;
          v77 = vcvtps_s32_f32(v75);
          v78 = ceilf(v75) == INFINITY ? 0x80000000 : v77;
          UIWidget__set_width(v76, v78, 0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          UILabel__SetCondensedScale(
            (UILabel_o *)IsRestrictionActiveGrandBoard,
            PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX,
            0,
            0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointInfoLabel;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                     0);
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale(
                                       (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
                                       0);
          IsRestrictionActiveGrandBoard = (int64_t)this->fields.svtPointBaseObj;
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          v79 = *(float *)&localScale;
          IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)IsRestrictionActiveGrandBoard,
                                                     0);
          if ( !IsRestrictionActiveGrandBoard )
            goto LABEL_143;
          v114.fields.y = localPosition.fields.y;
          v114.fields.z = localPosition.fields.z;
          v114.fields.x = -(float)(v73 + (float)(v75 * v79));
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard, v114, 0);
          svtPointIconSprite = this->fields.svtPointIconSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v80, v81);
          AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_20646/*"func_group_icon_1028"*/, 0);
        }
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.switchInfoList;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_143;
        v83 = *(_QWORD *)(IsRestrictionActiveGrandBoard + 16);
        svtPointComp = (Il2CppObject *)this->fields.costComp;
        v84 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(IsRestrictionActiveGrandBoard + 28);
        if ( !v83 )
          goto LABEL_143;
        v85 = *(int *)(IsRestrictionActiveGrandBoard + 24);
        if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)IsRestrictionActiveGrandBoard,
            svtPointComp,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
        }
        else
        {
          v86 = v83 + 8 * v85;
          *(_DWORD *)(IsRestrictionActiveGrandBoard + 24) = v85 + 1;
          *(_QWORD *)(v86 + 32) = svtPointComp;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v86 + 32),
            (int32_t)svtPointComp,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
        }
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.switchInfoList;
        if ( !IsRestrictionActiveGrandBoard )
          goto LABEL_143;
        switchInfoComp = this->fields.switchInfoComp;
        IsRestrictionActiveGrandBoard = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)IsRestrictionActiveGrandBoard,
                                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !switchInfoComp )
          goto LABEL_143;
        SwitchUIWidgetComponent__Set(switchInfoComp, (UIWidget_array *)IsRestrictionActiveGrandBoard, 0, 0);
        if ( item->fields._OrganizedWave_k__BackingField >= 1 )
        {
          v88 = item->fields.questRestrictionInfo;
          if ( v88 && QuestRestrictionInfo__IsWaveSetupSwitchParty(v88, 0) )
          {
            IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyCondensedLabel;
            if ( !IsRestrictionActiveGrandBoard )
              goto LABEL_143;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)IsRestrictionActiveGrandBoard, 0, 0);
            IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyLabel;
            if ( !IsRestrictionActiveGrandBoard )
              goto LABEL_143;
            IsRestrictionActiveGrandBoard = (int64_t)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)IsRestrictionActiveGrandBoard,
                                                       0);
            if ( !IsRestrictionActiveGrandBoard )
              goto LABEL_143;
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)IsRestrictionActiveGrandBoard,
              this->fields.SwitchPartyWavePartyLabelScale,
              0);
            IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyLabel;
            if ( !IsRestrictionActiveGrandBoard )
              goto LABEL_143;
            UILabel__set_fontSize(
              (UILabel_o *)IsRestrictionActiveGrandBoard,
              this->fields.SwitchPartyWavePartyLabelFontSize,
              0);
            if ( PartyServantListViewItem__get_IsParty(item, 0) )
            {
              IsRestrictionActiveGrandBoard = (int64_t)this->fields.partyIcon;
              if ( !IsRestrictionActiveGrandBoard )
                goto LABEL_143;
              FlashingIconComponent__Clear((FlashingIconComponent_o *)IsRestrictionActiveGrandBoard, 0);
              wavePartyLabel = this->fields.wavePartyLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v90, v91);
              IsRestrictionActiveGrandBoard = (int64_t)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_16148/*"WAVE_BATTLE_SERVANT_PARTY_ACTIVE"*/,
                                                         0);
              if ( !wavePartyLabel )
                goto LABEL_143;
              v93 = (System_String_o *)IsRestrictionActiveGrandBoard;
              v94 = wavePartyLabel;
              goto LABEL_140;
            }
            v97 = this->fields.wavePartyLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, svtPointComp, v89);
            v101 = LocalizationManager__Get((System_String_o *)StringLiteral_16147/*"WAVE_BATTLE_SERVANT_PARTY"*/, 0);
            OrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
            v103 = v101;
            v104 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(OrganizedWave_k__BackingField, 0);
            IsRestrictionActiveGrandBoard = (int64_t)System_String__Format(v103, v104, 0);
            if ( !v97 )
              goto LABEL_143;
LABEL_139:
            v93 = (System_String_o *)IsRestrictionActiveGrandBoard;
            v94 = v97;
LABEL_140:
            UILabel__set_text(v94, v93, 0);
            IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyIcon;
            if ( IsRestrictionActiveGrandBoard )
            {
              FlashingIconComponent__Set((FlashingIconComponent_o *)IsRestrictionActiveGrandBoard, 0);
              return;
            }
            goto LABEL_143;
          }
          if ( !PartyServantListViewItem__get_IsParty(item, 0) )
          {
            IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyLabel;
            if ( !IsRestrictionActiveGrandBoard )
              goto LABEL_143;
            UILabel__set_fontSize(
              (UILabel_o *)IsRestrictionActiveGrandBoard,
              this->fields.DefaultWavePartyLabelFontSize,
              0);
            IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyCondensedLabel;
            if ( !IsRestrictionActiveGrandBoard )
              goto LABEL_143;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)IsRestrictionActiveGrandBoard, 1, 0);
            v97 = this->fields.wavePartyLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95, v96);
            v98 = LocalizationManager__Get((System_String_o *)StringLiteral_16152/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0);
            LODWORD(v110.fields.currentCryptoKey) = item->fields._OrganizedWave_k__BackingField;
            v99 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v110);
            MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
            v100 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &MaxWave_k__BackingField);
            IsRestrictionActiveGrandBoard = (int64_t)System_String__Format_75697880(v98, v99, v100, 0);
            if ( !v97 )
              goto LABEL_143;
            goto LABEL_139;
          }
        }
        IsRestrictionActiveGrandBoard = (int64_t)this->fields.wavePartyIcon;
        if ( IsRestrictionActiveGrandBoard )
        {
          FlashingIconComponent__Clear((FlashingIconComponent_o *)IsRestrictionActiveGrandBoard, 0);
          return;
        }
        goto LABEL_143;
      }
      v13 = item->fields.baseItem;
      if ( !v13 )
        goto LABEL_146;
    }
    if ( v13->fields.isFollower
      || (BaseServantId = PartyOrganizationListViewItem__get_BaseServantId(v13, 0),
          BaseServantId != PartyServantListViewItem__get_BaseServantId(item, 0)) )
    {
LABEL_146:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtPointComp, v12);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      IsRestrictionActiveGrandBoard = PartyServantListViewItem__get_BaseServantId(item, 0);
      if ( !Master_object )
        goto LABEL_143;
      IsRestrictionActiveGrandBoard = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(
                                                 (UserServantGrandMaster_o *)Master_object,
                                                 IsRestrictionActiveGrandBoard,
                                                 0);
      if ( IsRestrictionActiveGrandBoard )
      {
        v26 = item->fields.userServantEntity;
        if ( !v26 )
          goto LABEL_143;
        v27 = (UserServantGrandEntity_o *)IsRestrictionActiveGrandBoard;
        v28 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
        v29 = *(_QWORD *)(IsRestrictionActiveGrandBoard + 32);
        *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v110.fields.fakeValue = v28;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointComp, v25);
        v107 = v110;
        IsGrandServant = v29 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v107, 0);
        equipIdList = UserServantGrandEntity__GetEquipUserServantIdList(v27, 0);
        EquipFriendShipSkillChange_k__BackingField = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v27, 0);
        goto LABEL_34;
      }
    }
    IsGrandServant = 0;
    goto LABEL_34;
  }
}


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
  float v18; // s0
  float v19; // s8
  UnityEngine_Transform_o *v20; // x20
  float maskMessageWidth; // s0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *messageLabelList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = message;
  if ( (byte_596C224 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&PartyServantListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_21378/*"img_frames_mask01"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C224 = 1;
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
    v36.fields.r = 1.0;
    v36.fields.g = 1.0;
    v36.fields.b = 1.0;
    v36.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)maskSprite, v36, 0);
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
      v16 = (System_String_o *)StringLiteral_21378/*"img_frames_mask01"*/;
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
    v37.fields.r = 0.0;
    if ( maskName )
    {
      v37.fields.r = 1.0;
      v37.fields.a = 1.0;
    }
    else
    {
      v37.fields.a = 0.623;
    }
    v37.fields.g = v37.fields.r;
    v37.fields.b = v37.fields.r;
    UIWidget__set_color((UIWidget_o *)maskSprite, v37, 0);
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
      v20 = (UnityEngine_Transform_o *)maskSprite;
      if ( !byte_5969AE5 )
      {
        maskSprite = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( v20 )
      {
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
        goto LABEL_47;
      }
    }
LABEL_52:
    sub_2213CDC(maskSprite, message);
  }
  if ( !maskSprite )
    goto LABEL_52;
  LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_52;
  v19 = v18;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  v20 = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v19 <= maskMessageWidth )
  {
    if ( !byte_5969AE5 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
  }
  else
  {
    oneVector.fields.x = maskMessageWidth / v19;
    oneVector.fields.z = 1.0;
    oneVector.fields.y = 1.0;
  }
  if ( !v20 )
    goto LABEL_52;
LABEL_47:
  UnityEngine_Transform__set_localScale(v20, oneVector, 0);
  messageLabelList = (System_Collections_Generic_List_object__o *)this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_52;
  items = messageLabelList->fields._items;
  message = (System_String_o *)this->fields.maskMessageLabel;
  v32 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++messageLabelList->fields._version;
  if ( !items )
    goto LABEL_52;
  size = messageLabelList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      messageLabelList,
      (Il2CppObject *)message,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v34[4] = (Il2CppClass *)message;
    messageLabelList->fields._size = size + 1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)message, v24, v25, v26, v27, v28, v29);
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
  if ( (byte_596C220 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12029/*"SELECT_CANNOT"*/);
    sub_2213A60(&StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_2213A60(&StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/);
    this = (PartyServantListViewItemDraw_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C220 = 1;
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
    this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
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
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_QWORD *)(v19 + 32) = item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)item, v10, v11, v12, v13, v14, v15);
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
      v29 = &StringLiteral_12061/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( !v28 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
      v29 = &StringLiteral_12029/*"SELECT_CANNOT"*/;
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 40), (int32_t)item, v22, v23, v24, v25, v26, v27);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)item,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
    }
    this = (PartyServantListViewItemDraw_o *)v4->fields.messageLabelList;
    if ( this )
    {
      messageLabel = v4->fields.messageLabel;
      this = (PartyServantListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)this, 0, 0);
        return v30;
      }
    }
LABEL_49:
    sub_2213CDC(this, item);
  }
  return v30;
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
  bool v8; // w19
  System_String_o *v9; // x1
  const MethodInfo *v10; // x5
  PartyServantListViewItemDraw_o *v11; // x0
  bool v12; // w2
  System_String_o *v13; // x3
  bool v14; // w4
  __int64 *v15; // x8
  System_String_o *v16; // x1
  PartyServantListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  System_String_o *v20; // x21
  int32_t *v21; // x1
  __int64 v22; // x0
  Il2CppObject *v23; // x0
  __int64 *v24; // x8
  __int64 v25; // x2
  int32_t v26; // [xsp+8h] [xbp-28h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_596C221 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_16092/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_2213A60(&StringLiteral_10676/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/);
    sub_2213A60(&StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_2213A60(&StringLiteral_12049/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/);
    sub_2213A60(&StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_2213A60(&StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_2213A60(&StringLiteral_12048/*"SELECT_NO_SORTIE"*/);
    sub_2213A60(&StringLiteral_10705/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/);
    sub_2213A60(&StringLiteral_19315/*"datalost_svt_select"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (PartyServantListViewItemDraw_o *)sub_2213A60(&StringLiteral_10727/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/);
    byte_596C221 = 1;
  }
  if ( !item )
    sub_2213CDC(this, item);
  if ( item->fields.isLeave )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v5 = (System_String_o *)StringLiteral_12048/*"SELECT_NO_SORTIE"*/;
    goto LABEL_8;
  }
  if ( item->fields.isQuestRestriction )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10675/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    v11 = v4;
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
      v15 = &StringLiteral_10676/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_22:
      v16 = LocalizationManager__Get((System_String_o *)*v15, 0);
      v17 = v4;
      v8 = 1;
      PartyServantListViewItemDraw__SetWarningMessage(v17, v16, 1, v18);
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
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v25);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
        v21 = &TimesToRestart_k__BackingField;
        v22 = qword_5984348;
        TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_32:
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(v22, v21);
        RestrictionMessage = System_String__Format(v20, v23, 0);
        goto LABEL_9;
      }
LABEL_68:
      PartyServantListViewItemDraw__ClearMessage(v4, (const MethodInfo *)item);
      return 0;
    }
LABEL_26:
    v11 = v4;
    v12 = 0;
    v14 = 1;
    v9 = (System_String_o *)StringLiteral_1/*""*/;
    v13 = (System_String_o *)StringLiteral_19315/*"datalost_svt_select"*/;
LABEL_15:
    v8 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v11, v9, v12, v13, v14, v10);
    return v8;
  }
  if ( item->fields._IsDataLost_k__BackingField && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0) )
    goto LABEL_26;
  if ( item->fields._TimesToRestart_k__BackingField >= 1
    && PartyServantListViewItem__get_IsValidDataLostDisplay(item, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12055/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
    v21 = &v26;
    v22 = qword_5984348;
    v26 = item->fields._TimesToRestart_k__BackingField;
    goto LABEL_32;
  }
  if ( item->fields.isSame )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v24 = &StringLiteral_10727/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
    goto LABEL_47;
  }
  if ( item->fields.isNotSameParty )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v24 = &StringLiteral_10705/*"PARTY_ORGANIZATION_SERVANT_NOT_SAME_PARTY_SERVANT"*/;
    goto LABEL_47;
  }
  if ( PartyServantListViewItem__get_IsRestricted(item, 0) )
  {
    RestrictionMessage = PartyServantListViewItem__GetRestrictionMessage(item, 0);
    goto LABEL_9;
  }
  if ( item->fields.isUniqueSvtRestriction || item->fields.isUniqueIndividualityRestriction )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
    v15 = &StringLiteral_6743/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
      v24 = &StringLiteral_16092/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
      goto LABEL_47;
    }
    goto LABEL_68;
  }
LABEL_44:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, method);
  v24 = &StringLiteral_12049/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
LABEL_47:
  v5 = (System_String_o *)*v24;
LABEL_8:
  RestrictionMessage = LocalizationManager__Get(v5, 0);
LABEL_9:
  PartyServantListViewItemDraw__SetMaskMessage(v4, RestrictionMessage, 0, 0, 0, v7);
  return 1;
}


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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *messageLabelList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  Il2CppClass **v24; // x0
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  v5 = message;
  if ( (byte_596C225 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C225 = 1;
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
      if ( !byte_5969AE5 )
      {
        maskSprite = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( v10 )
      {
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
        goto LABEL_25;
      }
    }
LABEL_30:
    sub_2213CDC(maskSprite, message);
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
    if ( !byte_5969AE5 )
    {
      maskSprite = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
  }
  else
  {
    oneVector.fields.x = warningMessageWidth / v9;
    oneVector.fields.z = 1.0;
    oneVector.fields.y = 1.0;
  }
  if ( !v10 )
    goto LABEL_30;
LABEL_25:
  UnityEngine_Transform__set_localScale(v10, oneVector, 0);
  messageLabelList = (System_Collections_Generic_List_object__o *)this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_30;
  items = messageLabelList->fields._items;
  message = (System_String_o *)this->fields.warningMessageLabel;
  v22 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++messageLabelList->fields._version;
  if ( !items )
    goto LABEL_30;
  size = messageLabelList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      messageLabelList,
      (Il2CppObject *)message,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v24[4] = (Il2CppClass *)message;
    messageLabelList->fields._size = size + 1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)message, v14, v15, v16, v17, v18, v19);
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