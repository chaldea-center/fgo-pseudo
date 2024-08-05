void __fastcall ItemIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct ItemIconComponent_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_49FDA1C & 1) == 0 )
  {
    sub_1B64870(&ItemIconComponent_TypeInfo, v1);
    sub_1B64870(&StringLiteral_19178/*"event_skill_icon_{0:D2}"*/, v4);
    byte_49FDA1C = 1;
  }
  static_fields = ItemIconComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->CHANGE_FONT_COUNT = xmmword_BA42C0;
  v6 = StringLiteral_19178/*"event_skill_icon_{0:D2}"*/;
  static_fields->ASSIST_SPRITE_NAME = (struct System_String_o *)StringLiteral_19178/*"event_skill_icon_{0:D2}"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->ASSIST_SPRITE_NAME, v6, v2, v3);
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
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  unsigned int localPosition; // s0
  float v9; // s8
  UnityEngine_Object_o *possessionTitleLabel; // x20
  UILabel_o *v11; // x19
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD9F7 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&StringLiteral_7397/*"ITEM_POSSESSION_TITLE"*/, v4);
    byte_49FD9F7 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_19;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_19;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_Component_o *)this->fields.typeSprite;
    if ( !transform )
      goto LABEL_19;
    v9 = *(float *)&localPosition;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_19;
    v12.fields.z = 0.0;
    v12.fields.y = -64.0;
    v12.fields.x = v9;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v12, 0LL);
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    v11 = this->fields.possessionTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7397/*"ITEM_POSSESSION_TITLE"*/, 0LL);
    if ( v11 )
    {
      UILabel__set_text(v11, (System_String_o *)transform, 0LL);
      return;
    }
LABEL_19:
    sub_1B64ACC(transform, v6);
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
  void *SelfUserGame; // x0
  __int64 v7; // x1
  _DWORD *v8; // x20
  int64_t v9; // x21
  const MethodInfo *v10; // x3
  int v11; // w8

  if ( (byte_49FDA12 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&objectId);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v4);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FDA12 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (v8 = SelfUserGame,
        v9 = *((_QWORD *)SelfUserGame + 2),
        (SelfUserGame = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (SelfUserGame = DataManager__GetMasterData_object_(
                         (DataManager_o *)SelfUserGame,
                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL
    || (SelfUserGame = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
                         objectId,
                         (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64ACC(SelfUserGame, v7);
  }
  v11 = *((_DWORD *)SelfUserGame + 12);
  if ( v11 == 22 )
    return v8[47];
  if ( v11 == 5 )
    return v8[46];
  return ItemIconComponent__getUserItemNum((ItemIconComponent_o *)SelfUserGame, v9, objectId, v10);
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
  UISprite_o *backSprite; // x20
  __int64 v8; // x1
  UISprite_o *iconSprite; // x0
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20

  if ( (byte_49FD9F8 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&StringLiteral_1/*""*/, v4);
    sub_1B64870(&StringLiteral_21067/*"listframes_shadow"*/, v5);
    byte_49FD9F8 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceBaseIcon(backSprite, 0, 0, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite
      || (UISprite__set_spriteName(iconSprite, 0LL, 0LL), (iconSprite = this->fields.frameSprite) == 0LL)
      || (UISprite__set_spriteName(iconSprite, (System_String_o *)StringLiteral_21067/*"listframes_shadow"*/, 0LL),
          (iconSprite = this->fields.typeSprite) == 0LL) )
    {
LABEL_45:
      sub_1B64ACC(iconSprite, v8);
    }
  }
  else
  {
    v10 = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      iconSprite = this->fields.backSprite;
      if ( !iconSprite )
        goto LABEL_45;
      iconSprite = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconSprite, 0LL);
      if ( !iconSprite )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconSprite, 0, 0LL);
    }
    iconSprite = this->fields.iconSprite;
    if ( !iconSprite )
      goto LABEL_45;
  }
  UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.classSprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.raritySprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    iconSprite = (UISprite_o *)this->fields.counterLabel;
    if ( !iconSprite )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)iconSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    iconSprite = (UISprite_o *)this->fields.svtJoinIcon;
    if ( !iconSprite )
      goto LABEL_45;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)iconSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    iconSprite = this->fields.materialTdSprite;
    if ( !iconSprite )
      goto LABEL_45;
    UISprite__set_spriteName(iconSprite, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__CloseCommandCodeDetail(
        ItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49FDA17 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FDA17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v5);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, this->fields.detailCloseCallBack, 0LL);
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
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x21
  CommonUI_o *v23; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v24; // x23
  Il2CppObject *MasterData_object; // x0
  __int64 v26; // x1
  float value; // s0
  float v28; // s0
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x21
  CommonUI_o *v31; // x22
  ServantStatusDialog_EndDelegate_o *v32; // x23
  Il2CppObject *v33; // x0
  int32_t svtId; // w21
  CommonUI_o *v35; // x22
  ServantStatusDialog_EndDelegate_o *v36; // x23
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FDA14 & 1) == 0 )
  {
    sub_1B64870(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, bar);
    sub_1B64870(&Method_DataManager_GetMasterData_CommandCodeMaster___, v7);
    sub_1B64870(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__, v8);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_1B64870(&Method_ItemIconComponent_CloseCommandCodeDetail__, v10);
    sub_1B64870(&Method_ItemIconComponent_OnClickItem__, v11);
    sub_1B64870(&Method_ItemIconComponent_closeItemDetail__, v12);
    sub_1B64870(&Method_ItemIconComponent_closeSvtDetail__, v13);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FDA14 = 1;
  }
  v17 = Method_ItemIconComponent_OnClickItem__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_ItemIconComponent_OnClickItem__ + 83) & 2) != 0 )
    v17 = (_QWORD *)sub_1B64888(Method_ItemIconComponent_OnClickItem__);
  v18 = (System_Reflection_MethodBase_o *)sub_1B64854(v17, v17[4]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
  this->fields.detailCloseCallBack = closeCallBack;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.detailCloseCallBack, (int32_t)closeCallBack, v19, v20);
  if ( this->fields.itemEnt )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v23 = (CommonUI_o *)Instance;
    v24 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64ABC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      (intptr_t)Method_ItemIconComponent_closeItemDetail__,
      0LL);
    if ( !v23 )
      goto LABEL_24;
    CommonUI__OpenItemDetailDialog(v23, itemEnt, v24, 50, 0LL);
  }
  else if ( this->fields.commandCodeId )
  {
    MasterData_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_24;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)MasterData_object,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
    if ( !MasterData_object )
      goto LABEL_24;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           &entity,
           this->fields.commandCodeId,
           (const MethodInfo_30D61D4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__TryGetEntity__) )
    {
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = entity;
      v31 = (CommonUI_o *)v29;
      v32 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v32,
        (Il2CppObject *)this,
        Method_ItemIconComponent_CloseCommandCodeDetail__,
        0LL);
      if ( !v31 )
        goto LABEL_24;
      CommonUI__OpenServantEquipStatusDialog_30363516(v31, 25, (CommandCodeEntity_o *)v30, 0, v32, 0LL, 0LL);
    }
  }
  else if ( this->fields.svtId )
  {
    v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    svtId = this->fields.svtId;
    v35 = (CommonUI_o *)v33;
    v36 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v36, (Il2CppObject *)this, Method_ItemIconComponent_closeSvtDetail__, 0LL);
    if ( !v35 )
      goto LABEL_24;
    CommonUI__OpenServantStatusDialog_30360360(v35, 7, svtId, v36, 0LL);
  }
  else
  {
    ActionExtensions__Call(closeCallBack, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bar, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( bar )
    {
      value = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, value + 0.00001, 0LL);
      v28 = UIProgressBar__get_value((UIProgressBar_o *)bar, 0LL);
      UIProgressBar__set_value((UIProgressBar_o *)bar, v28 + -0.00001, 0LL);
      return;
    }
LABEL_24:
    sub_1B64ACC(MasterData_object, v26);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetAlpha(ItemIconComponent_o *this, float alpha, const MethodInfo *method)
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
  if ( (byte_49FDA0C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FDA0C = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
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
    sub_1B64ACC(v7, v6);
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
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  UISprite_o *backSprite; // x24
  Il2CppObject *v24; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v26; // x1
  UISprite_o *iconSprite; // x24
  struct UISprite_o *v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  System_String_o *v33; // x1
  UnityEngine_Object_o *v34; // x23
  UnityEngine_Object_o *v35; // x23
  UISprite_o *v36; // x23
  UnityEngine_Object_o *v37; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *counterLabel; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  UILabel_o *v44; // x21
  Il2CppObject *v45; // x22
  Il2CppObject *v46; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v49; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v50; // [xsp+8h] [xbp-58h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FDA05 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&coinImageId);
    sub_1B64870(&int_TypeInfo, v11);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64870(&StringLiteral_20214/*"img_common_frame01"*/, v13);
    sub_1B64870(&StringLiteral_21069/*"listframes{0}_bg"*/, v14);
    sub_1B64870(&StringLiteral_25007/*"{0}{1:#,0}"*/, v15);
    sub_1B64870(&StringLiteral_21072/*"listframes{0}_txt_item"*/, v16);
    sub_1B64870(&StringLiteral_1/*""*/, v17);
    sub_1B64870(&StringLiteral_21067/*"listframes_shadow"*/, v18);
    byte_49FDA05 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    backSprite = this->fields.backSprite;
    v51 = bgImageId;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v20, v21, v22);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21069/*"listframes{0}_bg"*/, v24, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0LL);
      iconSprite = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetCoin(iconSprite, coinImageId, 0LL);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_21067/*"listframes_shadow"*/, 0LL);
        v28 = this->fields.typeSprite;
        v50 = bgImageId;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v29, v30, v31);
        frameSprite = System_String__Format((System_String_o *)StringLiteral_21072/*"listframes{0}_txt_item"*/, v32, 0LL);
        if ( v28 )
        {
          v33 = frameSprite;
          frameSprite = (System_String_o *)v28;
LABEL_29:
          UISprite__set_spriteName((UISprite_o *)frameSprite, v33, 0LL);
          goto LABEL_30;
        }
      }
    }
