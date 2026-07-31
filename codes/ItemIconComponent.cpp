void ItemIconComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct ItemIconComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct ItemIconComponent_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5937B20 & 1) == 0 )
  {
    sub_21FFC50(&ItemIconComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_20124/*"event_skill_icon_{0:D2}"*/);
    sub_21FFC50(&StringLiteral_24219/*"reset_class_score_icon_{0}"*/);
    byte_5937B20 = 1;
  }
  v7 = StringLiteral_20124/*"event_skill_icon_{0:D2}"*/;
  static_fields = ItemIconComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CHANGE_FONT_COUNT = xmmword_E93080;
  static_fields->ASSIST_SPRITE_NAME = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->ASSIST_SPRITE_NAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_24219/*"reset_class_score_icon_{0}"*/;
  v10 = ItemIconComponent_TypeInfo->static_fields;
  v10->ClassBoardResetItemIcon = (struct System_String_o *)StringLiteral_24219/*"reset_class_score_icon_{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->ClassBoardResetItemIcon, v9, v11, v12, v13, v14, v15, v16);
}


void ItemIconComponent___ctor(ItemIconComponent_o *this, const MethodInfo *method)
{
  this->fields.PossessionLabelWidth = 84.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ItemIconComponent__Awake(ItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  unsigned int localPosition; // s0
  float v7; // s8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  __int64 v9; // x1
  UILabel_o *v10; // x19
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937AF8 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7835/*"ITEM_POSSESSION_TITLE"*/);
    byte_5937AF8 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_19;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_19;
    v7 = *(float *)&localPosition;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_19;
    v11.fields.z = 0.0;
    v11.fields.x = v7;
    v11.fields.y = -64.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v11, 0);
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0, 0) )
  {
    v10 = this->fields.possessionTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    transform = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7835/*"ITEM_POSSESSION_TITLE"*/, 0);
    if ( v10 )
    {
      UILabel__set_text(v10, (System_String_o *)transform, 0);
      return;
    }
LABEL_19:
    sub_21FFECC(transform, v4);
  }
}


int32_t ItemIconComponent__CalcPossessionNum(ItemIconComponent_o *this, int32_t objectId, const MethodInfo *method)
{
  DataManager_o *SelfUserGame; // x0
  __int64 v5; // x1
  DataManager_o *v6; // x20
  int64_t m_CachedPtr; // x21
  const MethodInfo *v8; // x3
  int lookup; // w8

  if ( (byte_5937B13 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B13 = 1;
  }
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v6 = SelfUserGame,
        m_CachedPtr = SelfUserGame->fields.m_CachedPtr,
        (SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                          SelfUserGame,
                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (SelfUserGame = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          objectId,
                                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(SelfUserGame, v5);
  }
  lookup = (int)SelfUserGame->fields.lookup;
  if ( lookup == 22 )
    return HIDWORD(v6[1].fields.datalist);
  if ( lookup == 5 )
    return (int32_t)v6[1].fields.datalist;
  return ItemIconComponent__getUserItemNum((ItemIconComponent_o *)SelfUserGame, m_CachedPtr, objectId, v8);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__CalcSetPossession(
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


void ItemIconComponent__Clear(ItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x20
  bool v4; // w0
  __int64 v5; // x1
  UISprite_o *backSprite; // x20
  __int64 v7; // x1
  UISprite_o *iconSprite; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20

  if ( (byte_5937AF9 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_22319/*"listframes_shadow"*/);
    byte_5937AF9 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  backSprite = this->fields.backSprite;
  if ( v4 )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
    AtlasManager__SetFaceBaseIcon(backSprite, 0, 0, 0, 0);
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite
      || (UISprite__set_spriteName(iconSprite, 0, 0), (iconSprite = this->fields.frameSprite) == 0)
      || (UISprite__set_spriteName(iconSprite, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0),
          (iconSprite = this->fields.typeSprite) == 0) )
    {
LABEL_45:
      sub_21FFECC(iconSprite, v7);
    }
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0, 0) )
    {
      iconSprite = this->fields.backSprite;
      if ( !iconSprite )
        goto LABEL_45;
      iconSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0);
      if ( !iconSprite )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, 0, 0);
    }
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_45;
  }
  UISprite__set_spriteName(iconSprite, 0, 0);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    iconSprite = this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    iconSprite = this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    iconSprite = (UISprite_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)iconSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    iconSprite = (UISprite_o *)this->fields.svtJoinIcon;
    if ( !iconSprite )
      goto LABEL_45;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)iconSprite, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    iconSprite = this->fields.materialTdSprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0, 0);
  }
}


void ItemIconComponent__CloseCommandCodeDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_5937B18 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937B18 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, this->fields.detailCloseCallBack, 0);
}


void ItemIconComponent__CloseItemLinkInfoDetailDialog(
        ItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5937B1F & 1) == 0 )
  {
    sub_21FFC50(&Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937B1F = 1;
  }
  v3 = Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__;
  if ( (*((_BYTE *)Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0, 0);
}


void ItemIconComponent__OnClickItem(
        ItemIconComponent_o *this,
        UIScrollBar_o *bar,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x21
  CommonUI_o *v17; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  float value; // s0
  float v23; // s0
  Il2CppObject *v24; // x22
  Il2CppObject *v25; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x23
  Il2CppObject *v27; // x22
  int32_t svtId; // w21
  ServantStatusDialog_EndDelegate_o *v29; // x23
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937B15 & 1) == 0 )
  {
    sub_21FFC50(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_ItemIconComponent_CloseCommandCodeDetail__);
    sub_21FFC50(&Method_ItemIconComponent_OnClickItem__);
    sub_21FFC50(&Method_ItemIconComponent_closeItemDetail__);
    sub_21FFC50(&Method_ItemIconComponent_closeSvtDetail__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B15 = 1;
  }
  v7 = Method_ItemIconComponent_OnClickItem__;
  entity = 0;
  if ( (*((_BYTE *)Method_ItemIconComponent_OnClickItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_21FFC68(Method_ItemIconComponent_OnClickItem__);
  v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  this->fields.detailCloseCallBack = closeCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.detailCloseCallBack,
    (int32_t)closeCallBack,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( this->fields.itemEnt )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v17 = (CommonUI_o *)Instance;
    v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_21FFEBC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      (intptr_t)Method_ItemIconComponent_closeItemDetail__,
      0);
    if ( !v17 )
      goto LABEL_24;
    CommonUI__OpenItemDetailDialog(v17, itemEnt, v18, 50, 0);
  }
  else if ( this->fields.commandCodeId )
  {
    MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_24;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !MasterData_object )
      goto LABEL_24;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           &entity,
           this->fields.commandCodeId,
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
    {
      v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = entity;
      v26 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v26,
        (Il2CppObject *)this,
        Method_ItemIconComponent_CloseCommandCodeDetail__,
        0);
      if ( !v24 )
        goto LABEL_24;
      CommonUI__OpenServantEquipStatusDialog_37307760((CommonUI_o *)v24, 25, (CommandCodeEntity_o *)v25, 0, v26, 0, 0);
    }
  }
  else if ( this->fields.svtId )
  {
    v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    svtId = this->fields.svtId;
    v29 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v29, (Il2CppObject *)this, Method_ItemIconComponent_closeSvtDetail__, 0);
    if ( !v27 )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_37305112((CommonUI_o *)v27, 7, svtId, v29, 0);
  }
  else
  {
    ActionExtensions__Call(closeCallBack, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bar, 0, 0);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( bar )
    {
      value = UIProgressBar__get_value((UIProgressBar_o *)bar, 0);
      UIProgressBar__set_value((UIProgressBar_o *)bar, value + 0.00001, 0);
      v23 = UIProgressBar__get_value((UIProgressBar_o *)bar, 0);
      UIProgressBar__set_value((UIProgressBar_o *)bar, v23 + -0.00001, 0);
      return;
    }
LABEL_24:
    sub_21FFECC(MasterData_object, v20);
  }
}


