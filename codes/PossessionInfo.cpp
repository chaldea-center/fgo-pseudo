void PossessionInfo___ctor(PossessionInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void PossessionInfo__Awake(PossessionInfo_o *this, const MethodInfo *method)
{
  ;
}


void PossessionInfo__OnClickIcon(PossessionInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  CommonUI_o *Instance; // x0
  bool v5; // w0
  _QWORD *v6; // x8
  bool v7; // w19
  System_Reflection_MethodBase_o *v8; // x0
  UserServantCollectionEntity_o *v9; // x19
  CommonUI_o *v10; // x20
  PossessionInfo___c_c *v11; // x8
  ServantStatusDialog_EndDelegate_o *_9__11_0; // x21
  Il2CppObject *v13; // x22
  struct PossessionInfo___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  _QWORD *v17; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3F452 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_PossessionInfo_OnClickIcon__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_PossessionInfo___c__OnClickIcon_b__11_0__);
    sub_1C37058(&PossessionInfo___c_TypeInfo);
    byte_4C3F452 = 1;
  }
  entity = 0;
  if ( this->fields.isServantHaving )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (CommonUI_o *)NetworkManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_29;
    v5 = UserServantCollectionMaster__TryGetEntity(
           (UserServantCollectionMaster_o *)Master_object,
           &entity,
           (int64_t)Instance->fields.connectMark->fields.tipsBase,
           this->fields.servantId,
           0);
    v6 = Method_PossessionInfo_OnClickIcon__;
    v7 = v5;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C37070(Method_PossessionInfo_OnClickIcon__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
    if ( v7 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = entity;
      v10 = Instance;
      v11 = PossessionInfo___c_TypeInfo;
      if ( !PossessionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PossessionInfo___c_TypeInfo);
        v11 = PossessionInfo___c_TypeInfo;
      }
      _9__11_0 = v11->static_fields->__9__11_0;
      if ( !_9__11_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = PossessionInfo___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__11_0 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(_9__11_0, v13, Method_PossessionInfo___c__OnClickIcon_b__11_0__, 0);
        static_fields = PossessionInfo___c_TypeInfo->static_fields;
        static_fields->__9__11_0 = _9__11_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v15, v16);
      }
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_31219916(v10, 37, v9, _9__11_0, 0);
        return;
      }