LABEL_59:
    sub_1B64ACC(frameSprite, v26);
  }
  v34 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_59;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v35 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    v36 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCoin(v36, coinImageId, 0LL);
  }
  v37 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_59;
    v33 = (System_String_o *)StringLiteral_20214/*"img_common_frame01"*/;
    goto LABEL_29;
  }
LABEL_30:
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_59;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_59;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = ItemType__GetCountableString(type, 0LL);
    v44 = this->fields.counterLabel;
    if ( (count & 0x80000000) != 0 )
    {
      v26 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v44 )
        goto LABEL_59;
    }
    else
    {
      v45 = (Il2CppObject *)frameSprite;
      v49 = count;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v41, v42, v43);
      frameSprite = System_String__Format_61397948((System_String_o *)StringLiteral_25007/*"{0}{1:#,0}"*/, v45, v46, 0LL);
      v26 = frameSprite;
      if ( !v44 )
        goto LABEL_59;
    }
    UILabel__set_text(v44, v26, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_59;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_59;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
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
  if ( (byte_49FDA0B & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FDA0B = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.backSprite;
    if ( !v10 )
      goto LABEL_39;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v10, v17, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_39;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v10 )
      goto LABEL_39;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.typeSprite;
    if ( !v10 )
      goto LABEL_39;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v10, v20, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.classSprite;
    if ( !v10 )
      goto LABEL_39;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v10, v21, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.raritySprite;
    if ( !v10 )
      goto LABEL_39;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v10, v22, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.counterLabel;
    if ( v10 )
    {
      v23.fields.b = b;
      v23.fields.a = a;
      v23.fields.r = r;
      v23.fields.g = g;
      UIWidget__set_color(v10, v23, 0LL);
      return;
    }
LABEL_39:
    sub_1B64ACC(v10, v9);
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
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  bool v12; // w22
  int32_t ImageId; // w0
  const MethodInfo *v14; // x5

  if ( (byte_49FD9FA & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    byte_49FD9FA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          itemId,
                          (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64ACC(Master_object, v10);
  }
  v11 = Master_object;
  v12 = LODWORD(Master_object[3].klass) == 29;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
  ItemIconComponent__SetCombineItemImage(this, ImageId, HIDWORD(v11[2].monitor), count, v12, v14);
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
  System_String_o *v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v19; // x23
  UnityEngine_Object_o *frameSprite; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UISprite_o *v24; // x21
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *typeSprite; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UISprite_o *v30; // x21
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UILabel_o *v35; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v38; // [xsp+18h] [xbp-38h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-34h] BYREF

  v39 = count;
  if ( (byte_49FDA06 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_1B64870(&int_TypeInfo, v10);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64870(&StringLiteral_21069/*"listframes{0}_bg"*/, v12);
    sub_1B64870(&StringLiteral_21072/*"listframes{0}_txt_item"*/, v13);
    sub_1B64870(&StringLiteral_1/*""*/, v14);
    byte_49FDA06 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_54;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v19 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( isCoin )
      AtlasManager__SetCoin(v19, imageId, 0LL);
    else
      AtlasManager__SetItem(v19, imageId, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v24 = this->fields.frameSprite;
    v38 = bgImageId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v21, v22, v23);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21069/*"listframes{0}_bg"*/, v25, 0LL);
    if ( !v24 )
      goto LABEL_54;
    UISprite__set_spriteName(v24, (System_String_o *)gameObject, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v30 = this->fields.typeSprite;
    v37 = bgImageId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v27, v28, v29);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21072/*"listframes{0}_txt_item"*/, v31, 0LL);
    if ( !v30 )
      goto LABEL_54;
    UISprite__set_spriteName(v30, (System_String_o *)gameObject, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_54;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_54;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v35 = this->fields.counterLabel;
    if ( (v39 & 0x80000000) != 0 )
    {
      v16 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v35 )
        goto LABEL_54;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v39, 0LL);
      if ( gameObject )
        v16 = (System_String_o *)gameObject;
      else
        v16 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v35 )
LABEL_54:
        sub_1B64ACC(gameObject, v16);
    }
    UILabel__set_text(v35, v16, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_54;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
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
  void *Instance; // x0
  System_String_o *v14; // x1
  int32_t v15; // w21
  UnityEngine_Object_o *typeSprite; // x23
  UISprite_o *backSprite; // x23
  UnityEngine_Object_o *v18; // x23
  UnityEngine_Object_o *iconSprite; // x23
  UISprite_o *v20; // x23
  UnityEngine_Object_o *frameSprite; // x22
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UISprite_o *v24; // x22
  UnityEngine_Object_o *counterLabel; // x21
  UILabel_o *v26; // x21
  System_String_o *CrossOperatorString; // x20
  System_String_o *v28; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  v31 = count;
  if ( (byte_49FDA09 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1B64870(&Method_DataManager_GetMasterData_CommandCodeMaster___, v7);
    sub_1B64870(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&Rarity_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&StringLiteral_1/*""*/, v12);
    byte_49FDA09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_CommandCodeMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     commandCodeId,
                     (const MethodInfo_30D6180 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_63:
    sub_1B64ACC(Instance, v14);
  }
  v15 = *((_DWORD *)Instance + 16);
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommandCodeBaseIcon(backSprite, v15, 0LL);
    AtlasManager__SetCommandCodeImage(this->fields.iconSprite, commandCodeId, 0LL);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
    Instance = this->fields.typeSprite;
    if ( !Instance )
      goto LABEL_63;
    goto LABEL_30;
  }
  v18 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    Instance = this->fields.backSprite;
    if ( !Instance )
      goto LABEL_63;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v20 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommandCodeImage(v20, commandCodeId, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_63;
LABEL_30:
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = this->fields.classSprite;
    if ( !Instance )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)Instance, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v24 = this->fields.raritySprite;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v15, 0LL);
    if ( !v24 )
      goto LABEL_63;
    UISprite__set_spriteName(v24, (System_String_o *)Instance, 0LL);
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
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v26 = this->fields.counterLabel;
    if ( count <= 1 )
    {
      v14 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
      v28 = System_Int32__ToString((int32_t)&v31, 0LL);
      Instance = System_String__Concat_61383576(CrossOperatorString, v28, 0LL);
      v14 = (System_String_o *)Instance;
    }
    if ( !v26 )
      goto LABEL_63;
    UILabel__set_text(v26, v14, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_63;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Instance = this->fields.materialTdSprite;
    if ( !Instance )
      goto LABEL_63;
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
    sub_1B64ACC(0LL, maxWidth);
  UILabel__SetCondensedScale(counterLabel, maxWidth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetCountLabelActivation(
        ItemIconComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *counterLabel; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_49FDA18 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, isActive);
    byte_49FDA18 = 1;
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B64ACC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetDepth(ItemIconComponent_o *this, int32_t depth, const MethodInfo *method)
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

  if ( (byte_49FDA0A & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, *(_QWORD *)&depth);
    byte_49FDA0A = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    backSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth, 0LL);
    backSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 1, 0LL);
    backSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !backSprite )
      goto LABEL_52;
    v8 = depth + 3;
    UIWidget__set_depth(backSprite, depth + 2, 0LL);
    classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
    {
      backSprite = (UIWidget_o *)this->fields.classSprite;
      if ( !backSprite )
        goto LABEL_52;
      UIWidget__set_depth(backSprite, v8, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      backSprite = (UIWidget_o *)this->fields.raritySprite;
      if ( !backSprite )
        goto LABEL_52;
      UIWidget__set_depth(backSprite, v8, 0LL);
    }
    backSprite = (UIWidget_o *)this->fields.typeSprite;
    if ( !backSprite )
LABEL_52:
      sub_1B64ACC(backSprite, v6);
    goto LABEL_45;
  }
  v11 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
  {
    backSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    backSprite = (UIWidget_o *)this->fields.iconSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 1, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    backSprite = (UIWidget_o *)this->fields.frameSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 2, 0LL);
  }
  v14 = (UnityEngine_Object_o *)this->fields.classSprite;
  v8 = depth + 3;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    backSprite = (UIWidget_o *)this->fields.classSprite;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, v8, 0LL);
  }
  v15 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    backSprite = (UIWidget_o *)this->fields.raritySprite;
    if ( !backSprite )
      goto LABEL_52;