void ItemIconComponent__OnClickItemLinkDetailButton(ItemIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  UserItemData_o *UserItemData; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v9; // x22

  if ( (byte_5937B1E & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__);
    sub_21FFC50(&Method_ItemIconComponent_OnClickItemLinkDetailButton__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937B1E = 1;
  }
  if ( this->fields.itemEnt )
  {
    v3 = Method_ItemIconComponent_OnClickItemLinkDetailButton__;
    if ( (*((_BYTE *)Method_ItemIconComponent_OnClickItemLinkDetailButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ItemIconComponent_OnClickItemLinkDetailButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v6);
    v7 = (CommonUI_o *)Instance;
    UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, this->fields.itemEnt, 0);
    v9 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_21FFEBC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__,
      0);
    CommonUI__OpenItemLinkInfoDetailWindow_37398352(v7, UserItemData, v9, 0);
  }
}


void ItemIconComponent__SetAlpha(ItemIconComponent_o *this, float alpha, const MethodInfo *method)
{
  UnityEngine_Object_o *backSprite; // x20
  __int64 v6; // x1
  void *v7; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20

  if ( (byte_5937B0D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B0D = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    v7 = this->fields.backSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      alpha);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v7 = this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      alpha);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    v7 = this->fields.frameSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      alpha);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    v7 = this->fields.typeSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      alpha);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    v7 = this->fields.classSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      alpha);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v7 = this->fields.raritySprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      alpha);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    v7 = this->fields.counterLabel;
    if ( v7 )
    {
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
        v7,
        *(_QWORD *)(*(_QWORD *)v7 + 448LL),
        alpha);
      return;
    }
LABEL_39:
    sub_21FFECC(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetCoinImage(
        ItemIconComponent_o *this,
        int32_t coinImageId,
        int32_t bgImageId,
        int32_t type,
        int64_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x25
  bool v14; // w0
  __int64 v15; // x1
  UISprite_o *backSprite; // x25
  Il2CppObject *v17; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v19; // x1
  __int64 v20; // x1
  UISprite_o *iconSprite; // x25
  struct UISprite_o *v22; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x1
  UnityEngine_Object_o *v25; // x24
  __int64 v26; // x1
  UISprite_o *v27; // x24
  UnityEngine_Object_o *v28; // x23
  UnityEngine_Object_o *classSprite; // x23
  UnityEngine_Object_o *raritySprite; // x23
  UnityEngine_Object_o *counterLabel; // x23
  __int64 v32; // x1
  Il2CppObject *v33; // x22
  UILabel_o *v34; // x21
  Il2CppObject *v35; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int64_t v38; // [xsp+8h] [xbp-68h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_5937B06 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21306/*"img_common_frame01"*/);
    sub_21FFC50(&StringLiteral_22321/*"listframes{0}_bg"*/);
    sub_21FFC50(&StringLiteral_26553/*"{0}{1:#,0}"*/);
    sub_21FFC50(&StringLiteral_22324/*"listframes{0}_txt_item"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_22319/*"listframes_shadow"*/);
    byte_5937B06 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&coinImageId);
  v14 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  backSprite = this->fields.backSprite;
  if ( v14 )
  {
    LODWORD(v38) = bgImageId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v38);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_22321/*"listframes{0}_bg"*/, v17, 0);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0);
      iconSprite = this->fields.iconSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
      AtlasManager__SetCoin(iconSprite, coinImageId, 0);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
        v22 = this->fields.typeSprite;
        v39 = bgImageId;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v39);
        frameSprite = System_String__Format((System_String_o *)StringLiteral_22324/*"listframes{0}_txt_item"*/, v23, 0);
        if ( v22 )
        {
          v24 = frameSprite;
          frameSprite = (System_String_o *)v22;
LABEL_29:
          UISprite__set_spriteName((UISprite_o *)frameSprite, v24, 0);
          goto LABEL_30;
        }
      }
    }
LABEL_62:
    sub_21FFECC(frameSprite, v19);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_62;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0);
    if ( !frameSprite )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0);
  }
  v25 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
  {
    v27 = this->fields.iconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
    AtlasManager__SetCoin(v27, coinImageId, 0);
  }
  v28 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_62;
    v24 = (System_String_o *)StringLiteral_21306/*"img_common_frame01"*/;
    goto LABEL_29;
  }
LABEL_30:
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_62;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_62;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  frameSprite = (System_String_o *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)frameSprite & 1) != 0 )
  {
    if ( useCountableString )
    {
      frameSprite = ItemType__GetCountableString(type, 0);
      v33 = (Il2CppObject *)frameSprite;
    }
    else
    {
      v33 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    v34 = this->fields.counterLabel;
    if ( count < 0 )
    {
      v19 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v34 )
        goto LABEL_62;
    }
    else
    {
      v38 = count;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v38);
      frameSprite = System_String__Format_75484576((System_String_o *)StringLiteral_26553/*"{0}{1:#,0}"*/, v33, v35, 0);
      v19 = frameSprite;
      if ( !v34 )
        goto LABEL_62;
    }
    UILabel__set_text(v34, v19, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_62;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_62;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
}


void ItemIconComponent__SetColor(ItemIconComponent_o *this, UnityEngine_Color_o col, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *backSprite; // x20
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_5937B0C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B0C = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.backSprite;
    if ( !v10 )
      goto LABEL_39;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v10, v17, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_39;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v10 )
      goto LABEL_39;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.typeSprite;
    if ( !v10 )
      goto LABEL_39;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v10, v20, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.classSprite;
    if ( !v10 )
      goto LABEL_39;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v10, v21, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.raritySprite;
    if ( !v10 )
      goto LABEL_39;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v10, v22, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.counterLabel;
    if ( v10 )
    {
      v23.fields.b = b;
      v23.fields.a = a;
      v23.fields.r = r;
      v23.fields.g = g;
      UIWidget__set_color(v10, v23, 0);
      return;
    }
LABEL_39:
    sub_21FFECC(v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetCombineItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  bool v10; // w22
  int32_t ImageId; // w1
  const MethodInfo *v12; // x5

  if ( (byte_5937AFB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_5937AFB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&itemId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          itemId,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Master_object, v8);
  }
  v9 = Master_object;
  v10 = LODWORD(Master_object[3].klass) == 29;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
  ItemIconComponent__SetCombineItemImage(this, ImageId, HIDWORD(v9[2].monitor), count, v10, v12);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetCombineItemImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t count,
        bool isCoin,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backSprite; // x24
  System_String_o *v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x24
  __int64 v15; // x1
  UISprite_o *v16; // x24
  int v17; // w8
  UnityEngine_Object_o *frameSprite; // x22
  __int64 v19; // x1
  UISprite_o *v20; // x22
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *typeSprite; // x22
  __int64 v23; // x1
  UISprite_o *v24; // x22
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *counterLabel; // x21
  __int64 v29; // x1
  UILabel_o *v30; // x21
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v32; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  v34 = count;
  if ( (byte_5937B07 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_22321/*"listframes{0}_bg"*/);
    sub_21FFC50(&StringLiteral_22324/*"listframes{0}_txt_item"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937B07 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&imageId);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v16 = this->fields.iconSprite;
    v17 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
    if ( isCoin )
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
      AtlasManager__SetCoin(v16, imageId, 0);
    }
    else
    {
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
      AtlasManager__SetItem(v16, imageId, 0);
    }
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    v20 = this->fields.frameSprite;
    v33 = bgImageId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v33);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_22321/*"listframes{0}_bg"*/, v21, 0);
    if ( !v20 )
      goto LABEL_56;
    UISprite__set_spriteName(v20, (System_String_o *)gameObject, 0);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    v24 = this->fields.typeSprite;
    v32 = bgImageId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_22324/*"listframes{0}_txt_item"*/, v25, 0);
    if ( !v24 )
      goto LABEL_56;
    UISprite__set_spriteName(v24, (System_String_o *)gameObject, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v30 = this->fields.counterLabel;
    if ( count < 0 )
    {
      v12 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v30 )
        goto LABEL_56;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v34, 0);
      if ( gameObject )
        v12 = (System_String_o *)gameObject;
      else
        v12 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v30 )
