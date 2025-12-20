void ItemIconComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct ItemIconComponent_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct ItemIconComponent_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2BC80 & 1) == 0 )
  {
    sub_1C94098(&ItemIconComponent_TypeInfo);
    sub_1C94098(&StringLiteral_19419/*"event_skill_icon_{0:D2}"*/);
    sub_1C94098(&StringLiteral_23291/*"reset_class_score_icon_{0}"*/);
    byte_4D2BC80 = 1;
  }
  static_fields = ItemIconComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CHANGE_FONT_COUNT = xmmword_CFFD70;
  v8 = StringLiteral_19419/*"event_skill_icon_{0:D2}"*/;
  static_fields->ASSIST_SPRITE_NAME = (struct System_String_o *)StringLiteral_19419/*"event_skill_icon_{0:D2}"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->ASSIST_SPRITE_NAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_23291/*"reset_class_score_icon_{0}"*/;
  v10 = ItemIconComponent_TypeInfo->static_fields;
  v10->ClassBoardResetItemIcon = (struct System_String_o *)StringLiteral_23291/*"reset_class_score_icon_{0}"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->ClassBoardResetItemIcon, v9, v11, v12, v13, v14, v15, v16);
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
  UILabel_o *v9; // x19
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2BC58 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_7537/*"ITEM_POSSESSION_TITLE"*/);
    byte_4D2BC58 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v10.fields.z = 0.0;
    v10.fields.y = -64.0;
    v10.fields.x = v7;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v10, 0);
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0, 0) )
  {
    v9 = this->fields.possessionTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7537/*"ITEM_POSSESSION_TITLE"*/, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)transform, 0);
      return;
    }
LABEL_19:
    sub_1C942F0(transform, v4);
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

  if ( (byte_4D2BC73 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC73 = 1;
  }
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame
    || (v6 = SelfUserGame,
        m_CachedPtr = SelfUserGame->fields.m_CachedPtr,
        (SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                          SelfUserGame,
                                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0
    || (SelfUserGame = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                                          objectId,
                                          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(SelfUserGame, v5);
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
  UISprite_o *backSprite; // x20
  __int64 v5; // x1
  UISprite_o *iconSprite; // x0
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20

  if ( (byte_4D2BC59 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_21488/*"listframes_shadow"*/);
    byte_4D2BC59 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceBaseIcon(backSprite, 0, 0, 0, 0);
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite
      || (UISprite__set_spriteName(iconSprite, 0, 0), (iconSprite = this->fields.frameSprite) == 0)
      || (UISprite__set_spriteName(iconSprite, (System_String_o *)StringLiteral_21488/*"listframes_shadow"*/, 0),
          (iconSprite = this->fields.typeSprite) == 0) )
    {
LABEL_45:
      sub_1C942F0(iconSprite, v5);
    }
  }
  else
  {
    v7 = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    iconSprite = this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    iconSprite = this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    iconSprite = (UISprite_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)iconSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    iconSprite = (UISprite_o *)this->fields.svtJoinIcon;
    if ( !iconSprite )
      goto LABEL_45;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)iconSprite, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4D2BC78 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BC78 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
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

  if ( (byte_4D2BC7F & 1) == 0 )
  {
    sub_1C94098(&Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BC7F = 1;
  }
  v3 = Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__;
  if ( (*((_BYTE *)Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x21
  CommonUI_o *v17; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  float value; // s0
  float v22; // s0
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x21
  CommonUI_o *v25; // x22
  ServantStatusDialog_EndDelegate_o *v26; // x23
  Il2CppObject *v27; // x0
  int32_t svtId; // w21
  CommonUI_o *v29; // x22
  ServantStatusDialog_EndDelegate_o *v30; // x23
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2BC75 & 1) == 0 )
  {
    sub_1C94098(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&Method_ItemIconComponent_CloseCommandCodeDetail__);
    sub_1C94098(&Method_ItemIconComponent_OnClickItem__);
    sub_1C94098(&Method_ItemIconComponent_closeItemDetail__);
    sub_1C94098(&Method_ItemIconComponent_closeSvtDetail__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC75 = 1;
  }
  v7 = Method_ItemIconComponent_OnClickItem__;
  entity = 0;
  if ( (*((_BYTE *)Method_ItemIconComponent_OnClickItem__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C940B0(Method_ItemIconComponent_OnClickItem__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  this->fields.detailCloseCallBack = closeCallBack;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.detailCloseCallBack,
    (int32_t)closeCallBack,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( this->fields.itemEnt )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v17 = (CommonUI_o *)Instance;
    v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C942E4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
    MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_24;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !MasterData_object )
      goto LABEL_24;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           &entity,
           this->fields.commandCodeId,
           (const MethodInfo_345B50C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
    {
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = entity;
      v25 = (CommonUI_o *)v23;
      v26 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v26,
        (Il2CppObject *)this,
        Method_ItemIconComponent_CloseCommandCodeDetail__,
        0);
      if ( !v25 )
        goto LABEL_24;
      CommonUI__OpenServantEquipStatusDialog_31599924(v25, 25, (CommandCodeEntity_o *)v24, 0, v26, 0, 0);
    }
  }
  else if ( this->fields.svtId )
  {
    v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    svtId = this->fields.svtId;
    v29 = (CommonUI_o *)v27;
    v30 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v30, (Il2CppObject *)this, Method_ItemIconComponent_closeSvtDetail__, 0);
    if ( !v29 )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_31596756(v29, 7, svtId, v30, 0);
  }
  else
  {
    ActionExtensions__Call(closeCallBack, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bar, 0, 0);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( bar )
    {
      value = UIProgressBar__get_value((UIProgressBar_o *)bar, 0);
      UIProgressBar__set_value((UIProgressBar_o *)bar, value + 0.00001, 0);
      v22 = UIProgressBar__get_value((UIProgressBar_o *)bar, 0);
      UIProgressBar__set_value((UIProgressBar_o *)bar, v22 + -0.00001, 0);
      return;
    }
LABEL_24:
    sub_1C942F0(MasterData_object, v20);
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

  if ( (byte_4D2BC7E & 1) == 0 )
  {
    sub_1C94098(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__);
    sub_1C94098(&Method_ItemIconComponent_OnClickItemLinkDetailButton__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BC7E = 1;
  }
  if ( this->fields.itemEnt )
  {
    v3 = Method_ItemIconComponent_OnClickItemLinkDetailButton__;
    if ( (*((_BYTE *)Method_ItemIconComponent_OnClickItemLinkDetailButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ItemIconComponent_OnClickItemLinkDetailButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C942F0(0, v6);
    v7 = (CommonUI_o *)Instance;
    UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, this->fields.itemEnt, 0);
    v9 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C942E4(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_ItemIconComponent_CloseItemLinkInfoDetailDialog__,
      0);
    CommonUI__OpenItemLinkInfoDetailWindow_31691264(v7, UserItemData, v9, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetAlpha(ItemIconComponent_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *backSprite; // x20
  __int64 v6; // x1
  void *v7; // x0
  UnityEngine_Object_o *iconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *typeSprite; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20

  v3 = *(long double *)&alpha;
  if ( (byte_4D2BC6D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC6D = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    v7 = this->fields.backSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v7 = this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    v7 = this->fields.frameSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    v7 = this->fields.typeSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    v7 = this->fields.classSprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v7 = this->fields.raritySprite;
    if ( !v7 )
      goto LABEL_39;
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      v3);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    v7 = this->fields.counterLabel;
    if ( v7 )
    {
      (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)v7 + 440LL))(
        v7,
        *(_QWORD *)(*(_QWORD *)v7 + 448LL),
        v3);
      return;
    }
LABEL_39:
    sub_1C942F0(v7, v6);
  }
}


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
  UISprite_o *backSprite; // x25
  Il2CppObject *v15; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v17; // x1
  UISprite_o *iconSprite; // x25
  struct UISprite_o *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x1
  UnityEngine_Object_o *v22; // x24
  UnityEngine_Object_o *v23; // x24
  UISprite_o *v24; // x24
  UnityEngine_Object_o *v25; // x23
  UnityEngine_Object_o *classSprite; // x23
  UnityEngine_Object_o *raritySprite; // x23
  UnityEngine_Object_o *counterLabel; // x23
  Il2CppObject *v29; // x22
  UILabel_o *v30; // x21
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int64_t v34; // [xsp+8h] [xbp-68h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4D2BC66 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_20537/*"img_common_frame01"*/);
    sub_1C94098(&StringLiteral_21490/*"listframes{0}_bg"*/);
    sub_1C94098(&StringLiteral_25458/*"{0}{1:#,0}"*/);
    sub_1C94098(&StringLiteral_21493/*"listframes{0}_txt_item"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_21488/*"listframes_shadow"*/);
    byte_4D2BC66 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    backSprite = this->fields.backSprite;
    LODWORD(v34) = bgImageId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21490/*"listframes{0}_bg"*/, v15, 0);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0);
      iconSprite = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCoin(iconSprite, coinImageId, 0);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_21488/*"listframes_shadow"*/, 0);
        v19 = this->fields.typeSprite;
        v35 = bgImageId;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
        frameSprite = System_String__Format((System_String_o *)StringLiteral_21493/*"listframes{0}_txt_item"*/, v20, 0);
        if ( v19 )
        {
          v21 = frameSprite;
          frameSprite = (System_String_o *)v19;
LABEL_29:
          UISprite__set_spriteName((UISprite_o *)frameSprite, v21, 0);
          goto LABEL_30;
        }
      }
    }
LABEL_62:
    sub_1C942F0(frameSprite, v17);
  }
  v22 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_62;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0);
    if ( !frameSprite )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0);
  }
  v23 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    v24 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCoin(v24, coinImageId, 0);
  }
  v25 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_62;
    v21 = (System_String_o *)StringLiteral_20537/*"img_common_frame01"*/;
    goto LABEL_29;
  }