LABEL_45:
    UIWidget__set_depth(backSprite, v8, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    backSprite = (UIWidget_o *)this->fields.counterLabel;
    if ( !backSprite )
      goto LABEL_52;
    UIWidget__set_depth(backSprite, depth + 4, 0LL);
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
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UISprite_o *v17; // x21
  ItemIconComponent_c *v18; // x0
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *frameSprite; // x21
  UnityEngine_Object_o *iconSprite; // x21
  UISprite_o *v22; // x21
  UnityEngine_Object_o *typeSprite; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UISprite_o *v27; // x20
  ItemIconComponent_c *v28; // x0
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v35; // [xsp+8h] [xbp-38h] BYREF
  int32_t EQUIP_ITEM_RARITY; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FDA07 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&equipImageId);
    sub_1B64870(&int_TypeInfo, v5);
    sub_1B64870(&ItemIconComponent_TypeInfo, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&StringLiteral_21073/*"listframes{0}_txt_mysticcode"*/, v8);
    sub_1B64870(&StringLiteral_21069/*"listframes{0}_bg"*/, v9);
    sub_1B64870(&StringLiteral_1/*""*/, v10);
    byte_49FDA07 = 1;
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v17 = this->fields.backSprite;
    v18 = ItemIconComponent_TypeInfo;
    if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v18 = ItemIconComponent_TypeInfo;
    }
    EQUIP_ITEM_RARITY = v18->static_fields->EQUIP_ITEM_RARITY;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EQUIP_ITEM_RARITY, v14, v15, v16);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21069/*"listframes{0}_bg"*/, v19, 0LL);
    if ( !v17 )
      goto LABEL_56;
    UISprite__set_spriteName(v17, (System_String_o *)gameObject, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v22 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipItem(v22, equipImageId, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    v27 = this->fields.typeSprite;
    v28 = ItemIconComponent_TypeInfo;
    if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
      v28 = ItemIconComponent_TypeInfo;
    }
    v35 = v28->static_fields->EQUIP_ITEM_RARITY;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v24, v25, v26);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_21073/*"listframes{0}_txt_mysticcode"*/, v29, 0LL);
    if ( !v27 )
      goto LABEL_56;
    UISprite__set_spriteName(v27, (System_String_o *)gameObject, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.classSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.counterLabel;
    if ( !gameObject )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.svtJoinIcon;
    if ( !gameObject )
      goto LABEL_56;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)gameObject, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( gameObject )
    {
      UISprite__set_spriteName((UISprite_o *)gameObject, 0LL, 0LL);
      return;
    }
