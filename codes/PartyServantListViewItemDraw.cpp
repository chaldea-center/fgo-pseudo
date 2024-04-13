void __fastcall PartyServantListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  PartyServantListViewItemDraw_c *v4; // x8
  struct PartyServantListViewItemDraw_StaticFields *static_fields; // x9

  if ( (byte_42EC3C0 & 1) == 0 )
  {
    sub_B5D5C4(&PartyServantListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42EC3C0 = 1;
  }
  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_DEFAULT = 200;
  PartyServantListViewItemDraw_TypeInfo->static_fields->BUDDY_INFO_WIDTH_MAX = 94;
  v4 = PartyServantListViewItemDraw_TypeInfo;
  static_fields = PartyServantListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BUDDY_INFO_BASE_POS.fields.x = 1112014848LL;
  static_fields->BUDDY_INFO_BASE_POS.fields.z = 0.0;
  v4->static_fields->DATA_LOST_MASK_HEIGHT = 154;
}


void __fastcall PartyServantListViewItemDraw___ctor(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyServantListViewItemDraw__Awake(PartyServantListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UILabel_o *maskMessageLabel; // x0
  struct UILabel_o *warningMessageLabel; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *maskSprite; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UISprite_o *v34; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v36; // x8

  if ( (byte_42EC3B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EC3B6 = 1;
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
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchInfoList = (struct System_Collections_Generic_List_UIWidget__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.switchInfoList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  maskMessageLabel = (struct UILabel_o *)UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL);
  if ( ((unsigned __int8)maskMessageLabel & 1) != 0 )
  {
    v34 = this->fields.maskSprite;
    if ( v34 )
    {
      mAtlas = v34->fields.mAtlas;
      this->fields.maskSpriteDefaultAtlas = mAtlas;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.maskSpriteDefaultAtlas,
        (System_Int32_array **)mAtlas,
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
LABEL_14:
    sub_B5D69C(maskMessageLabel, method);
  }
}


void __fastcall PartyServantListViewItemDraw__ClearMessage(
        PartyServantListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *maskSprite; // x0

  if ( (byte_42EC3BB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EC3BB = 1;
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
    sub_B5D69C(maskSprite, method);
  }
  SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)maskSprite, 0LL);
}


void __fastcall PartyServantListViewItemDraw__SetClassCompatibilityIcon(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isClear,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *classCompatibilityIcon; // x22
  void *userServantEntity; // x0
  PartyOrganizationRootComponent_c *v21; // x1
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct System_Int32_array *WaveEnemyClassIds_k__BackingField; // x8
  ServantClassCompatibilityIconComponent_o *v24; // x20
  struct PartyOrganizationListViewItem_o *v25; // x8
  System_Int32_array *v26; // x2
  __int64 v27; // x9
  __int64 v28; // x22
  int32_t v29; // w22
  int32_t v30; // w21
  void *v31; // x21
  PartyServantListViewItemDraw_o *v32; // x0
  System_String_o *v33; // x1
  bool v34; // w2
  System_String_o *v35; // x3
  bool v36; // w4
  const MethodInfo *v37; // x5

  if ( (byte_42EC3BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)item, isClear, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&PartyOrganizationRootComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EC3BA = 1;
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
        v24 = this->fields.classCompatibilityIcon;
        userServantEntity = (void *)UserServantEntity__getSvtClassId((UserServantEntity_o *)userServantEntity, 0LL);
        v25 = item->fields.baseItem;
        if ( v25 )
        {
          if ( v24 )
          {
            v26 = v25->fields._WaveEnemyClassIds_k__BackingField;
LABEL_19:
            ServantClassCompatibilityIconComponent__SetIcon(v24, (int32_t)userServantEntity, v26, 1, 0LL);
            return;
          }
        }
      }
      goto LABEL_39;
    }
    userServantEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_39;
    userServantEntity = (void *)AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)userServantEntity, 40, 0LL);
    if ( ((unsigned __int8)userServantEntity & 1) == 0 )
      goto LABEL_35;
    userServantEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !userServantEntity )
      goto LABEL_39;
    userServantEntity = (void *)*((_QWORD *)userServantEntity + 3);
    if ( !userServantEntity )
      goto LABEL_39;
    v21 = PartyOrganizationRootComponent_TypeInfo;
    v27 = *(&PartyOrganizationRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)userServantEntity + 300LL) >= (unsigned int)v27
      && *(PartyOrganizationRootComponent_c **)(*(_QWORD *)(*(_QWORD *)userServantEntity + 200LL) + 8 * v27 - 8) == PartyOrganizationRootComponent_TypeInfo )
    {
      v28 = *((_QWORD *)userServantEntity + 58);
      if ( v28 )
      {
        userServantEntity = (void *)BattleSetupInfo__TargetQuestId(*((BattleSetupInfo_o **)userServantEntity + 58), 0LL);
        if ( (_DWORD)userServantEntity )
        {
          v29 = *(_DWORD *)(v28 + 24);
          if ( v29 )
          {
            v30 = (int)userServantEntity;
            userServantEntity = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !userServantEntity )
              goto LABEL_39;
            userServantEntity = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)userServantEntity,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
            if ( !userServantEntity )
              goto LABEL_39;
            userServantEntity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)userServantEntity, v30, v29, 0LL);
            v24 = this->fields.classCompatibilityIcon;
            if ( userServantEntity )
            {
              v31 = userServantEntity;
              userServantEntity = item->fields.userServantEntity;
              if ( userServantEntity )
              {
                userServantEntity = (void *)UserServantEntity__getSvtClassId(
                                              (UserServantEntity_o *)userServantEntity,
                                              0LL);
                if ( v24 )
                {
                  v26 = (System_Int32_array *)*((_QWORD *)v31 + 6);
                  goto LABEL_19;
                }
              }
LABEL_39:
              sub_B5D69C(userServantEntity, v21);
            }