LABEL_30:
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_62;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_62;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameSprite = (System_String_o *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)frameSprite & 1) != 0 )
  {
    if ( useCountableString )
    {
      frameSprite = ItemType__GetCountableString(type, 0);
      v29 = (Il2CppObject *)frameSprite;
    }
    else
    {
      v29 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    v30 = this->fields.counterLabel;
    if ( count < 0 )
    {
      v17 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v30 )
        goto LABEL_62;
    }
    else
    {
      v34 = count;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
      frameSprite = System_String__Format_64459052((System_String_o *)StringLiteral_25458/*"{0}{1:#,0}"*/, v29, v31, 0);
      v17 = frameSprite;
      if ( !v30 )
        goto LABEL_62;
    }
    UILabel__set_text(v30, v17, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_62;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( (byte_4D2BC6C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC6C = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C942F0(v10, v9);
  }
}


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
  int32_t ImageId; // w0
  const MethodInfo *v12; // x5

  if ( (byte_4D2BC5B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4D2BC5B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          itemId,
                          (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0 )
  {
    sub_1C942F0(Master_object, v8);
  }
  v9 = Master_object;
  v10 = LODWORD(Master_object[3].klass) == 29;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
  ItemIconComponent__SetCombineItemImage(this, ImageId, HIDWORD(v9[2].monitor), count, v10, v12);
}


void ItemIconComponent__SetCombineItemImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t count,
        bool isCoin,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backSprite; // x23
  System_String_o *v11; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v14; // x23
  UnityEngine_Object_o *frameSprite; // x21
  UISprite_o *v16; // x21
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *typeSprite; // x21
  UISprite_o *v19; // x21
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v24; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+18h] [xbp-38h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-34h] BYREF

  v28 = count;
  if ( (byte_4D2BC67 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_21490/*"listframes{0}_bg"*/);
    sub_1C94098(&StringLiteral_21493/*"listframes{0}_txt_item"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2BC67 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_54;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v14 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isCoin )
      AtlasManager__SetCoin(v14, imageId, 0);
    else
      AtlasManager__SetItem(v14, imageId, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    v16 = this->fields.frameSprite;
    v27 = bgImageId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21490/*"listframes{0}_bg"*/, v17, 0);
    if ( !v16 )
      goto LABEL_54;
    UISprite__set_spriteName(v16, (System_String_o *)gameObject, 0);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    v19 = this->fields.typeSprite;
    v26 = bgImageId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21493/*"listframes{0}_txt_item"*/, v20, 0);
    if ( !v19 )
      goto LABEL_54;
    UISprite__set_spriteName(v19, (System_String_o *)gameObject, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_54;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_54;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v24 = this->fields.counterLabel;
    if ( v28 < 0 )
    {
      v11 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v24 )
        goto LABEL_54;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v28, 0);
      if ( gameObject )
        v11 = (System_String_o *)gameObject;
      else
        v11 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v24 )
LABEL_54:
        sub_1C942F0(gameObject, v11);
    }
    UILabel__set_text(v24, v11, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_54;
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
  UISprite_o *backSprite; // x23
  UnityEngine_Object_o *v12; // x23
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v14; // x23
  UnityEngine_Object_o *frameSprite; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UISprite_o *v18; // x22
  UnityEngine_Object_o *counterLabel; // x21
  UILabel_o *v20; // x21
  System_String_o *CrossOperatorString; // x20
  System_String_o *v22; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int64_t v25; // [xsp+8h] [xbp-38h] BYREF

  v25 = count;
  if ( (byte_4D2BC6A & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2BC6A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     commandCodeId,
                     (const MethodInfo_345B4C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_63:
    sub_1C942F0(Instance, v8);
  }
  v9 = *((_DWORD *)Instance + 16);
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
  v12 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v14 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommandCodeImage(v14, commandCodeId, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_63;
LABEL_30:
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    Instance = this->fields.classSprite;
    if ( !Instance )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v18 = this->fields.raritySprite;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v9, 0);
    if ( !v18 )
      goto LABEL_63;
    UISprite__set_spriteName(v18, (System_String_o *)Instance, 0);
    Instance = this->fields.raritySprite;
    if ( !Instance )
      goto LABEL_63;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v20 = this->fields.counterLabel;
    if ( count <= 1 )
    {
      v8 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0);
      v22 = System_Int64__ToString((int64_t)&v25, 0);
      Instance = System_String__Concat_64417744(CrossOperatorString, v22, 0);
      v8 = (System_String_o *)Instance;
    }
    if ( !v20 )
      goto LABEL_63;
    UILabel__set_text(v20, v8, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_63;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    Instance = this->fields.materialTdSprite;
    if ( !Instance )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)Instance, 0, 0);
  }
}