LABEL_56:
    sub_1B64ACC(gameObject, v12);
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  UISprite_o *backSprite; // x22
  Il2CppObject *v19; // x0
  System_String_o *frameSprite; // x0
  __int64 v21; // x1
  UISprite_o *iconSprite; // x22
  struct UISprite_o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  System_String_o *v28; // x1
  UnityEngine_Object_o *v29; // x21
  UnityEngine_Object_o *v30; // x21
  UISprite_o *v31; // x21
  UnityEngine_Object_o *v32; // x20
  UnityEngine_Object_o *classSprite; // x20
  UnityEngine_Object_o *raritySprite; // x20
  UnityEngine_Object_o *counterLabel; // x20
  int32_t v36; // [xsp+8h] [xbp-48h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FDA01 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_1B64870(&int_TypeInfo, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64870(&StringLiteral_20214/*"img_common_frame01"*/, v9);
    sub_1B64870(&StringLiteral_21069/*"listframes{0}_bg"*/, v10);
    sub_1B64870(&StringLiteral_1/*""*/, v11);
    sub_1B64870(&StringLiteral_21071/*"listframes{0}_txt_eventbonus"*/, v12);
    sub_1B64870(&StringLiteral_21067/*"listframes_shadow"*/, v13);
    byte_49FDA01 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    backSprite = this->fields.backSprite;
    v37 = bgImageId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v15, v16, v17);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21069/*"listframes{0}_bg"*/, v19, 0LL);
    if ( !backSprite )
      goto LABEL_46;
    UISprite__set_spriteName(backSprite, frameSprite, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(iconSprite, imageId, 0LL);
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_21067/*"listframes_shadow"*/, 0LL);
    v23 = this->fields.typeSprite;
    v36 = bgImageId;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v24, v25, v26);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21071/*"listframes{0}_txt_eventbonus"*/, v27, 0LL);
    if ( !v23 )
      goto LABEL_46;
    v28 = frameSprite;
    frameSprite = (System_String_o *)v23;
    goto LABEL_29;
  }
  v29 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_46;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v30 = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    v31 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v31, imageId, 0LL);
  }
  v32 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_46;
    v28 = (System_String_o *)StringLiteral_20214/*"img_common_frame01"*/;