LABEL_56:
        sub_21FFECC(gameObject, v12);
    }
    UILabel__set_text(v30, v12, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
}


void ItemIconComponent__SetCommandCodeImage(
        ItemIconComponent_o *this,
        int32_t commandCodeId,
        int64_t count,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v8; // x1
  int32_t v9; // w21
  UnityEngine_Object_o *typeSprite; // x23
  bool v11; // w0
  __int64 v12; // x1
  UISprite_o *backSprite; // x23
  UnityEngine_Object_o *iconSprite; // x23
  __int64 v15; // x1
  UISprite_o *v16; // x23
  UnityEngine_Object_o *frameSprite; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  __int64 v20; // x1
  UISprite_o *v21; // x22
  UnityEngine_Object_o *counterLabel; // x21
  __int64 v23; // x1
  UILabel_o *v24; // x21
  System_String_o *CrossOperatorString; // x20
  System_String_o *v26; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int64_t v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = count;
  if ( (byte_5937B0A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937B0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     commandCodeId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_63:
    sub_21FFECC(Instance, v8);
  }
  v9 = *((_DWORD *)Instance + 16);
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v11 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  backSprite = this->fields.backSprite;
  if ( v11 )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetCommandCodeBaseIcon(backSprite, v9, 0);
    AtlasManager__SetCommandCodeImage(this->fields.iconSprite, commandCodeId, 0);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
    Instance = this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_63;
    goto LABEL_30;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0, 0) )
  {
    Instance = this->fields.backSprite;
    if ( !Instance )
      goto LABEL_63;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v16 = this->fields.iconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    AtlasManager__SetCommandCodeImage(v16, commandCodeId, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_63;
LABEL_30:
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    Instance = this->fields.classSprite;
    if ( !Instance )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v21 = this->fields.raritySprite;
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v20);
    Instance = Rarity__getIcon(v9, 0);
    if ( !v21 )
      goto LABEL_63;
    UISprite__set_spriteName(v21, (System_String_o *)Instance, 0);
    Instance = this->fields.raritySprite;
    if ( !Instance )
      goto LABEL_63;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v24 = this->fields.counterLabel;
    if ( count <= 1 )
    {
      v8 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0);
      v26 = System_Int64__ToString((int64_t)&v29, 0);
      Instance = System_String__Concat_75438412(CrossOperatorString, v26, 0);
      v8 = (System_String_o *)Instance;
    }
    if ( !v24 )
      goto LABEL_63;
    UILabel__set_text(v24, v8, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_63;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    Instance = this->fields.materialTdSprite;
    if ( !Instance )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetCondensedScale(ItemIconComponent_o *this, int32_t maxWidth, const MethodInfo *method)
{
  UILabel_o *counterLabel; // x0

  counterLabel = this->fields.counterLabel;
  if ( !counterLabel )
    sub_21FFECC(0, *(_QWORD *)&maxWidth);
  UILabel__SetCondensedScale(counterLabel, maxWidth, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetCountLabelActivation(ItemIconComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *counterLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5937B19 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B19 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetDepth(ItemIconComponent_o *this, int32_t depth, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x21
  UIWidget_o *iconSprite; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *backSprite; // x21
  __int64 v9; // x1
  UnityEngine_Object_o *classSprite; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *counterLabel; // x21

  if ( (byte_5937B0B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B0B = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
  iconSprite = (UIWidget_o *)UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( ((unsigned __int8)iconSprite & 1) != 0 )
  {
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth((UIWidget_o *)this->fields.backSprite, depth, 0);
    iconSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_52;
    UIWidget__set_depth(iconSprite, depth + 1, 0);
    iconSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !iconSprite )
      goto LABEL_52;
    UIWidget__set_depth(iconSprite, depth + 2, 0);
    classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
    {
      iconSprite = (UIWidget_o *)this->fields.classSprite;
      if ( !iconSprite )
        goto LABEL_52;
      UIWidget__set_depth(iconSprite, depth + 3, 0);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
    {
      iconSprite = (UIWidget_o *)this->fields.raritySprite;
      if ( !iconSprite )
        goto LABEL_52;
      UIWidget__set_depth(iconSprite, depth + 3, 0);
    }
    iconSprite = (UIWidget_o *)this->fields.typeSprite;
    if ( !iconSprite )
LABEL_52:
      sub_21FFECC(iconSprite, v7);
    goto LABEL_45;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !iconSprite )
      goto LABEL_52;
    UIWidget__set_depth(iconSprite, depth, 0);
  }
  v12 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_52;
    UIWidget__set_depth(iconSprite, depth + 1, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !iconSprite )
      goto LABEL_52;
    UIWidget__set_depth(iconSprite, depth + 2, 0);
  }
  v14 = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_52;
    UIWidget__set_depth(iconSprite, depth + 3, 0);
  }
  v15 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_52;
LABEL_45:
    UIWidget__set_depth(iconSprite, depth + 3, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_52;
    UIWidget__set_depth(iconSprite, depth + 4, 0);
  }
}


// attributes: thunk
void ItemIconComponent__SetEquipItem(ItemIconComponent_o *this, int32_t equipItemId, const MethodInfo *method)
{
  ItemIconComponent__SetEquipItemImage(this, equipItemId, method);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetEquipItemImage(ItemIconComponent_o *this, int32_t equipImageId, const MethodInfo *method)
{
  UnityEngine_Object_o *backSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x1
  UISprite_o *v9; // x21
  ItemIconComponent_c *v10; // x0
  Il2CppObject *v11; // x0
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *iconSprite; // x21
  __int64 v14; // x1
  UISprite_o *v15; // x21
  UnityEngine_Object_o *typeSprite; // x20
  __int64 v17; // x1
  UISprite_o *v18; // x20
  ItemIconComponent_c *v19; // x0
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t EQUIP_ITEM_RARITY; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937B08 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&ItemIconComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_22325/*"listframes{0}_txt_mysticcode"*/);
    sub_21FFC50(&StringLiteral_22321/*"listframes{0}_bg"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937B08 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&equipImageId);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v9 = this->fields.backSprite;
    v10 = ItemIconComponent_TypeInfo;
    if ( !*(&ItemIconComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, v8);
      v10 = ItemIconComponent_TypeInfo;
    }
    EQUIP_ITEM_RARITY = v10->static_fields->EQUIP_ITEM_RARITY;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &EQUIP_ITEM_RARITY);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_22321/*"listframes{0}_bg"*/, v11, 0);
    if ( !v9 )
      goto LABEL_56;
    UISprite__set_spriteName(v9, (System_String_o *)gameObject, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v15 = this->fields.iconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
    AtlasManager__SetEquipItem(v15, equipImageId, 0);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    v18 = this->fields.typeSprite;
    v19 = ItemIconComponent_TypeInfo;
    if ( !*(&ItemIconComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, v17);
      v19 = ItemIconComponent_TypeInfo;
    }
    v26 = v19->static_fields->EQUIP_ITEM_RARITY;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v26);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_22325/*"listframes{0}_txt_mysticcode"*/, v20, 0);
    if ( !v18 )
      goto LABEL_56;
    UISprite__set_spriteName(v18, (System_String_o *)gameObject, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.svtJoinIcon;
    if ( !gameObject )
      goto LABEL_56;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( gameObject )
    {
      UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      return;
    }
LABEL_56:
    sub_21FFECC(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetEventPointBuffImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x22
  bool v8; // w0
  __int64 v9; // x1
  UISprite_o *backSprite; // x22
  Il2CppObject *v11; // x0
  System_String_o *frameSprite; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  UISprite_o *iconSprite; // x22
  struct UISprite_o *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_Object_o *v19; // x21
  __int64 v20; // x1
  UISprite_o *v21; // x21
  UnityEngine_Object_o *v22; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  int32_t v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5937B02 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21306/*"img_common_frame01"*/);
    sub_21FFC50(&StringLiteral_22321/*"listframes{0}_bg"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_22323/*"listframes{0}_txt_eventbonus"*/);
    sub_21FFC50(&StringLiteral_22319/*"listframes_shadow"*/);
    byte_5937B02 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&imageId);
  v8 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  backSprite = this->fields.backSprite;
  if ( v8 )
  {
    v27 = bgImageId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v27);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_22321/*"listframes{0}_bg"*/, v11, 0);
    if ( !backSprite )
      goto LABEL_46;
    UISprite__set_spriteName(backSprite, frameSprite, 0);
    iconSprite = this->fields.iconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
    AtlasManager__SetItem(iconSprite, imageId, 0);
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
    v16 = this->fields.typeSprite;
    v26 = bgImageId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v26);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_22323/*"listframes{0}_txt_eventbonus"*/, v17, 0);
    if ( !v16 )
      goto LABEL_46;
    v18 = frameSprite;
    frameSprite = (System_String_o *)v16;
    goto LABEL_29;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_46;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0);
    if ( !frameSprite )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0);
  }
  v19 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    v21 = this->fields.iconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
    AtlasManager__SetItem(v21, imageId, 0);
  }
  v22 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_46;
    v18 = (System_String_o *)StringLiteral_21306/*"img_common_frame01"*/;
