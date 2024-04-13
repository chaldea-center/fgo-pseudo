void __fastcall ItemIconComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ItemIconComponent_c *v11; // x8
  struct ItemIconComponent_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1

  if ( (byte_42EA538 & 1) == 0 )
  {
    sub_B5D5C4(&ItemIconComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18816/*"event_skill_icon_{0:D2}"*/, v8, v9, v10);
    byte_42EA538 = 1;
  }
  ItemIconComponent_TypeInfo->static_fields->CHANGE_FONT_COUNT = 4;
  ItemIconComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 20;
  v11 = ItemIconComponent_TypeInfo;
  ItemIconComponent_TypeInfo->static_fields->OVER_FIVE_LENGTH = 16;
  v11->static_fields->EQUIP_ITEM_RARITY = 3;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18816/*"event_skill_icon_{0:D2}"*/;
  static_fields->ASSIST_SPRITE_NAME = (struct System_String_o *)StringLiteral_18816/*"event_skill_icon_{0:D2}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->ASSIST_SPRITE_NAME, v13, v2, v3, v4, v5, v6, v7);
}


void __fastcall ItemIconComponent___ctor(ItemIconComponent_o *this, const MethodInfo *method)
{
  this->fields.PossessionLabelWidth = 84.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemIconComponent__Awake(ItemIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *typeSprite; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *transform; // x0
  unsigned int localPosition; // s0
  float v15; // s8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  UILabel_o *v17; // x19
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA513 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_7537/*"ITEM_POSSESSION_TITLE"*/, v8, v9, v10);
    byte_42EA513 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_22;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_22;
    v15 = *(float *)&localPosition;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    v18.fields.y = -64.0;
    v18.fields.z = 0.0;
    v18.fields.x = v15;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0LL);
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    v17 = this->fields.possessionTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7537/*"ITEM_POSSESSION_TITLE"*/, 0LL);
    if ( v17 )
    {
      UILabel__set_text(v17, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(transform, v12);
  }
}


int32_t __fastcall ItemIconComponent__CalcPossessionNum(
        ItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *SelfUserGame; // x0
  __int64 v12; // x1
  int64_t v13; // x21
  _DWORD *v14; // x20
  const MethodInfo *v15; // x3
  int v16; // w8

  if ( (byte_42EA52E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, objectId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA52E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v13 = *((_QWORD *)SelfUserGame + 2),
        v14 = SelfUserGame,
        (SelfUserGame = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (SelfUserGame = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)SelfUserGame,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (SelfUserGame = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
                         objectId,
                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(SelfUserGame, v12);
  }
  v16 = *((_DWORD *)SelfUserGame + 12);
  if ( v16 == 22 )
    return v14[45];
  if ( v16 == 5 )
    return v14[44];
  return ItemIconComponent__getUserItemNum((ItemIconComponent_o *)SelfUserGame, v13, objectId, v15);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *typeSprite; // x20
  bool v15; // w0
  UISprite_o *backSprite; // x20
  __int64 v17; // x1
  UISprite_o *iconSprite; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20

  if ( (byte_42EA514 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_20515/*"listframes_shadow"*/, v11, v12, v13);
    byte_42EA514 = 1;
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
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceBaseIcon(backSprite, 0, 0, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite
      || (UISprite__set_spriteName(iconSprite, 0LL, 0LL), (iconSprite = this->fields.frameSprite) == 0LL)
      || (UISprite__set_spriteName(iconSprite, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL),
          (iconSprite = this->fields.typeSprite) == 0LL) )
    {
LABEL_53:
      sub_B5D69C(iconSprite, v17);
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
      iconSprite = this->fields.backSprite;
      if ( !iconSprite )
        goto LABEL_53;
      iconSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, 0, 0LL);
    }
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_53;
  }
  UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_53;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_53;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    iconSprite = (UISprite_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)iconSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    iconSprite = (UISprite_o *)this->fields.svtJoinIcon;
    if ( !iconSprite )
      goto LABEL_53;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)iconSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.materialTdSprite;
    if ( !iconSprite )
      goto LABEL_53;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__CloseCommandCodeDetail(
        ItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EA533 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EA533 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseServantEquipStatusDialog(Instance, this->fields.detailCloseCallBack, 0LL);
}


void __fastcall ItemIconComponent__OnClickItem(
        ItemIconComponent_o *this,
        UIScrollBar_o *bar,
        System_Action_o *closeCallBack,
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
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x21
  CommonUI_o *v45; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v46; // x23
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v48; // x1
  float value; // s0
  float v50; // s0
  WebViewManager_o *v51; // x0
  CommandCodeEntity_o *v52; // x21
  CommonUI_o *v53; // x22
  ServantStatusDialog_EndDelegate_o *v54; // x23
  WebViewManager_o *v55; // x0
  int32_t svtId; // w21
  CommonUI_o *v57; // x22
  ServantStatusDialog_EndDelegate_o *v58; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA530 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)bar, (_DWORD)closeCallBack, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ItemIconComponent_CloseCommandCodeDetail__, v16, v17, v18);
    sub_B5D5C4(&Method_ItemIconComponent_closeItemDetail__, v19, v20, v21);
    sub_B5D5C4(&Method_ItemIconComponent_closeSvtDetail__, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&SoundManager_TypeInfo, v34, v35, v36);
    byte_42EA530 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.detailCloseCallBack = closeCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.detailCloseCallBack,
    (System_Int32_array **)closeCallBack,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( this->fields.itemEnt )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v45 = (CommonUI_o *)Instance;
    v46 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v46,
      (Il2CppObject *)this,
      Method_ItemIconComponent_closeItemDetail__,
      0LL);
    if ( !v45 )
      goto LABEL_26;
    CommonUI__OpenItemDetailDialog(v45, itemEnt, v46, 50, 0LL);
  }
  else if ( this->fields.commandCodeId )
  {
    MasterData_WarQuestSelectionMaster = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            MasterData_WarQuestSelectionMaster,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_26;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
           &entity,
           this->fields.commandCodeId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
    {
      v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v52 = (CommandCodeEntity_o *)entity;
      v53 = (CommonUI_o *)v51;
      v54 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v54,
        (Il2CppObject *)this,
        Method_ItemIconComponent_CloseCommandCodeDetail__,
        0LL);
      if ( !v53 )
        goto LABEL_26;
      CommonUI__OpenServantEquipStatusDialog_18218384(v53, 25, v52, 0, v54, 0LL, 0LL);
    }
  }
  else if ( this->fields.svtId )
  {
    v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    svtId = this->fields.svtId;
    v57 = (CommonUI_o *)v55;
    v58 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v58, (Il2CppObject *)this, Method_ItemIconComponent_closeSvtDetail__, 0LL);
    if ( !v57 )
      goto LABEL_26;
    CommonUI__OpenServantStatusDialog_18215952(v57, 7, svtId, v58, 0LL);
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
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)bar,
                                                          0LL,
                                                          0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( bar )
    {
      value = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, value + 0.00001, 0LL);
      v50 = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, v50 + -0.00001, 0LL);
      return;
    }
