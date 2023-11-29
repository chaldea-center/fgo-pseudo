void __fastcall ItemIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  ItemIconComponent_c *v9; // x8
  struct ItemIconComponent_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1

  if ( (byte_40FC1E9 & 1) == 0 )
  {
    sub_B16FFC(&ItemIconComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18515, v8);
    byte_40FC1E9 = 1;
  }
  ItemIconComponent_TypeInfo->static_fields->CHANGE_FONT_COUNT = 4;
  ItemIconComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 20;
  v9 = ItemIconComponent_TypeInfo;
  ItemIconComponent_TypeInfo->static_fields->OVER_FIVE_LENGTH = 16;
  v9->static_fields->EQUIP_ITEM_RARITY = 3;
  static_fields = v9->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18515;
  static_fields->ASSIST_SPRITE_NAME = (struct System_String_o *)StringLiteral_18515;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->ASSIST_SPRITE_NAME, v11, v2, v3, v4, v5, v6, v7);
}


void __fastcall ItemIconComponent___ctor(ItemIconComponent_o *this, const MethodInfo *method)
{
  this->fields.PossessionLabelWidth = 84.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemIconComponent__Awake(ItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UnityEngine_Component_o *v9; // x0
  float v10; // s8
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Object_o *possessionTitleLabel; // x20
  UILabel_o *v13; // x19
  System_String_o *v14; // x0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC1C4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_7425, v4);
    byte_40FC1C4 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !v6 )
      goto LABEL_22;
    transform = UnityEngine_Component__get_transform(v6, 0LL);
    if ( !transform )
      goto LABEL_22;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    v9 = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !v9 )
      goto LABEL_22;
    v10 = *(float *)&localPosition;
    v11 = UnityEngine_Component__get_transform(v9, 0LL);
    if ( !v11 )
      goto LABEL_22;
    v15.fields.y = -64.0;
    v15.fields.z = 0.0;
    v15.fields.x = v10;
    UnityEngine_Transform__set_localPosition(v11, v15, 0LL);
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    v13 = this->fields.possessionTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_7425, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, v14, 0LL);
      return;
    }
LABEL_22:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ItemIconComponent__CalcPossessionNum(
        ItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int64_t userId; // x21
  UserGameEntity_o *v8; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v12; // x3
  int32_t bannerId; // w8

  if ( (byte_40FC1DF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&objectId);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC1DF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (userId = SelfUserGame->fields.userId,
        v8 = SelfUserGame,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   objectId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  bannerId = Entity->fields.bannerId;
  if ( bannerId == 22 )
    return v8->fields.rarePri;
  if ( bannerId == 5 )
    return v8->fields.mana;
  return ItemIconComponent__getUserItemNum((ItemIconComponent_o *)Entity, userId, objectId, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__CalcSetPossession(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        const MethodInfo *method)
{
  int32_t v5; // w1
  const MethodInfo *v6; // x2

  if ( giftType == 2 )
  {
    v5 = ItemIconComponent__CalcPossessionNum(this, objectId, *(const MethodInfo **)&objectId);
    ItemIconComponent__SetPossession(this, v5, v6);
  }
}


void __fastcall ItemIconComponent__Clear(ItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *typeSprite; // x20
  bool v7; // w0
  UISprite_o *backSprite; // x20
  UISprite_o *iconSprite; // x0
  UISprite_o *frameSprite; // x0
  UISprite_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *classSprite; // x20
  UISprite_o *v15; // x0
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v17; // x0
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v19; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  ShiningIconComponent_o *v21; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v23; // x0

  if ( (byte_40FC1C5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    sub_B16FFC(&StringLiteral_20173, v5);
    byte_40FC1C5 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v7 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceBaseIcon(backSprite, 0, 0, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite
      || (UISprite__set_spriteName(iconSprite, 0LL, 0LL), (frameSprite = this->fields.frameSprite) == 0LL)
      || (UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20173, 0LL),
          (v11 = this->fields.typeSprite) == 0LL) )
    {
LABEL_53:
      sub_B170D4();
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Component_o *)this->fields.backSprite;
      if ( !v12 )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !gameObject )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v11 = this->fields.iconSprite;
    if ( !v11 )
      goto LABEL_53;
  }
  UISprite__set_spriteName(v11, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v15 = this->fields.classSprite;
    if ( !v15 )
      goto LABEL_53;
    UISprite__set_spriteName(v15, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v17 = this->fields.raritySprite;
    if ( !v17 )
      goto LABEL_53;
    UISprite__set_spriteName(v17, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v19 = this->fields.counterLabel;
    if ( !v19 )
      goto LABEL_53;
    UILabel__set_text(v19, (System_String_o *)StringLiteral_1, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    v21 = this->fields.svtJoinIcon;
    if ( !v21 )
      goto LABEL_53;
    ShiningIconComponent__Clear(v21, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v23 = this->fields.materialTdSprite;
    if ( !v23 )
      goto LABEL_53;
    UISprite__set_spriteName(v23, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__CloseCommandCodeDetail(
        ItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FC1E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FC1E4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, this->fields.detailCloseCallBack, 0LL);
}


void __fastcall ItemIconComponent__OnClickItem(
        ItemIconComponent_o *this,
        UIScrollBar_o *bar,
        System_Action_o *closeCallBack,
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x21
  CommonUI_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v30; // x23
  float value; // s0
  float v32; // s0
  WebViewManager_o *v33; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v35; // x0
  CommandCodeEntity_o *v36; // x21
  CommonUI_o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  ServantStatusDialog_EndDelegate_o *v42; // x23
  WebViewManager_o *v43; // x0
  int32_t svtId; // w21
  CommonUI_o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  ServantStatusDialog_EndDelegate_o *v50; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC1E1 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, bar);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_ItemIconComponent_CloseCommandCodeDetail__, v10);
    sub_B16FFC(&Method_ItemIconComponent_closeItemDetail__, v11);
    sub_B16FFC(&Method_ItemIconComponent_closeSvtDetail__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&SoundManager_TypeInfo, v16);
    byte_40FC1E1 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.detailCloseCallBack = closeCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.detailCloseCallBack,
    (System_Int32_array **)closeCallBack,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( this->fields.itemEnt )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v25 = (CommonUI_o *)Instance;
    v30 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v26,
                                                      v27,
                                                      v28,
                                                      v29);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      Method_ItemIconComponent_closeItemDetail__,
      0LL);
    if ( !v25 )
      goto LABEL_26;
    CommonUI__OpenItemDetailDialog(v25, itemEnt, v30, 50, 0LL);
  }
  else if ( this->fields.commandCodeId )
  {
    v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v33 )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)v33,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           this->fields.commandCodeId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
    {
      v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = (CommandCodeEntity_o *)entity;
      v37 = (CommonUI_o *)v35;
      v42 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v38,
                                                   v39,
                                                   v40,
                                                   v41);
      ServantStatusDialog_EndDelegate___ctor(
        v42,
        (Il2CppObject *)this,
        Method_ItemIconComponent_CloseCommandCodeDetail__,
        0LL);
      if ( !v37 )
        goto LABEL_26;
      CommonUI__OpenServantEquipStatusDialog_18253740(v37, 25, v36, 0, v42, 0LL, 0LL);
    }
  }
  else if ( this->fields.svtId )
  {
    v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    svtId = this->fields.svtId;
    v45 = (CommonUI_o *)v43;
    v50 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v46, v47, v48, v49);
    ServantStatusDialog_EndDelegate___ctor(v50, (Il2CppObject *)this, Method_ItemIconComponent_closeSvtDetail__, 0LL);
    if ( !v45 )
      goto LABEL_26;
    CommonUI__OpenServantStatusDialog_18251308(v45, 7, svtId, v50, 0LL);
  }
  else
  {
    ActionExtensions__Call(closeCallBack, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bar, 0LL, 0LL) )
  {
    if ( bar )
    {
      value = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, value + 0.00001, 0LL);
      v32 = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, v32 + -0.00001, 0LL);
      return;
    }