LABEL_36:
            if ( !v24 )
              goto LABEL_39;
            userServantEntity = v24;
LABEL_38:
            ServantClassCompatibilityIconComponent__Clear(
              (ServantClassCompatibilityIconComponent_o *)userServantEntity,
              0LL);
            return;
          }
        }
      }
LABEL_35:
      v24 = this->fields.classCompatibilityIcon;
      goto LABEL_36;
    }
    sub_B5D990(userServantEntity);
    PartyServantListViewItemDraw__SetMaskMessage(v32, v33, v34, v35, v36, v37);
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
    sub_B5D69C(this, item);
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
  __int64 v3; // x3
  PartyServantListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t fatigureTime; // x21
  System_String_o *RestTime4; // x21
  const MethodInfo *v29; // x3
  UILabel_o *maskFatigureMessageLabel; // x22
  UILabel_o *maskFatigureMessageLabelTime; // x22
  System_String_o **v32; // x8
  System_String_o *v33; // x23
  System_String_o *v34; // x0
  int32_t v35; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v37; // s0
  UnityEngine_Color_o value; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_42EC3BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11765/*"SELECT_NO_SORTIE_FATIGURE"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19731/*"img_frames_mask04"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11771/*"SELECT_NO_SORTIE_TITLE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11767/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_355/*"#042484"*/, v21, v22, v23);
    this = (PartyServantListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42EC3BF = 1;
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
    PartyServantListViewItemDraw__ClearMessage(v5, (const MethodInfo *)item);
    PartyServantListViewItemDraw__SetClassCompatibilityIcon(v5, item, 0, v29);
    return;
  }
  this = (PartyServantListViewItemDraw_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19731/*"img_frames_mask04"*/, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_355/*"#042484"*/, &value, 0LL);
  value.fields.a = 0.69804;
  this = (PartyServantListViewItemDraw_o *)v5->fields.maskSprite;
  if ( !this )
    goto LABEL_39;
  v39.fields.g = value.fields.g;
  v39.fields.b = value.fields.b;
  v39.fields.r = value.fields.r;
  v39.fields.a = 0.69804;
  UIWidget__set_color((UIWidget_o *)this, v39, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.warningBase;
  if ( !this )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.warningIcon;
  if ( !this )
    goto LABEL_39;
  FlashingIconComponent__Clear((FlashingIconComponent_o *)this, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.warningMessageLabel;
  if ( !this )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.maskMessageLabel;
  if ( !this )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  maskFatigureMessageLabel = v5->fields.maskFatigureMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (PartyServantListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SELECT_NO_SORTIE_TITLE"*/, 0LL);
  if ( !maskFatigureMessageLabel )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabel, (System_String_o *)this, 0LL);
  maskFatigureMessageLabelTime = v5->fields.maskFatigureMessageLabelTime;
  if ( item->fields.isFatigureRecover )
    v32 = (System_String_o **)&StringLiteral_11767/*"SELECT_NO_SORTIE_FATIGURE_RECOVER"*/;
  else
    v32 = (System_String_o **)&StringLiteral_11765/*"SELECT_NO_SORTIE_FATIGURE"*/;
  v33 = *v32;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get(v33, 0LL);
  this = (PartyServantListViewItemDraw_o *)System_String__Format(v34, (Il2CppObject *)RestTime4, 0LL);
  if ( !maskFatigureMessageLabelTime )
    goto LABEL_39;
  UILabel__set_text(maskFatigureMessageLabelTime, (System_String_o *)this, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  v35 = item->fields.isFatigureRecover ? 0 : 11;
  UILabel__set_spacingY((UILabel_o *)this, v35, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.maskFatigureMessageLabelTime;
  if ( !this )
    goto LABEL_39;
  this = (PartyServantListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = 24.0;
  if ( !item->fields.isFatigureRecover )
    v37 = 18.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v37, 0LL);
  this = (PartyServantListViewItemDraw_o *)v5->fields.messageLabelList;
  if ( !this )
LABEL_39:
    sub_B5D69C(this, item);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5->fields.maskFatigueBase,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
}


void __fastcall PartyServantListViewItemDraw__SetInput(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  _BOOL4 isBase; // w24
  UnityEngine_Object_o *baseButton; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v18; // x2
  bool v19; // w0
  UnityEngine_Object_o *v20; // x22
  bool v21; // w21
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3

  if ( (byte_42EC3BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)item, isInput, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EC3BE = 1;
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
                                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    v19 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v18);
    v20 = (UnityEngine_Object_o *)this->fields.selectObject;
    v21 = v19;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      goto LABEL_45;
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.selectObject;
    if ( Component_WebViewObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isBase, 0LL);
LABEL_45:
      PartyServantListViewItemDraw__SetDispClassIcon(this, item, v22);
      PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v21, v23);
      return;
    }
LABEL_47:
    sub_B5D69C(Component_WebViewObject, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetItem(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  _BOOL4 isBase; // w23
  UnityEngine_Object_o *partyIcon; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *pushSprite; // x21
  const MethodInfo *v49; // x2
  bool v50; // w0
  UnityEngine_Object_o *selectObject; // x22
  bool v52; // w21
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  UIWidget_o *svtPointInfoLabel; // x21
  System_String_o *v56; // x0
  System_String_o *v57; // x21
  System_String_o *v58; // x0
  UILabel_o *v59; // x21
  Il2CppObject *v60; // x22
  System_String_o *v61; // x23
  Il2CppObject *v62; // x0
  float v63; // s1
  float v64; // s2
  float v65; // s8
  float v66; // s9
  unsigned int localPosition; // s0
  float v68; // s10
  float v69; // s0
  UIWidget_o *v70; // x21
  float v71; // s11
  float v72; // s1
  double v73; // d0
  unsigned int localScale; // s0
  float v75; // s12
  UISprite_o *svtPointIconSprite; // x21
  SwitchUIWidgetComponent_o *switchInfoComp; // x21
  UILabel_o *wavePartyLabel; // x21
  System_String_o *v79; // x22
  Il2CppObject *v80; // x23
  Il2CppObject *v81; // x0
  int32_t MaxWave_k__BackingField; // [xsp+Ch] [xbp-64h] BYREF
  int32_t SvtPoint_k__BackingField; // [xsp+18h] [xbp-58h] BYREF
  int32_t SvtPointRank_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC3B7 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Math_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&PartyServantListViewItemDraw_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_15548/*"WAVE_BATTLE_SERVANT_WAVE"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_10496/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_19167/*"func_group_icon_1028"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_10497/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v40, v41, v42);
    byte_42EC3B7 = 1;
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
            FlashingIconComponent__Set_21625204(
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
        v50 = PartyServantListViewItemDraw__SetMessageLabel(this, item, v49);
        selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
        v52 = v50;
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
        PartyServantListViewItemDraw__SetDispClassIcon(this, item, v53);
        PartyServantListViewItemDraw__SetClassCompatibilityIcon(this, item, v52, v54);
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
        if ( servantFaceIcon )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
                v56 = System_Int32__ToString((int32_t)&SvtPointRank_k__BackingField, 0LL);
                v57 = System_String__Concat_44577788((System_String_o *)StringLiteral_10497/*"PARTY_ORGANIZATION_SERVANT_POINT_RANK_"*/, v56, 0LL);
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v58 = LocalizationManager__Get(v57, 0LL);
                v59 = this->fields.svtPointInfoLabel;
                v60 = (Il2CppObject *)v58;
                v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10496/*"PARTY_ORGANIZATION_SERVANT_POINT_INFO"*/, 0LL);
                SvtPoint_k__BackingField = item->fields._SvtPoint_k__BackingField;
                v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_44573324(v61, v60, v62, 0LL);
                if ( !v59 )
                  goto LABEL_93;
                UILabel__set_text(v59, (System_String_o *)servantFaceIcon, 0LL);
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
                *(UnityEngine_Vector3_o *)(&v63 - 1) = UnityEngine_Transform__get_localPosition(
                                                         (UnityEngine_Transform_o *)servantFaceIcon,
                                                         0LL);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.svtPointInfoLabel;
                if ( !servantFaceIcon )
                  goto LABEL_93;
                v65 = v63;
                v66 = v64;
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
                v68 = *(float *)&localPosition;
                LODWORD(v69) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)servantFaceIcon, 0LL);
                v70 = (UIWidget_o *)this->fields.svtPointInfoLabel;
                v71 = v69;
                servantFaceIcon = (ServantFaceIconComponent_o *)System_Math_TypeInfo;
                if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !System_Math_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                }
                if ( !v70 )
                  goto LABEL_93;
                v72 = ceilf(v71);
                v73 = v72 == INFINITY ? -v72 : v72;
                UIWidget__set_width(v70, (int)v73, 0LL);
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
                v75 = *(float *)&localScale;
                servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)servantFaceIcon,
                                                                  0LL);
                if ( !servantFaceIcon )
                  goto LABEL_93;
                v85.fields.x = -(float)(v68 + (float)(v71 * v75));
                v85.fields.y = v65;
                v85.fields.z = v66;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)servantFaceIcon, v85, 0LL);
                svtPointIconSprite = this->fields.svtPointIconSprite;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI(svtPointIconSprite, (System_String_o *)StringLiteral_19167/*"func_group_icon_1028"*/, 0LL);
              }
              servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
              if ( servantFaceIcon )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.costComp,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
                servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.switchInfoList;
                if ( servantFaceIcon )
                {
                  switchInfoComp = this->fields.switchInfoComp;
                  servantFaceIcon = (ServantFaceIconComponent_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
                      v79 = LocalizationManager__Get((System_String_o *)StringLiteral_15548/*"WAVE_BATTLE_SERVANT_WAVE"*/, 0LL);
                      SvtPoint_k__BackingField = item->fields._OrganizedWave_k__BackingField;
                      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtPoint_k__BackingField);
                      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
                      v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
                      servantFaceIcon = (ServantFaceIconComponent_o *)System_String__Format_44573324(v79, v80, v81, 0LL);
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
    sub_B5D69C(servantFaceIcon, item);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  UnityEngine_Component_o *maskSprite; // x0
  UISprite_o *v24; // x24
  UIWidget_o *v25; // x22
  int v26; // s0
  struct UISprite_o *v30; // x22
  int32_t maskSpriteDefaultHeight; // w1
  System_String_o *v32; // x1
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  UIWidget_o *v37; // x23
  float v38; // s0
  float v39; // s1
  float v40; // s2
  int v41; // s3
  float v42; // s0
  float v43; // s8
  UnityEngine_Transform_o *transform; // x20
  float maskMessageWidth; // s0
  float v46; // s1
  float v47; // s0
  float v48; // s2
  MethodInfo v49; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v50; // 0:kr00_4.4,4:kr04_4.4,8:kr08_4.4,12:kr0C_4.4

  if ( (byte_42EC3BC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)message, isScale, maskName);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v11, v12, v13);
    sub_B5D5C4(&PartyServantListViewItemDraw_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19728/*"img_frames_mask01"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EC3BC = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_42;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
  v24 = this->fields.maskSprite;
  if ( !isDataLost )
  {
    if ( v24 )
    {
      UISprite__set_atlas(this->fields.maskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( maskSprite )
      {
        v32 = maskName ? maskName : (System_String_o *)StringLiteral_19728/*"img_frames_mask01"*/;
        UISprite__set_spriteName((UISprite_o *)maskSprite, v32, 0LL);
        v37 = (UIWidget_o *)this->fields.maskSprite;
        if ( maskName )
        {
          v38 = 1.0;
          v39 = 1.0;
          v40 = 1.0;
          v41 = 1.0;
          v49.methodPointer = 0LL;
          v49.invoker_method = 0LL;
        }
        else
        {
          v41 = 1059028206;
          v49.methodPointer = 0LL;
          v49.invoker_method = 0LL;
          v38 = 0.0;
          v39 = 0.0;
          v40 = 0.0;
        }
        UnityEngine_Color___ctor(*(UnityEngine_Color_o *)&v38, v33, v34, v35, v36, &v49);
        *(_QWORD *)&v50.fields.r = v49.methodPointer;
        *(_QWORD *)&v50.fields.b = v49.invoker_method;
        if ( v37 )
        {
          UIWidget__set_color(v37, v50, 0LL);
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
    sub_B5D69C(maskSprite, message);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(v24, maskName, 0LL);
  v25 = (UIWidget_o *)this->fields.maskSprite;
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
  if ( !v25 )
    goto LABEL_42;
  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
  v30 = this->fields.maskSprite;
  maskSprite = (UnityEngine_Component_o *)PartyServantListViewItemDraw_TypeInfo;
  if ( (BYTE3(PartyServantListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItemDraw_TypeInfo);
  }
  if ( !v30 )
    goto LABEL_42;
  maskSprite = (UnityEngine_Component_o *)v30;
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
  LODWORD(v42) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskMessageLabel;
  if ( !maskSprite )
    goto LABEL_42;
  v43 = v42;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  transform = (UnityEngine_Transform_o *)maskSprite;
  maskMessageWidth = (float)this->fields.maskMessageWidth;
  if ( v43 <= maskMessageWidth )
  {
LABEL_39:
    *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_42;
    goto LABEL_40;
  }
  v46 = 1.0;
  v47 = maskMessageWidth / v43;
  v48 = 1.0;
  if ( !maskSprite )
    goto LABEL_42;
LABEL_40:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v47, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_42;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.maskMessageLabel,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
}


bool __fastcall PartyServantListViewItemDraw__SetMessageLabel(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *messageLabelList; // x0
  UILabel_o *skillInvalidLabel; // x21
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  __int64 *v34; // x8
  bool v35; // w21
  System_String_o *v36; // x0
  const MethodInfo *v37; // x5
  int size; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x19

  if ( (byte_42EC3B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11752/*"SELECT_BONUS_SKILL_INVALID"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1/*""*/, v27, v28, v29);
    byte_42EC3B8 = 1;
  }
  messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_43;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    messageLabelList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
                                                                                    (System_String_o *)StringLiteral_11752/*"SELECT_BONUS_SKILL_INVALID"*/,
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
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
      v35 = PartyServantListViewItemDraw__SetRestrictionMask(this, item, v33);
      goto LABEL_35;
    }
    if ( (item->fields.fatigureTime & 0x8000000000000000LL) != 0 )
    {
      PartyServantListViewItemDraw__ClearMessage(this, v32);
      v35 = 0;
      goto LABEL_35;
    }
    PartyServantListViewItemDraw__SetFatigueMask(this, item, v33);
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
      v34 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v34 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    }
    v36 = LocalizationManager__Get((System_String_o *)*v34, 0LL);
    PartyServantListViewItemDraw__SetMaskMessage(this, v36, 0, 0LL, 0, v37);
  }
  v35 = 1;
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__),
          (messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.messageLabelList) != 0LL) )
    {
      messageLabel = this->fields.messageLabel;
      messageLabelList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)messageLabelList,
                                                                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)messageLabelList, 0LL);
        return v35;
      }
    }