LABEL_26:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v48);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetAlpha(ItemIconComponent_o *this, float alpha, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  long double v5; // q8
  UnityEngine_Object_o *backSprite; // x20
  __int64 v8; // x1
  void *v9; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20

  v5 = *(long double *)&alpha;
  if ( (byte_42EA528 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EA528 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v9 = this->fields.backSprite;
    if ( !v9 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
      v5);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v9 = this->fields.iconSprite;
    if ( !v9 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
      v5);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v9 = this->fields.frameSprite;
    if ( !v9 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
      v5);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v9 = this->fields.typeSprite;
    if ( !v9 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
      v5);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v9 = this->fields.classSprite;
    if ( !v9 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
      v5);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v9 = this->fields.raritySprite;
    if ( !v9 )
      goto LABEL_46;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
      v5);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v9 = this->fields.counterLabel;
    if ( v9 )
    {
      (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v9 + 440LL))(
        v9,
        *(_QWORD *)(*(_QWORD *)v9 + 448LL),
        v5);
      return;
    }
LABEL_46:
    sub_B5D69C(v9, v8);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  UnityEngine_Object_o *typeSprite; // x24
  bool v36; // w0
  UISprite_o *backSprite; // x24
  Il2CppObject *v38; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v40; // x1
  UISprite_o *iconSprite; // x24
  struct UISprite_o *v42; // x22
  Il2CppObject *v43; // x0
  System_String_o *v44; // x1
  UnityEngine_Object_o *v45; // x23
  UISprite_o *v46; // x23
  UnityEngine_Object_o *v47; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *counterLabel; // x22
  UILabel_o *v51; // x21
  Il2CppObject *v52; // x22
  Il2CppObject *v53; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v56; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA521 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, coinImageId, bgImageId, *(_QWORD *)&type);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19714/*"img_common_frame01"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_20517/*"listframes{0}_bg"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_23961/*"{0}{1:#,0}"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_20520/*"listframes{0}_txt_item"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1/*""*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_20515/*"listframes_shadow"*/, v32, v33, v34);
    byte_42EA521 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v36 )
  {
    v58 = bgImageId;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20517/*"listframes{0}_bg"*/, v38, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0LL);
      iconSprite = this->fields.iconSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin(iconSprite, coinImageId, 0LL);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL);
        v42 = this->fields.typeSprite;
        v57 = bgImageId;
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
        frameSprite = System_String__Format((System_String_o *)StringLiteral_20520/*"listframes{0}_txt_item"*/, v43, 0LL);
        if ( v42 )
        {
          v44 = frameSprite;
          frameSprite = (System_String_o *)v42;
LABEL_35:
          UISprite__set_spriteName((UISprite_o *)frameSprite, v44, 0LL);
          goto LABEL_36;
        }
      }
    }
LABEL_70:
    sub_B5D69C(frameSprite, v40);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_70;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v45 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
  {
    v46 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCoin(v46, coinImageId, 0LL);
  }
  v47 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_70;
    v44 = (System_String_o *)StringLiteral_19714/*"img_common_frame01"*/;
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
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_70;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_70;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = ItemType__GetCountableString(type, 0LL);
    v51 = this->fields.counterLabel;
    if ( (count & 0x80000000) != 0 )
    {
      v40 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v51 )
        goto LABEL_70;
    }
    else
    {
      v52 = (Il2CppObject *)frameSprite;
      v56 = count;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
      frameSprite = System_String__Format_44573324((System_String_o *)StringLiteral_23961/*"{0}{1:#,0}"*/, v52, v53, 0LL);
      v40 = frameSprite;
      if ( !v51 )
        goto LABEL_70;
    }
    UILabel__set_text(v51, v40, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_70;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_70;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetColor(
        ItemIconComponent_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *backSprite; // x20
  __int64 v11; // x1
  UIWidget_o *v12; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_42EA527 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EA527 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.backSprite;
    if ( !v12 )
      goto LABEL_46;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v12, v19, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v12 )
      goto LABEL_46;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v12, v20, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v12 )
      goto LABEL_46;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v12, v21, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.typeSprite;
    if ( !v12 )
      goto LABEL_46;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v12, v22, 0LL);
  }
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
      goto LABEL_46;
    v23.fields.r = r;
    v23.fields.g = g;
    v23.fields.b = b;
    v23.fields.a = a;
    UIWidget__set_color(v12, v23, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.raritySprite;
    if ( !v12 )
      goto LABEL_46;
    v24.fields.r = r;
    v24.fields.g = g;
    v24.fields.b = b;
    v24.fields.a = a;
    UIWidget__set_color(v12, v24, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.counterLabel;
    if ( v12 )
    {
      v25.fields.b = b;
      v25.fields.a = a;
      v25.fields.r = r;
      v25.fields.g = g;
      UIWidget__set_color(v12, v25, 0LL);
      return;
    }
LABEL_46:
    sub_B5D69C(v12, v11);
  }
}