LABEL_29:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v18, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.counterLabel;
    if ( frameSprite )
    {
      UILabel__set_text((UILabel_o *)frameSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_46:
    sub_21FFECC(frameSprite, v13);
  }
}


void ItemIconComponent__SetFaceImage(
        ItemIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int64_t count,
        int32_t giftType,
        bool isQuestBoard,
        bool useGroupIcon,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v15; // x1
  ServantEntity_o *v16; // x22
  int32_t v17; // w24
  int32_t FrameType_49644120; // w26
  int32_t ImageLimitCount; // w28
  __int64 v20; // x1
  Il2CppObject *Component_object; // x29
  ServantEntity_TransformInfo_o *TransformInfo; // x0
  bool v23; // w27
  UnityEngine_Object_o *typeSprite; // x29
  bool v25; // w0
  __int64 v26; // x1
  UISprite_o *backSprite; // x29
  __int64 v28; // x1
  UnityEngine_Object_o *iconSprite; // x29
  __int64 v30; // x1
  UISprite_o *v31; // x29
  UnityEngine_Object_o *frameSprite; // x25
  UISprite_o *v33; // x25
  UnityEngine_Object_o *classSprite; // x25
  __int64 v35; // x1
  UISprite_o *v36; // x25
  UnityEngine_Object_o *raritySprite; // x24
  __int64 v38; // x1
  UISprite_o *v39; // x24
  int32_t v40; // w25
  UnityEngine_Object_o *counterLabel; // x24
  __int64 v42; // x1
  UILabel_o *v43; // x24
  System_String_o *CrossOperatorString; // x23
  System_String_o *v45; // x0
  UnityEngine_Object_o *svtJoinIcon; // x23
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v48; // x20
  System_String_o **v49; // x8
  System_String_o *v50; // x19
  int32_t rarity; // [xsp+4h] [xbp-6Ch] BYREF
  int64_t v53; // [xsp+8h] [xbp-68h] BYREF

  v53 = count;
  if ( (byte_5937B09 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24272/*"ribbon_noblephantasmup_01"*/);
    sub_21FFC50(&StringLiteral_24273/*"ribbon_noblephantasmup_02"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_22319/*"listframes_shadow"*/);
    sub_21FFC50(&StringLiteral_21129/*"icon_eventjoin_01"*/);
    byte_5937B09 = 1;
  }
  rarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_94;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               svtId,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_94;
  v16 = (ServantEntity_o *)Instance;
  v17 = *((_DWORD *)Instance + 20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_94;
  FrameType_49644120 = ServantExceedMaster__GetFrameType_49644120(
                         (ServantExceedMaster_o *)Instance,
                         &rarity,
                         svtId,
                         limitCount,
                         0,
                         0);
  if ( svtId < 1 )
  {
    ImageLimitCount = 0;
  }
  else
  {
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v15);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  }
  Instance = this->fields.iconSprite;
  if ( !Instance )
    goto LABEL_94;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)Instance,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_94;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0);
  }
  v23 = useGroupIcon
     && (TransformInfo = ServantEntity__GetTransformInfo(v16, 0)) != 0
     && TransformInfo->fields.saveTransform > 0;
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v25 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  backSprite = this->fields.backSprite;
  if ( v25 )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
    AtlasManager__SetFaceBaseIcon(backSprite, FrameType_49644120, v17, 0, 0);
    AtlasManager__SetFaceImage(this->fields.iconSprite, svtId, ImageLimitCount, 1, 0, v23, 0);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_94;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
    AtlasManager__SetServantType(this->fields.typeSprite, v16->fields.type, FrameType_49644120, v17, 0, 0);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0, 0) )
    {
      Instance = this->fields.backSprite;
      if ( !Instance )
        goto LABEL_94;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
    {
      v31 = this->fields.iconSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
      AtlasManager__SetFaceImage(v31, svtId, ImageLimitCount, 1, 0, v23, 0);
    }
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
    {
      v33 = this->fields.frameSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
      AtlasManager__SetFaceFrameIcon(v33, 0);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    Instance = (void *)ServantEntity__get_IsServantEquip(v16, 0);
    v36 = this->fields.classSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_94;
      UISprite__set_spriteName(this->fields.classSprite, 0, 0);
    }
    else
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
      AtlasManager__SetClass(v36, v17, FrameType_49644120, 0, 0);
    }
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v39 = this->fields.raritySprite;
    v40 = rarity;
    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v38);
    Instance = Rarity__getIcon(v40, 0);
    if ( !v39 )
      goto LABEL_94;
    UISprite__set_spriteName(v39, (System_String_o *)Instance, 0);
    Instance = this->fields.raritySprite;
    if ( !Instance )
      goto LABEL_94;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v43 = this->fields.counterLabel;
    if ( count <= 1 )
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0);
      v45 = System_Int64__ToString((int64_t)&v53, 0);
      Instance = System_String__Concat_75438412(CrossOperatorString, v45, 0);
      v15 = (System_String_o *)Instance;
    }
    if ( !v43 )
      goto LABEL_94;
    UILabel__set_text(v43, v15, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( giftType == 6 )
    {
      if ( !Instance )
        goto LABEL_94;
      ShiningIconComponent__Set_48030064((ShiningIconComponent_o *)Instance, (System_String_o *)StringLiteral_21129/*"icon_eventjoin_01"*/, 0);
    }
    else
    {
      if ( !Instance )
        goto LABEL_94;
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0);
    }
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    Instance = (void *)ServantEntity__get_IsServantMaterialTd(v16, 0);
    v48 = this->fields.materialTdSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( isQuestBoard )
        v49 = (System_String_o **)&StringLiteral_24273/*"ribbon_noblephantasmup_02"*/;
      else
        v49 = (System_String_o **)&StringLiteral_24272/*"ribbon_noblephantasmup_01"*/;
      v50 = *v49;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
      AtlasManager__SetEventSprite(v48, v50, 0);
      return;
    }
    if ( v48 )
    {
      UISprite__set_spriteName(v48, 0, 0);
      return;
    }