LABEL_43:
    sub_B5D69C(messageLabelList, item);
  }
  return v35;
}


bool __fastcall PartyServantListViewItemDraw__SetRestrictionMask(
        PartyServantListViewItemDraw_o *this,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  PartyServantListViewItemDraw_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  __int64 *v40; // x8
  System_String_o *RestrictionMessage; // x0
  const MethodInfo *v42; // x5
  bool v43; // w20
  System_String_o *v44; // x1
  bool v45; // w2
  PartyServantListViewItemDraw_o *v46; // x0
  System_String_o *v47; // x3
  bool v48; // w4
  __int64 *v49; // x8
  System_String_o *v50; // x0
  const MethodInfo *v51; // x3
  System_String_o *v53; // x21
  int32_t *v54; // x1
  Il2CppObject *v55; // x0
  int32_t v56; // [xsp+8h] [xbp-18h] BYREF
  int32_t TimesToRestart_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v6 = this;
  if ( (byte_42EC3B9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_15500/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_10470/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11764/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_6472/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11763/*"SELECT_NO_SORTIE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_18102/*"datalost_svt_select"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1/*""*/, v34, v35, v36);
    this = (PartyServantListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_10517/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/, v37, v38, v39);
    byte_42EC3B9 = 1;
  }
  if ( !item )
    sub_B5D69C(this, item);
  if ( !item->fields.isLeave )
  {
    if ( item->fields.isQuestRestriction )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      v45 = 1;
      v46 = v6;
      v47 = 0LL;
      v48 = 0;
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
        v49 = &StringLiteral_10470/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING2"*/;
LABEL_25:
        v50 = LocalizationManager__Get((System_String_o *)*v49, 0LL);
        v43 = 1;
        PartyServantListViewItemDraw__SetWarningMessage(v6, v50, 1, v51);
        return v43;
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
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
          v54 = &TimesToRestart_k__BackingField;
          TimesToRestart_k__BackingField = item->fields._TimesToRestart_k__BackingField;
LABEL_72:
          v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v54);
          RestrictionMessage = System_String__Format(v53, v55, 0LL);
          goto LABEL_10;
        }
        goto LABEL_80;
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
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        v54 = &v56;
        v56 = item->fields._TimesToRestart_k__BackingField;
        goto LABEL_72;
      }
      if ( item->fields.isSame )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_10517/*"PARTY_ORGANIZATION_SERVANT_SAME_SERVANT"*/;
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
        v49 = &StringLiteral_6472/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/;
        goto LABEL_25;
      }
      if ( (item->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      {
LABEL_43:
        PartyServantListViewItemDraw__SetFatigueMask(v6, item, method);
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
        v40 = &StringLiteral_11764/*"SELECT_NO_SORTIE_ALLOUT_BATTLE"*/;
        goto LABEL_9;
      }
      if ( item->fields._IsClearedWave_k__BackingField )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = &StringLiteral_15500/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
        goto LABEL_9;
      }
LABEL_80:
      PartyServantListViewItemDraw__ClearMessage(v6, (const MethodInfo *)item);
      return 0;
    }
    v48 = 1;
    v46 = v6;
    v44 = (System_String_o *)StringLiteral_1/*""*/;
    v47 = (System_String_o *)StringLiteral_18102/*"datalost_svt_select"*/;
    v45 = 0;