void __fastcall ItemIconComponent__SetCombineItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  bool v16; // w22
  int32_t ImageId; // w0
  const MethodInfo *v18; // x5

  if ( (byte_42EA516 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, itemId, count, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10, v11, v12);
    byte_42EA516 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          itemId,
                                                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v14);
  }
  v15 = Master_WarQuestSelectionMaster;
  v16 = LODWORD(Master_WarQuestSelectionMaster->fields.seriazlier) == 29;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_WarQuestSelectionMaster, v14);
  ItemIconComponent__SetCombineItemImage(this, ImageId, HIDWORD(v15->fields._lookup), count, v16, v18);
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
  UnityEngine_Object_o *backSprite; // x23
  System_String_o *v26; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v29; // x23
  UnityEngine_Object_o *frameSprite; // x21
  UISprite_o *v31; // x21
  Il2CppObject *v32; // x0
  UnityEngine_Object_o *typeSprite; // x21
  UISprite_o *v34; // x21
  Il2CppObject *v35; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v39; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v41; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v42; // [xsp+8h] [xbp-38h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  v43 = count;
  if ( (byte_42EA522 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, imageId, bgImageId, *(_QWORD *)&count);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_20517/*"listframes{0}_bg"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_20520/*"listframes{0}_txt_item"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EA522 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v29 = this->fields.iconSprite;
    if ( isCoin )
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetCoin(v29, imageId, 0LL);
    }
    else
    {
      if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v29, imageId, 0LL);
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
    v31 = this->fields.frameSprite;
    v42 = bgImageId;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20517/*"listframes{0}_bg"*/, v32, 0LL);
    if ( !v31 )
      goto LABEL_66;
    UISprite__set_spriteName(v31, (System_String_o *)gameObject, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v34 = this->fields.typeSprite;
    v41 = bgImageId;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20520/*"listframes{0}_txt_item"*/, v35, 0LL);
    if ( !v34 )
      goto LABEL_66;
    UISprite__set_spriteName(v34, (System_String_o *)gameObject, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v39 = this->fields.counterLabel;
    if ( (v43 & 0x80000000) != 0 )
    {
      v26 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v39 )
        goto LABEL_66;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v43, 0LL);
      if ( gameObject )
        v26 = (System_String_o *)gameObject;
      else
        v26 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v39 )
LABEL_66:
        sub_B5D69C(gameObject, v26);
    }
    UILabel__set_text(v39, v26, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_66;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetCommandCodeImage(
        ItemIconComponent_o *this,
        int32_t commandCodeId,
        int32_t count,
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
  void *Instance; // x0
  System_String_o *v26; // x1
  int32_t v27; // w21
  UnityEngine_Object_o *typeSprite; // x23
  bool v29; // w0
  UISprite_o *backSprite; // x23
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v32; // x23
  UnityEngine_Object_o *frameSprite; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UISprite_o *v36; // x22
  UnityEngine_Object_o *counterLabel; // x21
  UILabel_o *v38; // x21
  System_String_o *CrossOperatorString; // x20
  System_String_o *v40; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  v43 = count;
  if ( (byte_42EA525 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, commandCodeId, count, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Rarity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EA525 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     commandCodeId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_75:
    sub_B5D69C(Instance, v26);
  }
  v27 = *((_DWORD *)Instance + 16);
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v29 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeBaseIcon(backSprite, v27, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.iconSprite, commandCodeId, 0LL);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_75;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = this->fields.typeSprite;
    if ( !Instance )
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
    Instance = this->fields.backSprite;
    if ( !Instance )
      goto LABEL_75;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_75;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v32 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommandCodeImage(v32, commandCodeId, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_75;
LABEL_36:
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = this->fields.classSprite;
    if ( !Instance )
      goto LABEL_75;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v36 = this->fields.raritySprite;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v27, 0LL);
    if ( !v36 )
      goto LABEL_75;
    UISprite__set_spriteName(v36, (System_String_o *)Instance, 0LL);
    Instance = this->fields.raritySprite;
    if ( !Instance )
      goto LABEL_75;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v38 = this->fields.counterLabel;
    if ( count <= 1 )
    {
      v26 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v38 )
        goto LABEL_75;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
      v40 = System_Int32__ToString((int32_t)&v43, 0LL);
      Instance = System_String__Concat_44577788(CrossOperatorString, v40, 0LL);
      v26 = (System_String_o *)Instance;
      if ( !v38 )
        goto LABEL_75;
    }
    UILabel__set_text(v38, v26, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_75;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Instance = this->fields.materialTdSprite;
    if ( !Instance )
      goto LABEL_75;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
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
    sub_B5D69C(0LL, maxWidth);
  UILabel__SetCondensedScale(counterLabel, maxWidth, 0LL);
}


void __fastcall ItemIconComponent__SetCountLabelActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *counterLabel; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42EA534 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42EA534 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


void __fastcall ItemIconComponent__SetDepth(ItemIconComponent_o *this, int32_t depth, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *typeSprite; // x21
  UIWidget_o *iconSprite; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *backSprite; // x21
  int32_t v10; // w21
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *v16; // x22
  UnityEngine_Object_o *counterLabel; // x21

  if ( (byte_42EA526 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, depth, (_DWORD)method, v3);
    byte_42EA526 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconSprite = (UIWidget_o *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( ((unsigned __int8)iconSprite & 1) != 0 )
  {
    if ( !backSprite )
      goto LABEL_61;
    UIWidget__set_depth((UIWidget_o *)this->fields.backSprite, depth, 0LL);
    iconSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 1, 0LL);
    iconSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !iconSprite )
      goto LABEL_61;
    v10 = depth + 3;
    UIWidget__set_depth(iconSprite, depth + 2, 0LL);
    classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
    {
      iconSprite = (UIWidget_o *)this->fields.classSprite;
      if ( !iconSprite )
        goto LABEL_61;
      UIWidget__set_depth(iconSprite, v10, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      iconSprite = (UIWidget_o *)this->fields.raritySprite;
      if ( !iconSprite )
        goto LABEL_61;
      UIWidget__set_depth(iconSprite, v10, 0LL);
    }
    iconSprite = (UIWidget_o *)this->fields.typeSprite;
    if ( !iconSprite )
LABEL_61:
      sub_B5D69C(iconSprite, v8);
    goto LABEL_53;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth, 0LL);
  }
  v13 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 1, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 2, 0LL);
  }
  v15 = (UnityEngine_Object_o *)this->fields.classSprite;
  v10 = depth + 3;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, v10, 0LL);
  }
  v16 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_61;