void ItemIconComponent__SetCondensedScale(ItemIconComponent_o *this, int32_t maxWidth, const MethodInfo *method)
{
  UILabel_o *counterLabel; // x0

  counterLabel = this->fields.counterLabel;
  if ( !counterLabel )
    sub_1C942F0(0, maxWidth);
  UILabel__SetCondensedScale(counterLabel, maxWidth, 0, 0);
}


void ItemIconComponent__SetCountLabelActivation(ItemIconComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *counterLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D2BC79 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC79 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C942F0(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


void ItemIconComponent__SetDepth(ItemIconComponent_o *this, int32_t depth, const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x21
  __int64 v6; // x1
  UIWidget_o *backSprite; // x0
  int32_t v8; // w21
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *iconSprite; // x21
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *v14; // x22
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Object_o *counterLabel; // x21

  if ( (byte_4D2BC6B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC6B = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    backSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth, 0);
    backSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 1, 0);
    backSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !backSprite )
      goto LABEL_52;
    v8 = depth + 3;
    UIWidget__set_depth(backSprite, depth + 2, 0);
    classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
    {
      backSprite = (UIWidget_o *)this->fields.classSprite;
      if ( !backSprite )
        goto LABEL_52;
      UIWidget__set_depth(backSprite, v8, 0);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
    {
      backSprite = (UIWidget_o *)this->fields.raritySprite;
      if ( !backSprite )
        goto LABEL_52;
      UIWidget__set_depth(backSprite, v8, 0);
    }
    backSprite = (UIWidget_o *)this->fields.typeSprite;
    if ( !backSprite )
LABEL_52:
      sub_1C942F0(backSprite, v6);
    goto LABEL_45;
  }
  v11 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
  {
    backSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    backSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 1, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    backSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 2, 0);
  }
  v14 = (UnityEngine_Object_o *)this->fields.classSprite;
  v8 = depth + 3;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    backSprite = (UIWidget_o *)this->fields.classSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, v8, 0);
  }
  v15 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    backSprite = (UIWidget_o *)this->fields.raritySprite;
    if ( !backSprite )
      goto LABEL_52;
LABEL_45:
    UIWidget__set_depth(backSprite, v8, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    backSprite = (UIWidget_o *)this->fields.counterLabel;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 4, 0);
  }
}


// attributes: thunk
void ItemIconComponent__SetEquipItem(ItemIconComponent_o *this, int32_t equipItemId, const MethodInfo *method)
{
  ItemIconComponent__SetEquipItemImage(this, equipItemId, method);
}


void ItemIconComponent__SetEquipItemImage(ItemIconComponent_o *this, int32_t equipImageId, const MethodInfo *method)
{
  UnityEngine_Object_o *backSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v8; // x21
  ItemIconComponent_c *v9; // x0
  Il2CppObject *v10; // x0
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *iconSprite; // x21
  UISprite_o *v13; // x21
  UnityEngine_Object_o *typeSprite; // x20
  UISprite_o *v15; // x20
  ItemIconComponent_c *v16; // x0
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t EQUIP_ITEM_RARITY; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2BC68 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&ItemIconComponent_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_21494/*"listframes{0}_txt_mysticcode"*/);
    sub_1C94098(&StringLiteral_21490/*"listframes{0}_bg"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2BC68 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v8 = this->fields.backSprite;
    v9 = ItemIconComponent_TypeInfo;
    if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v9 = ItemIconComponent_TypeInfo;
    }
    EQUIP_ITEM_RARITY = v9->static_fields->EQUIP_ITEM_RARITY;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EQUIP_ITEM_RARITY);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21490/*"listframes{0}_bg"*/, v10, 0);
    if ( !v8 )
      goto LABEL_56;
    UISprite__set_spriteName(v8, (System_String_o *)gameObject, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v13 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipItem(v13, equipImageId, 0);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    v15 = this->fields.typeSprite;
    v16 = ItemIconComponent_TypeInfo;
    if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v16 = ItemIconComponent_TypeInfo;
    }
    v23 = v16->static_fields->EQUIP_ITEM_RARITY;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21494/*"listframes{0}_txt_mysticcode"*/, v17, 0);
    if ( !v15 )
      goto LABEL_56;
    UISprite__set_spriteName(v15, (System_String_o *)gameObject, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.svtJoinIcon;
    if ( !gameObject )
      goto LABEL_56;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( gameObject )
    {
      UISprite__set_spriteName((UISprite_o *)gameObject, 0, 0);
      return;
    }
LABEL_56:
    sub_1C942F0(gameObject, v6);
  }
}