LABEL_94:
    sub_21FFECC(Instance, v15);
  }
}


void ItemIconComponent__SetGift(
        ItemIconComponent_o *this,
        GiftEntity_o *giftEntity,
        int32_t count,
        bool isQuestBoard,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( !giftEntity )
    sub_21FFECC(this, 0);
  ItemIconComponent__SetGift_47936840(
    this,
    giftEntity->fields.type,
    giftEntity->fields.objectId,
    count,
    isQuestBoard,
    v5);
}


void ItemIconComponent__SetGiftDesignSize(
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
  UILabel_o *counterLabel; // x22
  int v14; // w8
  int32_t *p_DEFAULT_FONT_SIZE; // x8
  int64_t counta; // [xsp+Ch] [xbp-34h] BYREF

  LODWORD(counta) = count;
  if ( (byte_5937AFD & 1) == 0 )
  {
    sub_21FFC50(&ItemIconComponent_TypeInfo);
    byte_5937AFD = 1;
  }
  if ( count >= 1 )
  {
    v10 = System_Int32__ToString((int32_t)&counta, 0);
    if ( v10 )
    {
      v12 = v10[4];
      v10 = ItemIconComponent_TypeInfo;
      if ( !*(&ItemIconComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, v11);
        v10 = ItemIconComponent_TypeInfo;
      }
      counterLabel = this->fields.counterLabel;
      v14 = v10[57];
      if ( v12 <= **((_DWORD **)v10 + 23) )
      {
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(v10, v11);
        if ( counterLabel )
        {
          p_DEFAULT_FONT_SIZE = &ItemIconComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE;
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(v10, v11);
        if ( counterLabel )
        {
          p_DEFAULT_FONT_SIZE = &ItemIconComponent_TypeInfo->static_fields->OVER_FIVE_LENGTH;
LABEL_16:
          UILabel__set_fontSize(counterLabel, *p_DEFAULT_FONT_SIZE, 0);
          goto LABEL_17;
        }
      }
    }
    sub_21FFECC(v10, v11);
  }
LABEL_17:
  ItemIconComponent__SetGift_47936840(this, giftType, objectId, (int)counta, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetGift_47936840(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        int64_t count,
        bool isQuestBoard,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  const MethodInfo *v7; // x7
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x20
  const MethodInfo *v16; // x2
  int saveDataMapList_high; // w8
  void *monitor; // x20
  Il2CppClass *klass; // x21
  ItemIconComponent_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int64_t v24; // x4
  ItemEntity_o *v25; // x21
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x4
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_5937AFC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937AFC = 1;
  }
  if ( giftType <= 7 )
  {
    if ( giftType > 5 || giftType == 1 )
    {
      if ( objectId >= 1 )
      {
        ItemIconComponent__SetFaceImage(this, objectId, 0, count, giftType, isQuestBoard, 1, v7);
        this->fields.svtId = objectId;
        return;
      }
      v20 = this;
      v21 = 4;
      goto LABEL_40;
    }
    if ( giftType != 2 )
    {
      if ( giftType == 5 && objectId >= 1 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       objectId,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
            Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
            if ( Instance )
            {
              saveDataMapList_high = HIDWORD(Instance->fields.saveDataMapList);
              if ( saveDataMapList_high == 2 )
              {
                if ( Entity )
                {
                  klass = Entity[5].klass;
                  monitor = Entity[5].monitor;
                  goto LABEL_46;
                }
              }
              else
              {
                if ( saveDataMapList_high != 1 )
                {
                  v34 = 0;
LABEL_50:
                  ItemIconComponent__SetEquipItemImage(this, v34, v16);
                  return;
                }
                if ( Entity )
                {
                  klass = Entity[4].klass;
                  monitor = Entity[4].monitor;
LABEL_46:
                  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
                  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
                  *(_QWORD *)&v35.fields.fakeValue = monitor;
                  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v35, 0);
                  goto LABEL_50;
                }
              }
            }
          }
        }
LABEL_51:
        sub_21FFECC(Instance, v14);
      }
      goto LABEL_39;
    }
    if ( objectId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_51;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_51;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    objectId,
                                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_51;
      v25 = (ItemEntity_o *)Instance;
      if ( ItemEntity__GetImageId((ItemEntity_o *)Instance, 0) < 1 )
      {
        ItemIconComponent__SetPresentItem(this, v25, count, v26);
      }
      else
      {
        ItemIconComponent__SetItem_47933276(this, v25, count, 1, v27);
        this->fields.itemEnt = v25;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt,
          (int32_t)v25,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      return;
    }
LABEL_39:
    v20 = this;
    v21 = 0;
LABEL_40:
    v22 = 0;
    v23 = -1;
    v24 = count;
    goto LABEL_41;
  }
  if ( giftType <= 10 )
  {
    if ( giftType == 8 )
    {
      if ( objectId < 1 )
        goto LABEL_39;
      v20 = this;
      v21 = objectId;
      v22 = 0;
      v23 = -1;
    }
    else
    {
      if ( giftType != 9 )
        goto LABEL_39;
      v20 = this;
      v21 = 23;
      v22 = 3;
      v23 = 23;
    }
    v24 = -1;
LABEL_41:
    ItemIconComponent__SetItemImage_47934504(v20, v21, v22, v23, v24, 1, v6);
    return;
  }
  if ( giftType != 11 )
  {
    if ( giftType == 14 )
    {
      if ( objectId >= 1 )
        ItemIconComponent__SetItemImage_47940588(this, objectId, 0, -1, (const MethodInfo *)isQuestBoard);
      return;
    }
    goto LABEL_39;
  }
  if ( objectId < 1 )
  {
    v20 = this;
    v21 = 8014;
    goto LABEL_40;
  }
  ItemIconComponent__SetCommandCodeImage(this, objectId, count, (const MethodInfo *)count);
  this->fields.commandCodeId = objectId;
}