LABEL_26:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetAlpha(ItemIconComponent_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *backSprite; // x20
  struct UISprite_o *v6; // x0
  UnityEngine_Object_o *iconSprite; // x20
  struct UISprite_o *v8; // x0
  UnityEngine_Object_o *frameSprite; // x20
  struct UISprite_o *v10; // x0
  UnityEngine_Object_o *typeSprite; // x20
  struct UISprite_o *v12; // x0
  UnityEngine_Object_o *classSprite; // x20
  struct UISprite_o *v14; // x0
  UnityEngine_Object_o *raritySprite; // x20
  struct UISprite_o *v16; // x0
  UnityEngine_Object_o *counterLabel; // x20
  struct UILabel_o *v18; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_40FC1D9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC1D9 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v6 = this->fields.backSprite;
    if ( !v6 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v8 = this->fields.iconSprite;
    if ( !v8 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v8->klass->vtable._8_set_alpha.method)(
      v8,
      v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v10 = this->fields.frameSprite;
    if ( !v10 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v10->klass->vtable._8_set_alpha.method)(
      v10,
      v10->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v12 = this->fields.typeSprite;
    if ( !v12 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v12->klass->vtable._8_set_alpha.method)(
      v12,
      v12->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v14 = this->fields.classSprite;
    if ( !v14 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v14->klass->vtable._8_set_alpha.method)(
      v14,
      v14->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v16 = this->fields.raritySprite;
    if ( !v16 )
      goto LABEL_46;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v16->klass->vtable._8_set_alpha.method)(
      v16,
      v16->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v18 = this->fields.counterLabel;
    if ( v18 )
    {
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, long double))v18->klass->vtable._8_set_alpha.method)(
        v18,
        v18->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        v3);
      return;
    }
LABEL_46:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetCoinImage(
        ItemIconComponent_o *this,
        int32_t coinImageId,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *typeSprite; // x24
  bool v20; // w0
  UISprite_o *backSprite; // x24
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UISprite_o *iconSprite; // x24
  UISprite_o *frameSprite; // x0
  struct UISprite_o *v26; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x1
  UISprite_o *v30; // x0
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v33; // x23
  UISprite_o *v34; // x23
  UnityEngine_Object_o *v35; // x22
  UnityEngine_Object_o *classSprite; // x22
  UISprite_o *v37; // x0
  UnityEngine_Object_o *raritySprite; // x22
  UISprite_o *v39; // x0
  UnityEngine_Object_o *counterLabel; // x22
  _BOOL8 v41; // x0
  System_String_o *PlusOperatorString; // x0
  UILabel_o *v43; // x21
  Il2CppObject *v44; // x22
  Il2CppObject *v45; // x0
  System_String_o *v46; // x1
  UnityEngine_Object_o *svtJoinIcon; // x20
  ShiningIconComponent_o *v48; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v50; // x0
  int32_t v51; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FC1D2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&coinImageId);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_19395, v13);
    sub_B16FFC(&StringLiteral_20175, v14);
    sub_B16FFC(&StringLiteral_23555, v15);
    sub_B16FFC(&StringLiteral_20178, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    sub_B16FFC(&StringLiteral_20173, v18);
    byte_40FC1D2 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v20 )
  {
    v53 = bgImageId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    v23 = System_String__Format((System_String_o *)StringLiteral_20175, v22, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, v23, 0LL);
      iconSprite = this->fields.iconSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin(iconSprite, coinImageId, 0LL);
      frameSprite = this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20173, 0LL);
        v26 = this->fields.typeSprite;
        v52 = bgImageId;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
        v28 = System_String__Format((System_String_o *)StringLiteral_20178, v27, 0LL);
        if ( v26 )
        {
          v29 = v28;
          v30 = v26;
LABEL_35:
          UISprite__set_spriteName(v30, v29, 0LL);
          goto LABEL_36;
        }
      }
    }
LABEL_74:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    v31 = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !v31 )
      goto LABEL_74;
    gameObject = UnityEngine_Component__get_gameObject(v31, 0LL);
    if ( !gameObject )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  v33 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
  {
    v34 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCoin(v34, coinImageId, 0LL);
  }
  v35 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    v30 = this->fields.frameSprite;
    if ( !v30 )
      goto LABEL_74;
    v29 = (System_String_o *)StringLiteral_19395;
    goto LABEL_35;
  }