void ItemIconComponent__SetEventPointBuffImage(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x22
  UISprite_o *backSprite; // x22
  Il2CppObject *v9; // x0
  System_String_o *frameSprite; // x0
  __int64 v11; // x1
  UISprite_o *iconSprite; // x22
  struct UISprite_o *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *v17; // x21
  UISprite_o *v18; // x21
  UnityEngine_Object_o *v19; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  int32_t v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2BC62 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_20537/*"img_common_frame01"*/);
    sub_1C94098(&StringLiteral_21490/*"listframes{0}_bg"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_21492/*"listframes{0}_txt_eventbonus"*/);
    sub_1C94098(&StringLiteral_21488/*"listframes_shadow"*/);
    byte_4D2BC62 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    backSprite = this->fields.backSprite;
    v24 = bgImageId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21490/*"listframes{0}_bg"*/, v9, 0);
    if ( !backSprite )
      goto LABEL_46;
    UISprite__set_spriteName(backSprite, frameSprite, 0);
    iconSprite = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(iconSprite, imageId, 0);
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_21488/*"listframes_shadow"*/, 0);
    v13 = this->fields.typeSprite;
    v23 = bgImageId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21492/*"listframes{0}_txt_eventbonus"*/, v14, 0);
    if ( !v13 )
      goto LABEL_46;
    v15 = frameSprite;
    frameSprite = (System_String_o *)v13;
    goto LABEL_29;
  }
  v16 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_46;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0);
    if ( !frameSprite )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0);
  }
  v17 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
  {
    v18 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v18, imageId, 0);
  }
  v19 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_46;
    v15 = (System_String_o *)StringLiteral_20537/*"img_common_frame01"*/;
LABEL_29:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v15, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.counterLabel;
    if ( frameSprite )
    {
      UILabel__set_text((UILabel_o *)frameSprite, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_46:
    sub_1C942F0(frameSprite, v11);
  }
}


void ItemIconComponent__SetFaceImage(
        ItemIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int64_t count,
        int32_t giftType,
        bool isQuestBoard,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_String_o *v13; // x1
  ServantEntity_o *v14; // x22
  int32_t v15; // w23
  int32_t FrameType_43459292; // w25
  int32_t ImageLimitCount; // w26
  Il2CppObject *Component_object; // x27
  UnityEngine_Object_o *typeSprite; // x27
  UISprite_o *backSprite; // x27
  UnityEngine_Object_o *v21; // x27
  UnityEngine_Object_o *iconSprite; // x27
  UISprite_o *v23; // x27
  UnityEngine_Object_o *frameSprite; // x24
  UISprite_o *v25; // x24
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v27; // x24
  UnityEngine_Object_o *raritySprite; // x23
  UISprite_o *v29; // x23
  int32_t v30; // w24
  UnityEngine_Object_o *counterLabel; // x23
  UILabel_o *v32; // x23
  System_String_o *CrossOperatorString; // x24
  System_String_o *v34; // x0
  UnityEngine_Object_o *svtJoinIcon; // x23
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v37; // x20
  System_String_o **v38; // x8
  System_String_o *v39; // x19
  int32_t rarity; // [xsp+Ch] [xbp-64h] BYREF
  int64_t v41; // [xsp+18h] [xbp-58h] BYREF

  v41 = count;
  if ( (byte_4D2BC69 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantExceedMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&ImageLimitCount_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_23341/*"ribbon_noblephantasmup_01"*/);
    sub_1C94098(&StringLiteral_23342/*"ribbon_noblephantasmup_02"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_21488/*"listframes_shadow"*/);
    sub_1C94098(&StringLiteral_20368/*"icon_eventjoin_01"*/);
    byte_4D2BC69 = 1;
  }
  rarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               svtId,
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_88;
  v14 = (ServantEntity_o *)Instance;
  v15 = *((_DWORD *)Instance + 20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_88;
  FrameType_43459292 = ServantExceedMaster__GetFrameType_43459292(
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
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  }
  Instance = this->fields.iconSprite;
  if ( !Instance )
    goto LABEL_88;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)Instance,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_88;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceBaseIcon(backSprite, FrameType_43459292, v15, 0, 0);
    AtlasManager__SetFaceImage(this->fields.iconSprite, svtId, ImageLimitCount, 1, 0, 0);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_88;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21488/*"listframes_shadow"*/, 0);
    AtlasManager__SetServantType(this->fields.typeSprite, v14->fields.type, FrameType_43459292, v15, 0, 0);
  }
  else
  {
    v21 = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
    {
      Instance = this->fields.backSprite;
      if ( !Instance )
        goto LABEL_88;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
    {
      v23 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(v23, svtId, ImageLimitCount, 1, 0, 0);
    }
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
    {
      v25 = this->fields.frameSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceFrameIcon(v25, 0);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    Instance = (void *)ServantEntity__get_IsServantEquip(v14, 0);
    v27 = this->fields.classSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_88;
      UISprite__set_spriteName(this->fields.classSprite, 0, 0);
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClass(v27, v15, FrameType_43459292, 0, 0);
    }
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    v29 = this->fields.raritySprite;
    v30 = rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v30, 0);
    if ( !v29 )
      goto LABEL_88;
    UISprite__set_spriteName(v29, (System_String_o *)Instance, 0);
    Instance = this->fields.raritySprite;
    if ( !Instance )
      goto LABEL_88;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v32 = this->fields.counterLabel;
    if ( v41 <= 1 )
    {
      v13 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0);
      v34 = System_Int64__ToString((int64_t)&v41, 0);
      Instance = System_String__Concat_64417744(CrossOperatorString, v34, 0);
      v13 = (System_String_o *)Instance;
    }
    if ( !v32 )
      goto LABEL_88;
    UILabel__set_text(v32, v13, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_88;
    if ( giftType == 6 )
      ShiningIconComponent__Set_41856780((ShiningIconComponent_o *)Instance, (System_String_o *)StringLiteral_20368/*"icon_eventjoin_01"*/, 0);
    else
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    Instance = (void *)ServantEntity__get_IsServantMaterialTd(v14, 0);
    v37 = this->fields.materialTdSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v38 = (System_String_o **)&StringLiteral_23342/*"ribbon_noblephantasmup_02"*/;
      if ( !isQuestBoard )
        v38 = (System_String_o **)&StringLiteral_23341/*"ribbon_noblephantasmup_01"*/;
      v39 = *v38;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v37, v39, 0);
      return;
    }
    if ( v37 )
    {
      UISprite__set_spriteName(v37, 0, 0);
      return;
    }