void ItemIconComponent__SetItem(
        ItemIconComponent_o *this,
        int32_t itemId,
        int32_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x4

  if ( (byte_5937AFA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937AFA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             itemId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  ItemIconComponent__SetItem_47933276(this, (ItemEntity_o *)Entity, count, useCountableString, v12);
}


void ItemIconComponent__SetItemImage(ItemIconComponent_o *this, int32_t imageId, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ItemIconComponent__SetItemImage_47934504(this, imageId, 0, -1, -1, 1, v3);
}


void ItemIconComponent__SetItemImageByName(
        ItemIconComponent_o *this,
        System_String_o *spriteNamet,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x21
  bool v6; // w0
  __int64 v7; // x1
  UISprite_o *iconSprite; // x21
  AtlasManager_c *v9; // x0
  const MethodInfo *v10; // x5

  if ( (byte_5937B04 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B04 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteNamet);
  v6 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  iconSprite = this->fields.iconSprite;
  if ( v6 )
  {
    v9 = AtlasManager_TypeInfo;
LABEL_11:
    if ( !*(&v9->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v9, v7);
    AtlasManager__SetItemByName(iconSprite, spriteNamet, 0);
    goto LABEL_14;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)iconSprite, 0, 0) )
  {
    v9 = AtlasManager_TypeInfo;
    iconSprite = this->fields.iconSprite;
    goto LABEL_11;
  }
LABEL_14:
  ItemIconComponent__SetItemInfo(this, 0, -1, -1, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetItemImage_47934504(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t type,
        int64_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x25
  bool v14; // w0
  __int64 v15; // x1
  UISprite_o *iconSprite; // x25
  AtlasManager_c *v17; // x0
  const MethodInfo *v18; // x5

  if ( (byte_5937B03 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B03 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&imageId);
  v14 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  iconSprite = this->fields.iconSprite;
  if ( v14 )
  {
    v17 = AtlasManager_TypeInfo;
LABEL_11:
    if ( !*(&v17->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v17, v15);
    AtlasManager__SetItem(iconSprite, imageId, 0);
    goto LABEL_14;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)iconSprite, 0, 0) )
  {
    v17 = AtlasManager_TypeInfo;
    iconSprite = this->fields.iconSprite;
    goto LABEL_11;
  }
LABEL_14:
  ItemIconComponent__SetItemInfo(this, bgImageId, type, count, useCountableString, v18);
}


void ItemIconComponent__SetItemImage_47939376(
        ItemIconComponent_o *this,
        int32_t imageId,
        int64_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  ItemIconComponent__SetItemImage_47934504(this, imageId, 0, -1, count, 1, v4);
}


void ItemIconComponent__SetItemImage_47940588(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x6
  int32_t monitor_high; // w2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937B01 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B01 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               objectId,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    monitor_high = 0;
    goto LABEL_9;
  }
  if ( !entity )
LABEL_10:
    sub_21FFECC(Instance, v10);
  monitor_high = HIDWORD(entity[2].monitor);
LABEL_9:
  ItemIconComponent__SetItemImage_47934504(this, imageId, monitor_high, -1, count, 1, v11);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetItemInfo(
        ItemIconComponent_o *this,
        int32_t bgImageId,
        int32_t type,
        int64_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x24
  bool v12; // w0
  __int64 v13; // x1
  UISprite_o *backSprite; // x24
  Il2CppObject *v15; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v17; // x1
  struct UISprite_o *v18; // x24
  Il2CppObject *v19; // x0
  __int64 *v20; // x8
  UnityEngine_Object_o *v21; // x23
  System_String_o *v22; // x1
  UnityEngine_Object_o *classSprite; // x23
  UnityEngine_Object_o *raritySprite; // x23
  UnityEngine_Object_o *counterLabel; // x23
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  UILabel_o *v28; // x21
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int64_t v32; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5937B05 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_22322/*"listframes{0}_txt_costume"*/);
    sub_21FFC50(&StringLiteral_22328/*"listframes{0}_txt_quest"*/);
    sub_21FFC50(&StringLiteral_21306/*"img_common_frame01"*/);
    sub_21FFC50(&StringLiteral_22321/*"listframes{0}_bg"*/);
    sub_21FFC50(&StringLiteral_26553/*"{0}{1:#,0}"*/);
    sub_21FFC50(&StringLiteral_22327/*"listframes{0}_txt_point"*/);
    sub_21FFC50(&StringLiteral_22324/*"listframes{0}_txt_item"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_22326/*"listframes{0}_txt_plain"*/);
    sub_21FFC50(&StringLiteral_22319/*"listframes_shadow"*/);
    byte_5937B05 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&bgImageId);
  v12 = UnityEngine_Object__op_Inequality(typeSprite, 0, 0);
  backSprite = this->fields.backSprite;
  if ( v12 )
  {
    LODWORD(v32) = bgImageId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_22321/*"listframes{0}_bg"*/, v15, 0);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_22319/*"listframes_shadow"*/, 0);
        v18 = this->fields.typeSprite;
        if ( type > 22 )
        {
          if ( type == 23 )
          {
            LODWORD(v32) = bgImageId;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
            v20 = &StringLiteral_22322/*"listframes{0}_txt_costume"*/;
            goto LABEL_29;
          }
          if ( type == 24 )
          {
            LODWORD(v32) = bgImageId;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
            v20 = &StringLiteral_22326/*"listframes{0}_txt_plain"*/;
            goto LABEL_29;
          }
        }
        else
        {
          if ( type == 14 )
          {
            LODWORD(v32) = bgImageId;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
            v20 = &StringLiteral_22327/*"listframes{0}_txt_point"*/;
            goto LABEL_29;
          }
          if ( type == 16 )
          {
            LODWORD(v32) = bgImageId;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
            v20 = &StringLiteral_22328/*"listframes{0}_txt_quest"*/;
LABEL_29:
            frameSprite = System_String__Format((System_String_o *)*v20, v19, 0);
            if ( !v18 )
              goto LABEL_64;
            v22 = frameSprite;
            frameSprite = (System_String_o *)v18;
            goto LABEL_31;
          }
        }
        LODWORD(v32) = bgImageId;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
        v20 = &StringLiteral_22324/*"listframes{0}_txt_item"*/;
        goto LABEL_29;
      }
    }
LABEL_64:
    sub_21FFECC(frameSprite, v17);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)backSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_64;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0);
    if ( !frameSprite )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0);
  }
  v21 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_64;
    v22 = (System_String_o *)StringLiteral_21306/*"img_common_frame01"*/;
LABEL_31:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v22, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_64;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_64;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  frameSprite = (System_String_o *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)frameSprite & 1) != 0 )
  {
    if ( useCountableString )
    {
      frameSprite = ItemType__GetCountableString(type, 0);
      v27 = (Il2CppObject *)frameSprite;
    }
    else
    {
      v27 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    v28 = this->fields.counterLabel;
    if ( count < 0 )
    {
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v28 )
        goto LABEL_64;
    }
    else
    {
      v32 = count;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v32);
      frameSprite = System_String__Format_75484576((System_String_o *)StringLiteral_26553/*"{0}{1:#,0}"*/, v27, v29, 0);
      v17 = frameSprite;
      if ( !v28 )
        goto LABEL_64;
    }
    UILabel__set_text(v28, v17, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_64;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_64;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
}