LABEL_36:
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v37 = this->fields.classSprite;
    if ( !v37 )
      goto LABEL_74;
    UISprite__set_spriteName(v37, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v39 = this->fields.raritySprite;
    if ( !v39 )
      goto LABEL_74;
    UISprite__set_spriteName(v39, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v41 = UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( v41 )
  {
    if ( (unsigned int)type <= 0x10 && ((1 << type) & 0x16002) != 0 )
      PlusOperatorString = ItemType__get_PlusOperatorString((const MethodInfo *)v41);
    else
      PlusOperatorString = ItemType__get_CrossOperatorString((const MethodInfo *)v41);
    v43 = this->fields.counterLabel;
    v44 = (Il2CppObject *)PlusOperatorString;
    if ( (count & 0x80000000) != 0 )
    {
      v46 = (System_String_o *)StringLiteral_1;
      if ( !v43 )
        goto LABEL_74;
    }
    else
    {
      v51 = count;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
      v46 = System_String__Format_43739268((System_String_o *)StringLiteral_23555, v44, v45, 0LL);
      if ( !v43 )
        goto LABEL_74;
    }
    UILabel__set_text(v43, v46, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    v48 = this->fields.svtJoinIcon;
    if ( !v48 )
      goto LABEL_74;
    ShiningIconComponent__Clear(v48, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v50 = this->fields.materialTdSprite;
    if ( !v50 )
      goto LABEL_74;
    UISprite__set_spriteName(v50, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetColor(
        ItemIconComponent_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *backSprite; // x20
  UIWidget_o *v9; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UIWidget_o *v11; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UIWidget_o *v13; // x0
  UnityEngine_Object_o *typeSprite; // x20
  UIWidget_o *v15; // x0
  UnityEngine_Object_o *classSprite; // x20
  UIWidget_o *v17; // x0
  UnityEngine_Object_o *raritySprite; // x20
  UIWidget_o *v19; // x0
  UnityEngine_Object_o *counterLabel; // x20
  UIWidget_o *v21; // x0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_40FC1D8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC1D8 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.backSprite;
    if ( !v9 )
      goto LABEL_46;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v9, v22, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v11 )
      goto LABEL_46;
    v23.fields.r = r;
    v23.fields.g = g;
    v23.fields.b = b;
    v23.fields.a = a;
    UIWidget__set_color(v11, v23, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v13 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v13 )
      goto LABEL_46;
    v24.fields.r = r;
    v24.fields.g = g;
    v24.fields.b = b;
    v24.fields.a = a;
    UIWidget__set_color(v13, v24, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.typeSprite;
    if ( !v15 )
      goto LABEL_46;
    v25.fields.r = r;
    v25.fields.g = g;
    v25.fields.b = b;
    v25.fields.a = a;
    UIWidget__set_color(v15, v25, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v17 = (UIWidget_o *)this->fields.classSprite;
    if ( !v17 )
      goto LABEL_46;
    v26.fields.r = r;
    v26.fields.g = g;
    v26.fields.b = b;
    v26.fields.a = a;
    UIWidget__set_color(v17, v26, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v19 = (UIWidget_o *)this->fields.raritySprite;
    if ( !v19 )
      goto LABEL_46;
    v27.fields.r = r;
    v27.fields.g = g;
    v27.fields.b = b;
    v27.fields.a = a;
    UIWidget__set_color(v19, v27, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v21 = (UIWidget_o *)this->fields.counterLabel;
    if ( v21 )
    {
      v28.fields.b = b;
      v28.fields.a = a;
      v28.fields.r = r;
      v28.fields.g = g;
      UIWidget__set_color(v21, v28, 0LL);
      return;
    }
LABEL_46:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetCombineItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  ItemEntity_o *Entity; // x0
  const MethodInfo *v11; // x1
  ItemEntity_o *v12; // x21
  bool v13; // w22
  int32_t ImageId; // w0
  const MethodInfo *v15; // x5

  if ( (byte_40FC1C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_40FC1C7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   itemId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  v12 = Entity;
  v13 = Entity->fields.type == 29;
  ImageId = ItemEntity__GetImageId(Entity, v11);
  ItemIconComponent__SetCombineItemImage(this, ImageId, v12->fields.bgImageId, count, v13, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetCombineItemImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t count,
        bool isCoin,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *backSprite; // x23
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v19; // x23
  UnityEngine_Object_o *frameSprite; // x21
  UISprite_o *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Object_o *typeSprite; // x21
  UISprite_o *v25; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  UnityEngine_Object_o *classSprite; // x20
  UISprite_o *v29; // x0
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v31; // x0
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v33; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x1
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v37; // x0
  int32_t v38; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v39; // [xsp+8h] [xbp-38h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-34h] BYREF

  v40 = count;
  if ( (byte_40FC1D3 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_20175, v12);
    sub_B16FFC(&StringLiteral_20178, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_40FC1D3 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !v16 )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v19 = this->fields.iconSprite;
    if ( isCoin )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin(v19, imageId, 0LL);
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v19, imageId, 0LL);
    }
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v21 = this->fields.frameSprite;
    v39 = bgImageId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v23 = System_String__Format((System_String_o *)StringLiteral_20175, v22, 0LL);
    if ( !v21 )
      goto LABEL_66;
    UISprite__set_spriteName(v21, v23, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v25 = this->fields.typeSprite;
    v38 = bgImageId;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v27 = System_String__Format((System_String_o *)StringLiteral_20178, v26, 0LL);
    if ( !v25 )
      goto LABEL_66;
    UISprite__set_spriteName(v25, v27, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v29 = this->fields.classSprite;
    if ( !v29 )
      goto LABEL_66;
    UISprite__set_spriteName(v29, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v31 = this->fields.raritySprite;
    if ( !v31 )
      goto LABEL_66;
    UISprite__set_spriteName(v31, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v33 = this->fields.counterLabel;
    if ( (v40 & 0x80000000) != 0 )
    {
      v35 = (System_String_o *)StringLiteral_1;
      if ( !v33 )
        goto LABEL_66;
    }
    else
    {
      v34 = System_Int32__ToString((int32_t)&v40, 0LL);
      if ( v34 )
        v35 = v34;
      else
        v35 = (System_String_o *)StringLiteral_1;
      if ( !v33 )
LABEL_66:
        sub_B170D4();
    }
    UILabel__set_text(v33, v35, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v37 = this->fields.materialTdSprite;
    if ( !v37 )
      goto LABEL_66;
    UISprite__set_spriteName(v37, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetCommandCodeImage(
        ItemIconComponent_o *this,
        int32_t commandCodeId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t flag; // w21
  UnityEngine_Object_o *typeSprite; // x23
  bool v18; // w0
  UISprite_o *backSprite; // x23
  UISprite_o *frameSprite; // x0
  UISprite_o *v21; // x0
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v25; // x23
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *classSprite; // x22
  UISprite_o *v28; // x0
  UnityEngine_Object_o *raritySprite; // x22
  UISprite_o *v30; // x22
  System_String_o *Icon; // x0
  struct UISprite_o *v32; // x0
  UnityEngine_Object_o *counterLabel; // x21
  _BOOL8 v34; // x0
  UILabel_o *v35; // x21
  System_String_o *CrossOperatorString; // x20
  System_String_o *v37; // x0
  System_String_o *v38; // x1
  UnityEngine_Object_o *svtJoinIcon; // x20
  ShiningIconComponent_o *v40; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v42; // x0
  int32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  v43 = count;
  if ( (byte_40FC1D6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Rarity_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FC1D6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   commandCodeId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_75:
    sub_B170D4();
  }
  flag = Entity->fields.flag;
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v18 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeBaseIcon(backSprite, flag, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.iconSprite, commandCodeId, 0LL);
    frameSprite = this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_75;
    UISprite__set_spriteName(frameSprite, 0LL, 0LL);
    v21 = this->fields.typeSprite;
    if ( !v21 )
      goto LABEL_75;
    goto LABEL_36;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !v22 )
      goto LABEL_75;
    gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !gameObject )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v25 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeImage(v25, commandCodeId, 0LL);
  }
  v26 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    v21 = this->fields.frameSprite;
    if ( !v21 )
      goto LABEL_75;
LABEL_36:
    UISprite__set_spriteName(v21, 0LL, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v28 = this->fields.classSprite;
    if ( !v28 )
      goto LABEL_75;
    UISprite__set_spriteName(v28, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v30 = this->fields.raritySprite;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon = Rarity__getIcon(flag, 0LL);
    if ( !v30 )
      goto LABEL_75;
    UISprite__set_spriteName(v30, Icon, 0LL);
    v32 = this->fields.raritySprite;
    if ( !v32 )
      goto LABEL_75;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v32->klass->vtable._33_MakePixelPerfect.method)(
      v32,
      v32->klass->vtable._34_get_minWidth.methodPtr);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v34 = UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( v34 )
  {
    v35 = this->fields.counterLabel;
    if ( count <= 1 )
    {
      v38 = (System_String_o *)StringLiteral_1;
      if ( !v35 )
        goto LABEL_75;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString((const MethodInfo *)v34);
      v37 = System_Int32__ToString((int32_t)&v43, 0LL);
      v38 = System_String__Concat_43743732(CrossOperatorString, v37, 0LL);
      if ( !v35 )
        goto LABEL_75;
    }
    UILabel__set_text(v35, v38, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    v40 = this->fields.svtJoinIcon;
    if ( !v40 )
      goto LABEL_75;
    ShiningIconComponent__Clear(v40, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v42 = this->fields.materialTdSprite;
    if ( !v42 )
      goto LABEL_75;
    UISprite__set_spriteName(v42, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetCondensedScale(
        ItemIconComponent_o *this,
        int32_t maxWidth,
        const MethodInfo *method)
{
  UILabel_o *counterLabel; // x0

  counterLabel = this->fields.counterLabel;
  if ( !counterLabel )
    sub_B170D4();
  UILabel__SetCondensedScale(counterLabel, maxWidth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetCountLabelActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *counterLabel; // x21
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC1E5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isActive);
    byte_40FC1E5 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetDepth(ItemIconComponent_o *this, int32_t depth, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x21
  bool v6; // w0
  UnityEngine_Object_o *backSprite; // x21
  UIWidget_o *iconSprite; // x0
  UIWidget_o *frameSprite; // x0
  int32_t v10; // w21
  UnityEngine_Object_o *classSprite; // x22
  UIWidget_o *v12; // x0
  UnityEngine_Object_o *raritySprite; // x22
  UIWidget_o *v14; // x0
  UIWidget_o *v15; // x0
  UIWidget_o *v16; // x0
  UnityEngine_Object_o *v17; // x21
  UIWidget_o *v18; // x0
  UnityEngine_Object_o *v19; // x21
  UIWidget_o *v20; // x0
  UnityEngine_Object_o *v21; // x22
  UIWidget_o *v22; // x0
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *counterLabel; // x21
  UIWidget_o *v25; // x0

  if ( (byte_40FC1D7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_40FC1D7 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( v6 )
  {
    if ( !backSprite )
      goto LABEL_61;
    UIWidget__set_depth((UIWidget_o *)this->fields.backSprite, depth, 0LL);
    iconSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 1, 0LL);
    frameSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_61;
    v10 = depth + 3;
    UIWidget__set_depth(frameSprite, depth + 2, 0LL);
    classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
    {
      v12 = (UIWidget_o *)this->fields.classSprite;
      if ( !v12 )
        goto LABEL_61;
      UIWidget__set_depth(v12, v10, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      v14 = (UIWidget_o *)this->fields.raritySprite;
      if ( !v14 )
        goto LABEL_61;
      UIWidget__set_depth(v14, v10, 0LL);
    }
    v15 = (UIWidget_o *)this->fields.typeSprite;
    if ( !v15 )
LABEL_61:
      sub_B170D4();
    goto LABEL_53;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.backSprite;
    if ( !v16 )
      goto LABEL_61;
    UIWidget__set_depth(v16, depth, 0LL);
  }
  v17 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
  {
    v18 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v18 )
      goto LABEL_61;
    UIWidget__set_depth(v18, depth + 1, 0LL);
  }
  v19 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    v20 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v20 )
      goto LABEL_61;
    UIWidget__set_depth(v20, depth + 2, 0LL);
  }
  v21 = (UnityEngine_Object_o *)this->fields.classSprite;
  v10 = depth + 3;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    v22 = (UIWidget_o *)this->fields.classSprite;
    if ( !v22 )
      goto LABEL_61;
    UIWidget__set_depth(v22, v10, 0LL);
  }
  v23 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    v15 = (UIWidget_o *)this->fields.raritySprite;
    if ( !v15 )
      goto LABEL_61;
LABEL_53:
    UIWidget__set_depth(v15, v10, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v25 = (UIWidget_o *)this->fields.counterLabel;
    if ( !v25 )
      goto LABEL_61;
    UIWidget__set_depth(v25, depth + 4, 0LL);
  }
}


// attributes: thunk
void __fastcall ItemIconComponent__SetEquipItem(
        ItemIconComponent_o *this,
        int32_t equipItemId,
        const MethodInfo *method)
{
  ItemIconComponent__SetEquipItemImage(this, equipItemId, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetEquipItemImage(
        ItemIconComponent_o *this,
        int32_t equipImageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *backSprite; // x21
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v14; // x21
  ItemIconComponent_c *v15; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Object_o *frameSprite; // x21
  UISprite_o *v19; // x0
  UnityEngine_Object_o *iconSprite; // x21
  UISprite_o *v21; // x21
  UnityEngine_Object_o *typeSprite; // x20
  UISprite_o *v23; // x20
  ItemIconComponent_c *v24; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_Object_o *classSprite; // x20
  UISprite_o *v28; // x0
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v30; // x0
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v32; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  ShiningIconComponent_o *v34; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v36; // x0
  int32_t v37; // [xsp+8h] [xbp-28h] BYREF
  int32_t EQUIP_ITEM_RARITY; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC1D4 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&equipImageId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&ItemIconComponent_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_20179, v8);
    sub_B16FFC(&StringLiteral_20175, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FC1D4 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !v12 )
      goto LABEL_68;
    gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !gameObject )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v14 = this->fields.backSprite;
    v15 = ItemIconComponent_TypeInfo;
    if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v15 = ItemIconComponent_TypeInfo;
    }
    EQUIP_ITEM_RARITY = v15->static_fields->EQUIP_ITEM_RARITY;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EQUIP_ITEM_RARITY);
    v17 = System_String__Format((System_String_o *)StringLiteral_20175, v16, 0LL);
    if ( !v14 )
      goto LABEL_68;
    UISprite__set_spriteName(v14, v17, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v19 = this->fields.frameSprite;
    if ( !v19 )
      goto LABEL_68;
    UISprite__set_spriteName(v19, 0LL, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v21 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipItem(v21, equipImageId, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v23 = this->fields.typeSprite;
    v24 = ItemIconComponent_TypeInfo;
    if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v24 = ItemIconComponent_TypeInfo;
    }
    v37 = v24->static_fields->EQUIP_ITEM_RARITY;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    v26 = System_String__Format((System_String_o *)StringLiteral_20179, v25, 0LL);
    if ( !v23 )
      goto LABEL_68;
    UISprite__set_spriteName(v23, v26, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v28 = this->fields.classSprite;
    if ( !v28 )
      goto LABEL_68;
    UISprite__set_spriteName(v28, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v30 = this->fields.counterLabel;
    if ( !v30 )
      goto LABEL_68;
    UILabel__set_text(v30, (System_String_o *)StringLiteral_1, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v32 = this->fields.raritySprite;
    if ( !v32 )
      goto LABEL_68;
    UISprite__set_spriteName(v32, 0LL, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    v34 = this->fields.svtJoinIcon;
    if ( !v34 )
      goto LABEL_68;
    ShiningIconComponent__Clear(v34, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v36 = this->fields.materialTdSprite;
    if ( v36 )
    {
      UISprite__set_spriteName(v36, 0LL, 0LL);
      return;
    }
LABEL_68:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetEventPointBuffImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *typeSprite; // x22
  bool v15; // w0
  UISprite_o *backSprite; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UISprite_o *iconSprite; // x22
  UISprite_o *frameSprite; // x0
  struct UISprite_o *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  UISprite_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v28; // x21
  UISprite_o *v29; // x21
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Object_o *classSprite; // x20
  UISprite_o *v32; // x0
  UnityEngine_Object_o *raritySprite; // x20
  UISprite_o *v34; // x0
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v36; // x0
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC1CE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19395, v9);
    sub_B16FFC(&StringLiteral_20175, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_20177, v12);
    sub_B16FFC(&StringLiteral_20173, v13);
    byte_40FC1CE = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v15 )
  {
    v38 = bgImageId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    v18 = System_String__Format((System_String_o *)StringLiteral_20175, v17, 0LL);
    if ( !backSprite )
      goto LABEL_55;
    UISprite__set_spriteName(backSprite, v18, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(iconSprite, imageId, 0LL);
    frameSprite = this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_55;
    UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20173, 0LL);
    v21 = this->fields.typeSprite;
    v37 = bgImageId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    v23 = System_String__Format((System_String_o *)StringLiteral_20177, v22, 0LL);
    if ( !v21 )
      goto LABEL_55;
    v24 = v23;
    v25 = v21;
    goto LABEL_35;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    v26 = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !v26 )
      goto LABEL_55;
    gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
    if ( !gameObject )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  v28 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    v29 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(v29, imageId, 0LL);
  }
  v30 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    v25 = this->fields.frameSprite;
    if ( !v25 )
      goto LABEL_55;
    v24 = (System_String_o *)StringLiteral_19395;
LABEL_35:
    UISprite__set_spriteName(v25, v24, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v32 = this->fields.classSprite;
    if ( !v32 )
      goto LABEL_55;
    UISprite__set_spriteName(v32, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v34 = this->fields.raritySprite;
    if ( !v34 )
      goto LABEL_55;
    UISprite__set_spriteName(v34, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v36 = this->fields.counterLabel;
    if ( v36 )
    {
      UILabel__set_text(v36, (System_String_o *)StringLiteral_1, 0LL);
      return;
    }
LABEL_55:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetFaceImage(
        ItemIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t count,
        int32_t giftType,
        bool isQuestBoard,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  ServantEntity_o *v28; // x22
  int32_t startType; // w23
  WebViewManager_o *v30; // x0
  ServantExceedMaster_o *v31; // x0
  int32_t FrameType_30699216; // w25
  int32_t ImageLimitCount; // w26
  UnityEngine_Component_o *iconSprite; // x0
  WebViewObject_o *Component_WebViewObject; // x27
  UnityEngine_Object_o *typeSprite; // x27
  bool v37; // w0
  UISprite_o *backSprite; // x27
  UISprite_o *frameSprite; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v42; // x27
  UISprite_o *v43; // x27
  UnityEngine_Object_o *v44; // x24
  UISprite_o *v45; // x24
  UnityEngine_Object_o *classSprite; // x24
  bool IsServantEquip; // w0
  UISprite_o *v48; // x24
  UnityEngine_Object_o *raritySprite; // x23
  UISprite_o *v50; // x23
  int32_t v51; // w24
  System_String_o *Icon; // x0
  struct UISprite_o *v53; // x0
  UnityEngine_Object_o *counterLabel; // x23
  _BOOL8 v55; // x0
  UILabel_o *v56; // x23
  System_String_o *CrossOperatorString; // x24
  System_String_o *v58; // x0
  System_String_o *v59; // x1
  UnityEngine_Object_o *svtJoinIcon; // x23
  ShiningIconComponent_o *v61; // x0
  UnityEngine_Object_o *materialTdSprite; // x21
  bool IsServantMaterialTd; // w0
  UISprite_o *v64; // x20
  System_String_o **v65; // x8
  System_String_o *v66; // x19
  int32_t rarity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v68; // [xsp+Ch] [xbp-54h] BYREF

  v68 = count;
  if ( (byte_40FC1D5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantExceedMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Rarity_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&StringLiteral_21736, v20);
    sub_B16FFC(&StringLiteral_21737, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    sub_B16FFC(&StringLiteral_20173, v23);
    sub_B16FFC(&StringLiteral_19266, v24);
    byte_40FC1D5 = 1;
  }
  rarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_105;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             svtId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_105;
  v28 = (ServantEntity_o *)Entity;
  startType = Entity->fields.startType;
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_105;
  v31 = (ServantExceedMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v30,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !v31 )
    goto LABEL_105;
  FrameType_30699216 = ServantExceedMaster__GetFrameType_30699216(v31, &rarity, svtId, limitCount, 0, 0LL);
  if ( svtId < 1 )
  {
    ImageLimitCount = 0;
  }
  else
  {
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  }
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_105;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              iconSprite,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_105;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_WebViewObject, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v37 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceBaseIcon(backSprite, FrameType_30699216, startType, 0LL);
    AtlasManager__SetFaceImage(this->fields.iconSprite, svtId, ImageLimitCount, 0LL);
    frameSprite = this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_105;
    UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20173, 0LL);
    AtlasManager__SetServantType(this->fields.typeSprite, v28->fields.type, FrameType_30699216, startType, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
    {
      v40 = (UnityEngine_Component_o *)this->fields.backSprite;
      if ( !v40 )
        goto LABEL_105;
      gameObject = UnityEngine_Component__get_gameObject(v40, 0LL);
      if ( !gameObject )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    v42 = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
    {
      v43 = this->fields.iconSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v43, svtId, ImageLimitCount, 0LL);
    }
    v44 = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
    {
      v45 = this->fields.frameSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceFrameIcon(v45, 0LL);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    IsServantEquip = ServantEntity__get_IsServantEquip(v28, 0LL);
    v48 = this->fields.classSprite;
    if ( IsServantEquip )
    {
      if ( !v48 )
        goto LABEL_105;
      UISprite__set_spriteName(this->fields.classSprite, 0LL, 0LL);
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClass(v48, startType, FrameType_30699216, 0LL);
    }
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v50 = this->fields.raritySprite;
    v51 = rarity;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon = Rarity__getIcon(v51, 0LL);
    if ( v50 )
    {
      UISprite__set_spriteName(v50, Icon, 0LL);
      v53 = this->fields.raritySprite;
      if ( v53 )
      {
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v53->klass->vtable._33_MakePixelPerfect.method)(
          v53,
          v53->klass->vtable._34_get_minWidth.methodPtr);
        goto LABEL_74;
      }
    }
LABEL_105:
    sub_B170D4();
  }
LABEL_74:
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v55 = UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( v55 )
  {
    v56 = this->fields.counterLabel;
    if ( v68 <= 1 )
    {
      v59 = (System_String_o *)StringLiteral_1;
      if ( !v56 )
        goto LABEL_105;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString((const MethodInfo *)v55);
      v58 = System_Int32__ToString((int32_t)&v68, 0LL);
      v59 = System_String__Concat_43743732(CrossOperatorString, v58, 0LL);
      if ( !v56 )
        goto LABEL_105;
    }
    UILabel__set_text(v56, v59, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    v61 = this->fields.svtJoinIcon;
    if ( !v61 )
      goto LABEL_105;
    if ( giftType == 6 )
      ShiningIconComponent__Set_33652672(v61, (System_String_o *)StringLiteral_19266, 0LL);
    else
      ShiningIconComponent__Clear(v61, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    IsServantMaterialTd = ServantEntity__get_IsServantMaterialTd(v28, 0LL);
    v64 = this->fields.materialTdSprite;
    if ( IsServantMaterialTd )
    {
      v65 = (System_String_o **)&StringLiteral_21737;
      if ( !isQuestBoard )
        v65 = (System_String_o **)&StringLiteral_21736;
      v66 = *v65;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v64, v66, 0LL);
    }
    else
    {
      if ( !v64 )
        goto LABEL_105;
      UISprite__set_spriteName(v64, 0LL, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetGift(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        int32_t count,
        bool isQuestBoard,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t v17; // w1
  int32_t v18; // w3
  int32_t v19; // w4
  ItemIconComponent_o *v20; // x0
  int32_t v21; // w2
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *Entity; // x0
  const MethodInfo *v25; // x1
  ItemEntity_o *v26; // x20
  const MethodInfo *v27; // x3
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  WebViewManager_o *v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x0
  WarEntity_o *v36; // x20
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v38; // x2
  int32_t genderType; // w8
  __int64 v40; // x20
  struct System_String_o *emptyMessage; // x21
  int32_t v42; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_40FC1C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&giftType);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FC1C8 = 1;
  }
  switch ( giftType )
  {
    case 1:
    case 6:
    case 7:
      if ( objectId >= 1 )
      {
        ItemIconComponent__SetFaceImage(this, objectId, 0, count, giftType, isQuestBoard, v6);
        this->fields.svtId = objectId;
        return;
      }
      v17 = 4;
      goto LABEL_31;
    case 2:
      if ( objectId < 1 )
        goto LABEL_26;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_43;
      Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 objectId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_43;
      v26 = Entity;
      if ( ItemEntity__GetImageId(Entity, v25) < 1 )
      {
        ItemIconComponent__SetPresentItem(this, v26, count, v27);
      }
      else
      {
        ItemIconComponent__SetItem_28923792(this, v26, count, v27);
        this->fields.itemEnt = v26;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.itemEnt,
          (System_Int32_array **)v26,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      return;
    case 5:
      if ( objectId < 1 )
        goto LABEL_26;
      v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v34 )
        goto LABEL_43;
      v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v34,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !v35 )
        goto LABEL_43;
      v36 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v35,
              objectId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        goto LABEL_43;
      genderType = SelfUserGame->fields.genderType;
      if ( genderType == 2 )
      {
        if ( v36 )
        {
          emptyMessage = v36->fields.emptyMessage;
          v40 = *(_QWORD *)&v36->fields.startType;
LABEL_37:
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v43.fields.currentCryptoKey = emptyMessage;
          *(_QWORD *)&v43.fields.fakeValue = v40;
          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
          goto LABEL_42;
        }
LABEL_43:
        sub_B170D4();
      }
      if ( genderType == 1 )
      {
        if ( v36 )
        {
          emptyMessage = *(struct System_String_o **)&v36->fields.parentWarId;
          v40 = *(_QWORD *)&v36->fields.flag;
          goto LABEL_37;
        }
        goto LABEL_43;
      }
      v42 = 0;
LABEL_42:
      ItemIconComponent__SetEquipItemImage(this, v42, v38);
      return;
    case 8:
      if ( objectId < 1 )
        goto LABEL_26;
      v18 = -1;
      v19 = -1;
      v20 = this;
      v17 = objectId;
      v21 = 0;
      goto LABEL_33;
    case 9:
      v17 = 23;
      v21 = 3;
      v18 = 23;
      v19 = -1;
      v20 = this;
      goto LABEL_33;
    case 11:
      if ( objectId < 1 )
      {
        v17 = 8014;
LABEL_31:
        v18 = -1;
        v20 = this;
LABEL_32:
        v21 = 0;
        v19 = count;
LABEL_33:
        ItemIconComponent__SetItemImage_28925112(v20, v17, v21, v18, v19, method);
      }
      else
      {
        ItemIconComponent__SetCommandCodeImage(this, objectId, count, *(const MethodInfo **)&count);
        this->fields.commandCodeId = objectId;
      }
      return;
    case 14:
      if ( objectId >= 1 )
        ItemIconComponent__SetItemImage_28931492(this, objectId, 0, -1, (const MethodInfo *)isQuestBoard);
      return;
    default:
LABEL_26:
      v18 = -1;
      v20 = this;
      v17 = 0;
      goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetGiftDesignSize(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  System_String_o *v10; // x0
  int32_t m_stringLength; // w24
  ItemIconComponent_c *v12; // x0
  int v13; // w8
  UILabel_o *counterLabel; // x22
  int32_t DEFAULT_FONT_SIZE; // w1
  int32_t counta; // [xsp+Ch] [xbp-34h] BYREF

  counta = count;
  if ( (byte_40FC1C9 & 1) == 0 )
  {
    sub_B16FFC(&ItemIconComponent_TypeInfo, *(_QWORD *)&giftType);
    byte_40FC1C9 = 1;
  }
  if ( count >= 1 )
  {
    v10 = System_Int32__ToString((int32_t)&counta, 0LL);
    if ( v10 )
    {
      m_stringLength = v10->fields.m_stringLength;
      v12 = ItemIconComponent_TypeInfo;
      if ( (WORD1(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
      {
        if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
          v12 = ItemIconComponent_TypeInfo;
        }
        v13 = WORD1(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
      }
      else
      {
        v13 = 0;
      }
      counterLabel = this->fields.counterLabel;
      if ( m_stringLength <= v12->static_fields->CHANGE_FONT_COUNT )
      {
        if ( v13 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        if ( counterLabel )
        {
          DEFAULT_FONT_SIZE = ItemIconComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE;
          goto LABEL_21;
        }
      }
      else
      {
        if ( v13 && !v12->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v12);
        if ( counterLabel )
        {
          DEFAULT_FONT_SIZE = ItemIconComponent_TypeInfo->static_fields->OVER_FIVE_LENGTH;
LABEL_21:
          UILabel__set_fontSize(counterLabel, DEFAULT_FONT_SIZE, 0LL);
          goto LABEL_22;
        }
      }
    }
    sub_B170D4();
  }
LABEL_22:
  ItemIconComponent__SetGift(this, giftType, objectId, counta, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *Entity; // x1
  const MethodInfo *v12; // x3

  if ( (byte_40FC1C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FC1C6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             MasterData_WarQuestSelectionMaster,
                             itemId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  ItemIconComponent__SetItem_28923792(this, Entity, count, v12);
}


void __fastcall ItemIconComponent__SetItemImage(ItemIconComponent_o *this, int32_t imageId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  ItemIconComponent__SetItemImage_28925112(this, imageId, 0, -1, -1, v3);
}


void __fastcall ItemIconComponent__SetItemImageByName(
        ItemIconComponent_o *this,
        System_String_o *spriteNamet,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *typeSprite; // x21
  bool v7; // w0
  UISprite_o *iconSprite; // x21
  const MethodInfo *v9; // x4

  if ( (byte_40FC1D0 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spriteNamet);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC1D0 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  iconSprite = this->fields.iconSprite;
  if ( v7 )
    goto LABEL_12;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)iconSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.iconSprite;
LABEL_12:
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItemByName(iconSprite, spriteNamet, 0LL);
  }
  ItemIconComponent__SetItemInfo(this, 0, -1, -1, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemImage_28925112(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_Object_o *typeSprite; // x24
  bool v13; // w0
  UISprite_o *iconSprite; // x24
  const MethodInfo *v15; // x4

  if ( (byte_40FC1CF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FC1CF = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  iconSprite = this->fields.iconSprite;
  if ( v13 )
    goto LABEL_12;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)iconSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.iconSprite;
LABEL_12:
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(iconSprite, imageId, 0LL);
  }
  ItemIconComponent__SetItemInfo(this, bgImageId, type, count, v15);
}


void __fastcall ItemIconComponent__SetItemImage_28930192(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  ItemIconComponent__SetItemImage_28925112(this, imageId, 0, -1, count, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemImage_28931492(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v13; // x5
  int32_t longName_high; // w2
  ItemIconComponent_o *v15; // x0
  int32_t v16; // w1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC1CD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&imageId);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FC1CD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          objectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    v15 = this;
    v16 = imageId;
    longName_high = 0;
    goto LABEL_9;
  }
  if ( !entity )
LABEL_10:
    sub_B170D4();
  longName_high = HIDWORD(entity->fields.longName);
  v15 = this;
  v16 = imageId;
LABEL_9:
  ItemIconComponent__SetItemImage_28925112(v15, v16, longName_high, -1, count, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemInfo(
        ItemIconComponent_o *this,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  UnityEngine_Object_o *typeSprite; // x23
  bool v21; // w0
  UISprite_o *backSprite; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UISprite_o *frameSprite; // x0
  struct UISprite_o *v26; // x23
  Il2CppObject *v27; // x0
  __int64 *v28; // x8
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v31; // x22
  UISprite_o *v32; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x0
  UnityEngine_Object_o *classSprite; // x22
  UISprite_o *v36; // x0
  UnityEngine_Object_o *raritySprite; // x22
  UISprite_o *v38; // x0
  UnityEngine_Object_o *counterLabel; // x22
  _BOOL8 v40; // x0
  System_String_o *PlusOperatorString; // x0
  UILabel_o *v42; // x21
  Il2CppObject *v43; // x22
  Il2CppObject *v44; // x0
  System_String_o *v45; // x1
  UnityEngine_Object_o *svtJoinIcon; // x20
  ShiningIconComponent_o *v47; // x0
  UnityEngine_Object_o *materialTdSprite; // x20
  UISprite_o *v49; // x0
  int32_t v50; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC1D1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&bgImageId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_20176, v10);
    sub_B16FFC(&StringLiteral_20182, v11);
    sub_B16FFC(&StringLiteral_19395, v12);
    sub_B16FFC(&StringLiteral_20175, v13);
    sub_B16FFC(&StringLiteral_23555, v14);
    sub_B16FFC(&StringLiteral_20181, v15);
    sub_B16FFC(&StringLiteral_20178, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    sub_B16FFC(&StringLiteral_20180, v18);
    sub_B16FFC(&StringLiteral_20173, v19);
    byte_40FC1D1 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v21 )
  {
    v50 = bgImageId;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    v24 = System_String__Format((System_String_o *)StringLiteral_20175, v23, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, v24, 0LL);
      frameSprite = this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName(frameSprite, (System_String_o *)StringLiteral_20173, 0LL);
        if ( type > 22 )
        {
          if ( type == 23 )
          {
            v26 = this->fields.typeSprite;
            v50 = bgImageId;
            v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
            v28 = &StringLiteral_20176;
            goto LABEL_32;
          }
          if ( type == 24 )
          {
            v26 = this->fields.typeSprite;
            v50 = bgImageId;
            v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
            v28 = &StringLiteral_20180;
            goto LABEL_32;
          }
        }
        else
        {
          if ( type == 14 )
          {
            v26 = this->fields.typeSprite;
            v50 = bgImageId;
            v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
            v28 = &StringLiteral_20181;
            goto LABEL_32;
          }
          if ( type == 16 )
          {
            v26 = this->fields.typeSprite;
            v50 = bgImageId;
            v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
            v28 = &StringLiteral_20182;
LABEL_32:
            v34 = System_String__Format((System_String_o *)*v28, v27, 0LL);
            if ( !v26 )
              goto LABEL_73;
            v33 = v34;
            v32 = v26;
            goto LABEL_34;
          }
        }
        v26 = this->fields.typeSprite;
        v50 = bgImageId;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
        v28 = &StringLiteral_20178;
        goto LABEL_32;
      }
    }
LABEL_73:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    v29 = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !v29 )
      goto LABEL_73;
    gameObject = UnityEngine_Component__get_gameObject(v29, 0LL);
    if ( !gameObject )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  v31 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    v32 = this->fields.frameSprite;
    if ( !v32 )
      goto LABEL_73;
    v33 = (System_String_o *)StringLiteral_19395;
LABEL_34:
    UISprite__set_spriteName(v32, v33, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v36 = this->fields.classSprite;
    if ( !v36 )
      goto LABEL_73;
    UISprite__set_spriteName(v36, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v38 = this->fields.raritySprite;
    if ( !v38 )
      goto LABEL_73;
    UISprite__set_spriteName(v38, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v40 = UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( v40 )
  {
    if ( (unsigned int)type <= 0x10 && ((1 << type) & 0x16002) != 0 )
      PlusOperatorString = ItemType__get_PlusOperatorString((const MethodInfo *)v40);
    else
      PlusOperatorString = ItemType__get_CrossOperatorString((const MethodInfo *)v40);
    v42 = this->fields.counterLabel;
    v43 = (Il2CppObject *)PlusOperatorString;
    if ( (count & 0x80000000) != 0 )
    {
      v45 = (System_String_o *)StringLiteral_1;
      if ( !v42 )
        goto LABEL_73;
    }
    else
    {
      v50 = count;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
      v45 = System_String__Format_43739268((System_String_o *)StringLiteral_23555, v43, v44, 0LL);
      if ( !v42 )
        goto LABEL_73;
    }
    UILabel__set_text(v42, v45, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    v47 = this->fields.svtJoinIcon;
    if ( !v47 )
      goto LABEL_73;
    ShiningIconComponent__Clear(v47, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v49 = this->fields.materialTdSprite;
    if ( !v49 )
      goto LABEL_73;
    UISprite__set_spriteName(v49, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetItem_28923792(
        ItemIconComponent_o *this,
        ItemEntity_o *itemEntity,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t type; // w3
  int32_t ImageId; // w0
  const MethodInfo *v10; // x5

  if ( !itemEntity )
    sub_B170D4();
  type = itemEntity->fields.type;
  if ( type == 29 )
  {
    ImageId = ItemEntity__GetImageId(itemEntity, (const MethodInfo *)itemEntity);
    ItemIconComponent__SetCoinImage(this, ImageId, itemEntity->fields.bgImageId, itemEntity->fields.type, count, v10);
  }
  else
  {
    ItemIconComponent__SetItemImage_28925112(
      this,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      type,
      count,
      v4);
  }
}


void __fastcall ItemIconComponent__SetNotifyDirectGetCounter(
        ItemIconComponent_o *this,
        int32_t condensedWidth,
        const MethodInfo *method)
{
  UILabel_o *counterLabel; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalScaleX; // s0
  UnityEngine_Component_o *v8; // x0
  float v9; // s8
  UnityEngine_GameObject_o *v10; // x0

  counterLabel = this->fields.counterLabel;
  if ( !counterLabel
    || (UILabel__SetCondensedScale(counterLabel, condensedWidth, 0LL),
        (v5 = (UnityEngine_Component_o *)this->fields.counterLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v5, 0LL),
        LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0LL),
        (v8 = (UnityEngine_Component_o *)this->fields.counterLabel) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = LocalScaleX;
  v10 = UnityEngine_Component__get_gameObject(v8, 0LL);
  GameObjectExtensions__SetLocalScale_27422296(v10, v9 * 3.33, 3.33, 1.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPointEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t PointEventImageId; // w1
  const MethodInfo *v9; // x5

  if ( (byte_40FC1CB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC1CB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  PointEventImageId = EventMaster__GetPointEventImageId(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  ItemIconComponent__SetItemImage_28925112(this, PointEventImageId, 0, -1, -1, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPossession(
        ItemIconComponent_o *this,
        int32_t possessionNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *v9; // x0
  UILabel_o *Component_WebViewObject; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  float PossessionLabelWidth; // s8
  float mWidth; // s9
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v16; // x21
  float v17; // s0
  float v18; // s1
  float v19; // s2
  int32_t v20; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40FC1DE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UILabel___, *(_QWORD *)&possessionNum);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23395, v6);
    byte_40FC1DE = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child )
    goto LABEL_12;
  v9 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(Child, 0, 0LL);
  if ( !v9 )
    goto LABEL_12;
  Component_WebViewObject = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           v9,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  v20 = this->fields.possessionNum;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v12 = System_String__Format((System_String_o *)StringLiteral_23395, v11, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_12;
  UILabel__set_text(Component_WebViewObject, v12, 0LL);
  PossessionLabelWidth = this->fields.PossessionLabelWidth;
  mWidth = (float)Component_WebViewObject->fields.mWidth;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
  v16 = transform;
  if ( PossessionLabelWidth >= mWidth )
  {
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL);
    if ( v16 )
    {
      transform = v16;
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !transform )
    goto LABEL_12;
  v17 = this->fields.PossessionLabelWidth / (float)Component_WebViewObject->fields.mWidth;
  v18 = 1.0;
  v19 = 1.0;
LABEL_11:
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPossessionOneLabel(
        ItemIconComponent_o *this,
        int32_t possessionNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_o *v10; // x21
  UILabel_o *v11; // x20
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC1E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UILabel___, *(_QWORD *)&possessionNum);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23395, v6);
    byte_40FC1E8 = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child
    || (Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    Child,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0LL )
  {
    sub_B170D4();
  }
  v10 = *(System_String_o **)&Component_WebViewObject[3].fields.visibility;
  v11 = (UILabel_o *)Component_WebViewObject;
  v15 = this->fields.possessionNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v13 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23395, v12, 0LL);
  v14 = System_String__Format(v10, v13, 0LL);
  UILabel__set_text(v11, v14, 0LL);
}


void __fastcall ItemIconComponent__SetPossessionRoot(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC1E7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC1E7 = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionRoot, 0LL, 0LL) )
  {
    v6 = this->fields.possessionRoot;
    if ( !v6 )
      sub_B170D4();
    gameObject = UnityEngine_GameObject__get_gameObject(v6, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPossessionTitleActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionTitleLabel; // x21
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC1E6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isActive);
    byte_40FC1E6 = 1;
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.possessionTitleLabel;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ItemIconComponent__SetPresentItem(
        ItemIconComponent_o *this,
        ItemEntity_o *itemEnt,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t type; // w3
  int32_t bgImageId; // w2
  int32_t v8; // w1

  if ( !itemEnt )
    sub_B170D4();
  type = itemEnt->fields.type;
  switch ( type )
  {
    case 1:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 5;
      type = 1;
      break;
    case 2:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 6;
      type = 2;
      break;
    case 5:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 7;
      type = 5;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 9;
      break;
    case 12:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 8;
      type = 12;
      break;
    default:
      type = -1;
      v8 = 0;
      bgImageId = 0;
      break;
  }
  ItemIconComponent__SetItemImage_28925112(this, v8, bgImageId, type, count, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPurchase(
        ItemIconComponent_o *this,
        int32_t purchaseType,
        int32_t targetId,
        int32_t imageId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v6; // x6
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ItemIconComponent_o *v17; // x0
  int32_t v18; // w1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ItemEntity_o *Entity; // x0
  const MethodInfo *v22; // x3
  WebViewManager_o *v23; // x0
  AssistMaster_o *v24; // x0
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v26; // x20
  UISprite_o *iconSprite; // x19
  ItemIconComponent_c *v28; // x0
  int v29; // w9
  System_String_o *ASSIST_SPRITE_NAME; // x20
  Il2CppObject *v31; // x0
  System_String_o *v32; // x20
  int v33; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC1CA & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&purchaseType);
    sub_B16FFC(&Method_DataManager_GetMasterData_AssistMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&ItemIconComponent_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FC1CA = 1;
  }
  if ( imageId >= 1 )
  {
LABEL_4:
    v17 = this;
    v18 = imageId;
LABEL_5:
    ItemIconComponent__SetItemImage_28925112(v17, v18, 0, -1, -1, v5);
    return;
  }
  if ( purchaseType <= 4 )
  {
    if ( purchaseType != 1 )
    {
      if ( purchaseType == 4 )
      {
LABEL_17:
        ItemIconComponent__SetFaceImage(this, targetId, 0, -1, 1, 0, v6);
        return;
      }
      goto LABEL_4;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
    {
LABEL_30:
      sub_B170D4();
    }
    Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               MasterData_WarQuestSelectionMaster,
                               targetId,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Entity )
      ItemIconComponent__SetItem_28923792(this, Entity, 0, v22);
  }
  else
  {
    switch ( purchaseType )
    {
      case 14:
        v18 = 23;
        v17 = this;
        goto LABEL_5;
      case 15:
      case 16:
      case 17:
      case 18:
      case 20:
        goto LABEL_4;
      case 19:
        ItemIconComponent__SetCommandCodeImage(this, targetId, -1, *(const MethodInfo **)&imageId);
        return;
      case 21:
        goto LABEL_17;
      case 22:
        v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v23 )
          goto LABEL_30;
        v24 = (AssistMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v23,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AssistMaster___);
        if ( !v24 )
          goto LABEL_30;
        CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(v24, targetId, 0LL);
        if ( CurrentLevelEntity )
        {
          v26 = CurrentLevelEntity;
          iconSprite = this->fields.iconSprite;
          v28 = ItemIconComponent_TypeInfo;
          if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ItemIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
            v28 = ItemIconComponent_TypeInfo;
          }
          v29 = v26->fields.imageId;
          ASSIST_SPRITE_NAME = v28->static_fields->ASSIST_SPRITE_NAME;
          v33 = v29;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
          v32 = System_String__Format(ASSIST_SPRITE_NAME, v31, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBoostRequestIcon(iconSprite, v32, 0LL);
        }
        break;
      default:
        if ( purchaseType == 8 )
          goto LABEL_17;
        goto LABEL_4;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetRaidEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t RaidEventImageId; // w1
  const MethodInfo *v9; // x5

  if ( (byte_40FC1CC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC1CC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  RaidEventImageId = EventMaster__GetRaidEventImageId(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  ItemIconComponent__SetItemImage_28925112(this, RaidEventImageId, 0, -1, -1, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__ShowPossession(
        ItemIconComponent_o *this,
        bool showPossession,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x21
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x1
  unsigned int v12; // s0
  unsigned int v13; // s1
  unsigned int v14; // s2
  unsigned int v15; // s3
  unsigned __int64 v16; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 v17; // [xsp+8h] [xbp-28h]
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC1DD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, showPossession);
    byte_40FC1DD = 1;
  }
  v16 = 0LL;
  v17 = 0LL;
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(possessionRoot, 0LL, 0LL) )
  {
    if ( this->fields.possessionNum )
    {
      v10 = this->fields.possessionRoot;
      if ( !v10 )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(v10, showPossession, 0LL);
    }
    if ( showPossession )
    {
      v18.fields.r = 0.31373;
      v18.fields.a = 1.0;
      v18.fields.g = 0.31373;
      v18.fields.b = 0.31373;
      UnityEngine_Color___ctor(v18, v6, v7, v8, v9, (const MethodInfo *)&v16);
      v13 = HIDWORD(v16);
      v12 = v16;
      v15 = HIDWORD(v17);
      v14 = v17;
    }
    else
    {
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
      v16 = __PAIR64__(v13, v12);
      v17 = __PAIR64__(v15, v14);
    }
    ItemIconComponent__SetColor(this, *(UnityEngine_Color_o *)&v12, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__closeItemDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_40FC1E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FC1E2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
  ActionExtensions__Call(this->fields.detailCloseCallBack, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__closeSvtDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FC1E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FC1E3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, this->fields.detailCloseCallBack, 0LL);
}


int32_t __fastcall ItemIconComponent__getUserItemNum(
        ItemIconComponent_o *this,
        int64_t userId,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC1E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, userId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC1E0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, userId, objectId, 0LL) )
  {
    if ( entity )
      return entity->fields.num;
LABEL_9:
    sub_B170D4();
  }
  return 0;
}


UISprite_o *__fastcall ItemIconComponent__get_IconSprite(ItemIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.iconSprite;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__setFrameSprite(
        ItemIconComponent_o *this,
        bool isSetActive,
        System_String_o *frameName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *frameSprite; // x22
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v10; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v14; // x8
  UnityEngine_Transform_o *v15; // x19
  UnityEngine_Transform_o *v16; // x0
  int v17; // s0

  if ( (byte_40FC1DC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isSetActive);
    byte_40FC1DC = 1;
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !v8 )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    if ( isSetActive )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v10 = this->fields.frameSprite;
      if ( !v10 )
        goto LABEL_22;
      UISprite__set_spriteName(v10, frameName, 0LL);
      iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
      {
        v12 = (UnityEngine_Component_o *)this->fields.frameSprite;
        if ( v12 )
        {
          transform = UnityEngine_Component__get_transform(v12, 0LL);
          v14 = (UnityEngine_Component_o *)this->fields.iconSprite;
          if ( v14 )
          {
            v15 = transform;
            v16 = UnityEngine_Component__get_transform(v14, 0LL);
            if ( v16 )
            {
              *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localPosition(v16, 0LL);
              if ( v15 )
              {
                UnityEngine_Transform__set_localPosition(v15, *(UnityEngine_Vector3_o *)&v17, 0LL);
                return;
              }
            }
          }
        }
LABEL_22:
        sub_B170D4();
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
  }
}


void __fastcall ItemIconComponent__setLocalPositionIconSprite(
        ItemIconComponent_o *this,
        float x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC1DB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC1DB = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v6 )
      sub_B170D4();
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
  }
}


void __fastcall ItemIconComponent__setLocalScaleIconSprite(
        ItemIconComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC1DA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC1DA = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v6 )
      sub_B170D4();
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    GameObjectExtensions__SetLocalScale_27422124(gameObject, scale, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__setTypeSpritePositionY(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UnityEngine_Component_o *v8; // x0
  float v9; // s9
  UnityEngine_Transform_o *v10; // x0
  float v11; // s2
  UnityEngine_Component_o *v12; // x0
  float v13; // s10
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite )
    goto LABEL_8;
  transform = UnityEngine_Component__get_transform(typeSprite, 0LL);
  if ( !transform )
    goto LABEL_8;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
  v8 = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !v8
    || (v9 = *(float *)&localPosition, (v10 = UnityEngine_Component__get_transform(v8, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v11 - 2) = UnityEngine_Transform__get_localPosition(v10, 0LL),
        (v12 = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
    || (v13 = v11, (v14 = UnityEngine_Component__get_transform(v12, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  v15.fields.x = v9;
  v15.fields.y = y;
  v15.fields.z = v13;
  UnityEngine_Transform__set_localPosition(v14, v15, 0LL);
}