LABEL_88:
    sub_1C942F0(Instance, v13);
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
    sub_1C942F0(this, 0);
  ItemIconComponent__SetGift_41674460(
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
  void *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w23
  uint32_t cctor_finished; // w9
  struct ItemIconComponent_StaticFields *static_fields; // x8
  UILabel_o *counterLabel; // x22
  int32_t CHANGE_FONT_COUNT; // w25
  __int64 v17; // x9
  int64_t counta; // [xsp+Ch] [xbp-44h] BYREF

  LODWORD(counta) = count;
  if ( (byte_4D2BC5D & 1) == 0 )
  {
    sub_1C94098(&ItemIconComponent_TypeInfo);
    byte_4D2BC5D = 1;
  }
  if ( count >= 1 )
  {
    v10 = System_Int32__ToString((int32_t)&counta, 0);
    if ( v10 )
    {
      v12 = *((_DWORD *)v10 + 4);
      v10 = ItemIconComponent_TypeInfo;
      cctor_finished = ItemIconComponent_TypeInfo->_2.cctor_finished;
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
        v10 = ItemIconComponent_TypeInfo;
        cctor_finished = ItemIconComponent_TypeInfo->_2.cctor_finished;
      }
      static_fields = (struct ItemIconComponent_StaticFields *)*((_QWORD *)v10 + 23);
      counterLabel = this->fields.counterLabel;
      CHANGE_FONT_COUNT = static_fields->CHANGE_FONT_COUNT;
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = ItemIconComponent_TypeInfo->static_fields;
      }
      if ( v12 <= CHANGE_FONT_COUNT )
      {
        if ( counterLabel )
        {
          v17 = 4;
          goto LABEL_14;
        }
      }
      else if ( counterLabel )
      {
        v17 = 8;
LABEL_14:
        UILabel__set_fontSize(counterLabel, *(int32_t *)((char *)&static_fields->CHANGE_FONT_COUNT + v17), 0);
        goto LABEL_15;
      }
    }
    sub_1C942F0(v10, v11);
  }