LABEL_53:
    UIWidget__set_depth(iconSprite, v10, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_61;
    UIWidget__set_depth(iconSprite, depth + 4, 0LL);
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


void __fastcall ItemIconComponent__SetEquipItemImage(
        ItemIconComponent_o *this,
        int32_t equipImageId,
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
  UnityEngine_Object_o *backSprite; // x21
  __int64 v25; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v27; // x21
  ItemIconComponent_c *v28; // x0
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *iconSprite; // x21
  UISprite_o *v32; // x21
  UnityEngine_Object_o *typeSprite; // x20
  UISprite_o *v34; // x20
  ItemIconComponent_c *v35; // x0
  Il2CppObject *v36; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v42; // [xsp+8h] [xbp-28h] BYREF
  int32_t EQUIP_ITEM_RARITY; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA523 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, equipImageId, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ItemIconComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_20521/*"listframes{0}_txt_mysticcode"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_20517/*"listframes{0}_bg"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42EA523 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_68;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v27 = this->fields.backSprite;
    v28 = ItemIconComponent_TypeInfo;
    if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v28 = ItemIconComponent_TypeInfo;
    }
    EQUIP_ITEM_RARITY = v28->static_fields->EQUIP_ITEM_RARITY;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EQUIP_ITEM_RARITY);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20517/*"listframes{0}_bg"*/, v29, 0LL);
    if ( !v27 )
      goto LABEL_68;
    UISprite__set_spriteName(v27, (System_String_o *)gameObject, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_68;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v32 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEquipItem(v32, equipImageId, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v34 = this->fields.typeSprite;
    v35 = ItemIconComponent_TypeInfo;
    if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v35 = ItemIconComponent_TypeInfo;
    }
    v42 = v35->static_fields->EQUIP_ITEM_RARITY;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20521/*"listframes{0}_txt_mysticcode"*/, v36, 0LL);
    if ( !v34 )
      goto LABEL_68;
    UISprite__set_spriteName(v34, (System_String_o *)gameObject, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_68;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject )
      goto LABEL_68;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_68;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.svtJoinIcon;
    if ( !gameObject )
      goto LABEL_68;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( gameObject )
    {
      UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      return;
    }
LABEL_68:
    sub_B5D69C(gameObject, v25);
  }
}


void __fastcall ItemIconComponent__SetEventPointBuffImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
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
  UnityEngine_Object_o *typeSprite; // x22
  bool v29; // w0
  UISprite_o *backSprite; // x22
  Il2CppObject *v31; // x0
  System_String_o *frameSprite; // x0
  __int64 v33; // x1
  UISprite_o *iconSprite; // x22
  struct UISprite_o *v35; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x1
  UnityEngine_Object_o *v38; // x21
  UISprite_o *v39; // x21
  UnityEngine_Object_o *v40; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  int32_t v44; // [xsp+8h] [xbp-38h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA51D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, imageId, bgImageId, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19714/*"img_common_frame01"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_20517/*"listframes{0}_bg"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_20519/*"listframes{0}_txt_eventbonus"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_20515/*"listframes_shadow"*/, v25, v26, v27);
    byte_42EA51D = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v29 )
  {
    v45 = bgImageId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20517/*"listframes{0}_bg"*/, v31, 0LL);
    if ( !backSprite )
      goto LABEL_55;
    UISprite__set_spriteName(backSprite, frameSprite, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(iconSprite, imageId, 0LL);
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_55;
    UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL);
    v35 = this->fields.typeSprite;
    v44 = bgImageId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20519/*"listframes{0}_txt_eventbonus"*/, v36, 0LL);
    if ( !v35 )
      goto LABEL_55;
    v37 = frameSprite;
    frameSprite = (System_String_o *)v35;
    goto LABEL_35;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_55;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_55;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v38 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    v39 = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(v39, imageId, 0LL);
  }
  v40 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_55;
    v37 = (System_String_o *)StringLiteral_19714/*"img_common_frame01"*/;
LABEL_35:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v37, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_55;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_55;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.counterLabel;
    if ( frameSprite )
    {
      UILabel__set_text((UILabel_o *)frameSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_55:
    sub_B5D69C(frameSprite, v33);
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  void *Instance; // x0
  System_String_o *v52; // x1
  ServantEntity_o *v53; // x22
  int32_t v54; // w23
  const MethodInfo *v55; // x2
  int32_t FrameType_30843000; // w25
  int32_t ImageLimitCount; // w26
  UnityEngine_Object_o *Component_WebViewObject; // x27
  UnityEngine_Object_o *typeSprite; // x27
  bool v60; // w0
  UISprite_o *backSprite; // x27
  UnityEngine_Object_o *iconSprite; // x27
  UISprite_o *v63; // x27
  UnityEngine_Object_o *frameSprite; // x24
  UISprite_o *v65; // x24
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v67; // x24
  UnityEngine_Object_o *raritySprite; // x23
  UISprite_o *v69; // x23
  int32_t v70; // w24
  UnityEngine_Object_o *counterLabel; // x23
  UILabel_o *v72; // x23
  System_String_o *CrossOperatorString; // x24
  System_String_o *v74; // x0
  UnityEngine_Object_o *svtJoinIcon; // x23
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v77; // x20
  System_String_o **v78; // x8
  System_String_o *v79; // x19
  int32_t rarity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v81; // [xsp+Ch] [xbp-54h] BYREF

  v81 = count;
  if ( (byte_42EA524 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, svtId, limitCount, *(_QWORD *)&count);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Rarity_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_22125/*"ribbon_noblephantasmup_02"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_20515/*"listframes_shadow"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_19584/*"icon_eventjoin_01"*/, v48, v49, v50);
    byte_42EA524 = 1;
  }
  rarity = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_105;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               svtId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_105;
  v53 = (ServantEntity_o *)Instance;
  v54 = *((_DWORD *)Instance + 20);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_105;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_105;
  FrameType_30843000 = ServantExceedMaster__GetFrameType_30843000(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         limitCount,
                         0,
                         0LL);
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
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, v55);
  }
  Instance = this->fields.iconSprite;
  if ( !Instance )
    goto LABEL_105;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (void *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
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
  v60 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v60 )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetFaceBaseIcon(backSprite, FrameType_30843000, v54, 0LL);
    AtlasManager__SetFaceImage(this->fields.iconSprite, svtId, ImageLimitCount, 0LL);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_105;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL);
    AtlasManager__SetServantType(this->fields.typeSprite, v53->fields.type, FrameType_30843000, v54, 0LL);
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
      Instance = this->fields.backSprite;
      if ( !Instance )
        goto LABEL_105;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
    {
      v63 = this->fields.iconSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceImage(v63, svtId, ImageLimitCount, 0LL);
    }
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
    {
      v65 = this->fields.frameSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetFaceFrameIcon(v65, 0LL);
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
    Instance = (void *)ServantEntity__get_IsServantEquip(v53, 0LL);
    v67 = this->fields.classSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v67 )
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
      AtlasManager__SetClass(v67, v54, FrameType_30843000, 0LL);
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
    v69 = this->fields.raritySprite;
    v70 = rarity;
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v70, 0LL);
    if ( v69 )
    {
      UISprite__set_spriteName(v69, (System_String_o *)Instance, 0LL);
      Instance = this->fields.raritySprite;
      if ( Instance )
      {
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
          Instance,
          *(_QWORD *)(*(_QWORD *)Instance + 848LL));
        goto LABEL_74;
      }
    }