LABEL_29:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v28, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_46;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.counterLabel;
    if ( frameSprite )
    {
      UILabel__set_text((UILabel_o *)frameSprite, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_46:
    sub_1B64ACC(frameSprite, v21);
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
  void *Instance; // x0
  System_String_o *v26; // x1
  ServantEntity_o *v27; // x22
  int32_t v28; // w23
  int32_t FrameType_39345044; // w25
  int32_t ImageLimitCount; // w26
  Il2CppObject *Component_object; // x27
  UnityEngine_Object_o *typeSprite; // x27
  UISprite_o *backSprite; // x27
  UnityEngine_Object_o *v34; // x27
  UnityEngine_Object_o *iconSprite; // x27
  UISprite_o *v36; // x27
  UnityEngine_Object_o *frameSprite; // x24
  UISprite_o *v38; // x24
  UnityEngine_Object_o *classSprite; // x24
  UISprite_o *v40; // x24
  UnityEngine_Object_o *raritySprite; // x23
  UISprite_o *v42; // x23
  int32_t v43; // w24
  UnityEngine_Object_o *counterLabel; // x23
  UILabel_o *v45; // x23
  System_String_o *CrossOperatorString; // x24
  System_String_o *v47; // x0
  UnityEngine_Object_o *svtJoinIcon; // x23
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v50; // x20
  System_String_o **v51; // x8
  System_String_o *v52; // x19
  int32_t rarity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-54h] BYREF

  v54 = count;
  if ( (byte_49FDA08 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIMeshSprite___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantExceedMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v14);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15);
    sub_1B64870(&ImageLimitCount_TypeInfo, v16);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64870(&Rarity_TypeInfo, v18);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B64870(&StringLiteral_22844/*"ribbon_noblephantasmup_01"*/, v20);
    sub_1B64870(&StringLiteral_22845/*"ribbon_noblephantasmup_02"*/, v21);
    sub_1B64870(&StringLiteral_1/*""*/, v22);
    sub_1B64870(&StringLiteral_21067/*"listframes_shadow"*/, v23);
    sub_1B64870(&StringLiteral_20073/*"icon_eventjoin_01"*/, v24);
    byte_49FDA08 = 1;
  }
  rarity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               svtId,
               (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_88;
  v27 = (ServantEntity_o *)Instance;
  v28 = *((_DWORD *)Instance + 20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantExceedMaster___);
  if ( !Instance )
    goto LABEL_88;
  FrameType_39345044 = ServantExceedMaster__GetFrameType_39345044(
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
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  }
  Instance = this->fields.iconSprite;
  if ( !Instance )
    goto LABEL_88;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)Instance,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIMeshSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_88;
    UIMeshSprite__Initialize((UIMeshSprite_o *)Component_object, 0LL);
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    backSprite = this->fields.backSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFaceBaseIcon(backSprite, FrameType_39345044, v28, 0LL);
    AtlasManager__SetFaceImage(this->fields.iconSprite, svtId, ImageLimitCount, 0LL);
    Instance = this->fields.frameSprite;
    if ( !Instance )
      goto LABEL_88;
    UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21067/*"listframes_shadow"*/, 0LL);
    AtlasManager__SetServantType(this->fields.typeSprite, v27->fields.type, FrameType_39345044, v28, 0LL);
  }
  else
  {
    v34 = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    {
      Instance = this->fields.backSprite;
      if ( !Instance )
        goto LABEL_88;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_88;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
    {
      v36 = this->fields.iconSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceImage(v36, svtId, ImageLimitCount, 0LL);
    }
    frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
    {
      v38 = this->fields.frameSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFaceFrameIcon(v38, 0LL);
    }
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    Instance = (void *)ServantEntity__get_IsServantEquip(v27, 0LL);
    v40 = this->fields.classSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_88;
      UISprite__set_spriteName(this->fields.classSprite, 0LL, 0LL);
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetClass(v40, v28, FrameType_39345044, 0LL);
    }
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    v42 = this->fields.raritySprite;
    v43 = rarity;
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Instance = Rarity__getIcon(v43, 0LL);
    if ( !v42 )
      goto LABEL_88;
    UISprite__set_spriteName(v42, (System_String_o *)Instance, 0LL);
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
  Instance = (void *)UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v45 = this->fields.counterLabel;
    if ( v54 <= 1 )
    {
      v26 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
      v47 = System_Int32__ToString((int32_t)&v54, 0LL);
      Instance = System_String__Concat_61383576(CrossOperatorString, v47, 0LL);
      v26 = (System_String_o *)Instance;
    }
    if ( !v45 )
      goto LABEL_88;
    UILabel__set_text(v45, v26, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    Instance = this->fields.svtJoinIcon;
    if ( !Instance )
      goto LABEL_88;
    if ( giftType == 6 )
      ShiningIconComponent__Set_37920096(
        (ShiningIconComponent_o *)Instance,
        (System_String_o *)StringLiteral_20073/*"icon_eventjoin_01"*/,
        0LL);
    else
      ShiningIconComponent__Clear((ShiningIconComponent_o *)Instance, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Instance = (void *)ServantEntity__get_IsServantMaterialTd(v27, 0LL);
    v50 = this->fields.materialTdSprite;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v51 = (System_String_o **)&StringLiteral_22845/*"ribbon_noblephantasmup_02"*/;
      if ( !isQuestBoard )
        v51 = (System_String_o **)&StringLiteral_22844/*"ribbon_noblephantasmup_01"*/;
      v52 = *v51;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v50, v52, 0LL);
      return;
    }
    if ( v50 )
    {
      UISprite__set_spriteName(v50, 0LL, 0LL);
      return;
    }
LABEL_88:
    sub_1B64ACC(Instance, v26);
  }
}


void __fastcall ItemIconComponent__SetGift(
        ItemIconComponent_o *this,
        GiftEntity_o *giftEntity,
        int32_t count,
        bool isQuestBoard,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( !giftEntity )
    sub_1B64ACC(this, 0LL);
  ItemIconComponent__SetGift_37833672(
    this,
    giftEntity->fields.type,
    giftEntity->fields.objectId,
    count,
    isQuestBoard,
    v5);
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
  void *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w23
  uint32_t cctor_finished; // w9
  struct ItemIconComponent_StaticFields *static_fields; // x8
  UILabel_o *counterLabel; // x22
  int32_t CHANGE_FONT_COUNT; // w25
  __int64 v17; // x9
  int32_t counta; // [xsp+Ch] [xbp-44h] BYREF

  counta = count;
  if ( (byte_49FD9FC & 1) == 0 )
  {
    sub_1B64870(&ItemIconComponent_TypeInfo, *(_QWORD *)&giftType);
    byte_49FD9FC = 1;
  }
  if ( count >= 1 )
  {
    v10 = System_Int32__ToString((int32_t)&counta, 0LL);
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
          v17 = 4LL;
          goto LABEL_14;
        }
      }
      else if ( counterLabel )
      {
        v17 = 8LL;
LABEL_14:
        UILabel__set_fontSize(counterLabel, *(int32_t *)((char *)&static_fields->CHANGE_FONT_COUNT + v17), 0LL);
        goto LABEL_15;
      }
    }
    sub_1B64ACC(v10, v11);
  }