LABEL_15:
  ItemIconComponent__SetGift_41674460(this, giftType, objectId, (int)counta, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetGift_41674460(
        ItemIconComponent_o *this,
        int32_t giftType,
        int32_t objectId,
        int64_t count,
        bool isQuestBoard,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  int32_t v12; // w1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  ItemEntity_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *Entity; // x20
  const MethodInfo *v25; // x2
  int saveDataMapList_high; // w8
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v29; // w3
  int64_t v30; // x4
  ItemIconComponent_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4D2BC5C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC5C = 1;
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
      v12 = 4;
      goto LABEL_31;
    case 2:
      if ( objectId < 1 )
        goto LABEL_23;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    objectId,
                                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_42;
      v15 = (ItemEntity_o *)Instance;
      if ( ItemEntity__GetImageId((ItemEntity_o *)Instance, 0) < 1 )
      {
        ItemIconComponent__SetPresentItem(this, v15, count, v16);
      }
      else
      {
        ItemIconComponent__SetItem_41670868(this, v15, count, 1, v17);
        this->fields.itemEnt = v15;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.itemEnt, (int32_t)v15, v18, v19, v20, v21, v22, v23);
      }
      return;
    case 5:
      if ( objectId < 1 )
        goto LABEL_23;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_42;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 objectId,
                 (const MethodInfo_345B4C0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_42;
      saveDataMapList_high = HIDWORD(Instance->fields.saveDataMapList);
      if ( saveDataMapList_high == 2 )
      {
        if ( Entity )
        {
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          goto LABEL_37;
        }
LABEL_42:
        sub_1C942F0(Instance, v14);
      }
      if ( saveDataMapList_high == 1 )
      {
        if ( Entity )
        {
          klass = Entity[4].klass;
          monitor = Entity[4].monitor;
LABEL_37:
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = klass;
          *(_QWORD *)&v34.fields.fakeValue = monitor;
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v34, 0);
          goto LABEL_41;
        }
        goto LABEL_42;
      }
      v33 = 0;
LABEL_41:
      ItemIconComponent__SetEquipItemImage(this, v33, v25);
      return;
    case 8:
      if ( objectId < 1 )
        goto LABEL_23;
      v29 = -1;
      v30 = -1;
      v31 = this;
      v12 = objectId;
      v32 = 0;
      goto LABEL_33;
    case 9:
      v12 = 23;
      v32 = 3;
      v29 = 23;
      v30 = -1;
      v31 = this;
      goto LABEL_33;
    case 11:
      if ( objectId < 1 )
      {
        v12 = 8014;
LABEL_31:
        v29 = -1;
        v31 = this;
LABEL_32:
        v32 = 0;
        v30 = count;
LABEL_33:
        ItemIconComponent__SetItemImage_41672124(v31, v12, v32, v29, v30, 1, v6);
      }
      else
      {
        ItemIconComponent__SetCommandCodeImage(this, objectId, count, (const MethodInfo *)count);
        this->fields.commandCodeId = objectId;
      }
      return;
    case 14:
      if ( objectId >= 1 )
        ItemIconComponent__SetItemImage_41678144(this, objectId, 0, -1, (const MethodInfo *)isQuestBoard);
      return;
    default:
LABEL_23:
      v29 = -1;
      v31 = this;
      v12 = 0;
      goto LABEL_32;
  }
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
  Il2CppObject *Entity; // x0
  const MethodInfo *v12; // x4

  if ( (byte_4D2BC5A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             itemId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  ItemIconComponent__SetItem_41670868(this, (ItemEntity_o *)Entity, count, useCountableString, v12);
}


void ItemIconComponent__SetItemImage(ItemIconComponent_o *this, int32_t imageId, const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  ItemIconComponent__SetItemImage_41672124(this, imageId, 0, -1, -1, 1, v3);
}


void ItemIconComponent__SetItemImageByName(
        ItemIconComponent_o *this,
        System_String_o *spriteNamet,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x21
  UnityEngine_Object_o *iconSprite; // x21
  const MethodInfo *v7; // x5
  UISprite_o *v8; // x21

  if ( (byte_4D2BC64 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC64 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
    goto LABEL_9;
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
LABEL_9:
    v8 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItemByName(v8, spriteNamet, 0);
  }
  ItemIconComponent__SetItemInfo(this, 0, -1, -1, 1, v7);
}


void ItemIconComponent__SetItemImage_41672124(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t type,
        int64_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x25
  UnityEngine_Object_o *iconSprite; // x25
  const MethodInfo *v15; // x5
  UISprite_o *v16; // x25

  if ( (byte_4D2BC63 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC63 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
    goto LABEL_9;
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
LABEL_9:
    v16 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v16, imageId, 0);
  }
  ItemIconComponent__SetItemInfo(this, bgImageId, type, count, useCountableString, v15);
}


void ItemIconComponent__SetItemImage_41676908(
        ItemIconComponent_o *this,
        int32_t imageId,
        int64_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  ItemIconComponent__SetItemImage_41672124(this, imageId, 0, -1, count, 1, v4);
}


void ItemIconComponent__SetItemImage_41678144(
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

  if ( (byte_4D2BC61 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC61 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               objectId,
                               (const MethodInfo_345B50C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    monitor_high = 0;
    goto LABEL_9;
  }
  if ( !entity )
LABEL_10:
    sub_1C942F0(Instance, v10);
  monitor_high = HIDWORD(entity[2].monitor);
LABEL_9:
  ItemIconComponent__SetItemImage_41672124(this, imageId, monitor_high, -1, count, 1, v11);
}


void ItemIconComponent__SetItemInfo(
        ItemIconComponent_o *this,
        int32_t bgImageId,
        int32_t type,
        int64_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  UnityEngine_Object_o *typeSprite; // x24
  UISprite_o *backSprite; // x24
  Il2CppObject *v13; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v15; // x1
  struct UISprite_o *v16; // x24
  Il2CppObject *v17; // x0
  __int64 *v18; // x8
  UnityEngine_Object_o *v19; // x23
  UnityEngine_Object_o *v20; // x23
  System_String_o *v21; // x1
  UnityEngine_Object_o *classSprite; // x23
  UnityEngine_Object_o *raritySprite; // x23
  UnityEngine_Object_o *counterLabel; // x23
  Il2CppObject *v25; // x22
  UILabel_o *v26; // x21
  Il2CppObject *v27; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int64_t v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2BC65 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_21491/*"listframes{0}_txt_costume"*/);
    sub_1C94098(&StringLiteral_21497/*"listframes{0}_txt_quest"*/);
    sub_1C94098(&StringLiteral_20537/*"img_common_frame01"*/);
    sub_1C94098(&StringLiteral_21490/*"listframes{0}_bg"*/);
    sub_1C94098(&StringLiteral_25458/*"{0}{1:#,0}"*/);
    sub_1C94098(&StringLiteral_21496/*"listframes{0}_txt_point"*/);
    sub_1C94098(&StringLiteral_21493/*"listframes{0}_txt_item"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_21495/*"listframes{0}_txt_plain"*/);
    sub_1C94098(&StringLiteral_21488/*"listframes_shadow"*/);
    byte_4D2BC65 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
  {
    backSprite = this->fields.backSprite;
    LODWORD(v30) = bgImageId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21490/*"listframes{0}_bg"*/, v13, 0);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_21488/*"listframes_shadow"*/, 0);
        if ( type > 22 )
        {
          if ( type == 23 )
          {
            v16 = this->fields.typeSprite;
            LODWORD(v30) = bgImageId;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
            v18 = &StringLiteral_21491/*"listframes{0}_txt_costume"*/;
            goto LABEL_29;
          }
          if ( type == 24 )
          {
            v16 = this->fields.typeSprite;
            LODWORD(v30) = bgImageId;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
            v18 = &StringLiteral_21495/*"listframes{0}_txt_plain"*/;
            goto LABEL_29;
          }
        }
        else
        {
          if ( type == 14 )
          {
            v16 = this->fields.typeSprite;
            LODWORD(v30) = bgImageId;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
            v18 = &StringLiteral_21496/*"listframes{0}_txt_point"*/;
            goto LABEL_29;
          }
          if ( type == 16 )
          {
            v16 = this->fields.typeSprite;
            LODWORD(v30) = bgImageId;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
            v18 = &StringLiteral_21497/*"listframes{0}_txt_quest"*/;
LABEL_29:
            frameSprite = System_String__Format((System_String_o *)*v18, v17, 0);
            if ( !v16 )
              goto LABEL_64;
            v21 = frameSprite;
            frameSprite = (System_String_o *)v16;
            goto LABEL_31;
          }
        }
        v16 = this->fields.typeSprite;
        LODWORD(v30) = bgImageId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
        v18 = &StringLiteral_21493/*"listframes{0}_txt_item"*/;
        goto LABEL_29;
      }
    }
LABEL_64:
    sub_1C942F0(frameSprite, v15);
  }
  v19 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_64;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0);
    if ( !frameSprite )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0);
  }
  v20 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_64;
    v21 = (System_String_o *)StringLiteral_20537/*"img_common_frame01"*/;