LABEL_105:
    sub_B5D69C(Instance, v52);
  }
LABEL_74:
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v72 = this->fields.counterLabel;
    if ( v81 <= 1 )
    {
      v52 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v72 )
        goto LABEL_105;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
      v74 = System_Int32__ToString((int32_t)&v81, 0LL);
      Instance = System_String__Concat_44577788(CrossOperatorString, v74, 0LL);
      v52 = (System_String_o *)Instance;
      if ( !v72 )
        goto LABEL_105;
    }
    UILabel__set_text(v72, v52, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_105;
    if ( giftType == 6 )
      ShiningIconComponent__Set_33897352(
        (ShiningIconComponent_o *)Instance,
        (System_String_o *)StringLiteral_19584/*"icon_eventjoin_01"*/,
        0LL);
    else
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Instance = (void *)ServantEntity__get_IsServantMaterialTd(v53, 0LL);
    v77 = this->fields.materialTdSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v78 = (System_String_o **)&StringLiteral_22125/*"ribbon_noblephantasmup_02"*/;
      if ( !isQuestBoard )
        v78 = (System_String_o **)&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/;
      v79 = *v78;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v77, v79, 0LL);
    }
    else
    {
      if ( !v77 )
        goto LABEL_105;
      UISprite__set_spriteName(v77, 0LL, 0LL);
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
  int32_t v27; // w1
  int32_t v28; // w3
  int32_t v29; // w4
  ItemIconComponent_o *v30; // x0
  int32_t v31; // w2
  DataManager_o *Instance; // x0
  const MethodInfo *v33; // x1
  ItemEntity_o *v34; // x20
  const MethodInfo *v35; // x3
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WarEntity_o *Entity; // x20
  const MethodInfo *v43; // x2
  int masterCheckName_high; // w8
  int64_t targetId; // x20
  __int64 v46; // x21
  int32_t v47; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_42EA517 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, giftType, objectId, *(_QWORD *)&count);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EA517 = 1;
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
      v27 = 4;
      goto LABEL_31;
    case 2:
      if ( objectId < 1 )
        goto LABEL_26;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    objectId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_43;
      v34 = (ItemEntity_o *)Instance;
      if ( ItemEntity__GetImageId((ItemEntity_o *)Instance, v33) < 1 )
      {
        ItemIconComponent__SetPresentItem(this, v34, count, v35);
      }
      else
      {
        ItemIconComponent__SetItem_28495752(this, v34, count, v35);
        this->fields.itemEnt = v34;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.itemEnt,
          (System_Int32_array **)v34,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      return;
    case 5:
      if ( objectId < 1 )
        goto LABEL_26;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_43;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                 objectId,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !Instance )
        goto LABEL_43;
      masterCheckName_high = HIDWORD(Instance->fields.masterCheckName);
      if ( masterCheckName_high == 2 )
      {
        if ( Entity )
        {
          v46 = *(_QWORD *)&Entity->fields.startType;
          targetId = Entity->fields.targetId;
LABEL_37:
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v48.fields.currentCryptoKey = v46;
          *(_QWORD *)&v48.fields.fakeValue = targetId;
          v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v48, 0LL);
          goto LABEL_42;
        }
LABEL_43:
        sub_B5D69C(Instance, v33);
      }
      if ( masterCheckName_high == 1 )
      {
        if ( Entity )
        {
          v46 = *(_QWORD *)&Entity->fields.flag;
          targetId = (int64_t)Entity->fields.emptyMessage;
          goto LABEL_37;
        }
        goto LABEL_43;
      }
      v47 = 0;
LABEL_42:
      ItemIconComponent__SetEquipItemImage(this, v47, v43);
      return;
    case 8:
      if ( objectId < 1 )
        goto LABEL_26;
      v28 = -1;
      v29 = -1;
      v30 = this;
      v27 = objectId;
      v31 = 0;
      goto LABEL_33;
    case 9:
      v27 = 23;
      v31 = 3;
      v28 = 23;
      v29 = -1;
      v30 = this;
      goto LABEL_33;
    case 11:
      if ( objectId < 1 )
      {
        v27 = 8014;
LABEL_31:
        v28 = -1;
        v30 = this;
LABEL_32:
        v31 = 0;
        v29 = count;
LABEL_33:
        ItemIconComponent__SetItemImage_28497040(v30, v27, v31, v28, v29, method);
      }
      else
      {
        ItemIconComponent__SetCommandCodeImage(this, objectId, count, *(const MethodInfo **)&count);
        this->fields.commandCodeId = objectId;
      }
      return;
    case 14:
      if ( objectId >= 1 )
        ItemIconComponent__SetItemImage_28499756(this, objectId, 0, -1, (const MethodInfo *)isQuestBoard);
      return;
    default:
LABEL_26:
      v28 = -1;
      v30 = this;
      v27 = 0;
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
  _DWORD *v10; // x0
  __int64 v11; // x1
  int v12; // w24
  int v13; // w8
  UILabel_o *counterLabel; // x22
  int32_t DEFAULT_FONT_SIZE; // w1
  int32_t counta; // [xsp+Ch] [xbp-34h] BYREF

  counta = count;
  if ( (byte_42EA518 & 1) == 0 )
  {
    sub_B5D5C4(&ItemIconComponent_TypeInfo, giftType, objectId, *(_QWORD *)&count);
    byte_42EA518 = 1;
  }
  if ( count >= 1 )
  {
    v10 = System_Int32__ToString((int32_t)&counta, 0LL);
    if ( v10 )
    {
      v12 = v10[4];
      v10 = ItemIconComponent_TypeInfo;
      if ( (WORD1(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
      {
        if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
          v10 = ItemIconComponent_TypeInfo;
        }
        v13 = WORD1(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
      }
      else
      {
        v13 = 0;
      }
      counterLabel = this->fields.counterLabel;
      if ( v12 <= **((_DWORD **)v10 + 23) )
      {
        if ( v13 && !v10[56] )
          j_il2cpp_runtime_class_init_0(v10);
        if ( counterLabel )
        {
          DEFAULT_FONT_SIZE = ItemIconComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE;
          goto LABEL_21;
        }
      }
      else
      {
        if ( v13 && !v10[56] )
          j_il2cpp_runtime_class_init_0(v10);
        if ( counterLabel )
        {
          DEFAULT_FONT_SIZE = ItemIconComponent_TypeInfo->static_fields->OVER_FIVE_LENGTH;
LABEL_21:
          UILabel__set_fontSize(counterLabel, DEFAULT_FONT_SIZE, 0LL);
          goto LABEL_22;
        }
      }
    }
    sub_B5D69C(v10, v11);
  }
LABEL_22:
  ItemIconComponent__SetGift(this, giftType, objectId, counta, 0, v5);
}


void __fastcall ItemIconComponent__SetItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  ItemEntity_o *Entity; // x1
  const MethodInfo *v16; // x3

  if ( (byte_42EA515 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, itemId, count, method);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EA515 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             itemId,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  ItemIconComponent__SetItem_28495752(this, Entity, count, v16);
}


void __fastcall ItemIconComponent__SetItemImage(ItemIconComponent_o *this, int32_t imageId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  ItemIconComponent__SetItemImage_28497040(this, imageId, 0, -1, -1, v3);
}


void __fastcall ItemIconComponent__SetItemImageByName(
        ItemIconComponent_o *this,
        System_String_o *spriteNamet,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *typeSprite; // x21
  bool v10; // w0
  UISprite_o *iconSprite; // x21
  const MethodInfo *v12; // x4

  if ( (byte_42EA51F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spriteNamet, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EA51F = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  iconSprite = this->fields.iconSprite;
  if ( v10 )
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
  ItemIconComponent__SetItemInfo(this, 0, -1, -1, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemImage_28497040(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *typeSprite; // x24
  bool v15; // w0
  UISprite_o *iconSprite; // x24
  const MethodInfo *v17; // x4

  if ( (byte_42EA51E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, imageId, bgImageId, *(_QWORD *)&type);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EA51E = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  iconSprite = this->fields.iconSprite;
  if ( v15 )
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
  ItemIconComponent__SetItemInfo(this, bgImageId, type, count, v17);
}


void __fastcall ItemIconComponent__SetItemImage_28499576(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  ItemIconComponent__SetItemImage_28497040(this, imageId, 0, -1, count, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemImage_28499756(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  int32_t longName_high; // w2
  ItemIconComponent_o *v19; // x0
  int32_t v20; // w1
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA51C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, imageId, objectId, *(_QWORD *)&count);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EA51C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                objectId,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    v19 = this;
    v20 = imageId;
    longName_high = 0;
    goto LABEL_9;
  }
  if ( !entity )
LABEL_10:
    sub_B5D69C(Instance, v16);
  longName_high = HIDWORD(entity->fields.longName);
  v19 = this;
  v20 = imageId;
LABEL_9:
  ItemIconComponent__SetItemImage_28497040(v19, v20, longName_high, -1, count, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemInfo(
        ItemIconComponent_o *this,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UnityEngine_Object_o *typeSprite; // x23
  bool v43; // w0
  UISprite_o *backSprite; // x23
  Il2CppObject *v45; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v47; // x1
  struct UISprite_o *v48; // x23
  Il2CppObject *v49; // x0
  __int64 *v50; // x8
  UnityEngine_Object_o *v51; // x22
  System_String_o *v52; // x1
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *counterLabel; // x22
  UILabel_o *v56; // x21
  Il2CppObject *v57; // x22
  Il2CppObject *v58; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v61; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA520 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, bgImageId, type, *(_QWORD *)&count);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_20518/*"listframes{0}_txt_costume"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_20524/*"listframes{0}_txt_quest"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_19714/*"img_common_frame01"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_20517/*"listframes{0}_bg"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23961/*"{0}{1:#,0}"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_20523/*"listframes{0}_txt_point"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20520/*"listframes{0}_txt_item"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_20522/*"listframes{0}_txt_plain"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_20515/*"listframes_shadow"*/, v39, v40, v41);
    byte_42EA520 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v43 = UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
  backSprite = this->fields.backSprite;
  if ( v43 )
  {
    v61 = bgImageId;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_20517/*"listframes{0}_bg"*/, v45, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0LL);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_20515/*"listframes_shadow"*/, 0LL);
        if ( type > 22 )
        {
          if ( type == 23 )
          {
            v48 = this->fields.typeSprite;
            v61 = bgImageId;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v50 = &StringLiteral_20518/*"listframes{0}_txt_costume"*/;
            goto LABEL_32;
          }
          if ( type == 24 )
          {
            v48 = this->fields.typeSprite;
            v61 = bgImageId;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v50 = &StringLiteral_20522/*"listframes{0}_txt_plain"*/;
            goto LABEL_32;
          }
        }
        else
        {
          if ( type == 14 )
          {
            v48 = this->fields.typeSprite;
            v61 = bgImageId;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v50 = &StringLiteral_20523/*"listframes{0}_txt_point"*/;
            goto LABEL_32;
          }
          if ( type == 16 )
          {
            v48 = this->fields.typeSprite;
            v61 = bgImageId;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
            v50 = &StringLiteral_20524/*"listframes{0}_txt_quest"*/;
LABEL_32:
            frameSprite = System_String__Format((System_String_o *)*v50, v49, 0LL);
            if ( !v48 )
              goto LABEL_69;
            v52 = frameSprite;
            frameSprite = (System_String_o *)v48;
            goto LABEL_34;
          }
        }
        v48 = this->fields.typeSprite;
        v61 = bgImageId;
        v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
        v50 = &StringLiteral_20520/*"listframes{0}_txt_item"*/;
        goto LABEL_32;
      }
    }
LABEL_69:
    sub_B5D69C(frameSprite, v47);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_69;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v51 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_69;
    v52 = (System_String_o *)StringLiteral_19714/*"img_common_frame01"*/;
LABEL_34:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v52, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_69;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_69;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = ItemType__GetCountableString(type, 0LL);
    v56 = this->fields.counterLabel;
    if ( (count & 0x80000000) != 0 )
    {
      v47 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v56 )
        goto LABEL_69;
    }
    else
    {
      v57 = (Il2CppObject *)frameSprite;
      v61 = count;
      v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      frameSprite = System_String__Format_44573324((System_String_o *)StringLiteral_23961/*"{0}{1:#,0}"*/, v57, v58, 0LL);
      v47 = frameSprite;
      if ( !v56 )
        goto LABEL_69;
    }
    UILabel__set_text(v56, v47, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_69;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_69;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetItem_28495752(
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
    sub_B5D69C(this, 0LL);
  type = itemEntity->fields.type;
  if ( type == 29 )
  {
    ImageId = ItemEntity__GetImageId(itemEntity, (const MethodInfo *)itemEntity);
    ItemIconComponent__SetCoinImage(this, ImageId, itemEntity->fields.bgImageId, itemEntity->fields.type, count, v10);
  }
  else
  {
    ItemIconComponent__SetItemImage_28497040(
      this,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      type,
      count,
      v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetNotifyDirectGetCounter(
        ItemIconComponent_o *this,
        int32_t condensedWidth,
        const MethodInfo *method)
{
  UILabel_o *counterLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalScaleX; // s0
  float v7; // s8
  UnityEngine_GameObject_o *v8; // x0

  counterLabel = this->fields.counterLabel;
  if ( !counterLabel
    || (UILabel__SetCondensedScale(counterLabel, condensedWidth, 0LL), (counterLabel = this->fields.counterLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0LL),
        LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0LL),
        (counterLabel = this->fields.counterLabel) == 0LL) )
  {
    sub_B5D69C(counterLabel, *(_QWORD *)&condensedWidth);
  }
  v7 = LocalScaleX;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0LL);
  GameObjectExtensions__SetLocalScale_32432824(v8, v7 * 3.33, 3.33, 1.0, 0LL);
}


void __fastcall ItemIconComponent__SetPointEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t PointEventImageId; // w1
  const MethodInfo *v12; // x5

  if ( (byte_42EA51A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA51A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  PointEventImageId = EventMaster__GetPointEventImageId((EventMaster_o *)Instance, eventId, 0LL);
  ItemIconComponent__SetItemImage_28497040(this, PointEventImageId, 0, -1, -1, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPossession(
        ItemIconComponent_o *this,
        int32_t possessionNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v14; // x1
  UILabel_o *Component_WebViewObject; // x20
  Il2CppObject *v16; // x0
  float PossessionLabelWidth; // s8
  float mWidth; // s9
  UnityEngine_Transform_o *v19; // x21
  float v20; // s0
  float v21; // s1
  float v22; // s2
  int32_t v23; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42EA52D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, possessionNum, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v9, v10, v11);
    byte_42EA52D = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child )
    goto LABEL_12;
  Child = UnityEngine_Transform__GetChild(Child, 0, 0LL);
  if ( !Child )
    goto LABEL_12;
  Component_WebViewObject = (UILabel_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)Child,
                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  v23 = this->fields.possessionNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  Child = (UnityEngine_Transform_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v16, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_12;
  UILabel__set_text(Component_WebViewObject, (System_String_o *)Child, 0LL);
  PossessionLabelWidth = this->fields.PossessionLabelWidth;
  mWidth = (float)Component_WebViewObject->fields.mWidth;
  Child = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_WebViewObject, 0LL);
  v19 = Child;
  if ( PossessionLabelWidth >= mWidth )
  {
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL);
    if ( v19 )
    {
      Child = v19;
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(Child, v14);
  }
  if ( !Child )
    goto LABEL_12;
  v20 = this->fields.PossessionLabelWidth / (float)Component_WebViewObject->fields.mWidth;
  v21 = 1.0;
  v22 = 1.0;
LABEL_11:
  UnityEngine_Transform__set_localScale(Child, *(UnityEngine_Vector3_o *)&v20, 0LL);
}


void __fastcall ItemIconComponent__SetPossessionOneLabel(
        ItemIconComponent_o *this,
        int32_t possessionNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v14; // x1
  System_String_o *klass; // x21
  UILabel_o *v16; // x20
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA537 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, possessionNum, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v9, v10, v11);
    byte_42EA537 = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child
    || (Child = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             Child,
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0LL )
  {
    sub_B5D69C(Child, v14);
  }
  klass = (System_String_o *)Child[17].klass;
  v16 = (UILabel_o *)Child;
  v20 = this->fields.possessionNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v17, 0LL);
  v19 = System_String__Format(klass, v18, 0LL);
  UILabel__set_text(v16, v19, 0LL);
}


void __fastcall ItemIconComponent__SetPossessionRoot(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *possessionRoot; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EA536 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EA536 = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionRoot, 0LL, 0LL) )
  {
    v9 = this->fields.possessionRoot;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    gameObject = UnityEngine_GameObject__get_gameObject(v9, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, y, 0LL);
  }
}


void __fastcall ItemIconComponent__SetPossessionTitleActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *possessionTitleLabel; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42EA535 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42EA535 = 1;
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.possessionTitleLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  ItemIconComponent__SetItemImage_28497040(this, v8, bgImageId, type, count, v4);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  ItemIconComponent_o *v29; // x0
  int32_t v30; // w1
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  ItemEntity_o *Entity; // x0
  const MethodInfo *v34; // x3
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v36; // x20
  UISprite_o *iconSprite; // x19
  ItemIconComponent_c *v38; // x0
  int v39; // w9
  System_String_o *ASSIST_SPRITE_NAME; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  int v43; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA519 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, purchaseType, targetId, *(_QWORD *)&imageId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AssistMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ItemIconComponent_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42EA519 = 1;
  }
  if ( imageId >= 1 )
  {
LABEL_4:
    v29 = this;
    v30 = imageId;
LABEL_5:
    ItemIconComponent__SetItemImage_28497040(v29, v30, 0, -1, -1, v5);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
    {
LABEL_30:
      sub_B5D69C(Instance, v32);
    }
    Entity = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               targetId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Entity )
      ItemIconComponent__SetItem_28495752(this, Entity, 0, v34);
  }
  else
  {
    switch ( purchaseType )
    {
      case 14:
        v30 = 23;
        v29 = this;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_30;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AssistMaster___);
        if ( !Instance )
          goto LABEL_30;
        CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, targetId, 0LL);
        if ( CurrentLevelEntity )
        {
          v36 = CurrentLevelEntity;
          iconSprite = this->fields.iconSprite;
          v38 = ItemIconComponent_TypeInfo;
          if ( (BYTE3(ItemIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ItemIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
            v38 = ItemIconComponent_TypeInfo;
          }
          v39 = v36->fields.imageId;
          ASSIST_SPRITE_NAME = v38->static_fields->ASSIST_SPRITE_NAME;
          v43 = v39;
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
          v42 = System_String__Format(ASSIST_SPRITE_NAME, v41, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBoostRequestIcon(iconSprite, v42, 0LL);
        }
        break;
      default:
        if ( purchaseType == 8 )
          goto LABEL_17;
        goto LABEL_4;
    }
  }
}


void __fastcall ItemIconComponent__SetRaidEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  int32_t RaidEventImageId; // w1
  const MethodInfo *v12; // x5

  if ( (byte_42EA51B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA51B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventId, 0LL);
  ItemIconComponent__SetItemImage_28497040(this, RaidEventImageId, 0, -1, -1, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__ShowPossession(
        ItemIconComponent_o *this,
        bool showPossession,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *possessionRoot; // x21
  __int64 v7; // x1
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s7
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x1
  unsigned int v14; // s0
  unsigned int v15; // s1
  unsigned int v16; // s2
  unsigned int v17; // s3
  unsigned __int64 v18; // [xsp+0h] [xbp-30h] BYREF
  unsigned __int64 v19; // [xsp+8h] [xbp-28h]
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA52C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, showPossession, (_DWORD)method, v3);
    byte_42EA52C = 1;
  }
  v18 = 0LL;
  v19 = 0LL;
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
      v12 = this->fields.possessionRoot;
      if ( !v12 )
        sub_B5D69C(0LL, v7);
      UnityEngine_GameObject__SetActive(v12, showPossession, 0LL);
    }
    if ( showPossession )
    {
      v20.fields.r = 0.31373;
      v20.fields.a = 1.0;
      v20.fields.g = 0.31373;
      v20.fields.b = 0.31373;
      UnityEngine_Color___ctor(v20, v8, v9, v10, v11, (const MethodInfo *)&v18);
      v15 = HIDWORD(v18);
      v14 = v18;
      v17 = HIDWORD(v19);
      v16 = v19;
    }
    else
    {
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      v18 = __PAIR64__(v15, v14);
      v19 = __PAIR64__(v17, v16);
    }
    ItemIconComponent__SetColor(this, *(UnityEngine_Color_o *)&v14, v13);
  }
}