LABEL_15:
  ItemIconComponent__SetGift_37833672(this, giftType, objectId, counta, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetGift_37833672(
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  ItemEntity_o *v20; // x20
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *Entity; // x20
  const MethodInfo *v25; // x2
  int saveDataMapList_high; // w8
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v29; // w3
  int32_t v30; // w4
  ItemIconComponent_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_49FD9FB & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&giftType);
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_1B64870(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v14);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FD9FB = 1;
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
        goto LABEL_23;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    objectId,
                                    (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_42;
      v20 = (ItemEntity_o *)Instance;
      if ( ItemEntity__GetImageId((ItemEntity_o *)Instance, 0LL) < 1 )
      {
        ItemIconComponent__SetPresentItem(this, v20, count, v21);
      }
      else
      {
        ItemIconComponent__SetItem_37830176(this, v20, count, v21);
        this->fields.itemEnt = v20;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, (int32_t)v20, v22, v23);
      }
      return;
    case 5:
      if ( objectId < 1 )
        goto LABEL_23;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EquipMaster___);
      if ( !Instance )
        goto LABEL_42;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 objectId,
                 (const MethodInfo_30D6180 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
      Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
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
        sub_1B64ACC(Instance, v19);
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
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v34, 0LL);
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
      v17 = objectId;
      v32 = 0;
      goto LABEL_33;
    case 9:
      v17 = 23;
      v32 = 3;
      v29 = 23;
      v30 = -1;
      v31 = this;
      goto LABEL_33;
    case 11:
      if ( objectId < 1 )
      {
        v17 = 8014;
LABEL_31:
        v29 = -1;
        v31 = this;
LABEL_32:
        v32 = 0;
        v30 = count;
LABEL_33:
        ItemIconComponent__SetItemImage_37831356(v31, v17, v32, v29, v30, method);
      }
      else
      {
        ItemIconComponent__SetCommandCodeImage(this, objectId, count, *(const MethodInfo **)&count);
        this->fields.commandCodeId = objectId;
      }
      return;
    case 14:
      if ( objectId >= 1 )
        ItemIconComponent__SetItemImage_37837288(this, objectId, 0, -1, (const MethodInfo *)isQuestBoard);
      return;
    default:
LABEL_23:
      v29 = -1;
      v31 = this;
      v17 = 0;
      goto LABEL_32;
  }
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x3

  if ( (byte_49FD9F9 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FD9F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v10);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             itemId,
             (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  ItemIconComponent__SetItem_37830176(this, (ItemEntity_o *)Entity, count, v12);
}


void __fastcall ItemIconComponent__SetItemImage(ItemIconComponent_o *this, int32_t imageId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  ItemIconComponent__SetItemImage_37831356(this, imageId, 0, -1, -1, v3);
}


void __fastcall ItemIconComponent__SetItemImageByName(
        ItemIconComponent_o *this,
        System_String_o *spriteNamet,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *typeSprite; // x21
  UnityEngine_Object_o *iconSprite; // x21
  const MethodInfo *v8; // x4
  UISprite_o *v9; // x21

  if ( (byte_49FDA03 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, spriteNamet);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FDA03 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
    goto LABEL_9;
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
LABEL_9:
    v9 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItemByName(v9, spriteNamet, 0LL);
  }
  ItemIconComponent__SetItemInfo(this, 0, -1, -1, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemImage_37831356(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t bgImageId,
        int32_t type,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_Object_o *typeSprite; // x24
  UnityEngine_Object_o *iconSprite; // x24
  const MethodInfo *v14; // x4
  UISprite_o *v15; // x24

  if ( (byte_49FDA02 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&imageId);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v11);
    byte_49FDA02 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
    goto LABEL_9;
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
LABEL_9:
    v15 = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(v15, imageId, 0LL);
  }
  ItemIconComponent__SetItemInfo(this, bgImageId, type, count, v14);
}


void __fastcall ItemIconComponent__SetItemImage_37836068(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t count,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  ItemIconComponent__SetItemImage_37831356(this, imageId, 0, -1, count, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetItemImage_37837288(
        ItemIconComponent_o *this,
        int32_t imageId,
        int32_t objectId,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  int32_t monitor_high; // w2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FDA00 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&imageId);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FDA00 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               objectId,
                               (const MethodInfo_30D61D4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    monitor_high = 0;
    goto LABEL_9;
  }
  if ( !entity )
LABEL_10:
    sub_1B64ACC(Instance, v12);
  monitor_high = HIDWORD(entity[2].monitor);
LABEL_9:
  ItemIconComponent__SetItemImage_37831356(this, imageId, monitor_high, -1, count, v13);
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
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UISprite_o *backSprite; // x23
  Il2CppObject *v25; // x0
  System_String_o *frameSprite; // x0
  System_String_o *v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct UISprite_o *v31; // x23
  Il2CppObject *v32; // x0
  __int64 *v33; // x8
  UnityEngine_Object_o *v34; // x22
  UnityEngine_Object_o *v35; // x22
  System_String_o *v36; // x1
  UnityEngine_Object_o *classSprite; // x22
  UnityEngine_Object_o *raritySprite; // x22
  UnityEngine_Object_o *counterLabel; // x22
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  UILabel_o *v43; // x21
  Il2CppObject *v44; // x22
  Il2CppObject *v45; // x0
  UnityEngine_Object_o *svtJoinIcon; // x20
  UnityEngine_Object_o *materialTdSprite; // x20
  int32_t v48; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FDA04 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&bgImageId);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&StringLiteral_21070/*"listframes{0}_txt_costume"*/, v10);
    sub_1B64870(&StringLiteral_21076/*"listframes{0}_txt_quest"*/, v11);
    sub_1B64870(&StringLiteral_20214/*"img_common_frame01"*/, v12);
    sub_1B64870(&StringLiteral_21069/*"listframes{0}_bg"*/, v13);
    sub_1B64870(&StringLiteral_25007/*"{0}{1:#,0}"*/, v14);
    sub_1B64870(&StringLiteral_21075/*"listframes{0}_txt_point"*/, v15);
    sub_1B64870(&StringLiteral_21072/*"listframes{0}_txt_item"*/, v16);
    sub_1B64870(&StringLiteral_1/*""*/, v17);
    sub_1B64870(&StringLiteral_21074/*"listframes{0}_txt_plain"*/, v18);
    sub_1B64870(&StringLiteral_21067/*"listframes_shadow"*/, v19);
    byte_49FDA04 = 1;
  }
  typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
  {
    backSprite = this->fields.backSprite;
    v48 = bgImageId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v21, v22, v23);
    frameSprite = System_String__Format((System_String_o *)StringLiteral_21069/*"listframes{0}_bg"*/, v25, 0LL);
    if ( backSprite )
    {
      UISprite__set_spriteName(backSprite, frameSprite, 0LL);
      frameSprite = (System_String_o *)this->fields.frameSprite;
      if ( frameSprite )
      {
        UISprite__set_spriteName((UISprite_o *)frameSprite, (System_String_o *)StringLiteral_21067/*"listframes_shadow"*/, 0LL);
        if ( type > 22 )
        {
          if ( type == 23 )
          {
            v31 = this->fields.typeSprite;
            v48 = bgImageId;
            v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v28, v29, v30);
            v33 = &StringLiteral_21070/*"listframes{0}_txt_costume"*/;
            goto LABEL_29;
          }
          if ( type == 24 )
          {
            v31 = this->fields.typeSprite;
            v48 = bgImageId;
            v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v28, v29, v30);
            v33 = &StringLiteral_21074/*"listframes{0}_txt_plain"*/;
            goto LABEL_29;
          }
        }
        else
        {
          if ( type == 14 )
          {
            v31 = this->fields.typeSprite;
            v48 = bgImageId;
            v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v28, v29, v30);
            v33 = &StringLiteral_21075/*"listframes{0}_txt_point"*/;
            goto LABEL_29;
          }
          if ( type == 16 )
          {
            v31 = this->fields.typeSprite;
            v48 = bgImageId;
            v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v28, v29, v30);
            v33 = &StringLiteral_21076/*"listframes{0}_txt_quest"*/;
LABEL_29:
            frameSprite = System_String__Format((System_String_o *)*v33, v32, 0LL);
            if ( !v31 )
              goto LABEL_61;
            v36 = frameSprite;
            frameSprite = (System_String_o *)v31;
            goto LABEL_31;
          }
        }
        v31 = this->fields.typeSprite;
        v48 = bgImageId;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v28, v29, v30);
        v33 = &StringLiteral_21072/*"listframes{0}_txt_item"*/;
        goto LABEL_29;
      }
    }