void ItemIconComponent__SetItem_47933276(
        ItemIconComponent_o *this,
        ItemEntity_o *itemEntity,
        int64_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  int32_t type; // w3
  int32_t ImageId; // w1
  const MethodInfo *v12; // x6

  if ( !itemEntity )
    sub_21FFECC(this, 0);
  type = itemEntity->fields.type;
  if ( type == 29 )
  {
    ImageId = ItemEntity__GetImageId(itemEntity, 0);
    ItemIconComponent__SetCoinImage(
      this,
      ImageId,
      itemEntity->fields.bgImageId,
      itemEntity->fields.type,
      count,
      useCountableString,
      v12);
  }
  else
  {
    ItemIconComponent__SetItemImage_47934504(
      this,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      type,
      count,
      useCountableString,
      v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetNotifyDirectGetCounter(
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
    || (UILabel__SetCondensedScale(counterLabel, condensedWidth, 0, 0), (counterLabel = this->fields.counterLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0),
        LocalScaleX = GameObjectExtensions__GetLocalScaleX(gameObject, 0),
        (counterLabel = this->fields.counterLabel) == 0) )
  {
    sub_21FFECC(counterLabel, *(_QWORD *)&condensedWidth);
  }
  v7 = LocalScaleX;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0);
  GameObjectExtensions__SetLocalScale_42878292(v8, v7 * 3.33, 3.33, 1.0, 0);
}


void ItemIconComponent__SetPointEvent(
        ItemIconComponent_o *this,
        int32_t eventId,
        int32_t iconId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t PointEventImageId; // w0
  const MethodInfo *v10; // x6
  int32_t v11; // w1

  if ( (byte_5937AFF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937AFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v8);
  }
  PointEventImageId = EventMaster__GetPointEventImageId((EventMaster_o *)Instance, eventId, 0);
  if ( PointEventImageId )
    v11 = PointEventImageId;
  else
    v11 = iconId;
  ItemIconComponent__SetItemImage_47934504(this, v11, 0, -1, -1, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetPossession(ItemIconComponent_o *this, int32_t possessionNum, const MethodInfo *method)
{
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v7; // x1
  UILabel_o *Component_object; // x20
  Il2CppObject *v9; // x0
  float PossessionLabelWidth; // s9
  float mWidth; // s8
  UnityEngine_Transform_o *v12; // x21
  float z; // s2
  float x; // s0 OVERLAPPED
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int64_t v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937B12 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_5937B12 = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = GameObjectExtensions__GetChild(possessionRoot, 0, 0);
  if ( !Child )
    goto LABEL_14;
  Child = UnityEngine_Transform__GetChild(Child, 0, 0);
  if ( !Child )
    goto LABEL_14;
  Component_object = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Child,
                                    (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  v17 = this->fields.possessionNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v17);
  Child = (UnityEngine_Transform_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v9, 0);
  if ( !Component_object )
    goto LABEL_14;
  UILabel__set_text(Component_object, (System_String_o *)Child, 0);
  PossessionLabelWidth = this->fields.PossessionLabelWidth;
  mWidth = (float)Component_object->fields.mWidth;
  Child = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
  v12 = Child;
  if ( PossessionLabelWidth >= mWidth )
  {
    if ( !byte_5931945 )
    {
      Child = (UnityEngine_Transform_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( v12 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_13;
    }
LABEL_14:
    sub_21FFECC(Child, v7);
  }
  if ( !Child )
    goto LABEL_14;
  z = 1.0;
  x = this->fields.PossessionLabelWidth / (float)Component_object->fields.mWidth;
  y = 1.0;
LABEL_13:
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&x, 0);
}


void ItemIconComponent__SetPossessionOneLabel(
        ItemIconComponent_o *this,
        int64_t possessionNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Component_o *Child; // x0
  __int64 v7; // x1
  UILabel_o *v8; // x20
  int64_t v9; // x9
  System_String_o *monitor; // x19
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937B1C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_5937B1C = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(possessionRoot, 0, 0);
  if ( !Child
    || (Child = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             Child,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0 )
  {
    sub_21FFECC(Child, v7);
  }
  v8 = (UILabel_o *)Child;
  v9 = this->fields.possessionNum;
  monitor = (System_String_o *)Child[17].monitor;
  v14 = v9;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v14);
  v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v11, 0);
  v13 = System_String__Format(monitor, v12, 0);
  UILabel__set_text(v8, v13, 0);
}


void ItemIconComponent__SetPossessionRoot(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5937B1B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B1B = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(possessionRoot, 0, 0) )
  {
    v7 = this->fields.possessionRoot;
    if ( !v7 )
      sub_21FFECC(0, v6);
    gameObject = UnityEngine_GameObject__get_gameObject(v7, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, y, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetPossessionTitleActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionTitleLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5937B1A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B1A = 1;
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.possessionTitleLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void ItemIconComponent__SetPresentItem(
        ItemIconComponent_o *this,
        ItemEntity_o *itemEnt,
        int64_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  int type; // w3
  int32_t bgImageId; // w2
  int32_t v8; // w1

  if ( !itemEnt )
    sub_21FFECC(this, 0);
  type = itemEnt->fields.type;
  if ( type <= 5 )
  {
    switch ( type )
    {
      case 1:
        bgImageId = itemEnt->fields.bgImageId;
        v8 = 5;
        goto LABEL_15;
      case 2:
        goto LABEL_11;
      case 5:
        bgImageId = itemEnt->fields.bgImageId;
        v8 = 7;
        goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( (unsigned int)(type - 6) >= 6 )
  {
    if ( type == 12 )
    {
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 8;
      goto LABEL_15;
    }
    if ( type == 36 )
    {
LABEL_11:
      bgImageId = itemEnt->fields.bgImageId;
      v8 = 6;
      goto LABEL_15;
    }
LABEL_14:
    v8 = 0;
    bgImageId = 0;
    type = -1;
    goto LABEL_15;
  }
  bgImageId = itemEnt->fields.bgImageId;
  v8 = 9;
LABEL_15:
  ItemIconComponent__SetItemImage_47934504(this, v8, bgImageId, type, count, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetPurchase(
        ItemIconComponent_o *this,
        int32_t purchaseType,
        int32_t targetId,
        int32_t imageId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  const MethodInfo *v6; // x7
  ItemIconComponent_o *v11; // x0
  int32_t v12; // w1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v16; // x4
  UISprite_o *iconSprite; // x19
  ItemIconComponent_c *v18; // x0
  struct ItemIconComponent_StaticFields *static_fields; // x8
  System_String_o *ClassBoardResetItemIcon; // x21
  Il2CppObject *v21; // x1
  System_String_o *v22; // x0
  AssistEntity_o *CurrentLevelEntity; // x0
  __int64 v24; // x1
  AssistEntity_o *v25; // x20
  ItemIconComponent_c *v26; // x0
  int32_t v27; // w10
  System_String_o *ASSIST_SPRITE_NAME; // x20
  __int64 v29; // x1
  System_String_o *v30; // x20
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937AFE & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&ItemIconComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937AFE = 1;
  }
  if ( imageId >= 1 )
    goto LABEL_4;
  if ( purchaseType > 4 )
  {
    if ( purchaseType <= 20 )
    {
      if ( purchaseType != 8 )
      {
        if ( purchaseType == 14 )
        {
          v11 = this;
          v12 = 23;
          goto LABEL_5;
        }
        if ( purchaseType == 19 )
        {
          ItemIconComponent__SetCommandCodeImage(this, targetId, -1, *(const MethodInfo **)&imageId);
          return;
        }
LABEL_4:
        v11 = this;
        v12 = imageId;
LABEL_5:
        ItemIconComponent__SetItemImage_47934504(v11, v12, 0, -1, -1, 1, v5);
        return;
      }
      goto LABEL_18;
    }
    if ( purchaseType == 23 )
    {
      iconSprite = this->fields.iconSprite;
      v18 = ItemIconComponent_TypeInfo;
      if ( !*(&ItemIconComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, *(_QWORD *)&purchaseType);
        v18 = ItemIconComponent_TypeInfo;
      }
      static_fields = v18->static_fields;
      v31 = targetId;
      ClassBoardResetItemIcon = static_fields->ClassBoardResetItemIcon;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v31);
      v22 = ClassBoardResetItemIcon;
LABEL_33:
      v30 = System_String__Format(v22, v21, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
      AtlasManager__SetExclusiveShopIcon(iconSprite, v30, 0);
      return;
    }
    if ( purchaseType != 22 )
    {
      if ( purchaseType != 21 )
        goto LABEL_4;
      goto LABEL_18;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_AssistMaster___);
      if ( Instance )
      {
        CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, targetId, 0);
        if ( !CurrentLevelEntity )
          return;
        v25 = CurrentLevelEntity;
        iconSprite = this->fields.iconSprite;
        v26 = ItemIconComponent_TypeInfo;
        if ( !*(&ItemIconComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo, v24);
          v26 = ItemIconComponent_TypeInfo;
        }
        v27 = v25->fields.imageId;
        ASSIST_SPRITE_NAME = v26->static_fields->ASSIST_SPRITE_NAME;
        v32 = v27;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
        v22 = ASSIST_SPRITE_NAME;
        goto LABEL_33;
      }
    }
LABEL_37:
    sub_21FFECC(Instance, v14);
  }
  if ( purchaseType != 1 )
  {
    if ( purchaseType != 4 )
      goto LABEL_4;
LABEL_18:
    ItemIconComponent__SetFaceImage(this, targetId, 0, -1, 1, 0, 1, v6);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_37;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             targetId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( Entity )
    ItemIconComponent__SetItem_47933276(this, (ItemEntity_o *)Entity, 0, 1, v16);
}


void ItemIconComponent__SetRaidEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t RaidEventImageId; // w1
  const MethodInfo *v8; // x6

  if ( (byte_5937B00 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v6);
  }
  RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventId, 0);
  ItemIconComponent__SetItemImage_47934504(this, RaidEventImageId, 0, -1, -1, 1, v8);
}


void ItemIconComponent__SetTwoTypeCounterLabel(
        ItemIconComponent_o *this,
        System_String_o *counterTitle1,
        System_String_o *counterTitle2,
        int64_t counterNum1,
        int64_t counterNum2,
        const MethodInfo *method)
{
  UnityEngine_Object_o *twoTypeCounterRoot; // x24
  __int64 v12; // x1
  UnityEngine_Object_o *counterTitleLabel1; // x24
  __int64 v14; // x1
  UnityEngine_Object_o *counterTitleLabel2; // x24
  __int64 v16; // x1
  UnityEngine_Object_o *counterLabel1; // x24
  __int64 v18; // x1
  UnityEngine_Object_o *counterLabel2; // x24
  __int64 v20; // x1
  UILabel_o *gameObject; // x0
  UILabel_o *v22; // x22
  Il2CppObject *v23; // x0
  UILabel_o *v24; // x21
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *possessionRoot; // x20
  int64_t v29; // [xsp+0h] [xbp-50h] BYREF
  int64_t v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5937B1D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_5937B1D = 1;
  }
  twoTypeCounterRoot = (UnityEngine_Object_o *)this->fields.twoTypeCounterRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, counterTitle1);
  if ( !UnityEngine_Object__op_Equality(twoTypeCounterRoot, 0, 0) )
  {
    counterTitleLabel1 = (UnityEngine_Object_o *)this->fields.counterTitleLabel1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( !UnityEngine_Object__op_Equality(counterTitleLabel1, 0, 0) )
    {
      counterTitleLabel2 = (UnityEngine_Object_o *)this->fields.counterTitleLabel2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( !UnityEngine_Object__op_Equality(counterTitleLabel2, 0, 0) )
      {
        counterLabel1 = (UnityEngine_Object_o *)this->fields.counterLabel1;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
        if ( !UnityEngine_Object__op_Equality(counterLabel1, 0, 0) )
        {
          counterLabel2 = (UnityEngine_Object_o *)this->fields.counterLabel2;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
          if ( !UnityEngine_Object__op_Equality(counterLabel2, 0, 0) )
          {
            gameObject = this->fields.counterTitleLabel1;
            if ( gameObject )
            {
              UILabel__set_text(gameObject, counterTitle1, 0);
              gameObject = this->fields.counterTitleLabel2;
              if ( gameObject )
              {
                UILabel__set_text(gameObject, counterTitle2, 0);
                v22 = this->fields.counterLabel1;
                v30 = counterNum1;
                v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v30);
                gameObject = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v23, 0);
                if ( v22 )
                {
                  UILabel__set_text(v22, (System_String_o *)gameObject, 0);
                  v24 = this->fields.counterLabel2;
                  v29 = counterNum2;
                  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v29);
                  gameObject = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v25, 0);
                  if ( v24 )
                  {
                    UILabel__set_text(v24, (System_String_o *)gameObject, 0);
                    counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
                    if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
                    {
                      possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
                      if ( UnityEngine_Object__op_Inequality(possessionRoot, 0, 0) )
                      {
                        gameObject = this->fields.counterLabel;
                        if ( !gameObject )
                          goto LABEL_35;
                        gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)gameObject,
                                                    0);
                        if ( !gameObject )
                          goto LABEL_35;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                        gameObject = (UILabel_o *)this->fields.possessionRoot;
                        if ( !gameObject )
                          goto LABEL_35;
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                      }
                    }
                    gameObject = (UILabel_o *)this->fields.twoTypeCounterRoot;
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                      return;
                    }
                  }
                }
              }
            }
LABEL_35:
            sub_21FFECC(gameObject, v20);
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__ShowPossession(ItemIconComponent_o *this, bool showPossession, const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  float v8; // s0 OVERLAPPED
  float v9; // s3
  float v10; // s1
  float v11; // s2

  if ( (byte_5937B11 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B11 = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, showPossession);
  if ( !UnityEngine_Object__op_Equality(possessionRoot, 0, 0) )
  {
    if ( this->fields.possessionNum )
    {
      v7 = this->fields.possessionRoot;
      if ( !v7 )
        sub_21FFECC(0, v6);
      UnityEngine_GameObject__SetActive(v7, showPossession, 0);
    }
    v8 = 1.0;
    v9 = 1.0;
    if ( showPossession )
      v8 = 0.31373;
    v10 = v8;
    v11 = v8;
    ItemIconComponent__SetColor(this, *(UnityEngine_Color_o *)&v8, v6);
  }
}


void ItemIconComponent__closeItemDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5937B16 & 1) == 0 )
  {
    sub_21FFC50(&Method_ItemIconComponent_closeItemDetail__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937B16 = 1;
  }
  v4 = Method_ItemIconComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_ItemIconComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_ItemIconComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
  ActionExtensions__Call(this->fields.detailCloseCallBack, 0);
}


void ItemIconComponent__closeSvtDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_5937B17 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937B17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, this->fields.detailCloseCallBack, 0);
}