void __fastcall ItemIconComponent__closeItemDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EA531 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EA531 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
  ActionExtensions__Call(this->fields.detailCloseCallBack, 0LL);
}


void __fastcall ItemIconComponent__closeSvtDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EA532 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EA532 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__CloseServantStatusDialog(Instance, this->fields.detailCloseCallBack, 0LL);
}


int32_t __fastcall ItemIconComponent__getUserItemNum(
        ItemIconComponent_o *this,
        int64_t userId,
        int32_t objectId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA52F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, userId, objectId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA52F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, userId, objectId, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_9:
    sub_B5D69C(Instance, v10);
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
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Component_o *v11; // x8
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  if ( (byte_42EA52B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isSetActive, (_DWORD)frameName, method);
    byte_42EA52B = 1;
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    if ( isSetActive )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
      if ( !gameObject )
        goto LABEL_22;
      UISprite__set_spriteName((UISprite_o *)gameObject, frameName, 0LL);
      iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
          v11 = (UnityEngine_Component_o *)this->fields.iconSprite;
          if ( v11 )
          {
            v12 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v11, 0LL);
            if ( gameObject )
            {
              *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 0LL);
              if ( v12 )
              {
                UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
                return;
              }
            }
          }
        }
LABEL_22:
        sub_B5D69C(gameObject, v8);
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
}


void __fastcall ItemIconComponent__setLocalPositionIconSprite(
        ItemIconComponent_o *this,
        float x,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EA52A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EA52A = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
  }
}


void __fastcall ItemIconComponent__setLocalScaleIconSprite(
        ItemIconComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42EA529 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EA529 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v9 )
      sub_B5D69C(0LL, v8);
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    GameObjectExtensions__SetLocalScale_32432652(gameObject, scale, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__setTypeSpritePositionY(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  unsigned int localPosition; // s0
  float v7; // s9
  float v8; // s2
  float v9; // s10
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite )
    goto LABEL_8;
  typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL);
  if ( !typeSprite )
    goto LABEL_8;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)typeSprite, 0LL);
  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite
    || (v7 = *(float *)&localPosition,
        (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v8 - 2) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)typeSprite,
                                                0LL),
        (typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite) == 0LL)
    || (v9 = v8, (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(typeSprite, method);
  }
  v10.fields.x = v7;
  v10.fields.y = y;
  v10.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v10, 0LL);
}