LABEL_17:
    v43 = 1;
    PartyServantListViewItemDraw__SetMaskMessage(v46, v44, v45, v47, v48, v4);
    return v43;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = &StringLiteral_11763/*"SELECT_NO_SORTIE"*/;
LABEL_9:
  RestrictionMessage = LocalizationManager__Get((System_String_o *)*v40, 0LL);
LABEL_10:
  PartyServantListViewItemDraw__SetMaskMessage(v6, RestrictionMessage, 0, 0LL, 0, v42);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItemDraw__SetWarningMessage(
        PartyServantListViewItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Component_o *maskSprite; // x0
  float v11; // s0
  float v12; // s8
  UnityEngine_Transform_o *transform; // x20
  float warningMessageWidth; // s0
  float v15; // s1
  float v16; // s0
  float v17; // s2

  if ( (byte_42EC3BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, (_DWORD)message, isScale, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42EC3BD = 1;
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
    sub_B5D69C(maskSprite, message);
  }
  if ( !isScale )
  {
    transform = UnityEngine_Component__get_transform(maskSprite, 0LL);
    goto LABEL_18;
  }
  LODWORD(v11) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)maskSprite, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.warningMessageLabel;
  if ( !maskSprite )
    goto LABEL_21;
  v12 = v11;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  transform = (UnityEngine_Transform_o *)maskSprite;
  warningMessageWidth = (float)this->fields.warningMessageWidth;
  if ( v12 <= warningMessageWidth )
  {
LABEL_18:
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
    if ( !transform )
      goto LABEL_21;
    goto LABEL_19;
  }
  v15 = 1.0;
  v16 = warningMessageWidth / v12;
  v17 = 1.0;
  if ( !maskSprite )
    goto LABEL_21;
LABEL_19:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v16, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.messageLabelList;
  if ( !maskSprite )
    goto LABEL_21;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)maskSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningMessageLabel,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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