LABEL_61:
    sub_1B64ACC(frameSprite, v27);
  }
  v34 = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.backSprite;
    if ( !frameSprite )
      goto LABEL_61;
    frameSprite = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frameSprite, 0LL);
    if ( !frameSprite )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, 1, 0LL);
  }
  v35 = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.frameSprite;
    if ( !frameSprite )
      goto LABEL_61;
    v36 = (System_String_o *)StringLiteral_20214/*"img_common_frame01"*/;
LABEL_31:
    UISprite__set_spriteName((UISprite_o *)frameSprite, v36, 0LL);
  }
  classSprite = (UnityEngine_Object_o *)this->fields.classSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.classSprite;
    if ( !frameSprite )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.raritySprite;
    if ( !frameSprite )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
  counterLabel = (UnityEngine_Object_o *)this->fields.counterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(counterLabel, 0LL, 0LL) )
  {
    frameSprite = ItemType__GetCountableString(type, 0LL);
    v43 = this->fields.counterLabel;
    if ( (count & 0x80000000) != 0 )
    {
      v27 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !v43 )
        goto LABEL_61;
    }
    else
    {
      v44 = (Il2CppObject *)frameSprite;
      v48 = count;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v40, v41, v42);
      frameSprite = System_String__Format_61397948((System_String_o *)StringLiteral_25007/*"{0}{1:#,0}"*/, v44, v45, 0LL);
      v27 = frameSprite;
      if ( !v43 )
        goto LABEL_61;
    }
    UILabel__set_text(v43, v27, 0LL);
  }
  svtJoinIcon = (UnityEngine_Object_o *)this->fields.svtJoinIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtJoinIcon, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.svtJoinIcon;
    if ( !frameSprite )
      goto LABEL_61;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)frameSprite, 0LL);
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    frameSprite = (System_String_o *)this->fields.materialTdSprite;
    if ( !frameSprite )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)frameSprite, 0LL, 0LL);
  }
}


void __fastcall ItemIconComponent__SetItem_37830176(
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
    sub_1B64ACC(this, 0LL);
  type = itemEntity->fields.type;
  if ( type == 29 )
  {
    ImageId = ItemEntity__GetImageId(itemEntity, 0LL);
    ItemIconComponent__SetCoinImage(this, ImageId, itemEntity->fields.bgImageId, itemEntity->fields.type, count, v10);
  }
  else
  {
    ItemIconComponent__SetItemImage_37831356(
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
    sub_1B64ACC(counterLabel, *(_QWORD *)&condensedWidth);
  }
  v7 = LocalScaleX;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)counterLabel, 0LL);
  GameObjectExtensions__SetLocalScale_33378668(v8, v7 * 3.33, 3.33, 1.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__SetPointEvent(ItemIconComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t PointEventImageId; // w1
  const MethodInfo *v9; // x5

  if ( (byte_49FD9FE & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD9FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v7);
  }
  PointEventImageId = EventMaster__GetPointEventImageId((EventMaster_o *)Instance, eventId, 0LL);
  ItemIconComponent__SetItemImage_37831356(this, PointEventImageId, 0, -1, -1, v9);
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
  __int64 v9; // x1
  UILabel_o *Component_object; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  float PossessionLabelWidth; // s8
  float mWidth; // s9
  UnityEngine_Transform_o *v17; // x21
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t v22; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49FDA11 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UILabel___, *(_QWORD *)&possessionNum);
    sub_1B64870(&int_TypeInfo, v5);
    sub_1B64870(&StringLiteral_24838/*"{0:#,0}"*/, v6);
    byte_49FDA11 = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child )
    goto LABEL_14;
  Child = UnityEngine_Transform__GetChild(Child, 0, 0LL);
  if ( !Child )
    goto LABEL_14;
  Component_object = (UILabel_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Child,
                                    (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UILabel___);
  v22 = this->fields.possessionNum;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v11, v12, v13);
  Child = (UnityEngine_Transform_o *)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v14, 0LL);
  if ( !Component_object )
    goto LABEL_14;
  UILabel__set_text(Component_object, (System_String_o *)Child, 0LL);
  PossessionLabelWidth = this->fields.PossessionLabelWidth;
  mWidth = (float)Component_object->fields.mWidth;
  Child = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0LL);
  v17 = Child;
  if ( PossessionLabelWidth >= mWidth )
  {
    if ( !byte_49F9206 )
    {
      Child = (UnityEngine_Transform_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v9);
      byte_49F9206 = 1;
    }
    if ( v17 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64ACC(Child, v9);
  }
  if ( !Child )
    goto LABEL_14;
  y = 1.0;
  x = this->fields.PossessionLabelWidth / (float)Component_object->fields.mWidth;
  z = 1.0;
LABEL_13:
  UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&x, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UILabel_o *v13; // x20
  System_String_o *monitor; // x21
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FDA1B & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UILabel___, *(_QWORD *)&possessionNum);
    sub_1B64870(&int_TypeInfo, v5);
    sub_1B64870(&StringLiteral_24838/*"{0:#,0}"*/, v6);
    byte_49FDA1B = 1;
  }
  possessionRoot = this->fields.possessionRoot;
  this->fields.possessionNum = possessionNum;
  Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(possessionRoot, 0, 0LL);
  if ( !Child
    || (Child = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             Child,
                                             (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0LL )
  {
    sub_1B64ACC(Child, v9);
  }
  v13 = (UILabel_o *)Child;
  monitor = (System_String_o *)Child[17].monitor;
  v18 = this->fields.possessionNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v10, v11, v12);
  v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v15, 0LL);
  v17 = System_String__Format(monitor, v16, 0LL);
  UILabel__set_text(v13, v17, 0LL);
}