int32_t ItemIconComponent__getUserItemNum(
        ItemIconComponent_o *this,
        int64_t userId,
        int32_t objectId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937B14 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937B14 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, userId, objectId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_9:
    sub_21FFECC(Instance, v7);
  }
  return 0;
}


UISprite_o *ItemIconComponent__get_IconSprite(ItemIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.iconSprite;
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__setFrameSprite(
        ItemIconComponent_o *this,
        bool isSetActive,
        System_String_o *frameName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *frameSprite; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Component_o *v12; // x8
  UnityEngine_Transform_o *v13; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937B10 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B10 = 1;
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetActive);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( isSetActive )
    {
      if ( !gameObject )
        goto LABEL_22;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
      if ( !gameObject )
        goto LABEL_22;
      UISprite__set_spriteName((UISprite_o *)gameObject, frameName, 0);
      iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          v12 = (UnityEngine_Component_o *)this->fields.iconSprite;
          if ( v12 )
          {
            v13 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v12, 0);
            if ( gameObject )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              if ( v13 )
              {
                UnityEngine_Transform__set_localPosition(v13, localPosition, 0);
                return;
              }
            }
          }
        }
LABEL_22:
        sub_21FFECC(gameObject, v8);
      }
    }
    else
    {
      if ( !gameObject )
        goto LABEL_22;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
  }
}


void ItemIconComponent__setLocalPositionIconSprite(ItemIconComponent_o *this, float x, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5937B0F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B0F = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_21FFECC(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0);
    GameObjectExtensions__SetLocalPositionX(gameObject, x, 0);
  }
}


void ItemIconComponent__setLocalScaleIconSprite(ItemIconComponent_o *this, float scale, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5937B0E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937B0E = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_21FFECC(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0);
    GameObjectExtensions__SetLocalScale_42878128(gameObject, scale, 0);
  }
}


void ItemIconComponent__setTypeSpritePositionY(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Component_o *typeSprite; // x0
  unsigned int localPosition; // s0
  float v7; // s9
  float z; // s10
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite )
    goto LABEL_8;
  typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0);
  if ( !typeSprite )
    goto LABEL_8;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)typeSprite, 0);
  typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite;
  if ( !typeSprite
    || (v7 = *(float *)&localPosition,
        (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0)) == 0)
    || (v9 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)typeSprite, 0),
        (typeSprite = (UnityEngine_Component_o *)this->fields.typeSprite) == 0)
    || (z = v9.fields.z,
        (typeSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(typeSprite, 0)) == 0) )
  {
LABEL_8:
    sub_21FFECC(typeSprite, method);
  }
  v10.fields.x = v7;
  v10.fields.y = y;
  v10.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v10, 0);
}