LABEL_31:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v21, 0);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_64;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_64;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  frameSprite = (System_String_o *)UnityEngine_Object__op_Inequality(counterLabel, 0, 0);
  if ( ((unsigned __int8)frameSprite & 1) != 0 )
  {
    if ( useCountableString )
    {
      frameSprite = ItemType__GetCountableString(type, 0);
      v25 = (Il2CppObject *)frameSprite;
    }
    else
    {
      v25 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    v26 = this->fields.counterLabel;
    if ( count < 0 )
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v26 )
        goto LABEL_64;
    }
    else
    {
      v30 = count;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v30);
      frameSprite = System_String__Format_64459052((System_String_o *)StringLiteral_25458/*"{0}{1:#,0}"*/, v25, v27, 0);
      v15 = frameSprite;
      if ( !v26 )
        goto LABEL_64;
    }
    UILabel__set_text(v26, v15, 0);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_64;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_64;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0, 0);
  }
}


void ItemIconComponent__SetItem_41670868(
        ItemIconComponent_o *this,
        ItemEntity_o *itemEntity,
        int64_t count,
        bool useCountableString,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  int32_t type; // w3
  int32_t ImageId; // w0
  const MethodInfo *v12; // x6

  if ( !itemEntity )
    sub_1C942F0(this, 0);
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
    ItemIconComponent__SetItemImage_41672124(
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
    sub_1C942F0(counterLabel, *(_QWORD *)&condensedWidth);
  }
  v7 = LocalScaleX;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0);
  GameObjectExtensions__SetLocalScale_36800984(v8, v7 * 3.33, 3.33, 1.0, 0);
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

  if ( (byte_4D2BC5F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v8);
  }
  PointEventImageId = EventMaster__GetPointEventImageId((EventMaster_o *)Instance, eventId, 0);
  if ( PointEventImageId )
    v11 = PointEventImageId;
  else
    v11 = iconId;
  ItemIconComponent__SetItemImage_41672124(this, v11, 0, -1, -1, 1, v10);
}


// local variable allocation has failed, the output may be wrong!
void ItemIconComponent__SetPossession(ItemIconComponent_o *this, int32_t possessionNum, const MethodInfo *method)
{
  UnityEngine_GameObject_o *possessionRoot; // x0
  UnityEngine_Transform_o *Child; // x0
  __int64 v7; // x1
  UILabel_o *Component_object; // x20
  Il2CppObject *v9; // x0
  float PossessionLabelWidth; // s8
  float mWidth; // s9
  UnityEngine_Transform_o *v12; // x21
  float y; // s1
  float x; // s0 OVERLAPPED
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int64_t v17; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2BC72 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    byte_4D2BC72 = 1;
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
                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  v17 = this->fields.possessionNum;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  Child = (UnityEngine_Transform_o *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v9, 0);
  if ( !Component_object )
    goto LABEL_14;
  UILabel__set_text(Component_object, (System_String_o *)Child, 0);
  PossessionLabelWidth = this->fields.PossessionLabelWidth;
  mWidth = (float)Component_object->fields.mWidth;
  Child = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
  v12 = Child;
  if ( PossessionLabelWidth >= mWidth )
  {
    if ( !byte_4D25F1E )
    {
      Child = (UnityEngine_Transform_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
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
    sub_1C942F0(Child, v7);
  }
  if ( !Child )
    goto LABEL_14;
  y = 1.0;
  x = this->fields.PossessionLabelWidth / (float)Component_object->fields.mWidth;
  z = 1.0;
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
  System_String_o *monitor; // x21
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2BC7C & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    byte_4D2BC7C = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(possessionRoot, 0, 0);
  if ( !Child
    || (Child = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             Child,
                                             (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0 )
  {
    sub_1C942F0(Child, v7);
  }
  v8 = (UILabel_o *)Child;
  monitor = (System_String_o *)Child[17].monitor;
  v13 = this->fields.possessionNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
  v11 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v10, 0);
  v12 = System_String__Format(monitor, v11, 0);
  UILabel__set_text(v8, v12, 0);
}


void ItemIconComponent__SetPossessionRoot(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4D2BC7B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC7B = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(possessionRoot, 0, 0) )
  {
    v7 = this->fields.possessionRoot;
    if ( !v7 )
      sub_1C942F0(0, v6);
    gameObject = UnityEngine_GameObject__get_gameObject(v7, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, y, 0);
  }
}


void ItemIconComponent__SetPossessionTitleActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionTitleLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D2BC7A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC7A = 1;
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.possessionTitleLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C942F0(gameObject, v6);
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
  int32_t type; // w3
  int32_t bgImageId; // w2
  int32_t v8; // w1

  if ( !itemEnt )
    sub_1C942F0(this, 0);
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
    case 3:
    case 4:
      goto LABEL_7;
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
      if ( type == 36 )
      {
        bgImageId = itemEnt->fields.bgImageId;
        v8 = 6;
      }
      else
      {
LABEL_7:
        type = -1;
        v8 = 0;
        bgImageId = 0;
      }
      break;
  }
  ItemIconComponent__SetItemImage_41672124(this, v8, bgImageId, type, count, 1, v4);
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
  ItemIconComponent_o *v10; // x0
  int32_t v11; // w1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v15; // x4
  AssistEntity_o *CurrentLevelEntity; // x0
  AssistEntity_o *v17; // x20
  UISprite_o *iconSprite; // x19
  ItemIconComponent_c *v19; // x0
  int32_t v20; // w9
  System_String_o *ASSIST_SPRITE_NAME; // x20
  Il2CppObject *v22; // x1
  System_String_o *v23; // x0
  ItemIconComponent_c *v24; // x0
  System_String_o *ClassBoardResetItemIcon; // x21
  System_String_o *v26; // x20
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2BC5E & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&ItemIconComponent_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC5E = 1;
  }
  if ( imageId >= 1 )
  {
LABEL_4:
    v10 = this;
    v11 = imageId;
LABEL_5:
    ItemIconComponent__SetItemImage_41672124(v10, v11, 0, -1, -1, 1, v5);
    return;
  }
  if ( purchaseType <= 4 )
  {
    if ( purchaseType != 1 )
    {
      if ( purchaseType == 4 )
      {
LABEL_17:
        ItemIconComponent__SetFaceImage(this, targetId, 0, -1, 1, 0, v5);
        return;
      }
      goto LABEL_4;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0 )
    {
LABEL_32:
      sub_1C942F0(Instance, v13);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               targetId,
               (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Entity )
      ItemIconComponent__SetItem_41670868(this, (ItemEntity_o *)Entity, 0, 1, v15);
  }
  else
  {
    switch ( purchaseType )
    {
      case 14:
        v11 = 23;
        v10 = this;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_32;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_AssistMaster___);
        if ( !Instance )
          goto LABEL_32;
        CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, targetId, 0);
        if ( CurrentLevelEntity )
        {
          v17 = CurrentLevelEntity;
          iconSprite = this->fields.iconSprite;
          v19 = ItemIconComponent_TypeInfo;
          if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
            v19 = ItemIconComponent_TypeInfo;
          }
          v20 = v17->fields.imageId;
          ASSIST_SPRITE_NAME = v19->static_fields->ASSIST_SPRITE_NAME;
          v28 = v20;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
          v23 = ASSIST_SPRITE_NAME;
LABEL_28:
          v26 = System_String__Format(v23, v22, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetExclusiveShopIcon(iconSprite, v26, 0);
        }
        break;
      case 23:
        iconSprite = this->fields.iconSprite;
        v24 = ItemIconComponent_TypeInfo;
        if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
          v24 = ItemIconComponent_TypeInfo;
        }
        ClassBoardResetItemIcon = v24->static_fields->ClassBoardResetItemIcon;
        v27 = targetId;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
        v23 = ClassBoardResetItemIcon;
        goto LABEL_28;
      default:
        if ( purchaseType == 8 )
          goto LABEL_17;
        goto LABEL_4;
    }
  }
}