void __fastcall ItemIconComponent__SetPossessionRoot(ItemIconComponent_o *this, float y, const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FDA1A & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FDA1A = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(possessionRoot, 0LL, 0LL) )
  {
    v7 = this->fields.possessionRoot;
    if ( !v7 )
      sub_1B64ACC(0LL, v6);
    gameObject = UnityEngine_GameObject__get_gameObject(v7, 0LL);
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
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_49FDA19 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, isActive);
    byte_49FDA19 = 1;
  }
  possessionTitleLabel = (UnityEngine_Object_o *)this->fields.possessionTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(possessionTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.possessionTitleLabel;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B64ACC(gameObject, v6);
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
    sub_1B64ACC(this, 0LL);
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
  ItemIconComponent__SetItemImage_37831356(this, v8, bgImageId, type, count, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v22; // x3
  AssistEntity_o *CurrentLevelEntity; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  AssistEntity_o *v27; // x20
  UISprite_o *iconSprite; // x19
  ItemIconComponent_c *v29; // x0
  int v30; // w9
  System_String_o *ASSIST_SPRITE_NAME; // x20
  Il2CppObject *v32; // x0
  System_String_o *v33; // x20
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FD9FD & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&purchaseType);
    sub_1B64870(&Method_DataManager_GetMasterData_AssistMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, v12);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13);
    sub_1B64870(&int_TypeInfo, v14);
    sub_1B64870(&ItemIconComponent_TypeInfo, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FD9FD = 1;
  }
  if ( imageId >= 1 )
  {
LABEL_4:
    v17 = this;
    v18 = imageId;
LABEL_5:
    ItemIconComponent__SetItemImage_37831356(v17, v18, 0, -1, -1, v5);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
    {
LABEL_28:
      sub_1B64ACC(Instance, v20);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               targetId,
               (const MethodInfo_30D6180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    if ( Entity )
      ItemIconComponent__SetItem_37830176(this, (ItemEntity_o *)Entity, 0, v22);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_28;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_AssistMaster___);
        if ( !Instance )
          goto LABEL_28;
        CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, targetId, 0LL);
        if ( CurrentLevelEntity )
        {
          v27 = CurrentLevelEntity;
          iconSprite = this->fields.iconSprite;
          v29 = ItemIconComponent_TypeInfo;
          if ( !ItemIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ItemIconComponent_TypeInfo);
            v29 = ItemIconComponent_TypeInfo;
          }
          v30 = v27->fields.imageId;
          ASSIST_SPRITE_NAME = v29->static_fields->ASSIST_SPRITE_NAME;
          v34 = v30;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v24, v25, v26);
          v33 = System_String__Format(ASSIST_SPRITE_NAME, v32, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetBoostRequestIcon(iconSprite, v33, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t RaidEventImageId; // w1
  const MethodInfo *v9; // x5

  if ( (byte_49FD9FF & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FD9FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v7);
  }
  RaidEventImageId = EventMaster__GetRaidEventImageId((EventMaster_o *)Instance, eventId, 0LL);
  ItemIconComponent__SetItemImage_37831356(this, RaidEventImageId, 0, -1, -1, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__ShowPossession(
        ItemIconComponent_o *this,
        bool showPossession,
        const MethodInfo *method)
{
  UnityEngine_Object_o *possessionRoot; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  float v8; // s0
  float v9; // s3
  float v10; // s1
  float v11; // s2

  if ( (byte_49FDA10 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, showPossession);
    byte_49FDA10 = 1;
  }
  possessionRoot = (UnityEngine_Object_o *)this->fields.possessionRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(possessionRoot, 0LL, 0LL) )
  {
    if ( this->fields.possessionNum )
    {
      v7 = this->fields.possessionRoot;
      if ( !v7 )
        sub_1B64ACC(0LL, v6);
      UnityEngine_GameObject__SetActive(v7, showPossession, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__closeItemDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_49FDA15 & 1) == 0 )
  {
    sub_1B64870(&Method_ItemIconComponent_closeItemDetail__, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FDA15 = 1;
  }
  v5 = Method_ItemIconComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_ItemIconComponent_closeItemDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64888(Method_ItemIconComponent_closeItemDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v8);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
  ActionExtensions__Call(this->fields.detailCloseCallBack, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemIconComponent__closeSvtDetail(ItemIconComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49FDA16 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49FDA16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v5);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, this->fields.detailCloseCallBack, 0LL);
}


int32_t __fastcall ItemIconComponent__getUserItemNum(
        ItemIconComponent_o *this,
        int64_t userId,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FDA13 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserItemMaster___, userId);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FDA13 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, userId, objectId, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.num;
LABEL_9:
    sub_1B64ACC(Instance, v8);
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

  if ( (byte_49FDA0F & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, isSetActive);
    byte_49FDA0F = 1;
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    if ( isSetActive )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.frameSprite;
      if ( !gameObject )
        goto LABEL_20;
      UISprite__set_spriteName((UISprite_o *)gameObject, frameName, 0LL);
      iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_20:
        sub_1B64ACC(gameObject, v8);
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
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FDA0E & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FDA0E = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_1B64ACC(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
  }
}


void __fastcall ItemIconComponent__setLocalScaleIconSprite(
        ItemIconComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49FDA0D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FDA0D = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.iconSprite;
    if ( !v7 )
      sub_1B64ACC(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    GameObjectExtensions__SetLocalScale_33378504(gameObject, scale, 0LL);
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
    sub_1B64ACC(typeSprite, method);
  }
  v10.fields.x = v7;
  v10.fields.y = y;
  v10.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)typeSprite, v10, 0LL);
}