LABEL_29:
      sub_1C372B4(Instance);
    }
  }
  else
  {
    v17 = Method_PossessionInfo_OnClickIcon__;
    if ( (*((_BYTE *)Method_PossessionInfo_OnClickIcon__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C37070(Method_PossessionInfo_OnClickIcon__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v17, v17[4]);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
}


void PossessionInfo__SetInfo(PossessionInfo_o *this, int32_t svtId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  Il2CppObject *v6; // x20
  void *servantFaceIcon; // x0
  int32_t v8; // w23
  IconLabelInfo_o *v9; // x22
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x22
  int32_t num; // w23
  UILabel_o *coinNumLabel; // x22
  System_String_o *v14; // x24
  Il2CppObject *NumberFormat; // x0
  UISprite_o *coinIcon; // x21
  int32_t ImageId; // w22
  int32_t ServantHavingCount; // w0
  UILabel_o *possessionNumLabel; // x21
  int32_t v20; // w22
  bool IsServantHaving; // w23
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t MaxTreasureDeviceLevel; // w0
  UILabel_o *treasureDeviceLevelLabel; // x20
  int32_t v27; // w21
  System_String_o *v28; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *v35; // x0
  UISprite_o *summonedSprite; // x20
  _BOOL4 v37; // w21
  __int64 v38; // x19
  __int64 v39; // x22
  System_String_o *v40; // x1
  int32_t v41; // [xsp+54h] [xbp-4Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4C3F451 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&IconLabelInfo_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_8617/*"MAX_NP_LEVEL"*/);
    sub_1C37058(&StringLiteral_8818/*"MULTIPLE_INFO"*/);
    sub_1C37058(&StringLiteral_20418/*"img_icon_summoned"*/);
    sub_1C37058(&StringLiteral_10405/*"POSSESSION_NUM"*/);
    sub_1C37058(&StringLiteral_20417/*"img_icon_not_summoned"*/);
    sub_1C37058(&StringLiteral_11844/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/);
    byte_4C3F451 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  servantFaceIcon = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !servantFaceIcon )
    goto LABEL_49;
  servantFaceIcon = (void *)UserServantCollectionMaster__IsGet(
                              (UserServantCollectionMaster_o *)servantFaceIcon,
                              svtId,
                              0);
  this->fields.isServantHaving = (unsigned __int8)servantFaceIcon & 1;
  this->fields.servantId = svtId;
  if ( !Master_object )
    goto LABEL_49;
  servantFaceIcon = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      svtId,
                      (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !servantFaceIcon )
    goto LABEL_49;
  v8 = *((_DWORD *)servantFaceIcon + 52);
  v9 = (IconLabelInfo_o *)sub_1C372A4(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_49;
  IconLabelInfo__Set_40917868(v9, 57, v8, 0, 0, 0, 0, 0, 0, 0);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_49;
  ServantFaceIconComponent__Set_41006624(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    svtId,
    0,
    -1,
    0,
    v9,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  servantFaceIcon = this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, !this->fields.isServantHaving, 0);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ItemMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  servantFaceIcon = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    servantFaceIcon = NetworkManager_TypeInfo;
  }
  if ( !v11 )
    goto LABEL_49;
  servantFaceIcon = (void *)UserSvtCoinMaster__TryGetEntity(
                              (UserSvtCoinMaster_o *)v11,
                              &entity,
                              *(_QWORD *)(*((_QWORD *)servantFaceIcon + 23) + 64LL),
                              this->fields.servantId,
                              0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_49;
    num = entity->fields.num;
  }
  else
  {
    num = 0;
  }
  coinNumLabel = this->fields.coinNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8818/*"MULTIPLE_INFO"*/, 0);
  NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(num, 0);
  servantFaceIcon = System_String__Format(v14, NumberFormat, 0);
  if ( !coinNumLabel )
    goto LABEL_49;
  UILabel__set_text(coinNumLabel, (System_String_o *)servantFaceIcon, 0);
  if ( !v10 )
    goto LABEL_49;
  servantFaceIcon = ItemMaster__GetServantCoinItemEntity((ItemMaster_o *)v10, this->fields.servantId, 0);
  if ( !servantFaceIcon )
    goto LABEL_49;
  coinIcon = this->fields.coinIcon;
  ImageId = ItemEntity__GetImageId((ItemEntity_o *)servantFaceIcon, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  servantFaceIcon = (void *)AtlasManager__SetCoin(coinIcon, ImageId, 0);
  if ( !v6 )
LABEL_49:
    sub_1C372B4(servantFaceIcon);
  ServantHavingCount = UserServantMaster__GetServantHavingCount((UserServantMaster_o *)v6, this->fields.servantId, 0, 0);
  possessionNumLabel = this->fields.possessionNumLabel;
  v20 = ServantHavingCount;
  IsServantHaving = UserServantMaster__IsServantHaving((UserServantMaster_o *)v6, this->fields.servantId, 0, 0);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( IsServantHaving )
    {
LABEL_32:
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10405/*"POSSESSION_NUM"*/, 0);
      v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v20, 0);
      servantFaceIcon = System_String__Format(v22, v23, 0);
      goto LABEL_35;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( IsServantHaving )
      goto LABEL_32;
  }
  servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11844/*"SERVANT_SORT_FILTER_SERVANT_NOT_HAVE"*/, 0);
LABEL_35:
  if ( !possessionNumLabel )
    goto LABEL_49;
  UILabel__set_text(possessionNumLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = this->fields.possessionNumLabel;
  if ( !servantFaceIcon )
    goto LABEL_49;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0);
  servantFaceIcon = this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  servantFaceIcon = (void *)UserServantMaster__IsServantHaving((UserServantMaster_o *)v6, this->fields.servantId, 0, 0);
  if ( !gameObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0);
  MaxTreasureDeviceLevel = UserServantMaster__GetMaxTreasureDeviceLevel(
                             (UserServantMaster_o *)v6,
                             this->fields.servantId,
                             0);
  treasureDeviceLevelLabel = this->fields.treasureDeviceLevelLabel;
  v27 = MaxTreasureDeviceLevel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8617/*"MAX_NP_LEVEL"*/, 0);
  v41 = v27;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v29, v30, v31, v32, v33, v34);
  servantFaceIcon = System_String__Format(v28, v35, 0);
  if ( !treasureDeviceLevelLabel )
    goto LABEL_49;
  UILabel__set_text(treasureDeviceLevelLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = this->fields.treasureDeviceLevelLabel;
  if ( !servantFaceIcon )
    goto LABEL_49;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)servantFaceIcon, 0);
  summonedSprite = this->fields.summonedSprite;
  v37 = this->fields.isServantHaving;
  v38 = StringLiteral_20417/*"img_icon_not_summoned"*/;
  v39 = StringLiteral_20418/*"img_icon_summoned"*/;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v37 )
    v40 = (System_String_o *)v39;
  else
    v40 = (System_String_o *)v38;
  AtlasManager__SetEventSprite(summonedSprite, v40, 0);
}


void PossessionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3F453 & 1) == 0 )
  {
    sub_1C37058(&PossessionInfo___c_TypeInfo);
    byte_4C3F453 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(PossessionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PossessionInfo___c_TypeInfo->static_fields->__9 = (struct PossessionInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)PossessionInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PossessionInfo___c___ctor(PossessionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PossessionInfo___c___OnClickIcon_b__11_0(PossessionInfo___c_o *this, bool _, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3F454 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3F454 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}