void ItemIconComponent__SetRaidEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t RaidEventImageId; // w1
  const MethodInfo *v8; // x6

  if ( (byte_4D2BC60 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v6);
  }
  RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventId, 0);
  ItemIconComponent__SetItemImage_41672124(this, RaidEventImageId, 0, -1, -1, 1, v8);
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
  UnityEngine_Object_o *counterTitleLabel1; // x24
  UnityEngine_Object_o *counterTitleLabel2; // x24
  UnityEngine_Object_o *counterLabel1; // x24
  UnityEngine_Object_o *counterLabel2; // x24
  __int64 v16; // x1
  UILabel_o *gameObject; // x0
  UILabel_o *v18; // x22
  Il2CppObject *v19; // x0
  UILabel_o *v20; // x21
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *possessionRoot; // x20
  int64_t v24; // [xsp+0h] [xbp-50h] BYREF
  int64_t v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2BC7D & 1) == 0 )
  {
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    byte_4D2BC7D = 1;
  }
  twoTypeCounterRoot = (UnityEngine_Object_o *)this->fields.twoTypeCounterRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(twoTypeCounterRoot, 0, 0) )
  {
    counterTitleLabel1 = (UnityEngine_Object_o *)this->fields.counterTitleLabel1;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(counterTitleLabel1, 0, 0) )
    {
      counterTitleLabel2 = (UnityEngine_Object_o *)this->fields.counterTitleLabel2;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(counterTitleLabel2, 0, 0) )
      {
        counterLabel1 = (UnityEngine_Object_o *)this->fields.counterLabel1;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(counterLabel1, 0, 0) )
        {
          counterLabel2 = (UnityEngine_Object_o *)this->fields.counterLabel2;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                v18 = this->fields.counterLabel1;
                v25 = counterNum1;
                v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
                gameObject = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v19, 0);
                if ( v18 )
                {
                  UILabel__set_text(v18, (System_String_o *)gameObject, 0);
                  v20 = this->fields.counterLabel2;
                  v24 = counterNum2;
                  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
                  gameObject = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v21, 0);
                  if ( v20 )
                  {
                    UILabel__set_text(v20, (System_String_o *)gameObject, 0);
                    counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality(counterLabel, 0, 0) )
                    {
                      possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            sub_1C942F0(gameObject, v16);
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

  if ( (byte_4D2BC71 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC71 = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionRoot, 0, 0) )
  {
    if ( this->fields.possessionNum )
    {
      v7 = this->fields.possessionRoot;
      if ( !v7 )
        sub_1C942F0(0, v6);
      UnityEngine_GameObject__SetActive(v7, showPossession, 0);
    }
    v8 = 0.31373;
    if ( !showPossession )
      v8 = 1.0;
    v9 = 1.0;
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

  if ( (byte_4D2BC76 & 1) == 0 )
  {
    sub_1C94098(&Method_ItemIconComponent_closeItemDetail__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BC76 = 1;
  }
  v4 = Method_ItemIconComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_ItemIconComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C940B0(Method_ItemIconComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
  ActionExtensions__Call(this->fields.detailCloseCallBack, 0);
}


void ItemIconComponent__closeSvtDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D2BC77 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2BC77 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
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

  if ( (byte_4D2BC74 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BC74 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, userId, objectId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_9:
    sub_1C942F0(Instance, v7);
  }
  return 0;
}


UISprite_o *ItemIconComponent__get_IconSprite(ItemIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.iconSprite;
}


void ItemIconComponent__setFrameSprite(
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2BC70 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC70 = 1;
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    if ( isSetActive )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
      if ( !gameObject )
        goto LABEL_20;
      UISprite__set_spriteName((UISprite_o *)gameObject, frameName, 0);
      iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
          v11 = (UnityEngine_Component_o *)this->fields.iconSprite;
          if ( v11 )
          {
            v12 = (UnityEngine_Transform_o *)gameObject;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v11, 0);
            if ( gameObject )
            {
              localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              if ( v12 )
              {
                UnityEngine_Transform__set_localPosition(v12, localPosition, 0);
                return;
              }
            }
          }
        }
LABEL_20:
        sub_1C942F0(gameObject, v8);
      }
    }
    else
    {
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

  if ( (byte_4D2BC6F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC6F = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_1C942F0(0, v6);
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

  if ( (byte_4D2BC6E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BC6E = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_1C942F0(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0);
    GameObjectExtensions__SetLocalScale_36800820(gameObject, scale, 0);
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
    sub_1C942F0(typeSprite, method);
  }
  v10.fields.x = v7;
  v10.fields.y = y;
  v10.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v10, 0);
}